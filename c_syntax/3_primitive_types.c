#include <stdlib.h>
#include <stdio.h>
#include <limits.h>//This library has some implementation-defined constants(3)


//////////////////////
// Variables Part 2 //
// Primitive Types  //
//////////////////////



/*
This script will cover the primitives types of C.
*/

int main()
{

     //In the first script we only used the int(integer) type
     //for sake of simplicity. In this script I will present
     //the others primitives types of C.

     //The purpose of different types is to provide
     //representation for the data being processed by the
     //program. The primitive types are types native of the
     //languintExample, and cover the most common representations
     //that are needed in programs. Although most of the time
     //we will be using the primitive types, the C language
     //also provide means to you create your own types and
     //structures to represent your data, this will be
     //covered in another script.

     /////////////////
     // Declaration //
     /////////////////

     //In the next lines we will declare a variable for each
     //one of the primitives types. Also, following the declaration
     //a brief explanation of the type will be written.

     
     char letter;//Represents a character, it can be a letter, a digit,
     //or a special character, like '='. For C a character can be treated
     //as a number. For all purposes a char is a 8 bits(1 byte) integer  
     //value.*/


     //The following types are used to represent integer values.
     //As said, char is integer type, but I preffered to separate
     //it from the following types because, ideally, char are used
     //to represent character.
     //Also you could use a floating point variable to represent a 
     //integer value, but in general this is not a good idea.
     //Anyway, the basic difference between the next types are their
     //size.
     
     //Let's start with the int
     int intExample; //The int type is used to represents integer numbers.
     //Also the int type typically reflect the size of integers in
     //the host machine(1). Because of this the size of a int may
     //change between machines/compilers. In any case, the int must
     //be at least 16 bits, and nowadays you problaby will be dealing
     //only with 32 bits integers.
     //For practical purposes:
     //32 bits integer could represent the following ranges
     //[-2147483648, 2147483647]
     //            or 
     //[0, 4294967295] considering only non-negatives(unsigned) values


     short int notSoShortNumber ;// short int is not a different type,
     //short is a qualifier. A short int should be a int for smaller
     //number, so it would use less space. But this is not necessary
     //the case. The only imposition by the standards is that a short
     //int is at least 16 bits, the especific size is a compiler 
     //choices. Since the int follow the same restriction, you could
     //have a compiler that both short int and int are the same size.
     //As I said, you will be problably working with 32 bits int, and
     //in this case your short int will be problably 16 bits.
     //16 bits integer could represent the following ranges
     //[-32768, 32767]
     //       or
     //[0, 65535] considering only non-negatives(unsigned) values


     long int longIntExample;// long int are similar to the idea presented
     //with the short int, long is just a qualifier. A long int
     //has the only restriction to be at least 32 bits. This means
     //that you can found system with compilers where the int and the
     //long int are the same size, 32 bits. On other cases you can
     //find long int of 64 bits.
     //We already showed the range for 32 bits in the integer type,
     //so let's see the range for a 64 bits integer.
     //64 bits integer could represent the following ranges
     //[-9223372036854775808, 9223372036854775807]
     //                     or
     //[0, 18446744073709551615] considering only non-negatives(unsigned) values

     long long int reallyLongNumber;//In C99 standard was
     //added the possibility to the long long int. The restriction
     //to a long long int is it must be at least 64 bits. So if in
     //your system your long int is already 64 bits problaby your
     //long long int will be the same size. To say the truth I never
     //saw a long long int over 64 bits.
     //Also notice that this was added in C99, this means that older
     //versions would not recognize it.
     //We already showed the range for 64 bits in the long integer   
     //type, so I don't see reason to repeat it here.

     //In all the range examples above we showed the possibility to 
     //non-negative values. This is because you can declare a variable
     //that only allow non-negative values. There is two modifiers
     //for this matter, signed and unsigned. When you declare a
     //integer or floating point variable without using any of this
     //modifiers the compiler assume that you variable is signed,
     //this mean can be positive, zero or negative.
     //So for example if you declare:
     //int intExample;
     //It's the same as
     //signed int intExample;
     //but if you use unsigned
     //unsigned int intExample;
     //This means that intExample can't be negative
     //You can use signed and unsigned modifiers before the short
     //and long modifiers also.

     //Well, some final considerations.
     //First, for short int, long int and long long int, the int word
     //can be omitted in the declaration. This mean that ours
     //declarations above could be:
     //short notSoShortNumber ;
     //long longIntExample;
     //long long reallyLongNumber;
     //
     //Second, you should take care when working with variables 
     //smaller than your processor's word size. For example, in a
     //32 bits machine, the word size is 32 bits, this mean that
     //your processor work with 32 bits in parallel. If you use
     //a short of 16 bits, you will be saving space, but on other
     //hand your processor will need to convert your data to 32 bits
     //to be able to execute operantions and covert the answer again
     //to 16 bits. What means that you are wasting processing. So,
     //I am not saying don't use short int. What I am saying is a
     //more general thing, in programming you frequently must balance
     //your efficiency in terms of memory and processing. Some time
     //you will need to give preference to one in detriment of another. 

     //The next common representation are of number with decimal part.
     //To represent this type of data, we use floating point variables.
     float floatingPoint;//single precision floating point variable.
     double doublePrecision;//double precision floating point.
     long double ldoublePrecision;//extended precision floating point.
     //I could not find if there is a minimal size in bits for
     //this variables in the C Standard. But the idea is that
     //double would allow more precision and greater range than
     //float, and long double greater precision and range than
     //double. Also a double must be at least the same size of
     //a float, and a long double at least the same size of a
     //double.
     //In the end of this script you will be able to see it's
     //sizes for your machine.

     //Be careful with floating point representation, they have
     //a finite precision. We will consider this when talking
     //about operations, in another script.

     //Why variables sizes are important?
     //There is no reason to know types size by heart. But you must
     //have a idea of how much a type can hold to choose the best
     //type for each variable of your program.
     //Also, and maybe more important, you must certify that your
     //program will not try to assign a value bigger than the type
     //can hold. This is because in C variables overflow can be 
     //used to exploit your program, being a security concern.
     //We will talk more about it in latter scripts, but for now
     //be careful with what you put on your variables, this include
     //values received from users.

     ////////////////
     // Assignment //
     ////////////////

     letter = 'a';//character must be assigned between simple quotes 
     //or assigning the numeric value corresponding to desired char
     //in the local char set. 
     intExample = INT_MAX;
     notSoShortNumber = SHRT_MAX;
     longIntExample = LONG_MAX;
     reallyLongNumber = LLONG_MAX;
     floatingPoint = 1042e-2;
     doublePrecision = 10.42;
     ldoublePrecision = .1042;
     //As you can see floating point variables can be assigned
     //using normal decimal numbers or scientific notation.
     //Also if the fractional part or the whole-number part are
     //zero then can be ommited, like 10.00 can be write 10. and
     //0.2 can be write .2
     //There is also a hexadecimal exponent notation, but its not
     //in the scope of this tutorial.

     printf("letter: %c\nintExample: %d\nnotSoShortNumber: %hd\nlongIntExample: %ld\nreallyLongNumber: %lld\nfloatingPoint: %f\ndoublePrecision: %lf\nldoublePrecision: %Lf\n\n" ,letter, intExample, notSoShortNumber, longIntExample, reallyLongNumber, floatingPoint, doublePrecision, ldoublePrecision);

     /////////////
     // Results //
     /////////////

     //The idea for printing the sizes of each type of the host
     //get from a blog(2).
     printf("Size of (in bytes):\nchar: %zd\nint: %zd\nshort int: %zd\nlong int: %zd\nlong long int: %zd\nfloat: %zd\ndouble: %zd\nlong double: %zd\nObs: This values are for the machine running this script.\n",sizeof(char),sizeof(int),sizeof(short),sizeof(long),sizeof(long long),sizeof(float),sizeof(double),sizeof(long double));//(2)

     //As a final note, there are other non-conventional types
     //added in C99, like complex number but for this tutorial 
     //I can't see this being a useful topic to cover.
}

/*
References

(1)B.W. Kernighan and D. Ritchie. C Programming Language. Pearson Education 1988.
(2) https://usrmisc.wordpress.com/2012/12/27/integer-sizes-in-c-on-32-bit-and-64-bit-linux/
(3) http://pubs.opengroup.org/onlinepubs/009695399/basedefs/limits.h.html

https://en.wikibooks.org/wiki/C_Programming/Variables
https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#Primitive-Types
https://en.wikipedia.org/wiki/C_data_types
*/
