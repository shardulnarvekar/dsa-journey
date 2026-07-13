//loops are used when we want to perform the same task multiple times, without duplicating the code. 

#include<iostream>
using namespace std;

class Solution{
public:
    int forLoop(int low, int high){
        int ans=0;
        for(int i=low; i<=high; i++){
            ans=ans+i;
        };
        cout<<ans;
        return ans;
    };
};


int main(){
    Solution sol;
    int low,high;
    cin>>low>>high;
    sol.forLoop(low, high);
};