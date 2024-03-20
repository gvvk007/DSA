#include <iostream>
using namespace std;

int main(){
	// int m,n;
	// cin>>m>>n;
    // int a[m][n];

    // for (int i = 0; i < m; i++){
    //     for (int j = 0; j < n; j++){
    //         cin>>a[i][j];
    //     }
    // }

    int a[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};
    int m=3, n=4;
    int rs = 0;
    int re = m-1;
    int cs = 0;
    int ce = n-1;

    while(rs<=re and cs<=ce){
        for (int i = cs; i <= ce; i++)
            cout<<a[rs][i]<<' ';

        rs++;

        for(int i = rs;i <= re;i++)
            cout<<a[i][ce]<<' ';
        
        ce--;

        for(int i = ce;i >= cs;i--)
            cout<<a[re][i]<<' ';
        
        re--;

        for(int i = re;i >= rs;i--)
            cout<<a[i][cs]<<' ';

        cs++;

    }
    cout<<endl;

    
	return 0;
}