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

## challenging-problems-iv-doubt-clearing-session(4)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83ff4928-80ba-4a91-bb5b-97b7607a795c)

* Question
* Ascending order -> Elements maybe same.
* Increasing Order -> Elements will be different.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cbf4392-58ce-40cb-b91e-129f0c34374a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a66f6f0-e06a-4102-a14a-d3ebff28a8d2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04aed4c3-784a-4364-b263-8a6c9ab9a078)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b02b7286-f6a3-43d5-934f-ad16b6c43fe8)

* Solution
* Option **B**.
* Worst Case time complexity -> Only one scan -> O(n).
* Best Case time complexity -> O(1).
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dcf89d4-9a4b-4a6e-b655-fa2b5ecae47f)

* Question.
* As it is a **balanced BST** so the no. of levels is **log n**.
* Time complexity to find an element -> logn -> Worst case.
* **Inorder** of a **BST** will give us the **ascending order** of the tree.
* Just apply **inorder** on the tree and until **a** will come **don't print**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b2e985e-6b01-4d7e-8f16-ad9d1f110023)

* More than **n** never possible.
* Answer should be **less than 'n'**.
* To find out **a**, it took **log n** time. From that element onwards using the **inorder** print **k** people. **k** people printing took **k** time.
* So **log n + k**.
* After **first log n** over then print the **k** people.
* No relation between **k and b**.
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bdc32d7-7372-4c6f-810a-3cf8f08755dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b670ed72-65cf-4269-9dc9-abf7acea5c8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/053cf815-462d-4d08-9727-785060da0f07)

* Solution.
* O(n) -> One Scan -> Worst Case.
* This question came **3 to 4** times.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5decc63-b3df-4ad6-86b0-ab41e4f9f074)

* Question
* Option **D**.
* **AVL** root can be **determined** from the start because whoever comes **first** may not stay the **root** because inbetween **many rotations** can happen and the root may change. Anyone can be **root**. Because of **rotations**, roots keep on changing.
* In **BST**, whoever came first is/will be the **root**.
* First person inserted should be **4** only.
* From the **BST**, we are trying to make it into a **Complete BST**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57eb25e9-3781-47cb-83dc-2945d5fada26)

* **2 and 6** can be written in **2!** ways because even if **6** comes **earlier** than **2**, it will anyhow go to the **right side** as the root of the tree is **4** and **2** anyhow will go to the **left side**.
* **1,3,5,7** can be written in **4!** ways, they can come in **any order**. After **4,2 and 6**, the rest of the numbers can come in **any order** no problem.
* 1 * 2! * 4! -> 2 * 24 -> 48 possibilities.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/714a8a43-f088-47ff-a1bd-b562017084f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/792f106b-c183-4563-be92-942a84370a01)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d71106da-0586-48b9-b2ac-b537af01cc15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12c07c73-ab54-4f58-aa43-c27cc19736df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e127f92c-d561-4066-add2-a95d3cb3739d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b9c924c-7c47-4b75-8539-fcd83d82c6be)

* Option **D**.
* [**VERY VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5332e89-9e6c-4407-a1b6-1792e3fa4eb9)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a93ae6bb-44b4-427d-a009-40ddea16a32b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9775a6d9-52b1-4e38-ac04-fe1d11b2418e)

* Total -> 7!.
* 4! -> For people less than 60.
* 3! -> For people more than 60.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da415bdb-f68f-4092-8a69-4193feeda8b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75576945-fef1-4207-9945-846e55353ca3)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18b536a3-24fb-40a1-bfaa-e704f41964ec)

* Formula
* 0! -> 1.
* Option **A**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34b4a08e-9afa-43ff-96ba-e67a6d0e4115)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed7738fe-77f2-428c-8d30-c652f169530e)

* Question.
* int -> 2B
* pointer -> 8B
* Total -> 2 + 8 -> 10B.
* First For loop is running for **3 times**.
* Second For loop is running for **4 times**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bc04577-3b53-4928-af38-5425930689a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/035f994c-6ed7-4c30-96db-38e5a80aa61c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbf987d1-a3eb-4cfa-b365-9c3ed2ebeeac)

* For **index = 3**, at the end of it there maybe a **problem**. We are referencing the **value** of a **garbage value**.
* *(garbage).value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9ff3ace-67ff-4d79-82cc-c83838924901)

* Options.
* Option **D**.
* Uninitialized pointers we cannot say **star(*)** because anything can happen.
* It may give **error message**. Some **error** may come.
* Have to check if **head** is **NULL or not**. Didn't check in the **question**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbdb9dbf-6033-4831-812e-246612b7102a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7177a9dd-963d-41c5-9dec-f27b1479be98)

* Question.
* Sibling -> Common/Same parent

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/092850a4-b7b9-4aaf-a94d-f8ee3e9cec86)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/789a5e51-c390-4888-b0ca-591963e2f5e6)

* n-ary tree -> Input
* Binary Tree -> Representation.
* Internal nodes -> 6
* Leaf Nodes -> 8.
* Left side is **NULL** means that the **left most** child is not there.
* If **no child** at all then the **left most** child is not there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/380ccabb-75bb-4aa3-a075-0f6af849c62b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/556c680e-24f3-45ca-90a8-7acef55537e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59a743a8-39ff-4bb3-a053-4ed96efc8334)

* Solution.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d89b9235-fcd2-4fe5-8f95-617f9acb11d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9225848d-1695-4387-94dd-b5384e4237c2)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7cc6be7-41f9-4d2e-92bf-657b65fd309e)

* Question
* Permutation -> Order change/changed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c09e810e-052c-408c-b949-69c940f0b89c)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23b60075-4fac-4b44-826a-122dbc0ee04b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a24443b-74d9-479b-a288-ff104f1b1c74)

* We haven't changed the order of the elements.
* If we change the **order** of the elements then it is called as **permutation**.
* **Combination** means that **order** we cannot change.
* Any **sorted array** combination is **sorted**.
* **Sorted array** combination is **sorted** only. We cannot change the **order**.
* In **permutation** we can change. In **combination** we can change.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b71d2c2-be4d-49eb-ace7-ac6bb6d83c53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/739409eb-8afd-4833-aa8a-8e5e1850bdd4)

* Question.
* In **Array** random access is possible, we can go wherever we want.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5dc84990-55e8-40f3-b1be-48a2e219ec7b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58ab1864-d4a9-42df-b1d6-0ab1ef08edd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dae6a72f-e46e-4b80-b6dc-57db667d2b3e)

* Option **A**.
* **NOTE**:-
* **Queue** implementation using **Linked List(LL) or array** is **constant** for both. [**IMPORTANT**]
* **Stack** implementation using **Linked List(LL) or array** is **constant** for both. [**IMPORTANT**]
* When we are implementing **stack** using **Linked List**, in the **push** operation we will call **malloc**.
* **Linked List** means dynamic behaviour.
* **malloc** is related to the **Heap area**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/379befa9-feda-422a-bef8-355e3a8b393d)

* Question.
* As no one is pointing to the **address of 1000**, so we can call it as **memory leak**.
* There is **memory leak** in this problem.
* **malloc** returns **void pointer**.
* In the **first malloc** call, we are not even **typecasting** as well. We are simply accepting the **void pointer** from **malloc** and putting it in **x**.
* As both **void pointer and integer pointer** are of **8 bytes**, so we will not loose any memory but we will receive a **warning**.
* We are storing the **void pointer** in **integer pointer**, so **type mismatch** is happening and we will get an **warning** as both the **sizes are same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dee66868-bb25-4081-9558-71f3e810c5eb)

* We have executed **free(x)**, before **x** was pointing to **2000**. Now **2000** is gone.
* So **x** is a **dangling pointer** now.
* Program is over so the **dangling pointer** is gone. **x** was a **local variable** and it **lifetime** was till the function is over, as the function is over, so **x** is also over.
* **Dangling pointer** is there but it will not create any problem.
* **Dangling pointer** is there but we are not using it.
* **Memory leak** is confirmed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69008629-9168-4070-a44d-55400f743bd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/614a4e0a-64d9-4bbc-9278-3bf3e1042fa9)

* Options.
* Option **A** is **correct** in **cpp or C++**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50342065-a7a1-45d0-9b0d-5c3adca05af5)

* Option **D**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7241317f-9a82-44d6-b2e8-eccf26b28551)

* if(*x) then no memory leak at all.
* if(x) then memory leak everytime.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76b00284-3c33-4d9f-9f2b-a3112027b4fe)

* If **p** is a **void pointer** then **(*p) and (p+1)** are **not possible**. We will get an **error**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c987f0c8-3a6a-437e-8505-0c607aa4b0c8)

* If **p** is an **integer pointer** then **(*p)** lets us read 2B of data.
* **(p+1)** lets us **increment by 2bytes**.
* They are possible, we will not get an **error**. 
* [**IMPORTANT**]

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1667e81-cfd0-41ad-9ee3-0f335f902c12)

* **p** is a **void pointer** but we are using **(int *)** for **typecasting** and to convert the **void pointer(p)** into **integer pointer**.
* *(int *)p -> Now we will get 2B of data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75c154f3-b650-4d1a-b5f8-07ccac83187e)

* Option **D**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69501028-8f26-48de-a515-c99486cbc89b)

* Question.
* Option **D**.
* The problem is talking about implementing **Queue** using **Stack**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87596ec6-be81-4f67-b7ad-23d94acee9e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45101234-b9b8-4aac-96e7-290b759956bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a60e63aa-58ff-4ad3-a539-8f0cb5fcf8a4)

* EQ -> Enqueue -> Push().
* DQ -> Dequeue -> Reverse() then Pop() then Reverse().

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31b90a4d-2669-4cab-a3ad-47b2adfe9ad0)

* **Reverse** is one operation which will take **constant time**.
* All **predefined** will take **constant time**.
* We don't know how they are **implemented**.
* We are implementing **Queue**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6610f00c-430e-4d69-927b-cbf8901b46e9)

* We got **1 instruction** for **enqueue** and **3 instructions** for **dequeue** but that is not present in any of the **options**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37b1eafb-e54c-461b-8c1c-b2b7c53ac162)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6982732d-e991-40da-946c-b83afa3d2a18)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e45d869f-972e-47dd-b081-3fcca123cce6)

* Now.
* Enequeue -> First Reverse then push and then Reverse.
* Dequeue -> Pop.
* Option **C**.
* To implement **queue** we need **two stacks**.
* [**IMPORTANT**]

## challenging-problems-vi(6)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/196f4c1b-377a-4fba-9f53-b2f54a80061f)

* Question
* Option **C**.
* Options are given **mathematically**. Just substitude the **values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4b43cf7-8588-45d4-83fb-b8d472e5c75e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7eb55e8-c01d-4426-be93-40ff59775c7c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f933df9-4da8-4906-96c9-ec617b1297a4)

* Solution
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13a3a2e1-24c0-4f77-9f84-d2db2c8a6b51)

* Question
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58b28f06-53a7-4370-ab04-94f3dc0ae8e3)

* Solution.
* i = i + s; [Implicit type casting is done]
* Expression time no problem.
* Calling time maybe problem, so **verify**.
* No specific language name is mentioned, we are talking in **general**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb23827d-54fd-4636-8315-d7b52b4c6f24)

* Option **D**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc1c13f3-34ef-4ce1-aa45-9c12ffe44761)

* Question.
* Option **A**.
* Deletion of the smallest element:-
* Best case is **O(1)** and worst case is **O(log n)** for **min heap**. They both come under **O(log n)** which is **requirement***.
* In **AVL** tree the **smallest element** is there in the **left most node**.
* In **AVL** tree to get to the **left most node** which is to get the **smallest element** and it will take **log n** time. After **log n** time is over we will **delete** but we have to do **balancing as well** which will need another **log n** time.
* In **AVL**, deleting the **smallest element** is always **log n** because we have to go to **left most path**.
  
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce36b013-2886-4c99-bd50-e59771290482)

* So in **min heap** deleting of **smallest element** is taking **O(1)** for **best case** and **O(log n)** in worst case but in **AVL**, it is always **O(log n)**.
* **Deletion of the smallest element** -> Min Heap is **O(log n)** and AVL tree is **O(log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa4851b1-eaf5-426c-94fc-bbce88938473)

* Min heap
* In **min heap** tree **insertion of element** will take **log n** in **worst case** and **constant time(1)** in **best case**.
* In **min heap** we are **inserting** the element **blindly** without checking/verifying if the element is there or not there.
* **Min heap** is not for **searching** purpose. It is not a **search tree**.
* **Insertion** in **min heap** is **log n** but we have to **check/verify** if the element is present in the **min heap** or not for that we need **n** time.
* So the total time to insert an **element in min heap** is **log n + n -> n**.
* Overall is **n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82d23a5d-89bc-4174-9da2-7593421bb7d6)

* AVL tree.
* When we are finding the element in the **AVL** tree and instead of finding the element we find **NULL** which means the **element is not there**.
* In **AVL and BST**, the **insertion** is always done at the **NULL** place.
* In the path **NULL** came which means **element** is not there and we have to insert the element there.
* In the **AVL** tree if we see **NULL** which means time taken is **log n** because **NULL** cannot be there at the **Starting levels**.
* **NULL** indicate element is not there then **insert**.
* For **AVL** tree **insertion** it takes **log n** which is **always/every case**.
* We are not **inserting** blindly, if element is not there then we are **inserting**.
* In **AVL** tree we verified by checking if **NULL** there or not, if **NULL** there then only we are **inserting the element**.
* **AVL** tree is a **search tree**, **searching** becomes so easy.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5fc70fdd-7b12-4d2f-8476-8d081c8443de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97c523c8-d8f3-4eb9-af8b-d30076b844cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a31556d-d43f-4b3a-aca8-7825626ebf8f)

* Left is **min heap** and right is **AVL** tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da9749b8-8c08-42ce-aa46-ffc51124f728)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55054fe2-8561-45e7-a443-471e2ed2883c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc7a6023-b89a-4781-bc98-14ca2c55e370)

* Option **B**.
* [**IMPORTANT**]
* **Min heap** has failed here because we have to check **first** if the element is present or not but in **min heap** it is **inserting the element** blindly without checking if the element is present or not. To check **first** it will take **n** time which is more than the **required time(log n)** that's why answer is **AVL** tree. [**IMPORTANT**]
* **Sorting** means both **ascending and descending** order.
* Heap means both **max and min** heap.
* **Max heap** will give **ascending order** because we are deleting the **max. element** and storing it at the **end** as gap is there at the **end** only. Gap is not there at the **starting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90ba212c-184b-4595-9af5-d81404078ca0)

* Question
* Just **insertion of an element**.
* It is option **C**. [Both]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/365bad6e-a1d9-4e4e-a2eb-4cb5b97f0462)

* Question
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc49ddaa-efea-46e6-848b-9e3f5a06662e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84c4d7f9-0d28-467c-9114-f4bfed44e6a1)

* Linear Queue is full.
* Linear Queue is Empty.
* Circular Queue is full.
* Circular Queue is empty.
* Front(F) and Rear(R).
* In the normal implementation of **circular or linear** queue for **n** elements array we can store **n** people. It is **efficient**, we are not wasting any **slots**.
* For the **question's implementation** of **circular queue** for **n** elements array we can store **n-1** people. One slot is **empty**, we are wasting **one slot**, it not **efficient**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4967f48a-e428-4f0e-8ab4-1122b670f045)

* This is an array of **n** elements storing **n** elements. 
* The array given in the **question** is an array of **n** elements storing **n-1** elements. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b001e275-0ad2-4615-b707-c1b39771e24b)

* **Rear(R)** is the variable which contains the position of the **next element** to be **inserted**.
* **Rear(R)** is first inserting the element then it is incrementing itself.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82c60800-d411-462a-9b96-8c8b3e3d7043)

* In the **normal circular queue**, **Rear(R)** starts from **-1** and first it is **incremented** and then we insert an element.
* X[R] = a; [Insertion]
* R++; [Increment/increasing]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98f7999d-33f1-4dcd-b72b-a4148a7304e2)

* When **R = -1** then first we will **increment** and then we will **insert/store**.
* When **R = 0** then first we will **insert/store** and then we will **increment**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b9d0b61-474d-4d8d-b0e8-1944bd19c6fb)

* Size is **6** [n].
* Capacity is **n-1**.
* We have inserted **5** elements which is **(N-1)** so we cannot insert anymore elements further. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c92d239-4bad-4f09-b0a4-e446de571edd)

* Condition for **circular queue** to be **full**. [**IMPORTANT**]
* Wherever **R** is now there is **no element** there as have to store **n-1** elements. **R** is empty now.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4285d4b8-54ce-4fbc-98a9-0a164dafda37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e848a3c-f0ac-4fea-b4b6-72a741879425)

* For **deletion**, first store/delete and then increment.
* y = X[F] [Store/delete]
* F++; [Increment]
* **F** is at **1** so now **R** can move.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa3d4353-c0d9-4217-b3b4-36ece5ee80f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1d6b60c-1850-4f00-9fdc-252070376189)

* because of **circular queue**, the **increment** will be done using **mod n**.
* Now **F and R** are **equal**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e262b430-9dd5-40d1-a8d1-6dfee84d89cc)

* **F and R** are **same**, so **circular queue** is **empty**.
* At anywhere they can be **equal** doesn't have to be at a **specific location**.
* **Equal** means **empty**.
* Every thing is fine about **circular queue** behaviout but **one slot** is **empty**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f00e6496-3aac-42aa-8788-6a97c684f99c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/894ae843-2645-4462-a838-2a7ba883c018)

* [**IMPORTANT**]
* if ((R+1)mod n == F) [Queue is full]
* if (R == F) [Queue is Empty]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94bf1a78-227f-4cab-a718-ca94e9b44e62)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04ef0469-919a-4647-a895-6f51c70a2349)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67d28a69-f8a6-4a0b-af0b-df3f7ba24f7a)

* Circular queue code for **n** elements but we can hold only **n-1** elements.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/138aec73-6d6b-42f7-9716-f9fc90f1133a)

* Option **A**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18194126-5505-4c81-bd67-3e4fbecf7d4f)

* Option A -> Need not be.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2442d60-59d4-4721-aacf-6804eb84d914)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8758d143-0781-4971-ae24-5e7c935927af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acab1d12-389c-4346-ab6b-fcd634eb0fd2)

* Doesn't matter what **F and R** value are.
* **F and R** are **equal** which means queue is **empty.
* Now correct option is Option **E**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e27c76c-dbbb-4ae9-86e8-52d6e8292fa9)

* Then **normal circular queue** story.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19f22b19-f10e-4d98-b805-5865b223e633)

* Question.
* Option **D**.
* 1 -> Post
* 2 -> Pre
* 3 -> In

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c415886b-6a1e-4a15-abef-6b579b41e087)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d6a7f58-cd00-4c12-a4cf-c88ba47878fb)

* Solution.

## challenging-problems-vii (7)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ad6bd32-1c63-4983-a61b-2a7a65057614)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa49ccbd-7537-453c-8422-2987cb2c4245)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d9d01f7-7609-495c-b42d-0c8a3fd3e84a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baa51adc-05e4-449b-ad8b-017b04f6ab6e)

* Subtree containing **4** nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b5c64e1-295d-4d75-b10c-a9a533cd21b7)

* Sh4N -> Subtree having 4 nodes.
* T -> Total nodes till now.
* r -> Root.
* l -> No. of nodes on the left subtree.
* R -> No. of nodes on the right subtree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0682e47f-ad74-4e56-838a-18245243bf3c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a7425d6-71ce-48b0-b795-6cf76f72d2b6)

* Code.
* If it is an **empty binary tree** which is **if(r == 0)** then **total no. of nodes** we will return **zero(0)**.
* It is a **recursive** call.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f1975a6-b030-47e5-a1e5-04e60540b038)

* Total nodes(T) is **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3658ba2d-79cd-4c19-98f3-0d4d80a1bcc0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45917bee-cb1c-4e61-9f1a-581f09be9912)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efeb7aee-46b3-40a5-bb30-8577e08bb55a)

* We don't care what the function **Sh4N()** is returning as we are not storing it anywhere for later use. We need the **count** variable value because we are printing the **count** variable value.
* Our goal is incrementing the **count** variable.
* We have done **1 scan** of the total tree.
* One scan required.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2d58744-a300-4e2c-aa5b-e3f93c942f92)

* Wherever we got **total as 4**, we have print it.
* We have to see the **total tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73a0d7c9-4e90-4ac1-bc4d-f70db4092717)

* The program -> **Counting total nodes**.
* If we remove that line then it is the **above program**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/918bb12c-bacb-4f8e-bb86-21847cd12e68)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6abf5e8d-4eda-412a-9365-786d0cf4f4cc)

* If it is an **unbalanced** tree means all of them will go to **one side** then also it is **O(n)**.
* Every function call is **constant time(C)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74e797b4-e93d-4340-9146-84ff41ba5e8d)

* Answer -> We have to scan the tree one(1) time. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b5733f8-de6c-472a-8bf0-8dc976554620)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79131906-f703-4dfb-a99c-7dd70b85b1fd)

* So the time complexity is **n**.
* So **a = 1 and b = 0**.
* **a + 10b -> 1 + 10 * 0 -> 1**.
* Option **A**.
* Best/tighest Upper bound.
* n -> O(n) [Best Upper Bound]
* n -> O(n ^ 3) [Upper Bound]
* Rooter Binary Tree -> We have to start from one person, we cannot start from wherever we want.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95b141b8-9c60-4d5a-bd5d-fdd33c95e2ae)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b24a7bc-e0c2-4299-b1ee-287e213a1d80)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4e70aaa-8af1-4c34-a06f-0421c2900231)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3698932-be89-42e6-8efb-35dfa16d3782)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/559c5577-d471-4185-a7bf-7e73151061d5)

* Bit-wise and(&)
* Logical AND(&&)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f651d760-66fa-4ab7-a3a6-4784abdfcbe0)

* Right Shift -> Divide by 2.
* Count -> Counting the no. of 1's.
* **v** contains **two 1's** and **v** contains **3 bits**.
* 5 -> 101
* 4 -> 100
* 3 -> 011
* 2 -> 010
* 1 -> 001

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cfd951b-ee9e-458f-ba1a-a682fb05edda)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a1c05b3-e91f-4610-bebc-f04b2d073468)

* Option **A**.
* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a37a636-b064-4167-9604-cfb1799841e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e2b5c80-7352-43b9-9f4e-9542c168d99a)

* If **static** not there then **answer** is **7**.
* If **x** in the **main()** is **static or not** doesn't matter because it will give the **same** answer for both of the cases.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4586ece5-ca6a-4864-9b06-32bd2a6f5e90)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5cf7fe5f-2109-46ef-84dc-aea7e1f71d37)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71f4ba34-925a-410f-bc64-84f442372646)

* **8** leaf nodes are there.
* Path length -> 2,4,6.
* Path lenghts are **even**.
* We have to pick two people from the **leaf nodes** only.
* Independently -> Independent of  first selection. We can choose the same leaf node again.
* To select **1 leaf node** out of the **8 leaf nodes** takes **8** possibilities.
* To select **another leaf node** out of the **8 leaf nodes** takes **8** possibilities.
* So **8 * 8 -> 64** possibilities.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff10410e-4e71-49c6-800c-1826352ba2c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3367c058-826d-46b1-8508-152d75b4ec7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7af31196-b154-42f1-b36f-feb39a087918)

* x -> Path length
* p(x) -> Probability of getting path length.
* Answer -> 4.25
* [**IMPORTANT**]
* If in the question it was mentioned **choose uniformly, independently and distinctly at random** then? 

> **First possibility** would be **8** and the **second possibility** would be **7**. Below **8 * 7 -> 56** would come. Also **0 length** pairs would not be possible.

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b05c702c-2691-43b8-b141-361c824c1c9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b7a94e4-fcf0-4ff8-a1e8-9a4e4c6e9d10)

* Question.
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaff69b5-99ca-47f6-a42f-9b4a103d5399)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e80bfe5a-0f96-4222-b45c-17f6040915bd)

* **Swap** by **call by reference**.
* In **call by reference** original values will be affected.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/569a12e4-0e84-44fc-98ab-62cea930026f)

* printf(x) => 1000
* printf(y) -> 2000.
* printf(temp) -> Garbage value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74f52bac-ff5f-4da6-bc91-8341a7312e94)

* **Swapping** is done but it didn't touch the **original values**. [**IMPORTANT**]
* The addresses were **Swapped**.
* If **star(*)** was there then **original values** are affected.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3553c0f-3e47-4b24-bbac-056e9455523c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b9cfab4-8655-4c83-a283-84aa9e279bcc)

* Option **D or 4**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/310c4e29-553c-4cd3-a873-d181d63e91f7)

* No where mention of **call by reference** in the question.
* If program is given and it is mentioned that the parameters are passed by **call by reference** then we will use the **above logic**.
* But in the **above question** there is no mentioned that the parameters are passed by **call by reference** that's why we are not using the **above logic** in the **above** question.
* If **explicitely** mentioned that the parameters are passed by **call by reference** then only do the **above logic**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d580719c-5cd1-456d-bd0d-c5c643a482d8)

* We cannot do anything by **ourselves**.
* Keep it in **mind**.
* The trap is the **swap()** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7884aee4-1793-4842-a77e-0cc0b3911234)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7db84abd-d265-43bd-ae60-8e815eb6767e)

* int i = 0;
* **i** is not a **static variable** otherwise no option will match.
* If **i** is a **static variable** then we will get **6 3 6 3** or **6 3** twice. As nothing changed in the **second function call**, **i = 5** and we didn't go into the **loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2078144a-5fe8-4973-ae4a-603629b79f82)

## challenging-problems-viii-doubt-clearing-session(8)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/172242ad-e501-423f-a8a8-088b2093da36)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae056dfd-0d33-47b0-8ed5-6f1051617b53)

* Question.
* Both of the code looking like **same**.
* In the **second code(work2)** we are using **temporary variables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e05dfbd8-6597-4c8f-bded-74004a8cfcd3)

* Option **C**.
* Among both of them **work1()** is better in terms of **space** compared to **work2()**.
* CPU time -> In-accordance to time or time complexity.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27033b0d-7302-47d9-a8e2-0942fff8087b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0be17e9-9997-4020-a472-d8661b8989de)

* First code returning **18**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce53b7b0-f784-47bc-b37b-22a04c82fa80)

* Second code returning **17**.
* Both are giving **different answers** for the **same input**.
* Both the codes are **99%** same. Sometimes they will give **different answers**. [**IMPORTANT**]
* **work1()** is taking **updated values**.
* In **work2()** we are taking **temporary variables** and they are not **updating**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06c2c7a8-aca2-435e-9a90-c705c88e4854)

* Looks same but they are giving **different answers**.
* [**IMPORTANT**]
* In **work1()** we are calculating **(i + 2)** two times.
* In **work2()** we are calculating **(i + 2)** once as the value is stored in a **temporary variable**. When again **(i + 2)** is required, we will use the  **temporary variable**.
* One time we will calculate and store it in a **temporary variable** and use it **again and again**. This is done in **work2()**.
* In **work1()**, **(i + 2)** calculation is done **again and again**.
* When we will calculate **again and again**, we will get **updated values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b524fa4-4d2e-4a2d-b74d-1d4b783d2e8d)

* **Space** point of view, **work1** is **better**.
* **Efficiency/time**  point of view, **work2** is **better**.
* **S1** is **false**. **S2** is **correct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce966171-4b6b-4129-9cc8-8ac84439f2b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20427c06-6caf-442c-965c-ca7f57624510)

* Option **B**.
* Both are not same code.
* **Time** is decided by **arithmetic operations**. The **more** the **arithmetic operations**, the **more** is the **time**. [**IMPORTANT**]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f32db636-a226-4a7a-ab89-c7d7d0680dfe)

* Question. [NAT]
* Answer -> 15.
* By default is **call by value**.
* By default is **static scoping**.
* If it is not mentioned.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72beb767-6db8-4c3d-ab78-a44cad28cb9b)

* No one taking **-1** which is return from **stkFunc()**.
* stkTop++ -> Post-incrementation.
* --stkTop -> Pre-decrementation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc73c7fb-e32d-496f-b393-7e29d3332183)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e73641be-066e-4fc1-b504-3922b9e2ac54)

* Answer -> 15.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8531a97-4b4c-43b8-ad5f-987fd2250564)

* Question.
* Inorder -> Left-Root-Right.
* If **only one** is there then it itself is the **left**. [**IMPORTANT**]
* **Inorder** is mainly for **binary tree**.
* It is an **n-ary** tree then how we will do **in-order**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aecd0463-f03c-4b27-8a07-e2dc2b9d4ef8)

* **In-order** of an **n-ary** tree:-
* LeftSubtree(LST) -> Root -> Remaining. [Steps] [**IMPORTANT**]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5492ffed-f1b0-43bb-a963-6440fb462b37)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9627564b-1283-497d-b95a-59e4653fae01)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b14ffec-7bbb-45eb-a226-778a752f56de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0e0c49c-3a0e-4515-9fd5-fe604ce60fb9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca6ec8a5-916c-46be-b9cc-e2f0719c7b1e)

* Option **A**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72726b8d-de4b-4a5d-b090-502c142bfd1e)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b835bb9a-34c9-4fb4-aa97-4683ca7a6727)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53e67cf4-ed4a-4f4c-b0dc-c102b3311a0e)

* **Right side** kind of trees have same **pre and in-order**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3fc91af-54f8-44fa-a5f1-7cc3852dc4b9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e51d4d3b-f710-4581-90f1-c1c96557f435)

* **Left side** kind of trees have same **post and in-order**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/098eeb27-9322-43ae-aae1-3dee3483566c)

* pre -> ACB
* In -> ABC
* They are both not **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72aedad6-ab5a-403a-86ed-a619bf8599e6)

* **3** nodes are there and **3** levels are there. So **height is 2**.
* No. of noes(n) = height(h) + 1 = 2018 + 1 = 2019 [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6712b37a-dd14-401c-880b-7a11412e9baa)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cd69b26-98e5-4116-aeb5-9c6ffa52ceea)

* **Directed** graph have **in-degree and out-degree**.
* **Undirected** graph have **degree**.
* In a **binary tree** max degree is **3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e085f003-4c69-4c8d-bd2b-bc8d32e82afe)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/504a300a-34f9-4f9d-90c8-514b1426b928)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96744ee1-abca-423e-9ccf-9196d6d549ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2ba4387-b2b8-424f-bfe3-a3b43cbbcb52)

* Some many **20s** are there.
* Using **binary search** find out the **first 20**. It took **log n** time. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f284987-653f-4c16-90f3-76aaa5e02c5c)

* Doubt.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d915910-bf91-465f-974b-7c6c35f1ff34)

* Answer -> log n.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9748feef-9e8c-457c-a9b7-30102c8a9874)

* Question.
* Remember the **formula**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f14abdea-641c-48da-9755-e09e535bcd0c)

* Only **1 leaf node(L)** and **3 internal nodes(I)** for **n = 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/817d47e9-eeaa-46b2-9691-a17f64e47f0f)

* **5 leaf node(L)** and **4 internal nodes(I)** for **n = 2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/137ac3f1-14aa-4b73-a40e-ca6d3b847cf1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b14d6a2-ab9a-4dca-bb8e-e1f9db4d3d28)

* **13 leaf node(L)** and **6 internal nodes(I)** for **n = 3**.
* Some relation between **L and I**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e182a9ab-fb41-4ca7-8f31-7220a3e15782)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58c7dbad-1b90-453a-82c0-b49c4ba0fd8e)

* Examples.
* n-ary tree, Leaf Nodes(L), Internal Nodes(I)
* L = (n-1) * I + 1 
* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73ea6918-1862-488c-a3f0-0a066651506f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aba3d261-b8e6-49e4-9721-b53ed8137b8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8a2796e-0290-4565-ab30-051db45d166f)

* This formula is only for **complete/full n-ary** tree. Every node having either **'n' children or zero(0) children**.
* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/508f5612-0a64-4ed9-9f6e-19d4f3f5cb9f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c548c6b-415e-4f66-b8d1-a5264ce3937c)

* Answer -> 5
* Option **C**.
* [**IMPORTANT**]

## challenging-problems-ix (9)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9c4c4dc-f7a9-42d8-a2a6-88c683e19875)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f65f94d-e1bf-4a53-97a2-406dfa9ed716)

* int &x;
* Actually the **&** in **x** is not required. It is already mentioned in the **question** that it is **call by reference**.
* Whenever **x** is there within the **f()**, put a **star(*)** infront of **x** as **x** is pointing to the address of **1000(p)**. [**IMPORTANT**]
* *x = *x + 1;
* f(*x,c) * (*x);

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d4ba5de-61f0-497b-93cf-827c1ee9c509)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bed86bfe-8ce8-48e1-889f-6ef226c87ef2)

* Function **f()** is called **5** times but **x = x + 1;** is executed **4** times only.
* printf(x) -> 1000.
* printf(c) -> 5.
* Two operands are required to do **binary operation** and only one **operand** is available, we cannot do **directly**. Another one should be required as well.
* Keep as it is and don't write the **values**.
* **x** is an **address** and we cannot **multiply address** so we have to give **star(*)** to **x**, which is give **(*x)**. [**IMPORTANT**]
* (Some address) * 25 -> Error message will come. [**IMPORTANT**]
* There is **no meaning** with multiplying with addresses.
* Pointers we cannot **add, multiply, divide**. It will give an **error message**.
* **Two pointers** we can **substract** that is ok.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fb6924b-7302-410e-9c2e-41bbd49e53e1)

* **x** is a **local variable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45bb62da-987a-48ac-97ce-6ab58a90da08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3543d6b5-1112-486f-a83d-fd6997ba8045)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dbd4c4a-e900-47f2-a45f-432782f577c8)

* **Call by reference** problem using **recursion** practice.
* Option **B**. [6561]
* [**IMPORTANT**]
* **Value** we cannot change but **address** we can **change**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b38675b-49f7-4900-b713-3c727195a926)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e7c4162-7470-42a0-abd9-9fb049fd1ee4)

* **p** expecting an **address of a character**.
* Data is clearly there in the memory.
* Address of only one character **p** is asking but we gave **p** a **string** which is the **first character address** of the **string**. If we give **more** then the **more** we can **access**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23fe8d18-8922-4b70-b2aa-4098535b721c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d2fc254-9f49-400a-9d0a-a6c73ce74026)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0f1286c-b25f-45b2-b6fd-896076c88f3a)

* If we have given **a** and now if we go to address 1000 then **a** is there.
* If we go to **p + 1** then we will **Null character(\0)** as **a** is a **string** because it has **double quotes, "a"** then followed by **garbage value**. If **more** data is visible then we will get the **data** otherwise we will get **garbage value**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/367c246b-e20c-4670-ad88-6e8e1ec516d3)

* Question.
* To create a tree either **Pre and In** or **Post and In** are required. Only **one answer** is possible. We will create **unique binary tree(U-BT)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9aa27435-7a27-4dbd-aba0-2276258494be)

* If only one is given either **Pre or Post or in**, anyone of them is given then **multiple answers** are possible. We do not create **unique binary tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bedc8f37-e375-4def-a89d-2ef897dc7d23)

* We have **pre-order** and **In-order** is missing.
* **In-order** is not given **directly**. **In-order** is given **indirectly** by mentioning **BST**.
* **In-order** of **BST** will be in **ascending order**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/812fc439-5a9f-4f9d-b9e1-91e94ef43b4b)

* [**IMPORTANT**]
* In **min-heap** tree the **root** is the **minimum element**.
* Ascending order of **BST** -> **In-order** of the **BST**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca82059b-fdd2-4c2d-a650-418be89f5844)

* In **pre-order** the first element is the **root**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b10f2984-a559-41a4-ac46-833dd45b8dca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af7ce473-eab6-43ad-86e3-1079e56f87f8)

* We draw the **BST** tree and now we will get the **post order**.
* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18867271-b30f-4bc3-9c51-b05b5cbf5531)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5dffcaea-7902-448c-986e-57b1f9d2fe15)

* Best algo will take **O(n)** time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccf09871-79bb-4475-8247-182c9d55ceb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63167ceb-a14a-431c-8c4f-639e4ddc0680)

* BST -> In-order
* BST + pre -> Unique tree
* BST + post -> Unique tree
* BST + In -> Multiple/not unique.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e768cc3-11b7-4c13-829a-302425f675e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ee1c53c-854c-497e-bff2-357a38be3a7e)

* No. of BSTs possible.
* Many **BST** will come.
* Formula -> 2nCn/(n+1). [Catalan Number]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b02abbd8-cc1c-4784-84fb-7232e8a8459a)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef9c2404-aed0-4220-af17-c97c12846c56)

* In the given **preorder or postorder** to create **BST** will take **O(n)** time for **every case(EC)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a8757c7-ce5b-4af7-81fb-5be7eac17db0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24e30e60-2a92-4419-aa1a-67e2fe8c8262)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/504dbfd2-5ad3-4d16-94ee-cb6c88add842)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c2b3bc8-c81f-439c-9d4d-897f542a899f)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/688887bd-c830-46f2-bb73-1ce8cf486909)

* This is the **flaw** in the program. If **same character** is repeated twice.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e8d16a9-4dc7-4baa-a1bc-dc6d6f1d0c89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c61a660-fb76-48c6-9b89-846bbf3a3a84)

* We have to take in account the **old and the new** array as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0858f8e-7bee-463f-b7d7-698f29881567)

* Whatever we are **replacing** , it is again further coming. **b** replaced again by **a**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/035bf48e-15fa-4d63-8437-74374497f3da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b3ce704-863f-4693-8d9e-69b97a0f1f0e)

* This is the **problem**.
* Simply **break** required.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83373fe0-ac73-4ab1-b004-d3015755d06f)

* yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/717b22d4-1901-43c6-8a2e-245b8c66c70b)

* With **break** we will go out of the **second for loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/264bb580-664d-433e-b37e-82d9999aaf73)

* Option **B**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b32b3272-543c-4d9b-8f91-55a3356fc7c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a55a7a91-4ef0-4ad2-945f-2cf17c771c5d)

* Yes.
* Except upcoming elements replace with **anyone**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84ec7121-e8c1-4bda-bbc8-34e16091feec)

* Last person is not having any problem as **j** loop is anyways ending.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16c5a0fc-9bdb-4fc5-a40f-28f3fd1023ea)

* A's content doesn't matter here. **Old Array's and New Array's** contents matter here.

![Untitled](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d22af6de-bf8d-4c39-b93b-3528fc58cd59)

* Work.
* [**IMPORTANT**]

## challenging-problems-x

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/030c5cea-325c-4184-a6d1-f42db4d9d559)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5b00103-bd94-48c6-a769-c2f9323003c8)

* Question.
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc5d103a-838a-462a-8366-84a211861fee)

* Ascending Order.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d33d898-ec5b-4f02-b1c4-3c50c8f89240)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0b5be7c-43cd-40d7-a8da-cb897d725625)

* For every element in **Queue(Q)** we are running the while loop two times, once for **pushing** the element to **stack** and the next loop is for **popping** the element from **stack**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67437def-14d4-4a99-b6b4-2428cf5bf739)

* We did from **16 to 2** which is **15** elements so **15 * 2 -> 30** iterations and now the **stack** is **empty**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/845a920e-b251-454a-b193-8bff86980e4a)

* Now the **Queue** looks like this.
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c09eda1b-0408-40bd-887b-e4c014a1a7d4)

* We ran the while loop **once** and element **1** was pushed to the **stack**.
* For the next iteration, top of stack is **1** and the head of queue is **16** and **1 <= 16** is **True**, so head of the queue **16** is pushed into the **stack**.
* For the next iteration, top of stack is **16** and the head of queue is **15** and **16 <= 15** is **False**, so head of the queue **16** is **popped** from the **stack** and **inserted** at the end of the queue.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f07d1931-c766-4187-bfbc-ee7d9708399e)

* The **same** thing is happening again, for **each element**, the loop is running **twice** and it will run from **16 to 3** which is **14** elements.
* Lastly inside the **stack**, the element **2** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac046904-95c5-4892-b462-734752c7c310)

* From **1 to 15** elements are in the stack.
* For every element which is inserted in the **stack** permanently like **1 and 2**, we are multiplying with the remaining elements. For **2**, we had **(16 - 2) * 2 + 1 -> 14 * 2 + 1 -> 29.
* For **3**, we had **(16 - 3) * 2 + 1 -> 13 * 2 + 1 -> 27.
* So on ....
* The last person came is **16**. So **queue** is not empty as **16** there in the **queue** and top of stack is 15 and **15 <= 16**, so **push** the element **16** into the **stack**. For **16** we had **only one iteration of the loop**.
* For the **next iteration**, **queue is empty** so the **while loop** stops/ends.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5332e43-069b-4739-a540-81268b149200)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4666bca2-e0cd-4279-8ebf-e9e21f9b5f1a)

* For **every element** the no. of iterations decreasing is **2**. Everytime one element is going into the **stack** which means one element is **decreasing** then **2 iterations** are **reduced/decreasing**.
* It is **AP** series.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed1159da-cfa8-4e70-b90c-8d030dce36f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af3eb091-aaac-4528-98cc-1f4fc865cfd7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1aa4b689-fd67-437f-a4a5-59a03632f44d)

* Option **C**.
* Sum if **n-terms** of **AP series** -> (n/2 * (a + l)). [**IMPORTANT**]
* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8af9f92f-b7b5-4e4d-a7a1-5c6c6b9e4c1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6209642e-13c0-4a42-8f8f-19923aafe9d8)

* Find the **last term(nth term)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cd9ed5d-7770-480f-a702-e6f0851a020f)

* Maximum -> 256 [Option **C**] [Worst Case]
* Minimum -> 16. [Option **A**] [Best Case]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea3f7f3e-fef7-4d73-ad3d-767f28f61f31)

* Don't have to check all of the **16** numbers.
* Just take **5** numbers and check with **increasing and decreasing** order**, we will understand what is happening.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a55f721c-4621-4e87-9b49-1157b25bd5b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d166503-8b96-496d-b24c-f8a7bbb8191b)

* Question.
* Link -> https://gateoverflow.in/3758/gate-it-2005-question-13

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ded582d5-874c-4932-9522-1c3122bbe21f)

* Option **C**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2da1b6ac-e931-4605-82c7-ad971c0dc248)

* Question.
* BST -> in-order [Given]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32ecafd7-59ed-4c00-adc2-f3970a440e3e)

* Good observation.
* By seeing the options we can say that **5** is the **root**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0756a9a1-ff66-405c-986e-525ce9a6aa23)

* After **root**, left people should come. So option **B** is not correct as **6** cannot come before **1,2,3 and 4**.
* From the remaining options we can see that **3** is coming next. So **3** is the **next root**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7317429-37fe-4281-9bb5-bc930657256e)

* After **root**, left people should come.
* So after **3**, **1 and 2** should come.
* In Option **C**, **4** came before **1 and 2** so option **C** is **not correct**.
* Now the **next root** is **1**. So **2** is after **1**, so **2** should be in the **right side**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25922f17-6aed-42b7-8ae4-4920ac3cd2f8)

* Left subtree looks fine now.
* Let's go to the **right subtree**.
* We can see that **7** is the **next root**. **6** should be to the **left** of **7** and **8** should be to the **right** of **7**.
* So after **7**, **6** should come as it is **pre-order**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43ce25be-6b64-4b47-9fd5-c720fe346170)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e41e2099-9d4f-4f91-96cc-6c42eca48e33)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a8d79fa-d126-4cc9-a629-3664d6c5a915)

* [**IMPORTANT**]
* As we are making **pre-order** so the first element in the options is the **root**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08d74d7f-8e8b-4b06-9268-162e641ee82e)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50e631f5-6718-420f-9ebc-02b4891d82db)

* Always check till the **last element/end**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4086886-1750-44c9-943a-081252410454)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cb79fbf-a62b-40a6-8aab-1100a1f4af87)

* **BST** is not shown here.
* Anyone can be **root** in **BST**.
* Whoever is inserted **first** into the **BST** that element is the **root** of the **BST**.
* We will not know which element is inserted **first**.
* We are checking if it is **search path or not**. We are not creating **BST**. We are not **adding** any node. This is the **misunderstanding**.
* Instead of **BST** it was given normal **binary tree** then we would have to go to **every path**. In **binary tree**, we don't know where is the **element**. In **every path** we have to go.
* As it is a **BST**, we can go to **only one path**.
* **BST**, it is a **searching tree** for that it is **mentioned/used**.
* **BST** is designed for **searching purpose**. We have to go to **only one path**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49c22414-0a09-4796-8922-4ba58db861fc)

* In the **min-heap** tree, we have to go to **every path/everywhere** because **min-heap** is meant for **minimum element** and not for **searching purpose**. [**IMPORTANT**]
* **Search tree** are meant for going in **one path**. [**IMPORTANT**]
* The path we have **selected** is part of the **BST**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fd96ea5-f09c-4694-9761-ce830cc998c5)

* We want **less** -> Go **Left**.
* We want **more** -> Go **Right**.
* It is a **search path** and it is one of the paths of the **BST**.
* Path of the **BST** is also **BST**.
* We are **searching**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e08b7758-f245-48c4-9509-f98f6eaebc22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/768e11ce-ccb2-4d44-9a97-b90cf07a4bc1)

* Option **D**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a7cb62d-cb42-4969-a8e9-0d119464f01a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff153a1b-963e-4097-86d4-b42f65f9d361)

* Question.
* Queue -> a,b,c,d

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce542a49-d5b6-42e2-8f33-d03be75393ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05634deb-ac89-41ce-984f-b971a4a4f7cf)

* Whatever data we will give it will **reverse** it.
* We are inserting at the **ending** always.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ce83241-2376-4112-bc49-bfeeed2599fb)

* Option **B**.
* [**IMPORTANT**]
* If variable **i** is **static** then **all of the elements will be last element**. [Option **e**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/677b2e60-5a19-473b-a846-34a4279dfb6a)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3381ec75-5c44-4e0b-bc71-f9f93767f2da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f13e312-80f6-4b33-b8ef-8086b674de92)

* Smaller element -> 30. [In the left-most path, the last leftmost element]
* Larger element -> 70. [In the right-most path, the last right-most element]
* Just **return root**.
* Sometimes **root** cannot be the **answer** because **root** can be the **max element** sometimes or the **min element** sometimes. [**IMPORTANT**]
* If **root ->right** is **NULL** then return **root -> left**.
* If **root ->left** is **NULL** then return **root -> right**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dcfdc5a-9c96-4e82-9b54-aa5f659b7985)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/629b028f-b997-46d2-9869-b89748ef8c86)

* There are **3 possibilities**.
* The **answer** can be the **root** or **root -> left(l)** or **root -> right(r)**.
* If only one node is there, we cannot do anything then we have to say that **return NULL**. Not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/281a97b6-7e64-4737-851b-f5c223805a09)

* As the **answer** is surrounding **root** only that's why the **time taken** is **O(1)** or **constant** time.
* By looking at **surrounding of root** we can conclude.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19cf7033-3050-4d67-9941-7f53d6bf4724)

* Option **D**.
* [**IMPORTANT**]

## analysis-of-test (11)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8308c1b-81a2-4e45-adc1-0fb96c862e3a)

* Question.
* As there is some node on the **right side** which indicates **right** is there, that's why we are doing **+1** and then calling the **height()** with **n -> right**.
* When we come to **B1**, it is already **confirmed** that there is an **edge** on the **right side**. It is **not NULL**.
* **B1** indicates that the **left side** is **only NULL**.
* **+1** is for counting the edge that is aleady there on the **right side**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e055e57d-ebbd-4cfe-901c-5fc992ee0f12)

* **B2** indicates that both the sides, **left and right** are **not NULL**.
* For **B2**, both **left and right** sides are **not NULL**. So we have to calculate the **maximum** of **left and right** sides which is **1 + max(h1, h2)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a5c7132-cf51-4db3-b4bc-26560a583d26)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad374561-7c12-4629-b708-52edb9e634b9)

* Option **A**
* Remember it.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2d804cb-15ea-4dd3-a2b7-f6f1ba562429)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ce2e4de-8d3f-486e-8dc2-20d31c235d93)

* BN -> Both Null
* RNN -> Right Not Null
* LNN -> Left Not Null
* BNN -> Both Not Null [Maximum time take]
* All of the **different cases**.
* **Left Null** means that all of the nodes are on the **right side**.
* Every node we have to **check**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f132bc4-9a8b-4ecc-b018-cec403d45c91)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8b31624-2153-4875-8e2d-a567e6d54d3a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49d4c4c0-eb01-4a63-90bd-e528f87ff6fc)

* **10** insertions are equal to **10** push operations.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d7c4f16-bf8a-4d2c-8ba7-aa620e4a66fc)

* **Pop** all of the elements from **S1** and **push** them to **S2** stack.
* **Stack** is normally **reverse**.
* We have used **stack** two times, so it is **reverse of reverse** which means it is in **normal order** now.
* Now it is **queue** behaviour.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfb40f22-e46d-410e-a050-2a8ddd8183f1)

* **S1** contain the **reverse** people.
* **S2** contain the **normal/actual order** people.
* Now **pop** from **S2** and **a** will be **popped**.
* For **insertion** go to **S1**. Everytime **insertion** is **S1** only.
* For **deletion** go to **S2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f351bae8-4655-4eae-9e60-358d377a9262)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a3574f1-94b8-4484-8eaf-0e83049b702a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8088fe1c-7c6d-41d6-b6ea-cfca6a7f1628)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03e6e862-7aa7-4fbe-93b5-4ab8c5a0d02b)

* Pop everything from **S1** and push them to **S2**.
* **Enqueue** is **easy** compared to **Dequeue**.
* **Delete** is **more costly** than **insert**.
* **Time** of **delete** is **n** for **pop** from **s1** another **n** for **push** into **s2** and **1** to **pop** 1-element from **S2**. So it is **n + n + 1 -> 2 * n + 1**.
* **1 dequeue** is **(2 * n) + 1** operations.
* Time complexity for **Dequeue** is **O(n)** for **worst case(WC)**. For **best case** it is **O(1)**.
* Time complexity for **Enqueue** is **O(1) or constant** for **every case(EC)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3ac361a-e274-446a-a342-870d799ca317)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75d67aa2-d09c-4a6a-928f-629e588a8f1f)

* The program will give **best performance** when it is used **alternatively**.
* The program will give **worst performance** when **n push/insertions** operations are followed by **n pop/deletion** operations.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38b7a341-d0de-45ed-9337-1c8be8828c07)

* options.
* Always target about **best and worst** or **min and max** case.
* **n** insert and **m** delete operations are performed.
* **Best case** comes in **alternatively**.
* **Worst case** comes in first all of the **n** push are done and then **m** pop are done.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c79dbd0-350b-40ce-8c71-16a8b3ab0182)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9e6e59f-881b-4f3d-8941-44c6f06fddc5)

* Worst Case(WC):-
* 2n -> PUSH [x]
* n + m -> POP. [y]
* * This is **continuous**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9979eb53-3a47-4077-8787-dcb8a6cddaa2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9cf3b5f-74be-4319-9cfb-5321a73d7738)

* Best Case(BC):-
* n + m -> PUSH  [x]
* 2m -> POP.   [y]
* This is **alternatively**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2236ba4-3eb6-4aab-9104-9cae18ccf205)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/104b39a0-be54-4310-9d56-5591500949c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d08194d-7aaf-4e75-bf3f-56ae9bb677a0)

* n + m > 2m. [As **n** > **m**]
* [**IMPORTANT**]
* x -> PUSH.
* y -> POP.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95db4a10-00d2-4b6a-945e-a14ebc0065c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5be2cdf0-1b45-4fe4-8f62-ca89adadae74)

* Option **A**.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36a74c5c-0864-4291-861c-53d34ad8308e)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71ce1e32-cb15-4131-b2eb-689771891f47)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36ca2665-b56e-479b-a765-694c70256e2f)

* This is **correct** which is **O(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30d9d6d5-a1fa-40f6-9fc9-6afcdb456e81)

* We have to **delete the node**.
* We have to delete the node at **address 4000**.
* If it was to delete the **data** instead of the **node**, then we could have the done the **above creating** and got **O(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdd7b564-87b4-46cb-a90b-00e1a97158e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0181546f-bbaa-4193-bedc-88867a23b008)

* Option **A** [O(n)]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c20d922d-dfae-4e0f-95d4-63e65475fb18)

* Question.
* Looks like **postfix** evaluation of an expression.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8229d356-6dfe-45f7-afd8-8dfe70d71e77)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62a4790d-8fd7-4c6a-a05e-ddb62e782b2d)

* EOF -> End Of File.
* Option **B**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2022291a-2ef7-4328-aca1-57ef3e677b53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d96dd77-8a2c-41a8-b861-73ec8ef7727d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fae92fa4-b63b-42ef-a393-85153b00adec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ec63e72-809f-47df-84d2-40aace2b61f6)

* At the end of **j** loop nothing is printed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d79e6442-4341-44f6-91f2-a06e9bcbe750)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eae2a5cb-33ab-4a88-b7ed-a6af01b1bef6)

* Option **D**.
* Checking **confidence**.
* Asymptotically means **logic required**.
* Mathematically means **no logic, substitute values**.
* If **two options** matching then take **another example**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42618df0-1b5b-4bf8-b326-21a3d41850a6)

* Doubt.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cd2a260-d61d-44c0-aa02-654d814e9b9e)

* Question.
* For more than 1 function call write it in the form of a **tree** would be easier to solve it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d818375f-847f-4173-ae10-ca74c3ac6aed)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18b7d7bf-cd04-4c6c-b1a6-27b2069a9a4b)

* Question.
* **+1** in **2D** array means that we will **skip one row**. [**IMPORTANT**]
* **a** is a **2D** array.
* With **(int *) a**, the question has **type casted** the **2D** array into an **integer pointer**. [**IMPORTANT**]
* Now **a** is an **integer pointer**.
* So **+1** in **integer pointer** means that we will **skip one element** only now and not one row. [**IMPORTANT**]

* With **(int *) a + 1**, **a** will go with **bracket** first which means **a** is an **integer pointer** and we are doing **+1** to that **integer pointer** which means we will **skip one element** only.
* With **(int *) a + 2**, **a** will go with **bracket** first which means **a** is an **integer pointer** and we are doing **+2** to that **integer pointer** which means we will **skip two(2) elements** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ce2d18-a808-4d08-a568-7627581d116d)

* Without **typecasting**, **a** is a **2D** array and **+1** to a **2D array** means that we will **skip one row**. [**IMPORTANT**]
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30dd1aea-3690-46d2-af3a-4ab3b97d5d87)

* **Very Trick Question**.
* Solve and we will get the **answer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69bb2da0-4faf-4737-8858-e4fb44ac90c3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/507eeeed-039d-4226-bce0-d8865b85f91e)

* Question.
* **arr** is a **3D** array.
* So **arr[1]** means that we will **skin one 2D array**.

* Completed.













## Images

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff1235d1-354e-4d4c-b57f-eda2a0add6ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d59ce3f8-bc91-4dbe-bab5-d6e0d24662d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc7343aa-01f9-42b2-afe5-58e9be069e55)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0858f9f9-f4a3-4a07-aee8-48158ad0ac37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d2690a9-6976-409b-8726-b0d17b1715c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d352880a-a572-415a-9a0e-6410565a6f4f)
