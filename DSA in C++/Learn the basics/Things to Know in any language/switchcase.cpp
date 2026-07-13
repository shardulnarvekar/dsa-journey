//swtich case is mostly used, when we have a single variable to compare with multiple distint values, more cleaner and structured code.
//The break statement is crucial; it ensures that the switch statement exits after the matching case is executed, preventing the execution of subsequent cases.
//The Default Case: The default case serves as a safety net. If none of the cases match the expression, the code inside the default block will execute.

#include<iostream>
using namespace std;

class Solution{
    public:
    void whichWeekDay(int day){
        switch(day){
            case 1:
            cout<<"Monday";
            break;
            case 2:
            cout<<"Tuesday";
            break;
            case 3:
            cout<<"Wednesday";
            break;
            case 4:
            cout<<"Thursday";
            break;
            case 5:
            cout<<"Friday";
            break;
            case 6:
            cout<<"Saturday";
            break;
            case 7:
            cout<<"Sunday";
            break;
            default:
            cout<<"Invalid";
        };
    };
};

int main(){
    Solution sol;
    int day;
    cout<<"Enter a number between 1-7: ";
    cin>>day;
    sol.whichWeekDay(day);
};