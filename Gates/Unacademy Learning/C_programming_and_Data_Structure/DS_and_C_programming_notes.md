# Data Structure and C Programming Language

## Syllabus

![syllabus](https://user-images.githubusercontent.com/54589605/210617866-0e5db580-f6ff-47fa-b8ac-8d76d3e12431.png)

## Online Compiler for C language

* Link -> https://www.programiz.com/c-programming/online-compiler/

## Playlist

* Link -> https://unacademy.com/course/course-on-c-programming-data-structures-gate-24-25/07AHS79R

## Doubts and Solutions

> Check them out as well. They have answers to questions I wans't able to do or had problem solving.

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions

* Session 9 was Quiz 1

## Important Topics and Video to watch when doing revision

* Pointer videos:-

* https://unacademy.com/class/pointer/D788WQUL
* https://unacademy.com/class/array/HG0OOZN2
* https://unacademy.com/class/array-with-pointers/56LKYSW6
* https://unacademy.com/class/structure-and-union/JA6PA1NQ
* https://unacademy.com/class/functions/660SO1X9

* Doubt Clearing(Many DPPs and Quiz question discussed) -> https://unacademy.com/class/doubt-clearing-session/SJZIOSWP
  
  ## Quiz and Practice Questions

* 1 -> https://unacademy.com/quiz/quiz-i/11XTRM5Y37 

* 1(Solutions) -> https://unacademy.com/quiz/quiz-i/11XTRM5Y37/solutions/SP_WR9PER0GSENLRBNM5

## Revision Every week or after every chapter is complete.

* Revision 1 -> Till Switch Case 
* Revision 2 -> Start from pointers.(Completed till NULL pointers)

## Watch tomorrow

* Link -> https://unacademy.com/class/operations-on-binary-tree-part-i/UWAUBRDP
* Revison on C Language. (Completed)

## C programming.

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

![image](https://user-images.githubusercontent.com/54589605/221762845-d98e5704-8330-445c-868b-554cfc02d07a.png)
![image](https://user-images.githubusercontent.com/54589605/221762882-43533083-e0a4-41b3-8195-41be4c7c7dc9.png)

![image](https://user-images.githubusercontent.com/54589605/221763748-16bd816b-ac34-42b0-b2cd-5fa63fcaf046.png)

* Termination Operator -> **;**.

### Logical Operators

![image](https://user-images.githubusercontent.com/54589605/221763171-3820219a-1284-43e2-ae5e-27199abb1209.png)


### Relational Operators

* = -> Assignment operator
* == -> Equals to operator
* != -> Not equals to.

![image](https://user-images.githubusercontent.com/54589605/221763210-e7a05f04-be58-49c8-9add-fb415595d0d7.png)

### Bitwise Operators

![image](https://user-images.githubusercontent.com/54589605/221763444-5287d4da-a04f-4c08-88d9-6ef09bf7be19.png)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d248171c-4690-4e40-9770-4a552f9f3266)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08ee3def-f7d8-44e4-8561-542fd5529487)

* Logical AND, logical OR -> True or False
* Bitwise AND, Bitwise OR -> Finding the value.

### Left and Right Shift

#### Left Shift

![image](https://user-images.githubusercontent.com/54589605/221763482-caefa09e-7eb2-466b-837d-4eaeb0c3bd2b.png)

* a << b. 2 << 3. 
* *Formula* -> a << b = a * 2^b.
* *Example* -> 2 << 3 = 2 * 2^3= 16(ans).

> One left shift means multiplied by 2(here), the multiplication is done 'b' times.

#### Right Shift

![image](https://user-images.githubusercontent.com/54589605/221763541-b207f6fd-8b9f-4a22-b1e0-ffd6ed8c30c8.png)

* a >> b. 2 >> 3. 
* *Formula* -> a >> b = (a/2^b) <- Floor Value(Integer part only). 
* *Example* -> 14 >> 2 = 14/2^2 =14/4 = 3(ans)
* > One right shift is divide by 2(here), the division is done 'b' times.

### Floor and Ceil Function

![image](https://user-images.githubusercontent.com/54589605/221763617-b20ef0e4-236e-4352-a7f1-0758a92d4eb6.png)


## Identifiers

![image](https://user-images.githubusercontent.com/54589605/221762670-970858d6-75db-4ff1-9450-d8d64a547e68.png)

## Literals

![image](https://user-images.githubusercontent.com/54589605/221762759-233fac25-c72b-4613-b2b6-cf70c6bdf0f1.png)


## Operator Precedence and Associativity [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/221763019-b56a0161-9ad8-40fd-b3f2-411032eae756.png)


## Batch Statements and loops(3)

### Conditional Operator

![image](https://user-images.githubusercontent.com/54589605/221763952-b09f84cd-9a3b-4ff7-8c07-13d913098c22.png)
![image](https://user-images.githubusercontent.com/54589605/221764035-689e879c-9352-4829-9c66-720dff696423.png)
![image](https://user-images.githubusercontent.com/54589605/221764077-34380558-edf1-40be-89dd-9df1428964c6.png)

* d= (6!=3)? (a=b) : (b=c)  [a=5,b=3,c=2]

> 6!=3 -> True, then (a=b) which is an assignment operator. The assignment operation will take place but the assigned value will not be returned to *d* as the result of the *ternary* operator, instead the *result of the assignment* will be returned to *d* as the result of the *ternary* operator.
> The result is that the assignment was completed/successful/True. If some event happens then the result will be *True or 1*.

Hence **d=1** [Since integer value of True is 1.]


![image](https://user-images.githubusercontent.com/54589605/221768170-69aec78c-b496-48c3-8e6f-bfa73da75f14.png)
![image](https://user-images.githubusercontent.com/54589605/221768740-f46b05eb-182e-44f0-bdb6-f8a704e59816.png)

* Looks like **1** is not coming.
* From **4_Doubt_Solving_Session**. Page 23 of the PDF.

![image](https://user-images.githubusercontent.com/54589605/210773078-e86687ef-4ae9-4b6a-9e54-131032d87adf.png)

* d= (a=b)? 3:5         [a=5, b=3]

> (a=b) is assignment operation and not comparison operator, which is *==*. As the assignment was successful and it happened and hence it will return *True* and the value of *a* is updated to *3* because of the assignment operator. which means *d=3 and a=3* (Ans). 

![image](https://user-images.githubusercontent.com/54589605/221769136-1b72eea8-e68d-403c-92df-32c9c5cc269e.png)
![image](https://user-images.githubusercontent.com/54589605/221769236-5d59a511-8f32-489e-be50-06ceef0db6d9.png)


## Special Operators

![image](https://user-images.githubusercontent.com/54589605/221764659-1cb23344-ed85-4b90-b7f7-577e22bbe91d.png)


### Data Types

![image](https://user-images.githubusercontent.com/54589605/221764848-7f48731e-db10-4afa-bc1c-a464f72b87d4.png)
![image](https://user-images.githubusercontent.com/54589605/221764924-b6b4a6e6-94da-45d8-af3e-7c80c25826b0.png)

> The default of Data Types in C programming language is *signed*.

## Access Specifier [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/221765043-8fd371a6-1acb-4219-b898-cd8d76f44cb3.png)

## Variables

![image](https://user-images.githubusercontent.com/54589605/221765230-620c2d24-4383-4911-9365-c2d97aa3398b.png)
![image](https://user-images.githubusercontent.com/54589605/221765271-d7a5d6dd-ab13-4269-8153-fe4fc8c92a0a.png)
![image](https://user-images.githubusercontent.com/54589605/221765384-a19ec6fd-5d99-47b9-bce5-527b30bc8e7f.png)

## Output function

![image](https://user-images.githubusercontent.com/54589605/221765601-8ba13afb-21f7-4306-a539-c34aaaa909a6.png)
![image](https://user-images.githubusercontent.com/54589605/221765691-f22af734-cca6-4ac7-aad7-e038f2be02be.png)
![image](https://user-images.githubusercontent.com/54589605/221765772-c254e7a7-d4f6-4b10-a6ac-d0b90e13c8b0.png)

## Input Function

![image](https://user-images.githubusercontent.com/54589605/221765837-9ede9ac8-b2be-46ee-86bf-98750014e0df.png)


### Header Files

> They are library functions which are pre-written. The functions which are written along with C language.

## DPP 1 (4)

> Solved in **4_Doubt_Clearning_Session** PDF file.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df95d71d-ac06-4067-8815-519114364eb4)

* %i.
* https://www.geeksforgeeks.org/difference-d-format-specifier-c-language/

### Structure of C-programming language

![image](https://user-images.githubusercontent.com/54589605/221766732-ec2114ae-ab8f-47f0-a113-781dedb0f453.png)

> *main() function* -> library function. It is already given. It is to be written in every program. It is mandatory/necessary to be written in every program. Without main(), we cannot write a C-program which we want to execute because execution of a C-programs starts from the main() itself.

* **%u** -> It is used for **unsigned** values.
* **%x** -> It is used for getting values in **Hexa-decimal** format.

![image](https://user-images.githubusercontent.com/54589605/221766887-40b8ad27-b262-4cda-956c-d7ebb9b577f6.png)

## Ternary Operator [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/221767918-d43cc9c0-ea5b-4f72-ad0f-2fe5d3cda349.png)


### printf() variants

![image](https://user-images.githubusercontent.com/54589605/221769499-4f1033af-cf57-43a2-9b3d-10987e14ff49.png)

* printf("%d", printf("program")); -> program7

> The word 'program' gets printed. *printf* counts the number of characters that it has printed. So printf counts the length of the characters. These count of the characters will be printed after the word 'program' which was already printed.

* For C programming there are at-least 60 different compilers for it where we can run c language code.

## Sizeof

![image](https://user-images.githubusercontent.com/54589605/221769835-c945b464-1e57-445e-a32c-882ce7b5b53a.png)

## Type Casting

![image](https://user-images.githubusercontent.com/54589605/221770021-7a9eb27a-4d8e-4941-aa8b-36cfba90353a.png)

## ASCII

![image](https://user-images.githubusercontent.com/54589605/221770205-5298a9a9-1644-4295-8c17-0512f7d3f16c.png)
![image](https://user-images.githubusercontent.com/54589605/221770267-80e3406f-ec7c-48eb-b1ad-0d46ebff561a.png)


## Branching Statements

![image](https://user-images.githubusercontent.com/54589605/221770426-c07fde5a-de60-4432-b370-0eff728a00aa.png)
![image](https://user-images.githubusercontent.com/54589605/221770443-b5eb1fce-4d41-4478-b591-d872577b721b.png)
![image](https://user-images.githubusercontent.com/54589605/221770462-5d3d7701-24bd-4a48-adde-94a25fef65d7.png)
![image](https://user-images.githubusercontent.com/54589605/221770491-cb63b83c-b177-4939-8768-c3b597e38689.png)


## DPP 2

> Solved in **8_Doubt_Clearning_Session**.

* 1 -> D (Got it wrong, I checked B initially)
* 2 -> A
* 3 -> D
* 4 -> D (Got it wrong, I checked C initially)
* 5 -> C
* 6 -> B
* 7 -> A (d,100)
* 8 -> C (-1,0) (Got it wrong, I checked A initially)
* 9 -> E (Compilation Error) (Got it wrong, I checked C initially) [10--, cannot decrement a constant value]
* 10 -> C (8) (Got it wrong, I checked D initially)
* 11 -> E (GATE EXAM9) (Got it wrong, I checked C initially)
* 12 -> B (GATE EXAM91) (Got it wrong, I checked E initially)
* 13 -> C (20,9,0) (Got it wrong, I checked B initially)

> '++' and '--' can only be used with variables. They cannot be used with constants as in 'Q9' from above.

* *%lu* ->Unsigned int or unsigned long

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56bbfcda-8fec-43ee-b68a-1e088cf8e6e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d669742-1c31-4224-82d7-3456940a12ac)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ebc72a5-01ed-4c8b-b307-c616d3c9df7e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54e859ba-e527-4c5e-908f-4ad4ec8e3941)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baa39ef3-9e85-4855-8c9c-1ddb9e0905b9)

* Zero(0) -> False

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/153559d6-544c-487b-97bd-aa71ec7b15c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/236d8673-d5b8-4cbf-883e-b2cd9372347c)











### Break and continue (5)

*Break and Continue* -> They are **loop controlling statements** and not branch controlling statements.

* *Break* -> It breaks the current loop.
* *Continue* -> It skips/stops the current iteration of the loop and goes to the next iteration.

![image](https://user-images.githubusercontent.com/54589605/221773758-0e5c07c2-8438-4119-950e-7c299000c62c.png)
![image](https://user-images.githubusercontent.com/54589605/221773781-a1cef7cc-510d-474d-b526-2f7373b131bc.png)

## goto

![image](https://user-images.githubusercontent.com/54589605/221774060-0cd7fdb3-78a5-4aa3-a9ce-10c580a3b97c.png)

## Switch case

![image](https://user-images.githubusercontent.com/54589605/221774275-1523b1f2-61bd-4b90-aa5e-0b100ef9b738.png)
![image](https://user-images.githubusercontent.com/54589605/221774313-87224e3f-a749-4c26-9408-ad36e19e1f83.png)

> In switch case we cannot use *float* and *double* type values. We can use *char*, *int*. As seen in Q6 from above.

## Loops

> Examples of **For, while and Do-while** in **5_Pointer** PDF file. From Page 12.

### While Loop

![image](https://user-images.githubusercontent.com/54589605/221774801-b7923266-ae72-4a77-9e84-bda5c63b9811.png)

### do-while loop

![image](https://user-images.githubusercontent.com/54589605/221774887-468f65ae-de3d-4741-ac6b-fb02f164ead9.png)


## DPP 2.1

Solved in **8_Doubt_Clearning_Session**.

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

### Q2

![image](https://user-images.githubusercontent.com/54589605/221786399-0fe074bc-206e-46c4-af91-1dad52b2ad2c.png)
![image](https://user-images.githubusercontent.com/54589605/221786370-3d6e13df-046e-483a-aa1b-fdbf52c93a91.png)
![image](https://user-images.githubusercontent.com/54589605/221786532-95ec0658-5a5c-47fd-9e9d-bef641fb4e22.png)

* Since we are getting **j=21** or just **21** as the output for the **if** condition and **21** is True that why **Gate 2023** is getting printed out.

## Switch Case

> In switch case we cannot use *float* and *double* type values. We can use *char*, *int*. As seen in Q6 from above.

### exit(0)

> Whenever this code/statement runs within a program then we will *come out or exit out* of the whole program *completely*.

## Pointers and Array (6) **Very  Important**

* Links ->  * https://unacademy.com/class/pointer/D788WQUL
  
            * https://unacademy.com/class/array/HG0OOZN2
            * https://unacademy.com/class/array-with-pointers/56LKYSW6
            * https://unacademy.com/class/structure-and-union/JA6PA1NQ
            * https://unacademy.com/class/functions/660SO1X9

> Important as pointer are confusing and many questions come from it. Revise it well. Also go through the notes and the PDFs as well.

![image](https://user-images.githubusercontent.com/54589605/221787980-6475ea2b-b4cd-496b-94f8-23fdc17b04e6.png)


* floor() and ceil() are found in *math.h* library. [#include<math.h>].
* floor() gives the *lower nearest* integer number.
* ceil() gives the *upper nearest* integer number.

### Pointer

> If we want to store the address of another variable into a particular variable then a normal variable cannot store the address of another variable. Hence we need a special variable for storing the address of another variable into a particular variable. That special variable is called as the *pointer* variable. 
> When we want to store the address of anything into a variable, then we cannot normally define that variable. Normal variable cannot store addresses of anything(another variable). The system will give me an error.

* *Pointer* -> It is also a variable, but it doesn't store values like characters, floats, integers, double etc. It will only store addresses of others or other variables. It is a variable which is used to store address of other variables.

![image](https://user-images.githubusercontent.com/54589605/221788341-0b805ae5-1665-4c08-98e0-763cc8446c0a.png)
![image](https://user-images.githubusercontent.com/54589605/221788360-4f9ed8f1-afb0-4ae3-8bd3-3feb7a7189e3.png)

![image](https://user-images.githubusercontent.com/54589605/221788672-def4fd85-617a-4e10-957d-b75b5835b44a.png)
![image](https://user-images.githubusercontent.com/54589605/221788696-e5642f2e-d4d5-4218-9955-0e6cf0c1ad84.png)
![image](https://user-images.githubusercontent.com/54589605/221788718-1491f373-4b1b-4e97-9005-96efd8278db2.png)

* As pointers store address and address is nothing but **integer value**. Hence **sizeof()** returns **2 which is the size of int or integer** for any type of pointer whether it is **int, float, double or char**. 

![image](https://user-images.githubusercontent.com/54589605/221789452-b2354ebb-a9a2-4041-b8b4-324c7343477c.png)

* Increment or decrement in pointer is done by size of data item it points to.

![image](https://user-images.githubusercontent.com/54589605/221789671-f0cda85c-4165-4756-a68b-07955173816d.png)
![image](https://user-images.githubusercontent.com/54589605/221789924-a6453f76-4acb-4bdb-a8a6-3a774fe1dff7.png)

## Double Pointer

![image](https://user-images.githubusercontent.com/54589605/221789968-a25483fe-846a-4240-b123-45f8653182d5.png)


* int *ptr;

* int age=22;

* ptr = &age;

* printf("%d", ptr); -> *Address of the variable(age) ptr is pointing to.*

* printf("%d", *ptr); -> **Value in the variable(age)**

* printf("%d", &age); -> *Address of variable(age)*

* printf("%d\n", &ptr); -> *Address of pointer ptr.*

* *ptr=25;

* printf("%d", age); -> Value of age is updated from 22 to 25 as '*ptr' is pointing to the value of age. 

[**IMPORTANT**]

> '*' gives the value stored at the memory address.
> '&' gives the address.

* int n;

* int* ptr;

* ptr =n; 
    -> *Invalid* as 'ptr' is a pointer(stores memory address) and 'n' is a integer. Type mismatch error.

* *ptr=&n; 
    -> *Invalid* as '*ptr' is integer(value stored at the location where pointer 'ptr' is pointing to) and '&n' is the address of 'n'.

* ptr=&n;
    -> *Valid* as 'ptr' and '&n' are both memory addresses.

* *ptr =n;
    -> *Valid* as '*ptr' and 'n' are both numbers. They represent the value stored in the memory location.

#### Example

int a=5, b=2;  [Normal variable]
int *p;  [Special variable called as pointer.(Declaration)] 
p= &a;   [Pointer p storing the address of a.(Initialization)]

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

> *p* is a pointer which hold's address of another pointer which is of integer type. (Pointer pointing to another pointer)

### Array

> Continuos allocation of memory of certain datatype. Homogeneous dataype.

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

Solved in **8_Doubt_Clearning_Session**.

* 1 -> B
* 2 -> 7,7,8,147 [For n=6] 4,4,4, 48 [For n=3]
* 3 -> C (Got it wrong, I checked B initially)
* 4 -> 0 [When n=6. Any value of n, gives count=0]
* 5 -> 8,1,2 [When n=6];  64 1 5 [When n=64]

### Q1

![image](https://user-images.githubusercontent.com/54589605/221845789-4bf16e55-db0b-4d45-ba05-8905a642542c.png)
![image](https://user-images.githubusercontent.com/54589605/221845997-d2373881-15c9-4a5b-b445-3e6ef7932824.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/8A11AF610A

### Extra Questions

* From **8_Doubt_Clearning_Session**.

![image](https://user-images.githubusercontent.com/54589605/221846570-4b7949dc-7f89-4b82-80ab-4724f03a9151.png)
![image](https://user-images.githubusercontent.com/54589605/221846604-6a0fee97-9910-414f-a97b-cfd4bbd07b35.png)
![image](https://user-images.githubusercontent.com/54589605/221847480-da6aeadf-46f0-4092-a1c1-0c726efdbae4.png)
![image](https://user-images.githubusercontent.com/54589605/221847547-1136f6cb-da5c-4810-92e4-e95ddcd93571.png)
![image](https://user-images.githubusercontent.com/54589605/221847583-0127bfb6-4c06-490b-88b3-19510bf68508.png)
![image](https://user-images.githubusercontent.com/54589605/221847635-d45ca320-468f-420e-b7af-f2bf20aa0a18.png)



## Array With Pointers (7)

![image](https://user-images.githubusercontent.com/54589605/221837423-9a544a67-9697-443a-a9a3-ce04a03cc1af.png)
![image](https://user-images.githubusercontent.com/54589605/221837493-2a5afd02-64ea-4e9b-823a-b278e9b24e59.png)
![image](https://user-images.githubusercontent.com/54589605/221837783-a4c6ec50-f3f0-4b2d-bcfe-33d3e44d1ce6.png)
![image](https://user-images.githubusercontent.com/54589605/221837830-c9531e91-10fa-4664-857b-c1c7bcfc1c09.png)
![image](https://user-images.githubusercontent.com/54589605/221837961-a9ae3766-4e7d-4440-9f12-4d5ac8aa8ba3.png)
![image](https://user-images.githubusercontent.com/54589605/221838139-1b2154d0-95fd-45a2-89fc-6488c290c67f.png)
![image](https://user-images.githubusercontent.com/54589605/221838317-ff04443c-fb6a-4ff1-9932-078000a6d28a.png)
![image](https://user-images.githubusercontent.com/54589605/221838479-ba66838b-de58-4de6-a05e-3e4c4c929c51.png)
![image](https://user-images.githubusercontent.com/54589605/221838654-0475874c-5901-4342-9e1f-117623ae07ef.png)
![image](https://user-images.githubusercontent.com/54589605/221838792-a6deea09-a849-41b2-818e-4b4796308d6c.png)
![image](https://user-images.githubusercontent.com/54589605/221839136-66e7b76b-6aee-4768-9f3c-63f0d2b8f3b9.png)

* No errors, **constant pointer A and variable x** are explicitely converted to  **(int)** and **(int *)** respectively.

* int *p =&A[0];
* int *p= A;

> These two *&A[0]* and *A* both give the same thing, which is the base address of array A.

* int A[5];

* printf("%u",A); -> 500 which is the base address of array 'A'.

* printf("%u",&A); -> **Gives address of the constant pointer 'A' which is different from the base address of array 'A'**.

* A[0] -> *(500 + 0)

> Both are the same thing.

> Printing 'A' gives you the base address of the Array. **'&A' gives you the address of the constant pointer which is A**.
> **Which means the array name and the constant pointer name are the same**. 'A' here is the name of the array and the name of the constant pointer is 'A' as well.

* int x=6;
* int *p=&x;

> In normal pointers, the name of the pointer is different to the name of the variable it is pointing to. 'p' is the pointer here and 'x' is the variable to which 'p' is pointing.
> But in Array, both the constant pointer(which is the pointer) and the variable(the array 'A') where the pointer is pointing have the same name which is 'A' here.

* int A[5];
* printf("%u", &A); -> gives the address of the constant pointer 'A'.
* printf("%u", &A+1);

> *'&A+1' means that we are incrementing the address by the size of the entire array*. As '&A' gets initialized first due to precedence and gives '800' as the address of the constant pointer, plus the size of the entire array. We have '5' elements in the array and each element is '2bytes' as they are integer type. Hence size of array is 2*5=10bytes. 

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

![image](https://user-images.githubusercontent.com/54589605/221849598-17f63b70-61d7-4844-b629-d7ff848d7639.png)
![image](https://user-images.githubusercontent.com/54589605/221849627-39dc89ca-d256-4d60-9dc8-00349a1f8ee0.png)
![image](https://user-images.githubusercontent.com/54589605/221851614-99c1a4bc-c4bb-4b47-8e16-6c0ca046c5e2.png)
![image](https://user-images.githubusercontent.com/54589605/221852104-a6af6bea-02d3-4cfe-b884-663a0e012def.png)


## 2D Array (8)

![image](https://user-images.githubusercontent.com/54589605/221840561-0c9e6c5d-730c-4c6b-a541-e7018971e716.png)
![image](https://user-images.githubusercontent.com/54589605/221840580-919a0484-2708-4f34-8300-e9f4198af733.png)
![image](https://user-images.githubusercontent.com/54589605/221840867-71b2a6ad-5ec8-48fb-bb6b-38e556d9698b.png)
![image](https://user-images.githubusercontent.com/54589605/221852289-451ecc16-1f80-4012-854c-9f44f52d9dc6.png)
![image](https://user-images.githubusercontent.com/54589605/221852325-6be80b1a-3c06-49e8-b3dd-91b7aaeadd4d.png)
![image](https://user-images.githubusercontent.com/54589605/221852453-fa190e98-241d-489f-8e1d-562b6fd7cee5.png)


* int A[4][5];

> In C-language there is only one way to store 2D array elements which is *Row-wise or Row major ordering*.
> In general Data structure, there are two ways to store 2D array elements which are *Row-wise(Row major ordering)* and *Column-wise(Column major ordering)*.

* int A[4][5];
* printf("%d", A);
* printf("%d", &A[0][0]);

> Both 'A' and '&A[0][0]' gives the base address of the 2D array which is 'A'.

### Row-wise order

![image](https://user-images.githubusercontent.com/54589605/221840700-af750b59-86e1-45ea-ad1b-e4a673cc3a76.png)
![image](https://user-images.githubusercontent.com/54589605/221840724-cf9a6711-9de4-4c53-8ce9-ef18b9789044.png)


### Find the address of any element A[i][j].

* Initial Array -> A[4][5]

* Base Address -> 500

* Size of each element -> 2(Integer values)

* A[2][4] = Base address + size of each element * (i * (no. of columns) + j)
  
          = 500 + 2 * (2*5 +4)
          = 500 + 2*14
          = 528
          
## Column Major Order [**IMPORTANT**]

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/5F70C77520

![image](https://user-images.githubusercontent.com/54589605/222139974-782e2cd5-bf44-447c-a7dd-aed19048b17b.png)
![image](https://user-images.githubusercontent.com/54589605/222146605-841da049-7e2d-4947-a159-3fd37cb383b2.png)
![image](https://user-images.githubusercontent.com/54589605/222147606-5f5326e3-11f4-4659-8f7d-42aafc0c7c65.png)
![image](https://user-images.githubusercontent.com/54589605/222147697-3d49c6c8-a4b6-46aa-8cdb-0bf080e812fc.png)
![image](https://user-images.githubusercontent.com/54589605/222147864-cbb52508-d857-426a-b1ad-b392cbee4934.png)

* A[i][j] = Base_Address + W * ((Col_sub - LL_col)* r + (Row_sub - LL_row))

* W -> Size of each element. [We have to find theses here in the above question]
* Col_sub -> Column subset whose element is to be found
* LL_col -> Lower limit of column
* r -> No. of rows
* Row_sub -> Row subset whose element is to be found
* LL_row -> Lower limit of row

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

> Both will give the same output which is the value/element at A[3][2].

### Initialize 2D array (9)

![image](https://user-images.githubusercontent.com/54589605/221848463-e6a03fb8-d46a-422d-b6b5-d4b675688312.png)
![image](https://user-images.githubusercontent.com/54589605/221848942-ca2f9b4f-1617-439f-938b-773b85f3fcfc.png)
![image](https://user-images.githubusercontent.com/54589605/221849299-af4b6819-4688-42a5-8851-606c143f0a73.png)
![image](https://user-images.githubusercontent.com/54589605/221849367-91d2e9f7-7c7a-446c-b2d6-e30d0f9e3d84.png)


* int A[3][4] ={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

> Anything that is missed will be initialized to zero or '0' like in 1D array.

## Runtime and Compile(Compilation) time errors:-

> **Runtime** -> Errors which occur during program execution(run-time) after successful compilation are called run-time errors. One of the most common run-time error is division by zero also known as Division error. These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.

> **Compile** -> Errors that occur when you violate the rules of writing syntax are known as Compile-Time errors. This compiler error indicates something that must be fixed before the code can be compiled. All these errors are detected by the compiler and thus are known as compile-time errors.

## 3D Array

![image](https://user-images.githubusercontent.com/54589605/221852589-385914d5-9a35-4959-8113-77c6118714bb.png)
![image](https://user-images.githubusercontent.com/54589605/221852618-1660abc4-4a9b-4aca-8f04-fafeb2a19967.png)
![image](https://user-images.githubusercontent.com/54589605/221852685-1b187dad-caae-4b52-8858-4b54e2c55c74.png)

## Void Pointer

![image](https://user-images.githubusercontent.com/54589605/221852981-df34005a-8fc2-481e-96f9-e5b07530e309.png)
![image](https://user-images.githubusercontent.com/54589605/221853114-265c0c26-decc-452a-b6ee-bd92b3a0a949.png)

* As it is a **void pointer(* )**, we have to **explicitely** mention the datatyper here, i.e **(int * )p**, otherwise we will get an error.

![image](https://user-images.githubusercontent.com/54589605/221853762-44f06a96-241c-44e9-a954-bafd4665dc60.png)

* We don't have to change the type of **a**, it is already in **int address** type, we have to change of **p**, which is the **void pointer** here. In the printf statement, we have to write like below.

* printf("%d", * (int *) p);

### Array Question

![image](https://user-images.githubusercontent.com/54589605/221851239-cf953245-157f-41c0-986a-238cfd695dd7.png)

## Structure (10)

![image](https://user-images.githubusercontent.com/54589605/221854335-0925a291-2748-454c-be79-bc328a2c13ce.png)
![image](https://user-images.githubusercontent.com/54589605/221854385-79721c40-85a1-4e5a-9fd0-1b326ea1c78f.png)
![image](https://user-images.githubusercontent.com/54589605/221854560-fc9b94b2-c634-4787-b35b-3033a87eb17e.png)
![image](https://user-images.githubusercontent.com/54589605/221854654-09c378c4-c787-41f0-a866-1319de28c60e.png)

* 16 -> int is 2, float is 4, char -> 1 * 10 = 10 -> 2 + 4 + 10 -> 16

![image](https://user-images.githubusercontent.com/54589605/221854880-3fddb423-e496-4e08-85ea-2ec9b7914ce2.png)


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

* The size of the *struct books* will be (2 + 4 + 2) = 8 bytes.

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

![image](https://user-images.githubusercontent.com/54589605/221855511-2336f802-450b-40ee-9a3f-d52b347ad11e.png)


## Union

![image](https://user-images.githubusercontent.com/54589605/221855258-8317e2b4-8b91-4f12-852b-a1c9500cf068.png)
![image](https://user-images.githubusercontent.com/54589605/221855281-dc5750f8-b2ab-4279-b026-80c418aa9266.png)


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

> The size of the *union test* will be *4bytes* as the **highest size of datatype is float which is 4bytes. Hence the size of the union is 4 bytes.**
> **We cannot store all of the values uniquely at a given time**. We can assign one value and use it simultaneously. When we can replaced/changed the previous value with a new value then the previous value is not accessible anymore.

## Union and Structure difference

> In union, we are not getting separate space for each value. The largest size data type in the union is used as the size of the union. That size is used **repeatedly and overlapping and overwritten** to store the values of the union. Previous values are replaced/removed when newer values are entered and the previous values are not accessible anymore. **All of the values are not uniquely and simultaneously present at the same time**.
> In structure, we are getting separate space for each value. **The size is the total sum of all the data-types present in the structure**. **All of the values are uniquely and simultaneously present at the same time**.

## DPP 4.

> Solved in **12_Doubt_Solving_Session**.

* 1 -> 20 3050 60

* 2 -> [Check Doubt Solving Section In Unacademy, uploaded it there]

* 3 -> 632

* 4 -> 60,40 [*1[a] -> *a[1] -> a[1][0]]

* 5 -> C (*(A+i)) (Got it wrong, I checked A initially, A+ i gives the address of the element. ( *(A+i) gives the value of the element.)

* 6 -> D (*(*(A+i) +j))

* 7 -> A,B,C (Got it wrong, I checked D initially thinking it asked for invalid declarations. D -> (int A[2][]={{1,2,3}, {4,5,6}};))

* Valid -> A,B,C
* Invalid -> D

> In multi dimensional array, we have to mention the boundation except the first one. We can leave the first dimension and it will be filled by the system itself. We have to mention the rest of them and it is mandatory otherwise we will get an error.

## Functions (11)

![image](https://user-images.githubusercontent.com/54589605/221858032-7df10f84-974e-43b5-8c9b-565a12e001fc.png)
![image](https://user-images.githubusercontent.com/54589605/221858111-c8eed570-0b20-4b2a-b6ee-cd191ce6eab6.png)
![image](https://user-images.githubusercontent.com/54589605/221858193-4d886675-7d3e-40db-b9f8-c4eb42929d86.png)
![image](https://user-images.githubusercontent.com/54589605/221858241-b57d5e23-ed02-4ad3-a914-d31eadec22c3.png)
![image](https://user-images.githubusercontent.com/54589605/221858461-17005f6a-cd2d-4812-a088-1f734f6e3022.png)


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

![image](https://user-images.githubusercontent.com/54589605/221859550-7c31bcaf-19d4-4897-96ad-c7fe1fb4a2df.png)


* **Global** -> Declared outside the functions. Visible/accessible from anywhere or from any function. They are created in memory just at the start of the program and they are removed/deleted after the complete execution of the program. This is the lifetime of a global variable. Their lifetime is during the program running/execution or throughtout the program. 

* **Local** -> Declared within a function. Visible/accessible from within the function itself only. When the function is called and the execution of the program is started then the local variables are created in memory and when the execution of the function is complete then the local variables are  removed/deleted from the memory.

> Parameters of a function are local variables as well.

![image](https://user-images.githubusercontent.com/54589605/221859700-4273839f-a9d4-4613-be21-88510678269b.png)
![image](https://user-images.githubusercontent.com/54589605/221859779-02926e05-7f7f-47a2-b413-5607800fc2fa.png)
![image](https://user-images.githubusercontent.com/54589605/221860008-f293e157-e1b9-42a2-af2e-f78f98f26447.png)
![image](https://user-images.githubusercontent.com/54589605/221860196-900b2ae9-17cd-4ffe-86e3-05c87ebdbbc3.png)


## Call by value and Call by address/reference

* *Call by value* -> We are just sending a copy of the value to the function and whatever changes are made to it are local to that function itself only. No connection is made between the value sent to the function and the final value in the main function.

*Call by value*
![image](https://user-images.githubusercontent.com/54589605/221858620-9e7a30a2-b86a-4c21-a8b2-e69e63f4fb40.png)


* *Call by address/reference* -> We are sending the address of the variable to the function and the function has a pointer as a parameter to store that address and the connection is made. If we make any changes to the pointer's value then the value which the pointer is pointing too also get updated/changed.

*Call by address/reference*
![image](https://user-images.githubusercontent.com/54589605/221858665-48b3b197-4474-433e-89da-90a03e56f2df.png)


![image](https://user-images.githubusercontent.com/54589605/212530290-cccf5b83-a34b-4fba-a899-9730facaa306.png)
![image](https://user-images.githubusercontent.com/54589605/212530339-2a2f90ff-d9ac-4d64-974e-c78bc4e60085.png)
![image](https://user-images.githubusercontent.com/54589605/212530371-15c26203-036e-4ad9-8c19-6681ffacdd7e.png)

* Pointer -> It is a powerful tool yes but it is a destructive tool which can access memory. Hence it was removed partially from recent programming languages like JS, Python, Java.

## DPP 5

> Solved in **12_Doubt_Solving_Session**.

* 1 -> 96
* 2 -> error [Cannot write function inside the main()]
* 3 -> 11
* 4 -> 10 ['exit(0)', got it wrong , thought '1010' is the answer]
* 5 -> 1  [Finding HCF of two numbers]
* 6 -> 23 [ Changed the question]
* 7 -> 1

> *exit(0)* terminates/exits out of the whole program, not just the function but the whole program itself.

> In Q1, We can only return **one(1)** value from a function itself. But we have returned **two values** here, **return (x,y)**.

![image](https://user-images.githubusercontent.com/54589605/221865514-d178aad0-8927-4e16-a12c-985342e11d08.png)
![image](https://user-images.githubusercontent.com/54589605/221865550-60e15f8a-c514-4b5f-91f8-97daafdcd1b6.png)
![image](https://user-images.githubusercontent.com/54589605/221865628-6c9838e8-9f6d-4cf4-95fd-974d06ee52a9.png)


> In Q2, if function was outside of main(), then it will give *-10* as the output/result of the program.

## 12_Doubt_Solving_Session PDF questions (12)

* 1 -> 321

* 2 -> 1213121

* 3 -> Error ("abc" is a string or more than one character. 'char *s' is a pointer of type character)

* 4 -> 7

![image](https://user-images.githubusercontent.com/54589605/221860808-3fa0011a-2872-4412-9321-42e2aa2be2ed.png)
![image](https://user-images.githubusercontent.com/54589605/221860867-be12bf58-a825-4885-87f1-e04b0290c85d.png)
![image](https://user-images.githubusercontent.com/54589605/221860922-2568af02-c67f-4a68-9204-e7590c13f20d.png)

![image](https://user-images.githubusercontent.com/54589605/221865348-032e65b9-3124-4030-ab1c-2d3c7793f09a.png)
![image](https://user-images.githubusercontent.com/54589605/221865369-41b1b959-980a-494d-91ba-46ceb3f1b9e6.png)


## Recursion (13)

![image](https://user-images.githubusercontent.com/54589605/221870155-96a2ecfe-edb4-4bd3-8ad1-fe48d33742d2.png)
![image](https://user-images.githubusercontent.com/54589605/221870276-0f3cc784-e579-404b-bf8d-a5331abc1ec2.png)


> Function calling itself. Good Recursive functions have a good condition as a base/terminating condition. 

### 13_Recursion_Questions PDF

* 1 -> 2 [Q ->foo(513,2)]
* 2 ->

![image](https://user-images.githubusercontent.com/54589605/221870575-4aecef70-4cc2-4675-953a-cd2eaf99bba9.png)
![image](https://user-images.githubusercontent.com/54589605/221870741-90eedffc-6763-4088-b905-216c38996334.png)
![image](https://user-images.githubusercontent.com/54589605/221871137-7945b1d7-973e-442e-9f52-738d6a31bf51.png)
![image](https://user-images.githubusercontent.com/54589605/221871222-d8a898e3-b573-4f1c-a2c3-40f1f1627ae5.png)
![image](https://user-images.githubusercontent.com/54589605/221871497-a5c8b12b-4cef-462b-a3a4-2638683dfbcb.png)
![image](https://user-images.githubusercontent.com/54589605/221872011-b0ad46ec-f550-4353-b091-55c81ce2bf15.png)
![image](https://user-images.githubusercontent.com/54589605/221877925-10b3e522-ef71-4732-bf0c-fc408387d878.png)
![image](https://user-images.githubusercontent.com/54589605/221877951-7dbd92cc-6a8b-442a-b2dd-4040a5331ae7.png)

## Question

![image](https://user-images.githubusercontent.com/54589605/221874776-8cae9037-6149-403d-9cb5-96566c7d7781.png)
![23](https://user-images.githubusercontent.com/54589605/221877597-e8b8e243-7921-4a13-8599-e2a89001f7c9.jpeg)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/25FA132746

## Question

![image](https://user-images.githubusercontent.com/54589605/221879512-eb00b820-99d2-4fdd-98dd-4e657e5a6184.png)
![image](https://user-images.githubusercontent.com/54589605/221879556-13b007c8-c524-4c3e-8265-f4c4492182d8.png)
![24](https://user-images.githubusercontent.com/54589605/221879874-8188ad80-ca21-415b-b610-216f87c20e45.jpeg)
![image](https://user-images.githubusercontent.com/54589605/221880258-c1e26ce2-c2e6-4053-be22-a13e8395395e.png)
![image](https://user-images.githubusercontent.com/54589605/221880287-a4a46c8e-b3b2-43ce-8dcd-743aad65dbe0.png)


![image](https://user-images.githubusercontent.com/54589605/221880744-066104c3-5379-402b-a491-cc9d90bae874.png)
![image](https://user-images.githubusercontent.com/54589605/221880679-3327008d-8675-4b26-93f9-1fa49c451d02.png)
![image](https://user-images.githubusercontent.com/54589605/221880886-98b7d806-8b15-4d6a-8ae9-6ee2c9be81cf.png)


## DPP 6

* 1 -> D
* 2 -> 10230 [Got it wrong , thought '1048576' is the answer]
* 3 -> 4 [Got it wrong , thought '3' is the answer]

### 14_Storage_Classes PDF (13)

![image](https://user-images.githubusercontent.com/54589605/221881115-59cef393-a72e-4a5c-8f46-6662cecec552.png)
![image](https://user-images.githubusercontent.com/54589605/221881165-744c1c7b-d42f-45bc-ad1a-c3a89ba78d6d.png)

* fun(fun(5)) -> fun(5) + fun(7) = 7 + 17 = *24*(Ans)

> We are re-using the already calculated values(fun(0), fun(1)...fun(5)) from previous fun(5) but computer is doing it again from scratch. Hence first it is calculating *fun(5)* first as it is inside and then calculates *fun(7)* separately from scratch without re-using the values it got from fun(5). Hence we are adding *fun(5) + fun(7)* to get the count of *fun(fun(5))*.

* **IMPORTANT** look at all of the recursion question int *13_REcursive_Questions PDF* file.

#### Question

* 1 -> 51 (Got it wrong, thought it was 5 initially)

## Static Variable (14)

![image](https://user-images.githubusercontent.com/54589605/221897517-f15749c9-670c-4d40-882f-a3fd15161fb5.png)


> In recursion, **it is created for first call and used by all recursion calls as a single copy**. If a static variable is created within a recursive function then it will be **created/generated once only** when the function is called for the very first time unlike local variables which are created/generated for every recursive call of the function.
> **By default**, if we haven't initialized a *static* variable then it is initialized by *zero(0)*. 
> In normal variables, if we haven't initialized the variable then it is initialized by some *garbage value*.

![image](https://user-images.githubusercontent.com/54589605/221897955-d5420a14-d63b-46bb-9024-9ff9523bf7f4.png)

### Question

![image](https://user-images.githubusercontent.com/54589605/221901986-bab0a048-16f3-4a27-b215-d0478366b413.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/455E0B5471


![image](https://user-images.githubusercontent.com/54589605/221902744-2fd5a676-bbe9-4b8f-8913-7574f29809df.png)
![image](https://user-images.githubusercontent.com/54589605/221903104-673e7b77-e515-4cdf-a3e5-2612394bf154.png)
![image](https://user-images.githubusercontent.com/54589605/221903385-8e051139-b55a-4d98-8ab8-abbdc33f7e9a.png)
![image](https://user-images.githubusercontent.com/54589605/221904318-8afae79f-a5ea-4469-88f7-3ce2e3d09589.png)


## Dynamic Memory Allocation (15)

> If any memory allocation assignment is decided on rumtime. 
> On runtime we are deciding if we need more memory or not. Yes, we can get more memory during runtime and this is called as Dynamic Memory allocation. It happens during runtime only.

![image](https://user-images.githubusercontent.com/54589605/221934662-e22d1c56-00b7-4c40-8d19-df7840cde945.png)


* int x; -> Pre-defined variables.

> The memory which is pre-defined when writing the program is called as normal allocation

* Two functions for Dynamic Memory Allocation:-

* **malloc()** -> memory allocation during runtime. For one element.
  
            * Example -> malloc(size of memory in bytes)

* **calloc()** -> It can allocate memory for more than one element.

### Malloc (malloc())

> 'malloc()' only allocates a certain amount of memory location(2bytes for integer). It will not define the type of the memory wheather it is int, char, float etc. To get the type we need to do *type-casting* of the malloc(). 
> In some compilers, 'malloc()' return the address.

![image](https://user-images.githubusercontent.com/54589605/221934819-7e94d10f-0eca-4e75-b8b3-c1181815b713.png)
![image](https://user-images.githubusercontent.com/54589605/221934882-a89c8c23-d3b3-4b0f-98b3-e54f7982589c.png)
![image](https://user-images.githubusercontent.com/54589605/221935063-c9127213-839c-4c3f-8b6e-f9e878dca6d0.png)
![image](https://user-images.githubusercontent.com/54589605/221935672-a1e6c5b1-7108-48b0-91f2-3f22a64fafe1.png)

## Code blocks

![image](https://user-images.githubusercontent.com/54589605/221936246-31dda294-cba5-46a0-9889-971a4b98862e.png)

> We can create blocks using curly braces or {}. It acts like a function even though it is not a function. It has it's own local variables. After the block execution is completed all of the local variables of the block are destroyed.

```c
    void main()
    {
        int x;
        // block.
        {
            int y;
            y= 10*2;
            printf("%d",y);
        }
    }
```

#### Example

* int x= (int)malloc(sizeof(int));

* int *p = (int *)malloc(sizeof(int)); [Use for GATE]

* **Page 7** of *15_Constant_Macro* PDF is an important.

### **Page 7**

![image](https://user-images.githubusercontent.com/54589605/221939415-e050a212-a755-4261-8856-44ea81d3d2cb.png)

## Storage classes

1) auto
2) register
3) static
4) extern

### auto

> All of the variables created that are local variables without any specification are *auto* variables. By default all local variables are *auto* variables. 

```c
    void main()
    {
        int x;
        auto int x;
    }
```

> If we don't mention the *auto* keyword, then also by default *auto* keyword is added to all of the local variables.

![image](https://user-images.githubusercontent.com/54589605/221936538-ec00c746-a87e-417f-a865-6b73e71d5e30.png)
![image](https://user-images.githubusercontent.com/54589605/221936808-31eb81ba-c328-41b2-b625-4f71dd81997f.png)


### Register

> Local variables and exactly like auto but storage is not in RAM(stack) but in the CPU register.
> Advantage of setting a variable as *register* variable is that the allocation will happen in the CPU register instead of the stack. Whenever the cpu will use that variable, it will take it from the CPU register and inturn  saving a lot of time as CPU is faster than the RAM(stack). 
> If the CPU register is out of space then the newly created register variables will be placed into the stack itself.

```c
    register int i;
```

![image](https://user-images.githubusercontent.com/54589605/221937931-26c37c9c-0660-449e-80cb-3d9d738018aa.png)
![image](https://user-images.githubusercontent.com/54589605/221938225-8c94d41d-7da2-4301-9945-186df6c69813.png)


## Automatic variables

1) auto
2) register

> They are created automatically in the memory whenever a function or a block is called and they are removed automatically as well when the function or block has completed execution. Stored in stack. Scope within function or block itself.

## Global variables

> There is no dedicated/specific storage class for global variables but they are there.

> All of the variables(global, static variables) that are present in the data section, they are initialized with zero(0).

![image](https://user-images.githubusercontent.com/54589605/221939667-89ce95b3-a5cd-4d89-ac22-92086b6bb843.png)


### static variables

> They can be local as well as global variables. Wheather a static is global or local it is created at the starting of the program execution. Both of their lifetime is throught the program execution. Scope depends if it is a global or a local variable. If global variable then the scope is global as well. If local variable then the scope is local as well.
> static variable is created for the first and the only time at the start of the program execution. 

```c
    static int x; -> // Global static variable
    void main()
    {
        static int x; // Local static variable.
    }
```

![image](https://user-images.githubusercontent.com/54589605/221940081-1f7de41e-0b68-467c-ab2f-8ff597dc5a47.png)
![image](https://user-images.githubusercontent.com/54589605/221940139-2facdc60-108c-4adf-971f-14186596b30e.png)
![image](https://user-images.githubusercontent.com/54589605/221940338-960b10d1-e37d-4b8d-9ecb-d332032e15a1.png)


### extern variable

> It is similar to **global variable** but there is some differences. Lifetime is throughout the program. Scope is throughout the program(global) as well. It is initialized with zero(0) as well. It is located in the data section.

![image](https://user-images.githubusercontent.com/54589605/221940454-4cb18a69-e55f-4c52-87a4-0aecf4672d52.png)
![image](https://user-images.githubusercontent.com/54589605/221940629-0829e0d4-a9ed-45a9-a238-b39bdb4a9a4a.png)


### Difference between static and global variable.

* Scope -> static can be a local variable as well but global cannot be a local variable. static variable's scope can be within a function or a block but the scope of a global variable is throughout the program.

## NULL pointer

> When a pointer is declared but not initialized then it has some *garbage value* initialized to it.
> If we want a pointer to not hold any address then we can initialize/set the pointer to *NULL*. This is called as NULL pointer.

```c
    int *p;
    *p=NULL; // NULL pointer.
```

> This means the 'p' pointer is created but the address of pointer 'p' is neither pointeing to any valid address or any garbage address. It has a pointer(NULL) which shows that it has nothing.
> 'NULL' pointer denotes there is nothing at 'p' pointer.

![image](https://user-images.githubusercontent.com/54589605/221945619-8159cf16-088b-44df-ad55-53bc5d1736cb.png)


## String

```c
    char ch[]= {'A','B','C','D', 'E'}; // Character Array. Size is 5.

    char str[]="ABCDE";  // String. Size is 6. 'str' will be a constant pointer. We cannot increment or decrement it.

    char *p ="ABCDE"; // This is also a string. It removes the size issue from below. 'p' will be a normal pointer, we can increment and decrement it.

    char ch[5]="ABCDE"; // Error as size should be 6.
```

> String has '6' size compared to character array which is of size '5' because the last position of string is reserved for '\0' which is a *NULL character*. *It represents the end of the string*.

![image](https://user-images.githubusercontent.com/54589605/221945663-94303e11-552e-4324-99b1-300c79500190.png)
![image](https://user-images.githubusercontent.com/54589605/221945690-59a17954-b96e-481e-bde2-c40a125fe028.png)
![image](https://user-images.githubusercontent.com/54589605/221945922-9686415b-10e1-4a76-86d8-c0ef04505496.png)

* To be able to **printout** a character from a **string** we have to use **the * (st + 2)**, to get the value at that given address. Otherwise we will get an error.


![image](https://user-images.githubusercontent.com/54589605/221946476-bd6809a5-ab69-448a-841c-760876b44684.png)

## Literals and Constants

```c
    const float pie=3.14; //const type name=value;
```

![image](https://user-images.githubusercontent.com/54589605/221946631-5902e186-63f0-44d1-afd9-3d48aba2497c.png)


> 'value' is mandatory to be given otherwise it will not be a constant. 'const' variable 'pie' cannot be changed, modified, cannot allocate new value, cannot increment or decrement the value. Nothing is allowed as it is a 'constant'.
> Once it is defined and the value is fixed, nothing can be changed.
> They can both be global as well as local.


### Macro

```c
    #define PIE 3.14   // macro
    printf("%f", 2*PIE*r);
```

![image](https://user-images.githubusercontent.com/54589605/221946828-7bc99202-7917-4777-8e16-d73940bf2471.png)
![image](https://user-images.githubusercontent.com/54589605/221947083-25bcff98-de05-41f6-ba99-53ad2b6e0fb1.png)

> Where ever we have mentioned 'PIE' in the program, that is going to be replaced with '3.14' value.

```c
    #include<stdio.h>
```

> All of the statements that are starting with '#' are called as **preprocessor directive**. 
> All of these statements(starting with '#') are run before the compilation of the program starts.

## 16_Doubt_Solving_Session (16)

![image](https://user-images.githubusercontent.com/54589605/221943044-f147bd71-b89d-427e-b61e-b285b79cf6c4.png)
![image](https://user-images.githubusercontent.com/54589605/221943060-7c992411-a6c4-4347-8e23-557f387fd711.png)
![image](https://user-images.githubusercontent.com/54589605/221943168-18a9ca63-14c5-47cf-8567-eface48f533e.png)

![image](https://user-images.githubusercontent.com/54589605/221943929-b4a90c1d-7434-4ae2-ad31-a3f9c3c73ec1.png)

**CORRECTION**

![image](https://user-images.githubusercontent.com/54589605/221943908-a4a4781a-3948-47a7-8aab-46015cdbe010.png)


![image](https://user-images.githubusercontent.com/54589605/221944073-02c5013b-71c0-4753-9e6a-46e8392c8767.png)

![image](https://user-images.githubusercontent.com/54589605/221945426-b124b8be-d0ff-4c6d-bf35-c5aa12bcd60b.png)

![image](https://user-images.githubusercontent.com/54589605/221945402-08eb80af-2188-4750-8c65-c88eb11ebf8d.png)

![image](https://user-images.githubusercontent.com/54589605/221947440-fab86bca-a629-4191-ba59-24d297515933.png)

```c
// int z= ++(*p);
    // printf("%d\n",z);
    // printf("%d\n",++(*p));
    
    // printf("%d\n",x);
    // printf("%d\n",p);
    // printf("%d\n",*p);
    // printf("%d\n",(*p)++);
    // printf("%d\n",x);
    // printf("%d\n",++*p);
    // printf("%d\n",x);
    // printf("%d\n",++(*p));
    // printf("%d\n",x);
    // printf("%d\n",++(*p));
    // printf("%d\n",x);
    
    // printf("\n\n");
    
    // printf("%d\n",x);
    // printf("%d\n",p);
    // printf("%d\n",*p);
    // printf("%d\n",(*p)--);
    // printf("%d\n",x);
    // printf("%d\n",--*p);
    // printf("%d\n",x);
    // printf("%d\n",--(*p));
    // printf("%d\n",x);
    // printf("%d\n",--(*p));
    // printf("%d\n",x);
    
    // printf("%d\n",--*p);
    // printf("%d\n",++*p);
    // printf("%d\n",*p);
    // printf("%d\n",x);
   
```

### Explaination

![image](https://user-images.githubusercontent.com/54589605/221954453-7d48e871-6415-48f4-ab59-10edf6a58c5d.png)
![image](https://user-images.githubusercontent.com/54589605/221954914-25ef48ee-15ec-4767-ab84-9a772a27aee3.png)


* *p++ OR *p-- -> Is causing the issue from the looks of it. We should use **(*p)++** or **(*p)--** respectively, as this is giving the desired output.

* printf("%d\n",(*p)--);

![image](https://user-images.githubusercontent.com/54589605/221955645-8d092cca-ca07-4be0-813a-9ea27f1783f1.png)
![image](https://user-images.githubusercontent.com/54589605/221956501-b00ad1f9-408e-4d61-be17-4b6ac929e325.png)



## Quiz questions (1)

* int j =(x++, --y);

> No matter what is the value of 'x' and 'y' is, we will always take the 2nd or the last value i.e the value of 'y' here and store it in 'j' variable.





















































































## Data Structure with C

### Daily Revision

* 1 -> Done still insertion in array (14 Jan 2023)
* 2 -> Start from insertion in array (15 Jan 2023)
* 3 -> Start from searching in array (16 Jan 2023)
* 4 -> Start from Deletion in linked list(17 Jan 2023) before starting new lectures.
* 5 -> Start from Header List.(17 Jan 2023).
* 6 -> Solve the DPP question as revision. (18 Jan 2023).
* 7 -> Start from Queue.(19 Jan 2023)
* 8 -> Start from Double Ended Queue(20 Jan 2023)
* 9 -> Start from Applications of stack(24 Jan 2023)
* 10 -> Start from Tree(25 Jan 2023)

## Weekly Revision

* 1 -> Revise everything from 16 to 21 Jan 2023. Practice questions.
* 2 -> Revise everything from 21 to 28 Jan 2023. Practice questions.
* 3 -> Revise everything from 29 to 5 Feb 2023. Practice questions.
* 4 -> Revise everything from 6 to 13 Feb 2023. Practice questions.

## Introduction to DS (17)

> It is not only the organization of data but the functions to access the data as well. It is sometimes referred to as **ADT or Abstract Data Type**.

* Data Structure -> Data Storage + operations.

### Types

* Linear -> Elements arranged in linear order. Eg -> Array, linked list, queue, stack
* Non-Linear -> Elements are arranged in non-linear fashion. Ed -> Graph, Heap, hashing, tree

### Analysis of Algorithms

> To find out among all of the potential solution to a particular program which one is better, best or worst among each other.

### Types

* **Space Complexity** -> Space(memory) needed by the program to run. The memory is calculated by the extra space taken by the algorithm to run itself. 

> So memory or space of an algorithm is calculated excluding/without including the *input and output* of the program.

> In space complexity, we are not calculating the *bytes* of the program but rather the number of elements that we have stored in the program **separately not including the input and output variables/values**. The no. of elements stored separetely is called as the space complexity of a program.

* **Time Complexity** -> Time(Runtime) needed by the program to run.

## How to calculate time? (18)

* On Wall Clock -> Implement the program/algorithm in any langauge and after implementation run it on CPU/system. Now calculate/measure the milliseconds/nanoseconds for which the program is running. 
  
  > It is highly dependent on so many external factors. So no stability or no any consistency in results.

* Based on no. of operations or steps performed (Dry run) -> Manually run the program on paper. Calculate the total no. of steps and count it. Then the result will be consistent. It is based on the mathematical analysis of **rate of growth**.

* log(logn) < logn

* Time complexity is independent of the input and it is constant only. Then it is called as constant runtime complexity. It is represented by '1' and not the no. of steps of the algorithm.

* i=0, i<n

* i=1, i<=n

> They are the same thing.

* for(i=1;i<=n;i*=2) or for(i=n;i>=1;i/=2)

> Runtime complexity is *log n base 2*

![image](https://user-images.githubusercontent.com/54589605/212310762-93bf11d6-389a-40bd-9f4f-cdaa7451b04d.png)

* for(i=1;i<=n;i*=3) or for(i=n;i>=1;i/=3)

> Runtime complexity is *log n base 3*

* int k;
* for(i=1;i<=n;i*=k) or for(i=n;i>=1;i/=k)

> Runtime complexity is *log n base k*

## Asymptotic Notations (19)

* Big O -> Provides Tighest upper-bound. Maximum complexity of an algorithm.
* Omega -> Provides Tighest lower-bound. Minimum complexity of an algorithm.
* Theta -> Provides exact bound. Max and min complexity of the algorithm is the same. 

> Used for bounding complexities.

### Types of cases

* Best case -> Type of input for which, algorithm takes minimum time.
* Worst case -> Type of input for which, algorithm takes maximum time.
* Average case -> The input which is not best or worst.

> We cannot write omega(1) as the constant complexity because omega represents the lower-bound or the minimum complexity hence we don't know the maximum complexity. 
> We can use O(1) or theta(1) as constant complexities. O(1) is the maximum complexity and nothing is smaller than that. Hence nothing can be smaller than that.

* O(1) and theta(1) are the same representation as highest bound is '1' then the lower bound will also be '1' as there is nothing lower than '1'.

## Array in DS

* int a[5];

* Lower Bound(LB) -> Starting index -> 0

* Upper Bound(UB) -> Last index -> 4 -> (size -1)

* name[LB:UB]

* A[0:4]

* B[2:6]

* C[-4:3]

* Find the size of the array

> size = UB-LB +1

### Relative Index

* Relative index(RI)= (i-LB)

* Relative index would help us to find the location of an element

### Location of an element

* Location of an element Loc of A[i] = Base address + size of an element in memory * relative index
  
                                     = Base + w * (i-LB).

#### Question

* A[-4:200]

* Base address -> 2500

* W -> 4 locations

* Location of A[17] = 2500 + 4*(17-(-4))
  
                    = 2500 + 4*21
                    = 2500 + 84
                    = 2584 (Ans)

* A[-6:13]

* W -> 8 locations

* 1 location = 1Byte

* Total no. of elements in array = UB-LB+1 = 13 -(-6)+1 = **20** elements(Ans)

* Size of memory required to store completed array(In Bytes) = 20 * 8 = **160 Bytes**(Ans)

### Why indexing in array in C language starts from 0?

> It saves the (i-LB) calculation. CPU doesn't have to do the substraction which helps in performance as well if indexing starts from '0'.
> Then the formula will be like below.

* Location of an element Loc of A[i] = Base address + size of an element in memory * i
  
                                     = Base + w * i.

**Important**

> When CPU tries to access an array element, it has to first find the address of the element. To find the address he has to use the non-optimised or earlier formula(i-LB) one. If we keep LB=0, then the formula will be reduced to the above one(Base + w * i). In that case, CPU is saving one substraction every time it tries to access an element which in turns increases the performance of the CPU. Everytime we want to improve the performance of the CPU, hence the programming languages have adopted to keeping the starting index of an array to zero(0) for improving the performance.

## Quiz Questions (2) (20)

### Solution on the Quiz

![image](https://user-images.githubusercontent.com/54589605/212466904-0ed8c5c4-3481-412f-a133-f36578d0bb7a.png)

### solution provided by teacher

![image](https://user-images.githubusercontent.com/54589605/212466932-c13c8498-b789-49a8-bc8d-ab5b834715b2.png)

> The solution provided by the quiz was wrong. Keep it in mind. Don't blindly accept answers. Check it yourself. I also ticked the correct answer in the quiz.
> Update, I ran the code on a compiler and it gave the answer as it was in the quiz solution. Better explaination on the below link.

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/FE03159543

**Compiler**
![image](https://user-images.githubusercontent.com/54589605/212529265-4d9b9a5e-7c7f-4924-89bf-f6fdc044f0a8.png)

## Difference Between Call By Value and Call By Reference

![image](https://user-images.githubusercontent.com/54589605/212530290-cccf5b83-a34b-4fba-a899-9730facaa306.png)
![image](https://user-images.githubusercontent.com/54589605/212530339-2a2f90ff-d9ac-4d64-974e-c78bc4e60085.png)
![image](https://user-images.githubusercontent.com/54589605/212530371-15c26203-036e-4ad9-8c19-6681ffacdd7e.png)

## Insertion in Array

* Always at the end

* Based on index

* Complexity of insertion always at the end

* Rumtime -> Theta(1)

* Space -> Theta(1)

### Insertion based on index

#### Conditions

* Check for overflow condition. If not then check following conditons.
  * Index 'i' is between (LB) and (UB+1)
  * Check if we have to shift elements or not.
  * Empty index 'i' and input the new value 'item' in it.

#### Algorithm

```c
    Insertion(A[], LB, UB, n, item, i);
    // item -> new element to be inserted. i -> index where to be inserted. n -> count of the elements.
    if(UB ==array_UB) //array_UB -> The size of the array
    {
        printf("Overflow");
        return;
    }
    if(i <LB || i>(UB+1))
    {
        printf("Invalid index");
        return;
    }
    for(k=UB;k>=i;k--)
    {
        A[k+1]=A[k]; // Shifting to the right.
    }
    A[i]=item;
    UB++;
    n++;
```

* Complexity of insertion based on index

* Rumtime -> O(n)

* Space -> Theta(1)

## Deletion in Array

* Always last element
* Based on index

### Always last element

```c
    if(UB == -1)
    {
        printf("Underflow");
        return;
    }
    UB--;
    n--;
```

* Complexity of deletion always last element

* Rumtime -> Theta(1)

* Space -> Theta(1)

### Based on index

* index 'i' range -> LB <= i <= UB.

* Complexity of deletion based on index

* Rumtime -> O(n)

* Space -> Theta(1)

## Summary of complexities of insertion and deletion in Array

![image](https://user-images.githubusercontent.com/54589605/212548206-5b052a7b-4386-44ba-9705-3232cb010052.png)

## Insertion, Deletion questions

* Insertion always at the start(LB) -> **Theta(n)**. Since we have to right shift all of the 'n' elements by 1 index.
* Deletion always at the start(LB) -> **Theta(n)**. Since we have to left shift all of the 'n' elements by 1 index.

## Finding min. element in Array. (21)

## Finding max. element in Array.

> Both algorithms and their complexities are in PDF(21_Finding_min_Max_In_Array).

* Runtime complexity -> Theta(n)
* Space complexity -> Theta(1)

## Tournament Method

> Even if the no. of players are odd or even in the tournament, the no. of comparison regardless is *(n-1)* comparisons, where *n* is the no. of players in the tournament.
> We need an array to store the results. Array size needed to store the results from the previous round, is **Ceil(n+1/2) value**. We are requiring more storage here. Algorithmns need additional space.
> As we need space to perform tournament method, hence it is not used that often because of the space limitation.

* Space Complexity -> Theta(n) or linear complexity. [Since we exactly need an array of size n/2 or (n+1)/2]

* Time complexity -> Theta(n).

* *Formula for finding comparisons required* -> n -1

### Finding both min and max using tournament method

* *Formula for finding comparisons required Method-1* -> n-1 +n-1 = *2n-2*

* *Formula for finding comparisons required Method-2* -> n/2 + n/2-1 + n/2-1 = (3n)/2 -2 = **1.5n -2**

> This is better than normal tournament method where we find min and max separately.

* When 'n' is odd:

* **Formula** -> Ceil((3n/2)) -2

## Finding second minimum

* *Formula for finding comparisons required Method-1* -> n-1 + n-2 = **2n -3**

* *Formula for finding comparisons required Method-2* -> n-1 + logn-1 = **n+logn-2**

## Questions before DPP(20_Doubt_Solving_Session)

* 1 -> B [Theta(logn)] [Got it wrong, thought Theta(n) and the options were wrong as well]
* 2 -> B [Theta(logn)] [Got it wrong, thought (O(n)) and the options were wrong as well]
* 3 -> B [Theta(logn)] [Got it wrong, thought (O(n)) and the options were wrong as well]

## DPP 1 (20_Doubt_Solving_Session)

* 1 -> [Had to write an algorithm]. 
* 2 -> 1032
* 3 -> Max value which is power of 2 and less than equal to n. 

### Examples for question 3 in DPP 1

if n = 100, then position = 64(2^6)
if n = 200, then position = 128(2^7)
if n = 10, then position = 8(2^3)

## Find max power of 2 which is smaller than n

```c
    int x =Ceil(logn/log2); // Find the power
    int y= pow(2,x); // Value
    return y;
```

### DPP 2 (21_Finding_Min_Max_in_Array)

* 1 -> 4000 [100*40] [Faulty question]
* 2 ->               [High level question]
* 3 -> 68
* 4 -> [Had to write an algorithm]. 
* 5 -> Theta(n) [Insertion at the beginning] [Asked in the Doubts, check there.]
* 6 -> 1032
* 7 -> Max value which is power of 2 and less than equal to n.

> The explaination of question 7 is in the above *DPP 1* questions, check above. Example is also given.

## Searching in Array (22) [Date -> 16 Jan 2023]

* Linear search
* Binary search 

> In linear search, if an array has **duplicate elements**, then it will only return the **first** index/address/location of the element in the array.

* Runtime Complexities

* Best case -> Theta(1)

* Worst case -> Theta(n)

* Average case -> O(n)

### Find all index of an element using linear search

```c
    Linear_Search(A[],LB,UB,element)
    {
        int index[UB];
        for(int i=LB;i<=UB;i++)
        {
            index[i]= LB-1;
        }
        int j=0;
        for(int i=LB;i<=UB;i++)
        {
            if(A[i] == element)
            {
                index[j]=i;
                j++;
            }
        }
        if(index[0] == -1)
        {
            printf("Element not found");
        }
        else
        {
            for(int i=0;i<UB;i++)
            {
                if(index[i]!=-1)
                {
                    printf("%d\t", index[i]);
                }
            }
        }
    }
```

* Runtime complexity 

* Average case -> Theta(n)

* Best case -> Theta(n)

* worst case -> Theta(n)

> In linear search, whatever the formating of elements are in the array like duplicate, unique, any order/sort of elements, it will work fine.

## Binary Search

> If array is sorted then only we can implement binary search.
> Binary search works only on sorted array.

* while(LB >= UB) -> Element not found condition.

### Conditions

1) Find mid 
2) if(item == A[mid]) return mid
3) if(item < A[mid]) OR if(item > A[mid]) -> Which matches the condition
4) UB=mid -1         OR  LB=mid+1
5) Calculate new mid
6) Go to step 2.

### Algorithm

```c
    Binary_search(A[],item, LB,UB)
    {
        int low=LB,high=UB;
        // Alternate way of writing the algo. Both give the same result.
        // int mid=(low+high)/2; 
        int mid;
        while(low<= high)
        {
            mid=(low+high)/2;
            if(A[mid] == item)
            {
                return mid;
            }
            else if(item < A[mid])
            {
                high=mid-1
            }
            else
            {
                low=mid+1;
            }
            // mid=(low+high)/2;
        }
        return LB-1;
    }
```

* Runtime complexity -> O(logn)

## Finding first and last appearance of given array in sorted array

> As it is a sorted array, we can use *Binary Search* here. The runtime complexity of binary search is *logn*. 

* Find first appearance -> log n

* Find last appearance -> log n 

* Total comparisons -> logn + logn -> 2logn -> O(logn)

* Frequency = First appearance index - last appearance index.

## 22_Searching_in_Array Questions

> Solved in  *24_Doubt_Clearning_Session*.

* 1 -> B [Theta(logn)]
* 2 -> B [O(logn)]
* 3 -> B [O(logn)]

## Array (23)

* Only stores similar datatypes -> Basic need, not a disadvantage.

### Advantage

* Random or direct access using indexes

### Disadvantage

* Fixed size.
* Stored in consecutive location.

> To solve the disadvantages of array, we came up with linked list.

## Linked List

* **linear or sequential order maintained using pointers/links**.
* Linked list contains a node. Node has **two** parts.
  * Element part
  * link/address part which points to the next node.

> Last node contains 'NULL' at the link part of the node which marks the end of the linked list.
> Address of first node is stored in list/head/start pointer. This is used to access the whole linked list.

### Empty List condition

```c
    if(list == NULL) or if(!list)
```

### Single Node

```c
    if(list ->link == NULL) or if(!list ->link)
```

> Practice the linked list question in 23_Linked_list_basics PDF, Page 12 onwards.

## Question in 23_Linked_list_basics PDF

* 1 -> e [Either null pointer dereferencing error or data of 2nd last node get printed]
* 2 -> 

<!-- > Null Pointer Dereferencing errors or NPDs are the problem as they are not being handled the base conditions like, -->
> As the base conditions are not being handled/written in the question/problem. Because of the lack of base conditions, we will encounter Null Pointer Dereferencing errors or NPDs errors/problems.

### Base conditions missing:

* start =NULL;
* If Linked list has one element only. 'start' pointer  points to only one node.

![image](https://user-images.githubusercontent.com/54589605/212615573-8835e66b-559b-4a75-99d0-022920d6f11b.png)

### To remove the NPDs errors

![image](https://user-images.githubusercontent.com/54589605/212616164-dda68630-d5fb-4c8d-92c6-c753825778af.png)

## DPP 3 from *23_Linked_list_basics*

> These questions are in the next DPP as well, which is DPP 4 in *25_Linked_list_implementation* PDF file. Some extra questions are present as well. Check that out. I will complete all of them there.

## Doubt and questions (24)

> All of the previous DPP questions are solved. Check the above DPPs for solutions and questions.

## Null Pointer Dereferencing (25)

* NULL ->data
* NULL -> link
* if(p->link != NULL)

> Error. 

## Traversing in Linked List.

* Runtime complexity -> **Theta(n).**

## No. of elements in Linked List

* Runtime complexity -> **Theta(n).**

## Sum of elements in linked list

* Runtime complexity -> **Theta(n).**

## Min element in linked list.

* Runtime complexity -> **Theta(n).**

## Address of last node in linked list

* Runtime complexity -> **Theta(n).**

## Valid NULL terminated linked_list

* start=NULL 

> There is 'start' pointer so linked list exists but it is empty or has zero(0) nodes. As it has a 'start' pointer which means there exists a linked list which is empty or has zero(0) nodes, but a linked list exists never the less.

## Insertion in Linked List

> We can insert a node at any postion, beginning, end or at any given position of the linked list.

* Whenever a new node to be inserted:
  1) First create a new node dynamically using malloc()
  2) Insert the newly created node

### Creating a new node

```c
    struct node* n =(struct node*) malloc(sizeof(struct node));

    if(n == NULL)
    {
        printf("Out of memory");
    }
```

> If **all of the memory** is used up, then **malloc()** will return **NULL**. 
> If *n == NULL* is true then, the system is out of memory.

## Different insertion in linked list

* **Beginning** -> Runtime complexity = *Theta(1)*
* **After a given node** -> Runtime complexity = *Theta(1)*
* **At end** -> Runtime complexity =  *Theta(n)*
* **At end when last node is given** -> Runtime complexity =  *Theta(1)*
* **Before a given node** -> Runtime complexity =  *O(n)*

## DPP 4 (25_Linked_list_implementation)

> Solved in *28_Doubt_Clearing_session* PDF file.

* 1 ->  [Circular list not yet done]

* 2 -> 10 [count of the remaining nodes in the list. It is removing the duplicate elements from the list.]

* 3 -> D [Error or returns 1]

* 4 -> [Cross or axe] [Solved in the PDF file above]

* 5 -> [Cross or axe] [Solved in the PDF file above]

* 6 -> f

* 7 -> a [Got it wrong, thought 'e' was the answer]

* 8 -> error [NPD is the error]

* Answer of Question **4** from above:

```c
    x->next=x->next->next;
```

* Runtime complexity ->*Theta(1)*

* Answer of Question **5** from above:

```c
    p=start;
    while(p->link->link!=x)
    {
        p=p->link;
    }
    p->link=x;
```

* Runtime complexity ->*O(n)*

## Deletion in linked list (26)

* **Beginning** -> Runtime complexity = *Theta(1)*
* **of a given node** -> Runtime complexity = *O(n)*
* **at the end** -> Runtime complexity = *Theta(n)*
* **at the end when address of last node is given** -> Runtime complexity = *Theta(n)*

### Deletion at beginning

```c
    struct node* p=strat;
    start= start -> link;
    free(p);
```

> *free(p)*, the pointer 'p' was pointing to the node and the space take by that node would be set free. The node will neither exist in memory nor in the linked list.

* free(p) -> keyword.

### Deletion of a given node

```c
    struct node *p=start;
    while(p->link != loc)
    {
        p=p->link;
    }
    p->link=loc->link;
    free(loc);
```

> Only valid way to delete a given node.

#### More ways to delete a given node

> Interview question, **delete a given node but we cannot use an extra pointer or a new pointer, which will loop to one place before 'loc' position**. Below are the ways to tackle this problem/question asked in interviews.

#### Invalid Method 1

```c
    start = loc ->link.
```

#### Invalid Method 2

```c
    loc -> data = loc->link->data;
    loc->link = loc->link->link;
```

> Both are invalid ways of deleting a given node. Normal way is the only valid way.
> Look at the *26_Types_of_linked_list* PDF file, the code and the explaination is there.

### Deletion at the end

* Runtime complexity -> Theta(n)

### Deletion at the end when last node address is given

```c
    struct node* p =start;
    while(p->link->link)
    {
        p=p->link;

    }
    p->link=NULL;
    free(loc);
```

> Even if the address of last node is given, we still need to traverse the list and get to the 2nd last element of the list.

## Searching in linked list

> Returns address of the node where the element found in linked list.

### Linear search in LL

* Rumtime complexity -> O(n)

### Binary search in LL

> Linked List should be sorted.
> Binary search in linked list is not possible in *logn* runtime complexity. As we have to linearly traverse the list to go to the mid element of list. Hence to find mid element we have to do *n/2* comparisons every time, which is *O(n)* runtime complexity. As it is not possible to reach the mid element in *constant or O(1)* runtime. To reach mid element, we need linear or *O(n)* time complexity.
> Binary search in linked list can not be as efficient as it is on array because in linked list, reaching to mid node is not possible in constant time.

* If someone asks can we implement binary search in linked list?

> Yes we can implement binary search in linked list. But the runtime complexity will not be in *O(logn)* but will be in *O(n)*.

## Sets

* Union(U) -> Both sets are combined but common/duplicates are removed. Uniques are kept only.
* Intersection() -> Only the common values from both the sets are kept.
* Membership -> If an elements belongs to a given set or not.
* Cardinality -> To find the no. of elements in a given set.

> Good PYQ question from gate 2004, revise it a very important question about linked lists and sets in *26_Types_of_linked_list* PDF file. 

## Reverse a linked list

```c
    struct node* p=start;
    struct node* q=NULL;
    struct node* r;
    while(p)
    {
        r=q;
        q=p;
        p=p->link;
        q->link=r;
    }
    start=q;
```

* Runtime complexity -> Theta(n) [Linear complexity]
* Space complexity -> Theta(1)

## Disadvantage of LL

1) The link part of last node is not utilized
2) The address of predecessor/previous node is not know
3) Stepping backward is not possible
* 1 is solved by circular linked list.
* 2 and 3 is solved by doubly linked list.

## Circular Linked list

```c
    struct node* p=start;
    while(p->link)
    {
        p=p->link;
    }
    p->link=start;
```

* Runtime complexity -> Theta(n)

## Header List (27)  (17/01/2023)

> It contains some summary information. It is a special first node called as header node.
> Some types of summary information includes no. of nodes, sum of the elements.
> We add a node, which doesn't include an element but has information related to the summary of the linked list.

* Whenever an insertion happens then, (list->data)++;
* Whenever an deletion happens then, (list->data)--;

### Condition when header list is empty

### Types of header list

* Grounded list -> Last node has link as NULL.
* Circular list -> The last node's link is pointing to the starting or first node i.e the header node of the linked list.

## Traversal in header list.

### In grounded

* Runtime complexity -> Theta(n)

### In Circular

* Runtime complexity -> Theta(n)

## Doubly linked list

> Every node stores two addresses and a data. One pointer points to the next node and the other pointer points to the previous node. 
> In some doubly linked lists, we maintain a pointer on the last node of the list for stepping backwards in the list.

* There could be two varients of doubly linked list
1) Only one pointer pointing to the first node of the list.
2) Two pointers, one pointing to the first node of the list and the other one pointing to the last node of the list.

## Insertion in doubly linked list.

### At benginning

* Runtime complexity -> **Theta(1)**

### After a given node.

```c
    n->next= loc->next;
    n->prev=loc;
    loc->next->prev=n;   // OR n->next->prev =n; Same thing 
    loc->next=n; 
```

* Runtime complexity -> **Theta(1)**

> In linked list insertion, always update/add the links/pointers of the new node which is being inserted into the list first then change/modify/update the existing links/pointers in the list. 
> Othewise we will loose access to the already existing links/pointers in the list. Sequence is important otherwise we will loose access to some nodes in the list.

### Before a given node.

```c
    n->prev=loc->prev;
    n->next=loc;
    loc->prev->next=n;
    loc->prev=n;
```

* Runtime complexity -> **Theta(1)**

### At the end when address of last node is given.

```c
    n->next=NULL;
    n->prev=last;  // 'last' is the pointer pointing to the last node of list.
    last->next=n;
    last=n;
```

* Runtime complexity -> **Theta(1)**

### At the end when address of last node is not given.

```c
    n->data=item;
    p=first;
    while(p->next)
    {
        p=p->next;
    }
    n->next=NULL;
    n->prev=p;
    p->next=n;
    // p=n;  Not needed as we are not maintaining the address of last node.
```

* Runtime complexity -> **Theta(n)**

## Deletion in Doubly linked list

### First node

```c
    first=first->next;  // 'first' is a pointer pointing to the first node of the list.
    first->prev=NULL;
```

* Runtime complexity -> **Theta(1)**

### Given node

```c
    loc->prev->next=loc->next;
    loc->next->prev= loc->prev;
    // loc->next=NULL; Not needed they will be removed the list. 
    // loc->prev=NULL; Not needed they will be removed the list.
    free(loc);
```

* Runtime complexity -> **Theta(1)**

### Last node, when address of last node given

```c
    p=last;
    last=last->prev;
    last->next=NULL;
    free(p);
```

* Runtime complexity -> **Theta(1)**

### Last node, when address of last node is not given

```c
    p=start;
    while(p->link->link)
    {
        p=p->link;
    }
    free(p->next);
    p->next=NULL;
```

* Runtime complexity -> **Theta(n)**

> All of the algorithms for intersion, deletion in doubly linked list have *Theta(1) or constant* space complexity. We have hardly used one(1) struct node* type pointer in them.

### For insertion

> When we have inserted a node in the **middle** wheather it is before or after a given node, we are **updating four(4) links**.
> For insertion at **beginning** we are **updating three(3) links**.
> For insertion at the **end** we are **updating three(3) links**.

### For deletion

> When we have deleted a node in the **middle** wheather it is before or after a given node, we are **updating two(2) links**.
> For deletion at **beginning or first node** we are **updating one(1) links**.
> For deletion at the **end or last node** we are **updating one(1) links**.

## Recursion in linked list

> Question 6 from *27_Types_of_linked_list_part_II* PDF file.

### Questions from *27_Types_of_linked_list_part_II* PDF file.

> Solved in *28_Doubt_Clearing_session* PDF file.

* 1-> Already done
* 2-> Omit for now. [Solved below. Interesting and tough question]
* 3-> dcba [Printing the elements of linked list in reverse order]
* 4-> B [Reversing the list]
* 5-> A [Got it wrong, thought 'B' is the answer]
* 6-> Returns the address of last node or NPD error.

> In question 4, whatever function we are executing, we can access the local variables of that function call only.
> All of these questions were good. Need to revise and know them to able to solve them in the future. Solve them in revision as well.

## Doubly Circular linked list (28)

> We can make any node as the 'first' pointer. No problem in that. Benefit of traversal in both the directions. We can travel from anywhere or any node and traverse back to that same node as well.

### Reverse doubly Circular linked list

## Linked list PYQS

> Question in *28_Doubt_Clearing_session* PDF file. At the end of the file. Solve them.

* 1-> C [Multiple pointers, 4 to be exact]
* 2-> Have to wring an algorithm
* 3-> B [Binary Search]
* 4-> D [I and III]
* 5-> B [Doubly linked list]
* 6-> 
* 7-> [Swapped i+1 and i+2 list data]
* 8-> Have to wring an algorithm
* 9-> D [n]
* 10-> B
* 11-> C [not possible with a single pointer]
* 12-> D [union, intersection]
* 13-> B [2,1,4,3,6,5,7] 
* 14-> B
* 15-> B
* 16-> A
* 17-> B [Theta(1), Theta(n)]
* 18-> C [Theta(n^2)]
* 19-> C [error]

### Algorithm for question 2

```c
    struct node* p=head;
    while(p->next!=x)
    {
        p=p->next;
    }
    p->next=Y;
    Y->next=X;
```

* Runtime complexity -> O(n)

### Algorithm for question 7

```c
    struct node* p=head;
    n->next=p->next;   
    p->next=n;
```

> 'n' is the address of the new node to be inserted. 'p' is the pointer from the question.

* Runtime complexity -> Theta(1)

## Queue (29)   (18/01/2023)

* FIFO -> First In First Out.

> It is a linear data structure, in which insertion is done from one end(Rear end) and deletion is done from other end(front end).

* Enqueue -> Insertion in queue
* Dequeue -> Deletion in queue.

## Implementation of queue using **array**

* Two implementation of queue in array:
1) **Linear queue** -> Insertion can be done on next index of 'Rear' linearly. Insertion can be done only after the index of 'Rear'. It cannot utilize the first/previous empty spaces in the array. Not better space utilization in linear queue. 
2) **Circular queue** -> If array is full then the insertion is circularly taken to the starting of the array. Full utilization of the space happens here. No space is left empty.
* We need 2 index variables
1) **Front** -> Which stores index of front element of queue. The first element which was inserted into the queue, that element's index is stored there.
2) **Rear** -> Which stores index of rear element of queue. The last element which was inserted into the queue, that element's index is stored there.

## Insertion or enqueue in queue

### When queue is empty

```c
    front=read=-1;
```

> For insertion, rear index changes.
> For deletion, front index changes.

> For the first insertion in the queue, we set the front and rear variables to '0' as it is the first, second and the last element of the queue.

### When queue is full **Overflow**

```c
    if(front ==0 and rear==N-1) // Normal case.
    {
        printf("Queue is full, overflow condition");
    }
```

> Queue is full and no more insertion into the queue is possible.

* N -> Size of the array.

### Another overflow condition but for **circular queue**

```c
    front= (rear+1)%N;  //N -> size of the array.

    if(front == (rear+1)%N)
```

## Deletion or dequeue in queue

> We don't need to provide any element in dequeue() as we know dequeue or deletion in queue happens on the **first element** of the queue. Front element or the first inserted element in the queue will be deleted.

## Algorithm for insertion or enqueue in **circular queue**

```c
    Enqueue(item,queue[],n,front, rear); //n-> size of the array.
    int queue[5];
    if(front ==(rear+1)%n)
    {
        printf("Overflow");
        return;
    }
    if(front==rear==-1) // Special condition, when inserting the first element in queue
    {
        front=rear=0;
    }
    else
    {
        rear= (rear+1)%n;  // Normal condition, after first insertion.
    }
    queue[rear]=item;
```

* Runtime complexity -> **Theta(1) or constant**
* Space complexity -> **Theta(1) or constant**

## Algorithm for deletion or dequeue in **circular queue**

```c
    if(front==rear==-1)
    {
        printf("Underflow or queue empty");
        return;
    }
    if(front==rear) //special condition, when only one or last element left in queue.
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%n;
    }
```

> Sometimes they ask to store the deleted values in some place, as they will be used afterwards. Use the code below.

```c
    int deletedItem;
    if(front==rear==-1)
    {
        printf("Underflow or queue empty");
        return;
    }
    deletedItem= queue[Front]; //Storing the deleted item.
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%n;
    }
```

* Runtime complexity -> **Theta(1) or constant**
* Space complexity -> **Theta(1) or constant**

> Same for both even if we are storing the deleted item or not.

## Implementation of queue using **linked list**

* **Enqueue** -> Insertion at the end -> **Theta(1)**
* **Dequeue** -> Deletion from the front -> **Theta(1)**

## Other Functions on queue (30) (19 Jan 2023)

* QueueFront()
* QueueRear()
* IsEmptyQueue()

> Some additional functions which can be given with queue.
> Default functions of queue are *Enqueue* and *Dequeue* only.

## Usefull runtime complexities of queue

![image](https://user-images.githubusercontent.com/54589605/213470677-4ca485bc-5c52-4934-94c0-919554e103c7.png)

## MultiDequeue

> Many good questions have come in GATE PYQs. Check them out in revision. They are in *30_Queue_Types_of_Queue*.

* One of the questions:

![image](https://user-images.githubusercontent.com/54589605/213432715-e53f8ac4-f925-4000-912b-c0993c49e3eb.png)
![image](https://user-images.githubusercontent.com/54589605/213432751-36429b9e-e331-4ab3-9a64-a330eee8c6dd.png)
![queue_question](https://user-images.githubusercontent.com/54589605/213433125-a8803c90-108e-415c-994b-8d0834ddf0de.png)

> The **reversing** that is happening in image 2. It is happening in queue2 or Q2, *where the elements are first being deleted or de-queued and then immediately inserted or enqueued into Q2*. Which is mentioned in image 3, **underlined with color**. This is how it is happening.

## Double Ended Queue (31)

> In this queue, insertion and deletion both can be performed from both ends(front and rear).

### Types

* Input Restricted Double ended queue
* Output Restricted Double ended queue

![image](https://user-images.githubusercontent.com/54589605/213626074-65fde548-b31a-4e80-873f-5a19bdc25f3f.png)

## Priority Queue

> In priority queue, the deletion in the queue doesn't happen to the first inserted element of the queue. It happens to the highest priority of the element.
> Each element of queue has associated priority and while deletion, the element with highest priority gets deleted.
> Delete element with maximum priority.
> If two elements have same priority then first inserted element gets deleted.

* Smallest no. highest priority
* Largest no. highest priority

### Priority queue implementation

> Implement standard queue using priority queue.

## Stack

* LIFO -> Last in fast out.

> It is a linear data structure in which insertion and deletion both are performed from the same end. The end where both operations are performed is called as the top of the stack.

* Insertion -> PUSH()
* Deletion -> POP()

## Implementing stack using **array**

* top -> Index which points to the last inserted element.

### PUSH() algorithm

```c
    PUSH(stack[],top,n,item); //n->size of the stack.

    if(top==n-1)
    {
        printf("Overflow, stack full");
        return;
    }
    top++;
    stack[top]=item;
```

* Runtime complexity -> Theta(1)
* Space complexity -> Theta(1)

### POP() algorithm

```c
    POP(stack[],top,n); //n->size of the stack.

    if(top==-1)
    {
        printf("Underflow, stack empty");
        return;
    }
    item=stack[top];  // To store the deleted element for later use.
    top--; // Deletion
```

> We have just removed the access of the element from the stack. It is not a part of stack now.

* Runtime complexity -> Theta(1)
* Space complexity -> Theta(1)

### Another implementation of stack (Bottom of stack)

> Bottom index of stack is maintained. It is a constant value.

#### Underflow

```c
    int bottom=-1;

    POP(stack[],top,n); //n->size of the stack.

    if(top==bottom)
    {
        printf("Underflow, stack empty");
        return;
    }
```

### Overflow

```c
    PUSH(stack[],top,n,item); //n->size of the stack. maxtop -> 'n-1' size of the array. 
    if(top==n-1) // or if(top==maxtop)
    {
        printf("Overflow, stack full");
        return;
    }
```

## Implementing stack using **linked list**

> When there is only **one pointer** in the list, which is 'top' and it is pointing to the first inserted element in the list or the starting node of the list.

* **PUSH()** -> Insertion from start. -> Run time complexity -> **Theta(1)**

* **POP()** -> Deletion from start. -> Run time complexity -> **Theta(1)**

* **PUSH()** -> Insertion from last. -> Run time complexity -> **Theta(n)**

* **POP()** -> Deletion from last. -> Run time complexity -> **Theta(n)**

> The list has **two pointers** *first* and *last*. *First* is pointing to the first node of the list and *last* is pointing to the last node of the list.

* **PUSH()** -> Insertion from last. -> Run time complexity -> **Theta(1)**
* **POP()** -> Deletion from last. -> Run time complexity -> **Theta(n)**

### Operations on stack

* stacktop(stack) -> Reads and returns top element of stack.
* IsEmpty(stack) -> Return **True** if stack is empty. Otherwise returns **false**.

## Stack permutation

> The **different ways or different orders** in which we can *pop out elements* from the stack.

### Example

![image](https://user-images.githubusercontent.com/54589605/213628402-af0b9420-eed8-43d0-835f-f5255bae2d76.png)

### Formula

![image](https://user-images.githubusercontent.com/54589605/213628476-4df34444-24ce-442a-9dd3-23dcd96b6126.png)

## DPP 5 (*31_Basics_of_stack*)  [20 Jan 2023]

### Questions before DPP

* 1-> D [strictly decreasing order]

### DPPs

> Solved in *32_Doubt_Clearing_Session*.

* 1-> A [ii,iii]
* 2-> A & C [1,2,4,5,3    3,5,4,2,1]
* 3-> C [3 & 1 instructions]   [Discuss in a later class]
* 4-> Valid = 132, invalid=588

## Questions in *32_Doubt_Clearing_Session*

> Solved in *33_Stack_permutation_and_Advanced_Topics*.

* 1-> B [Two]

* 2-> A[n+m<=x<2n and 2m<=y<=n+m]

* 3-> D [top1=top2-1]

* 4-> * 1. if(top==n-1)
  
      * 2. if(top==bottom)

## DPP 6 (*32_Doubt_Clearing_Session*)

> Solved in *33_Stack_permutation_and_Advanced_Topics*.

* 1-> 532 and 530
* 2-> D [Y+2X]
* 3-> 16^16[n^2]

> These questions and a few more were given in the next DPP i.e DPP 7 from *33_Stack_permutation_and_Advanced_Topics* PDF file. Check them below for correct solutions.

## Implementation of queue using stack (33)

### Best Method

#### Insertion or enqueue

```c
    Insertion(Q,item);

    PUSH(s1,item);
```

> In insertion, we are directly using PUSH(), to insert the element into s1 or first stack.

#### Deletion or dequeue

```c
    Deletion(Q);

    if(!IsEmpty(s2))  // s2 is not empty
    {
        POP(s2);   // Pop the top element from s2.
    }
    else
    {
        PUSH(s2,s1);  // Pop the elements from s1 and then push them into s2.
        POP(s2);
    }
```

> In deletion, first we are checking if s2 or second stack is empty or not. 
> If it is empty then we are going to pop the remaining elements from s1 stack and push them in s2. Then we perform deletion by using POP() from s2.
> If s2 is not empty then we directly use POP() to pop elements from s2.

![image](https://user-images.githubusercontent.com/54589605/213701851-ebb704ff-872b-4081-a6d6-cd14840a5301.png)
![image](https://user-images.githubusercontent.com/54589605/213701941-1a5a501e-3877-4437-bc2a-05dab7ef7d53.png)

### Question on **Implementation of queue using stack**

![image](https://user-images.githubusercontent.com/54589605/213703623-01a7eaea-9512-47e2-8dd9-24710da198b6.png)

### Worst case

![image](https://user-images.githubusercontent.com/54589605/213703671-48d6c5f5-a77b-4aa9-b801-2b9ce3d294f2.png)

> We are inserting all of the 'n' elements in 's1' stack. After insertion into 's1' we are popping all of the elements from 's1' and then inserting/pushing them into 's2' stack. After that we are deleting only the 'm' elements out of the 'n' elements in 's2'.

* Total insertions -> n + n = 2n
* Total Deletions -> n + m = n+m

> In insertion, we are performing 'n' PUSH operations to insert/push the n elements into s1. After the popping from s1 we are doing n PUSH operations to insert/push the n elements into s2.

> In deletion, we are performing 'n' POP operations to delete/pop the elements from s1. We are performing 'm' POP operations to delete/pop the elements from s2. 

### Best case

![image](https://user-images.githubusercontent.com/54589605/213703711-bcdaa296-02f3-42af-ac2f-240499ea66c1.png)

> We are firstly inserting only the 'm' elements into s1 stack. From s1 we pop the 'm' elements and then we push them into s2 stack. From s2 we pop/delete the 'm' elements. Then we  insert the remaining/rest (n-m) elements.

* Total insertions -> m + m + (n-m) = n+m
* Total Deletions -> m+m=2m

> In insertion, we are performing 'm' PUSH operations to insert/push the m elements into s1. After the popping from s1 we are doing m PUSH operations to insert/push the m elements into s2. At the end after all of the deletion/pop in s2, we are inserting/pushing the remaining (n-m) elements into s1 stack.

> In deletion, we are performing 'm' POP operations to delete/pop the elements from s1. We are performing 'm' POP operations to delete/pop the elements from s2.


### Conclusion

> We are saving a lot of PUSH() and POP() operations in *Best case* by just taking the 'm' elements instead of the whole 'n' elements. All of the PUSH() and POP() operations of remaining (n-m) elements are saved.

## Multiple stacks in single array.

### Method 1

![image](https://user-images.githubusercontent.com/54589605/213703830-2cd5df64-3214-46e6-be3a-9fc7f84e6546.png)

> Divide the array into 2 equal halves. On one half, implement a stack and on another half, implement another stack.
> The space utilization is not the best as if one of the stacks is full but not the other, then we can't use the empty space in one of the stacks to push/insert more elements into it.

### stack one(1)

* n -> size of the array

* top1= -1 (initial position, starting from index zero(0))
* maxtop1= n/2-1 (max position of stack 1, end of stack 1)

### stack two(2)
 
* top2= n/2-1 (initial position, starting from index n/2)
* maxtop2 = n-1 (max position of stack 2, end of stack 2)


### Method 2

![image](https://user-images.githubusercontent.com/54589605/213703949-d5f5e877-e1e8-477c-aba7-4c61de057306.png)

> Both of the stacks start from the opposite ends of the arrays or two different ends of the array.
> Here, we can perform insertion as long as we have empty space or free space to store new elements in the array.
> Space utilization is optimized than *method 1*.

### stack one(1)

* n -> size of the array

* top1= -1 (initial position) // starts from '0' index of array.

> No max or end position.
### stack two(2)
 
* top2= n (initial position) //starts from 'n-1' index of array.

> No max or end position.

### Underflow

* if(top1==-1 && top2==n)

### Overflow

* if(top2 == top1+1) 
* OR
* if(top2-1 == top1)

![image](https://user-images.githubusercontent.com/54589605/213703994-049747a1-c456-4752-a403-cce1dde464fb.png)

### Question on **implementation of two stacks in an array**

### Question

![image](https://user-images.githubusercontent.com/54589605/213704185-03f9290e-3f6d-4fe4-9b8c-a43ce9c74812.png)

### Option 1

![stack_question](https://user-images.githubusercontent.com/54589605/213704619-4d78c95b-a89d-4a99-8a2d-1db0dba9182e.png)

> Here, we are limiting the size of the stacks in the array. Space optimization will be hampered. If the stacks are not distributed equally i.e one of the stacks is larger/smaller than the other.

### Option 2

![stack_question_1](https://user-images.githubusercontent.com/54589605/213705171-26b9dddc-f67a-49b7-88a5-8dd0aa62364f.png)

> Even if the stacks are not full or have the overflow condition. Then also this option will condition to *True* in that case as well, which is wrong. Even if have free space to store elements, this condition will say *True* for the array full condition.
> **top1+top2=maxsize** -> Even though stack is not full, it will give *True* to the stack full condition.

### Option 3

![stack_question_2](https://user-images.githubusercontent.com/54589605/213704748-c68e5a9a-d347-47cf-ab27-27771fd3b69e.png)

> If one of the stack is empty and has free space to store more elements, this will return *True* for the array full condition.


## Implement more than 2 stacks in an array

> If we want to do that then we have to given equal space to all of the stacks that we are creating in an array.
> Space utilization will not happen properly. Space will be wasted if some of the stacks are not fully filled to the allocated size of the stacks.

![image](https://user-images.githubusercontent.com/54589605/213721666-daa4c5b4-c0b5-48be-a919-2e20dcfbf99a.png)

## DPP 7 from *33_Stack_permutation_and_Advanced_Topics*

> Solved in *36_Doubt_Clearning_Session* PDF file.

* 1-> 532 and 530 [Solved in *33_Stack_permutation_and_Advanced_Topics*] 
* 2-> C [n(X+Y)-X]  [Got it wrong, thought D [Y+2X] was answer]
* 3-> 16^16=256 [n^2] 
* 4-> * 1. if(top[i]==bottom[i+1])
      * 2. if(top[i]==bottom[i])   [Got it wrong, *if(top==n-1) and if(top==bottom)*]

## Applications of stack (34) [21 Jan 2023]

* Expression Evaluation
* Recursion


* operator -> denotes operation
* operands -> data or value on which operation is to be performed.

* ++a -> prefix
* a++ -> postfix

> They are unary operators.

### Question/doubt

![image](https://user-images.githubusercontent.com/54589605/213860799-d31e4051-7ae5-4969-b194-69fac19460fd.png)
![image](https://user-images.githubusercontent.com/54589605/213860821-6bd50757-50c6-4351-86b1-1403a6044389.png)


> The correct answer provided by sir is **42**. Which is the correct answer for these question. We are using the catalan number here to find the permutations.

### Precidence and Associativity

> There is no any parenthesis in prefix or postfix notations. Only in 'infix' there are parenthesis, for executing them(+,-) before, * and /, even though their precidence is lower than * and /.
> Solve some expression questions to get used to it. Sir solved some in *34_Expressions_Prefix* PDF file.
> If we have unary operators then they will either be in *prefix* or in *postfix* expressions. Because they can only be in *prefix or postfix* format like below.

![image](https://user-images.githubusercontent.com/54589605/214219338-e171558c-414a-4652-99b1-f883f1077324.png)


* ++a -> prefix
* a++ -> postfix

* Two methods:

1) Infix -> Prefix or postfix
2) Prefix or postfix ->  Infix

### Unary operators in expressions

![image](https://user-images.githubusercontent.com/54589605/213864116-ea9f9b28-c616-45c8-8e1a-e81fd6371a84.png)

> Precedence of any unary operator is more than any binary operator.

> The main reason for learning conversion from *infix* to *postfix and prefix* is that CPU doesn't know the rules/logic of *Precedence and associativity*. In compiler design, the compiler fully converts the *infix* expression to *postfix or prefix* and then it sends the converted expression either in *postfix or prefix* to the CPU. Now the CPU knows these expressions and how to solve it.

### Infix to (Prefix or postfix)

* According to precedence and associtivity.

### Postfix to Infix

1) Scan from **left to right**.
2) Solve first operator.
3) Repeat step 1.


### Questions in *34_Expressions_Prefix*

* 1-> 2+5*3^2+9
* 2-> 9/4+2^3-8 [I think, I did Prefix to infix conversion]
* 3-> [Not yet taught]
* 4-> [Not yet taught]


### DPP 8 from *34_Expressions_Prefix*

> Solved in *36_Doubt_Clearning_Session* PDF file.

* 1-> 1)* -/*+AB-CDF/*XYZ    [Prefix]
        * AB+CD-*F/XY*Z/-    [Postfix]

      2)* -+a*bc^d^ef        [Prefix]
        * abc*+def^^-        [Postfix]
  
      3)* ++A/*B+CDF*DE      [Prefix]
        * ABCD+*F/+DE*+      [Postfix]

      4)* -*3log+x1/a2       [Prefix]
        * 3x1+log*a2/-       [Postfix]

      5)* =a-+*-b^c^de/*fgh*ij [Prefix]     [Got it wrong, first '-' minus is *unary* operator, so we have to solve it   first. Second '-' minus is binary operator.]
        * ab-cde^^*fg*h/+ij*-= [Postfix]  [Didnt't do it, Try it again while revision]

* 2-> 1) (A+B*(C-D))/E
      1) A+B*C/D-E
      2) A*B-C+D
      3) A*(B+C)-D

* 3-> [Not yet taught]

## Postfix to prefix  (35)

* Scan from *left to right*
* Change the postfix expression from *postfix* to *prefix* directly.

## Prefix to infix

* Scan from *right to left*
* After operator, 2 operands are the operands needed in the operator.

## Prefix to postfix

* Scan from *right to left*
* After operator, 2 operands are the operands needed in the operator. 

## Evaluation of *postfix notation using stack*

* Push the operands in stack
* If operand found, then pop two elements from stack top.
* Start from **left to right**
* Evaluate as *b operator a*. Example: *b-a*

### Example

![image](https://user-images.githubusercontent.com/54589605/213919361-22a5e035-b6ac-4c82-a608-e105064d8f6b.png)
![image](https://user-images.githubusercontent.com/54589605/213919375-31d63fe0-6610-403b-8bc5-6d81dc604b2e.png)
![image](https://user-images.githubusercontent.com/54589605/213919383-6f64b295-e2e7-44c8-871a-a8a49d7ea569.png)

## Evaluation of *prefix notation using stack*

* Push the operands in stack
* If operand found, then pop two elements from stack top.
* Start from **right to left**
* Evaluate as *a operator b*. Example: *a-b*

### Example

![image](https://user-images.githubusercontent.com/54589605/213919390-ca816044-4264-4616-be1b-1b578e831359.png)


> Create a small table to remeber them properly and practice them as well. They are confusing and easy to forget.

### Table to remember Expression evaluations

| Conversion                   	| Position                    	| Operands                                          	|
|------------------------------	|-----------------------------	|---------------------------------------------------	|
| Postfix to infix             	| left to right               	| 2 operands immediately from left                  	|
| Infix to (Prefix or Postfix) 	| Precedence and associtivity 	| Postfix/prefix                                    	|
| Postfix to prefix            	| Left to right               	| Directly Change it to prefix                      	|
| Prefix to infix              	| Right to left               	| 2 operands immediately from right                 	|
| Prefix to postfix            	| Right to left               	| Directly Change it to postfix                     	|
| Postfix notation using stack 	| left to right               	| a->top, b->2nd top;  a,b;   b^a OR [b operator a] 	|
| Prefix notation using stack  	| right to left               	| a->top, b->2nd top;  a,b;   a^b OR [a operator b] 	|
|                              	|                             	|                                                   	|


### Table Image

> If the above is difficult to read. For some reason.

![image](https://user-images.githubusercontent.com/54589605/214223284-1702d5ad-8bc1-4421-ad0b-42351fa46d32.png)
![image](https://user-images.githubusercontent.com/54589605/214223309-1229faa0-8bbc-46eb-a3ee-55d2c4eecb43.png)


## Doubt Solving Session (36)

### Question 1

![image](https://user-images.githubusercontent.com/54589605/214226598-a80ed8bf-231b-45f1-bd39-2c7ab9f9f16c.png)

### Answer of Q1

![image](https://user-images.githubusercontent.com/54589605/214226632-39b05234-2cc4-47ca-8549-4973f6a20878.png)

### Explaination

![image](https://user-images.githubusercontent.com/54589605/214226694-a3603350-7a2a-41d7-beca-4de09da049b2.png)

### Code

```c
  #include <stdio.h>

  int main() {
    char str1[]="Madeeasy";
    char str2[]= {'M','a','d','e','e','a','s','y'};
    int m=sizeof(str1)/sizeof(str1[0]);
    int n=sizeof(str2)/sizeof(str2[0]);
    printf("m=%d, n=%d\n",m,n);
    printf("%d\n", sizeof(str1)); // length of array + 1. since it is a string
    printf("%d\n", sizeof(str1[0])); //sizeof of character
    printf("%d\n", sizeof(str2)); // length of array. since it is a character array.
    printf("%d\n", sizeof(str2[0]));
    return 0;
  }
```



## Recursion in DS (37) [23 Jan 2023]

> Go through the *37_Recursion_in_DS* PDF file. Everything is explained there.

### Fibonacci Series

![image](https://user-images.githubusercontent.com/54589605/213985055-f8ca57d0-3fc6-49dc-afac-569fd0831474.png)
![image](https://user-images.githubusercontent.com/54589605/213984934-ba94e368-2621-46d6-9222-8c85f59b0ce4.png)
![image](https://user-images.githubusercontent.com/54589605/213984982-4566cca4-029a-426c-b001-421815754308.png)
![image](https://user-images.githubusercontent.com/54589605/213985013-c34951cd-3d6d-42f3-a932-9700ea728a1d.png)

### Power() function

* pow(x,n)

![image](https://user-images.githubusercontent.com/54589605/213985102-92ee491c-a17b-4d09-b51f-4a1d1788a01e.png)
![image](https://user-images.githubusercontent.com/54589605/213985213-05db03c6-14a6-470e-bf8c-e9cfb6bed868.png)
![image](https://user-images.githubusercontent.com/54589605/213985232-976c0ca3-4dac-4eb0-aaa5-20930ce2f394.png)
![image](https://user-images.githubusercontent.com/54589605/213985256-2a2badd2-3f07-4b0c-85aa-f8719ccad79e.png)
![image](https://user-images.githubusercontent.com/54589605/213985305-74ea2d6a-c890-44ef-8c8f-51774aa87df5.png)
![image](https://user-images.githubusercontent.com/54589605/213985546-f08cfdb7-5c2e-405e-9b44-879abb13f649.png)
![image](https://user-images.githubusercontent.com/54589605/213985628-ff0a2a6b-b9cc-476c-8616-799b418f686f.png)

### Tower of Hanoi

* Runtime complexity -> Theta(2^n)

### Algorithm

![image](https://user-images.githubusercontent.com/54589605/213985691-d8ffa948-5d3d-4d26-a6da-3d61d05634b0.png)
![image](https://user-images.githubusercontent.com/54589605/213985718-885483c1-fd2a-4b69-b55a-08bd526f4731.png)


### DPP 9 from *37_Recursion_in_DS*

![image](https://user-images.githubusercontent.com/54589605/213985956-d662346f-765b-43a5-8ea1-502ee2130355.png)

> Solved in *40_Doubt_solving_session*.

### Question 1 solution

```c
    #include <stdio.h>

    int div(int a, int b)
    {
        static int count=0;
        // printf("%d,%d,%d\n",a,b,count);
        if(a==1 || a==0)
        {
            return count;
        }
        if(b==0)
        {
            return 0;
        }
        if(a<b)
        {
            return 0;
        }
        count++;
        div(a-b,b);
        return count;
    }

    int main() {
        int a,b;
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        int result= div(a,b);
        printf("The result is: %d", result);
    }
```
### Running and example

![image](https://user-images.githubusercontent.com/54589605/213989557-a05bf4c3-098a-493f-b9b3-2ba0c69256fe.png)

### Question 2 Solution

```c
    int factorial(int fact)
    {
        if(fact <0)
        {
            return -1;
        }
        if(fact==1 || fact==0)
        {
            return 1;
        }
        return fact*factorial(fact-1);
    }

    int main() {
        int a;
        printf("Enter a numbers:\n");
        scanf("%d",&a);
        int result= factorial(a);
        printf("The result is: %d", result);
    }
```
### Example

![image](https://user-images.githubusercontent.com/54589605/213991094-1b4e1a1f-1f33-40ad-8895-22051752efce.png)

## Tree (38)

## General Tree

> Non-linear data structure. 'Root' is known to be at level **zero(0)**.

* **Internal or non-leaf node** -> Node having children
* **External or leaf node** -> Nodes not having any children.
* **Total no of nodes(N)** -> Total no. of internal or non-leaf node(I) **+** Total no. of external or leaf node(L) 

* Total no. of internal or non-leaf node(I)
* Total no. of external or leaf node(L) 
### **Total no of nodes(N)** for any tree.

* N = I + L

### Parenthesis Representation

> To represent/store a general tree in computer storage, we use *Parenthesis Representation*. We use *string* to store it.

## Binary Tree.

> A tree in which each node has **maximum 2 children**. It can have *0,1,2* nodes as children.
> **Empty binary tree** is considered as a *valid binary tree* as it does not violate any rules/definitions of binary tree.

### Linked representation of **Binary Tree** 

### Handshaking lemma in **Binary Tree**

* No. of leaf node of Binary tree(L)
* No. of nodes with 2 children(I2)
* No. of nodes with 1 children(I1)
* Total no. of internal nodes(I)
* Total no. of nodes (N)

### **Handshaking lemma**:

* L = I2+1.

### *Total No. of internal nodes* in *Binary Tree*

* I = I1 + I2. 

### *Total No. of nodes* in *Binary Tree*

* N = L + I [For any tree]
* N = (I2+1) + (I1 + I2)
* N= 2I2 + I1 + 1  [**Total No. of nodes in Binary Tree**]


* Degree of a node -> No. of children. Same thing.

### Height of a tree.

#### Definition 1

> Height of the tree, is nothing but it's maximum level number. Height is *3* here according to this definition.
> Height of the tree with single node is **zero(0)**.
> Height of an empty tree is **minus one(-1)**.
> Height of the tree is the maximum/farthest distant between the root and the leaf node.
> Height of the tree is the no. of edges in path from root to farthest leaf node.
>

#### Example

![image](https://user-images.githubusercontent.com/54589605/214043866-a9fe9353-9414-49ab-a78a-ab53eea54b9d.png)

### Height of tree Question.

![image](https://user-images.githubusercontent.com/54589605/214238774-1d7cac83-e5b1-49d1-b8d4-3e9c11961898.png)
![image](https://user-images.githubusercontent.com/54589605/214238799-fd105467-0eec-4f3b-8fc6-1684ea351e3d.png)

#### Definition 2

> Height of the tree, is maximum level number of tree plus one(+1). Height is *4* here according to this definition.
> Height of the tree with single node is **one(1)**.
> Height of an empty tree is **zero(0)**.
> Height of the tree is the maximum/farthest distant between the root and the leaf node plus one(+1).
> Height of the tree is the no. of nodes in the path from root to farthest leaf node.

* When doing *Tree* questions, try to take **bigger examples** like *2,3,4* and ignore or pay less attention to *0,1* as they can give multiple right/correct formulas but could/will be wrong.

## Tree drawing *Important*

![image](https://user-images.githubusercontent.com/54589605/214238577-bfaa961e-377b-41aa-b5eb-3905b36f0aea.png)

### Questions from DPP, for example

![DPP_solutions_Tree_1](https://user-images.githubusercontent.com/54589605/214236360-3e9d05c0-7751-4b85-8100-3e7d177fc903.jpeg)

![DPP_solutions_Tree_2](https://user-images.githubusercontent.com/54589605/214520198-112390dc-d578-47ca-9d38-88c681044fa7.jpeg)


## DPP 10 from *38_Tree_Binary_Tree*

### Questions before DPP 

> Only question 1 was solved in *39_operations_on_Binary_tree*.

* 1-> C [(1(2 3 4)(5 6 7))]  [Got it wrong, thought it was 'D'] [GATE 2000] 
* 2-> 28 [Solved, L=I2+1]
* 3-> 39 [Solved, N=2I2+I1+1]

### DPP

> Solved in *40_Doubt_Solving_Session* PDF file.

* 1-> Solutions are below.
* 2-> Solutions are below.
* 3-> Solutions are below.
* 4-> 1) I2=L-1
      2) I=I1+I2 
   
* 5-> 1) 79
      2) 129
      3) 209

* 6-> 1) Minimum -> [floor(logn [base 2])]    [Got it wrong, thought minimum -> floor(sqrt(n))]
      2) Maximum -> [n-1] [Since single node is zero(0)] [This is correct]


* Solutions for Question 1

![DPP_solutions_Tree_1](https://user-images.githubusercontent.com/54589605/214236360-3e9d05c0-7751-4b85-8100-3e7d177fc903.jpeg)

![DPP_solutions_Tree_2](https://user-images.githubusercontent.com/54589605/214520198-112390dc-d578-47ca-9d38-88c681044fa7.jpeg)


* Solutions for Question 2

![DPP_solutions_Tree_4](https://user-images.githubusercontent.com/54589605/214239691-8132fd78-45aa-404b-9c5e-0157f551a8f0.jpeg)

![DPP_solutions_Tree_5](https://user-images.githubusercontent.com/54589605/214239710-fb1b6f0f-f74b-4893-9532-287a18082b27.jpeg)

> In question 4, I made a mistake, Non-leaf nodes(I) will be **4** and hence leaf nodes will be **14**
> Question 3 is correct.
> Question 2 is correct.
> In question 1, I made a mistake, Non-leaf nodes(I) will be **3** and hence leaf nodes will be **6**

* Solutions for Question 3

![DPP_solutions_Tree_3](https://user-images.githubusercontent.com/54589605/214239922-330b93db-28a7-47f9-a448-fe87e5ad8216.jpeg)

> I read the question wrong, I thought it was asking for *max* and *min* total no. of nodes for a given level *L*.
> The question is asking for *max* and *min* nodes for a given level *L*. Just that level and not the sum of all the levels upto *L*, which I did.

### The correct way to solve question *3*

![image](https://user-images.githubusercontent.com/54589605/214524823-f60baecb-5146-46d0-b76d-e2db13feb145.png)

* Min nodes -> 1
* Max nodes -> 2^L



## Operations in **Binary Tree** (39) [24 Jan 2023]

### Questions on *Binary Tree*

![image](https://user-images.githubusercontent.com/54589605/214297980-f2e1f349-f173-4d1b-a629-8b4d2314d232.png)

* No. of **binary tree constructed** using *3 unlabelled nodes* -> *Catalan number* -> (2nCn)/(n+1) -> 5(Ans)
* For 'n' unlabelled nodes -> (2nCn)/(n+1)

![image](https://user-images.githubusercontent.com/54589605/214298401-7245f262-2b78-4401-a8eb-fa993407dc07.png)

* How many *distinct binary tree* can be constructed using *3 distinct keys* -> ((2nCn)/(n+1)) * n! -> 30(Ans)
* For 'n' distinct keys -> [((2nCn)/(n+1)) * n!]     [n! ways to populate one binary tree with 'n' keys]


## Tree Traversals

* **Preorder** -> nLR (root->left subtree->right subtree)
* **Inorder** -> LnR (left subtree->root->right subtree)
* **Postorder** -> LRn (left subtree->right subtree->root)

> All of these traversals are from **left to right** direction. This is the conventional/normal tree traversal. Here, the traversal starts from the *left* subtree.

### Preorder traversal

> Node traversed before *left and right* subtree

### Inorder traversal

> Node traversed in between *left and right* subtree.

### Postorder traversal

> Node traversed after *left and right* subtree

## Observations from **conventional traversals**

> First symbol of preorder traversal is the *root* of the tree.
> Last symbol of postorder traversal is the *root* of the tree.

## Converse order Traversal

* **Converse Preorder** -> nRL (root->right subtree->left subtree)
* **Converse Inorder** -> RnL (right subtree->root->left subtree)
* **Converse Postorder** -> RLn (right subtree->left subtree->root)

> All of these traversals are from **right to left** direction. This is the converse order tree traversal. Here the traversal starts from the *right* subtree.

### Observations from *Converse order Traversal*

> Reverse of converse preorder traversal -> **Conventional postorder**.
> Reverse of converse postorder traversal -> **Conventional preorder**.
> Reverse of converse inorder traversal -> **Conventional inorder**.

## Finding the traversals of a *Binary Tree*

![DPP_solutions_Tree_6](https://user-images.githubusercontent.com/54589605/214304674-3f5d222f-308d-4878-bbf0-2a1c40c8f6a7.jpeg)

![DPP_solutions_Tree_7](https://user-images.githubusercontent.com/54589605/214304730-28b2c474-845e-4cd6-b462-655e6a08ec1a.jpeg)

![DPP_solutions_Tree_8](https://user-images.githubusercontent.com/54589605/214304767-6cb9b12e-84da-40b0-a566-6d0194f57d39.jpeg)

![DPP_solutions_Tree_9](https://user-images.githubusercontent.com/54589605/214304793-c1f1761d-ad70-46fa-b980-f7776203a70a.jpeg)

## Level order traversal

> Starting from level zero(0), traverse all nodes of level no. 'L' or **current level** before traversing any node of higher level no.
> We are traversing from *left to right* direction on each level. This is the standard/convention.
> We can traverse the nodes of a level, in any sequence. We can do *right to left*, *alternate between left to right on different levels*.

### Example

![image](https://user-images.githubusercontent.com/54589605/214306637-cc2cf1e5-bf8a-4973-aa1b-4f1b7c03d479.png)

* **No of distinct level order traversals possible** -> [1* 2! * 3! * 4! =288]

## Constructing the tree using traversals

> To construct *Unique binary tree* using traversals. **Two** traversals are needed. **One** of them should be **inorder** traversal.
> *Preorder and postorder* traversals helps in identifying the **root** of the tree/subtree.
> *Inorder* traversal helps to identify the **left and right subtree** .

### Examples

![DPP_solutions_Tree_8](https://user-images.githubusercontent.com/54589605/214304767-6cb9b12e-84da-40b0-a566-6d0194f57d39.jpeg)

![DPP_solutions_Tree_9](https://user-images.githubusercontent.com/54589605/214304793-c1f1761d-ad70-46fa-b980-f7776203a70a.jpeg)

## Quiz 5 (40) [25 Jan 2023]

> Solutions discussed in *40_Doubts_Session* PDF file.

> Question 2 solution was given wrong in the test solutions. Sir gave the write solution.
> All of the *4* options in Q2 are *correct*.
> Question 4, is solved in a future class. Sir said, he will explain in two different ways in a future class.

### Question 4 solution from **Quiz 5**

### Question 4

![image](https://user-images.githubusercontent.com/54589605/214554332-b763c5c5-f81a-4334-a827-a30d05fcc231.png)
![image](https://user-images.githubusercontent.com/54589605/214554386-f568704d-8d45-4f24-911f-30c2408a3b3f.png)

> Sir gave a solution using *Dot method* in *40_Doubts_Session* PDF file.

### Solution

![image](https://user-images.githubusercontent.com/54589605/214554227-3aff9858-95d0-430f-ab2c-3c2159b55f1c.png)
![image](https://user-images.githubusercontent.com/54589605/214554678-55e3843d-6877-43c0-8bd3-c85e4f7a0ab4.png)
![image](https://user-images.githubusercontent.com/54589605/214555257-3d1ff526-e5e3-4221-8a95-9072f329cc80.png)

> Do the same for *T2* tree. Find the traversals.

![DPP_solutions_Tree_14](https://user-images.githubusercontent.com/54589605/214558201-0672f0ab-3923-4aef-859f-d3e3da90c994.jpeg)

## DPP 11 from *39_Operations_on_Binary_Tree*

> Solved in *40_Doubts_Session* PDF file.

* 1-> Solutions below
* 2-> Solutions below
* 3-> Solutions below

### Question 1 solution

![DPP_solutions_Tree_10](https://user-images.githubusercontent.com/54589605/214533937-d575b20c-d152-4c91-81d6-bb989e8b45c0.jpeg)

![DPP_solutions_Tree_11](https://user-images.githubusercontent.com/54589605/214534031-506d3d87-35a6-43d3-abbc-e5ddbd472b3e.jpeg)

### Question 2 solution

![DPP_solutions_Tree_13](https://user-images.githubusercontent.com/54589605/214552976-2c2eacd5-3424-42c0-b516-378dec740a98.jpeg)

### Question 3 solution

![DPP_solutions_Tree_12](https://user-images.githubusercontent.com/54589605/214552992-288ba8e5-83ea-4823-b991-de86a8414ed3.jpeg)

## Post-order and In-order

> Using post-order and in-order traversals to create/construct a tree

![DPP_solutions_Tree_15](https://user-images.githubusercontent.com/54589605/214583713-6123f86d-0ae8-4756-916c-c1b8ef44c453.jpeg)

### Example of traversal questions

![DPP_solutions_Tree_16](https://user-images.githubusercontent.com/54589605/214583826-43f78e77-019d-4284-93d4-8a6bfbd708fa.jpeg)

* If *pre and post* order *can* provide a unique binary tree?

> True. [**Condition Applied**] [Alawys -> False] [Can -> True]
> The condition is that every node much have either **zero(0) or two** children. There should be **no nodes** in the tree which have **one or single** children.
> If this type[above condition making] tree exists. If the *pre and post* order are given for that tree, then we can construct a **unique** tree from that *pre and post* order traversals.

### Question on *Construction of tree using traversals*

> There questions are from *40_Doubt_Clearing_Session*.

### Questions

![image](https://user-images.githubusercontent.com/54589605/214585417-60165400-b1f9-4408-a8bf-471ed588120e.png)
![image](https://user-images.githubusercontent.com/54589605/214586955-053d30ce-8abd-4c5e-b20d-75eedc127a4a.png)


### Solution

![DPP_solutions_Tree_17](https://user-images.githubusercontent.com/54589605/214587079-e99d3329-eab0-4c27-a906-756584316fc6.jpeg)

> Got one of them wrong. Should be like below.

![image](https://user-images.githubusercontent.com/54589605/214589897-7af3ca55-2d05-4a77-990f-0a21d2c74927.png)
![image](https://user-images.githubusercontent.com/54589605/214590416-3daea8fb-a6b3-424e-b828-15cb8d84cbd9.png)

> In post-order we do, Left->right->root. So as *7* is not between *3* and *4*, hence it is not the right child of *3*.
> In the above image, we will get *4* variations as there are nodes with single children. Hence it is not clear that those single children should be *left or right* child of the node.

## Using *Pre and post* order traversals to construct *unique binary tree* **Important** (41)

> Difficult to understand as well. Looks at the examples from *41_Basics_of_Tree* PDF file. Practice them as well.


## Recursion in **Binary Tree**

![image](https://user-images.githubusercontent.com/54589605/214605000-b2ce047d-a552-447a-b6a0-2e8dda0ea7ba.png)

> Here we are counting the no. of leaf nodes in the *Binary Tree*.
> We have to understand the conditions and have to reach the *base condition/case* of the program to be able to find out what is the program is trying to achive running on a *Binary Tree*.

* For the above question and in general

> The main **funda/logic of recursion in binary tree** is that if we have reached the *base condition/case* of the program and then we have to finally return a value(which is value=1 here), otherwise if we haven't reached the *base condition/case* yet then **count** from *left subtree* and *right subtree*.

### Working

![image](https://user-images.githubusercontent.com/54589605/214607705-ef991758-3819-49da-ac57-899aba5d85f3.png)

### Above code written in a different way

![image](https://user-images.githubusercontent.com/54589605/214608892-a6996a50-8c1e-493e-ac4b-42e8c14a4a81.png)

> This is an example of **Pre-order** traversal.

![image](https://user-images.githubusercontent.com/54589605/214609085-b068a08d-92b9-4c81-8310-ff7cceb94408.png)
> This is the processing part of *root* node. We are processing/executing some logic on the root node(n).

![image](https://user-images.githubusercontent.com/54589605/214609318-2bc7a893-fbbd-4c7a-a5bd-0974c167b2c4.png)
> Then we are recursively calling firstly the **left subtree(L)** then the **right subtree(R)**.
> We know that pre-order traversal looks like this -> nLR(root->left subtree-> right subtree)


## Height of tree(Recursive approach)

> Farthest left node -> Height of the tree.
> We will recursively calculate the height of left subtree and then we will recursively calculate the height of right subtree. We will find out which subtree(left or right subtree) has the maximum height. After that, we will do plus one(1)[+1] to the maximum height from the previous calculation. Plus one, to include the root of the tree.

* **Height of tree** -> [Max(Height of left subtree, Height of right subtree) + 1]

![image](https://user-images.githubusercontent.com/54589605/214611890-ee0b5a92-a588-40b6-b2bf-f9a670ea8785.png)

* Base case

> Depends on if single node is **zero(0)** or **one(1)**. As there are two definitions to finding the height of a tree. We studied it earlier.
> If single node is **zero(0)**, then base case would be to return **-1**.
> If single node is **one(1)**, then base case would be to return **0**.

### Algorithm to calculate height of tree **Recursively**.

![image](https://user-images.githubusercontent.com/54589605/214613718-aba34a21-77f7-41dd-bc66-51c094b1bc5e.png)

* Some **important** questions in *41_Basics_of_tree* PDF file from Page **20**, do check them. They are important questions. Practice them as well.

### Example

![image](https://user-images.githubusercontent.com/54589605/214615108-aeca35d2-bc2f-4408-8073-bd5a223b4539.png)

## DPP 12 from *41_Basics_of_tree*

> Solved in **44_Doubt_Clearing_Session**.

> **All of the answers are below**.

### Answers

![DPP_solutions_Tree_18](https://user-images.githubusercontent.com/54589605/215074894-54683388-a5bb-4b75-9a51-ce265ba65943.jpeg)
![DPP_solutions_Tree_19](https://user-images.githubusercontent.com/54589605/215074900-74967014-39a5-4edf-8622-11971e00555a.jpeg)
![DPP_solutions_Tree_20](https://user-images.githubusercontent.com/54589605/215074902-73b37505-94b7-4bde-9b46-fd87288c93e9.jpeg)
![DPP_solutions_Tree_21](https://user-images.githubusercontent.com/54589605/215074906-858f6d22-baed-4ea3-915d-e1b1a6b00bdc.jpeg)
![DPP_solutions_Tree_22](https://user-images.githubusercontent.com/54589605/215074910-bd7dc41a-9360-48b4-a01a-944305022d0d.jpeg)

### Correction for above questions

### Solution for **Q4**

> In **4** should have converted the **converse postorder and the converse inorder** traversal to **conventional preorder and conventional inorder respectively** traversal by simply **reversing** it. It would have been easier.

![image](https://user-images.githubusercontent.com/54589605/215431681-32b3de5f-3c65-4d88-a3cf-884afcb5ceba.png)

### Solution for **Q5**

> In **5** should have converted the **converse preorder** traversal to **conventional postorder** traversal by simply **reversing** it. It would have been easier.

![image](https://user-images.githubusercontent.com/54589605/215456680-691cf082-3ddb-4ae1-9e79-c3a0d8394c84.png)

### Solution for **Q8**

> *8* is wrong as well. Element 6 would be right child pointer.

![image](https://user-images.githubusercontent.com/54589605/215458688-c355aac8-df3b-4aef-a662-33210c899bd6.png)

### Solution for **Q10**

> This was a different question. Wasn't able to do it. **Check it out again. During revision**.

![image](https://user-images.githubusercontent.com/54589605/215459806-9dc7a4b3-c2d2-4eb7-9b8d-9bf9a9c9b7a1.png)

> **Rest of the solutions are correct**.

## Operations on Binary Tree (42) [27 Jan 2023]

### Representation of **General tree** to **Binary**

* **Leftmost child, Right sibling** Representation

> This is just a way to store a *General Tree*. The children of a node are stored in the left subtree of a node. Hence if a node's left-subtree is empty then that node is a **Leaf Node**.
> To find the **Leaf nodes** or count the leaf nodes, we need to check the nodes whose **left** is empty.

### Example

![DPP_solutions_Tree_26](https://user-images.githubusercontent.com/54589605/215255825-54d7afcb-afaa-41b5-86d6-5c0e33c8d37e.jpeg)

### Expression Tree

> To Convert traversals from **conventional** pre/post/in-order to **converse** pre/post/in-order traversals, we just need to **reverse** the traversal and **vice-versa**.

![image](https://user-images.githubusercontent.com/54589605/215279659-8906e3f9-a422-4aea-b0f4-62d52343094a.png)


### Example

![DPP_solutions_Tree_27](https://user-images.githubusercontent.com/54589605/215255849-046de82b-6b96-4d10-964e-1c4dfb613f33.jpeg)

![DPP_solutions_Tree_28](https://user-images.githubusercontent.com/54589605/215255858-42fbfedb-47c8-41da-b58e-fb5396c00d0f.jpeg)

### Expression Tree with **unary operators**

### Expression Tree **Drawing**

> The one which gets solved **first** has the **higher precedence**.

## DPP 13 from *42_operations_on_binary_tree*

> Question 3, solved in *43_Operations_on_Binary_tree* beginning.
> Rest of them are solved in **44_Doubt_Clearing_Session**.

* 1-> BDEACFG
* 2-> CGFABED [Got it wrong]
* 3-> 6 [Got it wrong. Thought 4 is correct]
* 4-> [Answers below]

> All of the solutions below, including *4*.


### Solutions of the above questions

![DPP_solutions_Tree_23](https://user-images.githubusercontent.com/54589605/215255753-2e497784-65aa-4dd4-b5fb-25e546c7a833.jpeg)

![DPP_solutions_Tree_24](https://user-images.githubusercontent.com/54589605/215255757-f364993a-7219-4d17-bedc-ba3f5a9f6e17.jpeg)

![DPP_solutions_Tree_25](https://user-images.githubusercontent.com/54589605/215255769-a6010d51-db0e-41ba-a9d3-00bf88e270dc.jpeg)

### Correct solution for **Q3**

![image](https://user-images.githubusercontent.com/54589605/215279979-6227371f-3c98-4e0c-864b-a992c7a8f80c.png)
![image](https://user-images.githubusercontent.com/54589605/215279988-db3c4ff7-85bf-41f6-a9cc-a2a4a37f4ce1.png)

### Correct solution for **Q2**

![image](https://user-images.githubusercontent.com/54589605/215460945-5dca21c5-cd32-4cd8-be91-98fe53877031.png)

### Correct solution for **Q4 part 5**

> I did all of it right. Forgot to add the **=** operator.

![image](https://user-images.githubusercontent.com/54589605/215461680-7143a83b-8a80-404f-8dd1-0ea73f0ed4fd.png)
![image](https://user-images.githubusercontent.com/54589605/215461714-5668a4e6-3169-47d7-8a86-2eb91f8f566b.png)

> **Some questions** can be asked here after the **tree** is drawn.
> Some of the questions can be asked are like **below**. Some of the questions which could be asked after drawing the tree.

* The operator at the lowest level?
* How many nodes are there at the lowest level?
* What is at the root?
* Height of the tree?
* No. of nodes at a specific level.
* Some specific operator at some level.



## Complete Binary Tree (43) [28 Jan 2023]

> A **Binary Tree** in which all levels much have maximum no. of nodes, except possibly the last level. The **last level nodes** must be arranged from **left to right**.

![image](https://user-images.githubusercontent.com/54589605/215270543-c8471d19-4dc4-4c44-9c31-247a42866f23.png)


## Strict Complete Binary Tree

> All levels must have maximum no. of nodes.

![image](https://user-images.githubusercontent.com/54589605/215270555-3ead06a5-de0a-4bbd-a81a-55cffbb49d0c.png)


### Formula to calculate **max and min** no. of nodes in **Complete Binary Tree**

* **Max** -> 2^(h+1)-1
* **Min** -> 2^h

![image](https://user-images.githubusercontent.com/54589605/215263145-138e0aa0-8450-40cf-b608-085a5e5a76f3.png)

## Array Representation of **Complete Binary Tree**

> When writing the algorithm, the storage is in **Array** only which is fine. The access will still be in **non-linear** order or **hierarchical** order. We cannot access elements in **linear or sequential** order.

### When array index starts from **1**

![image](https://user-images.githubusercontent.com/54589605/215270590-eab63736-9011-493c-931d-2f8148bb848f.png)
![image](https://user-images.githubusercontent.com/54589605/215270613-a99a6462-77c1-4e85-8a45-1ece23d29c9d.png)


### When array index starts from **0**

![image](https://user-images.githubusercontent.com/54589605/215270629-1f98cd93-6b7f-461c-b62c-2fa154762d7b.png)


## Full Binary Tree or Strict Binary Tree or 2-Tree or 2-T

> A Binary Tree in which each node has either zero(0) children or two(2) children.
> A Binary Tree in which every internal node has exactly two(2) children.
> A Binary Tree in which no any node has one(1) child.
> In **Full Binary Tree**, no. of nodes are always **Odd**.

![image](https://user-images.githubusercontent.com/54589605/215270682-9dfb0e60-2841-4cff-9413-f75e88e6b921.png)

### **Full Binary Tree** Formulas

![image](https://user-images.githubusercontent.com/54589605/215270706-1401f25a-6d82-4abb-88a9-994bc8762221.png)

We know, 

* L=I+1 ...(1) and N=I+L ....(2)

* From (2)

* I=(N-1)/2       [L=N-I]
* L=(N+1)/2       [I=(N-1)/2]

* From (1)

* N= 2I+1  [L=I+1]
* N= 2L-1  [I=L-1]  

![image](https://user-images.githubusercontent.com/54589605/215271444-54b0739c-85f2-495e-9c64-4d136119b4c5.png)
![image](https://user-images.githubusercontent.com/54589605/215271455-8ebb28bc-d481-4c24-8e4f-5941112d74d6.png)


## 3-Tree or Complete 3-ary Tree or 3-T

> Every node has either **zero(0)** child or **three(3)** children.
> 'I' -> internal nodes

![image](https://user-images.githubusercontent.com/54589605/215271497-1966b7c7-5d18-4b99-9ab7-74db0113ba4b.png)


* Leaf nodes(L) =2I+1.
* N=I+L [We know]
* N=3I+1 [L=2I+1]
* N=(3L-1)/2 [I=(L-1)/2]

## K-Tree or Complete K-ary Tree

> Ecah node has either zero(0) child or **K**-children.
> 'L' -> Leaf Nodes

* Leaf nodes(L) =(k-1)I+1.
* Total no. of nodes(N) = KI+1
* Total no. of nodes(N) = (KL -1)/(k-1)

![image](https://user-images.githubusercontent.com/54589605/215271959-46dcc99a-516c-4985-b1c1-0c21be908d10.png)


## Left skewed Binary Tree

> Every internal node has only left-child.
> It has only one or single leaf node.

## Right skewed Binary Tree

> Every internal node has only right-child.
> It has only one or single leaf node.


* Weekend Quiz syllabus -> **Binary Tree**

## DPP 14 from *43_Operations_on_Binary_Tree*

> Solved in **44_Doubt_Clearing_Session**.

* 1-> [h] [h-> height of tree] [Got it wrong]
* 2-> [h] [h-> height of tree] [Got it wrong]
* 3-> [2^h -(h+1)] [OR, 2^h-h-1] [Check sir did it]
* 4-> [2^(h+1)-h-2] [Check sir did it]
* 5-> Best case= 1, Worst case=2^h [Got the **worst case** wrong]
* 6-> Leaf nodes= 16, Internal nodes= 15
* 7-> Leaf nodes= 51, Total no. of nodes= 101
* 8-> Not possible [Since in Full Binary Tree, no. of nodes always **odd**]
* 9-> D [(2n+1)/3] [Explaination in *44_Doubt_Clearning* PDF File]
* 10-> C [n(k-1)+1] [Reference to this formula, here they used 'n' instead of 'I',(k-1)I +1]
* 11-> A [0] [Descendants -> All children. Full Binary Tree either **zero(0)** or **2** children] [Got it wrong]

### Solutions

### **Q1**

![image](https://user-images.githubusercontent.com/54589605/215463553-a73a3ba7-245f-4fc8-8977-d89ac311e756.png)

> If height of a tree with single node is **1**, then it would have been **h-1** as the **answer** here. As in the question, it was **0** as the height of a tree with single node, hence it was **h** as the answer to the question.

* Height of a tree with single node is **1* -> **h-1**
* Height of a tree with single node is **0* -> **h** 

### **Q2**

![image](https://user-images.githubusercontent.com/54589605/215464241-0ed8ad6f-d7dc-4775-b665-186f5e1815ae.png)

> If height of a tree with single node is **1**, then it would have been **h-1** as the **answer** here. As in the question, it was **0** as the height of a tree with single node, hence it was **h** as the answer to the question.

* Height of a tree with single node is **1* -> **h-1**
* Height of a tree with single node is **0* -> **h** 

### **Q3**

![image](https://user-images.githubusercontent.com/54589605/215468135-cd650671-f7c9-4a70-bd2f-ffff07ff5a1f.png)

### **Q4**

![image](https://user-images.githubusercontent.com/54589605/215468218-56324776-a2be-4c93-ad06-92b1494855c6.png)

### **Q5**

![image](https://user-images.githubusercontent.com/54589605/215468790-c46fcad5-a802-4a55-a402-5a5cd8ad69c6.png)

### **Q11**

![image](https://user-images.githubusercontent.com/54589605/215471131-1c0c4222-2f9d-4635-90cb-2fb487907bd6.png)

> To get **odd** count of descendants including itself(mentioned in the questions) then we have to have **even** number of childen of the node. If we remove the *including itself condition* then the count of descendants would be **even** which means that they are talking about a **Full Binary Tree** as it can only have **0 or 2** children. As we know a **Full Binary Tree** has **odd** no. of nodes. Hence to have **odd** descendats including itself we need to have either **0 or 2** children of a node. If it had **1** child then the count will become **even**. Hence it doesn't have any **1** child nodes. So the answer is **zero**.

![image](https://user-images.githubusercontent.com/54589605/215473274-8be10813-d743-4051-90ef-6b632518f093.png)
![image](https://user-images.githubusercontent.com/54589605/215473349-7ed66e1a-1130-4dfa-80c5-2d1f03884557.png)

## **44_Doubt_Clearing_Session** (44) [30 Jan 2023]

## Searching Revision/Summary (45)

![image](https://user-images.githubusercontent.com/54589605/215482315-5b032405-d63c-4b35-a4e4-9326423fa0c4.png)

> Why we need **Binary Search Tree**.
> We need **searching**  in lesser time complexity than **O(n)** and it is only possible in **array with binary search** which is **O(log n)**. The issue is that we need **sorted array** for binary search to work and we have to maintain a sorted array. To maintain a sorted array we have to do **insertion and deletion** in **O(n)** runtime complexity and can't be done in **O(logn)**. 
> To fix these problem, scientist came up with a new data structure called as **Binary Search Tree**. Where we would store elements and **searching** would be done in **O(log n)** and **insertion and deletion** would happen in **O(log n)** runtime complexity as well.

## Binary Search Tree(BST)

> A **Binary Tree** in which for every node, it's *left subtree* contains *smaller or lesser values* and *right subtree* contains *greater or larger values*.
> If **equal values** come then it will be mentioned in the question only what to do with them. As there are no questions related to this that have come on GATE exam till now.
> Two conditions are possible, **one** is that *equal and lesser values* are to the left and *strictly greater values* on right side. 
> **Two** is that *strictly lesser values* are to the left and *equal and greater values* on the right side. 
> Only when **equal** keys are there.

## Searching in Binary Search Tree(BST)

> Done in *45_Binary_Search_Tree*. Practice them.

![image](https://user-images.githubusercontent.com/54589605/215524553-d264d2c4-f7c7-404f-bd40-e4a701bb693a.png)

## Insertion in Binary Search Tree(BST)

![image](https://user-images.githubusercontent.com/54589605/215524620-af7f2796-dd6e-4acf-bd9b-b400c5b84011.png)

## Construct Binary Search Tree(BST) using keys

> Done in *45_Binary_Search_Tree*. Practice them.

![image](https://user-images.githubusercontent.com/54589605/215524704-05780453-b535-49f3-a90f-056ac9f9ea30.png)
![image](https://user-images.githubusercontent.com/54589605/215524753-53ee14de-c29d-4042-b77b-a27ff606abda.png)

## Find **Minimum** in  Binary Search Tree(BST)

> Go to the left->left->left as long as we don't find a node who's **left child** is empty or not present, right child can be present as well that doesn't matter. Then that *node's data* is the **minimum** of BST.

![image](https://user-images.githubusercontent.com/54589605/215524873-14e0b69c-ac8f-449d-9b7d-7487058c1cb0.png)

> Right side one is using **recursion**.

## Find **Maximum** in  Binary Search Tree(BST)

> Go to the right->right->right as long as we don't find a node who's **right child** is empty or not present, left child can be present as well that doesn't matter. Then that *node's data* is the **maximum** of BST.

![image](https://user-images.githubusercontent.com/54589605/215524979-2bcf875a-3e8e-42c2-865a-16533adf97fb.png)

> Right side one is using **recursion**.


> If we take the **Inorder** traversal of a BST then it will be (left subtree-> root-> right subtree) smaller values->root->larger values.
> Hence, if we take the **Inorder** traversal of a BST, then it will be in **sorted order/sequence** of **ascending order**.
> **Inorder traversal** of a BST is a **sorted sequence** in **ascending order**.
> **Converse Inorder traversal** of a BST is a **sorted sequence** in **descending order** as it is the **reverse/opposite** of **conventional inorder**.

> We can directly **construct** a BST from a **pre-order** traversal because in BST, the left subtree elements are smaller than root and right subtree elements are greater than the root. We have to insert the elements from **left to right**.


> Pre-order -> **root->Left->right**. Traversal is from **left to right**.
> We know the left most element is the **root** of the tree. Hence, we will traverse all of the elements from **left subtree** then only will go to **right subtree**. After we have gone to the **right subtree** we can't go back to traversing **left subtree** which is **wrong**. First traverse the whole **left subtree** and then come to **right subtree** which is **pre-order** traversal.

> Post-order -> **Left->right->root**. Traversal is from **right to left**.
> We know the right most element is the **root** of the tree. Hence, we will traverse all of the elements from **right subtree** then only will go to **left subtree**. After we have gone to the **left subtree** we can't go back to traversing **right subtree** which is **wrong**. First traverse the whole **right subtree** and then come to **left subtree** which is **post-order** traversal.

### Checking validity of post-order traversal


## DPP 15 from *45_Binary_Search_Tree*

> Solved in **48_Doubt_Clearning_Session**.

* 1-> III

> All solutions are below.

### Solutions to DPP 15

![BST_1](https://user-images.githubusercontent.com/54589605/215524198-5268d132-72f5-470d-8406-8887610ec4d2.jpeg)

![BST_2](https://user-images.githubusercontent.com/54589605/215524225-01079dbd-363b-4a2f-afc8-5bb41326a27b.jpeg)

![BST_3](https://user-images.githubusercontent.com/54589605/215524234-237ba913-bdd4-42e4-8d51-50e82f79fefb.jpeg)

![BST_4](https://user-images.githubusercontent.com/54589605/215524267-e8e47e4a-955e-4cbf-9cd1-c8932be1aedc.jpeg)

![BST_5](https://user-images.githubusercontent.com/54589605/215524286-55507edb-19e2-4515-aafa-ce272433986e.jpeg)

### Question 7

![image](https://user-images.githubusercontent.com/54589605/216317637-977c8b60-3bbf-4380-bc35-2ec6907ad7c5.png)

> In *48_Doubt_Clearning_Session* PDF file Page **7** question, if they had asked **How many number of levels in the tree?** 

* **How many number of levels in the tree?** 

> **3** levels (Ans)

## Operations on BST (46) [1st Feb 2023]

![BST_question](https://user-images.githubusercontent.com/54589605/216014163-64e2340c-fc14-4bca-a7ea-65e55fdb52c1.png)

> For 'n' distinct keys/elements and an(one) unlabeled binary tree with 'n' nodes. As there was one unlabeled binary tree with 'n' nodes and we can get arrange the 'n' distinct keys in '1' way to get a BST.

![image](https://user-images.githubusercontent.com/54589605/216018436-e9491432-18e1-468c-bd55-45440afeb33d.png)


### Recursive approach of Catalan Number

![image](https://user-images.githubusercontent.com/54589605/215994693-b9ff7a36-7100-435e-a9ad-70f29492ab3f.png)
![image](https://user-images.githubusercontent.com/54589605/215996130-8c3c3aff-5936-48fd-892f-3a1c7c650bd0.png)

> We created different ways to create **Binary Trees**. The answer we got for **Binary Tree** is the same answer for **Binary Search Tree** because for finding the different **binary trees** for *n* distinct elements, we use **Catalan number**. For finding the different **binary search trees** for *n* distinct elements, we use **Catalan number multiplied by 1**. Hence both have the same answer.
> If the question is for **binary tree** with **n unlabelled nodes**, we will get the **same answer** as above. 

### Question

![image](https://user-images.githubusercontent.com/54589605/215996188-3866dec5-9d84-4fe8-b3c2-324746ddeaf1.png)
![image](https://user-images.githubusercontent.com/54589605/215996218-e4cb4b46-0aa1-4077-81d2-70cbe3e28fae.png)

## Deletion in BST

![image](https://user-images.githubusercontent.com/54589605/216018676-785a77dc-5c9b-4783-9e0c-8cac785c1a96.png)

* Search the element to be deleted
* Find the no. of children of node to be deleted.
* Call one of the following cases based on no. of children
    1) **Case 0** -> Node with 0 children
    2) **Case 1** -> Node with 1 children
    3) **Case 2** -> Node with 2 children

* Two conditions/ways in **Case 2**
    1) **Inorder Successor** -> Element just after the element to be deleted in the sorted sequence.
    2) **Inorder Predecessor**-> Element just before the element to be deleted in the sorted sequence.

### Case **0**

![image](https://user-images.githubusercontent.com/54589605/216018760-249212ba-de83-448f-b8d5-6db8a5f6e4ab.png)

### Case **1**

![image](https://user-images.githubusercontent.com/54589605/216018871-0c65387a-8150-4f7d-8972-f1d0e379cceb.png)
![image](https://user-images.githubusercontent.com/54589605/216018935-03738a8d-f631-404f-8a7f-ed3e93fdbd91.png)

### Case **2**

### **Inorder Successor**

![image](https://user-images.githubusercontent.com/54589605/216019166-bd4ea4f1-0ee9-4e59-9f9d-a0aed0e1145f.png)
![image](https://user-images.githubusercontent.com/54589605/216019312-d6e36f00-7e4f-4885-b55b-ea7474dba670.png)

### **Inorder predecessor**

![image](https://user-images.githubusercontent.com/54589605/216019769-870684ab-a4a0-4af7-9861-c18e18be1109.png)
![image](https://user-images.githubusercontent.com/54589605/216019810-fdd68856-b11c-4603-a38f-31511a927a3b.png)


> There has not been any GATE questions to delete a given node and all. If it is given in the future, then they will **mention** how to delete a node with two childen via **Inorder Successor or Predecessor**. Nothing is **default** here.

> One question can be asked which is better or easier here **Inorder Successor** by replacing **90** or **Inorder Predecessor** by replacing **70**. Tell where there is **minimum** no. of movement or pointer change.
> **Inorder Successor and Predecessor** comparison question. Which is better/easier to implement in the given question.

## Runtime complexity of BST

> In the worst case of searching in BST, we can get a left/right skewed tree and the no. of nodes(n) in the tree is equal to the height(h) of the tree(h==n).

### Worst Case

> Searching -> **O(n)**

![BST_searching_worst_case](https://user-images.githubusercontent.com/54589605/216014299-fd61d2f1-f1a4-443f-9d81-f7a6380af213.png)

### Best/Average Case

* **Best/Average** case -> **O(log n)**
> Searching -> **O(log n)**
> Since every level of tree is filled.

![BST_searching_worst_case_1](https://user-images.githubusercontent.com/54589605/216014309-156d343f-1611-49cc-bcb4-31bc75306c88.png)

![BST_searching_best_or_average_case](https://user-images.githubusercontent.com/54589605/216014283-d7977543-55bd-4ba6-a8a8-9ba0556771c6.png)

* Where **h** is the height of the tree.
* Where **n** is the no. of nodes in the tree. 

### Runtime complexity table of BST

> First one for **searching** which is **O(h)** is the **runtime complexity of searching in BST**.
> Comparting **nodes** almost to the height of the tree(h).

![image](https://user-images.githubusercontent.com/54589605/216020018-a4225c1d-fd99-4e10-b49c-e50c17dc172d.png)

![image](https://user-images.githubusercontent.com/54589605/216991687-d9f453e0-55dd-4040-b8b3-d97cf28c4a17.png)


## DPP 16 from *46_operations_on_Binary_Search_Tree*

> Solved in **48_Doubt_Clearning_Session**.

* 1-> [Solved Below]
* 2-> [Solved Below]
* 3-> C [n-p]   [Got it wrong]
* 4-> B[Theta(n) , postorder-> right to left] [Will be solved later]
* 5-> [Already solved by Sir in *46_operations_on_Binary_Search_Tree*]

### Solutions

![BST_6](https://user-images.githubusercontent.com/54589605/216071355-9be08806-e7ad-480e-b4d1-11559e6c43be.jpeg)

> Got **Q3** wrong.

### Explaination of **Q3** from DPP 16

![image](https://user-images.githubusercontent.com/54589605/216318968-84e16bfa-1a92-4078-8741-2510c4978bea.png)
![image](https://user-images.githubusercontent.com/54589605/216319234-6e90e9d2-eaa9-4933-9965-d317ff486ad1.png)

> Read the circled part written by me in the chat.



## Tree PYQs on *46_operations_on_Binary_Search_Tree*

> Solve them while **Revision**

## Searching in Tree(BT and BST)  (47)

* BST -> O(h) [h-> height of tree]
* BST(worst case) -> O(n) [n=no. of nodes of tree]
* BT(Binary Tree) -> O(n) [Using traversals, preorder is best]

![image](https://user-images.githubusercontent.com/54589605/216123265-35d33061-742f-4804-a646-307f473cf3ba.png)

## Balanced Tree

> A tree which has height always equals to **log n** for 'n' nodes.

![image](https://user-images.githubusercontent.com/54589605/216123453-4ef6d872-5147-47fa-8ecb-7530ba710073.png)

### Balance Factor

> A tree in which for each node the balance factor is in between **-1 to 1[-1,0,1]**. It is the **difference between the height** of *left subtree* and *right subtree*.

![image](https://user-images.githubusercontent.com/54589605/216123380-5f812285-eb21-480a-8ffe-294d4d77e5cb.png)

* **Balance Factor(BF)** = LH - LR
* **LH** -> Height of left subtree
* **LR** -> Height of right subtree

* If a tree is a **balanced tree** then that tree is also a **binary search tree**?

> No. **Balanced tree** means the height of the tree is close to **log n** but it is not necessary that we have to **store the elements in left and right format** i.e smaller keys in left subtree and larger keys in right subtree.
> Both are different trees. They are not related.
> If we want **Balanced tree** as well as a **binary search tree** then that tree is called as **AVL** tree.
> There are **tree** trees here **Balanced tree** where there is only height balancing. **Binary search tree** whose height can be between **log n and n** and there is no talk/logic of height balancing. 
> **AVL** tree which is the **Balanced binary search tree**. It is both **Balanced tree** and **Binary search tree** combined. It's height will be in **log n** only. It is **Binary search tree** as well so, smaller values will be at the left subtree and larger values at the right subtree.

## AVL or **Balanced binary search tree** Tree

> Self balancing BST.
> After some **Insertion or deletion** in BST and the balance is changed/disrupted then the AVL tree balances itself by applying some methods. 
> **Height of AVL tree will always be log n**.
> **Searching, insertion and deletion** runtime complexities are **log n**.
> It will always **self balance itself**.

![image](https://user-images.githubusercontent.com/54589605/216123568-b38ae8a7-21a3-47a8-a9cd-2eb0d79cc49a.png)


### Types of Imbalances

* LL -> Left Left (Single Right rotation)
* RR -> Right Right (Single Left rotation)
* LR -> Left Right 
* RL -> Right Left 

> Both **LR** and **RL** are not single rotations but double rotations.

### **LL**

![image](https://user-images.githubusercontent.com/54589605/216123791-23b1dc57-24db-4fbf-835c-95387d64047c.png)

### **RR**

![image](https://user-images.githubusercontent.com/54589605/216123877-fbe5b525-b4ab-4169-ab21-9999143ba6da.png)

### **LR**

![image](https://user-images.githubusercontent.com/54589605/216124000-f079f2a2-2a0b-4406-9fbe-05a53de8e0e5.png)
![image](https://user-images.githubusercontent.com/54589605/216126049-951abd51-732f-4b53-917d-9fee067b75e0.png)

### **RL**

![image](https://user-images.githubusercontent.com/54589605/216126105-8256a572-4a66-41c3-9fd2-75abf4e1bc7c.png)
![image](https://user-images.githubusercontent.com/54589605/216126277-49fd744b-045c-4516-9ec7-2dfc25750da2.png)


### AVL tree **Insertion**

![image](https://user-images.githubusercontent.com/54589605/216126441-f5ef5d12-3c8f-471b-99f2-cf6df0040c52.png)
![image](https://user-images.githubusercontent.com/54589605/216126485-b7cb4e83-576e-47d6-98d2-10083f82f3fd.png)



## DPP 17 from *47_Balanced_Binary_Search_Tree*

> Solved in **48_Doubt_Clearning_Session**.
> Solved in **49_AVL_Tree** for **Q5**.

> Solutions below

### Solutions

![AVL_1](https://user-images.githubusercontent.com/54589605/216122733-f5acf2a3-f67c-41e6-9959-4a31b486b32a.jpeg)
![AVL_2](https://user-images.githubusercontent.com/54589605/216122739-b7c3d037-c788-4a4e-8f88-88f39bd23ac3.jpeg)
![AVL_3](https://user-images.githubusercontent.com/54589605/216122744-2f368151-2f74-4cd7-9f15-81b165c2e243.jpeg)
![AVL_4](https://user-images.githubusercontent.com/54589605/216122747-892e24c4-ed43-4d40-9c8c-b6fe174affe4.jpeg)
![AVL_5](https://user-images.githubusercontent.com/54589605/216122749-010ff949-5324-4799-b11a-ddd77d75fbd7.jpeg)
![AVL_6](https://user-images.githubusercontent.com/54589605/216122752-6adcb552-9d88-49d9-a516-916f04028e36.jpeg)
![AVL_7](https://user-images.githubusercontent.com/54589605/216122756-50092681-758e-496a-b1cd-d297994b09c5.jpeg)

> **Q1** from Image 1 before DPP starts is the **AVL Tree Insertion 2 question** on *47_Balanced_Binary_Search_Tree* PDF file page **19**.

### Question 

![image](https://user-images.githubusercontent.com/54589605/216126769-0ed79175-c2d0-4017-a7c5-237c7201bad1.png)

### Correct Solutions of **DPP 17**

> I converted **8** element value to **18** in the middle of solving the question and got the answer wrong.
> Solved in **48_Doubt_Clearning_Session** Page **21**.

> Got **Q4** from DPP wrong. Solved on Page **35** of **48_Doubt_Clearning_Session** PDF file.


> *Q5* hasen't been taught/discussed yet in *47_Balanced_Binary_Search_Tree*, hence not solved. Solve it when taught. Solved in **49_AVL_Tree**.

### AVL tree creation/insertion

![AVL_insertion_1](https://user-images.githubusercontent.com/54589605/216840906-326a40a4-a7fd-4cec-b50f-f5ea61640ae3.jpeg)
![AVL_insertion_2](https://user-images.githubusercontent.com/54589605/216840909-d26146bf-29af-4c36-9ada-52cb9994a856.jpeg)
![AVL_insertion_3](https://user-images.githubusercontent.com/54589605/216840910-4cfff81b-3f51-4384-b4dd-257710c887f8.jpeg)
![AVL_insertion_4](https://user-images.githubusercontent.com/54589605/216840911-8845984c-050e-4fac-a79f-6d40555f17b2.jpeg)


## *48_Doubt_Clearning_Session* (48) [2nd Feb 2023]

## AVL Tree Deletion (49) [5th Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/216836142-c08df6cc-e7a0-4bb3-8f15-efa615d4c0bb.png)

* Delete node based on **BST deletion** i.e **Case 0,1 and 2**.
* Check for imbalances in **ancestors/parents** of the deleted node.
* If imbalance(YES), then identify the **case** and perform the appropriate **rotations**.

### Deletion Process/steps

![image](https://user-images.githubusercontent.com/54589605/216836168-78a823e3-52b7-452e-a684-a6d8b61014d7.png)
![image](https://user-images.githubusercontent.com/54589605/216836186-9958e5ce-6e7e-4923-832b-3feae941216f.png)
![image](https://user-images.githubusercontent.com/54589605/216836194-e37e24bb-cc1f-4d4a-bd5d-36a195a63a77.png)

### **AVL tree deletion example**

![Delete_AVL_1](https://user-images.githubusercontent.com/54589605/216836103-caf0812d-307b-43a5-bfc8-76da3e37c856.jpeg)
![Delete_AVL_2](https://user-images.githubusercontent.com/54589605/216836106-f988724a-6bc8-4eca-ba31-89a115c57a50.jpeg)
![Delete_AVL_3](https://user-images.githubusercontent.com/54589605/216836109-a177666b-add1-4187-b4f0-28ebac297477.jpeg)
![Delete_AVL_4](https://user-images.githubusercontent.com/54589605/216836110-e461648b-c128-414e-b9cc-9d0e59c36aa9.jpeg)
![Delete_AVL_5](https://user-images.githubusercontent.com/54589605/216840619-fdedffff-3589-402d-98cf-89fdca607376.jpeg)


### **Minimum** no. of nodes

![image](https://user-images.githubusercontent.com/54589605/216836294-c249e394-0690-40c7-99a6-933a7f2613e5.png)
![image](https://user-images.githubusercontent.com/54589605/216836691-a28b44dc-7ecd-4d5a-b4ea-613ca068be20.png)
![image](https://user-images.githubusercontent.com/54589605/216836694-e2294e06-a704-4a0d-b674-cdea61fde943.png)

> For **Maximum** nodes, we have to **completely** fill all of the levels of the tree. Because **AVL** tree is a **BST** as well as a **Balanced** tree.
> For **Minimum** nodes, we can **either** fill the **left subtree** to **h-1** height and **right subtree** to **h-2** height or vice-versa. Here, **'h' is the height of the tree**. Because we can have a **balance factor** of **1**.

### Question
![image](https://user-images.githubusercontent.com/54589605/216836704-88dbdf14-b6ef-4a4e-9458-b8369d37b79d.png)



## Heap (50) [6th Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/217024185-9c1a5a78-5a22-4832-b63e-b8606603173f.png)
> **Priority based** Data Structure

## Properties of Heap

* Should be a **Complete Binary Tree**
* Max or Min Heap property.

* **Complete Binary Tree** -> A **Binary Tree** in which all levels much have maximum no. of nodes, except possibly the last level. The **last level nodes** must be arranged from **left to right**.

![image](https://user-images.githubusercontent.com/54589605/217024988-77a55c19-f140-41f9-8d3a-cd4f40e24a16.png)

* **Max Heap** -> Every node should contain **greater** element than both of it's children
![image](https://user-images.githubusercontent.com/54589605/217025304-09e2c2ac-6df6-478f-a250-e2fcdf25e09c.png)


* **Min Heap** -> Every node should contain **smllaer/lesser** element than both of it's children

> It is the complete opposite of **Max Heap**.

### Array representation on Heap

![image](https://user-images.githubusercontent.com/54589605/217025477-825d21a9-e963-420f-b7bb-1af30b1e7e22.png)
![image](https://user-images.githubusercontent.com/54589605/217025954-234ee6c3-c042-4a44-864d-84f4cabb326c.png)

> They are arranged in a sequential order from **left to right**.

> Index starts from **zero(0)**. This is the index of the **root** element.
* Left Child -> 2*i +1
* Right Child -> 2*i +2 

> Index starts from **one(1)**. This is the index of the **root** element.
* Left Child -> 2*i 
* Right Child -> 2*i +1

### Example

![image](https://user-images.githubusercontent.com/54589605/217026272-40ae1cca-f4db-4e50-83bc-cf310ec5ee0d.png)

### Identifying **Heap** or not

![image](https://user-images.githubusercontent.com/54589605/217026577-ba70100f-bd2b-483a-b196-0b327e70ef5e.png)


## Insertion in Heap(one by one)

> First add new element into the tree based on **Complete Binary Tree** and then adjust the tree to support the **Heap** properties.

![image](https://user-images.githubusercontent.com/54589605/217026811-1bba892c-4d0e-4bc3-9e72-ad12bb9e03d3.png)
![image](https://user-images.githubusercontent.com/54589605/217027171-b3d55816-b0eb-4fca-8eed-e7827963f915.png)


### Building a Heap

![image](https://user-images.githubusercontent.com/54589605/217028779-d64829a6-734e-4c38-9f9e-30070dfb0971.png)
![image](https://user-images.githubusercontent.com/54589605/217028804-dd6c7861-3447-4bdc-9a42-2cf32cabddae.png)

## Runtime complexity

* Runtime complexity for **each insertion** in Heap -> **O(log n)**
* Runtime complexity for **'n' insertion** or **one by one** insertion in Heap -> **O(nlog n)**

### Example of **one by one insertion**

![image](https://user-images.githubusercontent.com/54589605/217029182-dd0e0c33-1c37-4e3b-b1e9-b7032330cdcc.png)
![image](https://user-images.githubusercontent.com/54589605/217029228-15ef2ece-f112-46c2-9cbd-4dca21ddedf0.png)
![image](https://user-images.githubusercontent.com/54589605/217029317-39cb997f-67f6-4a8e-93a2-f873b9e1594d.png)


## Insertion in Heap(Heapify)

* Construct **Complete Binary Tree** using given keys.
* From **last to first** traverse the internal nodes and perform **heapify** on them. 

* **Heapify** -> Adjust the **internal node**, such that the subtree starting from the **internal** node as **root** becomes **max or min** heap.

![image](https://user-images.githubusercontent.com/54589605/217029428-41384e15-6f1b-4f53-82f3-496baac137c1.png)


### Example

![image](https://user-images.githubusercontent.com/54589605/217029879-6ab93b24-6df1-4080-981f-389c90299a85.png)
![image](https://user-images.githubusercontent.com/54589605/217030177-97a46cd1-cbe5-4f0e-84f5-2f4f5d234c28.png)
![image](https://user-images.githubusercontent.com/54589605/217030280-67b182c0-2556-4a91-b542-06333ec9560f.png)
![image](https://user-images.githubusercontent.com/54589605/217030611-a22399a2-933a-4891-8e39-758454246de6.png)
![image](https://user-images.githubusercontent.com/54589605/217030640-c35d677e-f1bd-4632-925d-3ae4357f5620.png)


## Runtime complexity in Heap for **one by one** and **Heapify**

* Runtime complexity for **each insertion** in Heap -> **O(log n)**
* Runtime complexity for **'n' insertion** or **one by one** insertion in Heap -> **O(nlog n)**

* Runtime complexity for **'n' insertion** using **Heapify** -> **Theta(n)** 

### Questions

![image](https://user-images.githubusercontent.com/54589605/217030760-867b9eac-f415-4571-8280-e2fde132e163.png)

> If elements are given in **ascending order** like above then **zero(0)** swaps are required to build **min-heap**.

![image](https://user-images.githubusercontent.com/54589605/217030974-b41dd9c7-67fd-44fc-a7aa-2f7867627478.png)
![image](https://user-images.githubusercontent.com/54589605/217031022-366307ce-32a9-4c4a-95b6-a43a3addee89.png)

### Examples

![Heap_1](https://user-images.githubusercontent.com/54589605/217036444-8bb7d69f-7c05-4799-ab58-fd5c0b3162a7.jpeg)
![Heap_2](https://user-images.githubusercontent.com/54589605/217036472-cbc11933-36a0-4732-b3ee-80d3db9f2e39.jpeg)
![Heap_3](https://user-images.githubusercontent.com/54589605/217036479-e0c9a972-742d-40a7-8922-792dea78f3ce.jpeg)
![Heap_4](https://user-images.githubusercontent.com/54589605/217036483-ac22b1c9-b533-438b-89ff-f9b043cb454d.jpeg)
![Heap_5](https://user-images.githubusercontent.com/54589605/217036507-09ee023a-3c70-4c57-bb38-497ebd2024d9.jpeg)
![Heap_6](https://user-images.githubusercontent.com/54589605/217036520-71d2be69-2b74-434a-a586-755b41ff651d.jpeg)
![Heap_7](https://user-images.githubusercontent.com/54589605/217036527-9015f487-7865-4120-b3a6-a2aaa2edaa07.jpeg)

> Page **7** question is solved in **51_Operations_On_AVL_tree**.

## Solution to Question in Page **7**

![image](https://user-images.githubusercontent.com/54589605/217731736-2d6f24f3-9d7a-4b3b-9c80-db524601f36f.png)
![image](https://user-images.githubusercontent.com/54589605/217731803-ba66ddb5-86ba-4be5-9ce0-16940e1a83e5.png)
![image](https://user-images.githubusercontent.com/54589605/217731824-b3aaf8d2-a17a-423a-ae0e-5ed2d19f32e8.png)
![image](https://user-images.githubusercontent.com/54589605/217731850-85a8729b-b104-4aca-9301-6e04df752a91.png)
![Heap_deletion_1](https://user-images.githubusercontent.com/54589605/217275910-53543f35-6ff9-49ed-98d8-7e94622557d7.jpeg)
![Heap_deletion_2](https://user-images.githubusercontent.com/54589605/217275922-cf462cc4-68e5-48b7-81a4-64e726aaf967.jpeg)


## Operations on AVL tree (51) [7th Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/217253435-7b66b500-03ab-4523-996b-22df617bfe00.png)
![image](https://user-images.githubusercontent.com/54589605/217253511-6b9a4d0e-3ea7-4b58-8337-6a80ca3b8858.png)
![image](https://user-images.githubusercontent.com/54589605/217253847-964ad34d-9b9d-438f-a0aa-7de654bc4d67.png)

> This part is used to find the **exchanges** for the **L-1** levels of the tree. 'L' is the levels of the tree.

> **(n-logn +1)*logn** is the part to find the exchanges in the **last level if it is not full**.
> Same formula will be used in **max heap** as well when we insert the elements in the **opposite** direction.

### Time complexities in Heap

> If asked to find the **max or the min** of a given binary heap. Then the runtime complexity will be **Theta(1)**.

![image](https://user-images.githubusercontent.com/54589605/217254915-3acf601d-a675-4475-9f09-62fd3adfb071.png)

* **Runtime complexity** to find **Max or min** in given Heap -> **Theta(1)**

![image](https://user-images.githubusercontent.com/54589605/217256605-81dcd94b-6355-4c95-a8c3-13e1d71bacdc.png)

> The **Runtime complexity** is **Theta(n)** because we do not know where the element is in the tree. But we do know that it is one of the **leaf** nodes as root node is greater than it's children in max-heap and root node is smaller than it's children in min-heap. We have to traverse through the whole tree to find them(min value in max-heap and max value in min-heap.

### Searching in Heap

> Heap is a **Complete Binary Tree** and not a **Binary Search Tree**. Hence we cannot correctly tell if the   searched element is in **left or right** subtree. Hence we have to do **Traversal/Traversing** in Heap to find the searched element.

![image](https://user-images.githubusercontent.com/54589605/217258409-176eb81c-a9c0-44f7-ba64-7a2218b47718.png)

### Runtime complexity of seaching in heap

* Runtime complexity -> **O(n)** [Through Traversal]

> We are doing **O(n)** instead of **Theta(n)** because we can find in anywhere within the tree, can be the root node or the 5 or the last node of the tree.

### Questions

**Important**

![image](https://user-images.githubusercontent.com/54589605/217260119-442b4e05-004b-44af-ad21-467f36c55448.png)

> It is **O(n)** bacause when inserting a new node in the heap, first we are searching the heap to see if the element to be inserted is already present in the heap or not. If it is present in the heap already then we will not insert the element into the heap. Here, the **Runtime complexity** will be **O(n)** which is the complexity of seaching in heap.
> If we didn't find the element to be inserted in the heap, then we will insert the element into the heap. Hence the **Runtime complexity** will be **O(n) + O(logn) -> O(n + logn) -> O(n)** which is the complexity of insertion in heap. We are inserting only **one** element hence the complexity of insertion is **O(log n)**. 
> As mentioned in the question, **insert the element only if the element is not present in the heap**. This changes the complexity all together. Now we get two situations here, **1)** when element is present in heap and **2)** when element is not present in heap. 

* When element is present in heap -> O(n) [For searching]
* when element is not present in heap -> O(n) + O(logn) -> O(n) [For seaching and insertion] 

> If the note was not given in the question then, we would have only one case which is **insert the element in the heap**. No need for searching here.

* Runtime complexity -> O(log n) [Insertion of one element]

![image](https://user-images.githubusercontent.com/54589605/217266285-48a33059-6525-4520-9334-17a305a63956.png)

## Deletion in Heap

> Priority Queue. Deletion should be done on **highest priority**. Every time the element on the **root** gets deleted when deletion happens on heap.
> In Max-heap, the **max** element gets deleted.
> In min-heap, the **min** element gets deleted.

![image](https://user-images.githubusercontent.com/54589605/217266992-d008f4d6-beed-4ed3-8d9b-31140040246d.png)
![image](https://user-images.githubusercontent.com/54589605/217267046-47bfbaea-3713-4c99-8cf5-1ae730b626f3.png)

### Example

![image](https://user-images.githubusercontent.com/54589605/217267998-97960f95-af6d-477d-a416-c0f908d467ae.png)
![image](https://user-images.githubusercontent.com/54589605/217269027-6d5ae9fd-9bb5-48e2-9e9b-2ea2fd6b40f0.png)


## Runtime complexity of **deletion** in heap

* Runtime complexity -> O(log n).

### No. of heaps with **N** keys

![image](https://user-images.githubusercontent.com/54589605/217271350-2644476c-21f0-43bf-a4f4-38fa0834938b.png)
![image](https://user-images.githubusercontent.com/54589605/217271281-8ac4e487-74d9-425d-a402-48f733a80057.png)
![image](https://user-images.githubusercontent.com/54589605/217271461-410ee373-b4d8-49c6-85bb-dab069de977f.png)
![image](https://user-images.githubusercontent.com/54589605/217271519-72a1d411-a9ad-4fe0-a6b1-766e13e37087.png)
![image](https://user-images.githubusercontent.com/54589605/217271652-f3d70dfc-8a18-4bde-957e-1fae5ea9a14f.png)
![image](https://user-images.githubusercontent.com/54589605/217271710-4883a0f7-8246-4170-8643-9560eb4c4e3b.png)

#### Formula

![image](https://user-images.githubusercontent.com/54589605/217271610-967072a0-4559-46d4-ac6b-54ec84db1875.png)


### Examples

![image](https://user-images.githubusercontent.com/54589605/217273935-57e70b0b-476c-465a-b530-f061423336cc.png)
![image](https://user-images.githubusercontent.com/54589605/217275035-8c513691-d604-43b3-b3ee-c22c02606205.png)
![image](https://user-images.githubusercontent.com/54589605/217275062-bcc9bbdf-b06f-4000-938c-5212b6f00050.png)

![Heap_deletion_1](https://user-images.githubusercontent.com/54589605/217275910-53543f35-6ff9-49ed-98d8-7e94622557d7.jpeg)
![Heap_deletion_2](https://user-images.githubusercontent.com/54589605/217275922-cf462cc4-68e5-48b7-81a4-64e726aaf967.jpeg)
![Heap_deletion_3](https://user-images.githubusercontent.com/54589605/217275927-faf93bec-8df7-4861-8de3-314870d811c7.jpeg)
![Heap_deletion_4](https://user-images.githubusercontent.com/54589605/217275932-c481e9ea-b0a3-4258-9d06-eae766991ae7.jpeg)
![Heap_deletion_5](https://user-images.githubusercontent.com/54589605/217275935-b5ebc520-99a8-4207-811b-fc0db7b46ab8.jpeg)

## Heap Time Complexities

* Deletion single element -> O(log n)
* Single(one by one) insertion -> O(log n)
* Build Heap -> O(n)

> Always remember that in **min-heap**, we will find the first **minimum** element at **first level(0th level) only**, **2nd minimum** element at **2nd level(1st level) only**. We will find **3rd minimum** element at **either 2nd level(1st level) or 3rd level(2nd level)** anywhere between them. We will find **4th minimum** element at anywhere **leaving the first level upto 4th(3rd level) level** between them.

## 52_Doubt_Solving_session(Heap PYQs) (52) [9th Feb 2023]

* Many Heap **PYQs** done.

> In Q1, the question is about **conversion** and not **insertion**.
> In Q12, **2007**, no. of comparison performed will be the **no. of element present** and it's **log n** as **height** is **log n** of the tree.

* No. of element present -> Log n
* Height of tree -> log n
* no. of comparison performed -> Theta(log log n). 

### Solutions (Heap PYQ)

![Heap_1](https://user-images.githubusercontent.com/54589605/217866159-bdc4cbe6-1055-4292-ad0d-6583eb1b6243.jpeg)
![Heap_2](https://user-images.githubusercontent.com/54589605/217866168-771098eb-45d3-4fe6-aa08-71eeaf4b2f8d.jpeg)
![Heap_3](https://user-images.githubusercontent.com/54589605/217866176-d2292b2b-269c-49e3-81a2-84aef42e5bf0.jpeg)
![Heap_4](https://user-images.githubusercontent.com/54589605/217866182-289ab0f2-036f-4f3c-8c5c-4b3cb0372869.jpeg)
![Heap_5](https://user-images.githubusercontent.com/54589605/217866187-6a04f82a-b5e8-4ae8-a8bb-a72ce8604b65.jpeg)
![Heap_6](https://user-images.githubusercontent.com/54589605/217866191-16db228a-3959-41ff-8067-52b72e6adf45.jpeg)
![Heap_7](https://user-images.githubusercontent.com/54589605/217866196-e9c711ba-6db4-49d6-937f-3b4cc3f0f102.jpeg)
![Heap_8](https://user-images.githubusercontent.com/54589605/217866202-a7e68ac8-7d39-4121-9bce-bb3e06b22331.jpeg)
![Heap_9](https://user-images.githubusercontent.com/54589605/217866205-a315e30c-4c6a-4df9-97a9-66dacbb6d2fe.jpeg)
![Heap_10](https://user-images.githubusercontent.com/54589605/217866209-c6fb3dbd-c348-44ab-8e72-e0033a583d48.jpeg)

> Rest of Heap PYQs in **53_Heap_and_Binary_Heap** PDF file.

## 53_Heap_and_Binary_Heap(Heap PYQs and BST PYQs) (53) [13th Feb 2023]

### Rest of Heap PYQs

![Heap_11](https://user-images.githubusercontent.com/54589605/218458850-8e8605c8-b689-4603-8b81-1c455475815b.jpeg)
![Heap_12](https://user-images.githubusercontent.com/54589605/218458859-8832d2f8-4379-4f8a-9f8c-93b1805da2d8.jpeg)
![Heap_13](https://user-images.githubusercontent.com/54589605/218458865-3bf053f3-5e8b-408a-99b4-99292b401e22.jpeg)
![Heap_14](https://user-images.githubusercontent.com/54589605/218458868-a2706192-7464-414b-8ebf-025efbbaa780.jpeg)
![Heap_15](https://user-images.githubusercontent.com/54589605/218458876-a79a1952-e2d6-4841-88a5-8a4dc2570943.jpeg)


### BST PYQs

![BST_1](https://user-images.githubusercontent.com/54589605/218459112-ff41ad9f-87ed-41f5-a0db-eacf9f0ca37a.jpeg)

* To solve the above question faster

![binary_search_tree_question_trick](https://user-images.githubusercontent.com/54589605/218458995-d79bdffc-9c9d-4e28-964a-050dd717828d.png)

> Just count the numbers lower than **50** which would be in the left subtree and count the numbers higher thatn **50** which would be in right subtree. Would be a lot faster than drawing the whole tree. 

![BST_2](https://user-images.githubusercontent.com/54589605/218459128-633c227e-e1de-4dbe-a67f-54e7763b486f.jpeg)
![BST_3](https://user-images.githubusercontent.com/54589605/218459134-55dc2fd9-9d42-4b3b-b04f-6734d1906389.jpeg)
![BST_4](https://user-images.githubusercontent.com/54589605/218459138-8a8b6d83-70d0-4fbf-9304-b5a7c8686f29.jpeg)
![BST_5](https://user-images.githubusercontent.com/54589605/218459142-bcfe5fde-3579-4e7b-b577-8538d460e4e9.jpeg)
![BST_6](https://user-images.githubusercontent.com/54589605/218459146-4c2f3618-1bcf-4909-9763-d1de82355cd8.jpeg)

* In **Q17** in the above image, log(no. of elements) for a **balanced binary search tree**.

![BST_7](https://user-images.githubusercontent.com/54589605/218459151-2c4517a9-5aad-4721-b816-ddbf2e5b4ba9.jpeg)


## 54_Tree_part(BST PYQs) (54) [13th Feb 2023]

## Rest of BST PYQs

### Solutions

![BST_8](https://user-images.githubusercontent.com/54589605/218531120-e24bc185-6d39-47ea-b030-4f2db6e6b4ca.jpeg)
![BST_9](https://user-images.githubusercontent.com/54589605/218531162-e8619766-c976-4baf-8b39-b47a75b065f8.jpeg)
![BST_10](https://user-images.githubusercontent.com/54589605/218531186-0b6bda7d-fd74-4e6e-8c64-52f4968fa85a.jpeg)

> In **Q28**, for **n** distinct elements. There is **only one(1)** maximum element in the BST. There are **(n-1) elements** that are smaller than the maximum element, all of the elements **except** the maximum element are smaller than it(maximum element). Hence we can pick any one of the elements out of the **(n-1) elements** and the time complexity for doing so it **Theta(1) or constant**.
> We can simply return **root** of the tree. We can check if the tree's right subtree is **empty or not**. We get two conditions which are below: 

1) If **it is empty** then the **root** element is the **maximum** element and we can simply return the **root's left-child** to get the smaller than maximum element.

2)If **it  not empty** then the **root** element is not the **maximum** element and there is some element in the right subtree which is bigger than the root element. We can just simply return the **root** to get the smaller element than the maximum element.

![BST_11](https://user-images.githubusercontent.com/54589605/218531213-9b4df6ea-091b-4990-bb51-aeb9f000353a.jpeg)

> In **Q29**, the largest element in BST is at the **right-> right most** element of the tree.

### Q30

![image](https://user-images.githubusercontent.com/54589605/218532590-510c0adb-7b0c-4194-af83-28afcf79cf52.png)

> In **Q30**, in post-order traversal we know the last element of the traversal is the **root** element. Using this root, we can determine the **left subtree** elements and **right subtree** elements. This determining of the **root** element and then finding/checking the **left subtree** elements and **right subtree** elements  took **O(1) or constant** time complexity.
> For **n** elements, the time complexity will be **Theta(n)**. We have to fit the **n** elements into the tree, **one** at a time.

> In this same question only, if only **n** elements were given but not the range **1,2,...n** of elements then we would just simply find the root and determine the **left and right** subtrees. We would need **inorder** traversal to determine that or something else. 
> The answer would be **different** as well and we would lean towards **Theta(n * log n)** as **we would require** **inorder** traversal for identifying/determing which elements would go to **left and right** subtrees.

### Q31

![image](https://user-images.githubusercontent.com/54589605/218532757-36af5201-c25b-47d4-b49b-8d288a88c967.png)
![image](https://user-images.githubusercontent.com/54589605/218532827-c328d2e6-0bc9-4fdf-ab1d-fb28853d41da.png)
![image](https://user-images.githubusercontent.com/54589605/218532860-bc131118-d5c5-44ba-a039-558119b5ba1a.png)


> In **Q31**, For a **Balanced BST**, we know it's height is **log n**. We need to do **one(1) or once**, the calculation of **g(x)**  for **each level**. As all of the **nodes** in a particular level have the **same cost of g(x)**. Hence we only need to calculate the cost of **g(x) once** for each level. The total **g(x)** calculated would be **log n**.
> The cost of everytime calculating the value of **g(x)** would be **n**.


### Q32

![image](https://user-images.githubusercontent.com/54589605/218532995-00918503-a64e-426f-b6ee-c7716ab6ce8c.png)
![image](https://user-images.githubusercontent.com/54589605/218533025-786d2bdc-ca56-4a09-b875-23f1b060e41d.png)

![binary_Search_tree_question](https://user-images.githubusercontent.com/54589605/218533086-7710fa81-0daf-4770-9200-966c10eb6012.png)

* AP series formula. 

> In **Q32**, finding the sum of elements from **v1 to v2**:
> Finding the sum of elements from **v1 to v2** will be in **constant** time as it is found out by using a **formulae**.


## Graph (55) [14th Feb 2023]

### Doubt (Doubly Linked List)

![image](https://user-images.githubusercontent.com/54589605/218647292-12841d56-6682-4e4e-b996-f57d568196cb.png)

### For **Insertion**

> As it is a sorted doubly linked list, we have to **traverse** the list in **linear search (binary search is not possible in linked list)** order to find the position where the insertion maintains the sorted sequence.
> Hence for **one(1)** insertion, the time complexity is **O(N)**.
> For **log N** insertions given in the question, the time complexity is **logN * O(N) -> O(N log N)**

### For **Deletion**

> As the pointer is provided for the element to be deleted, we know that time complexity for deletion in doubly linked list is **constant or O(1)**.
> For **N** deletions given in the question, the time complexity is **N * O(1) -> O(N)**

### For **Searching**

> We know traversing in doubly linked list happens in **linear search** order. Searching is basically traversing the list to find the **element** we are searching. 
> Hence for **One(1)** search, the time complexity is **O(N)**.
> For **log N** searches, the time complexity is **log N * O(N) -> O(N logN)**.

### For **Decrease Key**

![image](https://user-images.githubusercontent.com/54589605/218646677-e5934d96-a0d0-4283-986e-31687e3a7706.png)

> When decreasing **26** with **23**, we get **3**. After that the sequence is not in **sorted** order as **3** is the result from **26-23-> 3** and **3** is disrupting the sorted sequence. Hence, we have to sort the sequence to fit **3** in the sequence. 
> The sorting takes **O(N)** time complexity. The decreasing key operations happens in **O(1) or constant** time complexity. Hence the **time complexity** for **One(1) Decrease key** operation is **O(N) * O(1) -> O(N)**.
> For **'N' Decrease key** operations, the **time complexity** will be **N * O(N) -> O(N^2)**. 

### Solution

![image](https://user-images.githubusercontent.com/54589605/218649357-8e6596d8-3453-4584-88b8-46c9f1d343d4.png)

> The answer is **O(N^2)** as it is the **highest** time complexity out of the all. Adding all of them up also, gives us the same answer **Asymptotically**.


## Graph

![Graph_like_tree](https://user-images.githubusercontent.com/54589605/218752844-aefc9855-5f3f-4f09-ad9d-71135b8776c3.png)

> It is a non-linear data structure.
> It is like tree only but **tree is a hierarchial data structure**.
> Graph does not have a **hierarchial data structure**, the structure is not **fixed**. Any node can be connected to another node in any way.
> Graph -> Nodes(Also called as vertices), edges.

## Graph Traversal

* Breadth First Traversal -> Breadth First Search(BFS)
* Depth First Traversal -> Depth First Search(DFS)

* Breadth First Traversal -> It is a **level-order traversal** of the tree. We traverse/search just casually each and everywhere without going into **complete details/depth**. We do not check in **complete details/depth** each and everywhere and have checked at all of the locations. Then also we **haven't found the searched element**, then we come to each and every place and now search in **complete details/depth**.

* Depth First Traversal -> We go in one particular direction in **complete details/depth**. If found then well and good otherwise we come back **one step** and then starting searching in that particular direction in complete details/depth. We step back and check each and every direction in **complete details/depth** and inturn traversing/searching the whole graph. We do this untill we have **traversed/searched** the whole graph.

> If given graph is in **adjacent list** representation wheather it is in **hybrid** or in **Linked List** form, doesn't matter. If it is in **adjacent list** representation then the **sequence of edges matters during the traversal**.


> As in the above example, we can see that the **edges** for **each vertice** are given in a **particular** sequence. **We have to maintain that particular sequence** no matter what as the **edges** are stored in **Linked list** in that **sequence/order** only and they will show up or come up in that particular sequence only no matter what. 
> Hence we cannot randomly decide the sequence of some elements like before.
> Previously when **graph drawing/graphic representation** was given and an vertice(A) has **three edges** connected to **three other vertices(B,J,K)**. When  Doing **BFS** of that **graph** when we reach **Vertice(A)**, we can arrange those three vertices(B,J,K) in any other we want[(K,J,B),(B,J,K), etc]. We can arrange them in **3! -> 6** ways.
> But with the **adjacent list** representation we cannot do that. We have to follow the **given order of sequences** in the question only. We have to always **consider** the **sequence of edges**. Hence for this reason, we can have **only one** sequence of **BFS** possible now instead of **n!**, where 'n' is the **no. of edges**.


## BFS/BFT implemented using **Queue**.

![Graph_Breadth_First_Search](https://user-images.githubusercontent.com/54589605/218752897-11437a61-db82-4566-92d7-0711d35bae69.png)


### Algorithm/Working

![image](https://user-images.githubusercontent.com/54589605/218699355-07e3efee-4d7a-4b47-9c44-62b282f0cff9.png)
![image](https://user-images.githubusercontent.com/54589605/218699451-a35c08be-4305-4592-9cc4-cb48c18d5833.png)

### Examples

![Graph_1](https://user-images.githubusercontent.com/54589605/218752515-62fea469-cb03-4890-8961-102b2eaa2de3.jpeg)
![Graph_2](https://user-images.githubusercontent.com/54589605/218752523-537fc818-90fa-4c6c-8442-90501efff162.jpeg)



## Graph_II (56) [14th Feb 2023]

## DFS

![Graph_Depth_First_Search png](https://user-images.githubusercontent.com/54589605/218752935-3ec73d05-8f60-4870-9281-11371a058140.png)


![image](https://user-images.githubusercontent.com/54589605/218753342-e73f1eb9-7f8a-4ded-aaa3-a31b56e179c1.png)

> In the above example, **source is A**, A has *B,C* as friends and decides to give the **movie DVD** to B. B has *A,D,E* as friends and gives it to E out of the three. E has *C,B,D,F* as friends and decides to give it to *C*. C has *A and E* as friends but both *A and E* have seen the movie. So *C* gives back the *movie DVD* to *E* as 'C' initially got the *movie DVD* from 'E' only. E has *C,B,D,F* as friends and decides to give it to D. D has *F and E* as friends and decides to give it to F. As all of F's friends have seen the movie, he gave the *movie DVD* back to 'D' as he initially got it from. D gave it back to 'C'. C gave it back to 'E'. E gave it back to 'B'. B returns it back to it's initial source(A). 

* DFS traversal -> A,B,E,C,D,F.

> We have to find the **neighbours** of the last traversed node. If no neighbours present then find the **neighbours** of the previously traversed node.
> We can select any one of the **neighbours** of the last traversed node. We have to select anyone of them and go **complete depth/deep** with it.

![image](https://user-images.githubusercontent.com/54589605/218753401-5036f30c-1e13-4b6c-8b13-920c8efc6b31.png)



## DFS/DFT implemented using **Stack**.

![image](https://user-images.githubusercontent.com/54589605/218753127-18bf044b-7ea0-4b62-a87c-05adfb0f86b7.png)
![image](https://user-images.githubusercontent.com/54589605/218753206-5ff95b6e-defd-483c-a565-3877f35ae7f5.png)
![image](https://user-images.githubusercontent.com/54589605/218753228-a08eac25-d381-4eac-8fd7-d02ed8d3c295.png)


### Examples

![Graph_3](https://user-images.githubusercontent.com/54589605/218752612-4349c7df-3105-49a9-b8ff-73867f5376dc.jpeg)
![Graph_4](https://user-images.githubusercontent.com/54589605/218752647-43196541-7fec-4095-ba75-e811caecc778.jpeg)
![Graph_5](https://user-images.githubusercontent.com/54589605/218752658-53ae8fb7-1752-45ac-b5da-3407441f2f59.jpeg)
![Graph_6](https://user-images.githubusercontent.com/54589605/218752669-19a2b0c9-574e-4ba1-a25f-bdc93f58a5e6.jpeg)
![Graph_7](https://user-images.githubusercontent.com/54589605/218752678-449a32de-3ebf-4044-98ba-0ec03a0217b2.jpeg)
![Graph_8](https://user-images.githubusercontent.com/54589605/218752686-85f51b45-3eef-42e5-8efd-cf242865f825.jpeg)
![Graph_9](https://user-images.githubusercontent.com/54589605/218752702-edb73788-60a3-4fe1-9ebb-4d982fad56fa.jpeg)
![Graph_10](https://user-images.githubusercontent.com/54589605/218752737-26b3886c-5912-4ed9-af4c-da7f8017424b.jpeg)

## Graph Question from **56_Graph** 

![image](https://user-images.githubusercontent.com/54589605/219034438-ad04fb15-3679-4d61-bbe9-4e80a4eb906c.png)
![image](https://user-images.githubusercontent.com/54589605/219034462-a78855f4-d474-4ec2-b0a3-35f28be2b4a8.png)

> Here, it is asked for **DFS**, we have to traverse the whole **graph** using **DFS** technique and **minimize** the **maximum possible recursion depth**. The  **maximum possible recursion depth** which is possible using **DFS** has to be **minimized**.

![image](https://user-images.githubusercontent.com/54589605/219035695-abd88290-1755-421d-af68-317ef54bf189.png)


> Solved in **57_Hashing** PDF file.

### Searching Techniques **Summary**

![image](https://user-images.githubusercontent.com/54589605/219035985-dd4cfb59-356b-4158-86f9-4d7637d50792.png)


## Hashing (57) [15th Feb 2023]

> In Hashing Technique, searching is done in **O(1) or constant time** and we also find out where it is **located**.
> Whenever a **new item** is found/given then we have to immediately find a **specific location** of that new item and as soon as we find the location for the new item, we put it there.
> For **searching**, we will use the **same** above **process/technique** to find that **specific location** of that item we are **searching** and after finding that **specific location**, we will search that location for that **item**. If we find the item there **item found**, otherwise **item not found**.

* Hash Function H() is applied on a **key** and we get the **location** as the **result**.
* Location = H(key)
*  **Location** is not an **address**. This is not an address. It is just a reference of our **table**.
*  Location has a fixed range depending on the size of the Hash table.

## Hashing Techniques

* H(Key) -> Key mod m [Key % m] ['m' is an integer]
* Location range -> 0 to m-1

> All of the **different** hashing techniques are explained in **57_Hashing_Techniques** PDF file. Revise it from there.

* Best Method -> Division/Modulo Division method

### Fold Shifting

#### Method 1

> We have to make folds of **three** digits.

#### Method 2

> Reversed the **centre/central** fold.

### Fold Boundry

> Take the folds at the boundry only.


* No standards in **Fold shifting and Fold Boundary** methods. They have many variations. No standard methods.

### Question

![image](https://user-images.githubusercontent.com/54589605/219036547-2036e79c-8da9-42e0-be1a-1d331adf4067.png)
![Hashing_1](https://user-images.githubusercontent.com/54589605/219037518-d767e93b-b9a5-4f1a-8079-119e550b84cd.jpeg)


## Collision

> If for a **key**, the same hash function generates a pre-occupied location, then there is a **collision** at that **location**.

![image](https://user-images.githubusercontent.com/54589605/219037787-f1f33033-5a80-451a-aa4a-b0c76a8608c4.png)
![image](https://user-images.githubusercontent.com/54589605/219037839-a0673a7c-9a4e-49aa-8bb7-706cf768cc6e.png)


## Collision Resolution Techniques

![image](https://user-images.githubusercontent.com/54589605/219037879-7892b3d5-d12b-4833-bc85-81c75a971592.png)

> To be continued in **next class** i.e **58**.

## Collision Resolution Technique (58) [16th Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/219337212-a884daa2-cd73-44ee-97f6-dbf506b6d8ee.png)


> All of the Techniques are explained in the **58_Hashing_Part_II** PDF File. Check it out while revising.

* **Probing** -> The no. of times, we have tried to generate a **new address**.

## Clustering

![image](https://user-images.githubusercontent.com/54589605/219337861-df415d1e-efde-4d57-8dbb-0aa0d7f1e8a8.png)


## Difference between **Open Addressing** and **Closed Addressing**

> Check the PDF file.

## Perfect Hashing

![image](https://user-images.githubusercontent.com/54589605/219338293-16306888-7099-4706-9c5d-6ec0f5c56a06.png)

## Minimal Perfect Hashing

![image](https://user-images.githubusercontent.com/54589605/219338434-0b69989e-e2e4-4b5c-8d24-45c597267d6d.png)

## Universal Hashing/Universal Hash Function

![image](https://user-images.githubusercontent.com/54589605/219338596-a8ab6204-5efe-4c80-8039-ca05db70a508.png)

## Load Factor Formula **Important**

![image](https://user-images.githubusercontent.com/54589605/219338978-b1769c46-d021-4b01-808f-0115aa4f6e9d.png)

## Space Utilization Formula **Important**

![image](https://user-images.githubusercontent.com/54589605/219339231-34465015-009e-4d3c-bb75-38edcf4a5d05.png)


* For **Open Address or Closed Hashing** -> **Load Factor** and **Space Utilization** will always be **same/equal**.
* Space Utilization value for **any adressing be it channing or something else** will be between **0 and 1**, including both **0 and 1**. '0' if no **keys** are available. '1' when almost all of the **slots** are occupied. If each slot has **1,5,10 or 100** keys, doesn't matter. Maximum space utilization can be **1** only and not more than that.


### Question

![image](https://user-images.githubusercontent.com/54589605/219339339-3c462cef-a55c-4116-be54-081f37edf98f.png)
![Hashing_2](https://user-images.githubusercontent.com/54589605/219345643-526ad635-063c-40a5-adc5-261466055e51.jpeg)
![Hashing_3](https://user-images.githubusercontent.com/54589605/219345677-bf19a956-e15d-4561-9185-8ac5fe80d7e0.jpeg)
![Hashing_4](https://user-images.githubusercontent.com/54589605/219345692-8b15b470-1bd9-4b18-bfb2-2f9abb7db0f5.jpeg)
![Hashing_5](https://user-images.githubusercontent.com/54589605/219345696-183cca05-7d11-4bf1-9bbd-4747aced31b3.jpeg)


## Hashing PYQs (59) [17th Feb 2023]

> In **Q1** from 1989, **linear probing** works **circularly or does a circular check**. For **maximum comparisons**, we will start from **8** and check **circularly** till we find an **empty space**. **8,9,0 and 1** are all full and **2** is empty hence the **maximum comparisons** will be **5**, **4** collisions and **1** empty space. From **0 to 2 [0,1,2]**, the comparison are **3**, **2** collisions and **1** empty space. 

* **8,9,0, 1 and 2** are the comparsions which total to **5**.

> For any **probing** if adding **1** is taking it out of range of the table then we are using **mod or %** to move it into the **range circularly**.  

* For **maximum comparison** we need the **maximum consecutive collisions** from occupied places(0,1,3,4,6,8,9).

![image](https://user-images.githubusercontent.com/54589605/219665483-d2e0965c-db9f-4d33-b49c-a035cd001dd4.png)
![image](https://user-images.githubusercontent.com/54589605/219665901-83e05749-a5fd-4b64-a4dc-ee65ccbf7fa3.png)

> The **minimum** will always/anyway be **1** as we have to do **atleast one(1)** comparison to **seach** an item. 

![image](https://user-images.githubusercontent.com/54589605/219666311-69cc2942-cd09-4227-bda9-8b50a6156d1b.png)

> As the elements are stored in **Linked List**. Easier to **delete**.


* ord -> Order.
* Capitalization doesn't matter, 'a' and 'A' are the same.

![image](https://user-images.githubusercontent.com/54589605/219666647-d5e49744-9d15-4117-b90c-2773a68ae624.png)
![image](https://user-images.githubusercontent.com/54589605/219667086-b61e5762-c0e6-4c33-8750-79ce03a7ce3d.png)

* If no **collision resolution technique** is not defined, then by default **linear probing** is used.

![image](https://user-images.githubusercontent.com/54589605/219667274-06539f97-c9dc-4af2-aa1d-6cb4d7eb3fa1.png)

> If option IV was, **Each element is stored to a different space**. Then this **statement** would have been **correct**. In **collision**, we would use **probing** techniques to generate **new locations** and store them there. 
> These statement cannot be possible for **channing** as **same hashed** elements are stored at the **same place** only using **Linked List**. 


![image](https://user-images.githubusercontent.com/54589605/219669055-79eda6f3-6db9-4abb-ad47-22871f82ee4b.png)
![image](https://user-images.githubusercontent.com/54589605/219669851-6bcf8ed2-7141-47e9-80a4-2b62c65c3c56.png)
![image](https://user-images.githubusercontent.com/54589605/219670593-e30eccdb-3bd1-4ef9-b5ac-eb71f21da135.png)
![image](https://user-images.githubusercontent.com/54589605/219671167-a9830617-532f-4a1d-9f1b-f347588ab939.png)
![image](https://user-images.githubusercontent.com/54589605/219671645-4807d70f-2bd7-4174-8cad-aefa8ae13099.png)
![image](https://user-images.githubusercontent.com/54589605/219672322-5877c565-2e3a-4ec6-8f76-9c40fc36b6fa.png)


![image](https://user-images.githubusercontent.com/54589605/219675082-8df770d0-5d16-4184-9b9a-ec148d6c77a0.png)
![image](https://user-images.githubusercontent.com/54589605/219674997-53e026c4-64dd-4532-b87d-faad855e96e1.png)


![image](https://user-images.githubusercontent.com/54589605/219676611-c6c80144-cfa9-4691-a6f3-add7b3c08569.png)

* Average chain length= Load Factor = Total no. of keys/ Total no. of slots.

> Average chain length is equal to **load factor** here.

![image](https://user-images.githubusercontent.com/54589605/219677028-7e5b7697-9506-4139-9289-f4e51467653d.png)

> Average will not be **1**, it is according to **load factor**.


![image](https://user-images.githubusercontent.com/54589605/219677752-730c84ce-26d0-40c5-9e15-43308b376f52.png)
![image](https://user-images.githubusercontent.com/54589605/219677790-d537bdd9-0c2f-4ed7-b28f-78bfd1d2558d.png)
![image](https://user-images.githubusercontent.com/54589605/219677821-3144dbc1-f0d5-46e5-9011-7551593b3230.png)

> Because of **chaining**, we can generate any of the **97** slots for all **3** of the insertions, that's why the probabilities will be **97/100**.

![image](https://user-images.githubusercontent.com/54589605/219677906-f36705da-2ad3-4efb-82bc-7e788551d319.png)

> For **linear probing** we will have to go into **details** for **conditional probability**.


![image](https://user-images.githubusercontent.com/54589605/219678534-b94b5272-5b26-40c4-9856-c55f1a7ec924.png)

### Questions

![Hashing_1](https://user-images.githubusercontent.com/54589605/219847829-e0197717-2412-432d-9bd8-4355e456d99f.jpeg)
![Hashing_2](https://user-images.githubusercontent.com/54589605/219847833-d450126a-92a3-48bd-8368-7e7f763a45d8.jpeg)
![Hashing_3](https://user-images.githubusercontent.com/54589605/219847841-d30eab2a-30a2-4e24-b303-a4f0ec8e6fdf.jpeg)
![Hashing_4](https://user-images.githubusercontent.com/54589605/219847852-691ba01d-e939-4cf4-a66b-b1766ef708d8.jpeg)
![Hashing_5](https://user-images.githubusercontent.com/54589605/219847855-a29612cf-f6df-4bfa-b494-ff53d3f895f5.jpeg)
![Hashing_6](https://user-images.githubusercontent.com/54589605/219847862-8d7c2e99-f6c9-4600-a060-ea0180c420fc.jpeg)
![Hashing_7](https://user-images.githubusercontent.com/54589605/219847866-2769ff3d-368a-426c-8d3b-b7f9e5b3d5c1.jpeg)


## Hashing and Tree PYQs (60) [18th Feb 2023]

### Rest of Hashing PYQs

![Hashing_8](https://user-images.githubusercontent.com/54589605/219855523-6d784843-be57-4825-a74c-7ede31cc869a.jpeg)
![Hashing_9](https://user-images.githubusercontent.com/54589605/219855484-133a489d-ac7b-40cc-b5ab-3ed8e3852485.jpeg)
![Hashing_10](https://user-images.githubusercontent.com/54589605/219855492-215c37ac-cd6f-4d64-8872-17b9b52657bb.jpeg)



### Tree PYQs

![Tree_1](https://user-images.githubusercontent.com/54589605/219855536-a6a3f641-e50f-44dd-9a03-76fee43e63e9.jpeg)
![Tree_2](https://user-images.githubusercontent.com/54589605/219855537-6e8fc32c-1a40-4772-a50e-587ecee84b30.jpeg)




## Mega Quiz

> After complete revision attempt this.

* Link -> https://unacademy.com/quiz/mega-quiz/5XX9411NS0
* Link -> https://unacademy.com/course/complete-course-of-data-structure-gate-23/QD5N5156

* Mega Quiz Solutions -> https://unacademy.com/quiz/mega-quiz/5XX9411NS0/solutions/SP_7V8MVOIBL8SSNHVPM

## Quiz 1

* 1 -> https://unacademy.com/quiz/quiz-i/RIE675803I/solutions/SP_6XAVWIMPT6Y2IRJJA

### Solutions

* Q1 -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/4949C5D49D

![image](https://user-images.githubusercontent.com/54589605/221605061-598cbeee-c87a-4205-8e7c-0a4bd7ad06bd.png)

> For **2** numbers, the comparisons needed to find **min and max** is **3 comparison**.

* For 2 numbers -> 3 comparisons
* For 1 number -> 3/2 comparisons
* For n number -> ((3n)/2 -2) comparisons ['-2' since we don't have to update the **min and max** value every time]

![image](https://user-images.githubusercontent.com/54589605/221605718-819b27d9-7a1f-461e-8461-0c4785f20acb.png)
![image](https://user-images.githubusercontent.com/54589605/221605828-f0614775-8858-476c-811e-b1830bd81683.png)
![image](https://user-images.githubusercontent.com/54589605/221606632-9a35a3dc-9ccd-41a2-ae77-6618d912534c.png)
 
* For 500 comparisons -> 3n/2 -2 [n=500]
* (3 * 500)/2-2 -> (3 * 250) - 2 -> 750 - 2 -> 748 [Ans]


## Quiz 2

* Link -> https://unacademy.com/quiz/quiz-ii/ULGCT6UVU5/solutions/SP_9DP2XJD9XPUM38LUB

### Solution

* 2 -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/6C6C8611CB

![image](https://user-images.githubusercontent.com/54589605/221614421-f5d9ba57-76e3-419a-bb4d-bd14128b1f44.png)
![image](https://user-images.githubusercontent.com/54589605/221614383-8daef28c-50ce-45ac-9298-515fcd56dc69.png)

 ## Quiz 3
 
 * Link -> https://unacademy.com/quiz/quiz-iii/5C2VOPBX3P/solutions/SP_QY18XR362FBGM7H6O


## Quiz 4

* Link -> https://unacademy.com/quiz/quiz-iv/8PD0KGWQGS/solutions/SP_PAQRC3C10MHF5MKG3



## Questions to ask(sir) in next class.

* Insertion will be O(log n) or theta(log n) [Ask] [Answered]
* Didn't complete all of the DPPs from DPP 13 Q4, only did Part 5 of Q4.
* Explain Inorder predecessor or successor [Got it]

# Practice Questions

## Array

![image](https://user-images.githubusercontent.com/54589605/222149039-fe450d73-64de-43da-b3e6-79a962dcfc11.png)

![image](https://user-images.githubusercontent.com/54589605/222149597-efa3c7b7-969a-4e3b-a63d-f5bf625c3c00.png)
![image](https://user-images.githubusercontent.com/54589605/222149629-711b394b-7df8-4db5-85c3-a20fd0647630.png)

![image](https://user-images.githubusercontent.com/54589605/222150293-0e1c2084-20f8-4972-ae5d-c43a43d41adc.png)
![image](https://user-images.githubusercontent.com/54589605/222150326-d0a58b97-acf2-4b46-8c4e-eda986ee1f12.png)

![image](https://user-images.githubusercontent.com/54589605/222151026-4d335d43-085e-4e6f-992c-6628f3ef2ae4.png)
![image](https://user-images.githubusercontent.com/54589605/222151069-edb7b00b-9939-4314-b2f2-066121f7b2e9.png)

![image](https://user-images.githubusercontent.com/54589605/222151547-3cb50f6f-859d-4917-8174-26ee9e51e88e.png)
![image](https://user-images.githubusercontent.com/54589605/222151588-fdf69c98-4bc8-429e-84c3-76c873e30030.png)

![image](https://user-images.githubusercontent.com/54589605/222151878-00ca5641-ff19-404a-b045-88d1a1022aee.png)
![image](https://user-images.githubusercontent.com/54589605/222151908-f311a603-a616-455f-8325-90892fd1d862.png)

![image](https://user-images.githubusercontent.com/54589605/222152548-c7e0095f-e38e-4a0d-8964-3f12effdf2f3.png)
![image](https://user-images.githubusercontent.com/54589605/222152583-c640d107-04a5-4cab-908d-a931e12dbb6c.png)

![image](https://user-images.githubusercontent.com/54589605/222152950-0ca8b054-b8d7-413d-b53b-4ef23250a492.png)
![image](https://user-images.githubusercontent.com/54589605/222152981-207e5e24-bd5d-442a-8be9-1595b812796f.png)
![image](https://user-images.githubusercontent.com/54589605/222153274-bfe6567e-1e2d-4c5e-ae6f-c5ed2ef67338.png)

![image](https://user-images.githubusercontent.com/54589605/222155699-473ec9c4-118f-40fd-9399-6e5be7e8ddf9.png)
![image](https://user-images.githubusercontent.com/54589605/222155740-f905240f-9428-490a-8cde-d4f94fad84de.png)
![image](https://user-images.githubusercontent.com/54589605/222156725-cbb36ea5-add2-450a-b244-644cfcd4ddfe.png)
![image](https://user-images.githubusercontent.com/54589605/222156751-e5911314-0fe6-43ef-b7fe-dd690fdacb83.png)
![image](https://user-images.githubusercontent.com/54589605/222156910-fd3fc3a1-337b-404b-8b60-78ade5423362.png)
![image](https://user-images.githubusercontent.com/54589605/222156941-0f398218-8db9-473c-b68b-3696ebccf013.png)
![image](https://user-images.githubusercontent.com/54589605/222157255-ff209310-52d3-41f2-ace4-e28efdd23d3a.png)
![image](https://user-images.githubusercontent.com/54589605/222157287-81e10bdd-85f6-4fbf-95de-15643699b322.png)

* Trick question, base address was there to trick me to find the address of **A**.

![image](https://user-images.githubusercontent.com/54589605/222159367-84edd9b6-900c-4e6e-a486-7b6dae2fbfd4.png)
![image](https://user-images.githubusercontent.com/54589605/222159478-bc0a26e5-6d36-4bae-b9a8-1533c5632e96.png)
![image](https://user-images.githubusercontent.com/54589605/222159554-08a2bb70-3c73-425a-9581-a8f660b47065.png)
![image](https://user-images.githubusercontent.com/54589605/222160395-9c82bcd9-2fd1-495b-80c9-623f3070f158.png)
![image](https://user-images.githubusercontent.com/54589605/222160505-95cc3491-7ade-4890-a300-4ae76d415854.png)
![image](https://user-images.githubusercontent.com/54589605/222164085-55327757-f973-4372-884d-4100ac91ad14.png)
![image](https://user-images.githubusercontent.com/54589605/222164103-a071d8a1-67bf-400b-bded-d3099cf15de8.png)
![image](https://user-images.githubusercontent.com/54589605/222197901-5e820639-f0fa-4409-87c3-c7519bd0df29.png)
![image](https://user-images.githubusercontent.com/54589605/222197935-34df1e3e-1069-485f-b2d6-f55f0ab712e7.png)
![image](https://user-images.githubusercontent.com/54589605/222198311-843ed6e3-fe25-4ba9-89ed-d981be1009c5.png)
![image](https://user-images.githubusercontent.com/54589605/222198345-ff994db5-69af-4039-80b4-cef97bdf2d3d.png)
![image](https://user-images.githubusercontent.com/54589605/222200344-dac430ef-b430-4264-b7aa-5398e0955fac.png)
![image](https://user-images.githubusercontent.com/54589605/222200368-5cb1cea3-a825-4ff1-b82c-c2a831b4a73d.png)
![image](https://user-images.githubusercontent.com/54589605/222201174-2716bfa1-2d0d-44f3-ba8b-a0f2a6edd91d.png)
![image](https://user-images.githubusercontent.com/54589605/222201218-b3910365-4ad2-4b4d-905a-12b765b77152.png)
![image](https://user-images.githubusercontent.com/54589605/222204255-87ecf6f5-3890-4605-ac39-7e7c4fa807d9.png)
![image](https://user-images.githubusercontent.com/54589605/222204285-c5124a9b-49a1-47c0-b2a1-271c9e8c7e8c.png)
![image](https://user-images.githubusercontent.com/54589605/222204675-c6d30725-4d68-45e7-a731-3a3e50f1a32e.png)
![image](https://user-images.githubusercontent.com/54589605/222204711-fe6058a6-68d4-4cd7-8b43-0c93734e01fc.png)
![image](https://user-images.githubusercontent.com/54589605/222205670-9ef7aadb-e0a5-4954-be02-d2b5f8e343ce.png)
![image](https://user-images.githubusercontent.com/54589605/222205709-a9870abd-1532-4515-a92f-3da6f13ea1d7.png)
![image](https://user-images.githubusercontent.com/54589605/222207094-216c4062-16bc-4a80-a2a4-e05a140d6ddb.png)
![image](https://user-images.githubusercontent.com/54589605/222207135-06fe9fac-52e7-40fb-887c-8b24e41bdb6f.png)
![image](https://user-images.githubusercontent.com/54589605/222207825-efe330a0-43dc-463e-bd71-92b60ed2834f.png)
![image](https://user-images.githubusercontent.com/54589605/222207881-3d80efb4-3b96-46d7-8b91-5db66adb28a1.png)
![image](https://user-images.githubusercontent.com/54589605/222208702-c84bfec0-9487-4669-bea8-f77b65f1ef81.png)
![image](https://user-images.githubusercontent.com/54589605/222208742-68657782-e2e4-410a-8cdf-66a949750bf5.png)
![image](https://user-images.githubusercontent.com/54589605/222208776-cec71467-ce85-4388-9853-29f1899f349c.png)
![image](https://user-images.githubusercontent.com/54589605/222209163-aee3bdfe-0fbc-4673-8bc2-911f7e982329.png)
![image](https://user-images.githubusercontent.com/54589605/222209208-3f252f68-1ae5-4674-8905-536e6680957b.png)
![image](https://user-images.githubusercontent.com/54589605/222209998-688d39fe-7069-43f0-aee6-9bb39279ed7c.png)
![image](https://user-images.githubusercontent.com/54589605/222210039-2709ec0f-170e-4d35-99ef-043fee8acebf.png)
![image](https://user-images.githubusercontent.com/54589605/222210183-51cb37b2-5b58-4d21-8273-4414eb6dd196.png)
![image](https://user-images.githubusercontent.com/54589605/222215971-0fccce90-fae1-45e0-abf7-97dea030e385.png)
![image](https://user-images.githubusercontent.com/54589605/222216247-eae1087d-8730-47de-b375-5c5f8c5c0d1b.png)
![image](https://user-images.githubusercontent.com/54589605/222216303-8a54059e-076d-4522-acb5-c037fc534f49.png)
![image](https://user-images.githubusercontent.com/54589605/222217684-e83ed9b4-efd8-4bdd-a65f-8721e4905286.png)
![image](https://user-images.githubusercontent.com/54589605/222217710-fb1018dd-90d2-4881-9dae-f889ccf68c69.png)
![image](https://user-images.githubusercontent.com/54589605/222217935-cd56ac1d-d3ee-4ef4-863d-a46c54abf36b.png)
![image](https://user-images.githubusercontent.com/54589605/222217988-18fc2887-051d-4bd2-8c2b-51d02b9a9248.png)
![image](https://user-images.githubusercontent.com/54589605/222218666-6675694d-573b-4230-ace5-5d1196a81996.png)
![image](https://user-images.githubusercontent.com/54589605/222218706-d4ad6885-1845-49c8-9c9b-e24c2a6bd60b.png)
![image](https://user-images.githubusercontent.com/54589605/222218914-943be800-3bba-469e-b12f-660e3b0fdd90.png)
![image](https://user-images.githubusercontent.com/54589605/222220046-3bbba4f3-5547-4205-af59-6b611349a23f.png)
![image](https://user-images.githubusercontent.com/54589605/222220158-938f8586-8405-4d72-836b-d4065bff560c.png)
![image](https://user-images.githubusercontent.com/54589605/222220181-9959be83-36de-4900-bf2f-559f2d86b8ed.png)
![image](https://user-images.githubusercontent.com/54589605/222220452-3abfcc9f-1283-44fe-99f5-a9c26a1adafd.png)
![image](https://user-images.githubusercontent.com/54589605/222220476-c960476b-26b2-4b2c-b360-e89295e6136c.png)
![image](https://user-images.githubusercontent.com/54589605/222221128-fa8ecd8b-ce49-4cdf-b894-36a9a499e5e5.png)
![image](https://user-images.githubusercontent.com/54589605/222221161-a7f69f80-9942-4d85-94b3-7faf186899cb.png)
![image](https://user-images.githubusercontent.com/54589605/222221387-d01c6524-48c2-4d46-a3ed-f0aadd89d411.png)
![image](https://user-images.githubusercontent.com/54589605/222222627-519a5184-1ae6-4b59-b2dc-af2c8f735852.png)
![image](https://user-images.githubusercontent.com/54589605/222222870-06131f27-2a81-4b82-bc56-bef53ecbee0c.png)
![image](https://user-images.githubusercontent.com/54589605/222222960-38e221e6-1e57-4fba-bb7a-a46c14f32179.png)
![1_Array](https://user-images.githubusercontent.com/54589605/222384791-6d442363-45db-4e67-8cb3-2b546adc134e.jpeg)
![2_Array](https://user-images.githubusercontent.com/54589605/222384802-d700c0d4-3856-47e9-99f6-0ed5f11a7afc.jpeg)
![3_Array](https://user-images.githubusercontent.com/54589605/222384810-97c2b0be-dcde-41ca-94be-a3508a7d35e6.jpeg)
![4_Array](https://user-images.githubusercontent.com/54589605/222384812-ea851e09-0a6a-45a8-b5e8-836d1a062bda.jpeg)
![5_Array](https://user-images.githubusercontent.com/54589605/222384815-c29a063c-aeb0-418c-8e19-2d89aff2296b.jpeg)
![6_Array](https://user-images.githubusercontent.com/54589605/222384817-fe58ec9b-58d6-42af-a4b9-aebe533090b7.jpeg)
![7_Array](https://user-images.githubusercontent.com/54589605/222384862-293f1955-adb6-4318-8c13-8a5542d0726a.jpeg)
![8_Array](https://user-images.githubusercontent.com/54589605/222384870-22be4e3d-58d0-4379-8d72-7b9229d64d22.jpeg)
![9_Array](https://user-images.githubusercontent.com/54589605/222384876-f89286f8-b513-4396-8bd8-9ea50805a7dd.jpeg)

## Stack

![image](https://user-images.githubusercontent.com/54589605/222344954-3fec0a91-0226-49d6-81a7-bdc8727ed681.png)
![image](https://user-images.githubusercontent.com/54589605/222344992-10cdfe3f-03cd-4cbd-8608-d7bcc538208f.png)
![image](https://user-images.githubusercontent.com/54589605/222351364-ad7d0fc8-fcd4-4475-80d9-a22ec9ecff04.png)
![image](https://user-images.githubusercontent.com/54589605/222351389-eab75e0d-ce02-48d9-a0d2-12d2fdb5fe67.png)
![image](https://user-images.githubusercontent.com/54589605/222352080-6b874fb3-2a89-46f0-974b-21a87201af18.png)
![image](https://user-images.githubusercontent.com/54589605/222352104-b487cce4-8de8-4b91-b245-f10b9794295a.png)
![image](https://user-images.githubusercontent.com/54589605/222352398-69ddd150-1d89-40ae-a0b6-9842b07e6688.png)
![image](https://user-images.githubusercontent.com/54589605/222353144-755a2f9a-208b-4cef-8cdd-d6623b5902a8.png)
![image](https://user-images.githubusercontent.com/54589605/222353659-95ef34b1-2a47-4092-bc45-f49ef2982aff.png)
![image](https://user-images.githubusercontent.com/54589605/222353685-90273cd5-401c-480d-9c4e-acf82aaeb864.png)
![image](https://user-images.githubusercontent.com/54589605/222353785-a6d421f7-6e19-43de-a36f-d5f1e45693e3.png)
![image](https://user-images.githubusercontent.com/54589605/222353889-0b23b3cc-d231-4c73-b75b-89a6d9b721b8.png)
![image](https://user-images.githubusercontent.com/54589605/222354100-a52a8fc2-c7ae-4396-a825-25222ab50699.png)
![image](https://user-images.githubusercontent.com/54589605/222354278-6a15d558-ba68-44f5-a7c8-6ebc01ab3f50.png)
![image](https://user-images.githubusercontent.com/54589605/222354740-ca884da0-f183-4773-a950-77717293cb1d.png)
![image](https://user-images.githubusercontent.com/54589605/222357283-54ccf1ef-ff80-4cd8-b71a-b16624836de5.png)
![image](https://user-images.githubusercontent.com/54589605/222357547-337c4f00-fe52-4cb2-b21f-2bc02d98785d.png)
![image](https://user-images.githubusercontent.com/54589605/222357582-c6f86c28-e302-4827-b5d0-0ad2df3b935f.png)
![image](https://user-images.githubusercontent.com/54589605/222358068-f15c6ed1-dc7f-474b-93d1-1275e3a43894.png)
![image](https://user-images.githubusercontent.com/54589605/222358283-6fbcc00a-8681-4ca8-9bf8-a3bfcece833a.png)
![image](https://user-images.githubusercontent.com/54589605/222358318-f372ad5a-222e-4bec-b791-6d28f8e63cac.png)
![image](https://user-images.githubusercontent.com/54589605/222358629-88bae165-1f21-4bf1-bc17-4c64057d8fdd.png)
![image](https://user-images.githubusercontent.com/54589605/222358649-ebd9230c-6810-46fd-97c8-628581aa28e2.png)
![image](https://user-images.githubusercontent.com/54589605/222358844-eb254293-aca7-4e0e-b95c-e9f4f10b6490.png)
![image](https://user-images.githubusercontent.com/54589605/222358864-af74fd14-8205-4ff8-96f9-163ef59a6a2d.png)
![image](https://user-images.githubusercontent.com/54589605/222366007-94002329-929b-4233-81ed-389ae0e33bb4.png)
![image](https://user-images.githubusercontent.com/54589605/222366043-8853e008-7590-4feb-8b20-ae6e44833e9d.png)
![image](https://user-images.githubusercontent.com/54589605/222366211-5fadc11d-c4ed-4660-89ab-312cfd2af3fa.png)
![image](https://user-images.githubusercontent.com/54589605/222366706-106dcc14-9eb0-46e6-af61-273e1a6dcba0.png)
![image](https://user-images.githubusercontent.com/54589605/222366736-81a0f9dd-8395-4cb5-969c-a0f0b02b6f31.png)
![image](https://user-images.githubusercontent.com/54589605/222367411-2e2dc1e0-f70c-43cd-b723-dacfe0b7ef99.png)
![image](https://user-images.githubusercontent.com/54589605/222369127-b898e684-30e3-4e32-ac66-84fe49aede79.png)
![image](https://user-images.githubusercontent.com/54589605/222369167-31a77fa3-8574-47ed-8723-c47380671a94.png)
![image](https://user-images.githubusercontent.com/54589605/222369590-c4741315-45de-4a51-9ab1-b4303f98c29d.png)
![image](https://user-images.githubusercontent.com/54589605/222371106-32f73b79-5732-4235-8083-02f0253618b5.png)
![image](https://user-images.githubusercontent.com/54589605/222371160-8c5d7322-866a-4250-a4af-6f322ba6312b.png)
![image](https://user-images.githubusercontent.com/54589605/222371279-a77f519e-fe21-4dc2-a95e-3f5159c9bc60.png)
![image](https://user-images.githubusercontent.com/54589605/222371605-8e59ec4b-4410-4fe4-b438-53aadeaf1bb8.png)
![image](https://user-images.githubusercontent.com/54589605/222371637-fd7e8bfa-aa7f-4946-8800-00ac65ad16c3.png)
![image](https://user-images.githubusercontent.com/54589605/222372148-e2b59e19-05f4-4207-b523-73468c96112d.png)
![image](https://user-images.githubusercontent.com/54589605/222372178-ba174cfa-2907-4080-8ca7-ce60021c7edd.png)
![image](https://user-images.githubusercontent.com/54589605/222373865-75606e20-c601-4fe4-b62f-9c51ea36c605.png)
![image](https://user-images.githubusercontent.com/54589605/222373908-15f03686-ac96-4e48-a2a8-6cdd2139e973.png)
![image](https://user-images.githubusercontent.com/54589605/222374125-01f35dbe-1271-4991-8d67-7c39276a72cb.png)
![image](https://user-images.githubusercontent.com/54589605/222374154-f9a5c0f4-e726-49c7-bde1-03e207f3e5bb.png)
![image](https://user-images.githubusercontent.com/54589605/222374229-24bf5e97-f401-42a2-a314-1b50aa8b1e46.png)
![image](https://user-images.githubusercontent.com/54589605/222378460-aad86f9b-43ac-495f-ab4a-0045f71b5994.png)
![image](https://user-images.githubusercontent.com/54589605/222378793-57db06cf-004f-4d89-b44f-bcf606fc902f.png)
![image](https://user-images.githubusercontent.com/54589605/222379106-1b773728-50a7-4948-baa1-e762ec1c34e7.png)
![image](https://user-images.githubusercontent.com/54589605/222379230-eb52fa89-4d6d-4831-b9ae-2f328ecfcf27.png)
![image](https://user-images.githubusercontent.com/54589605/222379258-6a6af19b-3796-408f-a569-1f477ee1f4df.png)
![image](https://user-images.githubusercontent.com/54589605/222379667-dfe9d08f-6f21-48a2-91e7-da838d363f69.png)
![image](https://user-images.githubusercontent.com/54589605/222379707-1ac305d3-928e-4825-b07f-2614c4dc8e6c.png)
![Stack_1](https://user-images.githubusercontent.com/54589605/222384947-672c80b1-1dd5-4b5e-a388-0981567cbec3.jpeg)
![Stack_2](https://user-images.githubusercontent.com/54589605/222384954-76397186-5733-4d8d-aab2-96819a3ae2c8.jpeg)
![Stack_3](https://user-images.githubusercontent.com/54589605/222384959-36ed80a2-0bf3-48d2-849e-4ca8e89b818e.jpeg)
![Stack_4](https://user-images.githubusercontent.com/54589605/222384973-0f7e0121-b68d-44d6-a43c-e4154d36c69f.jpeg)
![Stack_5](https://user-images.githubusercontent.com/54589605/222384976-6cffee48-c913-4e07-b42e-08904de7a7e0.jpeg)
![Stack_6](https://user-images.githubusercontent.com/54589605/222384979-f56014de-72d7-488a-aef3-aa0da5d3c03c.jpeg)
![Stack_7](https://user-images.githubusercontent.com/54589605/222384985-4b47b65d-4880-466d-8ca6-8e3c2d76f8e0.jpeg)


## Doubt Question

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/0BEC63A632

![image](https://user-images.githubusercontent.com/54589605/222900955-41016b92-76b0-450b-9e1c-58ce8fd880f1.png)
![image](https://user-images.githubusercontent.com/54589605/222901002-d6f70ec7-853e-46e6-bf9e-9987e151a74e.png)

* It is not **1 and 4** separate it is **14**. I was solving it separately.

## Rapid Fire Practice Questions [**IMPORTANT**]

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/classes/trending

![image](https://user-images.githubusercontent.com/54589605/232479105-e4d5bbea-6d46-4116-807e-9cb7f65da226.png)

> Go to VD sir profile and search then in **free classes**.

* Part-1 -> https://unacademy.com/class/rapid-fire-questions-on-data-structure-tree-part-i/90AXK01E

> Solve when when doing **revision**.





















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

x=12
y=96

a=20

a=1 1
b=511 255
z=1 1

256 511/2 =255

n=5
j=1 2 4 6
count=0 1 2 3 2 1 0
i=5 2 1 0

count= 0 (Ans)

n= 64
i=1 2 4 8 16 32 64
j=1 1 1 1 1  1
count=0 1 2 3 4 5 6 5

64 1 5

n=6
i=1 2 4 8
j=1 1 1
count=0 1 2 3 2

8,1,2

i=1 2 4 8 16 32 64 128 256 512 1024
count=0 1 2 3 4 5 6 7 8 9 10

x=18 12 6
y=24 6

6(Ans)

10, 20 -> 10  [HCF]
1,2

a=20 21 22 23

23(Ans)

x=3

Head(3) -> Head(2)[2] -> Head(1)[1] -> Head(0)[0]
Head(2) -> 1                             -> Head(0)[0]
1213121

X(5) -> X(4) + X(2) + 1= 5+1+1= 7
X(4) -> X(3) + X(1) + 1= 3+1+1= 5
X(3) -> X(2) + X(0) + 1 = 1+1+1= 3
X(2) -> 1
X(1) -> 1
X(0) -> 1 

fun(4)[4] -> fun(3)[3] -> fun(2)[2] -> fun(1)[1] -> fun(0)[]

1234

fun(95) 

fun(95) -> fun(fun(106)) -> fun(96) -> fun(fun(107)) -> fun(97) -> fun(fun(108)) -> fun(98) -> fun(fun(109)) -> fun(99) -> fun(fun(110)) -> fun(100) -> fun(fun(111)) -> fun(101) -> *91*(Ans)

fun(5)

fun(5) -> (fun(4) + fun(2) + 1) -> fun(4) -> (fun(3)+ fun(1)+ 1) -> fun(3) -> (fun(2) + fun(0) + 1) -> fun(2)[1] -> fun(1)[1] -> fun(0)[1]

fun(3) -> fun(2) +fun(0)+1 = 1+1+1 =3
fun(4) -> fun(3)+ fun(1)+ 1 = 3+1+1 =5
fun(5) -> fun(4) + fun(2) + 1 = 5+1+1 =*7*(Ans)

fun(fun(5))

fun(6) -> fun(5) + fun(3) + 1 = 7+3+1=11
fun(7) -> fun(6) + fun(4) + 1 = 11+5+1=*17*(Ans)

f(5)

static int r=5
f(5)[18] ->f(3)+2 ->f(3)[16] -> f(2)+r ->f(2)[11] -> f(1)+r -> f(1)[6] -> f(0)+r -> f(0)[1]

f(5) -> *18*(Ans)

fun(5)

x=1
k=1
fun(5) -> 

4+2*4+2*4+2
4+8+8+2
22

int x=10
int *p=&x
int y 

* *Individual cases*

y= *p--; -> 10 [x=9, p=498]
y= --*p; -> 9 [x=9, *p=9, p=1100]
y= (*p)--; -> 10 [x=9, *p=9]
y= --(*p); -> 9 [x=9, *p=9]

A= {1,2,2,3,3,4,4,4,4,4,6,7,8,9,9}
k=6

B= {1,2,2,3,3,3,3,3,4,6,7,8,9,9}
k=3

n=5
C= {3,4,2,1,5}

A[-6:15]
base address -> 1000
W -> 4

A[2] -> 1000 + 4*(2 -(-6)) -> 1000 + 32 -> 1032

1 to n

1 to 10

1,2,3,4,5,6,7,8,9,10
2,4,6,8,10 (n/2)
1,2,3,4,5
2,4
1,2
2 (n/2 -1)

1 to 5
1,2,3,4,5
2,4 (n/2)
1,2
2 (n/2 -1)

n/2 -1

A = {1,4,5,7,9,0}
k=2

A= {7,9,0,1,4,5}

n=64
n + logn -2
64 + 6-2
64+4
68

a -> b -> c -> d -> e -> f
a -> b -> c -> d -> C -> f
start -> a
p -> c
**d**(Ans)

a -> b -> c -> d -> e -> f
a -> b -> e -> c -> d
start -> a
p -> c
**c**(Ans)

a -> b -> c -> d -> e -> f
a -> b -> c -> d -> e -> f -> a
a ->f ->a b ->c ->d ->e ->f
p -> d
**f**(Ans)

a -> b -> c -> d -> e -> f

start -> a
p -> a b c d e
p -> link -> link = c d e f

3,5,5,5,7,8,9,9,9,9,12,15,18,19,23
3,5,5,7,8,9,9,9,9,12,15,18,19,23
3,5,,7,8,9,9,9,9,12,15,18,19,23

head -> 3
p = 5 7
current -> 3 5

a/b = a-b,b

15/2=7

    13,2
    11,2
    9,2
    7,2
    5,2
    3,2
    1,2

a=5
fact=1*2*3*4*5=120

5*fact(4)*
