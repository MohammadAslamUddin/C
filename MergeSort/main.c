#include<stdio.h>

void mergesort(int a[],int i,int j);
void merge(int a[],int low,int mid,int high);

int main()
{
	int a[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	mergesort(a,0,n-1);

	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	return 0;
}

void mergesort(int a[],int i,int j)
{
	int mid;

	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,i,mid,j);	//merging of two sorted sub-arrays
	}
}

void merge(int a[],int low,int mid,int high)
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=low;	//beginning of the first list
	j=mid+1;	//beginning of the second list
	k=0;

	while(i<=mid && j<=high)	//while elements in both lists
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=mid)	//copy remaining elements of the first list
		temp[k++]=a[i++];

	while(j<=high)	//copy remaining elements of the second list
		temp[k++]=a[j++];

	//Transfer elements from temp[] back to a[]
	for(i=low,j=0;i<=high;i++,j++)
		a[i]=temp[j];
}
