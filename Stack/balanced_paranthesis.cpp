#include<bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

/*
Input:
((a+b)*(c/d))
(((())))
)())
*/ 
bool paranthesis(string s){
    stack<char> st;
    int n=s.size();
    int i;
    for(i=0;i<n;i++){
        if(s[i]=='(')
            st.push(s[i]);
        if(s[i]==')'){
            if(!st.empty() )
                st.pop();
            else
                return false;
        }
    }
    if(st.empty())
        return true;
    return false;
}

/*
Z={y+[x/(a+b)/2]}
*/

bool paranthesis1(string s){
    // char a[]={'{','[','('};
    // char b[]={'}',']',')'};
    stack<char> st;
    int n=s.size();
    int i;
    for(i=0;i<n;i++){
        if(st.empty() && ( s[i]==')' || s[i]=='}' || s[i]==']' ))
            return false;
        
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
        
        if(!s.empty() && ( s[i]==')' || s[i]=='}' || s[i]==']' )){
            if(st.top()=='(' && s[i]==')')
                st.pop();
            else if(st.top()=='{' && s[i]=='}')
                st.pop();
            else if(st.top()=='[' && s[i]==']')
                st.pop();
            else
                return false;
        }
    }

    if(st.empty())
        return true;
    return false;
}

int main(){
    string s;
    cin>>s;
    cout<<paranthesis1(s)<<endl;
    
    return 0;

}