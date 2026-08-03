#include<iostream>
using namespace std;

class Solution{
    public:
    
    void pattern22(int n){
        int c=n;
        for(int i=0; i<n; i++){
            for(int k=0; k<i; k++){
                
                cout<<c;
                cout<<" ";
                c--;
            }
            for(int j=0; j<2*n-1-2*i; j++){
                cout<<n-i;
                cout<<" ";
            }
            for(int k=0; k<i; k++){
                c++;
                cout<<c;
                cout<<" ";
            }
            cout<<endl;
        }
        for(int i=n-2; i>=0; i--){
            for(int k=0; k<i; k++){
                cout<<c;
                cout<<" ";
                c--;    
            }
            for(int j=0; j<2*n-1-2*i; j++){
                cout<<n-i;
                cout<<" ";
            }
            for(int k=0; k<i; k++){
                c++;
                cout<<c;
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
    sol.pattern22(x);
}

//did the top part of the pattern myslef, and 

// in the second loop, we did nothing and changed the condition and reversed the top loop, by storing n-2 in i and i>=0, i--;