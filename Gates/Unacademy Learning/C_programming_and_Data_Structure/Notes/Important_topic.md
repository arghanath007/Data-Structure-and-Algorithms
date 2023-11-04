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






















