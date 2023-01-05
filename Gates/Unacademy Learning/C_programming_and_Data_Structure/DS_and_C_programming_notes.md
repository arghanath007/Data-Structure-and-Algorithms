# Data Structure and C Programming Language

## Syllabus

![syllabus](https://user-images.githubusercontent.com/54589605/210617866-0e5db580-f6ff-47fa-b8ac-8d76d3e12431.png)

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


## DPP 1

* 1 -> A (Compiler)
* 2 -> B (Double)
* 3 -> C
* 4 -> B (3)
* 5 -> C (a+b =c)
* 6 -> C
* 7 -> A (if)
* 8 -> D (!=)
* 9 -> A (=)
* 10 -> A (&)
* 