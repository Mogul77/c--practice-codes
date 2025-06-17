#include<iostream>
using namespace std;
int main(){
    int stud;
    int team;
    cin>>stud>>team;
    int p = stud/team;
    int l = stud%team;
    cout<<p<<endl<<l;
    return 0;
}