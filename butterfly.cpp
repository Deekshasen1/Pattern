#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of half butterfly wings\n";
    cin>>n;
    int d=n+n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=n;k>i;k--){
            cout<<" "<<" ";
        }
        for(int s=1;s<=i;s++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n-1;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        for(int k=1;k<=i;k++){
            cout<<" "<<" ";
        }
        for(int s=n-1;s>=i;s--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}