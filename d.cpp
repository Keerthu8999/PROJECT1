#include<stdio.h>
void merge(int arr[],int start,int mid,int end);
void mergesort(int arr[],int start,int end)
{
	int mid=(start+end)/2;
	if(start<end)
	{
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	merge(arr,start,mid,end);
}
}
void merge(int arr[],int start,int mid,int end)
{
	int k;
	int leftN=mid-start+1;
	int rightN=end-mid;
	int left[leftN];
	int right[rightN];
	int i,j;
	for(i=start,j=0;i<=mid;i++,j++)
	left[j]=arr[i];
	for(i=mid+1,j=0;i<=end;i++,j++)
	right[j]=arr[i];
	i=0;
	j=0;
	k=start;
	while(i<leftN&&j<rightN)
	{
		if(left[i]<right[j])
		{
			arr[k]=left[i];
			k++;
			i++;
		}
		else
		{
			arr[k]=right[j];
			k++;
			j++;
		}
	}
	while(i<leftN)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<rightN)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}
int main()
{
	int n,i,ar[n];
	printf("\n enter the no of elements");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
	mergesort(ar,0,n-1);
	printf("\n afters sorting");
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
}
