#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern15(int n){
        for(int i=0; i<n; i++){
            char x='A';
        for(int j=0; j<n-i; j++){
            cout<<x;
            x++;
        }
        cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern15(x);
}

//solved myself