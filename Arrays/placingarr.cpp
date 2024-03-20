#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6,7};
    int k;
    cin>>k;
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<k;i++){
        int temp=a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }

    for(auto i:a){
        cout<<i<<' ';
    }
    
    return 0;   
}

