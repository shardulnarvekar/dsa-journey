#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern13(int n){
        int j = 1;
        for(int i=0; i<n; i++){
            for(int k=0; k<=i; k++){
                cout<<j;
                j++;
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
    sol.pattern13(x);

}

//easyyyyyy, i solved