# Data Structure

* YT Link(Free) Till Graph(DFS) -> https://www.youtube.com/watch?v=eVSwiPC0JVg&list=PLIC0AxWOdm5BvHpI_AtPqqjoADnSqcYgp&index=40

* Hashing Video(40) **Completed** -> https://www.youtube.com/watch?v=-SGDYUVyn3Y
* Hashing Video(41) **Completed** -> https://www.youtube.com/watch?v=tzwDRDKONOM
* Hashing Video(42) **Completed** -> https://www.youtube.com/watch?v=bW34DXofN7I
* Data Structure Revision **Completed** -> https://www.youtube.com/watch?v=LRdZ5HMfoyM&t=413s
* Short Revision and Notes **Competed** -> https://unacademy.com/class/short-notes-formula-revision-data-structure/3XEA79RL
* DS Gate PYQs -> https://www.youtube.com/watch?v=1BdofNKMMuw
* Subject-wise important topics -> https://www.youtube.com/watch?v=XyslKxoZ7vc&list=PLG9aCp4uE-s04zuu8lrSEAbJWEB3cdAly&index=2
* Most Expected questions from DS -> https://www.youtube.com/watch?v=tDYNZTQt8WE
* Best classes -> https://unacademy.com/a/Best-Classes-of-all-time-by-Vishvadeep-Gothi-CS.html
* Which Subject is Most Scoring in GATE-CS/IT -> https://www.youtube.com/watch?v=QOi8cLSnOY8
* Sorting Algorithms (Lecture - 1) -> https://www.youtube.com/watch?v=1I_w8tKL7FI
* Sorting Algorithms Playlist(From Lecture- 3) -> https://www.youtube.com/watch?v=secpjz3ysPs&list=PLG9aCp4uE-s2eZzS9mzyoZU5bdn3UL0BY

## DS Gate PYQs:-

* 1 (Completed) **(Linked List)**-> https://www.youtube.com/watch?v=1BdofNKMMuw 
* 2 (Completed) **(Linked List)**-> https://www.youtube.com/watch?v=qM8d8nVw4FU 
* 3 (Completed) **(Stack)**-> https://www.youtube.com/watch?v=_SpjrBqBgNE 
* 4 (Completed) **(Stack)**-> https://www.youtube.com/watch?v=hUEM9m6-sQM 
* 5 (Completed) **(Queue)**-> https://www.youtube.com/watch?v=oMb5RzLMOQc 
* 6 (Completed) **(Tree)**-> https://www.youtube.com/watch?v=37vg6IxfQL0 
* 7 (Completed) **(Tree)**-> https://www.youtube.com/watch?v=KyMqrpUWUeg
* 8 (Completed) **(Tree)**-> https://www.youtube.com/watch?v=Tz-p8klADWA
* 9 (Completed) **(Tree)** -> https://www.youtube.com/watch?v=3XXArtmY8RY
* 10 (Completed) **(Binary Search Tree)** -> https://www.youtube.com/watch?v=NLKS9yB7My0
* 11 (Completed) **(Binary Search Tree)** -> https://www.youtube.com/watch?v=kNp47J_SGsA&t=32s
* 12 (Completed) **(Binary Search Tree)** -> https://www.youtube.com/watch?v=A-VcMqzfVWw
* 13 (Completed) **(Hashing)** -> https://www.youtube.com/watch?v=mFh_yTxIDDM
* 14 (Completed) **(Hashing)** -> https://www.youtube.com/watch?v=804ML4KSmVc
* 15 (Completed) **(Miscellaneous)** -> https://www.youtube.com/watch?v=y0ZRwcOPTgg



![image](https://user-images.githubusercontent.com/54589605/199019468-cd279322-17dc-4425-b4bc-665e970d393e.png)
> It can be used when the location or loc is the last node of the linked list. It works.

## Call By Value, reference and address Resource

* Link -> https://www.youtube.com/watch?v=cElqj8NDi5c&list=PLG9aCp4uE-s2ll7JPAzaM1pdl1ATDwDjw&index=6

## Static variable

> There is something interesting about static variable in **recursion**. In the first recursive call, the value of the static variable is assigned or if it is not there then it is initialized to zero(0). In the next subsequent recursive calls, the value of the static variable is not assigned again and again. It retains its value from the **previous recursive call**. This is because the static variable is stored in the data segment and not in the stack. The data segment is not destroyed after the completion of the function call. It is destroyed only when the program terminates.

> Only one copy of the static variable is created and shared among all the recursive calls. This is why the value of the static variable is retained from the previous recursive call.

* Resource -> https://www.geeksforgeeks.org/static-variables-in-c/


## Double Ended Queue

> In a general double ended queue, we can **insert** and **delete** elements from **both the ends** i.e the front and the rear end.

* There are **two** types of Double Ended Queue:-
  * Input Restricted Dequeue
  * Output Restricted Dequeue

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

### Example
![image](https://user-images.githubusercontent.com/54589605/200469974-fb4526d0-6dc5-44fb-aba2-ca36e664bf2b.png)

### Balance Factor

> Do not count the no. of nodes in the left and right sub-tree. Instead, count the **height** of the left and right sub-tree.

> After **insertion** or inserting a node into an AVL tree, we check the **balance factor** of the **parent** node of the **inserted node**, then we check the **balance factor** of the **parent-parent** node and so on, till the **root** node.
> Whenever we find an **unbalanced** node, we **rotate** it.

## LR-Imbalance

> It is a **double** rotation and not a single rotation like LL or RR imbalance. First we have to do **RR** rotation and then **LL** rotation. **RR** rotation is done on the **left child** of the **unbalanced node** and **LL** rotation is done on the **unbalanced node**.
> After the **two** rotations are done, we will **check** if the tree is now **balanced or not**.
> 
### Example
![AVL_LR_imbalance](https://user-images.githubusercontent.com/54589605/200483462-3e2182a0-23d4-44d9-a7c8-9fd192a79e40.png)

![AVL_LR_imbalance_1](https://user-images.githubusercontent.com/54589605/200483510-bc8a63de-c79e-44f1-959d-7ae8f2423352.png)

![AVL_LR_imbalance_2](https://user-images.githubusercontent.com/54589605/200483496-b2dc10bc-0f85-4466-a891-fd941e534e79.png)

## RL-Imbalance

> It is a **double** rotation and not a single rotation like LL or RR imbalance. First we have to do **LL** rotation and then **RR** rotation. **LL** rotation is done on the **right child** of the **unbalanced node** and **RR** rotation is done on the **unbalanced node**.
> After the **two** rotations are done, we will **check** if the tree is now **balanced or not**.

### Example
![AVL_RL_imbalance](https://user-images.githubusercontent.com/54589605/200483694-8799f364-4281-4ace-9e7e-b2f779517076.png)

![AVL_RL_imbalance_1](https://user-images.githubusercontent.com/54589605/200483703-cf4e2685-a0b0-43c1-aa1a-5f4f7344d8a8.png)

![AVL_RL_imbalance_2](https://user-images.githubusercontent.com/54589605/200483722-ebf90fef-7452-4232-9406-a7bd183b0a18.png)

## Heap

> The heap which was created by **inserting one element at a time or by performing one-By-One insertion** is **different** from the heap which was created using the **Heapify** function.

### Example using Heapify
![Heap_heapify_max_3](https://user-images.githubusercontent.com/54589605/200585344-d178596f-aa56-491e-9dbf-da4d7af8fb02.png)

### Time-Complexity

* O(n),  where 'n' is the no. of insertions

### Example using one-By-One insertion

![Heap_max_insertion_1](https://user-images.githubusercontent.com/54589605/200587055-072eaa81-1e11-430f-9460-351de8e8f8bb.png)

* O(nlogn), where 'n' is the no. of insertions

### Heap sort

> For **Ascending order**, we use **Min Heap** and for **Descending order**, we use **Max Heap**.

## Graph

![Graph_DFS_question_HW](https://user-images.githubusercontent.com/54589605/200839713-50a50e14-ac51-4ab5-a555-bdb11ea2825b.png)

> As the **sequence of Adjacent edges** of the **Vertex** are mentioned in the question, we have to follow these sequence. Hence we have to select **2** before we can select **3** for vertex **1**. 
> **Location** of the Hash-map is **user generated**.

## Hashing and Collision

> In Hash table, the searching is **Circular**.
> If the **collision resolution technique** is not mentioned in the question, then we have to use **Linear Probing** as it is the **default** collision resolution technique for **closed hashing**.

### Linear Probing
> In **Linear Probing**, we **search** for the **next** empty **slot** in the **hash table**. If the **next** slot is **empty**, we **insert** the **key** there. If the **next** slot is **not empty**, we **search** for the **next** empty **slot** and so on.

#### Disadvantages of Linear Probing
> We are linearly searching for the **next** empty slot. Hence, the probing for the **next** empty slot is **linear** and so the **count** or the **amount** of probing required also **increases**. Hence, the **time complexity** of **searching** for the **next** empty slot is **O(n)**.


* For this reason only, **Quadratic Probing** was developed.





