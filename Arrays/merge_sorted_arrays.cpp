#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a, int m, vector<int>& b, int n) {
        if(m==1 && n==0){
            return;
        }
        if(m==0 && n>=1){
            a.swap(b);
            return;
        }

        int i=0,j=0;
        while(j<n){
            if(a[i]>=b[j]){
                a.insert(a.begin()+i,b[j]);
                j++;
                i=j-1;
            }
            i++;
        }
        
        
}


int main(){
    vector<int> a={1,2}; //{5,7,9,12,17,23,39,0,0,0};
    vector<int> b={3,4,5};
    merge(a,1,b,3);
    /*
    int m=1,n=1;
    a.resize(m);
    int i=0,j=0;
    while(j<n){
        if(a[i]>b[j]){
            a.insert(a.begin()+i,b[j]);
            j++;
            i=j-1;
        }
        i++;
    }
    */
    
    for(int i:a)
        cout<<i<<' ';
    return 0;
}


/*
13,18,21
int a[]={5,7,11,0,0,0};
    int b[]={1,5,4};
    int m=3,n=3;
    
    int s=m+n;
    int r[s];
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]>b[j]){
                r[k]=b[j];
                k++;
            }
            else{
                r[k]=a[i];
                k++;
                
            }
        }
    }
*/
