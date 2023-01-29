#include<stdio.h>

// decleration of the functions
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);

int main() {
int n, i;
  
  // input from user abot the size of array
  printf("Enter the number of elements: "); //uses the value entered to declare an array of that size. 
  //It then prompts the user to enter the elements for the array  
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n); // input elements
  for (i = 0; i < n; i++) {  // uses a for loop to store each element in the array using the scanf function.
    scanf("%d", &arr[i]);
  }
   bubble_sort(arr, n);    // bubble sort array 
  printf("Bubble Sort array:  \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  selection_sort(arr, n);   // selection sort array
  printf("\nSelection Sort array:  \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}

void bubble_sort(int arr[], int n) {  // bubble sort function
// same as Q5
    int i, j, temp;
    for (i = 0; i<n; i++) {  // this for loop iterates over the array from 0 to n-1.
         for (j = i+1; j<n; j++) { // this for loop iterates over the array from i+1 to n-1.
            if(arr[i] > arr[j]) { // it compares the element at index i with the element at index j
            // and checks If the element at index i is greater than the element at index j, 
                temp = arr[i]; // it swaps the two elements using a temporary variable called temp.
                arr[i] = arr[j];
                arr[j] = temp; 

            }

         }

    }

}


void selection_sort(int arr[], int n) { // selection sort function 
// same as Q5 
     int i,min=arr[0] , temp1=0 , k=0;
    for(i=1;i<n;i++) // uses a for loop to iterate over the array starting from the second element.
    {
        if(arr[i]<min) // checks if the current element is less than the value of min. 
        {
            temp1=arr[i]; // If it is, it assigns the current element to temp1
            arr[i]=min; // current element is assigned to minimum value
            min=temp1; // so minimum value is assigned to temp1
        }
    }
}
