#include<iostream>
using namespace std;
int main(){
    int weight,bt_wt;
    int adults;
    int child;
    cin>>weight>>adults>>child;
    bt_wt=(adults*75)+(child*30);
    if(weight>=bt_wt){
        cout<<"boat is stable";
    }
    else{
        cout<<"boat is drown";
    }
    return 0;
   
    
}