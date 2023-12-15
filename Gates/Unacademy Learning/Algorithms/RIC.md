# Algo RIC

## challenging-problems-i (1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8592c6d-4444-4339-a2cd-91423ce1a101)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99c9faf1-7d61-418c-b000-cdb55721cae3)

* **Directed graph** means **in-degree and out-degree** will come.
* How to find out **vertex 1** out-degree?

> From **1 to 2** edge there. It means that **out-degree** is there.

* Sum of **out-degrees** is **equal to** the **no. of edges**.
* Sum of **out-degrees** = **no. of edges**.
* Sum of **in-degrees** = **no. of edges**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c349c37-72eb-4606-b894-1b2f5b874b81)

* ID -> In-degree.
* OD -> Out-degree.
* E -> Edges
* Sum of **out-degrees** = Sum of **in-degrees** = **no. of edges**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2597452d-7dce-404a-b532-9a9842b81540)

* This is for **directed graph(DG)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5f82fec-8e30-405b-a56b-d53409954e23)

* For **Un-directed graph(UDG)**.
* There is **no out or in degree**.
* Sum of **Degrees(D)** = 2 * (**no. of edges(E)**) OR 2 * E. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb156d9d-0b74-4682-9887-a147bcc2cbe8)

* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0490867-5909-4200-9fe2-af8e228a9c1c)

* To find the **vertice's out-degree** we have to visit the **vertice's out-degrees**.
* We are covering all of the **vertices(V)** and all of the **edges(E)**.
* So it is **V + E**.
* But it is given as **directed tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe292710-6009-49a7-b8c6-d57d4d80e5df)

* **Tree** don't have **cycle**.
* Adjacent of **A** is **2(B and C)**.
* Adjacent of **B** is **2(D and E)**.
* In **tree**, vertices are **V** and edges are **(V - 1)**.
* In the above tree, there are **7** vertices and the edges are **(V - 1) -> 7 - 1 -> 6**.
* As it is **tree**, so the **V + E** becomes **V + E -> V + (V - 1) -> 2V - 1 -> O(V)**.
* Answer -> **O(V)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2240d4a-3f18-494c-9794-1e4977844960)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f66f8f75-d12b-496b-99a8-128df9b6e5a6)

* Option **C** [Perfect Answer]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d24ff514-0078-4a5c-b40b-08225bd88c73)

* Option **B** is **correct** when there is **no mention** of **tree** in the **question**. [**IMPORTANT**]
* Given **directed graph** then it would have been option **B** as the **correct** answer.
* [**IMPORTANT**]
* Instead of **adjacency list** it is **adjacency matrix** then it is **O(V ^ 2)** as we have to **scan** the **total matrix**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/068ecaa6-d332-4c99-a383-1eb0de6c17a6)

* Graph -> O(V + E). [Option **B**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fbe9051-0d26-4938-aa7b-cc1c9756d02a)

* Complete Graph -> O(V + E) -> O(V + V^2) -> O(V ^ 2) [Option **A**] [E = V ^ 2] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6e1eb72-9a18-4c71-8af0-44eb356f052e)

* Option **C**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3a0e2b0-052d-454a-a8ed-42808faec285)

* Graph -> O(V + E) [Maybe no. of edges is zero(0)]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f19f8db-93f2-487a-af96-84740cb69446)

* In **tree** we can say **O(V)** guranteed because **tree** is always **connected**. [O(V + E) -> V + (V - 1) -> O(V)]
* In **graph** where is **no gurantee**. Anything is a **graph**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cb71754-2529-4e76-85f8-dc1c0f95fcae)

* Question.
* It is a **binary search**.
* Indirectly asking for **Upper bound**.
* Always -> Least no. of comparisions and worst case.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffc6d0a3-a1fe-4d78-b0c0-b06b8d6898bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f384f763-fde6-43b7-8fae-f04cd7461a8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29d6b165-9fc9-4700-9d14-9e074207ea0f)

* Option **A**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c0b3669-2c33-4524-ab33-0aa6b0746d69)

* Formula [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a5a0201-5f8c-4cac-a4ba-47552d0109a5)

* **Ternary and binary** search.
* **Powers of 2** we will go.
* **Dividing by 2 or multiplying by 2** always is **binary search**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04a0944f-b0e0-466a-b84a-2084bdd17fe2)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84eb3adf-1908-49fe-899d-1317e8a91aeb)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95ecaa21-5342-4f50-b70e-7a6ec04c3fb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d60674d3-878d-4a9d-9b18-631727694177)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fdfac52-6393-4034-949a-2556d8af9e63)

* Option **C**.
* Determine -> Verify. 
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29957dfc-b6cd-4e47-8a9e-bf41624bb633)

* Un-sorted array.
* Voting algo
* Time Complexity -> **O(n)**.
* Sorted array and majority element exists -> **O(1)**.
* Sorted array and to determine majority element -> log n.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5612869-a311-443e-8feb-0d7e437b60c2)

* Question.
* Find **time complexity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8882947-babe-4fd3-9975-7966fb770b05)

* **i** is always **incrementing by one**.
* The **last element** that is going to satisfy the condition is **n ^ (7/5)**.
* The loop is repeating **n ^ (7/5)** times.
* This is **outer loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa844e19-28fc-450f-88e5-7bf519488a00)

* The **inner loop** is having **no brackets**.
* **j** is always **incrementing by one**.
* The **last element** that is going to satisfy the condition is **n ^ (99/27)**.
* The loop is repeating **n ^ (99/27)** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29048512-ce8e-457d-99c1-11bf4581b19f)

* After the **j** loop is done there is a **return** statement. So the **return** statement is executed and we go out of the **function**.
* So **i** loop is executed **two times** because for **i = 1** it doesn't pass the **if** condition but for **i = 2**, it passes the **if** condition and the whole **j** loop is executed and because of the **return** statement we exit out of the **function**.
* Overall Time Complexity -> 1 * n ^ (99/27) -> O(n ^ (99/27)). [As **i** loop runs for only **two** times]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b40fca65-eb7a-455b-8b23-f13b1740ab31)

* Answer.
* We are able to go inside only once. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f41af6d8-b8f5-477c-a7d7-a95b1cec9603)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89f79f42-b437-4e59-9c7f-2ca5ea2aea06)

* The **return** statement is not there then **multiply**.
* Answer -> O(n ^ (7/5) * n ^ (99/27)).
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a7b335f-c8d3-491b-9895-c02b9eb54581)

* **j** loop will be executed only for **even** numbers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdaf0eab-8767-43f5-a15d-c20daee9ff7a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/085ffcf0-2d56-4d88-aa0f-c6e72544c708)

* It is **asymptotically** the **same**. No need to write **1/2**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce73de45-c014-4e14-a3c9-29341106e598)

* Asymptotically **same** [Answer]
* **Return** keyword **usage** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/226826db-e68f-4af8-b6cb-98c594b7262d)

* If **j** loop had **brackets** and the **return** statement was within the **brackets** of **j** loop itself then the **time complexity** is **O(1) or constant**. [**IMPORTANT**]
* **Trap** question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ddd5c68-4776-42d3-921d-d61948ae24aa)

* Yes.
* [**IMPORTANT**]
* In which loop **break** is there we will come out of that loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7debbe2-b63c-4dee-a537-bf3dab5df283)

* Time Complexity -> O(n ^ 3)
* Only the **inner loop** runs.
* The **return** statement is outside of the **inner loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/586a8d45-986b-477b-ba46-347b34936137)

* Different possibilities.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ae081a9-30b5-4eda-b5cd-570d3b83e26a)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12cdde85-134c-41f1-92c0-4e903a5d8655)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfd594f3-054b-42c5-a904-142954ec110c)

* Instead of **i++** there is **2 * i** then the time complexity of **i** loop is **O(1) or constant** because **i** is starting from **n/2** only. **i** loop will iternate **only two** times. [**IMPORTANT**] [TRAP]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80db67bb-f6c4-4efc-9e94-27f23e83d597)

* **j** loop is for **log n** time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d5e6a5e-d4dc-4538-8676-224ce4e256b5)

* For every **j** loop iteration we will multiply by **n/2** as every iteration we are **adding 'n/2'** to **k**. So it is **log n * (n/2)**.
* **i** loop is running for **n/2** time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c89b59b-aee0-49cd-9ffc-e1310dc37607)

* So it is **(n/2) * (log n * (n/2)) -> O((n ^ 2) * log n)** [Answer] [**IMPORTANT**]
* This is **value**.


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0dbab1e-0b45-4d17-b13d-4c6f0a1123db)

* Instead of **i++** there is **2 * i** then the time complexity of **i** loop is **O(1) or constant** because **i** is starting from **n/2** only. **i** loop will iternate **only two** times.
* So time complexity is **2 * log n * (n/2) -> O(n * log n)**. [Answer] [**IMPORTANT**]
* This is **value**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4961a460-4d04-433f-b300-0f8402105b63)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f6070f3-c119-4014-8703-9711e31ff318)

* For **time complexity(TC)** target **only loops** or **concentrate only on loops**. [Time Complexities]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71b57349-5689-413b-8e33-1324b2c4ed58)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df9768c7-e09a-40f2-a837-cfb2eef3f536)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ea4b6ed-8c3f-4bda-a0a0-8375fb5fd2ef)

* If instead of **k = K + n/2** it is **k = k + 1** then the **value** and the **time complexity** will be the **same**. 
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b69334de-f415-467d-b69a-a589cc3547c2)

* At the end of the **loops**, the **value of 'k'** is **zero(0)** only but the **time complexity** is **O(n * log n)**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb1cf4ac-522e-4013-876a-b39e58601721)

* If instead of **k = K + n/2** it is **k = k * n/2** then the **value of 'k'** is **zero(0)** and the **time complexity** is **O(n * log n)**.
* **Value of 'k'** is **zero(0)** because **k = 0** initially and anything multiplied by **zero(0)** is **zero(0) only**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89f1403e-5afa-46e8-acba-01047b24873f)

* **k = 1** initially and instead of **k = K + n/2** it is **k = k * n/2**. What is the return value?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d7c2724-e864-4ae8-a809-193961c10ef5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea13d172-b99b-4acb-ae52-ce096af1ebba)

* **i** loop is for **n/2** time, **j** loop is for **log n** time. Every time **k** is multiplied by **n/2**. For **i = 1**, **j** is running for **log n** and **k** is multiplied by **n/2**. So **i = 1** we get **(n/2) ^ (log n)** for **k**.
* For the **n/2** times of **i** we will get **((n/2) ^ ((n/2) * log n))**.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/219c255d-78a0-482d-9eed-d92e6de59fdd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/747bd650-04b2-4b64-940f-b779f4983331)

* It will continue **log n** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5541f6fa-e0b0-4209-8632-ccf886beb7f4)

* Explaination. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/047ad73a-817a-4c81-a6c2-954da5c7c355)

* Answer
* [**VERY IMPORTANT**]
* **k** value has increased so much but the time complexity remains the **same** because **loops are the same**. Loop is not increasing or decreasing.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12ad6fe7-e8d2-4e55-991a-348fe0ea887d)

* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d1ae0f8-2d5e-458c-b038-1dfada6e51d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/096cacc4-2d2d-43f2-b3d6-120042a04319)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb8cd881-f339-4d1b-875a-c9e668b08ec8)

* As in the **k** loop there is **k < p** and we have calculated the value of **p** in **j** loop and we got **log n**, so **p** is **log n**.
* So **k** loop is **log(log n)**.
* If it was **k < n** then it would have been **log n**.
* **log n** is **greater than **log(log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/693c73b5-0578-40b6-9342-a6270a43feb6)

* So time complexity is **O(n * (log n + log(log n))) -> O(n * log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1100c311-245d-42a3-8c87-b44016691796)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/418e511f-e0cc-4411-8655-e3d485db8fb7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50aba8e9-89e9-45f9-bde2-1d33b2d37e3b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1451c1a8-5fbc-4508-a2b5-c387587561d3)

* **Value of k** is **O(n * log n)**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b76c296-206c-488b-ab5c-4c7a90f12296)

* **Value of k**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03917a74-53ec-4489-abd2-e3c544fd5b9b)

* **Values of p**.

## challenging-problems-ii(2)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ec9789a-94ce-43e4-bb32-cbe4dfcda6b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6765904-130e-4cc5-959d-7e8eacea1a32)

* Just return **mid element**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53dfee41-250a-440e-ab2f-cf53040d0765)

* Link -> https://gateoverflow.in/452/gate-cse-2008-question-40

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25aae6b2-b40d-435e-a670-c4778baaf997)

* Option **B**. [log n]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1967750-2457-4dd8-b7e9-170ddd860320)

* Option **A**.
* It is an **array** and not a **sorted array**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa20ac28-269d-4e17-b236-2a5c19c2bd32)

* Candidate(C), Votes(V).
* Whenever **votes** are **zero(0)** change the candidates.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e49b653f-c39f-497e-8000-7d6dbfd50003)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1640262e-51c8-4637-92fb-c605bcc61155)

* Voter's algorithm [**IMPORTANT**]
* **10** is the **last candidate**.
* The most probable winner is whoever the **last candidate** is.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82b3a544-4a21-4d26-89df-4d8a8a49e42a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c79afec-dc4e-4ec9-81f0-6c841affd71b)

* Finding **probable winner**.
* **1 scan** for potential candidate finding.
* **1 scan** for confirming the potential candidate winning.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/885b34d7-51cc-4b5a-b471-6d9cdb172b78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80483f35-4c63-4d8c-b078-083d493797a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27c13c6e-6b85-47b9-bea1-9757727c541c)

* Overall it is **O(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd36a331-355a-4b24-8779-d48d61fe5482)

* Probable candidate is **50**.
* **50** value is more than half, so **50** is the **answer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61ddbc5d-91d7-4183-9fa5-6317fb16e8ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ebb84e0-9524-40c3-8f36-ab397069fd2a)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/661c0351-f592-486b-9838-c0d2a7cb6169)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65731ddd-269b-4df3-949c-e7e09bc395a7)

* Unsorted Array(USA)
* Sorted Doubly Linked List(SDL)
* To find an element **x** in an **unsorted array** will take **n** time.
* **Min-heap** is not a **search tree**. **BST/AVL** is a **search tree**.
* **Min-heap** is meant for **minimum element finding**.
* To find an element **x** in a **Min-heap** will take **n** time.
* To find an element **x** in a **sorted array** will take **log n** time because we applied **binary search**.
* To find an element **x** in a **sorted double linked list** will take **n** time because we have to apply **linear search**, **binary search** is not effective.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8acf2388-44f3-44d1-ad62-ed700ebc4b08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75638c65-af22-42ed-b044-d06c001d7c77)

* For **insertion** of **x** in **unsorted array** will take **constant(1)** time. If an element is already there in the array where we want to **insert 'x'** then we will move the already inserted element to last place and place the inserted element at that place.
* a[n] = a[5]
* For **insertion** of **x** in **min heap**, it is same as **finding 'x'** in min-heap it will take **n** time because we will insert the element at the **end** and we will use **heapify** to find the correct place for **x**. 
* For **insertion** of **x** in **sorted array** we will insert the element at the end of the array and the array will be **unsorted** so we will have to **shift/move** the element to the correct position to make the array sorted again. **Worst case** is that we have to take the inserted element from the **right most place** to the **left most place**.  
* For **insertion** of **x** in **sorted doubly linked list** we will not insert at the **beginning** we will iterate and find the number which is **just bigger than 'x'** and we will **insert 'x'** before that number only. So this will take **n** time for inserting 'x'.   

* n * 1, n * logn, n ^ 2, n ^ 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b58e98e-ae9e-4ee8-aa25-6212868bde88)

* For **deletion**, the address of the element is given which is to be **deleted**.
* **Gap** cannot be present within or an **array**. So after **deletion** of the element, take the **last element** of the array and put it in that address. Replace the deleted element with the last element.
* For deletion of element **x** from the **unsorted array**, it will take **constant time** because the address of the element to be *deleted* is given and we are filling the gap of the deleted element by replacing it with the last element of the array.
* **Unsorted array** so order doesn't matter.
* For deletion of element **x** from **min-heap**, it will take **log n** time because after deletion we will have to take the **last element** and put it in the deleted element place and we will have to do **heapify** method.
* For **sorted array**, when we delete 'x', it will take **n** time because deleting 'x' is constant as address is given but because of sorted array, we have to **left shift** all of the elements after the deleted element to fill the gap of the deleted element.
* **Worst Case** is **n** elements are **left shift**.
* For **sorted doubly linked list**, when we delete 'x', it will take **constant** time because deleting 'x' is constant as address is given and we can fill the gap by just linking the **previous and next** nodes of the deleted node.

* sqrt(log n) * 1, log n * sqrt(logn), n * sqrt(logn), 1 * sqrt(log n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9567f07-7844-45e7-b3c8-e0de376d9fbd)

* For the **decrease key** operation, the address of the element is given.
* For **unsorted array**, for element **x**, it will take **constant** time, as address is given and the order doesn't matter.
* For **min heap**, for element **x**, it will take **log n** time, as after performing **decrease key** operation we will have to perform **heapify** operation.
* For **sorted array**, for element **x**, it will take **n** time, as after performing **decrease key** operation we will have to **sort** the array as the **left elements** maybe bigger than the **updated element**.
* For **sorted doubly linked list**, for element **x**, it will take **n** time, as after performing **decrease key** operation we will have to **sort** the **linked list** as the **left elements** maybe bigger than the **updated element**. **Same** as **sorted array**.

* 1 * sqrt(log n), logn * sqrt(log n), n * sqrt(log n), n * sqrt(log n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7876ac51-70a4-43cb-96b6-23cc281b9107)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ffe443a-493e-4672-858c-7a3501dc6f13)

* [**IMPORTANT**]
* We know that for **min-heap** tree that **insertion and deletion** take **log n** time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23a7e4cb-cd70-4dec-ae96-0e498fe71113)

* Answer -> Unsorted array. [**IMPORTANT**]
* Option **A**.
* For **finding elements**, **unsorted array** is the **worst**.
* As **unsorted array** mostly **no conditions** are there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8f148b0-9005-4946-86e9-ae9dcf4f55f4)

* [**VERY VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b625c3b-1925-4049-b0b2-ba81b224dbbb)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/229338d7-73b0-44d1-b870-3ec9b82ef5d7)

* Loop happened for **k** times.
* After **k**, fail will happen.
* At **(k + 1)**, loop failed.
* **K** times only, loop passed.
* Sum of **k** natural number is **k ^ 2**.
* So **k** is approximately **sqrt(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e08b2419-1794-4cd4-b814-c9183462dd53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52f638bc-46e3-45c8-9cea-b6230fb69f03)

* Time Complexity -> O(sqrt(n))
* So loop is repeated **sqrt(n)** times.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c19a13c7-a996-4e31-9a85-d1d77ebacc82)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d7afb62-0109-4560-b482-e5cb91a31b24)

* Sum of squares of **k ^ 2** natural numbers -> (K * (k + 1) * (2 * k + 1))/6
* Formula [**IMPORTANT**]
* k = n ^ (1/3)
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac4e180f-4794-4803-913a-81b0ff500933)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9903802e-8003-44ce-9ec1-f6ea16ab1cc1)

* Question.
* Instead of **i ^ 2**, we have **2 ^ i**.
* Sum of **k** natural numbers in the **GP**.
* Doubt.
* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/905D320581

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/521bc98c-72f9-47d7-8633-e7646e25b5b0)

* Question.
* We have **n** arrays and the size of each array is **n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/909967df-1a14-4a3e-a466-457b5a707c75)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bef1add9-3090-40c6-9d22-6e967a684d79)

* **NOTE**. [**IMPORTANT**]
* In **n** elements of **unsorted array** to find **median**, time complexity is **O(n)**.
* In **n** elements of **sorted array** to find **median**, time complexity is **O(1)**. **Median** is the **middle element**.
* Median = n/2 [Smallest element]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d00340c-ab54-4379-b4e2-be322c6d7630)

* For every array to find the median is **n** and for **n** arrays it is **n * n -> n ^ 2** time taken.
* Now we have **n** medians.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95181eeb-5dd9-40ce-bbec-b020744869cb)

* **Median** of **n** arrays.
* **n ^ 2** for finding **individual medians** and **n** to find the **last/final median**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e2d3ff5-e49a-484d-8b7b-b42a1a434781)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1385c777-7c77-43a1-b3ef-f86ff9c024cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8785aa41-3f49-4688-ad78-317de9c092bc)

* **n ^ 2 + n -> O(n ^ 2)** [Answer]
* Option **B**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8c98909-982a-4cf7-9e20-6858986c5112)

* If instead of **Big-O** in the **options** we have **Omega** which is **lower bound** so we got **O(n ^ 2)** as the **answer** so option **A, B and C** are **correct answer**.
* [**IMPORTANT**]
* If all of the option contain **Big-O** then option **B and D** are **correct**.
* If all of the option contain **Theta** then option **B** are **correct**.
* If all of the **arrays** are **sorted** then the **answer** is **n + n -> 2 * n -> O(n)** which is option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0343909-e640-4cfb-aa54-116b3a08827b)

* Big-O -> Right side will be more or equal.
* Omega -> Left side will be more or equal.
* Theta -> Left and right side both are equal.
* [**IMPORTANT**]


## challenging-problems-iii(3)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d25890f4-eb33-400f-89bb-31c913b6e95c)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e01bff0-43e0-465e-92f5-2d057ce35624)

* There is a graph(G) to that graph we constructed an **MST(T)**.
* No. of edges maybe more in the **graph** but the no. of edges is **V - 1** in **MST**. [V -> Vertices]
* **T** contains **6 vertices** and **5 edges**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/966ec097-4fe0-4d85-8f07-acbba49462d7)

* Between **adjacency list and adjacency matrix** representation, **adjacency list** is better/best because **adjacency matrix** always takes **O(V ^ 2)** time. Until and unless mentioned in the question about **complete graph**, don't go for **adjacency matrix**. Normally **list only**.
* **O(V ^ 2)** matrix is the best idea when we have **V ^ 2** edges which is a **complete graph**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0930a1b2-2178-417c-b48a-116c688389c8)

* Previously **C to E** edge not there.
* Before construction **MST**, original graph does not contain **C to E** edge.
* In the given graph(G) a new edge is added.
* Graph is now a little bit modified.
* MST(T) is the MST of the **old graph**.
* Modified graph is **G'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62e1b447-84f3-4b7f-9ed6-b7a83906cd39)

* Now to construct **MST** for the new **graph(G')** how long will it take?
* The new edge that is added in the graph(G') will go to the **new MST** or not, we will have to chek.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4aa05eee-0026-42d6-8bc8-bab36cc4bdb1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/555863b7-c540-4427-92d4-821180f0a6bf)

* **C** adjacent is **E** and we have added **E** to the **adjacency list** of **C**.
* Time taken is **constant**.
* As it is an **array**, we can directly go to **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/894ea877-bf02-4390-be0a-50668bc72d2f)

* We have added like this. It is a **cycle**.
* **MST** already contains **(V - 1)** edges. If we add another edge then gurantee **cycle** will come.
* If **cycle** will come then the **edge** will be **rejected**.
* How to check if cycle is there or not?

> No need to check/verify also. We know **MST** contains **(V - 1)** edges, so if we add another edge then **cycle** will come. So it is confirmed/guranteed that **cycle** will come, no need to **check**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7f3d97d-3a7d-470d-a3a5-233838513159)

* No need to check if cycle is there or not. **Cycle** will always come.
* Because of **cycle** we cannot **add the edge**.
* Because of **cycle** we cannot **delete the new edge**.
* When **cycle** comes don't **delete** the **new edge**, check among the **cycle** who has the **largest(max) weight**. It is **19** here. So **delete '19'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7839667-36f8-4f43-98c4-c90ae193c01f)

* In the **cycle**, find out who is the **largest** and **delete** it.
* We are deleting the largest one within the **cycle** and not within the **MST**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/529261bf-ee49-4ac7-bc8a-ca592105fa6a)

* Largest one within the **MST** would have been **70**, we wouldn't be able to **delete 70**.
* By adding the edge, **cycle** came, within the **cycle**, find the **largest weight** edge. [**IMPORTANT**]
* We added **2** from **C to E**.
* We applied **BFS and DFS** to find out the **participants of the cycle**.
* We applied **BFS and DFS** on the **adjacency list** so the time taken is **V + E -> V + V -> 2 * V**.
* Here **E** is **V** only. It is not a **graph**, it is **MST**. **MST** having **V** edges only. It is not **(V - 1)** because **we added one(1) edge**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce49bc90-ba21-4270-9d77-11f2d81bcd12)

* After cycle checking is over, we have to delete the **max weight** edge. Out of **V** edges, we have to find the **max** and it will take **V** time.
* In the **worst case** all of the **'V' edges** can participate in the **cycle**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac4ced75-3f3b-41ac-9134-8eb15b71a4ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea005d5a-b87b-4f51-b5a9-6de39a3aab2f)

* So finally **2 * v + V -> 3 * V -> O(V)**.
* There is no **E** here.
* We are doing this in the **MST**. [**IMPORTANT**]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7e15bec-050c-44fa-882c-407db9b44778)

* Then delete **1 edge**.
* Delete anyone of them.
* In **adjacency matrix**, we have to scan the **total row**.
* If instead of **adjacency list**, it is given **adjacency matrix** then the time is **O(V ^ 2)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c99325c-2617-4ddb-8cb1-8b209775ec7a)

* Option **D**.
* [**TRICK and IMPORTANT**]
* Bellman ford is meant for **negative edge weights**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6104eb6f-79ed-46a0-a50a-5a043adb1388)

* If **adjacency matrix** given then it is **O(V ^ 2)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8518e60-d29f-4111-a681-fa186c2e1604)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d34993ba-abb0-49b6-b520-76ef356b0a92)

* Question
* Array **A** has **n** slots where every element is **0 or 1**.
* We can take **all 0's or all 1's**. We can take combination of **0's and 1's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5910e1a-f80a-426c-8a4a-cb582370958b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/301c7c4b-1298-4317-aa0f-1467fb179af1)

* Assume all **1's** are there then we will never go to the **else** part and in turn never go to the **f()** function.
* As the array size is **n** so the loop will repeat **n** times.
* So the time complexity is **O(n)** as **only one scan** is required.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b05db7c9-9e9e-455e-805c-cddaa1188688)

* Assume all **0's** are there then we will never go to the **if** part and in turn will always go to the **f()** function.
* Everytime we will go to **else** part.
* We know that **f(m)** time complexity is **Theta(m)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/087dcd90-1eb8-4fec-8840-0aefb0454516)

* So **f(0)** time complexity is **Theta(0)** which is **minimum time complexity** and it is **O(1) or constant**.
* All zeroes(0), so everytime **f(0) -> constant**.
* So time complexity for **all zeroes** is **1 * n -> O(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a810a5e1-6817-4422-935c-4993370b0466)

* The fucntion **f()** time complexity is **dependent** on the **input**.
* If **inputs** are **more** then **f()** time complexity is also **more**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79544929-a16f-4c2a-a033-e283ed264de3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2619f016-1b5e-4f51-b66e-32c8d023e2e7)

* If **half 1's and half 0's** are there.
* So half of the time it is in **if** part and half of the time it is in **else** part.
* If we do **half time if** then the **counter** value is **n/2**.
* So for the **half 1's** the **time complexity** is **n/2 -> O(n)**.
* For the **1st 0's**, we will go to the **else part**, so the **f()** is called and we know that **counter = n/2** so **f(n/2)** is called which is **Theta(n/2) -> Theta(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a00e9522-5995-452e-af73-4dc6f58768e7)

* n/2 is **Theta(n/2) -> Theta(n)**. [YES]
* Asymptotically we can write **both**.
* After the **f()** is over, **counter = 0**.
* From the **2nd zero(0)** onwards the same thing will happen that happened when **all zeroes(0)** were taken.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5b8db92-0cbf-4052-b954-8086bbf2629d)

* For the rest zeroes(0), time is **constant** for **1 zero(0) and for the **n/2 - 1** zeroes it is **1 * (n/2 - 1) -> n/2 -> O(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab7c65d2-ad3c-4bfd-9bb2-4375722df758)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b279209b-6c31-4c23-9ccf-3f82d0efd105)

* So the **overall time complexity** is **O(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/684c2f2e-f4b6-4a71-a2f6-db97baa07182)

* if the line **counter =0** is not there then what happened with the **1st zero(0)** that same thing will happen with the rest of the zeroes as well. For **1 zero(0)** it is **n/2** time and we have **n/2** zeroes(0). So it is **n/2 * n/2 -> O(n ^ 2)**. [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfbe8b95-9af4-49fd-9efe-8021298ecb10)

* Overall it is **n + n + n -> 3 *n -> O(n)**.
* The **time complexity** of the **program** is finally **n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6822e638-98a8-4cea-ad61-935f5d8ee2a7)

* Checking the options by putting **n** on the **left hand side**.
* Option **C and D**. [MSQ] [Answer] [**VERY IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecee8a42-c169-4147-9110-463ed97b4806)

* Yes, **C** option contains **D** also. **Theta(n)** contains **O(n) and Omega(n)**. [**IMPORTANT**]
* Option **C**. [MCQ]
* **C** is the **superset** of **D**. Choose **superset** over subset.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2286d78-edf6-4c87-8134-52a3752e04a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4753b77-a7b3-4136-8e61-7ed33b943d99)

* Question.
* All 0's -> n -> o(n)
* All 1's -> n -> O(n)
* Half 0's and Half 1's -> n/2 + n/2 * n/2 -> n ^ 2 -> O(n ^ 2).
* If not mentioned which **case** to find then find out **two cases(best,worst)** then we can select the **best option**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c725e3ea-f11e-40fd-918d-c2a50ed91d46)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c34e996-9bcc-4471-86f5-208df4e3f54a)

* **Minimum** is **n** and **maximum** is **(n ^ 2)**.
* Option **E and G**. [Answer] [**IMPORTANT**]
* The time complexity of **f()** is given that is a **trap**. Be very careful. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e309787-25fb-45df-9b61-29c1ea06cb4b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26aec662-75b6-422e-b67b-74ae5ac242c7)

* Question
* Here time complexity of **f(m)** which is **Theta(n)** is **independent** of the **inputs** send to **f()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/414ea081-ac93-4000-8b82-0159530ab362)

* For **all 0's**, we will get time complexity as **n ^ 2** because for **f(0)** we are getting **n** time as **input** of **f()** is **independent** of the time complexity of **f()**. So for **'n' 0's** we will get **n * n -> n ^ 2** time. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3afea37c-71c4-44b9-a35f-8b526f41ac6a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68bd2692-0824-4a09-aa33-f895be401c3a)

* For the **half 0's and half 1's** we will get **n ^ 2** because for the **half 1's** it is **n/2** and for the **half 0's** it is **n/2 * n/2 -> n ^ 2**. So **n + n ^ 2 -> n ^ 2** time.
* Option **E**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c12971b5-d99f-4b67-a91f-07f2a1f34445)

* **returns** means we will stop the program.
* Now **best case** is **O(1)** for **all 1's**.
* **Worst case** is **O(n ^ 2)** for **all 0's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ed80e73-80db-47c3-b9b7-8e1bf885463b)

* Option **E** which is **O(n ^ 2)** is **correct**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef796ac1-958d-42d9-b430-b425ef81be54)

* Question.
* Doubt.


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/053030e9-38ac-4e25-a819-0d6f9da2f541)

* Question.
* Option **B**.
* In **f2()** there is **1 loop** so it takes **O(n)** times.
* In **f1()** we have **recursio**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a33a545e-5b2b-4913-a09d-fe6b08f1a1ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6062808-37db-4918-8a66-74402b088ede)

* because of **two function calls** it is generating **binary tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcb391da-d158-4bda-96d2-e4e29ef71df5)

* Option **B**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e489269e-139a-4441-8f99-42a638eeb94d)

* Question.
* Because of the loop ther are so many recursive calls.
* It is asking for **space complexity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c14de11d-7bd2-4118-a849-d6b7d7cbbf88)

* Recursion program **space complexity** is not based on **no. of function call**, it is based on **no. of levels**. [**IMPORTANT**] [NOTE]
* When drawing the **recursive tree**, either expand the **leftmost or the rightmost** tree. If needed then expand the **middle**.
* Recursion program **stack space** is based on **no. of levels**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06956770-7abb-4bc4-bc9a-d21a08c67a78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d4bd604-0fa2-4409-af9a-0d128c908077)

* **Complete binary tree** approximately contains **2 ^ n** nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/498189e8-3d8c-4787-acd5-8bb415c6ba7e)

* No. of calls is **n ^ n**.
* No. of levels is **n + 1 -> O(n)**.
* Space Complexity -> **O(n)**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5580343-3468-4d19-846a-e32d4cd548b3)

* Question.
* As soon as we **compute** and store the value, **space** is going to **increase** and **time** is going to **decrease**.
* We have to add a **table** to store the **computed** values.
* Stack size is **n + 1** and the table size is **n + 1**.
* So the overall size is **n + 1 + n + 1 -> O(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad751b98-cd67-4219-8c9b-6c8e09cd20b0)

* Option **B**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8df7fd75-324a-43f6-8613-a3db7a99e97f)

* DFC -> Distinct Function calls.
* For **space complexity**, because of **recursion**, **stack** is required and for **storage** the table is required.
* For **normal programs** the **space complexity** required is **no. of levels**.
* For **Dynamic programming** the **space complexity** required is **no. of levels and a table** also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/814eee29-324f-4984-b1f0-6259f57ee9ae)

* If we write **recursive** programming then the whole tree will go into the **stack**.
* If we write **dynamic** programming then **only** the **distinct values** will go into the **stack**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e7b765e-f276-4b71-ab57-040d9633a921)

* In normal stack everyone is going inside.
* In dynamic programming stack before calling we will verify/check if it is already there or not. If already available then don't call.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b833186a-acbd-4a2b-a462-b444312b3429)

* In dynamic programming stack(DP), who are not available at that point of time then they will come.
* In the normal stack(N-DP), all of the elements will be pushed.
* In the tree, **left** will be called **first**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/777c97b7-d599-46eb-baa8-f95bac676831)

* Because of the for loop for **i = n - 1** and **n=5**, so we will call **f(4)**. Left side has more height here, we have to go more. Initially nothing is available.
* In the tree **left** will be done first. When we go to **right** last then all are available.
* If we **reverse** it then in the tree **left** is not available. After sometime we will go to the **right** side and all are available.
* In dynamic programming, we can save **stack space** when comparing **left and right** height, **left** height is more then we **cannot save**. If **right** height is **more** then we can **save**.

## challenging-problems-iv-and-doubt-clearing-session(4)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60c318eb-78c0-4a31-9780-4f957b59d184)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e58fb56-9f73-4fcd-be45-459bb9c778b0)

* Take any 3 elements, need not be **continuously**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30fd14b0-8678-4620-8050-d707e6fa57a4)

* If **distinct** is not there and we pick 3 elements then after **sorting** the elements we cannot gurantee that the **middle element** is either **maxma or minima**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c667df83-b028-40df-9d47-a87cca13e5e4)

* Yes, for that we have to **scan** and find **3 distinct elements**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4b11448-0460-4765-b1f1-3799520959db)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d31064ba-145b-4022-bb32-9faf4ffeef0f)

* It is **not distinct** and **unsorted**.
* **Worst case** is **n** time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a45bfa26-7c1f-4c23-a70c-2adc05d3be37)

* Best case is **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e23c58da-68f1-4230-a4fa-745ebe29f442)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fefe24c-18ae-4680-8958-ff5c5f4cf473)

* It is **distinct and unsorted**.
* For **distinct**, it is **O(1)** for **every case(EC)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53a2a859-ff48-4778-a661-c187a722e3fe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35f6bfc1-8a49-4134-9652-98627b8ddcbb)

* It is **not distinct** and **sorted**.
* Take the **first element** which is **10** and find out the **last 10**. To find the **last 10** apply **binary search**.
* Best case is **1**.
* Only for 3 elements, two binary search(BS) is enough.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d66c94f7-3854-44fa-a64c-d9946301aade)

* Question.
* It is **distinct and unsorted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/296dff0c-a3aa-4236-937a-e96db8c5355a)

* Take **21 elements** which will take **O(1)** time then **sort** the elements which will take **O(1)** time and then we will return the **11th element** which will take **O(1)** time.
* So the overall is **O(1)** for **every case(EC)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1da2f5b4-0b80-45d5-b884-42ee87350b53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f86bf5ca-0cb1-4502-a438-aafff7129751)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfdd4d1e-c1f7-4772-9dc5-f0124fd1e3e5)

* If it is **unsorted and distinct** not there then the time taken is **O(n)** for **every case(EC)** because we don't know which **21 elements** to take because **distinct not there**. We need to do **one scan**.
* If it is **sorted and distinct** then the time taken is **O(1)** for **every case(EC)**.
* If it is **sorted and distinct** not there then the time taken is **O(log n)** because we can apply **binary search** here.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17ac9af3-9571-48e9-a878-45e1f5317038)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2087e25a-7a23-4b66-a019-2f7b816c1925)

* Question.
* Time complexity is based on what is the value of **k**.
* Sorting is going to take **k log k** and we will return the **mid** element.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27d87c0c-efa1-4056-83f9-4fb6ad4ac52f)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a29b7692-825a-490e-b972-e750bb249e0c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42401eaa-5a39-4750-aeac-75ccbc99feb7)

* Question.
* A vertex is said to be a **Universal Sink** if the **above condition** is met.
* Out-degree -> 0
* In-degree -> V - 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0821b6d3-a717-4b2d-98e7-da4e3a76950c)

* Weighted graph. It has **4 vertices**.
* For **vertex 1** it has **2 out-degree** and **1 in-degree**.
* For **vertex 2** it has **1 out-degree** and **2 in-degree**.
* For **vertex 3** it has **0 out-degree** and **3 in-degree**.
* For **vertex 4** it has **3 out-degree** and **0 in-degree**.
* Graph is represented in the form of **adjacency matrix**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd6bb927-dc39-46da-9912-d4bcbd7e337c)

* We have a **universal sink**. It is **vertex '3'**.
* For a **vertex** we want to check **universal sink**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfd5d12f-69ee-42ed-aa31-fa15c9d37b0b)

* There is no edge weights here.
* Options **B**.
* **3-4** as of now it's out-degree is **zero(0)**.
* **3** can be **universal sink**.
* **Column** indicate **in-degree** and **row** indicates **out-degree**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/558709ba-0262-47f0-9af7-7ce9bfb9322f)

* If we take two vertices(V1 and V2) and **V1 -> V2 is 1** means that **V1** cannot be **universal sink** because **out-degree** of **V1** is **1** as we are going outside.
* If we take two vertices(V1 and V2) and **V1 -> V2 is 0** means that **V2** cannot be **universal sink** because **out-degree** of **V1** is **0**.
* **1** means **first vertex** is cancelled and **0** means **2nd vertex** is cancelled. [**IMPORTANT**]
* Everytime **1 cancellation** is guranteed.
* **3 comparisions** are done and 3 elements are gone. Now **3** is only left out. So for the **3**, whoever is left out, verify **one row and one column** which are **3rd row and 3rd column**.
* Total time -> V - 1 + 2 * V -> 3 * V -> **O(V)**.
* Elimination -> V - 1.
* Verification -> 2 * V.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01bfdeda-b86c-435b-b6d6-dcedfca8b7a4)

* Option **B**.
* [**VERY IMPORTANT**]
* **I n-degree** actually require **(V - 1)** and to say **universal link**, **in-degree** required is **(V - 1)**. Everyone should come inside.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7827116b-f2ba-4228-b7d8-48157eba2bcd)

* **3 -> 1 is 0** there is no chance that **1** is **universal sink** because **3** said it will never come inside of **1**. There is chance of **3** to be **universal sink** because it has said **it will not come outside**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/781b9a8d-0bf4-4d33-8f3e-13fe52370f81)

* **V1 -> V2** is **0** then **V2** is gone.
* **V1 -> V2** is **1** then **V1** is gone. [LOGIC] [**IMPORTANT**]
* In case of **matrix** we can directly go.
* In **list** we cannot go directly. We have to work the **list**. So time taken which is **E or O(E)** and it is covering **Edges(E)**.
* All of the lists if we add then it is **E**.
* All of the lists if we add then it is **V ^ 2** that is for **complete graph**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c9ce0f6-84f2-42aa-a40c-2b3fa6641294)

* Question.
* **i** is row and **j** is column.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac9079a0-8e21-4850-9217-c6bf57262fbe)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b1f419d-2abb-4bef-a84a-796a6f1ac0e9)

* Universal link is **3** here.
* See **only matrix**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/524a53e0-75f2-4b1c-9e69-ae49d3fa3f5e)

* We have **10 vertices(V)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e820b20d-d857-4459-8efb-f1593db5c48b)

* For **1 -> 5** it is **1** so **1** is gone.
* **8** can be **universal sink**.
* Whatever **i** contain that is **universal sink**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bc38a2c-5256-406d-8a94-a0d5f4f68694)

* **row(i)** should be **zero(0)** and **column(j)** should be **1**.
* A[j][i] should be **1**.
* A[i][j] should be **0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b66f8058-1c78-44ec-93df-029d4f621f2a)

* Option **C** and then option **B**.
* Both should satisfy that why **and(&&)** operator.
* Doubt [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcf0e8c1-ba35-407d-a69c-d193cc50a3fa)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbe615f7-6ca8-49e1-8093-fcc3e74a3ada)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9df757d8-d244-4ef9-abd8-f3681e722a89)

* Question.
* It is a **recursive program**, write the **recurrence relation** and find the **time complexity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5717700-d95b-4c04-a8d1-4934ee62e1f8)

* Time Complexity -> log(log n).
* Doubt [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b6e6c7e-d842-4f1d-b89c-95be788adb09)

* Question.
* Link -> https://gateoverflow.in/3857/gate-it-2005-question-84b

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2ae85b8-73aa-46d5-9531-f1641e91ad6b)

* Solution.

## challenging-problems-v (5)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82278a63-ec50-4755-8e12-441805cebf56)

* Time Complexity is **O(log (log n))** as there is **no loop** in either **if or else** part.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ac7723f-e7f9-40f0-a929-1c477bfe0317)

* Answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be1c47e2-83de-46b4-8fca-c75936c619b2)

* Question.
* As we have **3 function calls** of **A()** that's why **3 * T(n)** and **constant(C)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9755d18-0e98-493f-b2c3-c1573edf9a9a)

* There is **no loop** in **if part**.
* Using **Master's theorem**.
* T(n) = 3 * T(n/2) + C
* a = 3, b = 2
* n ^ (log a base b) -> n ^ (log 3 base 2) [Formula] [**IMPORTANT**]
* **f(n)** is **constant**.
* As **n ^ (log 3 base 2)** is **bigger** than **f(n)** which is **contant** by **polynomial time** so it is **O(n ^ (log 3 base 2))**. [Answer]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac0d196d-2d29-456c-a369-30d159b95951)

* Question.
* There is **no loop** in **if part**.
* Just concentrate only on **loops and function calls**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/358cb3cf-1646-40d7-80e3-35d54feefd66)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/587d2840-5a1d-4033-860f-aa8524a866a2)

* Using **Master's theorem**.
* **n ^ 2 and n** are small small operations which are **constant terms** leave them.
* A(n/2) + A(n/2) -> 2 * T(n/2)
* a = 2, b = 2.
* n ^ log a base b -> n ^ (log 2 base 2) -> n ^ 1 -> n
* **f(n)** is **constant(1)**.
* So **n** is **greater** than **f(n)** which is **constant(1)**.
* So **time complexity** is **O(n)**.
* It is **2 * T(n/2) + C** because there is **no loops**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a9a5870-19cb-4cca-935d-34694294fc7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/285d15f8-38e0-4322-99dc-56aed3039397)

* Question.
* For each **i** iteration the **Bar()** will be called with **Bar(n/2)**.
* **4 * T(n/2)** is going to give us **no. of function calls**.
* The for loops of **i and j** are going to give us the **cost of 1 function call**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3738f8cf-c232-46f9-9778-2103cf8353fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98a66c01-fa60-4c0e-99e9-109cd27e6aa4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9742e457-6e7b-4f07-987f-54b7a5a9ad9a)

* Using **master's theorem**.
* T(n) = 4 * T(n/2) + n ^ 2.
* a= 4, b= 2.
* n ^ log a base b -> n ^ log 4 base 2 -> n ^ (2 * log 2 base 2) -> n * (2 * 1) -> n ^ 2.
* **f(n)** is **n ^ 2**.
* Both are **n ^ 2**. So according to **master's theorem**, on the **right side** write **(log n) ^ 0** then also both sides are **equal**.
* For the **answer** is the **right side** but insead of **(log n) ^ 0** we will do **+1** to the **power of log n** which is **(log n) ^ (0 + 1) -> (log n) ^ 1**.
* So **time complexity** is **O((n ^ 2) * (log n) ^ 1) -> O((n ^ 2) * log n)**. [Answer]
* Bar(n) -> (n ^ 2) * log n
* **Theta** possible means **Omega and Big-O** are possible as well. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b798e0a3-71c8-430b-95e6-af07e729e9b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b345b17-6f6e-46d1-83ea-6f324822e18f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70d64bd5-8378-4ca6-a8dd-ac8f26b1f000)

* All statements are **correct**.
* Answer -> 3.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/709b25e4-4696-4795-99b7-0e4c38b46b73)

* If the **for loop 'i'** above the **Bar(n/2)** recursive function call is not there then we will get **T(n/2)** and using **master's theorem** we will get **a = 1, b = 2**, which is **n ^ log 1 base 2 -> n ^ 0 -> 1** which is **constant**. We know that **f(n)** is **n ^ 2**. So the **right side** is **bigger** so the **time complexity** is **O(n ^ 2)**.
* **Time complexity** -> **O(n ^ 2)**. [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d810fe1f-98ec-4086-a565-54da2d62f16f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80182cbf-c046-4545-a463-344baad2fa76)

* For the **above condition** only **S3** statement is **correct**, so the **answer** is **1** only.
* Answer -> 1
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e255d23-a5b5-4793-86ae-ff48d1d43916)

* Even if we multiply **Bar(n/2)** with **2** which is **2 * Bar(n/2)**, we will get **4 * T(n/2)** because **2** is a **constant**. We will ignore it.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8e8cfa9-b67a-4830-bd12-c4c11adff091)

* Question.
* **i and j** are **same loops** only.
* k -> log n
* j -> n/2
* i -> n/2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b30d863-2363-4e4b-b8fa-6cad23a79944)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76052171-2dc8-4581-902f-bcc77b90bded)

* Overall -> (n/2 * log n * n/2) -> O((n ^ 2) * log n). [Answer] [**IMPORTANT**]
* **No dependency** also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/106660c9-ef75-45f6-836b-0678853cb8a8)

* Question.
* Program is given and we have to **search** accordingly.
* Uniform -> Equal probability.
* **Worst case** is actually **infinite**. We can take the same value of **i** over and over again.
* It is not going **one by one**, it is taking values **randomly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/095a2e96-d50e-4139-aa05-e94f26d71054)

* **Worst case** is actually **infinite**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b47ebe1-5576-401c-83e0-a8b2e965c76d)

* This is the **actual problem**.
* It is not going **one by one**, it is taking values **randomly**.
* When there is a concept of **picking randomly** then we have the concept of **expectation**.
* The question is asking what is the expected no. of comparisons.
* Expected no. of comparision = No. of comparisions * probability. [Formula] [**IMPORTANT**]
* E = 1 * (1/n) [Probability -> 1/n]
* Passed(P) -> 1/n
* Failed(F) -> 1 - (1/n).
* It will happen for **infinite** times.
* The common thing about them is **(1/n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ec2ce13-d667-4e73-96d0-d6c720c7ab36)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4eeac1f0-bc9f-47d8-b398-90b57bf59faa)

* We can write **1** as **1 * ((n-1)/2) ^ 0**.
* In every term the 2nd part looks like **GP**.
* In every term the 1st part looks like **AP**.
* It is an **AP-GP** series.
* Convert **AP-GP** series into **GP** series.
* In the **GP** series find the **r** value.  [r = (n-1)/n]
* So we will **multiply with 'r'** on both the sides.
* Just one **right shift** happened and it will continue till **infinite**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bf50431-aaab-479c-96bb-809116f51bb5)

* We will do **E - (E * ((n-1)/n))**.
* So the first value is **copied**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13d3d8ce-834c-45f3-888f-fe89679e6e2f)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2133e1c7-c523-4d24-a8bd-dd87d175f244)

* Sum of **n** terms in **GP** ->  (a * ((r ^ n) - 1))/(r-1) [**r** value is more than '1' and it is **finite GP**] [Formula] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbbaa197-7988-46b5-9b58-c5c0b98648fa)

* Sum of **n** terms in **GP** ->  a/(1 - r) [**r** value is more than '1' and it is **infinite GP**] [Formula] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aad897df-9de4-4f0c-a6b2-925ec94389c6)

* a = 1, r = (n-1)/n. [a = ((n-1)/n) ^ 0 = 1]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0be9d2c3-d7df-4880-be28-59319b647e99)

* E = n [**Expectation**] [Answer] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/455ad9f8-6993-447d-8717-e9a310e98cf9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b981553-10c4-45d5-aa18-c9452198686d)

* Expected no. of comparision = No. of comparisions * probability.
* Expectation [Formula] [**IMPORTANT**] [Probability Expectation]
* We are not picking **one by one**, we are picking **randomly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e206b750-11bd-4cb4-ad79-6366b5b1cb98)

* For **E**, we passed in the **1st try** so it is **1 * (1/n)**.
* For **E**, we passed in the **2nd try** so we failed in the **1st try** so it is **1 - (1 * (1/n))** which is for **fail(F)** and then we **passed(p)** which is **(1/n)**. So overall as we did **2 tries** so it is **2 * F * P -> 2 * (1 - (1 * (1/n))) * (1/n)**. It goes on like this for **infinite time**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5584afe2-d4e4-423b-b48f-477afea93a16)

* Max. no. of comparison is **infinite**.
* Assume **x** is present in **A** is not there. It doesn't matter because we are picking **randomly** and we are **checking** them.
* **Infinite** times we are checking.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a904dd5-97cf-48d8-9707-b4e834c6424a)

* Here in the question, it is mentioned that **x** is present in **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f60b2940-03fe-49d1-a137-1e8156350347)

* This is also **infinite**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53c9cd4f-1378-4c7e-b7dd-edc33778c609)

* Instead of the **logic** given in the question, we are using **linear search(LS)**.
* We are not taking **randomly** also. It is **linear search**.
* We are going to ask every element if it is the element we are **searching** in the **array(A)**.
* We have do **(n - 1)** comparisons and still no matching and we have **only one element** left.
* We cannot compare the **last element** with **x** because **element x** exists or is present. So no need to **compare**.
* We are asked to find the **maximum**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72deb0b0-eaca-4b56-89c1-72d58cbb8f3e)

* option **B** [Answer] [**IMPORTANT**]
* It is **not 'n'**, it is **(n-1)** because we are asked **maximum**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b02e71fc-e38a-424a-861c-0876a97f53b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09489c42-591a-4c6b-800c-a4b9689775eb)

* That line is not given that **Assume 'x' is present**. That's why it is **n** and not **(n - 1)**.
* **Worst Case** -> Maximum -> n  time
* Option **A**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab248c42-48f0-4632-bcc5-d82d5a59f3ce)

* Question.





















