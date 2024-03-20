#include<iostream>
using namespace std;

//Fot a n length string or array there will be 2^n subsets

// FOR STRINGS OR CHAR
void gen_subsets(char* in, char* out,int i,int j){
    //Base case
    if(in[i]=='\0'){
        out[j]='\0';
        if(out[0]=='\0')
            cout<<"NULL";
        cout<<out<<endl;
        return;
    }

    //Recursive cases
    
    //Include Case
    out[j]=in[i];
    gen_subsets(in,out,i+1,j+1);

    //Not Include Case
    out[j]='\0';
    gen_subsets(in,out,i+1,j);
    

}

// FOR ARRAYS
void gen_subsets1(int* in, int* out,int n,int i,int j){
    //Base casek
    if(i==n){
        for(int i=0;i<j;i++)
            cout<<out[i]<<" ";
        cout<<endl;
        return;
    }

    //Recursive cases
    
    //Include Case
    out[j]=in[i];
    gen_subsets1(in,out,3,i+1,j+1);

    //Not Include Case
    out[j]='\0';
    gen_subsets1(in,out,3,i+1,j);
    

}

int main(){

    // FOR STRINGS
    char in[100],out[100];
    cin>>in;
    
    gen_subsets(in,out,0,0);
    
    // FOR ARRAYS
    // int out[100];
    // int in[]={1,2,3};
    // int size=3;
    // gen_subsets1(in,out,size,0,0);

    return 0;
}
