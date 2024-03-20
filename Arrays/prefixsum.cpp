//Subarray sum's difference should be equal to target

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6,7};
    int n=7;
    int tar=11;
    int ps[n];
    ps[0]=a[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+a[i];
    }
    int j=1;
    for(auto i:ps)
        cout<<i<<' ';
    cout<<endl;
    for(int i=0;i<n;i++){
        if(ps[j]-ps[i]==tar){
            cout<<i<<' '<<j;
            break;
        }
        j++;
    }
    
    return 0;
}
