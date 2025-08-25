#include <iostream>
using namespace std;

int main()
{
	char ch[] = "hello";
	cout << *(ch+0);
	cout << *(ch+1);
	cout << *(ch+2);
	cout << *(ch+3);
	cout << *(ch+4);
	
	return 0;
}
