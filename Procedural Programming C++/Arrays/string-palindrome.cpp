#include <iostream>
using namespace std;

bool ispalindrome(string str[] , int s)
{
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
	
	
}
int main ()
{
	string str[] = "racecar";
	cout << str;
	int s = sizeof(str)/sizeof(str[0]);
	
	string check = ispalindrome(str , s);
	return 0;
}
