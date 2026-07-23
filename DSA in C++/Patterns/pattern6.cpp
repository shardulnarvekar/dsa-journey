#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern6(int n){
        for(int i=n; i>0; i--){
            for(int j=1; j<=i; j++){
                cout<<j;
            };
            cout<<endl;
        };
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    sol.pattern6(n);
}

// we use i in the j loop to tell how many "*" to print in that specific row.