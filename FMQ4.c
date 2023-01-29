#include<stdio.h>

int main()
{
    char str[100];  // Declaring string by char array 
    int i, vowels = 0;
    
    printf("Enter the string: ");
    // 
    fgets(str,100, stdin);  // It reads a line from the specified stream and stores it into the string pointed to by str. 
                            //It stops when either (n-1) characters are read, the newline character is read,
                            // or the end-of-file is reached, whichever comes first.
                            // it is char str[MAX]; fgets(str, MAX, stdin); printf("String is: \n");

    
    //loop
    for(i = 0; str[i]; i++)  // i++ is same as i=i+1 
    {
        //Counting the vowels.
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||
           str[i]=='o'|| str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U') // || is the or logical operator 
        {
            vowels++; // vowels = vowels +1 
        }
    }
 	
    //Printing the number of vowels.
    printf("Total number of vowels: = %d\n",vowels);
    
    return 0;
}