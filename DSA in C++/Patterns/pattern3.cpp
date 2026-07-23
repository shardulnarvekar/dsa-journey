#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern3(int n){
        for(int i=1; i<=n; i++){
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
    sol.pattern3(n);
}

// we use i in the j loop to tell how many "*" to print in that specific row.