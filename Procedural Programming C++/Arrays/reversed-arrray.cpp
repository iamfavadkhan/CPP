#include <iostream>
using namespace std;

int main ()
{
	int arr[] = {10,20,30,40,50,60};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout <<" Original array elements are :";
	for(int i=0; i<size; i++)
	{
		cout <<arr[i]<<" ";
	}
	cout << endl;
	
	int temp = 0;
	int left = 0;
	int right = size-1;
	
	while(left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	cout << endl;
	cout <<" Reversed array elements are :";
	for(int i=0; i<size; i++)
	{
		cout <<arr[i]<<" ";
	}
	
	
	return 0;
}
