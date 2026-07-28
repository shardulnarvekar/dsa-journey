#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern12(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            for(int j=0; j<=(2*n-1)-(2*i); j++){
                cout<<" ";
            }
            int b=i;
            for(int j=0; j<i; j++){
                cout<<b;
                b--;
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern12(x);
}

//solved by myself, took 3 days
