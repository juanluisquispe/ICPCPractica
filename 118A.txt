#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    string word;
    string check="AaEeIiOoUuYy";
    string output="";
    cin>>word;
    for(int i=0;i<word.length();i++){
        if(check.find(word[i])==std::string::npos){
            output+=".";
            output+=tolower(word[i]);
        }
    }
    cout<<output;
    return 0;
}