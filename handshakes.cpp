#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    for(int i=1;i<n;i++){
        sum+=(n-i);
    }
    cout<<sum;
    return 0;
}