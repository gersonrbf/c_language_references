#include <stdlib.h>
#include <stdio.h>

///////////////////////////////////////////
// Arrays Part 1                         //
// Primitive Types Unidimensional Arrays //
///////////////////////////////////////////

int main()
{
     //Arrays are very common data structures,
     //sometimes also called vectors.
     //They allow the programmer store a collection     
     //of values of a certain type, without the need
     //to declare a separete variable for each one.
     //For each one of the primitives types you can create
     //a array, in truth you even can create array for your
     //own created types, but will revisite this matter when
     //talking about data structures. For now let's keep it
     //simple.
     
     /////////////////
     // Declaration //
     /////////////////

     //To declare a vector of any type just follow this sintaxe:
     //<type> <name>[<number_of_values_to_store>];
     //for example:
     
     int coordinate3D[3];//this a example of a integer array
     //that you can use to store the coordinates of a point
     //in a three dimension space.
     
     //Its is important to say is that for some C/C++ especifications 
     //the index in the array declaration must be a constant value. 
     //Constants values will be one of the last topics that I intend
     //to cover in this scripts, but for now just know that you 
     //shouldn't use another variable to try to declare the array 
     //size.    

     ////////////////////
     // Initialization //
     ////////////////////

     //Also you may initialize a array from the start, and in this
     //case you do not need to explicitly specify its size.
     //For example:

     //As you can see you initialize a array putting each member that
     //you want to store between curl brackets, separated by comma.

     int somevalues[] = {1,2,3,4,5};//this is a array of int of size 5

     double point[] = {1.5,9,3.9};//this is a array of double of size 3

     char words[] = {'a',' ','e','x','a','m','p','l','e','.','\0'};

     //notice that for the array of character we assigned as the last
     //value the '\0' character. This is important because when using
     //libraries that treat the array of character as a whole string
     //they may expect that the last character be the empty('\0')
     //character, representing the end of the string.

     //Another way for initializing a char array is using a string literal

     char str[] = "a example.";//The values of this array are exatly 
     //the same as the words array.
     //In this case its not necessary use '\0', because it is added
     //by default. So this array will be a 11 characters array,
     //10 characters for the string and 1 character for a '\0'
     //character at the end. 

     ////////////////
     // Assignment //
     ////////////////

     //To assign a value to a array you need to specify the
     //position where you want to assign the value.
     //<array_name>[<position>]=<value>
     //For example, let's fill that first array that we declared,
     //coordinate3D:     

     coordinate3D[0] = 4;
     coordinate3D[1] = 9;
     coordinate3D[2] = 2;     

     //As you can see, every array in C start in 0 position. So
     //if its has 3 values the valid positions are:0,1,2. Or
     //generalizing to a N size array the valid positions are
     //from 0 to N-1.

     /////////////////////
     // Acessing Values //
     /////////////////////

     //To access a value in the array you just need to specify the
     //position.
     //<array_name>[<position>]

     int yCoordinate = coordinate3D[1];
     printf("Coordinates: (%d,%d,%d)\n", coordinate3D[0], coordinate3D[1], coordinate3D[2]);

     //Be careful when assigning or acessing values in a array
     //if you try to access a position out of the range of the
     //array the C program may not return a error, in the most
     //cases it will not. It will probably only have a undefined
     //behaviour, meaning that it will run but its result can be
     //completly different of the correct one, and if you notice
     //that the result is wrong, its your job to discover what is
     //wrong.

}

/*
References

B.W. Kernighan and D. Ritchie. C Programming Language. Pearson Education 1988.


*/
