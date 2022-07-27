#include<iostream>
using namespace std;
int main(){
    int length,breadth,perimeter,area;
    cout<<"enter the length of the rectangle: ";
    cin>>length;
    cout<<"enter the breadth of the rectangle: ";
    cin>>breadth;
    perimeter= 2*(length+breadth);
    area=length*breadth;
    cout<<"the perimeter of the rectangle is: " << perimeter<< "\n";
    cout<<" the area of the rectangle is: "<< area<< "\n" ;
return 0;
}