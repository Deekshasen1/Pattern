#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}