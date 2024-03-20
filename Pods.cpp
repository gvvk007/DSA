#include<iostream>
using namespace std;
//n -> no of pods
//m no of conn

/*
3
2
1 2 
2 3
5
2 2 
1 2
2 1
2 3
1 1

**Function Description:**
Complete the function recoverDeadPods
recover DeadPods has the following parameters:
int n: the number of pods
int connections[m][2]: the connections between pods
int queries[q][2]: the queries
Returns
int[]: the answer to the queries
**Constraints:**
1 ≤n ≤ 10^3
0 ≤ m ≤ 10^3
1 ≤ q ≤ 2x103
1≤ connections[1][0], connections[i][1] ≤ n
1 ≤ queries[i][0] ≤ 2
1 ≤ queries[i][1]≤ n
There is at least 1 query of type 1.

*/


vector<int> func(int n,int m,int link[][2],int q,int queries[][2]){
    vector<int> c;
    for(int i=0;i<q;i++){
        for(int j=0;j<2;j++){
            if(queries[i][j]);
        }
    }
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int link[m][2];
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cin>>link[i][j];
        }
    }
    int q;
    cin>>q;
    int queries[q][2];
    for(int i=0;i<q;i++){
        for(int j=0;j<2;j++){
            cin>>queries[i][j];
        }
    }
    vector<int> res=func(n,m,link,q,queries);
    return 0;
}