#include<iostream>
using namespace std;
int main(){
    int sal,bank,hos,food,par;
    cin>>sal>>bank>>hos>>food>>par;
    if(sal>(bank+hos+food+par)){
        cout<<"he can save money";
    }
    else{
        cout<<"he has to work hard";
    }
    return 0;
}