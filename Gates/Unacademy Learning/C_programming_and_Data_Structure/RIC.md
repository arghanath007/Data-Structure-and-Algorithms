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

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47dfdbfa-4a9d-44ae-824d-45fd90910502)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68fb8b94-d3ce-4c7e-8e9a-d9628fe04a7b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/017a1650-a26b-4dd1-b819-9b7791f643f0)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ff5721a-0430-4592-8cad-6988d88de6df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5887708c-5d83-403c-a3c5-f27dfd1bb7ee)

* If the pointer **L** is not there.
* Option **A and C** are **correct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a6974b8-35a2-4957-b744-bfcb87933f8f)

* What is the output?
* Question.
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/815ac462-ada4-4a24-8a88-0fc1d4401a65)

* Left part of the **max()** is evaluated first and then the right part is evaluated.
* First complete the **left one** and then complete the **right one** of the **max()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/984e2265-7810-45d4-8a5b-16ae1e26be90)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7ac33a3-224e-4bdc-a860-df7fed2bd8df)

* Pointer story.
* **p** is a **pointer variable** from where **array(a)** came.
* p[1] -> *(p + 1).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e06d4140-02f9-4c5c-b414-5d983ff0c88f)

* Solution.
* When **recursion** is going on, then from **one function call** to another **function call**, what will change?

> Function name will not **change**. Parameter names also will not **change**. No. of parameters will also not change. Only **value** will change.

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68d5e00f-0d25-4de1-b44e-1ee36eb9bbe7)

* Recursion with small pointer [Expected Question]
* Recursion with small static keyword [Expected Question]
* One of them will come.
* Array is not going, **address** of the **1st element** of the array is going. **a++** is not allowed but **p++** is allowed. **a + 1** is allowed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3efb26ea-fc97-42c7-b5f5-03257d6d8250)

* Question.
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee04f2aa-dbac-494e-96dd-e563714a7a57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6008c26a-9a9a-41b4-829b-78ff6067c633)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d79460c-3e7c-4f24-908f-9f382ff7fd84)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bd47321-58b0-4cd7-8861-49fa7b5199a8)

* If there is return *p; in the **f()** then also we will get the **same answer** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2bd8b61-e7a2-4706-bc94-61d8445ef6e6)

* Question
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12b681ad-cffa-4b77-b235-dd3306ec452d)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87dcb7ae-105e-4fca-90c8-50b307ff8678)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a84779a-da5d-459b-92d9-83002744cd0e)

* Solution
* Take array only with **50 slots**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c94363f-fd40-4276-85df-0aa4f87559d6)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f86f550f-4d3c-4a26-9c02-dd0c37cb7261)

* Question
* Option **A**.
* T(n) -> No. of minheaps possible with **n** elements.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2490f601-8342-4873-9a0e-d091c09b4b6c)

* No. of min-heap calculation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1df23b2d-65d7-4659-b873-36de8723c911)

* T(7)
* Total is **7** people. **1 person** is **roo** leave it. We have **6 people** left. Out of the **6 people**, **3** people will go to the **left side** and **3** people will go to the **right side**.
* **3** people required on the **left side**. Total is **6** people. So it is **6C3**.
* After getting the **3 people** for the **left side**, how many **min-heaps** are possible. Those are for the **left side** which is **T(3)**.
* 6C3 -> How many ways to select **3 people** for the **left side**.
* So it is **6C3 * T(3) * T(3)**.
* 6C3 * T(3) * T(3) -> 20 * 2 * 2 -> 80.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d28e9ce-3b6e-4868-979e-69bfc40f4917)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6922f95e-ad57-4927-a6d0-50328b1147c4)

* T(4).
* We have **4** people, **1 person** is for **root**. So we have **3 people** left. **2 people** going to the **left side**. So it is **3C2**.
* We have **1 person** on the **right side**.
* So it is **3C2 * T(2) * T(1)**.
* 3C2 * T(2) * T(1) -> 3 * 2 * 1 -> 6.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d47d6858-d656-4461-9866-76ba7bc2fecb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56971af0-2973-4929-a4b8-83934d6b2834)

* Draw the **tree** with the **no. of nodes** would be **easier** to calculate and get the **formula**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b198c736-3198-4e84-8208-de008bacf3f1)

* T(5).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b018bbb5-9b17-4c56-8670-485795e4bff3)

* T(6).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1fbadbe-d8bd-4ba7-afd7-7676423232b6)

* Sir mistakenly wrote **T(2) = 2**, it should be **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70642943-3b4c-454e-8533-07d165717203)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77e384d5-2f3d-4498-a99a-1da645e1b43c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fb4b1e9-3c9e-4dcb-9d2d-61b95e16861a)

* T(4).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48298ae7-716c-4592-bd42-8e6f5bfeafae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3892bdac-1308-42c4-95ba-02c144aabcbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3ae32fd-a311-422d-bf54-807a8b39e900)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45df53ef-8a1a-48ab-a8e1-98a5e842afa4)

* **K** is the **left hand** side people. [Left Hand side(LHS) no. of people]
* (n - (1 + K))  -> Right Side people or No. of elements on the right hand side. [Right Hand side(RHS) no. of people]
* **1** is for counting the **root**.
* (n - 1)cK -> It indicates the **no. of ways** to select the **left hand side** people.
* T(K) -> No. of min-heaps possible on the **Left Hand side(LHS)**.
* T((n - (1 + K)))  -> No. of min-heaps possible on the **Right Hand side(RHS)**.
* **T(n)** = (n - 1)cK * T(K) * T((n - (1 + K))).
* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/334b63a4-edcd-4c6c-8872-e84b6c3efd17)

* Option **A**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e9555cc-3dec-4976-881e-616ad1fe2b4d)

* Question.

## challenging-problems-ii (2)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a45e5b81-efa9-4db8-b375-ea02814bc62b)

* Question.
* Option **B and D**.
* The function will terminate if we send **n** in the form of **powers of 2**.
* **Powers of 2** are **infinite**.
* For many people the **function f()** will not terminate also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52c47ab6-a5b0-4f30-a7d3-9563d087a361)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f84ebe5-19d0-44cb-be49-8ed83cdb4e49)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dbb0364-e1de-46b3-b810-3cb63d7be282)

* Solution.
* If it is a **C-program** and all then it will gurantee **terminate** because of **stackoverflow** condition.
* In **programming** terminology then **everyone** will terminate.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e76550d-1f7b-42d7-89d3-c91f97fb2f33)

* Question.
* Option **A**.
* **A** is a **1D array** and it is expecting **pointer**.
* char *b, what is **b** expecting?

> It is expecting an **address** of a **character**.

* char *b = "string";

> If more **characters** are givenn then there is **no problem**. Take what is **required**. Ignore the **rest**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec37389b-c601-47fb-b899-dee692e4cb54)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/476eed1e-ed20-4c88-968b-2a5c0fb573eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d31f39f-1d64-4ff3-975b-a46324c7b4bf)

* Solution.
* B[10][10] -> What is the problem?

> There are **10 rows** and every row contains **10 columns**. 

* *A[10] -> What is the problem?

> There are **10 rows** and every row contains **non-uniform** no. of columns.

* [**IMPORTANT**]
* Using **A** we can implement **B**, as **A** is the **superset** of **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/befbbef4-a459-469e-98df-f0acdc483eba)

* Array **A and B** both are **2D arrays**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d89fda7b-fc94-4183-98e5-1c5c84da8fe8)

* 1,2 and 4 are possible.
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1502a8a3-e10a-43eb-b78c-49ea12ea2c80)

* Doubt
* Using array **A** we can implement **2D** array. Whatever **B** can do **A** can do but whatever **A** can do, **B** cannot do.
* **B** is continuous, **A** is not continuous.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09d6287a-368e-4094-b9ce-167a2e1f0824)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a6c3d98-3c7c-478c-9896-dafc889712fb)

* Question
* Option **A**. [55]
* For more than **1 function call**, draw a **tree** it will become **easy**.
* f1(5) = 5.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5947b7c3-51b9-499d-b8b0-e175a5d9fa75)

* Those many **push** operations that many **pop** operations.
* Going back **i** value is not changing because of **static** keyword.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30397600-1065-49f2-9f60-d1db5792ed9b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e56ff2bb-544c-4530-b4e0-12cb4daf5b42)

* If **static** is there then **memory** is created at **compile time**. Compiled only once.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1140eacb-90e3-47d9-a51b-c6595a683031)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f55dd486-a7b8-4c9a-b15c-ea01560985b4)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a9bfa62-dc1e-42fc-b110-8dffffffa0b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fa4d1d5-297e-4064-8ecc-a62a3f4abee3)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c9b7217-4bd9-41a5-a5c6-b3f1b6b8592b)

* Question.
* T1 -> S1
* T2 -> S3
* T3 -> S1
* T4 -> S2, S4.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c72abc59-bc69-4486-8d2c-f0b86dba8beb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/966f3623-1047-4f34-b706-3f3236287957)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/060b2fa9-2778-43bd-a26d-d476e1fc2765)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72574aea-7cb8-4820-abf3-4290d1eedf05)

* Option **D**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93994364-e284-459b-8752-b0f18e708aeb)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3116c18e-eb72-4cb8-beff-fe6fc1fd66a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff28a7b6-e824-46a5-b0aa-828ac4a5a07d)

* Option **C** -> 13.
* Some dependency there then be careful with **post-incrementation**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f875379-0cbf-49f2-afcc-0d1f892042f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a32b987-2e53-42cf-a350-7fd14d5d02aa)

* Question.
* Problem with the **first code** is that we are getting **Dangling Pointer**.
* In the **second code**, inside **px** we didn't keep any **address**. If we don't keep any address then **by default** we have some **garbage value**.
* *(garbage value) -> Some **segmentation error/fault** may come.
* For anyone if we want to use **star(*) i.e pointer** then we have to check one thing which is it is **Null or not**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6be2ba05-c681-4c89-af04-767c6ee74ae1)

* Verify if it is **NULL or not**.
* If it is **NULL** then don't **say or give star(*) i.e pointer**.
* [**IMPORTANT**]
* So **second code** maybe will give **error**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a7376d5-4e8d-4409-8fe8-755a87ea6958)

* **malloc()** not only creating memory, where memory is created, it will return that address.
* **malloc()** returning **void pointer**. [**IMPORTANT**]
* It is returning **void pointer** which is **type casted** to **integer pointer**. Integer variable address came which is stored in the variable **px**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e011e01-b9e6-486c-af3b-5794bafd2899)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4969c076-e669-4513-b0de-aef2781bd8be)

* **malloc()** will return the **address** if **space** is available.
* If **space** is not available, then **malloc()** will return **NULL**. [Very rare incident, alot of space is available nowards]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19054609-7abb-4366-b24c-a5e8ef568438)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53270ae6-cf0a-46e0-81ae-bb618b373fc8)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7484d26d-5407-4dbc-86e4-ff7ff9b7f6b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c8fbb86-ffb8-4a17-9263-f37a1d6de1cf)

* [**IMPORTANT**]
* All of the **three codes** are creating problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9771c845-089b-4174-980b-cfd41b0a8f30)

* Factorial of a number.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/196687d3-b378-489c-bb04-3097376611a9)

* Asymptotically they are **same**.
* In the second one **push and pop** operations are **extra**.
* Comparing **both** the **first one** is **better**.
* Mathematically **first one** is **better**.
* **Space** point of view, **first one** is **better**.
* **Dangling Pointer** -> We deleted some memory and still we are pointing to it, that is called as **dangling pointer**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1677ec5-e175-4852-a79c-267bf7669b72)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be6885ec-f3a9-4d65-85a2-99da0f799541)

* Stack -> Within function
* Static -> Total Program -> In **static**, we do not have any control. Total program is over then it will vanish. In-between we cannot do anything. **Allocation and de-allocation** is done by the **compiler only**.
* Heap -> Total Program -> In the heap area if we create whenever we want we can **de-allocate** the **memory**. It is within **our control**. If we want to **de-allocate** the **memory** in-between we can do so. Anytime we can **de-allocate** the **memory**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e74656d-9c9f-4556-b725-7c51f15190dd)

* Question.
* Next Class

## challenging-problems-iii (3)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c764f84-4de1-4842-8658-e62ccf2acbb1)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0bc73ff-f804-4a1c-aab3-11f72fa0f1bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8326ae68-d898-44be-8332-265875691d52)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/948a681d-7ae8-431b-9bee-5edbc41ee5f9)

* Solution
* Output -> 3323321. [1]
* For more than **1 function call** please draw a **tree**.
* It is a **recursive** program.
* Recurrance Relation -> T(n) ['n' people]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7155d332-ccae-4255-88b1-f5bcffc14ff0)

* T(0) = 0.
* T(n) = 2T(n-1) + 1
* As only one **printf** statement is there so **only one character** is printed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5fb6c991-0b87-4bc3-aad8-d2b16f79c7c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfc3e8b7-1cdd-4094-a8ab-373d48eec4c6)

* T(0) = 0. So we **removed T(0)**.
* No. of characters printed -> (2^n) - 1. [2]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8d85072-e5f3-43d7-8bd5-3882b9122f5b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/275dbea1-5b6a-49e1-8014-eda9f48bf065)

* Matching properly.
* T(n) = 2 * T(n-1)  + 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01a2364e-ac80-4035-adc1-bdf67105c079)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93617a8b-790a-4252-83dc-190da22f8597)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e65dc3e7-4add-4b75-986b-7c1ef0fd6562)

* Time Complexity -> 2 ^ n -> O(2 ^ n).
* We will get **n** level tree.
* Space Complexity -> No. of levels in the tree -> O(n)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a1c1d62-d2fa-4841-8708-e95529dbf141)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e66dd960-6daa-493c-8f71-25e3d11cd5ed)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60f9502e-e649-4a42-a3c0-52dd3fb7e4b9)

* Question
* Option **D or 4**.
* Union -> n * log n [n ^ 2, if we don't do sorting first]
* Intersection -> n * log n [n ^ 2, if we don't do sorting first]
* Membership -> Some is member of the list or not -> **n**. [One scan required]
* Cardinality -> Counting no. of people -> **n**. [One scan required]
* Between **n * log n** and **n ^ 2** we are taking **n * logn** for **union and intersection** because **n * log n** is **better** than **n ^ 2**.
* Arbitrary Order -> Not sorted order.
* Between **Array based merge sort** and **linked list based merge sort**, **linked list based merge sort** is **better**. It is because **Array based merge sort** is **outplace** and **linked list based merge sort** is **inplace**.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47980b48-956b-4245-bcdb-5e11f45ea1bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f07f4ac-a17f-4b94-ab94-0da5f0bfc756)

* If it was mentioned that they are in **sorted order** then **union and intersection** will take **n** time or **O(n)**. We will apply **merge algo** to them.
* As nothing is mentioned so we will consider that they are not in **sorted order**. So **union and intersection** will take **n * logn** time or **O(n * log n)**. We will have to first sort them using **merge sort** which will take **n * log n** time and then we will use **merge algo** to **merge them** which will take **n + n -> 2 ^n** time. So the overall is **n * log n + 2 ^ n -> n * log n**.
*  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24c92425-c646-4652-85a4-7a8377665749)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ac915c7-3eb3-43ec-b23d-808f07623a1c)

* Slowest -> Taking **more time**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ace0c17-651b-4524-93f3-1613bc55b12b)

* Question.
* [**IMPORTANT**]
* We have **5** elements in the **array**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10455c35-9038-4305-a954-2365f0416c4c)

* integer -> 2B
* pointer -> 8Bytes
* struct test size -> 2 + 8 -> 10B.
* Name of the array -> st.
* Size of the array -> 10 * 5 -> 50B.
* printf(st) ->  1000. [Prints the base address of the array(st)]
* printf(st + 1) -> 1010.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc5653ec-e31b-41b7-96f8-61ced0f90ca6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ac010ec-591a-44d6-8551-eab6f970381a)

* st[3] or *(st + 3) -> Way of selecting the **3rd element** from the array.
* st[3] -> Shortcut
* *(st + 3) -> Actual.
* If it is an **integer array** and we go inside, we don't require a **dot**.
* As it is a **structure array**, so a **dot** is required.
* This is the **only different** between them(integer and structure array). [**IMPORTANT**]
* **c** is expecting an **address** of a **character**. [**IMPORTANT**]
* We are given **string**.
* **String** is given means that we are giving the **address of the 1st character**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5518cc6-ca7f-4064-9b23-aad1ef2533b2)

* printf(st + 4) -> 1000 + 4 * 10 -> 1040. [Skipping 4 people]
* printf(*(st + 4)) -> *(1000 + 4 * 10) -> *(1040) -> Inside we have two people.
* printf(*(st + 4).c) -> *(1000 + 4 * 10).c -> *(1040).c -> 6000.
* printf("%s", *(st + 4).c) -> From **6000** onwards print everything -> brother. ['brother' will be printed until null character(\0) comes]
* printf("%c", *(*(st + 4).c)) -> *(6000) -> b.
* %s -> For address
* %c -> For character.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee6cbeeb-b71a-4a06-bdea-0511c27df753)

* p -> 1000
* p + 1 -> 1000 + 1 * 10 -> 1010.
* (),  arrow(->)  [() and arrow(->) have the same precedence. They are from **left to right**] [**IMPORTANT**]
* (*p).c OR p -> c [They are **same**]
* (*p).c -> Actual
* p ->c [Shortcut]
* *p.c -> As **brackets** are not there, so **dot(.)** will be done **first**. As **dot(.)** having highest priority.
* (*p).c -> As **brackets** are there, so **inside brackets()** will be done **first**. As **brackets()** having highest priority.
* Between star(*) and dot(.), dot(.) has the highest priority.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/438d1a7e-5a64-42b2-956e-77f51ce6dd04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50c04375-adb2-4934-a8ff-b9985272f2ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51f5b89c-3da6-47e9-a412-b9837eb210db)

* p[0].i OR *(p + 0).i [They are **same**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86677be1-1a5e-416e-b5c6-3b25afda3d8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78c30926-2fa2-4cb7-9266-4aa718c5be36)
![Untitled](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c60de2c6-683a-45e1-a22e-ee543997db34)

* Option **B**
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bd99e01-4db4-4617-83dd-5a5586020eec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2d9bda7-0877-4dc8-95f6-bbbcb9ec8675)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cc4f2d7-7ffe-4d38-9177-f0929951f01d)


* Precedence used in the **above question**.
* **dot(.) and arrow(->)** have the **same precedence**. They are **left to right** associative.

![image](https://uadoc.uacdn.net/common/K9HD816WU7/1637019287Q9FYWH.png)
![1637019287Q9FYWH](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/785fcce6-f620-4a03-8384-d97a0820447f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30c15cf9-650e-4b53-b058-09dcc58a660f)

* Precedence list [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/311d137d-bda9-436d-b652-0d070e732f10)

* For **Pre and post**, it is from **right to left** precedence. So **P++** will be executed first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39f7af03-3716-4607-aea9-4f128fbed1d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4cb49e0-9287-428b-8732-07e2fdccc4b9)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cab4337-4d4d-431c-8e38-57bc4ed6d628)

* Options.
* Link -> https://gateoverflow.in/3594/gate-it-2006-question-51

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e761f77-70a1-43f6-8ca7-6201623d29f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d10d49cf-3f39-44c2-9166-79413fb99643)
![image](https://gateoverflow.in/?qa=blob&qa_blobid=7889409222220005821)
![80797ee1-b1bc-4d5c-b92b-9b5ec72de22a](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c55cd93-deda-4357-96e9-989343471aeb)
![Untitled](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6db4ac99-b2f0-44cc-8a31-e180cb8652af)

* Solution.
* [**IMPORTANT**]
* Array going means **address of first element** going.
* Aray passing is nothing but **sending base address**.
* **x** is an array in the **main()**.
* In the **print()**, **a** is a **pointer variable**.
* We are passing **4000** address to **a** and **a** is pointing to address **4000**.
* **a** is an **integer pointer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e01c059-5059-47ed-890e-c002d41a87eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb1598d9-0bde-47e4-bad1-d623e573bd14)

* **Bracket** indicate **one star(*)**.
* int *a[] = int **a [They are **same**]
* **Array** never go.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b242dde6-b79d-4bd3-9f72-5de2212f92ae)

* **a** got **4000** and inside **4000** there is another **address**. So **double star(*)**. It is a **double pointer**.
* **a** should be a **double pointer**.
* In the **printf** statements **a** is a **double pointer** or a **pointer variable**.
* **Double pointer** -> *a[] -> **a. [Representation] [**IMPORTANT**]
* a[0][2] -> *(*(a + 0) + 2).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab322109-1bff-404f-92bf-ce85fee75895)

* We got **8** as the output for the **first printf** statement.
* *a[2] -> Bracket has higher priority than **star(*)**. So **bracket** will be done first.
* *a[2] -> *(*(a+2)).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43ea7d84-5cd5-424e-b8e1-360eaf951526)

* We got **-12** as the output for the **second printf** statement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5509883-228d-4fef-acac-1be5585fe09a)

* From doing the **first two printf** statements we got the **option**. No need to do the rest.
* Option **A**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eab0477-6b0d-49ba-8d53-3443978ee5a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6e0205f-5504-4dfe-ad05-41c61d26ff04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7cc5c61-e4c3-430d-a47f-7260a907d025)

* a[-1][+1] -> *(*(a-1) + 1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c220ecf9-2875-46b8-9b4d-c1a1aeb989cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5156698-585c-4cd4-82ef-01a22e778059)

* Take care about **priorities**.
* [**IMPORTANT**]

































