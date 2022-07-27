#include<iostream>
using namespace std;
int main(){
    int i,x,n,a[10];
    cout<<"enter the 10 jercey numbers: " ;
    for(i=0;i<=10;i++){
        cin>>a[i];
    }
    cout<<"enter the number for president permission: ";
    cin>>n;
    for(i=0;i<10;i++){
        if (a[i]==n){
    
cout<<"present";
break;
        }
else
cout<<"absent";
break;
    }
    return 0;
}