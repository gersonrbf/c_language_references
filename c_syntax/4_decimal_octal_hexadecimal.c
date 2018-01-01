#include <stdlib.h>
#include <stdio.h>

/////////////////////////////////////////////
// Variables Part 3                        //
// Decimal, Octal and Hexadecimal Integers //
/////////////////////////////////////////////

/*
While a was doing the next script I notice
that should be better to give a simple
explanation about base/radix and numerical
system. Its far from me to try to give a 
full explanation on the matter, but I hope
that the REALLY brief and simple explanation
help. Understanting completely this part its not a
must for begginers coders, but you probably will end up
finding some codes that expect to you understand it.
*/


int main()
{

     //In C you can use integer variables in the
     //octal and hexadecimal systems, beyond the
     //decimal system that we already used.
     //Also you can use operation in other system
     //to bitwise operations.

     ////////////////
     // Base/Radix //
     ////////////////
          
     //In a numeral system the base define the number of
     //different unique symbols used to represent quantities.
     //For example, we use the decimal system where we have
     //10 different symbols(0,1,2,3,4,5,6,7,8 and 9), this
     //means that the base is 10. When we need to create a new
     //number, after we had exhausted our different symbols
     //we add a new signficant number to the left side and 
     //start with our first symbol. For example:
     //...,8,9,10
     //and continue adding the values from the least significant
     //symbol to the most to generate new numbers.
     //In my opnion this is easy to see if you imagine that each
     //number has infinite number of 0s(zeros) to the left side.
     //So if we imagine this way 9 could be 09, and when we
     //need to generate a new number you are adding to the next
     //digit, since you already used all the possible option for
     //the current one. I hope this make sense.

     //Now lets see the octal and hexadecimal system.
     //Octal system use a 8 base. Our unique symbols are
     //0,1,2,3,4,5,6,7. Using the same logic of our 
     //previous explanation if we need a number after
     //7 it would be 10.
     //So for a better examplification:
     //0,1,2,...,6,7,10,11,12,13,...,16,17,20,21,...,76,
     //77,100 and so on.
     //The hexadecimal system use 16 base. The unique symbols
     //are 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F.
     //A example of some elements of this system in order are:
     //0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F,10,11,12,13,14,15,16,17,
     //18,19,1A,1B,1C,1D,1E,1F,20,...,98,99,9A,9B,9C,9D,9E,9F,A0,
     //A1,...,A9,AA,AB,AC,AD,AE,AF,B0,...,F9,FA,FB,FC,FD,FE,FF,100,
     //and so on.

     ///////////////
     // Declaring //
     ///////////////

     //To declare a octal integer you just need to
     //add a zero digit before the octal number you
     //decide to assign.
     int seven = 07;// 7(base10)=7(base8)
     int eight= 010;// 8(base8)=10(base8)
     int sixtyThree = 077;// 63(base10)=77(base8)

     //A important observation here is, take care when
     //assigning a int. If you start a assign with zero
     //the variable will be considered as a value in the 
     //octal system.

     //To declare a hexadecimal integer you need to
     //use '0x' before the value in hexadecimal that
     //you want to assign. For hexadecimal values that
     //use one of the alphabetic characters(a,b,c,d,e,f)
     //doesn't matter if they are upper or lower case.
     int nine = 0x9;// 9(base10)=9(base16)
     int ten = 0xa;// 10(base10)=a(base16)
     int twoHundredFiftyFive= 0xFF;// 255(base10)=FF(base16)

     //To print integer in octal use %o, and to print in hexadecimal
     //value use %x. The values before the caracters is just a integer
     //to define the width of the space where the values will be placed.
     //If you didn't understand just uncomment the next line and you will understand.
     //printf("%s %s %s\n%d %o %x\n%d %o %x\n%d %o %x\n%d %o %x\n%d %o %x\n%d %o %x\n\n", "decimal", "octal", "hexadecimal", seven, seven, seven, eight, eight, eight, sixtyThree, sixtyThree, sixtyThree, nine, nine, nine, ten, ten, ten, twoHundredFiftyFive, twoHundredFiftyFive, twoHundredFiftyFive);
     printf("%7s %5s %11s\n%7d %5o %11x\n%7d %5o %11x\n%7d %5o %11x\n%7d %5o %11x\n%7d %5o %11x\n%7d %5o %11x\n", "decimal", "octal", "hexadecimal", seven, seven, seven, eight, eight, eight, sixtyThree, sixtyThree, sixtyThree, nine, nine, nine, ten, ten, ten, twoHundredFiftyFive, twoHundredFiftyFive, twoHundredFiftyFive);


}

/*
References

B.W. Kernighan and D. Ritchie. C Programming Language. Pearson Education 1988.
*/
