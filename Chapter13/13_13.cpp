/*************************************************************************
	> File Name: 13_13.cpp
	> Author: Trytotry
	> Mail: 
	> Created Time: Tue 29 Nov 2016 07:17:35 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
class X{
    public:
    X(){ cout<<"constructor X()"<<endl; }
    X(const X&){ cout<<"copy constructor X()"<<endl; }
    X& operator=(const X &rhs){ cout<<"Copy_Assignment Operator"<<endl;
                                return *this;
                              }
    ~X(){ cout<<"Destructor"<<endl; }
};

void f1(X x)
{
    
}

void f2(X &x)
{
    
}

int main(int argc, char **argv)
{
    cout<<"local variable"<<endl;
    X x;
    X x1;
    X x2;
    X x3;
    X x4;
    X x5;
    X x6;
    X x7;
    X x8;
    cout<<endl;

    cout<<"non_reference delivery: "<< endl;
    f1(x);
    cout<<endl;

    cout<<"reference delivery: "<<endl;
    f2(x);
    cout<<endl;

    cout<<"dynamic allocate: "<<endl;
    X *px = new X;
    cout<<endl;

    cout<<" added to a container: "<<endl;
    vector<X> vx;
    cout<<"what happens"<<endl;
    vx.push_back(x);
    vx.push_back(x1);
    vx.push_back(x2);
    vx.push_back(x3);
    vx.push_back(x4);
    vx.push_back(x5);
    vx.push_back(x6);
    vx.push_back(x7);
    vx.push_back(x8);
    //I know it ,it's due to the algorithm of vector.
    cout<<endl;

    cout<<" release the dynamic_allocated object: "<<endl;
    delete px;
    cout<<endl;

    //you should be careful with it here 
    cout<<"initialize and assign indirectly; "<<endl;
    X y = x;//what happened
    y = x;
    cout<<endl;

    cout<<"program is over"<<endl;
    return 0;
}
