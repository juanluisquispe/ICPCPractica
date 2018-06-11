#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int num,counter=0;
    string op;
    cin>>num;
    for (int i = 0; i < num; ++i) {
        cin>>op;
        if(op.find('+')==std::string::npos)counter--;
        else counter++;
    }
    cout<<counter;
    return 0;
}