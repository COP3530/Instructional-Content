<br>

# Suffix count 

<br>

### Problem Statement  
In this problem, you will write a function that returns the count of a string’s suffix in a given string, `S`. A suffix is a combination of one or more symbols appended at the end of the string. You will be given the length, `L` of the suffix as a parameter to the function.  

### Constraints
- `L` > 0
- `S` does not contain new line characters
- Length (`S`) > 0

### Sample Input 
> `et tu, brute`  
`1`

### Sample Output
> `2`

### Explanation  
- **Input**: Line 1 denotes the string with no newline characters and Line 2 denotes the length, `L` of the suffix
- **Output**: The suffix is ‘e’ and ‘e’ is present twice in string S, “et tu, brute”. Therefore, the count will be 2. 

### Problem Attributes
- Author: Amanpreet Kapoor
- Difficulty: Easy (15-29 minutes)
- Date Created: 01/10/2022
- Last Modified: 01/10/2022

<br>

## Submission instructions

 Code your solution in `src/suffix_count.h` and upload the `suffix_count.h` file on Canvas.

<br>

## Unit test instructions

To run **unit tests**, open terminal and go to the `suffix_count` directory. At this directory, run the following command:  

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

This will show you which tests you pass. We encourage you to build your own tests.

<br>

## IO test instructions

To run **IO tests**, open terminal and go to the `suffix_count` directory. At this directory, run the following command:  

`g++ -std=c++14 -Werror -Wuninitialized -o main test-io/main.cpp && ./main < test-io/input-files/1.txt > test-io/output-files/1.txt && diff -w test-io/expected-output-files/1.txt test-io/output-files/1.txt`

This will show you if you pass `test 1`. In general, to check if you pass `test n`, replace `1.txt` with `n.txt`. We encourage you to build your own IO tests.

