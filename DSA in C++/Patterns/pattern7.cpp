/*#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern7(int n){
        for(int k=0;k<n;k++){// This is self explainatory, it counts the no. of rows.
        for(int i=0; i<n-k-1; i++){// This is counting the spaces, this has a relation with the no. of rows entered by the user, according we will leave, so many spaces, n-> entered by user, depending on that, we will leave n-k-1 spaces, here k is the row we are initially working with. it will increment accordingly, 

        // for n=2
        // for 1st interation:
        // i<1, i is 0 true

        // for 2st interation:
        // i<1, i is 1 not true

            cout<<" ";
        }
        for(int j=0; j<(2*k)+1; j++){
                cout<<"*";
        }
        cout<<endl;
    }
    }
};


int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern7(x);
}
    */

// In this problem  we are using the current 



#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern7(int n){
        for(int k=0; k<n; k++){
        for(int i=0; i<n-k-1; i++){
            cout<<" ";
        }
        for(int j=0; j<(2*k)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern7(x);
}

// I tried it myself, you cannot, have it iterate for 1 to <= in the for loop, the equation only work for, 0 to something iteration only.










