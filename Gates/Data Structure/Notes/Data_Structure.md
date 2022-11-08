# Data Structure

* YT Link(Free) -> https://www.youtube.com/watch?v=4kRlNodMLSY&list=PLIC0AxWOdm5BvHpI_AtPqqjoADnSqcYgp&index=30

![image](https://user-images.githubusercontent.com/54589605/199019468-cd279322-17dc-4425-b4bc-665e970d393e.png)
> It can be used when the location or loc is the last node of the linked list. It works.

## Call By Value, reference and address Resource

* Link -> https://www.youtube.com/watch?v=cElqj8NDi5c&list=PLG9aCp4uE-s2ll7JPAzaM1pdl1ATDwDjw&index=6

## Static variable

> There is something interesting about static variable in **recursion**. In the first recursive call, the value of the static variable is assigned or if it is not there then it is initialized to zero(0). In the next subsequent recursive calls, the value of the static variable is not assigned again and again. It retains its value from the **previous recursive call**. This is because the static variable is stored in the data segment and not in the stack. The data segment is not destroyed after the completion of the function call. It is destroyed only when the program terminates.

> Only one copy of the static variable is created and shared among all the recursive calls. This is why the value of the static variable is retained from the previous recursive call.

* Resource -> https://www.geeksforgeeks.org/static-variables-in-c/

## Binary Tree

> The no. of leaf nodes present in a binary tree doesn't depend on the **internal nodes** which have **single child**. It depends on the no. of internal nodes which have **two children/child**.

## For traversal(pre, post, in) of trees

> The Run-time complexity would be **theta** of **n**.



## Strict Complete Binary Tree

> Every strict complete binary tree is a complete binary tree but not vice-versa.


## Prefix, Postfix and Infix

* For **Postfix to infix** conversion, we scan the expression from **left** to **right**.
* For **Prefix to infix** conversion, we scan the expression from **right** to **left**.

## Searching

> Whenever there is a case/need/requirement for searching, always remember that **Stack** and **Queue** will never be used for searching.

## Binary Search Tree

> If only **pre-order** traversal sequence is given of a BST, we can draw the tree -> **YES**, unique -> **YES**, insert the values from **left to right** **one by one** into the tree.

### Example
![image](https://user-images.githubusercontent.com/54589605/200232435-1d659b6e-24e8-4f32-8d29-417c0c48a9ae.png)

> If only **post-order** traversal sequence is given of a BST, we can draw the tree -> **YES**, unique -> **YES**, insert the values from **right to left** **one by one** into the tree.

### Example
![image](https://user-images.githubusercontent.com/54589605/200236133-18b6aeb5-e644-408e-a10d-b4f3a043f283.png)

### Question
![Binary_search_tree_inorder_preorder_question_3](https://user-images.githubusercontent.com/54589605/200238352-a3206274-d4ae-46d4-9e4a-a6ee83706f21.png)

![Binary_search_tree_inorder_preorder_question_3_1](https://user-images.githubusercontent.com/54589605/200238609-fc827d3d-0513-4cae-acec-ed1e94bfb5da.png)

> In option A, **6** should have been traversed first as it is in the left sub-tree of **7** compared to **8** which is present on the right sub-tree of **7**. That why it is the wrong option.

> In option B, **4** should have been traversed first as it is in the left sub-tree of **3** compared to **6** which is present on the right sub-tree of **5**. That why it is the wrong option.

> In option C, **1** should have been traversed first as it is in the left sub-tree of **2** compared to **4** which is present on the right sub-tree of **3**. That why it is the wrong option.

> In option D, all of the values are placed/traversed according to their left and right sub-tree. That's why this is the **right option**.

## AVL Tree

> When there is a **leaf** node, the **balance factor** is **0** as the left and the right sub-tree are **empty**.




