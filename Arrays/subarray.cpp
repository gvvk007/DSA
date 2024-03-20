/*
SUBARRAY:
    Small Continuous part of an Array.
    Total no. of Subarrays: n*(n+1)/2 .
    Example:
    Subarrays of {1,2,3,4,5} :
    {1},{1,2},{1,2,3},{1,2,3,4},{1,2,3,4,5},
    {2},{2,3},{2,3,4},{2,3,4,5},
    {3},{3,4},{3,4,5}
    {4},{4,5},
    {5} .

*/

#include <iostream>
using namespace std;

int main() {
    /*
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    */
    int a[]={1,2,-4,8,7,-3,9,-5}; //{1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            for (int k=i; k<=j; k++){
                cout<<a[k]<<' ';
            }
            cout<<endl;    
        }
        cout<<endl;
    }

    return 0;
}