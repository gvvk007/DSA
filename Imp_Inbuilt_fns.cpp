#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums(5);

    int min=*min_element(nums.begin(),nums.end()); //for finding min in vect or arr
    int max=*max_element(nums.begin(),nums.end()); //for finding max in vect or arr
    __gcd(min,max);
    
    return 0;
}