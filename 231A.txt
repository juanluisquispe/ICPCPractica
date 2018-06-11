#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int num,a,b,c,counter=0;
    cin>>num;
    for (int i = 0; i < num; ++i) {
        cin>>a>>b>>c;
        if (a+b+c>=2)counter++;
    }
    cout<<counter;
    return 0;
}