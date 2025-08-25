/*Task: Student Result Management (Parallel Arrays)
Problem Statement:
Write a C++ program that manages data for 5 students using parallel arrays:
rollNo[5] ? stores roll numbers
names[5] ? stores student names
marks[3][5] ? a 2D array to store 3 subject marks for each student
Your program should:
Input roll number, name, and 3 subject marks for each student.
Calculate total marks and percentage for each student.
Display the data in a table format using setw().
Display the student with the highest percentage.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int id[3];
	string names[3];
	int marks[3][3];
	int total_marks = 150;
	int obtain_marks[3];
	float percentage[3];
	
	for(int i=0; i<3; i++)
	{
		cout<<"id :";
		cin>>id[i];
		cout<<"name";
		cin>>names[i];
		obtain_marks[i] = 0;
		for(int j=0; j<3; j++)
		{
			cout<<"marks "<<j+1<<" :";
			cin>>marks[i][j];
			obtain_marks[i] += marks[i][j] ;
		}
		percentage[i] = (float(obtain_marks[i])/total_marks)*100;
	}
	
	
	cout <<setw(5)<<"Id"<<setw(10)<<"Names"<<setw(10)<<"Marks1"<<setw(10)<<"Marks2"<<setw(10)<<"Marks3"<<setw(10)<<"Percentage"<<endl;
	cout <<"--------------------------------------------------------"<<endl;
	
	for(int i=0; i<3; i++)
    {
        cout << setw(5) << id[i]
             << setw(10) << names[i]
             << setw(10) << marks[i][0]
             << setw(10) << marks[i][1]
             << setw(10) << marks[i][2]
             << setw(10) << obtain_marks[i]
             << setw(11) << fixed << setprecision(1) << percentage[i] << "%" << endl;
    }
    
	int max_marks = 0;
    for(int i=1; i<3; i++)
    {
        if(percentage[i] > percentage[max_marks])
        {
            max_marks = i;
        }
    }

    cout << "\nTopper: " << names[max_marks]
         << " (Id: " << id[max_marks]
         << ") with " << percentage[max_marks] << "%" << endl;
	return 0;
}
