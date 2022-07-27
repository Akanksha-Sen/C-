#include<iostream>
using namespace std;
int main(){
	int n,a[n],pos,x;
	int i,temp;
	cout<<"enter the size of the array";
	cin>>n;
	cout<<"enter the elements of the array: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter the position where you want to insert the element: ";
	cin>>pos;
	cout<<"enter the element that you want to insert: ";
	cin>>x;
	for(i=n-1;i>pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=x;
	n++;
	
	for(i=0;i<n;i++)
	{
		temp=a[i];
		cout<<temp<<"\n";
	}
	
	return 0;
	
}