#include <stdlib.h>
#include <stdio.h>

//This next 3 lines will be explained in the "Naming Constants" section of this script.
#ifndef N //check if N where defined somewhere before, for example some file included.
#define N 5 //define a N as the constant 5.
#endif //end of the "if" block. 

//////////////////////
// Constants Part 1 //
// Constants in C   //
//////////////////////

/*
This script will start to cover the constants subject.
Talk about constants in C can be a bit confusing,
because the concept of constant, the qualifier constant,
and the concept of literal are 3 different things.

So in this script we will see what is a true constant in C,
and the basic that we need to know to go on. I believe that
there are some subjects that must be covered first before
continue the rest of the constants in C discussion.

In a future script we will comeback in the constant subject
and discuss a bit more deep on it.

*/

int main()
{     

     //A constant in C is a value, named or unnamed,
     //that not necessary occupy memory(a rvalue)[1,2].
     //We will talk about lvalues and rvalues latter.
     
     //Let's start with some examples of constants in C.
     //When assigning a variable we have the variable at 
     //left side of the equallity sign('=') and a value at
     //the right side. In many cases the value to the right
     //side of the equallity symbol is a constant, like when
     //you use digits, characters between simple quotes, real
     //numbers or scientific notation.
     //For example:
     int a = 1;// 1 is a constant
     float b = 2.5;// 2.5 is a constant
        
     //Just like variables, constants has types. For this reason
     //I will separate the following section by types.     

     ///////////////////////
     // Integer Constants //
     ///////////////////////
     
     //Integer constants can use 3 possible radix(base).
     //Octal(base 8), decimal(base 10) and hexadecimal(base 16).     

     //Any sequence of digits not started by 0, except a single
     //zero, will be a value in the decimal system.
     int decimal = 1234;
     
     //A integer constant with a starting 0 will be a value in
     //the octal system.
     int octal = 010;//this is 8 in the decimal system
     
     //To represent a integer constant in the hexadecimal system
     //its must be start with a 0x.
     //Some times you will see people refer to hexadecimal as just 'hex'.
     int hexadecimal = 0xff;//this is 255 in the decimal system

     //A too big constant value to fit in a int will be considered
     //a long int. I will not give a example because the value
     //big enough to be considered a long will be machine dependent.
     //Also you can use suffixes to explicitly specify this types.

     //For long integer add the l suffix in the end of the constant.
     long int longInteger = 1234L;//l can be upper or lower case.
     
     //For unsigned integer constant use the u suffix at the end of the constant.
     unsigned int unsignedInteger = 1234U;//u can be upper or lower case.

     //Also you can combine the ul suffixes for unsigned long integers.
     unsigned long int unsignedLongInteger = 1234UL;//ul can be upper or lower case.

     //All this suffix can be used together with the preffix for octal or hexadecimal system.
     unsigned long int unsignedLongHexadecimal = 0x10UL;

     /////////////////////////
     // Character Constants //
     /////////////////////////

     //Character constants are written by character between simple
     //quotes. It still being a integer value.
     char letter = 'a';

     //Also some character are presented by escape sequences. Escape
     //sequences start with a backslash followed by a character. 
     char backspace = '\b';//Although, its use 2 symbols it represents a single character.
     /*Here follows all the escape sequences:
     \a -> alert character,
     \b -> backspace,
     \f -> formfeed,
     \n -> newline,
     \r -> carriage return,
     \t -> horizontal tab,
     \v -> vertical tab,
     \\ -> backslash,
     \? -> question mark,
     \' -> single quote,
     \" -> double quote,
     //Also, you can use a octal or hexadecimal number
     //to assign a byte-sized bit pattern:
     \ooo -> where ooo are substituted by a octal number,
     \xhh -> where hh are substituted by a hexadecimal number
     */
     //For example, '\012' and '\xa' will corresponde to the
     //character with the value 10 in your machine's character set.
     
     //Last, the '\0' character constant represent a null character.
     //You will see this character in the end of the literal strings.


     //////////////////////////////
     // Floating-point Constants //
     //////////////////////////////

     //All values with fractional part or in exponential notation
     //are considered double constants.
     float floatVariable = 10.00;//this constant still a double and will be truncated to be assigned to the float variable.
     double doubleVariable = 2.0;//this is a double constant being assigned to a double variable.

     //If you want to use a float constant you must use the suffix f
     float receivingFloatConst = 10.00F;//this is a float constant.

     //Also you can use the l suffix to specify long double constant.
     long double longDouble = 10.0L;//this constant is a long double.

     //All this suffix may not make much difference now, but they
     //will be important when we start to making operations with
     //constants before to assign them to variables.

     //////////////////////
     // Naming Constants //
     //////////////////////

     //Until now we only used constants to assign values as needed,
     //but sometimes you will need a recurrent fixed value in your
     //code. In this case, reapiting the value each time you need
     //isn't the best idea. First, if you need to change the value
     //you will need to look the entire code to replace it in each
     //of its locations with the new value. Second, for people
     //reading your code, that repeating value can be pretty much
     //a meaningless if there isn't a explanation or name associated
     //to it. A good way to solve this problem is defining a constant.
     //In C this can be done using the directive #define. Its sintaxe
     //is:
     //#define <name/token> <value/expression> 
     //This directive call for a macro substitution of the token
     //especified from the point of the definition until the end
     //of the source file being compiled. Its also is executed in
     //the C precompiler, what means that when your code is compiled
     //it is already defined, so can be used where other constants
     //could be used.
     //Two last things:
     //1. Normally constants defined with #define have their names
     //write all in uppercase, as convention.
     //2. Normally they are wrote after the inclusions of the
     //libraries, outside of any function.
     //In the sixth line of this code we defined N as with the
     //integer constant 5. So each time the compiler see N, it
     //will substitute for 5.
     //You can see a directive #ifndef above the #define, and
     //#endif below. #ifndef N, is checking if N alrealdy where
     //defined somewhere for example in some of the files included
     //with #include. If not its will execute the #define, else will
     //just ignore it.

     //////////////////////////
     // Enumeration Constant //
     //////////////////////////

     //A enumeration list is a list of name where each one has a constant integer associated.
     //The sintaxe of a enumarion is:
     //enum <list_name> {<list_members_separated_by_comma>}
     enum boolean { no, yes};
     //In the enum above the member no will hold the zero(0) value, yes holds one(1), and so on.
     //Also you can explicitly assign values
     enum cards { A = 1, jack = 10, queen = 11, king = 12};
     //Or you can assign a value only for the first member, and
     //the others will be the consecutives numbers.
     enum months {january = 1, february, march, april, may, june, july, august, september, october, november, december};
     //february will be 2, march will be 3,...   


     enum cards card1 = A;
     enum cards card2 = king;
     enum cards card3 = queen;
     enum cards card4 = jack;

     printf("no = %d\nyes = %d\n\n",no,yes);

     printf("january = %d, february = %d, march = %d, april = %d, may = %d, june = %d, july = %d, august = %d, september = %d, october = %d, november = %d, december = %d\n\n",january, february, march, april, may, june, july, august, september, october, november, december);

     printf("A = %d\nking = %d\nqueen = %d\njack = %d\n",card1,card2,card3,card4);

}
/*
References

[1] https://stackoverflow.com/questions/11732795/are-the-literal-and-constant-the-same-concept-in-c
[2] https://eli.thegreenplace.net/2011/12/15/understanding-lvalues-and-rvalues-in-c-and-c
[3] https://stackoverflow.com/questions/2308194/shall-i-prefer-constants-over-defines
B.W. Kernighan and D. Ritchie. C Programming Language. Pearson Education 1988.

*/
