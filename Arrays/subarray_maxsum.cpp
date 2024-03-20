#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//BRUTE FORCE METHOD O(n^3)
int subarraysum(int a[],int n){
    int ms=0;
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int ss=0;
            for (int k=i; k<=j; k++){
                ss+=a[k];
            }
            ms=max(ms,ss);
               
        }
    }
    return ms;

}

//Prefix Sum Method O(N^2)
int prefixsum(int a[],int n){
    int ps[10]={0};
    ps[0]=a[0];
    for (int i = 1; i < n; i++){
        ps[i]=ps[i-1]+a[i];
    }
    int maxsum=-1;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int subsum=i>0?ps[j]-ps[i-1]:ps[j];
            maxsum=max(maxsum,subsum);    
        }
    }
    return maxsum;
}

int kadanesalgo(int a[],int n){
    int cs=0;
    int ms=0;
    for (int i = 0; i < n; i++){
        cs+=a[i];
        if(cs<0)
            cs=0;
        ms=max(ms,cs);
    }
    return ms;
}

int main(){
    int a[]={1,2,-4,8,7,-3,9,-5};
    // cout<<prefixsum(a,8);
    // cout<<subarraysum(a,8);
    cout<<kadanesalgo(a,8)<<endl;
    
    return 0;   
}

