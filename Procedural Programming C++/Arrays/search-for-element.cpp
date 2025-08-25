#include <iostream>
using namespace std;

int main ()
{
	int arr[] = {2,3,4,5,6,7,8,5,23,43,5678,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<size; i++)
	{
		if(arr[i] == 8)
		{
			
			cout <<"Element :"<<arr[i]<<", at index :"<<i<<endl;
			
		}
		
	}
	
	return 0;
}
