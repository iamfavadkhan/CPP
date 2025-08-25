#include <iostream>
using namespace std;

int main ()
{
	int arr[8] = {2,3,4,5,6,7,85,4};
	int max = *(arr + 0);
	int min = *(arr + 0);
	for(int i=0; i<8; i++)
	{
		if(*(arr + i) > max)
		{
			max = *(arr + i);
		}
		
		if(*(arr + i) < min)
		{
			min = *(arr + i);
		}
	}
	cout << max << endl;
	cout << min << endl;
	return 0;
}
