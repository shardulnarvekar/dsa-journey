// Combine pattern 7,8

#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern7(int n){
        for(int k=0; k<n; k++){
        for(int i=0; i<n-k-1; i++){
            cout<<" ";
        }
        for(int j=0; j<(2*k)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
    void pattern8(int n){
        for(int i=0; i<n; i++){
            for(int j=0 ; j<i; j++){
                cout<<" ";
            }
            for(int j=0; j<(2*n-1)-2*i; j++){
                cout<<"*";
            }
            for(int j=0 ; j<i; j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern7(x);
    sol.pattern8(x);
}




/*
class Solution {
public:

    void pattern7(int n){
        for(int k=0; k<n; k++){
            for(int i=0; i<n-k-1; i++)
                cout<<" ";

            for(int j=0; j<(2*k)+1; j++)
                cout<<"*";

            cout<<endl;
        }
    }

    void pattern8(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++)
                cout<<" ";

            for(int j=0; j<(2*n)-1-2*i; j++)
                cout<<"*";

            cout<<endl;
        }
    }

    void pattern9(int n){
        pattern7(n);
        pattern8(n);
    }
};



Here we wrote the code according to, strivers requirement, passed the parameters again, 
*/