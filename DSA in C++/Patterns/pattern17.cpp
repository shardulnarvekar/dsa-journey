#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern17(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1-i; j++){
                cout<<" ";
            }
            char c='A';
            for(int k=0; k<=i; k++){
                cout<<c;
                c++;
            }
            c--;
            for(int l=0; l<i; l++){
                c--;
                cout<<c;
            }
            cout<<endl;
        }
    }

};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern17(x);
}

//took time, but solved it myselffffff
//cleannnn