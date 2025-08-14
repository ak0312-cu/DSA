#include<bits/stdc++.h>
using namespace std;

bool pallindrome(string str, int start, int end){
    if(start >= end) return true;

    if(str[start] == str[end]){
        pallindrome(str, start+1, end-1);
        return true;
    }
    return false;
}

int main(){
    string str;
    cin >> str;
    
    int n = str.length(), start = 0, end = n-1;

    if(pallindrome(str, start, end)){
        cout << "Pallindrome";
    }

    else{
        cout << "Not Pallindrome";
    }
    
}