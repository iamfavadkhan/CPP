/*Write a C++ program that:
Stores the names of 5 students in one array.
Stores their marks (out of 100) in another parallel array.
Displays each student’s name along with their marks.
Finally, display the student who scored the highest marks.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int id[5];
	string names[5];
	int marks[5];
	
	for(int i=0; i<5; i++)
	{
		cout<<"id :";
		cin>>id[i];
		cout<<"name :";
		cin>>names[i];
		cout<<"marks :";
		cin>>marks[i]; 
	}
	
	cout <<setw(5)<<"Id"<<setw(10)<<"Names"<<setw(20)<<"Marks"<<endl;
	cout <<"------------------------------------"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<setw(5)<<id[i]<<setw(10)<<names[i]<<setw(10)<<marks[i]<<endl;
	}
	return 0;
}
