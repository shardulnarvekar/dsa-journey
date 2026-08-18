//recursion occurs when a function calls itself, directly or indirectly.

//if there is no condition to stop the the recursive calls, the calls will run indefinitely until the stack runs out of memory 
//This is called Stack Overflow


// Whenever recursion calls are executed, they’re simultaneously stored in a recursion stack where they wait for the completion of the recursive function.

// But, when there is no base condition given for a particular recursive function, it gets called indefinitely which results in a Stack Overflow i.e, exceeding the memory limit of the recursion stack and hence the program terminates giving a Segmentation Fault error. 

// It is the condition that is written in a recursive function in order for it to get completed and not to run infinitely. After encountering the base condition, the function terminates and returns back to its parent function simultaneously.   


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void print(string s, int x, int j){
        if(j>x){
            return;
        }
        cout<<s;
        print(s,x,j+1);
    }

};

//understand this, the numbers are being printed while the function is being stacked, not while unstacking

int main(){
    Solution sol;
    int x;
    string s;
    cin>>x>>s;
    sol.print(s,x,1);
}