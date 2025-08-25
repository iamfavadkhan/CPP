#include <iostream>
using namespace std;

int main()
{
	int arr[] = {12,3,4,5,6,4,5,6,4,2,67,553,8,9,8,6,4,2,21};
	int n_elements = sizeof(arr)/sizeof(arr[0]);
	cout<<n_elements<<endl;
	
	
	char str[] = {'a','b','c','d','e','f'};
	int size = sizeof(str)/sizeof(str[0]);
	cout << size << endl;
	
	char str1[] = "abcd"; // it will adds one null character at the end
	int size1 = sizeof(str1);
	cout << size1;
	return 0;
};
