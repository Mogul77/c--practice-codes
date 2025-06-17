#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3,c_x,c_y;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<fixed<<setprecision(1);
    c_x=(x1+x2+x3)/3;
    c_y=(y1+y2+y3)/3;
    cout<<c_x<<endl<<c_y;
    return 0;
}