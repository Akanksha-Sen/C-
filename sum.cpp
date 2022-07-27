#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,x;
    float area,s;
    cout<<"enter the sides of the triangle: ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    cout<<"the value of semi perimeter s is: "<<s<<"\n";
    x=s*(s-a)*(s-b)*(s-c);
    area=pow(x,0.5);
    cout<<"the area of triangle according to heron's formula is: "<<area;
    return 0;
}
