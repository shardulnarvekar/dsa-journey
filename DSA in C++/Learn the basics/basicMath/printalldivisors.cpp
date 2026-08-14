// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> divisors(int n) {
//         vector<int> j;
//         for(int i=1; i<=n; i++){
//             if(n%i==0){
//                 j.push_back(i);
//             }
//         }
//         for(int i=0; i<j.size(); i++){
//             cout<<j[i];
//             cout<<endl;
//         }
//         return j;
//     }
// };
// int main(){
//     Solution sol;
//     int x;
//     cin>>x;
//     sol.divisors(x);

// }



#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> divisors(int n){
        vector<int> v;
        for(int i=1; i*i<=n; i++){
            if(i*i==n){
                v.push_back(i);
            }//here we are checking the last number, basically the square root of N, if it exists. 
            else if(n%i==0){
                int j;
                j=n/i;
                v.push_back(i);
                v.push_back(j);
            }//here we are using the property, which is i divides n, then n/i also divides n. and we are storing both the numbers
        }
        std::sort(v.begin(),v.end());//this the algorithm library we are using, standard way of sorting an array, we dont need to write std:: because we anyways call it in the bit/stdc++.h library
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
            cout<<endl;
        }
        return v;
        
    
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.divisors(x);
}
