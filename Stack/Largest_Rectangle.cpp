#include <iostream>
#include <stack>
using namespace std;

int largestarea(int histo[], int n) { // 3,4,5,6,4,2,1
    stack < int > st;
    int maxA = 0;
    for (int i = 0; i <= n; i++) {
    while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
        int height = histo[st.top()];
        st.pop();
        int width;
        if (st.empty())
        width = i;
        else
        width = i - st.top() - 1;
        maxA = max(maxA, width * height);
    }
    st.push(i);
    }
    return maxA;
}

int main(){
    int a[]={3,4,5,6,4,3,1};
    int n=7;
    //cout<< largestarea(a, n)<<endl;
    stack<int> st;
    int maxArea=0;
    int l,r,h,w;
    for(int i=0;i<=n;i++){
        while(!st.empty() && (i==n || a[st.top()]>a[i] )){
            r=i; 
            h=a[st.top()]; 
            st.pop();
            st.empty() ? l=0 :l=st.top();
            if(a[l]==h || st.empty())
                w=r-l;
            else
                w=r-l-1;

            maxArea=max(maxArea,h*w);
        }
        st.push(i);
    }
    cout<<maxArea<<endl;
    return 0;

}

/*

      |
    | |
  | | | |
| | | | | |
| | | | | |
| | | | | | | 
3 4 5 6 4 3 1

max Area 18


is(st.top()>a[i])

st.pop()
ls=st.top()


6 - ls=2 rs=4
5 - ls=1 rs=4
4 - ls=1  rs=5

st={3,4,4,}

*/



