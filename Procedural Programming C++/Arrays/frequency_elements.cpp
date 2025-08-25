#include <iostream>
using namespace std;

int frequency_element(int arr[] , int s , int target)
{
//	frequency of 3
	int freq = 0;
	for(int i=0; i<s; i++)
	{
		if(arr[i] == target)
			freq++;
	}
	return freq;
}

int main()
{
	int arr[] = {2,3,4,3,2,3,4,5,6,67,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int target;
	cout<<"Enter target to search frequency for it"<<endl;
	cin>>target;
	
	int freq = frequency_element(arr , size , target);
	cout <<"Frequency of the "<<target<<", in the array is :"<<freq <<endl;
	return 0;
}
