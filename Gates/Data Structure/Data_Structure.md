# Data Structure

* YT Link(Free) -> https://www.youtube.com/watch?v=6LJSlLyjA3A&list=PLIC0AxWOdm5BvHpI_AtPqqjoADnSqcYgp&index=26

## Call By Value, reference and address Resource

* Link -> https://www.youtube.com/watch?v=cElqj8NDi5c&list=PLG9aCp4uE-s2ll7JPAzaM1pdl1ATDwDjw&index=6

## Static variable

> There is something interesting about static variable in **recursion**. In the first recursive call, the value of the static variable is assigned or if it is not there then it is initialized to zero(0). In the next subsequent recursive calls, the value of the static variable is not assigned again and again. It retains its value from the **previous recursive call**. This is because the static variable is stored in the data segment and not in the stack. The data segment is not destroyed after the completion of the function call. It is destroyed only when the program terminates.

> Only one copy of the static variable is created and shared among all the recursive calls. This is why the value of the static variable is retained from the previous recursive call.

* Resource -> https://www.geeksforgeeks.org/static-variables-in-c/

## Binary Tree

> The no. of leaf nodes present in a binary tree doesn't depend on the **internal nodes** which have **single child**. It depends on the no. of internal nodes which have **two children/child**.

![image](https://user-images.githubusercontent.com/54589605/199019468-cd279322-17dc-4425-b4bc-665e970d393e.png)
> It can be used when the location or loc is the last node of the linked list. It works.


## Prefix, Postfix and Infix

* For **Postfix to infix** conversion, we scan the expression from **left** to **right**.
* For **Prefix to infix** conversion, we scan the expression from **right** to **left**.
