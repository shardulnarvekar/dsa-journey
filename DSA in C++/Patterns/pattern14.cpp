#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern14(char n){
        char x='A';
        for(int i=0; i<n; i++){
            char x='A';
            for(int j=0; j<=i; j++){
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
    sol.pattern14(x);
}

//did it myself