#include <iostream>
using namespace std;

int main ()
{
	string str[] = {"f","a","w","a","d"};
	int s = sizeof(str)/sizeof(str[0]);
	int st = 0;
	int end = s-1;
	string temp = "";
	 
	while(st < end)
	{
		temp = str[st];
		str[st] = str[end];
		str[end] = temp;
		st++;
		end--;
	}
	for(int i = 0; i<s; i++)
	{
		cout <<str[i]<<" ";
	}
	return 0;
}
