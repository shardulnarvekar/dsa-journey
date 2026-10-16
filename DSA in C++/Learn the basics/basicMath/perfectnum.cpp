#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPerfect(int n){
        int c = 1;
        int sum=0;
        while(c<sqrt(n)){
            if(n%c==0){
                sum=sum+c;
                if((n/c)!=n){
                    sum=sum+(n/c);
                }
            }
        c++;
        }
        if(sum==n){
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
    sol.isPerfect(x);
}

//for perfect number, dont make this mistake, the additon does not involve the number itself.