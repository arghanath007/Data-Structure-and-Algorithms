# C and DS

## Challenging Problems-I (1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d9f54d0-3c36-4c7d-b91d-749ba6c26044)

* 1
* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d41b85e1-f76b-4d73-ac18-451790ae760e)

* Option **B**.
* Balanced Binary Search Tree -> AVL tree.
* The gurantee in **AVL tree** is that the **no. of levels** are **Log n**. [**IMPORTANT**]
* In the question it is mentioned that **no. of leaf nodes** is **n**. So the **no. of nodes** is **(2 * n)**. Forget about **-1 and +1**. Half of the nodes are **leaf nodes** and half of them are **non-leaf nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c39f7de7-bb84-48ff-af74-4b79e729e372)

* Let the **no. of nodes** be **31**. So **31/2 = 15.5**.
* Ceil(15.5) -> 16 [No. of leaf nodes]
* Floor(15.5) -> 15 [No. of non-leaf nodes]
* If **no fraction** then **leaf and non-leaf nodes** are **50-50**. This is for **complete Binary Tree**.
* It is **AVL** tree. Few gaps maybe there.
* For **AVL** tree we cannot say **mathematically** that **leaf and non-leaf** are **50-50**. Asymptotically they maybe **50-50**.
* **AVL** tree having one feature which is **height balancing/balanced tree**.
* **AVL** tree is **height balanced** guranteed and not **node balanced**. **+1 and -1** that is fine. [**IMPORTANT**]
* For **Complete Binary Tree(CBT) or ACBT**, we can say **50-50**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2682616-30e4-42ed-9f01-d9162b56740b)

* If **leaf nodes** are **n** then **no. of non-leaf** nodes are approximately **n**. So totally **2 * n**. We are talking **asymptotically** here. We cannot do **mathematically**. In-between there are **gaps** in the tree. [**IMPORTANT**]
* In **ACBT and CBT**, we can say the **above** mathematically as well. In-between there is **no-gaps** in the tree.
**---------------**
* Question was asked in a **different way**:-
* **If** it was only **Binary Search Tree** then the **no. of levels** is **n**. We may get **bigger answer**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/325cb20e-bb94-4ba4-b632-44b99ff42d7c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0eb2da25-4298-4d86-8f9c-243ec65ec774)

* If the **last level** has **n** nodes.
* We are dividing the nodes **by 2** every level. So in the **1st or the root level**, the **no. of nodes** we have is **(n/2) ^ (log n base 2)**.
* Keyword -> **Balanced Binary Search Tree**.
* **AVL** tree means comparing **root**, **left side** is **smaller** and right side is greater.
* Question hasen't asked about **values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9291ff3-193a-476b-bcbb-7b41073c69f4)

* It will go to **every node** and to every node(x) they will apply the **g(x)** function and calculate **g(x)**. For **each node**, **g(x)** is called. So **g(x)** is called for approx. **2 * n** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a555235a-c31f-44e7-be86-52381e0d1688)

* At the **last level** for **1 person** the cost of **g(x)** is **0**. So for the **n** people at the **last level** the cost of **g(x)** is **n * 0 -> 0**. So at the **last level**, the total cost is **0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a2d3b1a-fd05-4398-8413-c5436fdc96bb)

* This is the advantage with **balanced tree**.
* If it is not a **balanced tree** then we cannot say in a **particular level** that every single nodes **costs the same**.
* Because of **balanced tree** we can say the **above**.
* Costs keeps on **doubling** when we are **increasing levels**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0d850ec-38b8-4465-9d55-541c5c404052)

* Every level we are going **above/up** the cost keeps **doubling**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bee5bef6-a7a3-4106-9dad-50843e827de5)

* First Level -> ((n/2) ^ (log n base 2)) * (2 ^ (log n - 1)).
* All cancellation over and every level **n/2** is **left out**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50f43269-27b9-49a8-b29c-08fbccb85fe4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e3845e2-4a14-44a2-a34a-c3e5f4655eec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c3af61c-855d-4b24-8a41-d573f625b99c)

* Cost at each level is -> n/2.
* No. of levels -> log n [For AVL tree]
* (n/2) * log n -> O(n * log n) [Approx] [Answer]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9ae7ff7-a7fa-4e73-8bcb-fafadb32c9dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d18263e-ca86-4bbc-b54a-b04cc38b3eed)

* Do we know no. of levels or not?
* Do we know leaf node or not?
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40607f8e-6fc6-4a72-854e-161d9dd83fad)

* But sir g(x) is min of left and right node so WS(worst case) is nlogn only
* Instead of **worst case**, **best case** is there.
* **Answer** will be **same only**, we cannot change the **tree**. [**IMPORTANT**]
* It is a **balanced tree**, we cannot take **n** levels.  [**IMPORTANT**]
* In **AVL** tree we will see **few gaps**.
* **AVL** tree and **Complete Binary Tree (CBT)** are almost similar. They are **asymptotically same**  but **mathematically** they **differ** a little. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79a6a41b-3efe-4fc9-bf6b-1fbc676780eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df5db5a6-1aab-493c-83b0-5f24b074516d)

* **Yes** it will not affect.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f7e228e-d291-41e2-a6a5-70ec7f059952)

* For **Best and worst** case it is **O(n * logn)**. Everytime it is **O(n * logn)** only. It doesn't matter which **symbol(Asymptotic notations)**. Everytime **same answer**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bc298e2-d9be-4d8b-93f4-6cceaeb86b1a)

* All of the **options** are in **Big-O** notation.
* Multiple Options.
* After getting the **answer** as **n * logn**, please be **very careful** with the **options** which are the **symbol(Asymptotic notations)**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b2ef2f1-c400-470b-a56e-c90bae68f889)

* Question
* 2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1eb9a668-5c03-4ecb-9842-0c43e8b01ae9)

* Option **A**.Ch














































