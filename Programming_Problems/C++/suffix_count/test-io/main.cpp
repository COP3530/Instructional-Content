/*
	To check output (At the suffix_count directory):
		g++ -std=c++14 -Werror -Wuninitialized -o main test-io/main.cpp && ./main < test-io/input-files/1.txt > test-io/output-files/1.txt && diff -w test-io/expected-output-files/1.txt test-io/output-files/1.txt
*/

#include "../src/suffix_count.h"

int main()
{
    std::string s;
    std::getline (std::cin, s);
    int l;
    std::cin >> l;
    std::cout << suffixCount(s, l);
    return 0;
}
