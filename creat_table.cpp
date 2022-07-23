#include<iostream>
using namespace std;
int main(){
    int num,table;
    cout<<"Enter Create TABLE Number  ";
    cin>>num;
    for(int i=0;i<=10;i++){
        table = num*i;
        cout<<num<<" * "<<i<<" = "<<table<<endl;
    }
    return 0;
}