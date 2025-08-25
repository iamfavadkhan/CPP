#include <iostream>
using namespace std;

int sumArray(int arr[] , int s)
{
	int sum = 0;
	for(int i=0; i<s; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}

int main ()
{
	int arr[] = {2,3,4,5,6,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum_arr_elements = sumArray(arr , size);
	cout << "Sum of the array elements are :" << sum_arr_elements << endl;
	return 0;
}
