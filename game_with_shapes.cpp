#include<iostream>
using namespace std;
int main(){
    int sides_of_square;
    int rad_of_circle;
    int area_s,area_c;
    cin>>rad_of_circle>>sides_of_square;
    area_s=sides_of_square*sides_of_square;
    area_c=3.14*rad_of_circle*rad_of_circle;
    if(area_s>area_c){
        cout<<"circle can be inside a circle";
    }
    else{
        cout<<"circle cannot be inside a circle";
    }
    return 0;
    
}