#include<iostream>
using namespace std;

int main()
{
	int r = 2 , c = 3;
	
	int A[r][c] = {{1,2,3},{4,5,6}};
	int B[r][c] = {{1,2,3},{4,5,6}};
	int Csum[r][c];
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			Csum[i][j] = A[i][j] + B[i][j];
		}
	}
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout << Csum[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
