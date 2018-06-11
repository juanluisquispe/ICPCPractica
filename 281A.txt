#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    string word,output="";
    cin>>word;
    output+=toupper(word[0]);
    output+=word.erase(0,1);
    cout<<output;
    return 0;
}