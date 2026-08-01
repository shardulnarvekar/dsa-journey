#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern21(int n){
        for(int i=0; i<n; i++){
            cout<<"*";
        }
        cout<<endl;
        for(int i=0; i<n-2; i++){
            cout<<"*";
            for(int j=0; j<n-2; j++){
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
        for(int i=0; i<n; i++){
            cout<<"*";
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern21(x);
}

//first tryyyyy, ez, no errors