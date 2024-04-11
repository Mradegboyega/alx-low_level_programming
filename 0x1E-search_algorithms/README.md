# Search Algorithms

This repository contains implementations of various search algorithms in C.

## Table of Contents

- [General Information](#general-information)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Tasks](#tasks)
  - [Linear Search](#linear-search)
  - [Binary Search](#binary-search)
  - [Big O Notations](#big-o-notations)
  - [Jump Search](#jump-search)
  - [Interpolation Search](#interpolation-search)
  - [Exponential Search](#exponential-search)
  - [Advanced Binary Search](#advanced-binary-search)
  - [Jump Search in a Singly Linked List](#jump-search-in-a-singly-linked-list)
  - [Linear Search in a Skip List](#linear-search-in-a-skip-list)

## General Information

The C files in this repository contain implementations of various search algorithms, along with functions to calculate the time and space complexities (Big O Notations) of these algorithms.

## Files

- `0-linear.c`: Implementation of linear search algorithm.
- `1-binary.c`: Implementation of binary search algorithm.
- `2-O`: Answers to Big O Notations questions.
- `7-jump.c`: Implementation of jump search algorithm.
- `9-interpolation.c`: Implementation of interpolation search algorithm.
- `10-exponential.c`: Implementation of exponential search algorithm.
- `11-advanced_binary.c`: Implementation of advanced binary search algorithm.
- `12-jump_list.c`: Implementation of jump search in a singly linked list.
- `13-linear_skip.c`: Implementation of linear search in a skip list.
- `search_algos.h`: Header file containing function prototypes and data structure definitions.

## Compilation

To compile the C files, use the following command:

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <C_FILE> <MAIN_FILE> -o <OUTPUT_FILE>

