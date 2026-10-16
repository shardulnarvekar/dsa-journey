// #include<iostream>
// using namespace std;

// class Solution{
//     public:
//     int reverseNumber(int n){
//         int reverse=0;
//         int y;
//         while(n>0){
//             y=n%10;
//             reverse=reverse*10;
//             reverse=reverse+y;
//             n=n/10;
//         }
//         cout<<reverse;
//         return reverse;
//     }
// };

// int main(){
//     Solution sol;
//     int x;
//     cin>>x;
//     sol.reverseNumber(x);
// }





#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int reverse(int x){
        int j;
        int rev = 0;
        while(x>0 || x<0){
            j=x%10;
            if(rev<INT_FAST32_MIN/10){
                return 0;
            }
            if(rev>INT_FAST32_MAX/10){
                return 0;
            }
            rev=rev*10;
            rev=rev+j;
            x=x/10;
        }
        cout<<rev;
        return rev;
    }

};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.reverse(x);
}










