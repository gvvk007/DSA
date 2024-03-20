/*
Move all negative elements to one side of the array
Given an array arr and the size of the array as n consisting of positive and negative integers, move all the negative elements to the end of the array without changing the order of positive element and negative element.
Note: You don't have to return any array, you have to make changes in the input array itself.

Example 1.
Input: arr = [1, -2, -4, 5, 0]
Output: [1, 5, 0, -2, -4]

Example 2.
Input: arr = [1, -1, 3, 2, -7, -5, 11, 6]
Output: [1, 3, 2, 11, 6, -1, -7, -5]

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a[]={1,-2,-4,5,0};
    int n=sizeof(a)/sizeof(a[0]);
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            if(p<i){
                int temp=a[i];  
                for(int j=i;j>p;j--)
                    a[j]=a[j-1];
                a[p]=temp;
            }
            p++;
        }
    }

    for(auto i:a){
        cout<<i<<' ';
    }
    
    return 0;   
}