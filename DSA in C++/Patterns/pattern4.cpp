#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern4(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<i;
            };
            cout<<endl;
        };
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    sol.pattern4(n);
}

// we use i in the j loop to tell how many "*" to print in that specific row.