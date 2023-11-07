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






















