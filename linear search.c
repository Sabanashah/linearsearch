#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,search=0,a[5];
	for(i=0;i<5;i++)
	{
		printf("enter the element of array");
		scanf("%d",a[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		search++;
	}
	if(search==0)
	printf("not found");
	else
	printf("%d present %d times in the array",n,search);
	getch();
}
