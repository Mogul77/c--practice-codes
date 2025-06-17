#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float i1,i2,dis,tot,dis_amt,saved;
    cin>>i1>>i2>>dis;
    tot=i1+i2;
    saved=tot*(dis/100);
    dis_amt=(tot - saved);
    cout<<fixed<<setprecision(2);
    cout<<tot<<endl<<dis_amt<<endl<<saved;
    return 0;
}