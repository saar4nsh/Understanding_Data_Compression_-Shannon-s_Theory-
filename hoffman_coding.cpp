#include <bits/stdc++.h>

using namespace std;

struct node
{
    char c;
    int freq;
    struct node *left;
    struct node *right;

    node( char chh , int data )
    {
        c = chh;
        freq = data;
        left=right=NULL;
    }
};


struct compare{

    bool operator()(node *m , node*n)
    {
        return (m->freq > n->freq);
    }
};

void printCodes(struct node* root, string st) 
{ 
  
    if (root == NULL)  
        return; 
  
    if (root->c != '$') 
        cout << root->c << " : " << st << endl; 
  
    printCodes(root->left, st + "0"); 
    printCodes(root->right, st + "1"); 
} 

void Huffmann_coding( vector<int> characters ,  map< char , int > mp  )
{
   struct node *l , *r , *top;

   priority_queue<node*, vector<node*>, compare> minHeap; 

   for (int i = 0; i < characters.size(); ++i) 
        minHeap.push(  new node( characters[i] , mp[characters[i]] )  );

    while (minHeap.size() != 1) { 
  
        l = minHeap.top(); 
        minHeap.pop(); 
  
        r = minHeap.top(); 
        minHeap.pop(); 

        top = new node('$', l->freq + r->freq); 
  
        top->left = l; 
        top->right = r; 
  
        minHeap.push(top); 
    }    
     printCodes(minHeap.top(), ""); 
 
}


int main()
{
    string s;
    cout << "Enter the message : ";
    cin >> s;

    vector<int> characters;
    map< char , int > mp;

    for(int i=0 ; i<s.size() ; i++)
    {
        if( s[i] == ' ' )
           continue;
        
        if( find(characters.begin() , characters.end(), s[i] ) == characters.end() )
        {
            characters.push_back( s[i] );
            mp[s[i]] = 1;
        }

        else{
            mp[s[i]]++;
        }
    }
    
    Huffmann_coding( characters , mp  );

}
