#include <iostream>
using namespace std;

void count_and_add(int& num, int& sum)
{
    int n;
    sum = 0;
    num = 0;
    while (cin >> n) {
        sum += n;
        ++num;
    }
}
