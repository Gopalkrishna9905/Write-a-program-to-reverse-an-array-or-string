#include<iostream>
using namespace std;

void revOfArrString(int arr[],int start,int end)
{
	while(start<end)
	{
	
	int temp;
	temp = arr[start];
	arr[start] = arr[end];
	arr[end]=temp;
	start++;
	end--;
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
	int arr[] = {5,4,3,0,7,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<" the array is : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	revOfArrString(arr,0,n-1);
	cout<<" \n After reverse array is : ";
	 printArray(arr,n);
	
	
}
