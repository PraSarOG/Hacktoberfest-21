#include<stdio.h>
#include<string.h>
#define max 100
void bubblesort(char arr[][max],int n);
void selectionsort(char arr[][max],int n);
int binsearchwrec(char arr[][max],int n,char key[]);
int binsearchrec(char arr[][max],int first,int last,char key[]);
void main()
{
	char arr[100][max];
	char key[max];
	int i,j,ch,n,s,x;
	printf("Enter the number of strings=");
	scanf("%d",&n);
	printf("\nEnter the strings=");
	for(i=0;i<n;i++)
	{
		scanf("%s",&arr[i]);
	}
	do
	{
	printf("\n1.bubblesort/n2.selection sort/n3.Binary Search Without rec/n4.Binary Search With rec");
		printf("\n Enter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: bubblesort(arr,n);
				break;
			case 2:selectionsort(arr,n);
				break;
			case 3:bubblesort(arr,n);
				printf("\nEnter the string you want to search=");
				scanf("%s",&key);
				s=binsearchwrec(arr,n,key);
				if(s==-1)
				{
					printf("\nElement found");
				}
				else
				{
					printf("\nElement not found");
				}

				break;
			case 4:bubblesort(arr,n);
				printf("\nEnter the string you want to search=");
				scanf("%s",&key);
				x=binsearchrec(arr,1,n,key);
				if(x==-1)
				{
					printf("\nElement found");
				}
				else
				{
					printf("\nElement not found");
				}
				break;
			default:printf("\nInvalid choice");
				break;
		}
	}while(i!=0);
}
void bubblesort(char arr[][max],int n)
{
	int i,j,k;
	char temp[100];
	for(j=0;j<n;j++)
	{

		for(i=0;i<n-1;i++)
		{

			if(strcmp(arr[i],arr[i+1])>0)
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[i+1]);
				strcpy(arr[i+1],temp);
			}
		}
		printf("\nPASS%d=",j+1);
		for(k=0;k<n;k++)
			{
				printf("\t%s",arr[k]);
			}
	}
	printf("\nBUBBLESORTED SET OF STRINGS=>");
	for(i=0;i<n;i++)
	{

		printf("\n%s",arr[i]);
	}
}
void selectionsort(char arr[][max],int n)
{
	int i,j,loc,f,k;
	char min[100],temp[100];
	strcpy(min,arr[0]);
	for(i=0;i<n-1;i++)
	{
		strcpy(min,arr[i]);
		loc=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(strcmp(arr[j],min)>0)
			{
				strcpy(min,arr[j]);
				loc=j;
			}
		}
		if(loc!=i)
		{
			strcpy(temp,arr[i]);
			strcpy(arr[i],arr[loc]);
			strcpy(arr[loc],temp);
		}
		printf("\nPASS%d=",i+1);
		for(k=0;k<n;k++)
		{
			printf("\t%s",arr[k]);

		}
	}
	printf("\nSET OF STRINGS BY SELECTION SORT=>");
	for(i=0;i<n;i++)
	{

		printf("\n%s",arr[i]);
	}
}
int binsearchwrec(char arr[][max],int n,char key[])
{

	int mid,pass=0;
	int first=1,last=n;
	while(last<=first)
	{
		mid=(first+last)/2;
		if(strcmp(key,arr[mid])==0)
		{
			return(mid);
		}
		else if(strcmp(key,arr[mid])>0)
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
	return(-1);


}
int binsearchrec(char arr[][max],int first,int last,char key[])
{

	int mid,pass=0;
	while(first>=last)
	{
		mid=(first+last)/2;
		if(strcmp(key,arr[mid])==0)
		{
			return(mid);
		}
		else if(strcmp(key,arr[mid])>0)
		{
			return(binsearchrec(arr,mid+1,last,key));
		}
		else
		{
			return(binsearchrec(arr,first,mid-1,key));
		}
	}
	return(-1);
}
