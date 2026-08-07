#include<iostream>
#include<algorithm>
using namespace std;

class Solution1{
    public:
    int GCD(int n1, int n2){
        int gcd=1;
        for(int i=1; i<=min(n1,n2); i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        cout<<gcd;
        return gcd;
    }
};

//solution 2 is better than 1 because, we start from the highest number and count down, it takes fewer iterations mathematically thus this is better. note: where we have the return statement, its inside the for loop, inside the if state, we return the value immediately when we find it, because we are starting from the top.

class Solution2{
    public:
    int GCD(int n1, int n2){
        int gcd=min(n1,n2);
        for(int i=min(n1,n2); i>0; i--){
            if(n1%i==0 && n2%i==0){
                gcd=i;
                cout<<gcd;
                return gcd;
            }
        }
    }
};
//Euclidean Algorithm mean keep on subtracting the smaller number from the larger number, until one number becomes zero, there other number is the gcd
class Solution3{
    public:
    int GCD(int n1, int n2){
        int gcd;
        while(n1>0 && n2>0){
            gcd=max(n1,n2)-min(n1,n2); //note the number is getting stored in the max
            if(n1>n2){
                n1=gcd;
            }
            else{
                n2=gcd;
            }
            //dont cout gcd, it will be zero, as we are performing max-min always, so either n1 or n2 will have the Greatest Common Divisor we have to print
        }
        if(n1>n2){
            cout<<n1;
            return n1;
        }
        else{
            cout<<n2;
            return n2;
        }
    }
};

int main(){
    Solution1 sol1;
    Solution2 sol2;
    Solution3 sol3;
    int n1;
    int n2;
    cin>>n1>>n2;
    // sol1.GCD(n1,n2);
    // sol2.GCD(n1,n2);
    sol3.GCD(n1,n2);
}