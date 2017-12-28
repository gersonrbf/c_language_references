//commentary are lines of code thats are intentionally
//ignored by the compiler(1). Coders use it to write
//human readable text inside their codes explaining
//what certain part of the code do. Its specially
//useful for code being write by multiple people, or 
//when you go back to a code written a long time ago.
//By the way, all this lines are comments.

//single-line comments are write using // before it
//block comments must be wrapped between /* and */

//Standard input/output library
#include<stdio.h>
/*
A library is a piece of code created
to be used along with other programs
to simplify certain tasks.
For example the stdio library supply
you with function that help you to
treat inputs and outputs, like read
from the commandline or write in it,
without you need to write a code
specific to it.
*/


/*
When a C program is executed, the "main" function
is the first thing to be executed. So to 
run a C program it must has a main function.
We will explain the concept of a function in a futher
script. For now, just know that you will need put
your code between the braces after the "int main()"
for your first scripts.
*/
int main()
{

     //Let's start making a program that print "Welcome to the world".
     //To do it we will use the printf function.
     //printf is a function of the stdio library.
     //I am not going to explain it in details
     //in this specific code. For now we are 
     //using it to print a sequence of characters
     //to the standard input/output that should be
     //your console/terminal.
     printf("Welcome to the world\n");
     
     //\n is a escape sequence, and it denote newline character.
     //There is others escape sequences for other unconventional
     //characters.
     
     //notice that after the printf fuction the line is finished
     //with a ';' character. In C after every instruction you 
     //must use ';' to tell the end of the instruction.
     //In other words after every variable declaration, assigment,
     //or function call you must end with ';'. You will get used
     //to it very quickly following the examples.

     //Now try to run it and see what happens.

}

//(1) Compiler is the program that read your script instructions
//and convert it to instructions that your machine can understand.
//Some language need to be compiled other are interpreted. If you
//are new to programming, and is just trying to learn C, you does
//not need to worry with the difference between interpreted and
//compiled code, just need to know that C is compiled, because you
//will need a compiler to run your programs.
