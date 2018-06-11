#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int num,counter=0;
    string word;
    cin>>num>>word;
    for (int i = 1; i <num ; i++) {
        if(word[i]==word[i-1])counter++;
    }
    cout<<counter;
    return 0;
}