// While loops are particularly useful when you need to ensure that a block of code executes only when the condition is satisfied as it terminates as soon as that condition becomes false.


#include<iostream>
using namespace std;

class Solution{
    public:
    int Whileloop(int d){
        int sum=0;
        int count=0;
        int num=1;
        while(count<50){
            if(num%10==d){
                sum=sum+num;
                count++;
            };
            num++;
        };
        cout<<sum;  
        return sum;
        
    };

};

int main(){
    Solution sol;
    int d;
    cin>>d;
    sol.Whileloop(d);
}

