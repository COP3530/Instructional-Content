<br>

## Submission instructions

 Code your solution in `src/suffix_count.h` and upload the `suffix_count.h` file on Canvas.

<br>

## Unit test instructions

To run **unit tests**, open terminal and go to the `suffix_count` directory. At this directory, run the following command:  

<br>

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

<br>

This will show you which tests you pass. We encourage you to build your own tests.

<br>

## IO test instructions

To run **IO tests**, open terminal and go to the `suffix_count` directory. At this directory, run the following command:  

<br>

`g++ -std=c++14 -Werror -Wuninitialized -o main test-io/main.cpp && ./main < test-io/input-files/1.txt > test-io/output-files/1.txt && diff -w test-io/expected-output-files/1.txt test-io/output-files/1.txt`

<br>

This will show you if you pass `test 1`. In general, to check if you pass `test n`, replace `1.txt` with `n.txt`. We encourage you to build your own IO tests.

