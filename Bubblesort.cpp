#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
	for(int k=0;k<n-1;k++)
	{
	for(int i=0;i<n-k-1;i++)
	{
		if(arr[i+1]<arr[i])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	  }
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter number of elments you want:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	BubbleSort(arr,n);
	cout<<"Elements are:";
	printArray(arr,n);
}
