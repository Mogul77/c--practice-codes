#include<iostream>
using namespace std;
int main(){
    int num,res,sq;
    cin>>num;
    if(num>9){
        cout<<"invalid input";
    }
    else{
    sq=num*num;
    res=sq%10;
    if(num==res){
        cout<<"automorphic number";
    }
    else{
        cout<<"not a automorphic number";
    }
    }
    return 0;
    
    
}