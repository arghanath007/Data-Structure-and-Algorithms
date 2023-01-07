# Data Structure and C Programming Language

## Syllabus

![syllabus](https://user-images.githubusercontent.com/54589605/210617866-0e5db580-f6ff-47fa-b8ac-8d76d3e12431.png)

## Online Compiler for C language

* Link -> https://www.programiz.com/c-programming/online-compiler/

## Playlist

* Link -> https://unacademy.com/course/course-on-c-programming-data-structures-gate-24-25/07AHS79R

## Watch tomorrow

* Link -> https://unacademy.com/class/doubt-clearing-session/5A97SWZZ


## Introduction(1)

### Alphabets

^ -> Cap Symbol
& -> AND, ampersand
* -> Asterisk
{} -> Curly braces
~ -> Tilde
| -> Pipe
\ -> Backward
/ -> Forward

## C Language Tokens and Statements(2)

* Keywords -> Pre-defined words and pre-defined usage.
* Identifiers -> user-generated words for naming things like variables.

### Operators

* Operand: 2+3; '2' and '3' are operands. '+' is the operator and more precisely a binary operator.
          * -6: '6' is operand. '-' is operator and more precisely a unary operator.
          * log x: 'x' is operand. 'log' is operator and more precisely a unary operator.


### Relational Operators

* = -> Assignment operator
* == -> Equals to operator
* != -> Not equals to.

### Left and Right Shift

#### Left Shift

* a << b. 2 << 3. 
* *Formula* -> a << b = a * 2^b.
* *Example* -> 2 << 3 = 2 * 2^3= 16(ans).

> One left shift means multiplied by 2(here), the multiplication is done 'b' times.

#### Right Shift

* a >> b. 2 >> 3. 
* *Formula* -> a >> b = (a/2^b) <- Floor Value(Integer part only). 
* *Example* -> 14 >> 2 = 14/2^2 =14/4 = 3(ans)
* 
> One right shift is divide by 2(here), the division is done 'b' times.

## Batch Statements and loops(3)

### Conditional Operator

![image](https://user-images.githubusercontent.com/54589605/210772964-1846b7ae-502b-490b-b4b7-89c3b69d27e6.png)

* d= (6!=3)? (a=b) : (b=c)  [a=5,b=3,c=2]

> 6!=3 -> True, then (a=b) which is an assignment operator. The assignment operation will take place but the assigned value will not be returned to *d* as the result of the *ternary* operator, instead the *result of the assignment* will be returned to *d* as the result of the *ternary* operator.
> The result is that the assignment was completed/successful/True. If some event happens then the result will be *True or 1*.

Hence **d=1** [Since integer value of True is 1.]  

![image](https://user-images.githubusercontent.com/54589605/210773078-e86687ef-4ae9-4b6a-9e54-131032d87adf.png)

* d= (a=b)? 3:5         [a=5, b=3]

> (a=b) is assignment operation and not comparison operator, which is *==*. As the assignment was successful and it happened and hence it will return *True* and the value of *a* is updated to *3* because of the assignment operator. which means *d=3 and a=3* (Ans). 

### Data Types

> The default of Data Types in C programming language is *signed*.

### Header Files

> They are library functions which are pre-written. The functions which are written along with C language.


## DPP 1 (4)

* 1 -> A (Compiler)
* 2 -> B (Double)
* 3 -> C
* 4 -> B (3)
* 5 -> C (a+b =c)
* 6 -> B 
* 7 -> A (if)
* 8 -> D (!=)
* 9 -> A (=)
* 10 -> A (&)

> Question 6, ['Associativity' comes into the picture when two or more operands have the same precedence. Here '/' and '*']

### printf() variants

* printf("%d", printf("program")); -> program7

> The word 'program' gets printed. *printf* counts the number of characters that it has printed. So printf counts the length of the characters. These count of the characters will be printed after the word 'program' which was already printed.

* For C programming there are at-least 60 different compilers for it where we can run c language code.

### Structure of C-programming language

> *main() function* -> library function. It is already given. It is to be written in every program. It is mandatory/necessary to be written in every program. Without main(), we cannot write a C-program which we want to execute because execution of a C-programs starts from the main() itself.


* **%u** -> It is used for **unsigned** values.
* **%x** -> It is used for getting values in **Hexa-decimal** format.


## DPP 2 

* 1 -> B
* 2 -> A
* 3 -> D
* 4 -> C
* 5 -> C
* 6 -> B
* 7 -> A
* 8 -> A
* 9 -> C
* 10 -> D
* 11 -> C
* 12 -> E
* 13 -> B
* 14 -> B



* *%lu* ->Unsigned int or unsigned long

### Break and continue (5)

*Break and Continue* -> They are **loop controlling statements** and not branch controlling statements.

* *Break* -> It breaks the current loop.
* *Continue* -> It skips/stops the current iteration of the loop and goes to the next iteration.


## DPP 2.1

* 1 -> B
* 2 -> A
* 3 -> E
* 4 -> C
* 5 -> D
* 6 -> C
* 7 -> D
* 8 -> 
* 9 -> B
* 10 -> D 

## Pointers and Array (6) **Very  Important**

* Links ->  * https://unacademy.com/class/pointer/D788WQUL
            * https://unacademy.com/class/array/HG0OOZN2
            * https://unacademy.com/class/array-with-pointers/56LKYSW6

> Important as pointer are confusing and many questions come from it. Revise it well. Also go through the notes and the PDFs as well.

* floor() and ceil() are found in *math.h* library. [#include<math.h>].
* floor() gives the *lower nearest* integer number.
* ceil() gives the *upper nearest* integer number.

### Pointer

> If we want to store the address of another variable into a particular variable then a normal variable cannot store the address of another variable. Hence we need a special variable for storing the address of another variable into a particular variable. That special variable is called as the *pointer* variable. 
> When we want to store the address of anything into a variable, then we cannot normally define that variable. Normal variable cannot store addresses of anything(another variable). The system will give me an error.

* *Pointer* -> It is also a variable, but it doesn't store values like characters, floats, integers, double etc. It will only store addresses of others or other variables.

#### Example

int a=5, b=2; # Normal variable
int *p;  # Special variable called as pointer.(Declaration)
p= &a;   # Pointer p storing the address of a.(Initialization)

int *q= &b; # Initialization and declaration in the same line.

> p is a pointer which points to a.

* char *cp; ->  It is a pointer which will store address of a character type only.
* float *fp; ->  It is a pointer which will store address of a float type only.

* int *ip; ->  It is a pointer which will store address of a integer type only.

> All three(cp,fp,ip) are all storing address but whose address is mentioned in the datatype of the pointer.

* We are storing address then why do we need the type?

> It is needed because when we are fetching/accessing the value of *cp*, the system knows that we are getting a character type and not any other type.

> It is true for *fp* and *ip* as well.

* *Type of a pointer* -> It is saying how many bytes are to be read from the starting address. What type of values are stored from that given starting address.

* Size of Integer is same as the size of the pointer?

> Because pointer stores the address and address is in integer format.


* *Multiplication* and *Division* is not possible in pointers.

### Double Pointer

#### Example

int **p;

> *p* is a pointer which hold's address of another pointer which is integer type. (Pointer pointing to another pointer)

### Array

> Continuos allocation of memory of certain datatype

#### Example

* int A[5];

> It is compulsory/mandatory that it takes up 5 consecutive address in memory.
> The address of the very first element in the array is called as the base address of the array.

* int a[5]= {1,2,3};

> If we declared an array with certain size(say 5 here) and we do not completely fill or make the array full. We just go to a certain size which is smaller than the actual size of the array(say 3 here). Then the rest positions which do not have any values will be initialized with zero(0).

* int A[5];
* printf("%d", A[2]);

> If we tried to print A[2], then we will get an *unpredicted* value as we have not *initialized* the array. As we have not initialized the array, hence no values will be initialized and all of the values will become *unpredicted* values.
> If we tried to initialize even one(1) value in the array then rest of the values will be initialized with zero(0) like above.
> In C-programming language if we want an array values to be initialized with all zeroes, then we can do the below code.

* int A[size] = {0};

> The name of an array is a *constant pointer* which stores the base address of that array.
> If we print the name of the array like below, then we will get the base address of the array.

* printf("%d", A); -> gives base address of the array

* int A[5];
* A++; 

> The 2nd line(A++) will give us an error when we try to run it because 'A' is the name of the array which means it is a constant pointer and it stores the base address of the array. Hence we cannot change/modify it.

## DPP 3

* 1 -> E
* 2 -> 6,6,6,180
* 3 ->
* 4 -> -2
* 5 -> 8,1,2

## Array With Pointers (7)

* int *p =&A[0];
* int *p= A;

> These two *&A[0]* and *A* both give the same thing, which is the base address of array A.

* int A[5];
* printf("%u",A); -> 500
* printf("%u",&A); -> gives address of the constant pointer 'A'.

> Printing 'A' gives you the base address of the Array. *'&A' gives you the address of the constant pointer which is A*.
> Which means the array name and the constant pointer name are the same. 'A' here is the name of the array and the name of the constant pointer is 'A' as well.

* int x=6;
* int *p=&x;

> In normal pointers, the name of the pointer is different to the name of the variable it is pointing to. 'p' is the pointer here and 'x' is the variable to which 'p' is pointing.
> But in Array, both the constant pointer(which is the pointer) and the variable(the array 'A') where the pointer is pointing have the same name which is 'A' here.

* int A[5];
* printf("%u", &A); -> gives the address of the constant pointer 'A'.
* printf("%u", &A+1);

> *'&A+1' means that we are incrementing the address by the size of the entire array*. As '&A' gets initialized first due to precedence and gives '800' as the address of the constant pointer, plus the size of the entire array. We have '5' elements in the array and each is '2bytes'. Hence size of array is 2*5=10bytes. 

* '&A+1' -> 800 + 1* 2 *5 =800 +10=810.
* '&A+2' -> 800 + 2* 2 *5 =800 +20=820.
* '&A+3' -> 800 + 3* 2 *5 =800 +30=830.

* int a[5] = {1,2,3,4,5};
* printf("%d", *a + 3); -> 1 + 3 -> 4

> '*a' gives you the 0th element of the array. It gets executed first as it has higher precedence.

## 2D Array

* int A[4][5];

> In C-language there is only one way to store 2D array elements which is *Row-wise or Row major ordering*.
> In general Data structure, there are two ways to store 2D array elements which are *Row-wise(Row major ordering)* and *Column-wise(Column major ordering)*.

* int A[4][5];
* printf("%d", A);
* printf("%d", &A[0][0]);

> Both 'A' and '&A[0][0]' gives the base address of the 2D array which is 'A'.

### Row-wise order

### Find the address of any element A[i][j].

* Initial Array -> A[4][5]
* Base Address -> 500
* Size of each element -> 2(Integer values)
* A[2][4] = Base address + size of each element * (i * (no. of columns) + j)
          = 500 + 2 * (2*5 +4)
          = 500 + 2*14
          = 528


* int A[4][5];
* printf("%u", A) -> base address
* printf("%u", &A[0][0]) -> base address

'A+1', 'A+2', 'A+3'
> If we write 'A+0', then we are trying to access the name of the first(0th row) row of the 2D array. 'A+1', 'A+2', 'A+3' so no are trying to access the name of second, third, forth row of the 2D array respectively.

* 'A+0' -> trying to access the name of the *first(0th row)* row of the 2D array
* 'A+1' -> trying to access the name of the *second(1st row)* row of the 2D array
* 'A+2' -> trying to access the name of the *third(2nd row)* row of the 2D array
* 'A+3' -> trying to access the name of the *fourth(3rd row)* row of the 2D array



## Scratch Board/Dry runs.

a=1 2 3 4
b=1 2 3 4 2 3 4 3

1 2 3
2 3
3

i=5 4 3 2 1
j=5 4 3 2 1 0 4 3 2 1 0 1

5555
444
33
2

i=20 
j=20 21              GATE 20232021

i=1
j=3  0 || 3==4

m=10
i=1 2 4 8 16
count=0 1 2 3 4

m=20
i=1 2 4 8 16 32
count=0 1 2 3 4 5

i=5
j=1 2 4 8
count=0 1 0 -1 -2
n=5

i=1 2 4 8
j=1
count=0 1 2 3 2
n=5

8 1 2

i=0
j=0 1 2 3 4 5
k=1 2 3 4 5
count=0 1 2 3 4 5 6 7 8 9 10 15 20 25 30
n=5
