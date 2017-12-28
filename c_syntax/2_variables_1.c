#include <stdlib.h>
#include <stdio.h>

//////////////////////
// Variables Part 1 //
//////////////////////

/*
This script will start to explain concepts
about variables in C. There is a good amount
of things to talk about variables so I decided
to split it in multiple scripts.

This script will start with the most basic that
you need to know, how to declare, initiate and
assign a variable.
*/

int main()
{
     //First of all variables are spaces on the memory
     //where your program will store values that will
     //be used in the program.

     //In C all variables must have their type specified.
     //Their types help to the compiler state things like memory space that 
     //need to be allocated and if a function can accept then as arguments.

     //In this script we will only use one of the primitives types of C, the int.
     //On other script I will present every primitive C type, and explain it.
     //But since this will be a bit long matter, let's focus in the int type.
     
     //The int type is a representation of integer numbers. The number stored can 
     //be positive, negative or zero. The range of the number that can be stored
     //dependes of the machine running, but at least it will be 16 bits, what means
     //that you can store any number in the closed interval of -32767 to 32767
     //(a.k.a. [-32767,32767]).
     
     //Enought of variable type for now, let's see about variables declaration.

     /////////////////////////////
     // 1 Variables declaration //
     /////////////////////////////

     //In C variables must be declared before used.
     //A variable declation is done using the following sintaxe:
     //<variable_type> <variable_name>;


          ///////////////////////////////////
          // 1.1 Rules for variable naming //
          ///////////////////////////////////

          //Before show examples of variable declaration
          //you need to know that there are convetions
          //to name a variable in C.
          //
          //First the name of the variable can't coincide
          //with keywords of the C language(1). At the end of
          //this file I wrote the list of keywords in C.
          //
          //Second it must be a sequence of letters or
          //digits starting with a letter. Underscore '_'
          //is the only special character allowed to be
          //used in variable naming. But you shouldn't
          //start a variable name with underscore, because
          //this is a convetion that is frequently used 
          //by the libraries.
          //
          //Also, names are case sensitive, so a variable called
          //"max" will be different of a variable called "Max".
          //C convetion advise to use lowercase for variables
          //and uppercase for symbolic constants. We will see
          //symbolic constants in another script.
          //
          //A last piece of advice is to be careful in the 
          //choice of a variable name. Try to be short and
          //clear, the name should reflect what is stored
          //in it, or its purpose.


     //Now let's go back to variables declaration.
     //See some examples bellow:
     int age;

     //If you have more than one variable of the same type
     //to declare, you can do it in a sigle line, with the sintaxe
     //bellow:
     //<variables_type> <variable_name>, <variable_name>, <...>, <variable_name>;
     int hours, minutes, seconds;

     
     /////////////////////////////
     // Variable initialization //
     /////////////////////////////

     //You can also initiate a variable during the declaration.
     //This means that you can allocate the variable space and
     //store a value in it with a single line of code.
     //See the example
     int year = 2017;     

     //It is a good idea to initialize, or assign a value to
     //your variables as soon as you declare it. Otherwise,
     //you may forget that the variable still uninitialised
     //and try to use it. In this case variable will be filled
     //with garbage and will give a undesirable result.
     
     /////////////////////////////
     // Variable Assignment     //
     /////////////////////////////     
     
     //If you declared a variable and did not initialize it,
     //or just want to change its value, you just need to
     //write the variable name followed by the equality symbol
     //'=' and the value that you want to assign.
     seconds = 0;

     //Also if you have more than one variable that need to
     //receive the same value, you can make the following way
     hours = minutes = 10;

     //Let's try some prints of our variables to see what we
     //have done.
     printf("What happens when you try to use a variable not initialized: %d\n",age);
     //if you are lucky your uninitialized variable will return 0, but you can't count
     //with it.
     printf("hours = %d\n",hours);
     printf("minutes = %d\n",minutes);
     printf("seconds = %d\n",seconds);
     printf("year = %d\n",year);
     //The %d is just a placeholder for a integer value
     //in the cases above, our variables.
}

//(1) Keywords:auto, break, case, char, const,
//continue, default, do, double, else, enum,
//extern, float, for, goto, if, int, long,
//register, return, short, signed, sizeof,
//static, struct, switch, typedef, union,
//unsigned, void, volatile, while.
