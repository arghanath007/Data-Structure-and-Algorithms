# Data Structure and C Programming Language

## Syllabus

![syllabus](https://user-images.githubusercontent.com/54589605/210617866-0e5db580-f6ff-47fa-b8ac-8d76d3e12431.png)

## Online Compiler for C language

* Link -> https://www.programiz.com/c-programming/online-compiler/

## Playlist

* Link -> https://unacademy.com/course/course-on-c-programming-data-structures-gate-24-25/07AHS79R

* Session 9 was Quiz 1

## Important Topics and Video to watch when doing revision

* Pointer videos -> * https://unacademy.com/class/pointer/D788WQUL
                    * https://unacademy.com/class/array/HG0OOZN2
                    * https://unacademy.com/class/array-with-pointers/56LKYSW6
                    * https://unacademy.com/class/structure-and-union/JA6PA1NQ
                    * https://unacademy.com/class/functions/660SO1X9
* Doubt Clearing(Many DPPs and Quiz question discussed) -> https://unacademy.com/class/doubt-clearing-session/SJZIOSWP
## Quiz and Practice Questions
 
* 1 -> https://unacademy.com/quiz/quiz-i/11XTRM5Y37 
* 1(Solutions) -> https://unacademy.com/quiz/quiz-i/11XTRM5Y37/solutions/SP_WR9PER0GSENLRBNM5

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

* 1 -> D (Got it wrong, I checked B initially)
* 2 -> A
* 3 -> D
* 4 -> D (Got it wrong, I checked C initially)
* 5 -> C
* 6 -> B
* 7 -> A (d,100)
* 8 -> C (-1,0) (Got it wrong, I checked A initially)
* 9 -> E (Compilation Error) (Got it wrong, I checked C initially)
* 10 -> C (8) (Got it wrong, I checked D initially)
* 11 -> E (GATE EXAM9) (Got it wrong, I checked C initially)
* 12 -> B (GATE EXAM91) (Got it wrong, I checked E initially)
* 13 -> C (20,9,0) (Got it wrong, I checked B initially)


> '++' and '--' can only be used with variables. They cannot be used with constants as in 'Q9' from above.



* *%lu* ->Unsigned int or unsigned long

### Break and continue (5)

*Break and Continue* -> They are **loop controlling statements** and not branch controlling statements.

* *Break* -> It breaks the current loop.
* *Continue* -> It skips/stops the current iteration of the loop and goes to the next iteration.


## DPP 2.1

* 1 -> B (This is if0)
* 2 -> A (GATE 20232021)
* 3 -> F (You are in else)
* 4 -> C (23)
* 5 -> D (TwoThree)
* 6 -> D (Compilation Error) (Got it wrong, I checked C initially)
* 7 -> D (Default)
* 8 -> F (27)
* 9 -> F (I am WonderfulYaha Kyu?)
* 10 -> A (Let's Party)

## Switch Case

> In switch case we cannot use *float* and *double* type values. We can use *char*, *int*. As seen in Q6 from above.

### exit(0)

> Whenever this code/statement runs within a program then we will *come out or exit out* of the program *completely*.

## Pointers and Array (6) **Very  Important**

* Links ->  * https://unacademy.com/class/pointer/D788WQUL
            * https://unacademy.com/class/array/HG0OOZN2
            * https://unacademy.com/class/array-with-pointers/56LKYSW6
            * https://unacademy.com/class/structure-and-union/JA6PA1NQ
            * https://unacademy.com/class/functions/660SO1X9

> Important as pointer are confusing and many questions come from it. Revise it well. Also go through the notes and the PDFs as well.

* floor() and ceil() are found in *math.h* library. [#include<math.h>].
* floor() gives the *lower nearest* integer number.
* ceil() gives the *upper nearest* integer number.

### Pointer

> If we want to store the address of another variable into a particular variable then a normal variable cannot store the address of another variable. Hence we need a special variable for storing the address of another variable into a particular variable. That special variable is called as the *pointer* variable. 
> When we want to store the address of anything into a variable, then we cannot normally define that variable. Normal variable cannot store addresses of anything(another variable). The system will give me an error.

* *Pointer* -> It is also a variable, but it doesn't store values like characters, floats, integers, double etc. It will only store addresses of others or other variables.

* * int *ptr;
* int age=22;
* ptr = &age;
* printf("%d", ptr); -> *Address of the variable(age) ptr is pointing to.*
* printf("%d", *ptr); -> **Value in the variable(age)**
* printf("%d", &age); -> *Address of variable(age)*
* printf("%d\n", &ptr); -> *Address of pointer ptr.*
* *ptr=25;
* printf("%d", age); -> Value of age is updated from 22 to 25 as '*ptr' is pointing to the value of age. 

> '*' gives the value stored at the memory address.
> '&' gives the address.

* int n;
* int* ptr;
* ptr =n; 
    >*Invalid* as 'ptr' is a pointer(stores memory address) and 'n' is a integer.

* *ptr=&n; 
    >*Invalid* as '*ptr' is integer(valued stored at ptr location) and '&n' is the address of 'n'.

* ptr=&n;
    > *Valid* as 'ptr' and '&n' are both memory addresses.

* *ptr =n;
    > *Valid* as '*ptr' and 'n' are both numbers. They represent the value stored in the memory location.



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
* 2 -> 7,7,8,147 [For n=6] 4,4,4, 48 [For n=3]
* 3 -> B
* 4 -> -2
* 5 -> 8,1,2

## Array With Pointers (7)

* int *p =&A[0];
* int *p= A;

> These two *&A[0]* and *A* both give the same thing, which is the base address of array A.

* int A[5];
* printf("%u",A); -> 500
* printf("%u",&A); -> gives address of the constant pointer 'A'.

* A[0] -> *(500 + 0)

> Both are the same thing.

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


### Difference between regular array and 'int (*p)[5];':

* int (*p)[5]; -> It will create an integer array of size '5'. Each element of the array is an integer only. No name was given to the array. We created a pointer 'p' which will point to the starting address of the array. With this pointer we can access all of the elements within the array.

    ```c
        int A[5]= {1,2,3,4,5};
        int (*p)[2] = A;
        int *q=A;
        printf("%d, %d\n", *p[0], *q); // 1, 1
        q++;
        printf("%d, %d\n", (*p)[0],*q); // 1, 2
        p++,q++;
        printf("%d, %d\n", *p[0],*q); // 3, 3
        p++, q++;
        printf("%d, %d\n", *p[0], *q); // 5, 4
        // p++;
        // printf("%d\n", *p[0]);
    ```


> 'int (*p)[5];' is a pointer to an array.

> When creating a regular array, the name of the regular array is constant. It means the name of the array and the name of the constant pointer is the same. We cannot increment the pointer as it is a constant pointer.

> In 'int (*p)[5];', we are naming the pointer ourselves. Hence we can increment the pointer as well(p++) and it will work fine. It is a pointer to an array.

* int *p[5]; or (int*) p[5]; -> This will create an array where all of the elements are pointers of type int rather than an element.

> 'int *p[5]; or (int*) p[5];' is an array of pointers.

## 2D Array (8)

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
* 'A+i' -> trying to access the name of the *ith* row of the 2D array

* int A[4][5];
* printf("%d", &A[0]);
* printf("%d", A+0);

> 'A[0]' and 'A+0' gives us the same output which is the name of the 0th row of 2D array 'A'.

* printf("%d", &A[0] + 1);
* printf("%d", A[1]);

> '&A[0] + 1' and 'A[1]' will give the same output which is the name of 1st row of 2D array 'A'.

* printf("%d", *(&A[3][2]));
* printf("%d", A[3][2]);

> Both will give the same output which is the value/element that A[3][2].

### Initialize 2D array (9)

* int A[3][4] ={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

> Anything I missed will be initialized to zero or '0' like in 1D array.

## Runtime and Compile(Compilation) time errors:-

> **Runtime** -> Errors which occur during program execution(run-time) after successful compilation are called run-time errors. One of the most common run-time error is division by zero also known as Division error. These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.

> **Compile** -> Errors that occur when you violate the rules of writing syntax are known as Compile-Time errors. This compiler error indicates something that must be fixed before the code can be compiled. All these errors are detected by the compiler and thus are known as compile-time errors.

## Structure (10)

> Collection of different datatype elements.

### Syntax

    ```c
        struct books
        {
            int id;
            float price;
            int quantity;
        };
    ```

* The size of the *struct books* will be 2 + 4 + 2=8bytes.

> 'structure' declaration should be outside main().
> Declaration of 'struct' or structure type means that the user has defined/declared a **new datatype**. It is a user defined datatype. It is using all of the already existing data-types.
> After we have declared the 'structure', then there will not be any memory allocation/declaration for the structure. It is for creating a prototype and anyone who want to use *struct books* can use it. It has a collection of three things which are *int id*, *float price* and *int quantity*. It is just a prototype that I have created and yet to use it. Hence memory will not be allocated for it as well.
> Memory will be allocated when we will use it to create variable of these type(struct type).


* Declaring a *structure* or 'struct' type -> Making a prototype which is user defined datatype. No memory is allocated to it.
* To use it we need to create variables of these structure type.

> 'struct' type can be present within a different 'struct' type. Same name struct cannot be within itself, it is not possible.

```c
    struct student
    {
        int rno;
        struct books b1;
    };

    struct student stud1;
    stud1.b1.id;
```

```c
    struct ABC
    {
        int x;
        char y;
        float z;
    };

    struct ABC a1;
    struct ABC *ptr;
    ptr= &a1;

    a1.x=10;
    a1.y='A';
    a1.z=2.5;

    printf("%d", ptr ->x); // 10
    printf("%d", *ptr.x); //10
```

> 'struct ABC *ptr;' is a *struct ABC* type pointer which is pointing to 'a1'. 'ptr' is a pointer which will store address of structure variable(a1 here).
> 'ptr ->x' and '*ptr.x' are the same.

## Union

> The elements are stored in overlapping spaces.

### Syntax

```c

    union test
    {
        char x;
        int y;
        float z;
    };
```

> The size of the *union test* will be *4bytes* as the highest size of datatype is float which is 4bytes. Hence the size of the union is 4 bytes.
> We cannot store all of the values uniquely at a given time. We can assign one value and use it simultaneously. When we can replaced/changed the previous value with a new value then the previous value is not accessible anymore.


## Union and Structure difference

> In union, we are not getting separate space for each value in union. The largest size data type in the union is used as the size of the union. That size is used **repeatedly and overlapping and overwritten** to store the values of the union. Previous values are replaced/removed when newer values are entered and the previous values are not accessible anymore. All of the values are not uniquely and simultaneously present at the same time.
> In structure, we are getting separate space for each value. The size is the total sum of all the data-types present in the structure. All of the values are uniquely and simultaneously present at the same time.

## DPP 4.

* 1 -> 20 3050 60
* 2 -> 
* 3 -> 632
* 4 -> 60,40
* 5 -> A (A+i)
* 6 -> D ( *(*(A+i) +j) )
* 7 -> D (int A[2][]={{1,2,3}, {4,5,6}};)

## Functions (11)

> Able to use repeated code multiple times without writing it every time. Like *printf()* from *stdio.h* library.

### Syntax

```c
    float fun(int, int, float);

    float fun(int x, int y, float z)
    {
        float xyz= x*y*z;
        return xyz;
    }
    int x=10, y=20; 
    float z=23.5;
    float result = fun(x,y,z);
    printf("%d", result);
```

## Global and Local variable

* Global -> Declared outside the functions. Visible/accessible from anywhere or from any function.
* Local -> Declared within a function. Visible/accessible from within the function itself only.

## Call by value and Call by address/reference

* *Call by value* -> We are just sending a copy of the value to the function and whatever changes are made to it are local to that function itself only. No connection is made between the value sent to the function and the final value in the main function.
* *Call by address/reference* -> We are sending the address of the variable to the function and the function has a pointer as a parameter to store that address and the connection is made. If we make any changes to the pointer's value then the value which the pointer is pointing too also get updated/changed.


* Pointer -> It is a powerful tool yes but it is a destructive tool which can access memory. 

## Quiz question

* int j =(x++, --y);

> No matter what is the value of 'x' and 'y' is, we will always take the 2nd or the last value i.e the value of 'y' here and store it in 'j' variable.

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

n=5
m=7
k=3
t=10

i=3
j=7

