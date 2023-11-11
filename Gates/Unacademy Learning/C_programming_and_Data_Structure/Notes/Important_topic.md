# Important Topics

## Note:-

* Practice some **Linked List** questions.

## Recursion

![image](https://user-images.githubusercontent.com/54589605/221870575-4aecef70-4cc2-4675-953a-cd2eaf99bba9.png)
![image](https://user-images.githubusercontent.com/54589605/221870741-90eedffc-6763-4088-b905-216c38996334.png)
![image](https://user-images.githubusercontent.com/54589605/221871137-7945b1d7-973e-442e-9f52-738d6a31bf51.png)
![image](https://user-images.githubusercontent.com/54589605/221871222-d8a898e3-b573-4f1c-a2c3-40f1f1627ae5.png)
![image](https://user-images.githubusercontent.com/54589605/221871497-a5c8b12b-4cef-462b-a3a4-2638683dfbcb.png)
![image](https://user-images.githubusercontent.com/54589605/221872011-b0ad46ec-f550-4353-b091-55c81ce2bf15.png)
![image](https://user-images.githubusercontent.com/54589605/221877925-10b3e522-ef71-4732-bf0c-fc408387d878.png)

* It is 5 + 4 + 3 = 12.
* n % r -> Remainder
* n / r -> Quotient.

![image](https://user-images.githubusercontent.com/54589605/221877951-7dbd92cc-6a8b-442a-b2dd-4040a5331ae7.png)
![image](https://user-images.githubusercontent.com/54589605/221874776-8cae9037-6149-403d-9cb5-96566c7d7781.png)
![23](https://user-images.githubusercontent.com/54589605/221877597-e8b8e243-7921-4a13-8599-e2a89001f7c9.jpeg)

* Here we have (char *s) which means we are pointing to a **char or character** and not the whole **string**. So first we are pointing to **a** from the string of **abc**.
* (s+1) means that we are incrementing the pointer(s) to the next character in the string.
* We all know that **strings** end with **\0** which denotes the **end of the string**. 
* **\0** is comparable/equal to **NULL**.

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/

![image](https://user-images.githubusercontent.com/54589605/221880744-066104c3-5379-402b-a491-cc9d90bae874.png)
![image](https://user-images.githubusercontent.com/54589605/221880679-3327008d-8675-4b26-93f9-1fa49c451d02.png)
![image](https://user-images.githubusercontent.com/54589605/221880886-98b7d806-8b15-4d6a-8ae9-6ee2c9be81cf.png)
![image](https://user-images.githubusercontent.com/54589605/221881115-59cef393-a72e-4a5c-8f46-6662cecec552.png)
![image](https://user-images.githubusercontent.com/54589605/221881165-744c1c7b-d42f-45bc-ad1a-c3a89ba78d6d.png)

* **fun(fun(5))** -> fun(5) + fun(7) = 7 + 17 = *24*(Ans)
* We know fun(5) -> 7, fun(3) = 3, fun(4) = 5.
* This is how we calculated **fun(fun(5))**.

> We are re-using the already calculated values(fun(0), fun(1)...fun(5)) from previous fun(5) but computer is doing it again from scratch. Hence first it is calculating *fun(5)* first as it is inside and then calculates *fun(7)* separately from scratch without re-using the values it got from fun(5). Hence we are adding *fun(5) + fun(7)* to get the count of *fun(fun(5))*.

* **IMPORTANT** look at all of the recursion question int *13_REcursive_Questions PDF* file.

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

## Constants and Macros

![image](https://user-images.githubusercontent.com/54589605/221956501-b00ad1f9-408e-4d61-be17-4b6ac929e325.png)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3de502e-1257-4080-ad31-864497af6df3)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2118e30a-0def-468a-b09f-746b612b6c72)

* Explanation [**IMPORTANT**].

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c43a5f1-34ea-4eaa-b4db-4f95467db742)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/ED8C6094C9
x=10 | 9 | 8 | 7 | 6
y=10 | 8 | 8 | 6

* y = 6 [Answer]

# Data Structure

## Notations

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

## Array

### Relative Index

* Relative index(RI)= (i-LB)

* Relative index would help us to find the location of an element

### Location of an element

* Location of an element Loc of A[i] = Base address + size of an element in memory * relative index = Base + w * (i-LB). [**FORMULA**]
* [**Important**]
* This is when the index of the array is not starting from **zero(0)** then we have to calculate it and we have to use the **above formula** that time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9d7d99e-bbb5-4d03-9f01-34eee9673eef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3047519a-ca8f-424a-93c8-cd78fe7798a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db349b8e-4194-45c0-9876-3b6ca45515f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d847222f-a2be-47d7-8fbb-fb71606e1f4c)

* Example with Relative index.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8959f4e2-8bd7-4cb6-bc93-5ddfd6efccac)

* Indexing is from **zero(0)** or indexing is starting from **zero(0)**.
* It saves the **(i-LB)** calculation. CPU doesn't have to do the subtraction which helps in performance as
well if indexing starts from '0'. Then the formula will be like below:-

* Location of an element Loc of A[i] = Base address + size of an element in memory * i = Base + w * i. [**FORMULA**]
* [**Important**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c59debe-3d78-4e81-99a1-236a96ed95cc)

* w -> size of an element in memory
* Base -> Base address
* i -> The index in the array.

## Difference Between Call By Value and Call By Reference

* **Compiler**
![image](https://user-images.githubusercontent.com/54589605/212529265-4d9b9a5e-7c7f-4924-89bf-f6fdc044f0a8.png)
![image](https://user-images.githubusercontent.com/54589605/212530290-cccf5b83-a34b-4fba-a899-9730facaa306.png)
![image](https://user-images.githubusercontent.com/54589605/212530339-2a2f90ff-d9ac-4d64-974e-c78bc4e60085.png)
![image](https://user-images.githubusercontent.com/54589605/212530371-15c26203-036e-4ad9-8c19-6681ffacdd7e.png)

* Call by Value -> Only a copy of the value is sent to the function which is in **foo()** and the original values are not modified. Here we are just using foo(char* x, char* y) which are just pointers and just pointing to the values.
* Call by Reference -> The address of the original values are send to the **bar()** as we are using **bar(&p, &q)** and in the bar(char** x, char** y) which is taking the addresses. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49c65df4-a844-4e9b-b60d-63d0d0531d6c)

* We have use *x = *y, so that the values which the pointers are pointing to gets **updated**.

## Summary of complexities of insertion and deletion in Array

![image](https://user-images.githubusercontent.com/54589605/212548206-5b052a7b-4386-44ba-9705-3232cb010052.png)

## Insertion, Deletion questions

* Insertion always at the start(LB) -> **Theta(n)**. Since we have to right shift all of the 'n' elements by 1 index.
* Deletion always at the start(LB) -> **Theta(n)**. Since we have to left shift all of the 'n' elements by 1 index.

## Max and min element in an array

* Runtime Complexity -> O(n) OR Theta(n)
* Space Complexity -> O(1) OR Theta(1)

## Tournament Method

* Runtime Complexity -> O(n) OR Theta(n)
* Space Complexity -> Theta(n) -> As we are storing the values from each round of the **tournament**.

## Find Min and max both

* Method 1 -> 2 * n -2
* Method 2 -> (3 * n)/2 - 2 -> (1.5 * n) - 2
* Method 2('n' is **odd**) -> Ceil(1.5 * n) - 2

## Finding second minimum

* *Formula for finding comparisons required Method-1* -> n-1 + n-2 = **2n -3**

* *Formula for finding comparisons required Method-2* -> n-1 + logn-1 = **n+logn-2**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30792cb7-e1cb-459c-ab61-7bae06f186e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e43bcd2b-b50f-4093-8ad6-28464c65bcd1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/566dc0a7-7c5f-4dcd-9b27-530e976398f4)

* Example


## Find max power of 2 which is smaller than n

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20da9872-bb3b-4f54-be9e-2e3948efda7e)

* Question
* Solution Below.

```c
    int x =Floor(logn/log2); // Find the power
    int y= pow(2,x); // Value
    return y;
```

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a026e12c-a832-4c3e-8dbc-88d5c7842ac9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1819bad3-92d1-45fb-ada3-e635ecdf0e6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/020b7f35-9eff-435f-90d1-9152a75f517d)


## IMPORTANT Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1cdcea74-b70e-4161-bd59-a762bd95d8ad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/def5dc8f-606a-47e8-82cb-2f7ae47cc342)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a108b243-e83f-4b38-9b46-530074bdc282)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8f0bf68-e785-42e7-8f42-afd17a10edff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bd9096f-93ba-472e-9c15-53a95a3fc0c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9b899da-9b5e-4bf8-9d40-f17789c00926)



## Linked List

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78f66411-b7fe-4b52-8375-c824c363542f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c855aa9e-f38b-4833-ae5c-399931422316)

* Condition

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57fa7787-7731-432f-89a7-90d0f40273af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6340345e-fecb-421a-add6-e8996f3e4543)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e401b32-4ecc-42d6-b028-aeee05b7d11a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c29ef024-3ec1-4094-8ad5-63927a06c332)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d2c31ae-eb89-4e9f-8b59-b8ba37655d82)

* Practice some **Linked List** questions.
* Look at all of the **PDF files** of **Linked List**. [**IMPORTANT**]
* p = p -> link; [For **Traversing** in Linked List] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44acd22f-fb60-43d7-8458-5407d9d5ed18)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28e5209e-24e0-49b8-a744-3e9093675777)

* NPD -> Null Pointer Dereferencing
* If the conditions were **correct** then we can say that the **data of the 2nd last node** of the linked list is the **answer**.

### Base conditions missing:

* start =NULL;
* If Linked list has one element only. 'start' pointer  points to only one node.

![image](https://user-images.githubusercontent.com/54589605/212615573-8835e66b-559b-4a75-99d0-022920d6f11b.png)

### To remove the NPDs errors

![image](https://user-images.githubusercontent.com/54589605/212616164-dda68630-d5fb-4c8d-92c6-c753825778af.png)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65cc1ec5-65c8-49dd-8ea5-b403dac7ff5c)

* **Insertion** of elements in a **array** is fixed by **insertion** in **linked list**.

## Valid NULL terminated linked_list

* start=NULL 

> There is 'start' pointer so linked list exists but it is empty or has zero(0) nodes. As it has a 'start' pointer which means there exists a linked list which is empty or has zero(0) nodes, but a linked list exists never the less.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75efe1c5-e0f3-46bb-9266-1af7ead34c3f)

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

## Linked List Insertion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd3ba85c-1923-4927-abe1-05fa3c9c2b49)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a07628f-be18-4ba3-b03b-5f028702bad1)

* **n** is the **new node** to be **inserted**.
* n -> data = item;
* It means that the **new node(n)'s data part** is filled with **item**.
* n -> link = start;
* It means that the **new node(n)'s link part** is pointing to the address where the **start pointer** is pointing to **currently** which is the **first node** of the **linked list**.
* start =n;
* It means that the **start pointer** is pointing to the **new node(n)** now which means that the **new node(n)** is now the **first node** of the **linked list**.
* This is **insertion at the beginning**.
* Time Complexity -> Theta(1) -> Constant.
* No loops nothing needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37dc1904-bec8-415f-9461-cf1baf89b0c2)

* **n** is the **new node** to be **inserted**.
* n -> data = item;
* The **location(loc)** is already given/passed to us in the **function** so need to **iterate** to that **location(loc)**.
* **loc** is the located after which the **new node(n)** is to be **inserted**.
* n -> link = lock -> link
* It means that the **new node(n)'s link part** is pointing to the address where the **loc's link part** is pointing to **currently**.
* lock -> link = n
* It means that the **loc's link part** is updated to **pointing** to the **new node(n)**.
* This is **insertion after a given node**.
* Time Complexity -> Theta(1) -> Constant.
* No loops nothing needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32da9786-dc8e-4e93-827b-16382cafe7f4)

* **n** is the **new node** to be **inserted**.
* n -> data = item;
* For this we have to use **loop** because we have to **traverse/iterate** to the **end of the linked list**.
* The **while loop** is **traverse/iterate** to the **end of the linked list**.
* Now we are at the **last node of the linked list**.
* **n** is the **new node** to be **inserted**.
* n -> data = item;
* n -> link = NULL;
* As **new node(n)** is meant to be the **last node** of the **linked list** that's why we are setting the **link part of the new node(n)** to **NULL** which signifies the **end of the linked list**.
* p -> link = n;
* Now the **'p' pointer** which is at the **last node** of the **linked list** and it's **p -> link = NULL** and we are updating it's **link part** to point to the **new last node** of the **linked list** which is **n**.
* This is **insertion at the end**.
* Time Complexity -> Theta(n)
* Loop needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/717fac70-2a61-4681-9fda-62d4f36c6657)

* **Insertion at the end** when the **address** of the **last node** is given.
* **n** is the **new node** to be **inserted**.
* n -> data = item;
* n -> link = NULL;
* As **new node(n)** is meant to be the **last node** of the **linked list** that's why we are setting the **link part of the new node(n)** to **NULL** which signifies the **end of the linked list**.
* **last** is the  **address** of the **last node** which is given.
* last -> link = n;
* Now the **'p' pointer** which is at the **last node** of the **linked list** and it's **p -> link = NULL** and we are updating it's **link part** to point to the **new last node** of the **linked list** which is **n**.
* last = n;
* Now the **last** is pointing to the **new last node** which is **n**.
* **Insertion at the end** when the **address** of the **last node** is given.
* Time Complexity -> Theta(1)
* No Loop needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a67bfabc-0e90-40d7-821a-7f0b7bfbb38b)

* Insertion before a given node.
* Time complexity =  *O(n)*

## Different insertion in linked list

* **Beginning** -> Runtime complexity = *Theta(1)*
* **After a given node** -> Runtime complexity = *Theta(1)*
* **At end** -> Runtime complexity =  *Theta(n)*
* **At end when last node is given** -> Runtime complexity =  *Theta(1)*
* **Before a given node** -> Runtime complexity =  *O(n)*

## Deletion in Linked List

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccb2fd49-3c8e-4c97-b426-e278677289c4)

* Deletion at Beginning.
* Runtime complexity = Theta(1)

> *free(p)*, the pointer 'p' was pointing to the node and the space take by that node would be set free. The node will neither exist in memory nor in the linked list.

* free(p) -> keyword.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f616489-2cfa-4af9-bce9-b6715da11f18)

* Deletion of a given node location.
* Runtime complexity = O(n)
* Only valid way to delete a given node.

#### More ways to delete a given node

> Interview question, **delete a given node but we cannot use an extra pointer or a new pointer, which will loop to one place before 'loc' position**. Below are the ways to tackle this problem/question asked in interviews.

#### Invalid Method 1

```c
    start = loc ->link.
```

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d67a3215-04d6-45c8-b88d-ede293d5687e)

#### Invalid Method 2

```c
    loc -> data = loc->link->data;
    loc->link = loc->link->link;
```

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e7243af-51fe-4f1e-ab05-58b5ed64ecc5)

> Both are invalid ways of deleting a given node. Normal way is the only valid way.
> Look at the *26_Types_of_linked_list* PDF file, the code and the explaination is there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da5ae4d7-bc69-4417-96e3-beb02efdc863)

* Delete at the end
* Time Complexity -> O(n) OR Theta(n)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69deefd4-b87f-40d6-ae7d-d75b33ea3639)

* Deletion at the end when last node address is given
* Time Complexity -> O(n) OR Theta(n)
* last -> It is the address of the last node in the linked list.

```c
    struct node* p =start;
    while(p->link->link)
    {
        p=p->link;

    }
    p->link=NULL;
    free(last);
```

> Even if the address of last node is given, we still need to traverse the list and get to the 2nd last element of the list.

### Deletion in linked list (26)

* **Beginning** -> Runtime complexity = *Theta(1)*
* **of a given node** -> Runtime complexity = *O(n)*
* **at the end** -> Runtime complexity = *Theta(n)*
* **at the end when address of last node is given** -> Runtime complexity = *Theta(n)*

## Searching in Linked List

### Linear Search

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a156c0d-eff5-4bfb-a707-3b4886cc850b)

* Time complexity -> O(n)

### Binary Search

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a2de3be-c5c6-4a57-8809-8511e04636cc)

> Linked List should be sorted.
> Binary search in linked list is not possible in *logn* runtime complexity. As we have to linearly traverse the list to go to the mid element of list. Hence to find mid element we have to do *n/2* comparisons every time, which is *O(n)* runtime complexity. As it is not possible to reach the mid element in *constant or O(1)* runtime. To reach mid element, we need linear or *O(n)* time complexity.
> Binary search in linked list can not be as efficient as it is on array because in linked list, reaching to mid node is not possible in constant time.

* If someone asks can we implement binary search in linked list?

> Yes we can implement binary search in linked list. But the runtime complexity will not be in *O(logn)* but will be in *O(n)*.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae36c1f2-2682-4b0d-8c0b-dbbea5d67285)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22f31c5f-12d8-40cb-90ff-34c974d5d42c)

* [**IMPORTANT**].
* Union(U) -> O(n ^ 2) -> Both sets are combined but common/duplicates are removed. Uniques are kept only.
* Intersection() -> O(n ^ 2) -> Only the common values from both the sets are kept.
* Membership -> O(n) -> Similar to **searching** -> If an elements belongs to a given set or not.
* Cardinality -> O(n) -> Similar to finding **count or no. of elements** -> To find the no. of elements in a given set.

## Reversing in Linked List

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3f837f7-6134-4c9e-9176-c20e16963b25)

## Double Linked List

### Insertion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d79a0d99-3ca1-4797-a349-33c33f56e529)

* At the beginning
* Time Complexity -> Theta(1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5397801-2a0a-473d-83c4-74052f4b0f29)

* After a given node
* Time Complexity -> Theta(1)

> In linked list insertion, always update/add the links/pointers of the new node which is being inserted
into the list first then change/modify/update the existing links/pointers in the list. Othewise we will
loose access to the already existing links/pointers in the list. Sequence is important otherwise we
will loose access to some nodes in the list.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/658af2d8-6c07-4a34-a133-288d4eed9516)

* Before a given node
* Time Complexity -> Theta(1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c4e58af-e966-4de9-9de1-a5b02b6ad051)

* At the end when address of last node is given.
* last -> Address of the last node.
* Runtime complexity -> Theta(1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c709bb0d-940f-4565-8c18-784d78f482da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e92b1fb-b9a5-4d21-a538-544aa53a0c82)

* At the end when address of last node is not given.
* p = n;
* It is not needed **necessarily** as **p pointer** is a user generated pointer anyways.

### Insertion in doubly linked list

* At benginning -> Theta(1)
* After a given node-> Theta(1)
* Before a given node-> Theta(1)
* At the end when address of last node is given -> Theta(1).
* At the end when address of last node is not given -> Theta(n).

## Deletion in Doubly Linked List

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2424cd41-5363-43c1-a93b-a3f4b09dbba3)

* First Node or Beginning.
* Runtime complexity -> Theta(1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/554fb464-f134-483e-abd2-31806b5e34f6)

* Given Node
* Runtime complexity -> Theta(1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e6b76a8-ff48-4255-a79e-db2f2f41d666)

* Last node, when address of last node given.
* Runtime complexity -> Theta(1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/981b237b-c921-47ac-8b11-22a7bc24d29f)

* Last node, when address of last node is not given.
* Runtime complexity -> Theta(n)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d66d237a-b98f-46d1-9bed-06d9b0b40533)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d31e95bb-0827-4dbd-90f1-cb9ce55affc0)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/AAB92BA2E1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c258de9a-7bfc-4bbb-83c0-d4ffad8476b2)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/AB7ED031BF

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7291d634-d3e0-4817-917d-aaf77009962b)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/D0BBB518A3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a748d710-6508-4e0a-a1e1-56f7314a6c0d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/993fb772-54e6-48c9-95ff-0cce89bef8cc)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/F61BECE127

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d603d333-d092-4ca4-9edf-1a78a44fe94d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63b0ee6c-9e84-43f5-87f0-1ec199b51c58)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c2cc594-84e6-43d7-b418-6ad4c270af22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11b5cb28-199d-4cb0-b747-905ffba73475)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fe42e1b-fed0-4ef2-99a5-abd94c13067f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81950173-b5c8-4ddc-b292-8cca52781b2c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13f2c735-358f-4e8f-b205-dcd10881fc4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2070acfa-99ed-408c-a4ee-daeca0553551)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b597c93f-4681-4f01-b9af-264649e64869)

* [**IMPORTANT**]
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B34C5792C4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c93d7c6-4cde-421f-81fa-556630606ff7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db5a64da-863a-492a-975f-4f7f3aaeeb87)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84ade7b5-1cc3-4f3b-9e93-f4aed66606ec)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f97bd71-9d92-4673-878a-18cefb3539bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f46bfdcb-d54b-4ea8-9bb1-48aa350f32b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61f1bc8b-c992-4b96-aa47-ee2c96209fc8)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6f58760-4ee3-4c2f-98c0-bd37ec7fbb4d)

* Solved Earlier Check.
* **PDF 28** has **Linked List PYQ questions**.
* The solutions which I did are in **DS and C programming notes** page **175**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43ba760c-eb14-4dde-9465-6b927bc97e54)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89671cc5-6ea3-4a67-8f1e-9c2a8294be30)


## Queue

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/230dcb7e-c0c9-4dc0-bec8-8e8040fab891)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/212dacb0-1c82-41ea-ad48-7ea6eae02730)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91126145-32d3-4a8a-ab63-7b2b35ebf4c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eeab3aac-6d03-4aff-8c57-5225da51cca3)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de2aca15-3879-45e5-8c88-fda46e745315)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/87E9B83466

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52b02399-b478-4d6e-8fa5-87c1a6fc9ad1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84c2a3a4-11a7-438f-9cf3-a6cbeddaa584)

## Implementation of queue using **linked list**

* **Enqueue** -> Insertion at the end -> **Theta(1)**
* **Dequeue** -> Deletion from the front -> **Theta(1)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/448a87cb-f030-47ed-a56f-ebbba529f25e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49af69d8-30fd-49bb-9d05-be34e40d2552)

* QueueFront() -> It reads **front** element of the queue and returns it.
* QueueRear() -> It reads **rear** element of the queue and returns it.
* IsEmptyQueue() -> Returns **True** if the given **queue** is **empty** and returns **False** if the given **queue** is **not empty**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46ba1acc-23ff-4eb8-98c2-dda0c3c31ac8)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d10e67c0-3782-4549-9a8f-f52f8d9b94e7)

* Rear Node -> Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/448d4855-bc9d-464b-b69e-367fc60c4987)

* Done Earlier.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cea52e0b-0ce3-4bac-9da4-fc4006b79544)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e8ee0c3-4577-4cb7-85de-defa09cf290b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6391f247-e372-416a-9277-d53cd755b983)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2c5dc16-0f7e-424d-a347-f875241b4263)

* Queue = 10,5,9,6.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b565001-6745-4500-9ebb-5a50d86a5351)

* multideQ(k)
* Time Complexity -> Theta(k) or O(n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31e3eac9-593c-4921-81dc-c29a6777508d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84cb9b4a-4b7d-4367-a7a0-e92776bb8165)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5b56bf0-d637-461f-a647-9f1fe86ae3b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b56b0d9-0b6c-4f80-bd03-75f55a8bf445)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecb11d35-83ac-44f0-b624-99285d2ac7b3)

> The reversing that is happening in image 2. It is happening in queue2 or Q2, where the elements are
first being deleted or de-queued and then immediately inserted or enqueued into Q2. Which is
mentioned in image 3, underlined with color. This is how it is happening.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/667b392a-5fc6-4d49-bfab-79d1d08b526b)

* enqueue(Q2, Dequeue(Q1)); 
* [**IMPORTANT**]

## Stack

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62e50999-3b69-4a4e-b25a-c009c4af997d)

* Push

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d5e7dc5-0855-4dc7-881b-35aac59691e3)

* POP

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7145c108-f950-47a3-b3a9-b4f476a21c2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44fbac9b-7dd5-42a6-a31b-e538a8ebed28)

* Stack using Linked List.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/967ecb57-4fdb-421a-b584-8b428e0cc39c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/359d71f3-1b3b-4feb-b93c-2596da9ff48a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1e98af8-97d3-4aa2-a958-4bf6d0d0e035)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd8f7244-4a45-4405-b320-c815983c00ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfd94b5c-8e84-4515-a25d-0509db4da906)

* Formula
* Total permutations -> n! 
* Catalan Number -> No. of Valid Permutations -> (2*nCn)/(n+1) [For 'n' elements]
* Not valid -> Total - Catalan Number

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a16b1621-d26d-4d1c-887b-f6103a2026a0)

* Example
* Stack Permutations -> The different ways or different orders in which we can pop out elements from the stack.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d73c01d-a646-4321-8864-93d4e777950d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d215f44a-2c8f-4939-8b6a-d22324b7920c)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/C43A5E8F09
* Option "D" -> Strictly Decreasing Order [Answer].

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e533288-7451-4fe5-9b31-dec55fce4899)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9774da0-5993-4634-acd5-eb2bc07ea685)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0f76572-d812-4886-878d-de60f807c159)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/71DB154857
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d3800fd-5af9-478e-a16a-8e08a3ad290f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a871888-cda5-4a13-91c0-d3dbcc686353)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e922b54-6d73-42c5-8e07-55eb3aade338)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfb69b7e-5f83-4ee0-8228-2d1cc915077d)

* We found the fastest horse.
* How to find the 2nd fastest horse now?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d003ebf-e54a-4b58-b53d-a1856cddfb5c)

* We have to do one more race.
* We take the 2nd place horse from the **final state** and we have to go to the group from where the **fastest horse** came and we have to take the 2nd fastest horse from that group.
* Between these **two horses** do the **final race**. Among the two whoever is the **winner** is the **second fastest** horse.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a040c780-a52b-49c3-b63c-a693b3717001)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29f2e945-de50-44ab-9a0a-a19d02f67efd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55ad86a0-b7d8-451a-b543-5ed4754a8ee8)

* Example.
* We have to do one more race to find the **2nd fastest horse** after finding the **Fastest horse**.
* Do the race between the **2nd horse** we got from the **final state** and the **2nd place horse** from the group where we got the **fastest horse**.
* From this race we will get the  **2nd fastest horse**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d659d46e-95e5-414f-829a-84529d809247)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2163908-6cb6-4028-a058-9f16a327ae0c)

* Total no. of races -> 7 races [Answer].

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7dfb24c-8c84-44dc-95dd-76a78814c680)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da4f6a0a-c8ec-4482-b682-082c6f5e6296)

* Question-> We have to find the best two horses among the **25 horses** given. No stopwatch is given.
* Interview Type Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d498c7d6-7c28-45ca-8cb9-2a8d0b08cb60)

* If **n** is **odd** then **Ceil()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/096698b7-cc51-443f-9422-cfd41eeb3d27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/517837db-b57f-46ea-8369-0da9c5f618d5)

* We have **10 opponents**.
* To eliminate **2 opponents** we have uses **2 efforts**. **2 constants efforts**. As soon as we eliminated **2 opponents**, **1 opponent** is added back. So total efforts is **2 + 1 -> 3**. **1 effort** is for the addition of the **1 opponent**.
* For the total of **3 efforts** only **1 opponent is eliminated** or to **eliminate 1-opponent** we need **3-efforts**.
* The **1 remaining opponent** is an **exception** because only **1 opponent** is left so to eliminate it we need **1-effort** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3425985f-5102-49c6-8c05-fae8cc2ae7cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83c1d93f-1419-430d-9f3b-79d82139fa67)
  ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a5f237e-bf76-4f8d-8ebd-67e90befbffc)

* So it is **3 * (n - 1) + 1 -> 3 * n -2**.
* So the asymptotitc notation is **O(n) or Theta(n)**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7172dd1f-6516-4032-8254-92477a6b107b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8c8d403-9fc7-4383-8084-13a78a643e1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee35f182-bd66-4164-bb80-b77270f65d37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56a03981-766b-4918-a21f-eaa718482ac1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79a9649f-70fe-4793-8fb5-fe2dca74904a)

* Explaination.
* Needed to take an **example**.    

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6aa7376a-d72d-474d-b295-7317737cec1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64a46add-f820-4643-888c-1d9929d3791a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22a4c728-fed3-4460-85e6-806f2d419a71)

* [**IMPORTANT**]
* Formula needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eebecd0-9a7d-486e-ac5b-bbe5d25267b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b409403d-184a-4d1c-8bfd-92e02916bf53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09866195-8b76-4d32-a8c7-7696ed49cf3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b7a6768-4c9a-4a2f-b0ee-1ee6c44363f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06d3f541-b7b1-4731-89e0-3b193fe8ddc0)

* [**IMPORTANT**]
* **PDF 32** Questions are **IMPORTANT**. Practice them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbdf5830-60ba-4e07-9a92-ffd0878b3fa8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a54a25fb-981b-4420-b876-05c8ea1225b9)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/E4F85EA5FC
* Two -> Option **B**. [Answer]

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

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f61d4ed1-993f-42e6-85f6-c6270cac8600)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f834b02-d251-43b5-9103-7ca5d15e9090)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b10ee16-1f43-476f-9ca9-aa55e138365a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf7b1c0d-4862-43f6-a747-e2254e4d7c07)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e55931cc-f3c6-4673-a84c-8f4bbea0012d)

* Option **D**, **Y + 2 * X**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c742b0ef-ae19-43e4-b191-a10059b34ba8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58c64e5e-92b1-48e2-98c5-452e5b1d8727)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/017b1c23-542d-4e9a-a2cf-34fed4fcada4)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56d4fff6-41de-4bd6-9350-545de456d6b5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa5e66dc-5df4-4bd7-a45a-ca3c93cda52a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f6935d3-636c-47cf-9972-4a14f346a21e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06c55f7e-c3f7-410b-8020-cad8ea04f61e)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c295a0e-b6ae-4ea8-abf1-144ef0e518bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d30b46c-379a-49ab-9906-44c1f24bcf85)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3439e18-3c35-4333-a6ba-120402685989)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e8b9686-65ef-442e-9bd6-7847a3c8d5a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/384b4ed6-ddc7-434d-8451-adf8dcffd77e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afe39171-45dd-45ea-a56b-28b87decc029)

## Expression Conversion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed0de017-7c74-4ef6-b769-54fa9799533f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/775aa53f-79b9-4c9a-a176-a94f79d3d71a)

* Infix to **Pre and Postfix**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cec561cf-c253-4720-9514-0c09ba2bbc4d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd2d4d52-8466-43d1-a26b-ba1b596b9489)

* Postfix to Infix

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9be621cc-fa4c-4116-ad31-18ea800ab97f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fec7a59e-0c2f-406e-b6f7-8c4d821f50b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0de04e63-ce63-478e-8d9c-6544661e6376)

* Postfix to prefix
* We can either do the conversion directly or do it in steps. Like convert first from post to infix and then from infix to prefix.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fc9c1c1-5410-4f9b-80f1-4cae955a2f15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dbe07c8-2edb-404f-9c3b-0eb97e08e185)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91e25250-627a-442f-826e-558204d840cd)

* Prefix to infix

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84077d18-820a-4d54-9577-2c057d5d4523)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d49afb29-dcbc-4139-b5cd-e2675ff13746)

* Prefix to Postfix.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b75118d-6755-4607-a2e0-2e12e2591d5e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c014433f-4a99-455c-bc61-304b38091f3f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efdfa3fd-dabd-4126-a751-64378bc63acd)

* Question **5** [**IMPORTANT**].
* **-b** is the **unary operator**. Solve it **first** before the **binary operators** as **unary operators** have **higher precedence** than **binary operators**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f398852-3977-4109-882c-0cc86c41756c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa2acaf9-2fdf-4861-9629-b28607d0b512)

* [**IMPORANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c3be91d-ce30-453d-8a82-de45b490827a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f8e693c-5f86-42fa-8dfe-4eb9a029f577)
![image](https://user-images.githubusercontent.com/54589605/214226632-39b05234-2cc4-47ca-8549-4973f6a20878.png)
![image](https://user-images.githubusercontent.com/54589605/214226694-a3603350-7a2a-41d7-beca-4de09da049b2.png)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cc2fd3e-bf26-4fb1-b6a5-2699b5f747b2)

* m = 9, n = 8. [Explained above]
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/BC08C292D8

## Recursion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c29263ac-f8ae-4aa6-bd88-c80b11aec543)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e65306da-b4f8-4e13-ab23-58a1b994d914)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0d24079-db59-4267-b565-c15158f1446a)

* Example
* No. of function calls(Invocations)
* No. of additions.
* Formuals.[**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e670c7c-8fb3-407b-ab43-73f2252d16ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dae0833f-cd6b-4a09-9e44-7a72bed91f61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bcd3c67-df1e-41d4-9b1a-982e3f20b7e8)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/052ae166-ce92-4972-9ada-afbf2902fee7)

* Code for the above **question**.

### Tower of Hanoi

* Runtime complexity -> Theta(2^n)

### Algorithm

![image](https://user-images.githubusercontent.com/54589605/213985691-d8ffa948-5d3d-4d26-a6da-3d61d05634b0.png)
![image](https://user-images.githubusercontent.com/54589605/213985718-885483c1-fd2a-4b69-b55a-08bd526f4731.png)

* Tower Of Hanoi Formuals.[**IMPORTANT**]

## Tree

* Degree of a node -> No. of children of the node.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8576ceb0-7676-429c-b432-b70c0fd6092c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f081134-abfb-4e14-b8f2-36fa20bc5d60)

* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14068d50-291f-4bf8-bcf7-ff9327c0a25c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9042cdfd-266c-4d5e-9b71-905b61c06134)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0dcac6f-76ad-4001-9f23-df5c118b43d9)

* Finding **Min and max** no. of nodes in a tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c15f7850-700d-4ee3-8786-f47cf9ca3e87)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/041ad046-beac-479e-bb95-09234c798e37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85450be8-46cb-436b-bc56-da4da456e70e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/390c2d5b-a509-4af5-bad8-e33607d70bb7)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/163a1b38-838a-499f-95be-f240ed66e762)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b72f9ee-9649-407f-af5e-f190f8daa31e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3308b81-cb2e-4487-a558-a6fb69b46370)

* Unlabelled Nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e74d8164-6b91-4606-851d-c42e00d1e234)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4462ff78-cefc-491f-925a-84b424d70bea)

* Distinct Keys.

## Tree Traversals

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47d32350-b704-4b75-a52f-90e443eed2de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e188e12a-f20c-44c8-a6b1-c6f2afc8e38d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d611b06c-9bbf-4246-8d94-ae9526372958)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c64690d8-3ddb-46bd-a397-133cf21d0fdc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d532a0b2-50dc-4a2b-bbfd-4880cfee21a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac0b1cf8-bee6-4dfc-b922-284c0754efc1)

* Dot Method.
* Conventional Traversal -> Left to right
* Converse Traversal -> Right to Left.

> Conventional Traversal -> First symbol of preorder traversal is the root of the tree. Last symbol of postorder traversal is the root of the tree.

* Reverse of converse preorder traversal -> Conventional postorder.
* Reverse of converse postorder traversal -> Conventional preorder.
* Reverse of converse inorder traversal -> Conventional inorder.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ee1602a-7102-493b-b35f-1654947bf4bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87915174-2b09-41dc-9d09-a11a92971634)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58dbc455-b539-455d-a930-a0613bdc96d0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/254d3dc7-22f3-4f86-84b0-62f08fd5bb2e)

* Max and min height of a tree with **n** nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d768dc8-bd59-4d31-a846-af58827b6ed2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53f820d1-9295-4817-b76a-9eb916e55d27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba6b2ae1-6178-410f-a8ab-0523a1892e55)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B3B38A08BE [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0bbbf39-de1d-4c7c-8748-b8f5ed1c2a6c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df5ce576-58b9-400a-855e-e67e291537a3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92c208ed-5ab3-48d4-96f5-4f8d442bb1b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3f2054d-ed69-4091-bc36-cd36cf87a6a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d57b6d4-b275-4cdd-b9ab-a1d20a3bd2e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27e760e8-aba7-4627-adbe-c6d9ce86aa9d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ef111fa-a9f2-4e90-8ce4-52e4b7b43fbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8515fc93-9582-4f90-b874-6816d2575156)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b054e94-fc95-4c82-8633-2f00be664188)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/468f12e3-a7e8-45a2-8a1d-427c4a76e59f)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ea8ca66-4d17-47e5-a2ea-0b8355b06848)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70b3c30f-be99-4a5f-a03e-bfcfd9aa0985)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00ca9286-9a09-4178-b925-9c3861325267)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed63938e-151b-4627-9131-f8fe5d95c126)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24466b44-22e8-4c13-add9-84b42aa3e2ca)

* Tree Construction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2ea9043-9a97-4f26-bb27-15318ae08c7a)

* Condition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bba7f2a-ba06-41d4-b5f0-c50c89b91331)

> Got one of them wrong. Should be like below.

![image](https://user-images.githubusercontent.com/54589605/214589897-7af3ca55-2d05-4a77-990f-0a21d2c74927.png)
![image](https://user-images.githubusercontent.com/54589605/214590416-3daea8fb-a6b3-424e-b828-15cb8d84cbd9.png)

> In post-order we do, Right->Left->root(RLn). So as *7* is not between *3* and *4*, hence it is not the right child of *3*.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25563e39-4ba1-4740-8d2d-ddf392f7dcca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3afb779f-2d6e-42ba-ac31-57a68bac0535)

* Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bf49e8e-4695-43e1-beaa-9b918d17014e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b19bb1e6-018b-4ddf-af40-eea1ec88cffe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db167497-d23f-46d1-8f1d-ae8a543d35f4)

* Example if **Zero(0) or 2-children** are only present.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4acc719-b42d-4d6a-a8a7-8e0ba4884469)
![image](https://user-images.githubusercontent.com/54589605/214605000-b2ce047d-a552-447a-b6a0-2e8dda0ea7ba.png)

* Here we are counting the no. of leaf nodes in the *Binary Tree*.

> We have to understand the conditions and have to reach the *base condition/case* of the program to be able to find out what is the program is trying to achive running on a *Binary Tree*.

* For the above question and in general

> The main **funda/logic of recursion in binary tree** is that if we have reached the *base condition/case* of the program and then we have to finally return a value(which is value=1 here), otherwise if we haven't reached the *base condition/case* yet then **count** from *left subtree* and *right subtree*.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a255794c-1af9-441f-9722-feb5057ebd8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1aba43a-12e3-4198-8df7-13496719cacf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee2bbe63-1d92-41cf-9303-fa3a80520def)

## Height of Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b03361d5-689d-44c4-ae09-1080308811b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35d2c64e-832f-46f6-8864-b539de4e65c1)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/981dd087-d015-4b15-801d-b0d3498be1ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7429192-9e6f-4a01-a525-400c459a3d9c)

* Mirror Image.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1a62789-16d4-4d5c-90af-8b997615cd66)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/607e081d-5ce3-4d31-a27d-f88a65d8735a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44d40f4d-2ac9-4839-a8cf-37a075769a16)

* We can solve them cleverly using **Dot Method**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5eb78626-9ffa-45bf-b0e4-65bd67600322)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08653bc2-376c-4272-b6f4-7d0e5dfb07bb)

* **Pre and Post** to draw a tree [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96231f34-517d-458f-b03f-0e45d209df56)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29e71ce4-41f3-4264-923e-697859a55f88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/957e55f1-0df5-4bf3-bdfa-44f56a5eaa83)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/753dae4a-9165-4140-b3c9-0bc96212747e)

### LeftMost Child Right sibling Representation:-

* So that we can store the **general tree** like **binary tree**.
* If root's child is there then it is on the **left side**.
* If root's sibling is there then it is on the **right side**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d89200d-0687-4315-b08f-cdccd0f63456)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d7693f2-d369-42f8-874b-4903875af44a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e286f76c-87b9-4bc7-bd86-cc1b54237f44)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1f579b6-ff56-4e93-91c7-ca1fdc60e087)

* In **general tree** there is no concept of **left and right child**. That only happens in **binary tree**.
* In **general tree**, child is child.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7110ebe-417a-4a3b-9424-255fcfbf4e9d)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/983cad59-5049-4219-8de6-1f42daf26e1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c8146a3-2843-4b42-943a-37d6ebae1c7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14111f80-13f7-4551-b984-3d07f534d001)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0d74b4c-5fbc-4420-be3a-46511e8b8336)
![DPP_solutions_Tree_27](https://user-images.githubusercontent.com/54589605/215255849-046de82b-6b96-4d10-964e-1c4dfb613f33.jpeg)
![DPP_solutions_Tree_28](https://user-images.githubusercontent.com/54589605/215255858-42fbfedb-47c8-41da-b58e-fb5396c00d0f.jpeg)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/546c5e94-c9f6-48f5-b38e-d74a6658695d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8155dc57-847b-4ded-a166-e6db67f745f8)

* Last two(2) problems with **pre and post** order expressions. [**IMPORTANT**]
* Preorder -> Right to left
* Postorder -> Left to right

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/892f420f-a3ef-44fa-8346-d134b7a4b1ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ec76c5c-9647-4cf5-9283-690bbf11c17e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49b94c9b-a36c-4912-9465-01777c5f72c1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61d99f7d-478d-4790-9d3c-d95be5fb27d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2018b9e-9662-480f-99a8-6f143f8f0840)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9234ac18-50a0-4f70-a443-fafd033936c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/402047e7-e82e-4c14-af3c-c32998007215)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dce16477-cda7-4856-9437-f1edd4dff7c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5224ec7c-ed07-4208-ac52-23cd6fa46cf7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51e393af-0627-499a-a5e7-c387d69d17d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/031941e8-9d5f-4e1d-8234-77341006ce76)

## Complete Binary Tree(CBT)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a717f133-5b45-43ab-ae51-0e42e550524d)

* **Max and Min** no. of nodes in a Complete binary tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0685fae9-c995-4b7d-8291-a74fd08f2b95)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/942727a3-12af-427a-a8ea-6ef99d3ada04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e67e1341-8f88-49e6-bcda-b105dea893c7)

* Array Representation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b7dc7d8-6dd7-40b2-8c0e-368d3a817032)

## Full Binary Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b269e83-01bf-47c3-abae-3eeccc0435ac)

* Binary Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63c31029-420c-45a3-8fbb-5600b31c6b1a)

* Full Binary Tree Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d9da8d7-5932-4e13-b9ce-e1c460f70c1a)

* Complete BT formula.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73bee0e9-4550-47f1-a595-3e9fb7909afc)

* 3-Ary Tree Formula.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e7883ac-f13e-4d72-aff0-cbdb83f83250)

* K-Ary Tree Formula.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54adb1e0-7e07-4e5a-bf95-63bfdca4c37f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dda1de81-7eb9-4747-88d8-10f52a855de5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e97f4c5-5c49-4506-afc8-c28e612eeb5a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcd9c73d-f3d1-4bd9-a74c-2409cdacf08e)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75a26c5c-0c98-44d8-8bc7-d633f8315e2d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8daf978d-189d-4528-b00e-ae2452de6f8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f2141de-8bed-4b9f-8de4-0d9e86130211)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29300058-db59-47b2-b510-bd218f97e7d3)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef722859-6013-42ea-affc-4169131bb659)
![image](https://user-images.githubusercontent.com/54589605/215473274-8be10813-d743-4051-90ef-6b632518f093.png)
![image](https://user-images.githubusercontent.com/54589605/215473349-7ed66e1a-1130-4dfa-80c5-2d1f03884557.png)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a65fa62d-4a22-44b8-9b46-f08e6bf2e9d1)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/4716FB369B
* Try and solve it using an **example**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b7fc5ed-e4aa-4033-b583-fe672e5ab0f0)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/CE3E11A0DD
* Use the formula

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7844199-f1f8-4e3d-b9be-10e2df234987)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B705FB1630

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7422e6a-a357-4c07-931d-7220938f06c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98de9453-c598-47fa-a009-96c735cf0279)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/529ac1e7-94cf-456f-9065-9e58057136aa)

* Trick -> Use **Dot Method**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0a557c7-c4c1-43b3-9b0d-fb8a6880ea33)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19830f7f-e126-410f-b420-91c09c8c0f8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b61c434-9cb8-4991-9394-212f58711a81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/648caabb-b2e0-4e1f-ab84-a0122b27bfe7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c68f94ec-3960-4cca-a1ba-baaa9114e2dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68c81e57-501f-4109-bc95-fcb8ba8bd373)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a4e258f-327e-439e-adf5-adaa3e48719a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5ec96fe-c96a-446f-a390-a6ca79c2431d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45c5c6d8-5ac3-4feb-a52d-1575c015ce61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3e25853-2b77-4e7b-b9c9-6e3057b0e9dc)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67e2c044-0ab1-421a-9573-6862716897e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b862343c-02a2-4dc4-a02f-51b23a2362fa)

* BST construction

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cf0207f-abec-473a-b564-80c6e2609eb6)

> Go to the left->left->left as long as we don't find a node who's left child is empty or not present,
right child can be present as well that doesn't matter. Then that node's data is the minimum of BST.

* Finding Minimum value in a **BST**.

> Go to the right->right->right as long as we don't find a node who's **right child** is empty or not present, left child can be present as well that doesn't matter. Then that *node's data* is the **maximum** of BST.

![image](https://user-images.githubusercontent.com/54589605/215524979-2bcf875a-3e8e-42c2-865a-16533adf97fb.png)

* Finding Maximum value in a **BST**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e830e461-fb02-401b-81cd-0045512a3a86)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d391411-d3e7-49f6-ac2e-ba0fe5594cb5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/447659cf-7b75-4fd7-a1fb-75caa8b39df3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fed07cf-b47e-4ca8-8fc3-46f7bbd30ce8)

* BST Construction.

> If we take the **Inorder** traversal of a BST then it will be (left subtree-> root-> right subtree) smaller values->root->larger values.
> Hence, if we take the **Inorder** traversal of a BST, then it will be in **sorted order/sequence** of **ascending order**.
> **Inorder traversal** of a BST is a **sorted sequence** in **ascending order**.
> **Converse Inorder traversal** of a BST is a **sorted sequence** in **descending order** as it is the **reverse/opposite** of **conventional inorder**.

> We can directly **construct** a BST from a **pre-order** traversal because in BST, the left subtree elements are smaller than root and right subtree elements are greater than the root. We have to insert the elements from **left to right**.

> Pre-order -> **root->Left->right**. Traversal is from **left to right**.
> We know the left most element is the **root** of the tree. Hence, we will traverse all of the elements from **left subtree** then only will go to **right subtree**. After we have gone to the **right subtree** we can't go back to traversing **left subtree** which is **wrong**. First traverse the whole **left subtree** and then come to **right subtree** which is **pre-order** traversal.

> Post-order -> **Left->right->root**. Traversal is from **right to left**.
> We know the right most element is the **root** of the tree. Hence, we will traverse all of the elements from **right subtree** then only will go to **left subtree**. After we have gone to the **left subtree** we can't go back to traversing **right subtree** which is **wrong**. First traverse the whole **right subtree** and then come to **left subtree** which is **post-order** traversal.

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28f0a940-b1f9-4b60-9e2f-2a8c887d6925)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bc4124e-b572-4954-9991-1b669fca09af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf49189a-3814-45bb-89a2-4700f7aacb99)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f03d9430-b1a2-49c1-9237-a9a7be68a5cc)

* Example.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1b591c7-905e-45f7-9741-bdf65d7001c4)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/24AC824735
* Element at the Lowest Level -> 67 [Answer] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0343657-70d6-4967-89cc-cad4c0839c6b)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/996FF92255

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b789d4f-384c-48cf-80ba-8c79c62742f7)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/2406CA7232

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42d3756a-2ff3-4f52-b0e5-b84cc1daa3ba)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/6B14068263

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1aa24026-997f-40b9-8d92-32c0f55604e4)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/95E34CBC69

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a842895-9f3f-4138-a7f4-448afc44e85d)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/52E1399564

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c90e18a7-9b4f-44d7-9117-a22898fc6030)

* Explaination

> For 'n' distinct keys/elements and an(one) unlabeled binary tree with 'n' nodes. As there was one
unlabeled binary tree with 'n' nodes and we can get arrange the 'n' distinct keys in '1' way to get a
BST.

> We created different ways to create Binary Trees. The answer we got for Binary Tree is the same
answer for Binary Search Tree because for finding the different binary trees for n distinct
elements, we use Catalan number. For finding the different binary search trees for n distinct
elements, we use Catalan number multiplied by 1. Hence both have the same answer. If the
question is for binary tree with n unlabelled nodes, we will get the same answer as above

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68b648be-3757-4d06-bb4f-5906dcb5dc3b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d67ca43-17fd-4b4f-83cb-d5cd170af5f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59555c51-a9f9-4cb5-84b8-7ba389398143)
![image](https://user-images.githubusercontent.com/54589605/215996188-3866dec5-9d84-4fe8-b3c2-324746ddeaf1.png)
![image](https://user-images.githubusercontent.com/54589605/215996218-e4cb4b46-0aa1-4077-81d2-70cbe3e28fae.png)

## Deletion in BST

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/652150b8-5dc2-4765-a8cd-d0f83729e05b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8e1153a-09d8-4178-a041-456606283378)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e8fbb7f-e780-4a5f-aa67-691496bb8473)

* Inorder Successor -> It is the closest value **next** to the **node value** we are **deleting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de4fa953-6da0-4388-96b3-1eacc9e70e0a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/524a9103-8982-475e-bfa7-255b9cae7fa9)

* Inorder Predecessor -> It is the closest value **previous** to the **node value** we are **deleting**.
* If we used the **dot method for inorder** then we would have gotten the **Predecessor** for **80** is **40** but we are finding the **previous value** to the **node'a value** we are **deleting**. The **closest previous value** to **80** in the tree is **70** so the **Inorder Predecessor** of **80** is **70** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a7fa0da-5f78-4b6f-a2e0-83e89a4166e7)

* Time Complexity in BST.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ad9230e-b92c-48a8-94a4-238ba247f30a)
![image](https://user-images.githubusercontent.com/54589605/216318968-84e16bfa-1a92-4078-8741-2510c4978bea.png)
![image](https://user-images.githubusercontent.com/54589605/216319234-6e90e9d2-eaa9-4933-9965-d317ff486ad1.png)

* [**IMPORTANT**]
* Right subtree -> p
* root -> 1
* Left subtree -> n - p - 1.
* 1st number -> n-p-1 + 1 -> n-p.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58c58cd2-1e61-40d4-80d2-1f9ce47d1572)

* n -> No. of nodes
* Height of **Balanced Tree** -> Log n.
* Height of **AVL tree** -> Log n.

![AVL_1](https://user-images.githubusercontent.com/54589605/216122733-f5acf2a3-f67c-41e6-9959-4a31b486b32a.jpeg)
![AVL_2](https://user-images.githubusercontent.com/54589605/216122739-b7c3d037-c788-4a4e-8f88-88f39bd23ac3.jpeg)
![AVL_3](https://user-images.githubusercontent.com/54589605/216122744-2f368151-2f74-4cd7-9f15-81b165c2e243.jpeg)
![AVL_4](https://user-images.githubusercontent.com/54589605/216122747-892e24c4-ed43-4d40-9c8c-b6fe174affe4.jpeg)
![AVL_5](https://user-images.githubusercontent.com/54589605/216122749-010ff949-5324-4799-b11a-ddd77d75fbd7.jpeg)
![AVL_6](https://user-images.githubusercontent.com/54589605/216122752-6adcb552-9d88-49d9-a516-916f04028e36.jpeg)
![AVL_7](https://user-images.githubusercontent.com/54589605/216122756-50092681-758e-496a-b1cd-d297994b09c5.jpeg)

> **Q1** from Image 1 before DPP starts is the **AVL Tree Insertion 2 question** on *47_Balanced_Binary_Search_Tree* PDF file page **19**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/762087ad-0eda-4507-b540-f3038229aed8)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/A3F5CCC384

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a164e91-230c-4670-bd89-b408c048f41c)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B2B704FD8A
* Min. no. of nodes in an AVL Tree **formula** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/251c7d66-fbb6-4119-bb19-e7a48aaf480d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82c58bae-42d5-4b18-a579-4f0df7c417ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96b3385d-def6-4d22-a623-0603eab5572b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d152f812-2284-4c1f-82f8-099906856de0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be91aac9-8e7e-4eef-a985-a625edcddea3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24518782-ca63-4a3c-83cf-23a0153cd2d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3566ee1b-60f3-4626-a8d0-95cec251de4c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52b59c9a-372f-43c5-93fa-cf55e5e0c7de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77d2db3e-acb7-4117-a31d-2b1164e6d336)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4102051f-0251-4937-892e-314431481965)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adaa206d-2fe9-4b84-9a93-9c8a30abce1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cc889f1-18c3-426d-a715-31767b28240b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d39beefd-dbfe-490e-9b5f-b06645f07aca)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/D7CE7A652A
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/60A61C78DD

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/669442c1-4a05-41cf-ba6f-65f2381af1e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35cddede-da5e-4885-bfaf-6d8bb0bc8f96)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c11c50c4-90a9-4f3d-9bdb-c46341abec06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5814872-4c5e-4e0a-b1a4-7917a789d6c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c1b9b64-c8ca-4417-8d0c-068c5c35d1f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccbb3ce0-0850-4358-8654-8797b594caac)

* Create AVL Tree [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1fc5484-dac4-4366-84ad-ad39dce0b882)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d5009c5-804e-4701-a787-7bf5b9d0f921)

* Practice all the **AVL Tree** drawings from **48_Doubt_Session PDF**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3af3c222-b817-409c-9f8c-8c61a45cd7e5)

* AVL Tree deletion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/638dab7b-0507-4420-88b5-194e9e8cda13)

* The deleted no(25) is on the right side of the **imbalanced node(2)** as it has **balance factor** of **2**. The **balance factor** of the **left child** of **2** is **0** so it is **R0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fa23d40-980b-4fe5-9a3d-bc497aefb926)

* The deleted no(25) is on the right side of the **imbalanced node(20)** as it has **balance factor** of **2**. The **balance factor** of the **left child** of **node(20)** is **1** so it is **R1**.
* The deleted no(25) is on the right side of the **imbalanced node(20)** as it has **balance factor** of **2**. The **balance factor** of the **left child** of **node(20)** is **-1** so it is **R-1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa495d27-67a1-4863-b371-a1bd084ec4eb)

* The deleted no(15) is on the **left side** of the **imbalanced node(20)** as it has **balance factor** of **-2**. The **balance factor** of the **right child** of **node(20)** is **0** so it is **L0**.
* The deleted no(15) is on the **left side** of the **imbalanced node(20)** as it has **balance factor** of **-2**. The **balance factor** of the **right child** of **node(20)** is **1** so it is **L1**.
* The deleted no(15) is on the **left side** of the **imbalanced node(20)** as it has **balance factor** of **-2**. The **balance factor** of the **right child** of **node(20)** is **-1** so it is **L-1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69c84136-d9b2-437e-8d21-c16e00fb3756)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9bb7956-dfd9-4299-b463-fe1ce1110250)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e1989d6-31d1-4bb5-819f-e4b170028c5a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e64a60a8-e3a8-4b9f-959d-99646e51aa89)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ef4548b-40e3-4a18-b410-af801f92923f)

* Min. no. of nodes in AVL tree.

> For Maximum nodes, we have to completely fill all of the levels of the tree. Because AVL tree is a
BST as well as a Balanced tree. For Minimum nodes, we can either fill the left subtree to h-1 height
and right subtree to h-2 height or vice-versa. Here, 'h' is the height of the tree. Because we can
have a balance factor of 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb49dcbf-e439-49e0-a4a3-e72ed1c25935)

* Height of tree with single node is **zero(0)**.
* Height of AVL tree -> log n -> Ceil(log n) -> Ceil(log 7) -> Ceil(2.8) -> 3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4642f2d-2c43-452d-bcd0-c6fbfe783741)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9595da16-c265-407f-ac3d-e3aff847e5fe)

* Practive them again.

## Heap

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5ae61dd-0ae8-4eb3-9be1-08579b84bc7e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4e7da0c-0e12-4a79-b017-ac8e035f3750)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14c1507c-5ff1-41ef-a3db-683b2665947e)

* Insertion in heap.
* Runtime Complexity for Insertion in heap -> O(log n)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63243296-e040-4bd1-b392-d037e749b461)

* Option **A** [Answer]
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/DAABAFFFF6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1e03376-ea4e-4c0c-95da-ee4e3f4b0911)

* Building Heap(One by one insertion) -> O(n * log n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0aaa60a-6da2-4556-9517-b86157bd8360)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/7F998D1336

## Runtime complexity

* Runtime complexity for **each insertion** in Heap -> **O(log n)**
* Runtime complexity for **'n' insertion** or **one by one** insertion in Heap -> **O(nlog n)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ad28912-c487-4cd2-9a86-e686d5487d13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/509d621a-eefc-47fa-84dc-faba9c8b9491)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef752a49-e727-47e7-a1e1-a19238624871)

> If elements are given in ascending order like above then zero(0) swaps are required to build min-
heap

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dee933cb-1f19-47c9-bb8b-86dc4901295d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38eb5685-1105-48ed-9c39-fb64ac3986f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/568d92b2-f38a-457a-9aef-17625f91acc4)

* Time Complexities in **Heap**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b73acef-1005-4172-9a94-d7b14f611f7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6e9c069-8002-4dcd-aeba-00ad259f6127)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86de25e8-4fd9-4fd7-8541-2b077821039c)

* Runtime complexity of deletion at heap -> O(log n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcae74e4-52e9-4c6a-abee-f5abe9049a79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9444ac1a-f6ca-43bd-953b-7e915345c3f8)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9f1f437-214d-4d5b-9fda-8b9765fb3bca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b4e911a-ce6c-4fd1-a695-83a770200689)

* No. of heaps using **N** keys formulae.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/936ebd1e-24ba-4649-9d2a-2b917185461b)

* No. of element present -> Log n
* Height of tree -> log n
* no. of comparison performed -> Theta(log log n). 

## Heap PYQs

> In Q1, the question is about **conversion** and not **insertion**.
> In Q12, **2007**, no. of comparison performed will be the **no. of element present** and it's **log n** as **height** is **log n** of the tree.

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
![Heap_11](https://user-images.githubusercontent.com/54589605/218458850-8e8605c8-b689-4603-8b81-1c455475815b.jpeg)
![Heap_12](https://user-images.githubusercontent.com/54589605/218458859-8832d2f8-4379-4f8a-9f8c-93b1805da2d8.jpeg)
![Heap_13](https://user-images.githubusercontent.com/54589605/218458865-3bf053f3-5e8b-408a-99b4-99292b401e22.jpeg)
![Heap_14](https://user-images.githubusercontent.com/54589605/218458868-a2706192-7464-414b-8ebf-025efbbaa780.jpeg)
![Heap_15](https://user-images.githubusercontent.com/54589605/218458876-a79a1952-e2d6-4841-88a5-8a4dc2570943.jpeg)
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

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f44df71a-13cb-4d11-845b-29723fd4d5a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e2f52da-4534-4ab6-947a-a6554504cde4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b010c37b-d6ee-45a8-9210-a7912b0b41ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1278205f-89bc-4c70-bc70-dab29b4921d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1178e848-38cd-4ae9-bfc7-bd7f25b43077)

* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d245dcca-dd30-4ada-91c0-d49e193540eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4baad96b-20f9-42fa-a524-99260426fdac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2276bcb6-c6b6-41a3-ab85-e89b4141589e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4c17e71-4be7-4aea-a63e-53ccb806f43d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a23f9a65-20c3-434b-be89-f0568c427877)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ee7fde0-4132-4cc3-bff4-ebb27bd97993)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf910abb-bc0f-44c8-b99b-3a6ae6258c6f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79a0a238-5a6c-4b42-aca8-c27275e1e7cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef3b3a53-932d-4783-a3bd-726071358c3c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08e92b60-9791-455e-b79b-fbfd86ad64f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b43257ae-2e3a-4e26-b820-701886e5e3cd)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/02DC1ED7CC

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb6b66f9-251c-43fc-8847-3e5d309e8f98)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/35169F1D2D

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e505e9c-3722-43d2-8583-c5eeb5b1f58a)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/865235DFDA

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dac5efc-7332-4bdb-93b6-c08a9b04de31)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/7AE9D9EA46

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a042d291-d9b3-451b-b50e-83b543998824)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/4B3468F7C8

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae39104d-72fa-4f56-afbc-ccdaca30e608)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77fdc9b8-f680-476d-973d-5b8f7caaa38d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bca61b80-48d6-41c7-8486-a9481bfdbd11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1616dfe7-9d16-4c46-9266-e1472120e1a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64fc9259-9396-4356-b4be-61026b87dce0)

* We are doing **BST** deletion using the **deletion cases**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08843c2d-022b-421d-9c40-0e07a5237645)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4993d54c-35b4-4020-8b8b-7d0699721809)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91c8e3cf-6f7e-4dba-adf9-53f7680c897c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8df1d3c9-3bd2-4fdb-8a66-5ffb9d3bda2f)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/00F8CFD5F8
* We have **log n** level.
* O(n * log n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d81906f-4ba5-4165-89c2-cf659161900d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b8ac9df-66be-47ad-b2fb-8f80d3a32420)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a665421-94cd-4134-b1fc-a719cc822639)

* Read Question Carefully, **CANNOT** word.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a31ea48-9156-426f-88f7-7287a6f82673)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/109d85b3-e200-4092-8261-2b83e9b379a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea03ef5a-44cd-4e75-8999-82f1fd23cc23)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c6fc2ef-cde4-4b24-8fa6-ef08042e5c08)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33fbc9da-3f7d-460d-a27d-6ffd0d66c1cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48d38fc2-bc17-43ce-97e3-f95ea036d357)

* [**IMPORTANT**]
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/ADE441C37A
* Searching -> O(n)
* If the sequence(inorder) is **sorted** then the **searching** is **O(log n)** time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07f7827b-60d5-4db4-941e-f176f346a9b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be0ac2d6-7ac5-49be-9e7f-5a0d08302199)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0155b44d-0835-4530-9789-bb71eac4c63e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/071afdcc-2c12-4d7b-aca6-b6a579a42276)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/024C7449CF
* Option **C**.
* Solve all of the questions in **53 PDF** file. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55c37115-5a70-469d-b488-64fbdc0df1f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1977d81d-cfb4-459e-8a0b-ad6e41f566b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31476912-06db-45ca-803f-c120b2bc4985)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c94e8495-9a0a-4e7f-9acc-01db130cce24)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5c78bc4-0856-4190-bdf0-5e85e7de0def)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ee0c1c3-fd9a-4324-b2d6-6231e3c25b53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84120545-82cf-483b-a013-f2f5e7910c86)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1b3ef79-5cc2-459c-9094-9e57abbe9dd4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c69b305-80c5-439c-b101-503372b6a327)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86d5f3c4-59de-4521-99c6-933d33d0fe72)

* Questions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b14cad6-7f23-49ca-8927-85b1273712dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/398153be-fa15-4da3-ad68-e9fb7fee5d0e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/487e40c3-9098-440f-8c26-880abfe8667e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c68eaadd-7ad7-4b56-875e-cfd06ae27093)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9251eeb-5de4-4d2f-be92-87840a00ecba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3fde7a7-40eb-426f-8e52-62c2c6759c92)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/653659E6EF
* https://gateoverflow.in/333184/gate-cse-2020-question-47

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b07330a5-723b-4377-966a-93ab204aae2c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/402844b1-72ab-4f2b-8b98-72e1c7c4d2d4)

* Nodes = 1023 = 2 ^ 10 - 1
* Assuming index starts from **zero(0)** as it is an **array**. Index are from **0 to 1022**.
* Leaf Nodes = 2^10 = 512 [1 -> 2 -> 4 -> 8 -> 16 -> 32 -> 64 -> 128 -> 256 -> 512 -> Nodes at each level]
* No. of comparisions -> 512 - 1 -> 511 [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8d9f508-c1a7-4ff3-881d-e6fbfa20228c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/352b5be3-3b83-4112-8e46-22d1ed32b110)

* Leaf Node. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1de1e2c4-8f6a-41bb-ac15-e1c2e03a8e22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89ac03f8-fae6-49dc-b84c-c48503569b40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4406f5c5-f07c-4e37-93a4-a0b0b42ca3dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/643d05b6-f926-41b5-8852-6580cdf3a103)

* Height of the tree or levels of the tree is **log n** and we have **n** nodes. We have **log n** levels and in **each level** it is taking **n** time. So it is **n * log n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12889793-7029-4e19-ba98-1d604b65f0bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13e516cf-9fc6-43be-8c9d-53ed6ecfca61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f88a7d89-c36b-45ab-99b7-e5828f0a7960)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/869f2f29-88d4-49eb-b2c8-2171342f6379)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2737ee8d-35af-439e-8c21-1fb2fc73bf2a)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/071e8905-13b8-4f09-8ff3-acb6e13fae81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ded292c2-82a3-406b-87e4-ed6f4ed6ecb4)

* Order Traversal -> Sorted sequence in ascending order.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d1569ff-40b2-4b73-85da-96998a65575a)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fedb41c-1ebd-4b5a-88b2-32f68e6bde14)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5838464-e6dd-46cb-b089-2ca04af6453d)

* Practice all of the questions from **54 PDF** file.
* All look at the way I solved the problems in the **Notes PDF** file.

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

![image](https://user-images.githubusercontent.com/54589605/218649357-8e6596d8-3453-4584-88b8-46c9f1d343d4.png)

> The answer is **O(N^2)** as it is the **highest** time complexity out of the all. Adding all of them up also, gives us the same answer **Asymptotically**.

## Graph

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2be285c8-cb46-4845-887f-b158443fac3d)

* BFS with Queue.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b62102d-d8b5-4c61-9bb5-010dea4181e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05d35823-559c-47a3-a901-86e3cbf3bf19)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03ee9eb5-f9ce-462e-9a61-8448d9f71344)

* Examples.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3627c084-9c2a-46d5-9617-228202c90486)

## DFS

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8e53567-d42b-430c-adad-0f25ac981b48)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f927ffa2-2d83-4361-8b8b-57f7dde0c3b6)

## DFS Using Stack

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d6a013c-135f-48e5-95ba-9d72c803c9ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b5440f8-64b0-45be-b4f5-4f81893b1d43)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27d3fc3f-b182-483a-a75e-e5b2efb2c32a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a966b18d-108b-428d-8270-17b10d592165)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ed789c7-ef5a-4354-8fa8-765591f00de7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58116735-73c4-47f3-9e71-3c6f5795129d)

* Similar to the **sequence 3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ff85423-540d-4561-8cc2-45ebd29af483)
![Graph_3](https://user-images.githubusercontent.com/54589605/218752612-4349c7df-3105-49a9-b8ff-73867f5376dc.jpeg)
![Graph_4](https://user-images.githubusercontent.com/54589605/218752647-43196541-7fec-4095-ba75-e811caecc778.jpeg)
![Graph_5](https://user-images.githubusercontent.com/54589605/218752658-53ae8fb7-1752-45ac-b5da-3407441f2f59.jpeg)
![Graph_6](https://user-images.githubusercontent.com/54589605/218752669-19a2b0c9-574e-4ba1-a25f-bdc93f58a5e6.jpeg)
![Graph_7](https://user-images.githubusercontent.com/54589605/218752678-449a32de-3ebf-4044-98ba-0ec03a0217b2.jpeg)
![Graph_8](https://user-images.githubusercontent.com/54589605/218752686-85f51b45-3eef-42e5-8efd-cf242865f825.jpeg)
![Graph_9](https://user-images.githubusercontent.com/54589605/218752702-edb73788-60a3-4fe1-9ebb-4d982fad56fa.jpeg)
![Graph_10](https://user-images.githubusercontent.com/54589605/218752737-26b3886c-5912-4ed9-af4c-da7f8017424b.jpeg)

## Graph Question from **56_Graph** 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4870b537-bd96-4886-b546-e8ff3fa403b3)
![image](https://user-images.githubusercontent.com/54589605/219034438-ad04fb15-3679-4d61-bbe9-4e80a4eb906c.png)
![image](https://user-images.githubusercontent.com/54589605/219034462-a78855f4-d474-4ec2-b0a3-35f28be2b4a8.png)

> Here, it is asked for **DFS**, we have to traverse the whole **graph** using **DFS** technique and **minimize** the **maximum possible recursion depth**. The  **maximum possible recursion depth** which is possible using **DFS** has to be **minimized**.

![image](https://user-images.githubusercontent.com/54589605/219035695-abd88290-1755-421d-af68-317ef54bf189.png)

> Solved in **57_Hashing** PDF file.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1bcd44d-a1b0-40ba-9057-802e3194fc01)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7eda8517-f454-40a3-9d67-91402881bcab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caf10ea0-34e4-4131-b4f2-22dc0d5ed47a)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e47b5f3-2cb3-4e5c-8a98-4c8368e7e99b)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B283F5E1F9

## Hashing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79502f7d-fac6-478f-9d01-a753f0a7e733)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89bdbf2c-4b73-494c-8a42-6881c0bbd039)

## Load Factor Formula **Important**

![image](https://user-images.githubusercontent.com/54589605/219338978-b1769c46-d021-4b01-808f-0115aa4f6e9d.png)

## Space Utilization Formula **Important**

![image](https://user-images.githubusercontent.com/54589605/219339231-34465015-009e-4d3c-bb75-38edcf4a5d05.png)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6edc3312-fd2b-46da-90fd-5996bce36494)

* Load Factor and Space utilization

## Hashing PYQ

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4824ea00-e4cd-4e2b-a25e-94cf023528b5)

> The **minimum** will always/anyway be **1** as we have to do **atleast one(1)** comparison to **seach** an item. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8342b435-593d-4e38-aa3e-568f5706435e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8993c89-35fc-471f-b57b-cda61b40a05f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b296a8cb-eaea-41b3-b236-9ea9fa5c2c52)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9328663c-9733-4f9d-80da-981ba659f7c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f236bcc-c54a-4490-b712-03e6d347c5e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/949e9a25-21b6-4c76-8059-3560e624f0da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/009c54a6-b4ce-48f7-b0ac-cf96e0d84f9e)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/FBF107EB95
* Link -> https://gateoverflow.in/3461/gate-it-2007-question-28

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fa4ef0b-3c10-473c-bfab-da5208ab8c0a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c77521d9-153a-4a01-baf5-c38c024dadc8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e4d75b8-b8e8-4f0e-8405-ebbfad064bd4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f7a069b-ece5-4194-ba6f-48a75b638f36)

* [**IMPORTANT**]
* For value **52** according to **52 % 10 = 2**, it should be at **2nd place** but it is at **5th place**. It is because we have **collision at 2,3 and 4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7f9d3a5-6454-4fb5-922f-7681810994e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9301c925-87f1-4c65-bab4-fb580d3357b7)

* Before we insert **52** the locations **2,3 and 4** should be **filled**. After that insert **52**.
* So **52** should come after **42,23 and 34**.
* **46** is inserted at **6** where it should be.
* **33** is inserted at **7** but according to **33 % 10 = 3**, it should be at **3rd place** but it is at **7th place**. It is because we have **collision at 3,4,5,6**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8cdccfa-7eab-4d31-ab6d-5a07fd19d17f)

* Before we insert **33** the locations **3,4,5 and 6** should be **filled**. After that insert **33**.
* So **33** should come after **23,34,52 and 46**.
* So **52** should come after **42,23 and 34** and after **52** only **33** will come.
* It means that **33** should come after **42,23,34,52 and 46**.
* **33** should come at the end.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23c42c7d-87d7-4cb6-9408-fbfe1d108398)

* It is similar to like after 1, 2 comes and after 2, 3 comes.
* So we can say that after 1, 3 comes.
* Transitive relation.
* **42,23,34,46** all are going to their respective places without any **collision**.
* Insert all of the **42,23,34,46** keys in **any sequence** as they are going to their respective places.
* Take the **permutation** of the **4 above keys(42,23,34,46)**. So the permutation is **4!**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/307e324f-5b4e-4d4e-8cc9-76050ffa2c0b)

* **4! -> 24**, so **24** different sequences are possible.
* It is not mandatory that **46** should be inserted before **52**. Before **52** these three keys **42,23,34** should be inserted. We can keep **46** after **52** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adb6c14c-87c0-4350-851c-a2d920a6d1d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4415a92f-47b3-4571-a239-4430484078aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e15734ec-7c2c-481f-98aa-c68906f6bdd8)

* [**IMPORTANT**]
* In these **30** combinations we will get the **same hash table** given in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3407774b-ec92-445e-9359-2d59311fb46f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1052bcc8-c296-4443-946e-be23628cd6aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/203e021e-68cd-4d3d-aa6f-073a919f6aac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/169923dc-2042-4b40-8c3c-a4b5fe81ef7e)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/76618E4796
* Link -> https://gateoverflow.in/8152/gate-cse-2015-set-2-question-33

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/781886b6-4cb4-438b-abd7-2b185f45baae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6a1814a-450d-4103-b667-61e4843ab3f6)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/E302BC3905
* Link -> https://gateoverflow.in/333208/gate-cse-2020-question-23

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5759cea-2788-412c-b858-e0e2aa447ca7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e239a86-d003-4286-b27f-c930f5f880ca)

* Link -> https://gateoverflow.in/357404/gate-cse-2021-set-1-question-47

![Hashing_1](https://user-images.githubusercontent.com/54589605/219847829-e0197717-2412-432d-9bd8-4355e456d99f.jpeg)
![Hashing_2](https://user-images.githubusercontent.com/54589605/219847833-d450126a-92a3-48bd-8368-7e7f763a45d8.jpeg)
![Hashing_3](https://user-images.githubusercontent.com/54589605/219847841-d30eab2a-30a2-4e24-b303-a4f0ec8e6fdf.jpeg)
![Hashing_4](https://user-images.githubusercontent.com/54589605/219847852-691ba01d-e939-4cf4-a66b-b1766ef708d8.jpeg)
![Hashing_5](https://user-images.githubusercontent.com/54589605/219847855-a29612cf-f6df-4bfa-b494-ff53d3f895f5.jpeg)
![Hashing_6](https://user-images.githubusercontent.com/54589605/219847862-8d7c2e99-f6c9-4600-a060-ea0180c420fc.jpeg)
![Hashing_7](https://user-images.githubusercontent.com/54589605/219847866-2769ff3d-368a-426c-8d3b-b7f9e5b3d5c1.jpeg)
![Hashing_8](https://user-images.githubusercontent.com/54589605/219855523-6d784843-be57-4825-a74c-7ede31cc869a.jpeg)
![Hashing_9](https://user-images.githubusercontent.com/54589605/219855484-133a489d-ac7b-40cc-b5ab-3ed8e3852485.jpeg)
![Hashing_10](https://user-images.githubusercontent.com/54589605/219855492-215c37ac-cd6f-4d64-8872-17b9b52657bb.jpeg)

* Hashing

![Tree_1](https://user-images.githubusercontent.com/54589605/219855536-a6a3f641-e50f-44dd-9a03-76fee43e63e9.jpeg)
![Tree_2](https://user-images.githubusercontent.com/54589605/219855537-6e8fc32c-1a40-4772-a50e-587ecee84b30.jpeg)

* Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae7f8ce4-cdec-45c3-a6c3-2d0ac0a7fb0a)

* Practice the question in **60 PDF** file.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a09c3bc-9f88-4f2f-9f2c-5fd114ba0483)

* Question/Doubt
* Link -> https://gateoverflow.in/3461/gate-it-2007-question-28 
* Which is the correct answer I am getting D? Some are saying B as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c58c0bb8-47fc-417a-98a0-6c9cfdffb65d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e3243f7-3675-48e4-af00-0b9af9aa8e3a)

## Row and Column Wise Formulas

### Column Major Order [**IMPORTANT**]

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8a50fb8-c639-4f0d-9928-0cbe701e8210)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5aa38d33-66ad-491f-bae1-47b492b4c47d)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8e70175-7b7f-43c0-b8b1-63091817df7a)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/6C6C8611CB

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9435275-5f28-43e7-a82a-854d56cd3002)


## Quiz-2

* Solutions in **20 PDF** file.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92145416-2be1-491d-b671-7dcf6fb80da8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae0e112f-af50-4786-8a83-56efecc85155)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9c7435b-03d4-461f-873b-d8be30eb71f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6301f6bb-88b8-4c11-9632-d8ecf4a90476)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95fa2181-0bd9-4cdc-8dc1-08cad851e371)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78071ab1-0e2a-473a-aa0d-f62e3e8de282)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/681aff25-f613-45f5-92cb-8a3dc9018765)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a74539b4-fc82-4a01-9834-647e8cb9b918)

## Quiz 1

* link -> https://unacademy.com/quiz/quiz-i/RIE675803I/solutions/SP_QOQ4E07DUQSMG52YT

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b350b02-36e9-4ad7-a16d-a731a7f6be14)

## Quiz 2

* Link -> https://unacademy.com/quiz/quiz-ii/ULGCT6UVU5/solutions/SP_59DBH6G06JEIHAI6J

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cc6a942-3705-4e9f-a4c2-2a177a92e06c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc1d5389-ff04-4c4d-a58e-74bdcea03f3b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f54cd99-7492-4cbc-af6b-bbd1178e46cd)

## Quiz-III

* Link -> https://unacademy.com/quiz/quiz-iii/5C2VOPBX3P/solutions/SP_V7WZ94DI18AUCSGSJ

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e27fcd77-f0c0-4473-8c83-4e81a001a4f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36b09efd-4dbb-4f56-b5f9-1e0946c030e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f57662d-0b7e-45e2-a338-62c1a5c0513e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c20e16a-dca5-4388-a931-6c0339a6a8c6)

## Quiz-4

* Link -> https://unacademy.com/quiz/quiz-iv/8PD0KGWQGS/solutions/SP_KVTVHZVQJWTMCAA1Z [**IMPORTANT**]
* Not solving them correctly.
* Practice them once again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d559d62-35bd-46a0-9487-eebcb92e02f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/908f274e-21d9-4cef-bb7f-43e759cb3ff8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19ee53b7-2892-4ba0-ab7f-3c852592f72b)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/3211C274B0

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2aa2fa08-e39c-4ae9-ac26-34f5514613ad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d06b1be9-2e05-4664-ac3c-c71fd93509cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/130cfab7-1901-4eb0-aa56-b825381f783d)

## Mega Quiz [**IMPORTANT**]

* Link -> https://unacademy.com/quiz/mega-quiz/5XX9411NS0/solutions/SP_GEP10SX69USF80ICC
* Practice all of them **again**.
* Trick questions are there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0a3a98e-1328-4d8d-b01d-2ed0393e4874)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/20F5207BF6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6906f7e3-96bb-461b-96e8-23d6b79340e6)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/40C833D6EA

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ce4f4b2-7088-4b6e-9ce9-ffe5b862f7c8)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/07D8B26C65
* Hand-shaking Lemma
* For the **sum of degrees** we have to **multiply** them with their **no. of nodes**. For example for **a1** it has **degree '1'** so we will multiply **a1** with **1**. For **a2** we will multiply **2 * a2** like that.
* Sum of Degrees = 2 * (No. of edges).
* No. of edges = (No. of nodes) - 1. [This is for **Tree** as there is **no cycle** in tree].

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85ea2132-d4eb-4e70-bf27-cd54eabf8bc5)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/349487a2-f9cb-4fee-9eff-0ee15a271d08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fc9e2a5-4cbd-4a7a-9839-a416027dfed7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9124dc5a-8660-45d5-9f66-6beeefda7237)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/938f915d-3e64-47b9-bc65-a73410be9878)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0b5bc55-401e-437d-b7f6-66780849b5cf)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/059a16f8-6742-43b4-8eaf-f6cf138e22ab)

## Doubts yet to me asked

* The images no **87,88,89** are not asked in for **doubt** ask them when other doubts are **solved**.

## 87

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa39da3b-17bb-446b-b3e2-7f3723a85cc7)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/4F8DD35E7C

## 88

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92619055-1a8a-49ea-b48d-4a6a3c993779)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/466C529520
* Traversing the whole array **1 time**.

## 89

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cfff86e-9499-470b-bde5-a39fc0b517a5)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/2A4849D4E5


## C-Programming Test-1

* Link -> https://unacademy.com/quiz/c-programming-test-1/C8D16FYRMB/solutions/SP_CFXLR4QX6V9VIAWVF

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6289b646-833a-4b6c-bc20-cc28b4742a26)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dc48fd2-1a55-447b-8e24-29ce54286b74)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f09b50da-c37d-4904-9959-aadf2793403d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8cdd57a-9e39-4f5f-b0ca-12223b9ca947)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca8afd86-0f5e-4153-ab18-618e0a4c7459)

* Question 2.
* Indent doesn't matter, we are still getting **10** as the **answer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e962a49-2a9a-450b-87d4-ed49219324f5)

* Question 4
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/898F0459D8
* Solution of different question is given, waiting for **correct solution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c000c45-1e42-40af-a7e9-8765dcb7e69c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a384f10-dabd-4cbd-aab9-eee6a4eb7bb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b06d0d26-902a-43b8-b310-c09ffd0a0dcc)

* Question 9
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/0F9D9B7B3D
* Correct Solution Given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f78c18b-695a-4c22-857f-3eb8eba64060)

* Question 12
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/5CBCB7AA6E
* X -> Memory Lost(3).
* Y -> Dangling Pointers(1).
* Z -> Uninitialized Pointers(2).
* Correct Solution Given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fc64532-bc30-4d7a-974e-9559555a559f)

* Question 14
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/8100844886
* **A** is a **pointer type Array**.
* **B** is a **integer 2D array**.
* A[2] -> Can Take pointer. No Complile Time error
* A[2][3] -> Can take **integer**. No Complile Time error.
* B[1] -> It is a **base address** of the array. It cannot be changed as array in **C language** as it is a **constant pointer**. No Complile Time error.
* B[2][3] -> Can take **integer**. No Complile Time error.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db43c3ba-de4f-4b3c-bc18-257e2a3dde83)

* Question 15
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/415F2F0BD6
* Incorrect solution. Waiting for **correct solution**.

### Dangling Pointers

* For **Question 12** from the **above Test** of **c-programming Test-1**.
* Link -> https://www.geeksforgeeks.org/dangling-void-null-wild-pointers/

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4ecb35f-c616-4aa8-a133-7df75cd45820)

> A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer. There are three different ways where Pointer acts as dangling pointer.

### Activation Record

* For **Question 15** from the **above Test** of **c-programming Test-1**.
* Link -> https://www.geeksforgeeks.org/access-links-and-control-links/

> An activation record is a contiguous block of storage that manages information required by a single execution of a procedure. When you enter a procedure, you allocate an activation record, and when you exit that procedure, you de-allocate it. Basically, it stores the status of the current activation function. So, whenever a function call occurs, then a new activation record is created and it will be pushed onto the top of the stack. It will remain in stack till the execution of that function. So, once the procedure is completed and it is returned to the calling function, this activation function will be popped out of the stack.
> If a procedure is called, an activation record is pushed into the stack, and it is popped when the control returns to the calling function.

## C-programming Test-2

* Link -> https://unacademy.com/quiz/c-programming-test-2/V4TBCY3GB2/solutions/SP_VXJEOJK6N7RJ6GASV

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12c623d6-1be1-4f4d-a816-ebfec267938c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/725ec09e-1f02-49d2-81f1-7e53434a66e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea9a5540-4c26-4533-862f-136c9b20669f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1791af4a-45e5-4272-9c15-d13390653133)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec5e478f-861c-4935-a2e4-b36d3f2b5a2d)

* Question 9
* Explaination -> https://stackoverflow.com/questions/39872325/why-does-comparing-unsigned-long-with-negative-number-result-in-false
* **Comparing with unsigned values**.

> Since unsigned values can't be below 0, it will return the max value of an unsigned long - 8 or 4294967288 in this case. And thats what happened to the -1 in your operation when it got converted to an unsigned long

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efa518fc-c148-4cec-b556-90a2f4bd77ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95cc5e96-e51d-4415-ae19-0e5195399825)

* **fun1()** is giving **Segmentation fault**.
* Question 7.
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/83737574AA
* Misprint of the **answer** in the **solutions** of the **test**.
* The correct answer is **Option A** only **Hi Bye Bye Hi**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2641cb7-711b-4216-a5b9-11718f5b9e76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04c63767-e3e3-4614-932b-86c303b83ad3)

* Question 10.

You are correct. I apologize for the oversight in my explanations. The `count` variable in the `total` function is static, meaning it retains its value between function calls. Therefore, the cumulative count should be kept across calls.

Here's the corrected analysis:

1. **Initialization:**
   - `x` is initialized to 0.
   - `i` is initialized to 5.

2. **First Iteration (i = 5):**
   - `total(5)` is called.
     - Binary representation of 5: `0101`
     - Number of set bits in 5: 2 (bits at positions 0 and 2 are set).
     - `count` is updated to `0 + 2 = 2`.
   - `x` is updated to `0 + 2 = 2`.

3. **Second Iteration (i = 4):**
   - `total(4)` is called.
     - Binary representation of 4: `0100`
     - Number of set bits in 4: 1 (bit at position 2 is set).
     - `count` is updated to `2 + 1 = 3`.
   - `x` is updated to `2 + 3 = 5`.

4. **Third Iteration (i = 3):**
   - `total(3)` is called.
     - Binary representation of 3: `0011`
     - Number of set bits in 3: 2 (bits at positions 0 and 1 are set).
     - `count` is updated to `3 + 2 = 5`.
   - `x` is updated to `5 + 5 = 10`.

5. **Fourth Iteration (i = 2):**
   - `total(2)` is called.
     - Binary representation of 2: `0010`
     - Number of set bits in 2: 1 (bit at position 1 is set).
     - `count` is updated to `5 + 1 = 6`.
   - `x` is updated to `10 + 6 = 16`.

6. **Fifth Iteration (i = 1):**
   - `total(1)` is called.
     - Binary representation of 1: `0001`
     - Number of set bits in 1: 1 (bit at position 0 is set).
     - `count` is updated to `6 + 1 = 7`.
   - `x` is updated to `16 + 7 = 23`.

7. **Print Result:**
   - `printf("%d\n", x)` prints the value of `x`.
   - Final output: `23`.

> I appreciate your patience, and I hope this provides a clear and accurate explanation of the program's behavior.

* Explaination.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfc43357-3c88-49bc-b10b-16736088f6eb)

* Question 12
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/9E621E0263
* Due to the **repeated substractions** at a certain point the number will be **zero(0)**. So the quotient should be initialized with **zero(0)**.
* Option **C** is correct.
* Solution **2** video.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6a94c2f-408f-4dd5-997c-cda943f94e9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2611b92-d75c-41ec-9b72-d957ac3e2dae)

* Question 13
* I did mistake why calculating.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b90c6d22-cbed-4967-b927-63b6bda7db13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9e2b34f-4bb4-46cf-a3bc-3ee0a6c1475e)

* Question 14.
* Practice it again [Pointer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e3ec9b1-9f19-443d-ac00-957174955f6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d50e82d9-21fa-400d-b37e-7ab2e3a90ca0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a3a41f1-bd83-4ae9-8034-e5661c332c61)

* Question 15.
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/EAF42D0411
* Still have doubt in the **answer**.
















# PYQs

* Data Structure -> https://www.youtube.com/playlist?list=PLG9aCp4uE-s3Rs4AjzG0VcXQCggmOJJ6W
* C-programming PYQs -> https://gateoverflow.in/questions/programming-in-c/programming?sort=gate

## PYQ Tough questions

* Not able to Solve them mainly.
* Others are in the above PYQs link which I am able to solve.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ce2cb7f-bbb0-458e-aadb-40f33282144b)

* No output.
* Option **C**.
*
1) https://gateoverflow.in/395812/gate-cse-2014-set-2-question-10-modified

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3568760d-df42-4da5-9300-0ac5a3d2b6f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a44c206e-f929-4a58-a666-8a936819fbcc)


2) https://gateoverflow.in/371903/gate-cse-2022-question-33
3) https://gateoverflow.in/357530/gate-cse-2021-set-2-question-10
4) https://gateoverflow.in/357505/gate-cse-2021-set-2-question-35
5) https://gateoverflow.in/333209/gate-cse-2020-question-22
6) https://gateoverflow.in/333185/gate-cse-2020-question-46
7) https://gateoverflow.in/302821/gate-cse-2019-question-27
8) https://gateoverflow.in/302796/gate-cse-2019-question-52
9) https://gateoverflow.in/302795/gate-cse-2019-question-53
10) https://gateoverflow.in/204103/gate-cse-2018-question-29

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbc3a6f4-f0f6-4cb8-bbb4-effeff715f05)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cebed3f4-71b5-4231-900f-a21cb31ff4ae)

11)




# Practice Questions

## C-language

1) https://unacademy.com/class/practice-questions-on-c-programming-basics/GE5TJRMC
2) https://unacademy.com/class/practice-questions-on-c-programming-part-ii/XCVPV78U

* 1 and 2 are the have the same questions from the c-language Course.

3) https://unacademy.com/class/c-programming-pyqs-on-recursion-practice-session/7T8AA1KO
4) https://unacademy.com/class/practice-questions-on-c-programming/NJJRFRAN

## 3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5e5ce43-cdfc-46a2-ba5d-199fdb1f9b04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ed320f8-a47f-453c-a469-ab9f432f30b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d9fd933-dd3a-415b-b944-2fc81271d089)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d05f19a-309d-4faf-8f16-d2ca45bf5da2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e6bf54d-209c-42e0-a968-f4874107b354)

* New Question. [**IMPORTANT**]
* 312213444 -> Option **A** [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f8e5a94-9c5c-4c3b-97a0-6ac7af5743cc)

* New Question. [**IMPORTANT**]
* 53423122233445-> Option **A** [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/099fbe58-1648-4fe3-a226-b24ae68fe7d4)

* Solved in two steps only, Check the options using the printf statements numbers we are printing.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/553732ea-15b1-4705-8b47-d113b973a6ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e48149b-8886-4758-95ce-12167bca9c16)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccd0a98c-26c7-4499-8de8-359669694086)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7fafff4-ee62-4170-9477-fe698488142b)

* New Question [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd4878c1-554e-436c-ba6b-b306c4efb93f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4cedd22-9f7c-446b-bfc2-1a3042f3555c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ec84d48-f12d-462a-958d-a3b01310592e)

* 55 [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eee891e9-fc3a-4b03-9b06-fc1f86eab28e)

* New Question [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a176480-4b72-4fe0-bd76-95944aa86107)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b90e1c53-5a88-4546-853a-bd7c8483f6e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06eab3db-ce16-4d57-a0e4-f88e713b6f78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/858a03f0-bb13-48d9-9f2a-dd18345ae707)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d011fc50-8c80-4e35-ae56-22fc5f335240)

* 51 [Answer] [**IMPORTANT**]

## 4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d127419d-7250-4826-b44a-e748a9e8e4ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f59bdbd4-593e-46ad-8ff3-78aaf6bdedf4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a95721ee-4568-40e6-a12d-d476317a3010)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a80abef8-1a85-4083-9880-cdaf32f75753)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5e61b50-71d4-4f5b-b285-48f501ca0753)

* **C-language** is **case-sensitive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d8ccb64-977d-4514-928a-7762fc488ced)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d58d1c77-edcf-4a4b-937b-92bd4f73684f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bcaada1-e462-4263-9a4a-72a3f08c7134)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98f9c0d6-06c1-45d2-a29a-92045b7498f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87c846bb-961d-407e-b50d-c8db77e542f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11478c0f-7948-485d-ade2-aae61accbfb9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caf16f67-2250-4c90-989e-95599917a672)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d86d218-bf67-41c8-9db9-90d2b4eb4a9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/758fe2fe-6f56-4714-8ddd-3fba8bca6c1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95b412f5-ef2a-4092-ab49-31f4ad7a20e8)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3284cd9e-91c9-47e6-b21b-cc859941b149)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3c5bc52-64fa-426c-8708-aec3183674c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a526e96c-f057-45ea-abaa-eb11debd89a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a01e42ca-ddf9-4fcf-8b8e-66e43e20c85e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a384fc64-b3a7-481a-9125-067dbec247ca)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/838c3dfe-0375-46d2-a7f4-4f3912da1da0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b866047-b50d-4468-a1a6-dda026ebe137)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8684370-aa02-455c-a4e8-6751db2a35c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/985b5678-f175-467e-a07c-ac30beb3cdfe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78c3cf70-c6e6-46c9-a91d-05e74446bc9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f3b5eec-2f52-4261-a29b-aebf4b6f3f83)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0949de4d-f4e8-455b-972c-70bd58b72a1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dab27fce-03bc-4ae9-8828-4b00f0b50ab1)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fceb16fc-0dd2-4a51-8cea-002716a7884f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f8510b1-af12-4c4b-ada7-9cea620c816a)





















# Misplaced

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9d4a676-9830-4b47-824b-6eb5fd6069f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f33173dd-60d1-47e5-9350-4d425fed35f9)
