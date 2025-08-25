#include <iostream>
using namespace std;

int main ()
{
	int arr[] = {1,23,4,4,5,66,77,3,2,4,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int uniqueArr[100];
	int size = 0;
	
	for(int i=0; i<n; i++)
	{
		bool isDuplicate = false;
		for(int j=0; j<size; j++)
		{
			if(arr[i]==uniqueArr[j])
			{
				isDuplicate = true;
				break;
			}
		}
		if(!isDuplicate)
		{
			uniqueArr[size] = arr[i];
			size++;
		}
	}
	
	for(int i=0; i<size; i++)
	{
		cout << uniqueArr[i] <<" ";
	}
	
	
	
	return 0;
}
