#include<iostream>
using namespace std;

int main()
{
	int r = 2 , c = 3;
	
	int A[r][c] = {{1,2,3},{4,5,6}};
	int AT[c][r];
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			AT[j][i] = A[i][j];
		}
	}
	
	for(int i=0; i<c; i++)
	{
		for(int j=0; j<r; j++)
		{
			cout << AT[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
