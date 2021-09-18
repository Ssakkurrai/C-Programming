#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define PI = 3.1412573

///Single Line Comment
/**
Multi Line Comment
*/

int main()
{
    printf("Hello world!\n\n");

    /**
    Data types:
    Integer - int
    Double - double
    Float - float
    Boolean - _Bool
    Character - char ###Always use single quotes as double quotes is string
    String - char[]

    Format Specifiers:
    int - %d
    double - %lf
    float - %f
    bool - %d
    char - %c
    char[] - %s
    */

    printf("Integer\n\n");
    int i1 = 0;
    printf("i1 = %d\n", i1);

    i1 = 5;
    printf("i1 = %d\n", i1);

    i1 = -3;
    printf("i1 = %d\n", i1);

    i1 = 3.5;
    printf("i1 = %d\n\n", i1);

    printf("i1 is assigned 'A'\n");
    i1 = 'A';
    printf("i1 = %d\n\n", i1);

    printf("Double\n\n");
    double d1 = 3.5;
    printf("d1 = %lf\n", d1);

    d1 = 0;
    printf("d1 = %lf\n", d1);

    d1 = 5.7896;
    printf("d1 = %.2lf\n\n", d1);

    printf("Float\n\n");
    float f1 = 3.7;
    printf("f1 = %f\n", f1);

    f1 = 8.5463;
    printf("f1 = %.2f\n\n", f1);

    printf("Character\n\n");
    char c = 'A';
    printf("c = %c\n\n", c);

    printf("c is assigned 65\n");
    c = 65;
    printf("c = %c\n\n", c);

    printf("Boolean\n\n");
    _Bool b = 0;
    printf("b = %d\n", b);

    b = 1;
    printf("b = %d\n", b);

    b = 2;
    printf("b = %d\n", b);

    b = -1;
    printf("b = %d\n", b);

    b = false;
    printf("Using false Keyword b = %d\n", b);
    b = true;
    printf("Using true Keyword b = %d\n\n", b);

    printf("String represented as an array of characters\n\n");
    char name[] = "Ali Badran";
    printf("Name = %s\n", name);

    printf("--------------------------------------------------------\n\n");

    /**
    Creating constants:
    > Define at top - #Define PI = 3.143241
    > Add const before a variable

    Find Location of variable : &_variablename_
    */

    const int x = 3; ///Converted to Constant

    double y = 3.456;

    printf("Address of y in system is : %d\n", &y);

    printf("--------------------------------------------------------\n\n");

    /**
    Printing multiple variables togrther

    Taking input from user

    use scanf("%s",name)
    */

    printf("i1 = %d\nd1 = %lf\nf1 = %f\nb = %d\nc = %c\nname = %s\n\n",i1,d1,f1,b,c,name);

    int T = 0;

    printf("New value of T: ");
//    scanf("%d",&T);

    printf("\n%d\n",T);

    printf("--------------------------------------------------------\n\n");

    /**
    Taking int and double input together
    */

    printf("Taking int and double input together: \n\n");
    int A;
    double B;

//    scanf("%d %lf",&A,&B);

    /**
    If double format is given in int then the integer part is assigned to int and the remaining decimal is assigned to double
    Input = 23.5
    int = 23
    double = 0.5
    */

    printf("\nA = %d\nB = %lf\n\n",A,B);

    /**
    To prevent this use fflush(stdin) to clear input memory
    */

    printf("Using fflush():\n\n");
//    scanf("%d",&A);
    fflush(stdin);
//    scanf("%lf",&B);

    printf("\nA = %d\nB = %.1lf\n\n",A,B);

    printf("Enter a Character: ");
//    scanf("%c",&c);
    printf("Char = %c\n\n",c);

    printf("Enter your Name: ");
//    scanf("%s/n/n",name);
    printf("Name : %s\n",name);

    printf("--------------------------------------------------------\n\n");

    printf("Arrays\n");
    printf("1 Dimensional Array\n\n");

    int num[5] = {};///Declaration

    /**
    Values can also be specified as int num[5] = {4,3,5,6};
    This assigns values to the first 4 elements
    To assign all values: int num = {x1,x2,x3,x4....xn}
    */

    num[1] = 23;///2nd Element
    num[4] = 34;///5th Element
    num[3] = 12;///9th Element

    printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4]);
    printf("Empty Values: %d %d\n\n", num[0], num[2]);

    /**
    List index out of range
    num[5] = 9;
    printf("%d\n\n",num[5]);
    */

    printf("2 Dimensional Arrays\n\n");

    /**
    Initiation of 2D Array: int numTable[2][3] = {};
    Creates 2x3 array with all values as 0
    */

    int numTable[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("Table: \n");
    printf("%d %d %d\n%d %d %d\n\n",numTable[0][0],numTable[0][1],numTable[0][2],numTable[1][0],numTable[1][1],numTable[1][2]);

    numTable[0][0] = 8;
    numTable[1][1] = 1;

    printf("Updated Table: \n");
    printf("%d %d %d\n%d %d %d\n\n",numTable[0][0],numTable[0][1],numTable[0][2],numTable[1][0],numTable[1][1],numTable[1][2]);

    printf("Addresses in Arrays:\n\n");

    printf("%d %d\n", &num[0], num);
    printf("%d %d %d\n", &numTable[0], &numTable[0][0], numTable);
    printf("%d %d\n", &numTable[1], &numTable[1][0]);
    printf("%d %d\n", &numTable[1][1], &numTable[1][2]);

    /**
    Arrays have fixed size
    You can put as much dimensions as you want (some compilers have a maximum)
        3D Array - int numbers[2][3][2];
        No of brackets = Dimension of Array
    */

    printf("--------------------------------------------------------\n\n");


    return 0;
}

/**

how to know how much a variable can hold
int x = sizeof (int);
printf("number of bytes of an int: %d bytes\n", x);
printf("number of bits: 4x8=32 bits\n");
printf("we can store 2^32 in an integer"); /// 4294967296

**/
