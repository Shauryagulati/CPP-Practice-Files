#include<bits/stdc++.h>
using namespace std;

int addition(int n){
    if(n==0) return 0;
    else{
        return n + addition(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<addition(n);
}