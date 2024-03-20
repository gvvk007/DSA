#include <iostream>
using namespace std;

void Bubble_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int isswaped=1;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                isswaped=0;
            }
        }
        if(isswaped)
            break;
    }
}

void Selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){    
        int curr = a[i];
        int min_ind = i;
        for(int j=i; j<n; j++){
            if(a[j]<a[min_ind]){
                min_ind=j;
            }
        }
        swap(a[min_ind],a[i]);
    }
}

void Insertion_sort(int a[],int n){
    
   for(int i = 1; i < n; i++){
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 and a[prev]>curr){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=curr;   
   }
   
}

int partition(int a[],int s,int e){ 
    int pivot =a[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void Quick_sort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    Quick_sort(a,s,p-1);
    Quick_sort(a,p+1,e);

}

int main(){
    int a[]= {5,2,6,1,3}; //
    int n = 5;
    //Insertion_sort(a,n);
    //Selection_sort(a,n);
    Bubble_sort(a,n);
    //Quick_sort(a,0,5);
    
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
	return 0;
}