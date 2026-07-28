#include<iostream>
using namespace std;

class Solution{
    public:
    char m ='A';
    void pattern16(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<m;
            }
            m++;
            cout<<endl;
            
        }

    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern16(x);
}
