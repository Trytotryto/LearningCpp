/*************************************************************************
	> File Name: 10_14.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 21 Nov 2016 09:08:29 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    auto sum = [] (int a, int b) { return a+b; };
    cout << sum(1,1)<<endl;
    return 0;
}
