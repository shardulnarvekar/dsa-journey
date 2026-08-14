// #include<iostream>
// #include<cmath>
// using namespace std;

// class Solution{
//     public:
//     bool armstrong(int n){
//         int k = n;
//         int l=0;
//         int m;
//         int sum=0;
//         while(n>0){
//             n%10;
//             n=n/10;
//             l++;
//         }
//         n = k;
//         while(n>0){
//             m=n%10;
//             sum=sum+std::pow(m,l);
//             n=n/10;
//         }
//         if(sum==k){
//             cout<<"true";
//             return true;
//         }
//         else{
//             cout<<"false";
//             return false;
//         }
//     }
// };

// int main(){
//     Solution sol;
//     int x;
//     cin>>x;
//     sol.armstrong(x);
// }



#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool armstrong(int n){
        int k = n;
        int l=0;
        int m;
        int sum=0;
        l=to_string(n).length();
        n = k;
        while(n>0){
            m=n%10;
            sum=sum+std::pow(m,l);
            n=n/10;
        }
        if(sum==k){
            cout<<"true";
            return true;
        }
        else{
            cout<<"false";
            return false;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.armstrong(x);
}