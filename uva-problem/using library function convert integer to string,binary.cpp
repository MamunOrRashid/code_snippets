#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int a=15;
    char ch[500];
    itoa(a,ch,10);
    puts(ch);
    return 0;
}

