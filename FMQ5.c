#include<stdio.h> 
int main () {
    
    // variables
    int i, j , n , temp , arr[100] ; 
    // input 
    printf("Enter the number of elements in array \n") ;
    scanf("%d",&n) ;
    printf("Enter elements of array \n");
    // loop 
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    //bubble sort- use to rearrange the elements of an array in increasing order 
    // by scanning each element in the array and comparing it with the next(adjacent) element
    // if the element at a certain position is smaller than the next one, the two will swap positions in the array
    printf("The bubble sorted elements of array are :\n");
    for (i = 0; i<n; i++)  // this for loop iterates over the array from 0 to n-1.
    { 
        for (j = i+1; j<n; j++) // this for loop iterates over the array from i+1 to n-1.
        {
            if(arr[i] > arr[j]) // it compares the element at index i with the element at index j
            // and checks If the element at index i is greater than the element at index j, 
            { 
            temp = arr[i]; // it swaps the two elements using a temporary variable called temp.
            arr[i] = arr[j]; 
            arr[j] = temp; 
            } 
        }
        printf ("%d  ", arr[i]); 
    } 
     //selection sort it finds the minimum element in the unsorted array and swaps it with element at begining
     // once the 0th position of the array is sorted it is kept aside and the remaining is the unsorted, so the 1st position elemnt now beomes the begining element and so on.
    int min=arr[0] , temp1=0 , k=0;
    for(i=1;i<n;i++) // uses a for loop to iterate over the array starting from the second element.
    {
        if(arr[i]<min) // checks if the current element is less than the value of min. 
        {
            temp1=arr[i]; // If it is, it assigns the current element to temp1
            arr[i]=min; // current element is assigned to minimum value
            min=temp1; // so minimum value is assigned to temp1
        }
    }
    printf("\nThe selection sorted elements of array are :\n");
    while(k<n)
    {
    printf("%d  ",arr[k]);
    k++;
    }
}