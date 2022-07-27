#include<iostream>
using namespace std;
int main(){
    int r;
    float volume;
    cout<<"enter the radius of the sphere: "<<"\n";
    cin>>r;
    volume=0.333*3.14*r*r*r;
    cout<<"the volume of the sphere is: "<<volume;
    return 0;
}