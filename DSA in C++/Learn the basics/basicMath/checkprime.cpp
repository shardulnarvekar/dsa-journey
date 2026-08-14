#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPrime(int n){
        vector<int> v;
        for(int i=1; i*i<=n; i++){
            if(i*i==n){
                v.push_back(i);
            }
            else if(n%i==0){
                int j;
                j=n/i;
                v.push_back(i);
                v.push_back(j);
            }
        }
        std::sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
            cout<<endl;
        }
        if(v.size()==2){
            return true;
        }
        else{
            return false;
        }
        
    
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.isPrime(x);
}
