#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    long long n,m,a,s,l,w;
    cin >> n >> m >> a;
    if(n%a==0)
        l=n/a;
    else
        l=n/a+1;
    if(m%a==0)
        w=m/a;
    else
        w=m/a+1;
    s=l*w;
    cout<<s;
    return 0;
}