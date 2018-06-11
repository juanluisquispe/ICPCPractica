#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int n,k,num,numcheck,counter=0;
    cin >>n>>k;
    for(int i=0;i<n;i++){
        cin>>num;
        if (num==0){}
        else{
            if(i<k-1){counter++;}
            else if(i==k-1) {
                counter++;
                numcheck = num;
            }
            else if (i>=k&&num==numcheck){
                counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}
