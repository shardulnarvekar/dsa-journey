#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//     int sum=0;
//     int NnumbersSum(int N){
//         if(N==0){
//             return;
//         }
//         NnumbersSum(N-1);
//         sum=sum+N;
//     }
// };
// above method is wrong
// we cant do it this way, because we would be returning the sum multiple times, in every iteration. 

// There is one way, we can do it using the formula, that is n(n+1)/2, easiest method, no recursion, no for loop

// obiviously we can solve this using the for loop.

// or there is a complicated method given below.


class Solution{
    public:

    //lets say N=3, so if we write 3+f(2) where f(n) is sum of first N numbers

    int NnumbersSum(int N){
        if(N==0){
            return 0;//this is the stoping point, the function excepts a integer return value.
        }
        return N + NnumbersSum(N-1);
    }


    //below is the parameterized method of solving the quesition where we are taking 2 parameters
    //operations are happening in the parameters itself
    int print(int N, int sum){
        if(N<1){
            cout<<sum;
            return sum; //oooooooooo listen, this returns the sum to the previous function and not the main print function
            //Very very important.
        }
        return print(N-1,sum+N); //this is the right way, to propogate the return all the way back
        //in the above example the value is just being passed function to function
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    // sol.NnumbersSum(x);
    sol.print(x,0);
}


// Forget everything just understand that when there is recursion there are copies of functions which are created which are waiting to be executed remember 


