#include<iostream>
using namespace std;
int main()
{
    int n,runs[n],i=0,j=0,min,max;
    cout<<"enter the number of players: ";
    cin>>n;
    cout<<"enter the scores scored by them: ";
    for(i=0;i<n;i++)
    {
        cin>>runs[i];
    }
    min=runs[0];
    max=runs[1];
    while(j!=n)
    {
        if(runs[j]<min)
        {
            min=runs[j];
        }
        j++;
        if(runs[j]>max)
        {
            max=runs[j];
        }
    
        j++;
    }
cout<<"the minimum score is : "<<min<<"\n";
cout<<"the maximum score is : "<<max;
return 0;
    }
