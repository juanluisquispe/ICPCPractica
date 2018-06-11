#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    string word;
    int counter=0;
    cin>>word;
    for (int i = 1; i < word.length(); ++i) {
        if(isupper(word[i]))counter++;
    }
    if (counter==word.length()-1){
        for (int i = 0; i < word.length(); ++i) {
            if (islower(word[i])){
                word[i]=toupper(word[i]);
            } else word[i]=tolower(word[i]);
        }
    }
    cout<<word;
    return 0;
}