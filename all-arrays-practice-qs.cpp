#include <iostream>
using namespace std;


void display_last_element(int array[3][3]){
	
	cout << "The Last Element of the array is: " << array[2][2] << endl;
}

int replaceArrayElement(int array[3][3]){
	return array[0][1] = 22;
}


int main(){
	
	//Task 01:- Initialising an array
	
	cout << "Task 01:- Displaying The Array" << endl << endl;
	
	int marks[3][3] = {
		
	{65, 70, 80},
	{85, 90, 95},
	{75, 50, 40}
	
	};
	
	for(int i=0; i<3; i++){
		
		for (int j = 0; j<3; j++){
			cout << marks[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl << endl;
	
	//Task 02:- Finding sum of columns
	
	cout << "Task 02:- Finding Sum of Columns" << endl << endl;
	
	int colSum[3] = {0};

    for (int j = 0; j < 3; j++) {
    	
        for (int i = 0; i < 3; i++) {
            colSum[j] += marks[i][j];
        }
        
    }

    cout << "Sum of each column:" << endl;
    
    for (int j = 0; j < 3; j++) {
        cout << "Column " << j + 1 << ": " << colSum[j] << endl;
    }
    cout << endl << endl;
    
    //Task 03:- Finding sum of rows
    
    cout << "Task 03:- Finding Sum of Rows" << endl <<endl;
    
    int rowSum[3] = {0};
    
    for (int i = 0; i<3; i++){
    	
    	for (int j = 0; j<3; j++){
    		rowSum[i] += marks[i][j];
		}
	}
	
	cout << "Sum of each row: " << endl <<endl;
	
	for(int i = 0; i<3; i++){
		cout << "Row " << i + 1 << ": " << rowSum[i] << endl;
	}
	cout << endl << endl;
	
	
	
	//Task 04:- Total Sum
	
	cout << "Task 04:- Finding Total Sum " << endl <<endl;
	
	int totalSum = 0;
	
	for(int i = 0; i<3; i++){
		
		for (int j = 0; j<3; j++){
			totalSum += marks[i][j];
		}
		
	}
	
	cout << "Total Sum Of The Array: " << totalSum << endl << endl << endl;
	
	
	//Task 05:- Finding Maximum Marks
	
	cout << "Task 05:- Finding Maximum Marks" << endl << endl;
	
	int maxMarks = marks[0][0];
	
	for(int i = 0; i<3; i++){
		
		for(int j = 0; j<3; j++){
			if (marks[i][j] > maxMarks){
				maxMarks = marks[i][j];
			}	
		}
		
	}
	
	cout << "Maximum Marks in the array: " << maxMarks << endl << endl << endl;
	
	
	//Task 06:- Finding if there are marks above 90
	cout << "Task 06:- Finding Marks Above 90" << endl << endl;
	
	bool above90 = false;
	
	for ( int i = 0; i<3; i++){
		
		for ( int j = 0; j<3; j++){
			
			if(marks[i][j] > 90){
				above90 = true;
				break;
			}
		}
		if(above90){
			break;
		}
	}
	
	if( above90){
		cout << "There are marks above 90. " << endl;
	}
	else{
		cout << "There are no marks above 90. " << endl;
	}
	cout << endl << endl;
	
	
	
	//Task 07:- Displaying the first column values as final term
	
	cout << "Task 07:- Displaying First Column Values as Final Term." << endl << endl;
	
	
	cout << "Final Term Marks are: " << endl;
	
	for (int i = 0; i<3; i++){
		
		cout << "Final Term Marks of Subject " << i + 1 << ": " << marks[i][0] << endl;
	}
	
	cout << endl << endl;
	
	
	//Task 08:- Defining a Function that displays the last element of the array
	
	cout << "Task 08:- Defining a Function that displays the last element of the array" << endl << endl;
	
	
	display_last_element(marks);
	
	cout << endl << endl;
	
	
	//Task 09:- Searching if 50 is present in the array or not by using function
	
	cout << "Task 09:- Searching if 50 is present in the array or not by using function" << endl << endl;
	
	bool present = false;
	
	for (int i = 0; i<3; i++){
		
		for (int j = 0; j<3; j++){
			
			if(marks[i][j] == 50){
				present = true;
				break;
			}
		}
		if(present){
			break;
		}
	}
	
	if(present){
		cout << "Yes! 50 is present in the Array." << endl;
	}
	else{
		cout << "No! 50 is not present in the Array." << endl;
	}
	
	cout << endl << endl;
	
	
	//Task 10:- Replacing 70 with 22 using a Function
	
	cout << "Task 10:- Replacing 70 with 22 using a Function." << endl << endl;
	
	cout << "The replace element is: " << replaceArrayElement(marks);
	
	cout << "Displaying the whole array: " << endl << endl;
	
	for(int i = 0; i<3; i++){
		
		for (int j = 0; j<3; j++){
			cout << marks[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
}
