#include<iostream>
using namespace std;
int main(){
    int lw,bw,l1,b1,l2,b2;
    cin>>lw>>bw>>l1>>b1>>l2>>b2;
    int a_of_wall=lw*bw;
    int a_of_p1=l1*b1;
    int a_of_p2=l2*b2;
    if(a_of_wall>(a_of_p1+a_of_p2)){
        cout<<"raj can fix both paintings";
    }
    else{
        cout<<"raj cannot fix both paintings";
    }
    return 0;
}