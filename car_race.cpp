#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int road_a,road_b,road_c,no_cars;
    cin>>road_a>>road_b>>road_c>>no_cars;
    if(road_a%no_cars==0){
        cout<<"car1 goes in the A road";
    }
    else if(road_b%no_cars==0){
        cout<<"car1 goes in the B road";
    }
    else if(road_c%no_cars==0){
        cout<<"car1 goes in the C road";
    }
    else{
        cout<<"no path existed";
    }
    return 0;
}
