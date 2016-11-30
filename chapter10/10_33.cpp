/*************************************************************************
	> File Name: 10_33.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 22 Nov 2016 09:49:35 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<iterator>
#include<algorithm>

using namespace std;
int main(int argc, char *argv[])
{
    ifstream in("1.txt");
    if(!in){
        cout << "打開輸入文件失敗！" << endl;
        exit(1);
    }

    ofstream out1("2.txt");
    if(!out1){
        cout << "打開輸出文件失敗！" << endl;
        exit(1);
    }

    ofstream out2("3.txt");
    if(!out2){
        cout << "打開輸出文件失敗！" << endl;
        exit(1);
    }

    istream_iterator<int> in_iter(in);
    istream_iterator<int> eof;
    ostream_iterator<int> out_iter1(out1, " ");
    ostream_iterator<int> out_iter2(out2, "\n");

    while (in_iter != eof){
        if (*in_iter & 1)
            *out_iter1++ = *in_iter;
        else
            *out_iter2++ = *in_iter;
        in_iter++;
    }

    return 0;
}
