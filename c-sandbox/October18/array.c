#include <stdio.h>
#include <stdlib.h>

int main ()
{
    data-type variable-name[size]; //Array format. 
    
    int arr[10]; //Example of an array. This array is called [arr] and can hold 10 variables. 
    
    //you can access an individual element of the array by using the array name followed by the element subscript
    // enclosed in square brackets as follows:
    array_name[subscript]
        
    //Array elements start from [0].
    //The first elements of the a array is [a[0]]
    //The last element is [a[size-1]] where size is the number of elements in the a array. 
    //so if you want the last element in a 4 variable array you'd do [4-1]=a[3].
    
        You can initialize an array like a variable. 
        
        int a[5]={2,1,3,7,8};
    //If you omit the size of the array, the compiler will make the value 
    
    //You can scan for the variables used in an array. 
        for (blah;blah;blah)
        {
           scanf("%d",&arr[blah]);  
        }
        for (ex;ex;ex)
        {
            printf("%d\n",arr[ex]);  //This will print out the user inputted values for the array. 
            
        }
    //You can reassign values in an array, similar to how you reassign values in other variables. 
    EX: mark[5]={1,2,3,4,5};
    mark[2]=3;
    //reassign:
    mark[2]=53;
    //mark[2] will now be 53 instead of 3. 
    
}