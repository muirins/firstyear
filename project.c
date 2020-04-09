#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrA[100]; //Creating an array A that can take up to 100 values.
    int value=0; //This variable is for the user inputted values that will be inserted into the A array
    int sizeA=0; // The number of values in the array
    
    printf("Enter Array A:\n");
    printf("Enter a negative number to quit\n");
    while(sizeA<100) //Makes sure that the number of values in the array doesn't go over 100.
    {
        scanf("%d",&value);
        if(value<0) //If the user inputs a negative value the loop will stop taking values and go outside the loop
        {
           break;
        }
        arrA[sizeA]=value; //Makes sure that the pointer in the array moves 
        sizeA++; 
    }
    printf("Array A:\n");
    int i;
    for(i=0;i<sizeA;i++)
    {
        printf("%d\t",arrA[i]);  //Prints out each value entered into array A. 
    }
    printf("\n");
    
  //~-----------------------------------Array B work---------------------------------------------// 
    
    int arrB[100]; //Makes an array B that can take up to 100 values
    int sizeB=0;
    
    printf("Enter Array B:\n");
    while(sizeB<100)
    {
        scanf("%d",&value); // Takes user inputted values and places them into array B. 
        if(value<0)
        {
            break;
        }
        arrB[sizeB]=value; // Makes sure that the pointer in the array moves. 
        sizeB++;
    }
    printf("Array B:\n");
    for(i=0;i<sizeB;i++)
    {
        printf("%d\t",arrB[i]); //Prints out each value entered into array B. 
    }
    printf("\n");

////--------------------------------Finding the greatest to least------------------------------//
    
    int mergearr[200];//Makes an array that can fit the values of Array A and B
    int indexA=0; //Pointer for array A
    int indexB=0; //Pointer for array B
    int indexM=0; //Pointer for the merge array
    
    while(indexA<sizeA&&indexB<sizeB) //Makes sure that the count does not go over the number of values in the arrays
    {
  
            if(arrA[indexA]<arrB[indexB])
            {
                mergearr[indexM]=arrA[indexA]; // If the value of array A at wherever the pointer is at is less than array B, then that value will go into the merge array.
                indexA++; //Will move the pointer for array A and NOT B. 
                indexM++; // Increases the size of the merge array. 
            }
            else
            {
                mergearr[indexM]=arrB[indexB]; //If the value of array B at the pointer is less than array A, then that value will be put into the merge array. 
                indexB++; // Will move the pointer for array B and NOT A. 
                indexM++; //Increases the size of merge array. 
            }
        
    } 
    if(indexA>=sizeA) // If one of the arrays reaches their end before the other 
    {
       while(indexB<sizeB)//The rest of the values will be inserted into the merge array until the other array reaches the end. 
       {
            
            mergearr[indexM]=arrB[indexB]; 
            indexB++;
            indexM++;
        
       }  
    }
    if(indexB>=sizeB)
    {
        while(indexA<sizeA) //The rest of the values will be inserted into the merge array until the other array reaches the end. 
        {
           
            mergearr[indexM]=arrA[indexA];
            indexA++;
            indexM++;
            
        }
    }
    printf("Output:\n");
    printf("Ascending order:\n");
    for(i=0;i<indexM;i++)
    {
        printf("%d\t",mergearr[i]); //Prints the values entered into merge array. 
     
    }
    printf("Descending order:\n");
    for(i=indexM;i<indexM;i++)
    {
        printf("%d\t",mergearr[i]);
    }
    
}
