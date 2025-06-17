#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int units;
    cin>>units;
    if(units<=200){
        cout<<ceil((units*0.5));
    }
    else if(units<=400){
        cout<<ceil((units*0.65)+100);
    }
    else if(units<=600){
        cout<<ceil((units*0.80)+200);
    }
    else{
        cout<<ceil((units*1.25)+425);
    }
    return 0;
    
}
