#include<iostream>
using namespace std;
int main(){
    int tree,dig,sum=0;
    cin>>tree;
    while(tree>0)
    {
    dig=tree%10;
    sum+=dig;
    tree/=10; 
    }
    cout<<sum;
    return 0;
    
}