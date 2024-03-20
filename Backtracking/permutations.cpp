#include<iostream>
using namespace std;

//Fot a n length string or array there will be n! Permutations

// FOR STRINGS OR CHAR
/*
abc
*/
void gen_permutations(string &in, int i,int n){
    //Base case
    if(i==n-1){
        cout<<in<<endl;
        return;
    }

    //Recursive cases

    for(int k=i;k<n;k++){
        //Swap Case
        swap(in[i],in[k]);
        gen_permutations(in,i+1,n);
        //Backtrack Case
        swap(in[i],in[k]);
    } 

}


int main(){

    // FOR STRINGS
    string in;
    cin>>in;
    int n=in.size();
    gen_permutations(in,0,n);

    return 0;
}
