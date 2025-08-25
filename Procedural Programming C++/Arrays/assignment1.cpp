#include <iostream>
using namespace std;

void rearrange_array(int arr[])
{
	
    int *left = arr;         
    int *right = arr + 8 - 1; 

    while (left < right){
       
        if (*left % 2 == 0) {
            left++;
        }
        else if (*right % 2 != 0) {
            right--;
        }
		else{
            int temp = *left;
            *left = *right;
            *right = temp;
            left++;
            right--;
        }
    }

  
    cout << "Array in the above require format: ";
    for (int i = 0; i < 8; i++) {
        cout << *(arr + i) << " ";
    }

}
int main(){
	
	int arr[8] = {3,4,5,64,3,2,5,7}; 
	
  

   rearrange_array(arr);
   
    
    return 0;
}

