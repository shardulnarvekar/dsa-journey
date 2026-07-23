/*#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern11(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if(i%2==0){
                if(j%2==0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
                }
                else{
                if(j%2==0){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern11(x);
}
*/
// above solution is something i did, myself


#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern11(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if((i+j)%2==0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            
        }
        cout<<endl;
    }
}
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern11(x);
}