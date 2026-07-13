//if else
//make decison based of certain condition, 
//If the test condition in the if statement is true, a block of code inside the if block will be executed.
//If the test condition is false, the code inside the else block (if present) will be executed.


#include<iostream>
using namespace std;
class solution{
    public:
    void grade(int x){
        if(x>=90){
            cout<<"Grade A";
        }
        else if(x>=70){
            cout<<"Grade B";
        }
        else if(x>=50){
            cout<<"Grade C";
        }
        else if(x>=35){
            cout<<"Grade D";
        }
        else {
            cout<<"Fail";
        }
    };
};
int main(){
    solution sol;
    int x;
    cin>>x;
    sol.grade(x);
}
