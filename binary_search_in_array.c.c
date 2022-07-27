#include<stdio.h>
int main(){
	int l,h,mid,i,a[50];

	printf("enter the size of array: ");
	scanf("%d",&size);
	
		printf("enter the elements of array: ");
		for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	
		printf("enter the element to be searched: ");
	scanf("%d",&key);
	
	while(l<h){
		mid=[(l+h)/2];
		
		for(i=0;i<size;i++)
		{
			if(key==a[mid])
			printf("element found at %d index",i);
			break;
		
		else if(key<a[mid])
		{
			h=mid-1;
			printf("element found at %d index",i);
		}
		else if(key>a[mid])
		{
			l=mid-1;
			printf("element found at %d index",i);
		}
	}
	
return 0;	
}
