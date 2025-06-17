#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float p,n,r;
    float interest,rate,amount,dis,tot;
    cin>>p;
    cin>>r;
    cin>>n;
    interest=((p*n*r)/100);
    amount=(interest+p);
    dis=(interest*0.02);
    tot=(amount-dis);
    cout<<fixed<<setprecision(2);
    cout<<interest<<endl;
    cout<<amount<<endl;
    cout<<dis<<endl;
    cout<<tot<<endl;
    return 0;
    
}