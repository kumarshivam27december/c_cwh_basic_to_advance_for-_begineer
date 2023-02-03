#include <stdio.h>

int main()
{
    //compiler will ignore this
    /*
    this
    is
    a 
    multi
    line
    comment
    */
   // int float char
   int a=76;  //2 to 4 byte
   unsigned int integer =8;
   long integer1=8; //4bytes
   short integer2=8; //2bytes
   char v[]="shivamkumarsingh";
   
   float b=82728.0227;  //4byte - 6 decimal precision
   double myfloat1=7.75 ; //15 decimal place precision
   long double myfloat2=2.33339393; // upto 19 decimal place precision    // for printing double float we have to print  or put the value as %lf

   char c='t';  //1byte
   

//    printf("\nhello\n %d",a);
//    printf("\nhello\n %f",b);
    // printf("\nhello\n %c",c);
    printf("the size of cha v is %d",sizeof(v)) ;
    return 0;
}


//    /t creates a horizontal tab
//    \\ insert a backslash character(\)
//     \" insert a double quote  haracter

// how to name variable
/*
The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names

*/




// always note that memory is always in form of "%p"