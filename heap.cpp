#include<stdio.h>
void heapify(int arr[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l<n&&arr[l]>arr[largest])
	largest=l;
	if(r<n&&arr[r]>arr[largest])
	largest=r;
	if(largest!=i)
	{
		int temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		heapify(arr,n,largest);
	}
	
	//printf("\n hello");
}

void heapsort(int arr[],int n)
{
//	printf("\n hello");
	int i;
	for(i=n/2-1;i>=0;i--)
	heapify(arr,n,i);
	for(i=n-1;i>=0;i--)
	{
		int tempo=arr[0];
		arr[0]=arr[i];
		arr[i]=tempo;
		heapify(arr,i,0);
	//	printf("\n hello");
	}
	
}
void printarray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
	printf("\n");
}
int main()
{
	int i;
	int num;
	printf("\n enter the number of elements");
	scanf("%d",&num);
	int a[num];
	printf("\n enter the array elements");
	for(i=0;i<num;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Given array:");
	printarray(a,num);
	heapsort(a,num);
	printf("\n after sorting");
	printarray(a,num);
	return 0;
}
	
