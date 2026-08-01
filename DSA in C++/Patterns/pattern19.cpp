#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern19(int n){
        patternhalf1(n);
        patternhalf2(n);
    }
    void patternhalf1(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                cout<<"*";
            }
                for(int k=0; k<i*2; k++){
                    cout<<" ";
                }
                for(int l=0; l<n-i; l++){
                        cout<<"*";
                    }
            
            cout<<endl;
        }
    }
    void patternhalf2(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<"*";
            }
            for(int k=0; k<n*2-2-2*i; k++){
                cout<<" ";
            }
            for(int l=0; l<=i; l++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern19(x);
}

//tuff question, solved it myself