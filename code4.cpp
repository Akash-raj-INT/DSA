#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int A[n];
    A[0]=2;
    
    for(int x:A)
    {
        cout<<x<<endl;
    }
    return 0;
}