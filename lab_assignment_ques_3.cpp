#include<iostream>
using namespace std;
int main()
{
	int i=0,j,k=0,pos,a[11],temp;
	cout<<"enter the scores of the players: ";
	for(i=0;i<11;i++)
	{
		cin>>a[i];
	}
	for(j=4;j<11;j++)
	{
		a[j]=a[j+1];
	}
	j--;
	for(k=0;k<10;k++){
		temp=a[k];
		cout<<temp<<"\n";
}

	return 0;
}

