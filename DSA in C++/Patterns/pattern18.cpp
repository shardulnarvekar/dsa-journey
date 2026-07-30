#include<iostream>
using namespace std;

class Solution{
    public:
    
    void pattern18(int n){
        for(int i=0; i<n; i++){
            char c='A';
            for(int j=0; j<n-i-1; j++){
                c++;
            }
            for(int k=0; k<=i; k++){
                cout<<c;
                cout<<" ";
                c++;
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern18(x);
}

//solved it myselfff again, but took timeeeee