/*************************************************************************
	> File Name: 13_14.cpp
	> Author: Trytotry 
	> Mail: changjingteng@gmail.com
	> Created Time: Tue 29 Nov 2016 11:00:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class numbered{
    public:
        numbered(){ mysn = ++seq; }
        numbered(numbered &n){ mysn = ++seq; }
        int mysn;
    private:
        static int seq ;
};

int numbered::seq = 0;
void f( const numbered &s ) { cout << s.mysn <<endl; }

int main(int argc, char **argv)
{
    numbered a, b=a, c=b;
    f(a);
    f(b);
    f(c);
    return 0;
}
