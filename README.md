# Understanding Data Compression - Shannon's Theory

This repository provides an in-depth explanation of Shannon's Information Theory, entropy, data compression, and the Shannon-Fano coding algorithm. It also includes an implementation of Huffman coding.

## Contents

- `Report_on_Data-compression.pdf`: A comprehensive report on data compression techniques, Shannon's Information Theory, entropy, and the Shannon-Fano coding algorithm.
- `hoffman_coding.cpp`: C++ implementation of the Huffman coding algorithm.

## Overview

### Shannon's Information Theory

Shannon's Information Theory is a mathematical framework for understanding the transmission, processing, and storage of information. Key concepts include entropy, which measures the uncertainty or randomness of a system, and data compression, which aims to reduce the size of data without losing essential information.

### Entropy

Entropy, in the context of information theory, quantifies the amount of uncertainty or randomness in a dataset. It is a crucial concept for data compression, as higher entropy indicates more information content and less redundancy.

### Data Compression

Data compression involves encoding information using fewer bits than the original representation. Two primary types of compression are lossless and lossy. This repository focuses on lossless compression, where the original data can be perfectly reconstructed from the compressed data.

### Shannon-Fano Coding Algorithm

The Shannon-Fano coding algorithm is a method for constructing a prefix code based on a set of symbols and their probabilities. It ensures that no code is a prefix of another, which helps in efficient and error-free data transmission.

### Huffman Coding Algorithm

Huffman coding is a widely used method for lossless data compression. It assigns variable-length codes to input characters based on their frequencies. Characters with higher frequencies get shorter codes, which helps in reducing the overall size of the compressed data.

## How to Run the Code

1. Clone this repository to your local machine.
2. Navigate to the repository directory.
3. Compile the C++ code using a C++ compiler, e.g., `g++ -o huffman hoffman_coding.cpp`.
4. Run the compiled code, e.g., `./huffman`.
5. Enter a message when prompted to see the Huffman codes for each character.

## Contact

- Name: Saaransh Sharma
- GitHub: saar4nsh
