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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddf0d471-9ee1-4c37-a96a-21d2984f818b)

* Question.
* Simply apply **Dijkstra's algo**.
* Source -> S. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9a2ec7a-09ef-4688-b78a-f3869ce7c8e7)

* Initial is **zero(0) and NULL(N)**. Rest are **infinite and Null(N)**.
* We selected **S** and now delete **S**.
* Adjacent of **S** is **A,B and D**.
* Now do **decrease key operation** on **A, B and D** from **S**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f9a8a75-fb18-4c92-ad74-64da60303e6d)

* Among the **adjacents**, **B** is better as it has **3**.
* After **S** next is **B**.
* Adjacent of **B** is **D**.
* Now do **decrease key operation** on **D** from **B**.
* We are getting **3 + 4 -> 7** from **B to D** and **D** already had **7**. As mentioned in the question that "we will **update** only when a strictly shorted path is discovered". So we will not **update 'D'**.
* If we **update** the cost will remain **same** but the **parent will change** from **S to B**. Path is **different**.
* **Shortest path** need not be **unique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c8fa518-827c-465d-9d9d-cc5acc61d346)

* After **B** it is **A** as it has **4**.
* Adjacent of **A** is **C**, now **C** is updated with **4 + 1 -> 5** and **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e1c648a-3f3e-49d9-90f1-f069a3e6d1e5)

* After **A** it is **C** as it has **5**.
* Adjacent of **C** is **G,E,D**, now **G** is updated with **5 + 2 -> 7** and **C**. **E** is updated with **5 + 1 -> 6** and **C**. For **D**, we are getting **5 + 3 -> 8** which is more than **7** that's why **D** is **not updated**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab23753-3b41-4f37-b309-f4369178b4c7)

* After **C** it is **E** as it has **6**.
* Adjacent of **E** is **G,T,D**, now **G** is with **6 + 2 -> 8** but **G** has **7** which is **smaller** so **G** is **not updated**.
* **T** is updated with **6 + 4 -> 10** and **E**. For **D**, we are getting **6 + 1 -> 7** which is **equal** to **7** that's why **D** is **not updated**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5495a1fe-f465-438e-990c-0d4197c33026)

* After **E** it is **G or D** as they both have **7**.Take any **7**. [No mention of what to do if two vertices have the **same cost**]
* We are taking **D** after **E**.
* Adjacent of **D** is **F,T**.
* **F** is **7 + 5 -> 12** and **D**.
* **T** is **7 + 3 -> 10** and **T** already had **10**, so **T** is not **updated**.
* **D to E** also but **E** is already completed. so leave it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96846344-4bcf-4916-81c8-8106c0f8b77a)

* Could be decided by the **options** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aea8df42-748f-4fe8-b09b-3fc878394569)

* After **D** it is **G** as it is **7**.
* Adjacent of **G** is **T**.
* **T** is **7 + 3 -> 10** and **T** already had **10**, so **T** is not **updated**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/700efb80-790a-44b2-b10c-30ecfd7b18c1)

* After **G** it is **T** as it is **10**.
* Adjacent of **T** is **F**.
* **F** is **10 + 5 -> 15** and **F** already had **12**, so **F** is not **updated**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dd1b764-09d0-4d52-af25-c9baccd7b5e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32e0c998-e6c5-4176-ab20-2411407fa3fd)

* After **T** it is **F** which is left out. No need to do anything extra. Just take it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56e6c35e-edb3-4c90-a8a8-ce2837922289)

* No options matching.
* Main goal is **next problem**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10acf395-9249-4f88-81bd-8bec70464789)

* Option **E**. [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02e31836-fd66-4c13-8af2-8383c7818c7d)

* Yes. Sir make a typo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52aa7fc2-12c5-4656-97f9-3b22d359b968)

* Question.
* It is looking for **shortest path** between **S to T**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c7be7a2-334e-449a-b81d-e480f18254f6)

* That's why we stored the names of the **vertices** from where the **previous came**. So we started from **T** and we say that it's parent is **E** so we go to **E** and we say that **E's** parent is **C** and **C's** parent is **A** and **A's parent** is **S**.
* SACET [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a899ef57-be96-473e-9112-264df479e1ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8896c4de-9380-4b75-a7d4-99880d779c8e)

* Option **D**.
* [**VERY IMPORTANT**]
* Simply **Dijkstra's** with **one condition**.
* **Reading and understand** what the **condition** is mentioned in the **question** is **very important**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d24de88-be1c-4a31-84e5-025bfa1958df)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c884c9dd-f905-4860-b3d5-96c73a2c6921)

* MST.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0ff1661-b124-4d08-92f5-538377794784)

* We have **MST** and if we add another edge then we will have **cycle**. If **cycle** came then we have to **delete** the larger one from the **cycle**.
* The **larger one** in the cycle is **9**. Instead of deleting **9** we deleted the edge from **A to B**, it means that the **edge weight** of **A to B** is more than **9** which is **10**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a843e72e-c140-44de-92e7-7e4bcd996c05)

* if the **edge weight** would have been **same** then we could have kept either one of them but it is mentioned in the question that the **edge weights** are **distinct**, so no need to be bothered about **same edge weights**.
* If **distinct edge weights** are not mentioned then instead of taking **10** we could have take **9** as the **edge weight** of the **deleted node**. [**IMPORTANT**]
* When in **doubt** read the **problem**.  [**IMPORTANT**]
* **ED** is **added** in **MST** and **cycle** came. Larger edge weight is **6** and we have to delete **6** but we deleted **E to D** edge because the **edge weight** of **E to D** would have been **7** which is more than **6**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d57a17e-c841-4923-95c8-4bd2cb2b0f39)

* **CD** is **added** in **MST** and **cycle** came. Larger edge weight is **15** and we have to delete **15** but we deleted **C to D** edge because the **edge weight** of **C to D** would have been **16** which is more than **15**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34ee1c99-2842-4c24-9c2e-8cf2f779d190)

* For every **MST** problem, edge weights are missing. Edge weight we have to give. We have to do the **similar/same process** we did **above**.
* Just add the cycle concept. Somehow bring **cycle concept** and delete the **larger one**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/197f7a9c-f84e-453c-9400-ddc92c8f3fc4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82e0ee2d-98b7-48a1-8f2b-7f2e9185dfbe)

* Min. possible sum of weights -> 10 + 9 + 2 + 15 + 16 + 7 + 4 + 6 -> 69
* Option **B** [Answer] [**VERY IMPORTANT**] [MOST Expected QUestion]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecfb9ab2-6fe6-4130-a4fc-9d9daae8ae04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ac5bc19-890d-4d32-83a2-4f579605b36e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80bccef0-ecb9-464c-bcd5-b429bb8ee5b3)

* Question.
* Minimum -> Distance.
* If we want to go to **H** from **A** we need to go via **E or F**.
* **E and F** can only come inside of **H**.
* **F** already came from **source** and it's cost is **7**. [Got **7** from the table. F.minimum]
* **E** already came from **source** and it's cost is **11**. [Got **11** from the table. E.minimum]
* We can go to inside of **H** either via **E** or via **F**.
* **F's cost** is **7**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24483281-1cdb-44ac-b523-daa11be21565)

* **H** is having there two offers.
* **H.minimum** is **19** and **H's parent** is **E**.
* So **H** has taken the offer of **E**.
* **E's offer** was **11 + x** so we know the cost is **19** so **11 + x = 19**. So **x** is **8**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b14ecfb8-0d0d-495e-a677-1cc9415191d4)

* Why **F** was not selected?

> It should be that **7 + y** is more than 19.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/357eb7a1-c1f7-4b57-a60d-211119da76be)

* yes.
* Possibilities of **y** are **12,13, ...**.
* **y** is **12 or more than 12**.
* It should be **x + y >= 20**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cfdcf8b4-0f13-44c0-ab5b-fc9a673bdc34)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a340ebe2-e3d1-4e00-9779-69087bc82113)

* We have to follow the **table** given in the **question**.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2971c1f6-5621-40c1-b6d0-20ea39057bc3)

* Question.
* **Point 'I'** is trying to say that **MST** is going to give **shortest path**.
* Between two people if we want **shortest path**, according to point **I**, construct **MST** for the given graph and **MST** itself is the **shortest path** among all of the people.
* **Indirectly** saying that **all pair shortest path** algo is not needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d102a5e-8563-4af1-8c4a-a1a194a3e0f4)

* Example
* We want to go from **A to C** then using **prim's algo**. One path is **3** and another path is **10**.
* Adjacent elements best one will be taken by **prim's algo** which is **3(A to B)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c645957b-0da7-4475-aea7-fe4270e7a709)

* From either sides **smaller weights** are taken which are **8 and 9** but the actual is **10** only. So the other two are **neglected**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3bef8d3-c01b-4a34-a226-6be235571d9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7135f3e2-b1c6-4882-98f4-de78f5af58a6)

* To go from **A to C**, actual cost is **10** but we are taking **8 + 9 -> 17**.
* Proof -> We studied two different algos for the two different things. If they are **same** then why did we study two different algos. They are **different**. It is **not correct**.
* Point **I**. [It is **wrong**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4974563-8fd4-41bc-b861-87f90a6ab559)

* Total edge weight -> 100045.
* Edges -> 10.
* Avg edge weight -> 100045/10 -> 10000 [Approx]
* Vertices -> 7.
* Edges -> V - 1 -> 7 - 1 -> 6.
* **MST** should contain **max. of 60000**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cabab9dd-b5e5-4780-bc2f-8ddd31df2285)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b2474d4-4a36-4752-9319-59d6f22651af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18519244-428e-4615-b448-461733d3803a)

* **100000** is deciding the story. Otherwise graph will be disconnected.
* Point **II**. [It is **wrong**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca2cd4d7-3ff0-4e86-a957-40ec8b3d767b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e714065-7301-4077-8480-bda36da41258)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04a02651-8f0b-4b55-b7b6-003925b476b8)

* option **D**.
* [**VERY IMPORTANT**]

##  challenging-problems-vi (6)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46dee05e-12d7-4897-9411-18c8d05b0d7b)

* Question.
* Elements are **same**. No need to sum. Elements as it is matching.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29fa7295-a166-45d4-8a2a-c30eb8a634c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8ccdf98-2310-4dec-907f-3d86d21bca99)

* Matching not there stop it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/460ca77c-218b-4bac-88f7-f57312b5616c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd0b14e8-23d6-450d-a1fd-52da00102988)

* After 20 time matching, on the 21st element we didn't get a matching, so stop it.
* Update the **largest span** to **20** now. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9a2edc5-0b1a-408d-b268-30a443602d41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d5bbbf7-8e16-4340-980a-929c134d11b2)

* Both the array will stop together as they are of the **same size**.
* We have done **only one scan** of both the arrays. [YES]
* Time Complexity -> **O(n)** for **Every Case(EC)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54461c3a-f318-449a-9d5c-7bb74a164d21)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d93e446-c821-4ade-bf71-0299ae09d998)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e55b0ba7-34b0-407a-8fe1-421ebe472f09)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/158ed700-3bfa-4f94-b285-a07268e4bd05)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6883d4ad-a3a3-4e20-85e8-6ba9c20fc841)

* We have take **two variables(UNLS and CLS)**. Two variables is **constant space**.
* Option **C**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d88d3a6-2cba-43a6-b0ae-917687a7e369)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a737819a-685f-450c-adaf-1c1f2e564e7e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c8c6062-0802-4ff7-873a-15bf74873967)

* x and y.
* Subsequence means it is not compulsory.
* Real numbers -> maybe negative, maybe positive, maybe fraction.
* Real numbers are **uncountable**.
* We want to get **max**.
* **a0** maybe sometimes **negative**, maybe sometimes **possitive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f60ace2-bbb6-43b0-89c9-cd0fa667df90)

* It is **dynamic programming**, we are covering every possibility.
* By seeing **options** we can say, if it belongs to **greedy or dynamic** programming.
* Dilemma there and we are doing all that is **dynamic programming**.
* We are taking only **y** if **a0** is **negative**.
* We are taking only **a0 + y** if **a0** is **positive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c4f1d4d-c3b0-4285-9810-29802d800112)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c492b2a9-f328-49b9-b4e1-8098c3744df7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d1b8b04-0dd8-46b7-9e3a-a99cb90fd747)

* When we have **y** it is **only one** so don't have to do **1/2**. When **a0 + Y** is there together, they are **two elements**, **first element** is not **divided by 2**, the **second element** is **divided by 2**.
* That why it is **x = max(y, a0 + (y/2)**.
* Option **B**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86c51ebc-c725-44e4-9b46-7e8a57c579af)

* If **1st two lines** are not there then the **correct answer** is option **A**. [Answer] [**IMPORTANT**]
* If **1st two lines** are there then the **correct answer** is option **B**. [Answer] [**IMPORTANT**]
* If instead of **division** there is **multiply** then the **correct answer** is option **C**. [Answer] [**IMPORTANT**]
* If the numbers were **all positive numbers** then the **correct answer** is option **D**. [Answer] [**IMPORTANT**]
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06b60c32-233a-4976-9207-0f6806de4214)

* Question
* Articulation point -> D.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65a19053-28a7-4c6e-817a-e4fa59b93687)

* **DFT** tree we have drawn and the root is **A**.
* If the **DFT** tree root contain **degree = 2 or more** then the **root** is the **articulation point**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdc650c0-1623-4d80-a30d-4bcff452b149)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b8ef44e-78bc-4435-be1b-7b3ad621bd0f)

* From the diagram, it can see that the **articulation point** is **A** as **vertex 'A'** has **degree = 2**.
* If we **delete 'A'** then the graph becomes **disconnected**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bf95089-dbf6-4984-96f6-7b2719e41f7a)

* **T** is the **DFS tree**.
* In the graph **G an B** are going to meet via **A**.
* In the graph **F an C** are going to meet via **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c9a61f0-762b-47ed-b31a-d9369af6c112)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/149bc96c-7417-4931-a324-51e42457729e)

* option **B and D**. [MSQ] [Answer] [**IMPORTANT**]
* If **u** is the **articulation point** then **all paths** should come through it.
* **Doubt**. Check again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa19ef65-3682-494e-adf6-7e055a0ecf07)

* We are talking about **1 Ancestors and 1 decendent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6de2c157-4a68-4cbb-b361-8ad5fd63fabd)

* We want to go from **x to y**.
* **x** area is the **ancestors** and **y** area is the **defendents**.
* **u** is the articulation point.
* If we want to go to **x to y** then we have compulsory go via **u** then only **u** is articulation point.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09168913-66b6-43c8-8d3c-7060067e9ab9)

* **NOTE**.
* If **u** is an articulate point then there is atleast **1-pair(x,y)**. Suchthat all paths from **x to y** should go via **u**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0987784d-a7a9-4242-890f-e7468de1c59e)

* Question.
* Complete Graph -> **(n * (n-1))/2** edges.
* **K4** contain **4 ^ (4 - 2) -> 4 ^ 2 -> 16** spanning trees are there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e71d6d6-b00b-45f5-8cbe-d12c8ce68321)

* In the two spanning trees there is **no common edge**.
* If **2 * n - 2** is not there then we cannot give **any gurantee** here.
* If two spanning trees are there to cover all of the elements, two different paths are possible.
* Max is **4**.
* Atmost **4**, True.
* Some edges we are missing out.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e8fb56b-b0f6-4287-85df-9bd4e391d8d8)

* option **A, B and C** [Answer] [**IMPORTANT**]
* Doubt. Check it again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1205bafb-92ec-498b-8e00-7902f1f70331)

* Question
* Option **B**.
* Doubt. Check it again.

## challenging-problems-vii(7)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71fb9c74-d0e0-4785-9efa-b4b9508ec6d0)

* Option **B**.
* See practice class for explaination.
* Practice Class Link -> https://unacademy.com/class/practice-problems-on-array-and-graphs-with-raisehand-feature/DR3GVS5H
* Solution Below.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab02c53-b302-460d-bceb-f7fae2f8c7e0)

* Question.
* Undirected graph is always **symmetric matrix** as **A to B and B to A** are same.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b3bf1f0-2d40-4efe-89b4-01fd04fd5ef5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fe5ddc9-6391-4979-be2b-2d53f30b49bd)

* If two paths are there with **length '8'**, **anyone** of them is the **shortest path**.
* Our goal is **shortest path**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e86d3a9-8813-458e-904a-ad7f19760d19)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5ab2c59-d86d-49cc-894c-2ea6fe38f103)

* To go from **C to D** the best path is **12**.
* Largest possible integer -> 12.
* We can select the larger value but the **condition** is that the **larger value** should participate in one of the **shortest path**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dd356a1-ac7a-4baa-98b8-82d812b4b775)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9ad1b76-c5a3-4967-84c4-69cef13d2fed)

* Draw the **graph** and do accordingly.
* Manual checking only, no algo. [Doubt]
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/267fab8c-1cce-4e71-a3f1-0a1a70628529)

* Question.
* Trick of **dynamic programming**.
* Everywhere we have two choices we can either go to the **next one** or **take the shortcut**.
* Particularly for **a number** contains **max. of 1 shortcut**.
* Every number having two choices either go to the **next one** or **take the shortcut**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9c33d47-e3a1-483e-a074-98534d0398e6)

* Option **C**. [Answer]
* T(y) -> T(10)
* T(z) -> T(15)
* y = 10, z = 15
* yz = 10 * 15 = 150.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91094fb9-230d-493a-bff7-bd5e6eb428be)

* Question.
* If both **matching** then **expr1**.
* If both **not matching** then **expr2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f200613-af8b-4180-a05e-be512daa6c6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1761f54-e1a3-4a60-ab62-17a07a0c8e0f)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aade4c12-fa09-4ae6-8879-b41cc070df93)

* Question.
* Recursive program is mostly in **post order**.
* Table is needed.
* Every where 2ways are there **Row major and Column major** order.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa00e32d-8823-4f37-a3f8-dc295c04e667)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5644ff2-53a9-47fe-af85-a9c140533009)

* Option **B**. [Doubt] [**IMPORTANT**]
  
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a5dba31-f820-47ac-97fb-6b44a9e8a121)

* Tabular method.
* Dynamic programming needed table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f32c850d-626e-4471-9b2d-15eadd391a5e)

* While computing the **1st row**, **0th and 1st row** are enough/needed.
* While computing the **2nd row**, **1st and 2nd row** are enough/needed.
* At a time **only two rows** are required. Previous and current values we can use.
* We can save **table size** by just using **two rows**.
* Total table we have to fill. 
* All values/entries we have to calculate.
* We are calculating **total rows**.
* We can manage with **two rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44b3bb5f-e0a1-4314-852b-517c05558fcd)

* Can we improve the **table size**?

> Only two rows are required at a time. We can improve to **two rows**. [For interview, not needed for GATE exam]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b610cdc-4f0c-4fd4-b1f5-02939ae7e1f7)

* Question.
* So many ways are coming.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4ecc05a-5832-4483-84cf-d57cd5f5afb4)

* In the **best answer** what is the **explicitly computed pair**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0fb659b-d685-42e7-993f-c9e4043d1da0)

* We have two **explicitly computed pair** which are **F1, F2** and **F3 and F4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16f54a6d-a6ba-43d0-b7e5-f20b7a2c805c)

* Pairs given in the **options**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d848409a-be10-4576-b2e2-0a6061d71b8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d84d6361-d6f9-4c3c-8428-b888a396be0e)

* Possibilities.
* We can see that **F5** is very big as it has **1 * 1000**. So it will be done at the **last/end**. **F5** is the last person to be **multiplied**.
* So we actually have **4 matrixes** instead of **5**.
* By seeing **F5** matrix, we now have **4 matrix**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edabca2d-98c9-4ec2-85df-19ce30caf7ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b6c5426-e131-4af4-b8b6-c5e31cd76398)

* **4(1 + 1 + 2)** possibilites are **left out**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c7156c7-e2c9-4899-910d-c6c59b67ab2c)

* All of the **4 possibilities**.
* Take care of the **options**.
* Option **D** is **directly** gone because of **F5** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5d04d23-92ad-4ded-a8c4-62b267e2e71f)

* Verify all of the **4 possibilities**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d36003c5-122c-441b-a629-0ba0c4275264)

* Option **C**. [Answer] [**IMPORTANT**]


## Practice Class questions

* Practice Class Link -> https://unacademy.com/class/practice-problems-on-array-and-graphs-with-raisehand-feature/DR3GVS5H

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4055a255-3c25-401e-b2ba-26dec883e441)

* Question.
* Lightest edge -> Least cost edge.
* Heaviest edge -> Most cost edge.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea8f31af-c719-4ab0-852c-a8cfd613d3c3)

* 3rd min is **30** and we cannot take it because then a **cycle** will be formed.
* 4th min is **40**.
* In the given graph the **lightest edge** is **10**.
* Lightest edge will gurantee come to **MST**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f6a9141-2043-4103-b554-dd4460035dfa)

* Lightest edge of cycle some cycle(*ABD*) is **30** but that is not part of the **MST**.
* Point **I** -> Need not be. [Not True]
* If **e** is the lighest edge of G, then every MST of G includes e -> **True**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd6a4cbb-1d6a-405e-86a8-60fedd284248)

* Whenever **cycle** came then we will **delete** the **last minimum(maximum)**.
* Every MST excludes heaviest(max) edge weight -> **No** -> Sometimes it is needed.
* Exclude heaviest(max) edge weight in the cycle -> **Yes**. [Outside of cycle maybe sometimes required]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1efc9323-af88-43a1-a9ac-0b4b6ea25aec)

* The heaviest(max) edge weight in the entire graph is **70**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca40df05-e5b8-41e8-8da5-2ed3e6e83aea)

* Example.
* Every **MST** don't have the heaviest(max) edge weight -> No/Wrong. [Sometimes needed]
* Heaviest(max) edge weight in the **cycle** we have to exclude. [Correct]
* In the overall graph the heaviest(max) edge weight we may exclude, we may not exclude. It depends/depending on the **problem**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aef2f7b6-d6a6-4a88-9f72-7d9b472064f8)

* If **distinct** is not there then **same element** can come again and again.
* Point **II** -> Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcf53728-cb55-4a67-815e-47076b9f71ed)

* Option **B**. [II only]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cec3d81a-cdb8-4194-b023-d3f2fada458b)

* If **distinct weights** are not there then the **lightest weights** maybe **many**.
* Point **I** -> Need not be [False]
* Point **II** -> False.
* Option **D**.

* Completed Graph -> No. of spanning Trees -> n ^ (n - 2). [Formula] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2f6902f-43c2-4ed4-a093-c12a28d2ab1e)

* Question.
* We have **undirected graph** and the graph is represented in **adjacency list**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84bc28d4-092a-435d-90fe-24a67d3ab17c)

* As it is an **undirected graph** so we can say **1 adjacent 2 and 2 adjacent 1**. We can go both the directions.
* In **directed graph** we cannot say the **above**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/478576d3-c3fe-4d2d-a375-4343d488273d)

* Adjacency list representation.
* It is **undirected graph** and **vertex 1 and vertex 2** are adjacent so what happens that in **1** adjacent, **2** is there. In **2 adjacent**, **1** is there.
* If we take any edge **1 to 2** because of it is an **undirected graph** in **1 adjacency list**, **2** will be there. In **2 adjacency list**, **1** will be there.
* They are **twins** of each other.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3aae36b8-c019-4b60-9814-a82a09961712)

* If **4 adjacent** is **1** then in **4 adjacent list**, **1** will be there. So in **1 adjacency list**, **4** will be there.
* They are called as **twins** of each other.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ea41434-1008-4283-9a3c-c88890869c2a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65816a6f-76fc-4950-bccd-bb99b9075e67)

* In the **2000** node we will keep the **string address** of **1000** and in the **1000** node, we will keep the **string address** of **2000**.
* So every node contains a **pointer** to it's **string**.
* We have to **modify the adjacency list** in such a way that **every node** contain a **pointer** to it's **string**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a747d18-1e5f-46f4-91db-9ec98626d6f9)

* In **every node** we have to **add another field or add one more field**. **Space** will **increase** but it is mentioned in the question that **memory size is not a constraint**. Don't worry about memory.
* Normally **efficient** means that both **time and space** are **less** but in the problem it is mentioned don't worry bout **memory/space**.
* Memory is not a problem, thing about **time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a28e8cb-4d8d-4e73-afe8-1a3d8474155b)

* Everytime we are creating a node at the **starting** only. Not required to go at the **ending**. If we go **ending**, unnecessary **time waste**. 
* We can always go directly to the **ending**, when a **pointer** is there at the **ending**.
* We can **add** in **starting or ending** also.
* **Twins** are created at a time, it is the best idea. Otherwise to find the **twin** it will take **sometime**. If we create at a time then **finding the twin** is **easier**.
* Creating both the nodes -> Constant 
* Creating both the twins -> Constant.
* Linking both the twins -> Constant.
* Everytime **constant** is going on.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bc38f8f-df19-4910-a0e3-82554877710c)

* **Adjacent of 1** all completed so **1** is over. Mark **1** as completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eeddc04-7257-4189-b806-c43eeceff4af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7451d05d-52c8-4b1c-bc4c-b11e97bff9fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b4cc1d0-8073-4091-ac20-724195a4b5b3)

* All are completed means **4** is over.
* **One scan** we have done for all of the **vertices and edges**.
* **Create at a time** so **less time** is taken.
* We have to created the **same person** again and again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00ea43c2-80a2-40d4-bb8c-b212e546734d)

* Time Complexity -> O(m + n). [One Scan needed] [Answer] [**VERY IMPORTANT**]
* If graph is **directed graph** then there is **no concept** of **twin pointer**.
* **Twin pointer** concept will come for **undirected graph**.
* In **adjacency matrix** there is **no pointer**. Only in **adjacency list** there is **pointer**.
* Linked list internally contains **pointer**.

## challenging-problems-viii-and-doubt-clearing-session (8)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d559d15d-fd04-4083-8f20-75d91f3894b6)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e01d8098-4a93-4db4-9c74-9ccba3e90e09)

* We have **4** people.
* Out of **4** people we are selecting **2** people -> 4C2. [Combinations]
* Out of **4** people we are selecting **3** people -> 4C3. [Combinations]
* Any combination of **sorted** is **sorted only**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/574e0595-6d10-4a6e-8f4c-e3cc2e187205)

* In **permutations** order can change.
* **Combination** means so elements we can leave.
* **Combinations** are nothing but **subsequence**. Order we cannot change. Some elements we an leave.  [**IMPORTANT**]
* In **Combinations** we never bother about **order**.
* In **permutations** we bother about **order**.
* Purpose of the problem is **difference** between **permutation and combination**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ed6eccf-bf82-481b-a70e-6f6a4c48f6b2)

* **A** is divided into **2 parts** which are **B and C**.
* Out of **8** integers we are selecting **5** integers which is **8C5**. They are already **sorted**, we don't have to do anything.
* Out of **3** integers we are selecting **3** integers which is **3C3**.
* **Sorted array** combinations are **sorted only**. [Question based on this line] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17695f21-be20-4cd5-abbb-3317ed389f6d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4553f77e-27bb-4b58-992b-27e1b11cb455)

* Option **C**. [Answer] [**IMPORTANT**]
* Sorted array any combination is also sorted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/893f05c6-fe5e-4bba-8dae-98b8f6cc5e4d)

* Question. [**IMPORTANT**]
* we are talking about **insertion**.
* Insertion of **1 element** is **log n**.
* If the keyword **binary search** is not there then the **answer** is **log n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dfb891d-a321-452c-9980-057cbf977007)

* CBT.
* As it is a **balanced tree** so it has **log n** levels.
* log 31 base 2-> 5 levels.
* With 31 nodes how many levels possible?

> log (31 + 1) base 2 -> log 32 base 2 -> 5 levels.

* In a **CBT** there are **k** levels and **n** nodes.
* nodes(n) = (2 ^ K) - 1  [Formula] [**IMPORTANT**]
* levels(k) = log(n + 1) base 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae8d296f-bbc0-43f1-8cd7-5a55dd0e167b)

* [Formula] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e20d628e-6cb8-4955-9996-55b1ebcf5512)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a6be257-c5dc-4efe-921a-e9b01a41c082)

* Everytime we are **comparing** and then we are **swapping**.
* Everytime we are doing **1 comparison**.
* In **worst case** we are doing **log n** comparisons.
* Everytime we are doing **1 swap**.
* In **worst case** we are doing **log n** swaps.
* So overall **comparisons and swaps** are **log n + log n -> 2 * log n -> O(log n)**. [This is the time complexity for **insertion**]
* We are travelling in **one path**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8594db75-fb21-45e6-9fe5-d383f332ba0c)

* This is **worst case**.
* Every level **1 element** there.
* In the path there are **log n** people.
* We know the **elements** in the path are already **sorted**. So we are performing **binary search** on the path.
* 1st element position is **1**, 2nd element position is **2**, 3rd element position is **4**, 4th element position is **8**, 5th element position is **16**, 6th element position is **32**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c6f4ad8-8a89-44e2-9df9-6f2c2190fffa)

* By looking at the powers of 2(0,1,2,3,4,5), we are getting **log n or log n + 1** people.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08ec75a6-2cc8-43d2-8c27-4f0349246015)

* We are at **2 ^ 5 -> 32** position. This is the position of the **new node** to the **inserted** in **max heap**.
* To go to the **middle**, we are dividing the **power by 2** which is **2 ^ (5/2) -> 2 ^ 2.5 -> 2 ^ 2 -> 4**. [Taking lower bound]
* So the **new node** is comparing with the **node** at **2 ^ 2 -> 4** position in **max heap**. As the **new node** is **bigger** it will check again.
* Apply **binary search** again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45849437-8d08-4f5e-bf0e-d5aa49fc8617)

* **2 ^ (2/2) -> 2 ^ 1 -> 2**
* So to **2nd position** and compare.
* Still problem at **new node** is **bigger**. 
* Apply **binary search** again.
* **2 ^ (1/2) -> 2 ^ 0 -> 1**
* So to **1st position** and compare.
* we have to go further above but it is not possible as we have reached the **root**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0a06f9a-b9a1-48cf-bce3-828032910a42)

* BS -> Binary search
* **Binary search** on **n** people is **log n**.
* We have done **binary search** on **log n** people, so it is **log(log n)** comparisons.
* After **log(log n)** comparisons are over **new node(500)** is at the **root**.
* **100** was already there on the root, so it should go to the **next level**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75739d67-13e5-4cce-b484-44a3663b13df)

* **Swaps** are still **log n**.
* We have to **swap** everyone.
* **Swaps** we cannot change.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/694e22be-b98c-4cbd-a321-5ea5731627da)

* **log(log n) + log n -> O(log n)**.
* Overall **time complexity** is **O(log n)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d178fb3-5c5b-4060-ab8a-a3d8e6db550f)

* Yes.
* In the question it is asked **comparisons**, which is **log(log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19d8bc33-5677-4d9c-8106-5eae4d532a07)

* Option **B**. [**IMPORTANT**] [Answer]
* We are **inserting** only **one element** in **max heap**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21863668-d96a-4c28-90a0-9fc237629cc0)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a5064dd-57c7-478a-8900-5c2bacf5934f)

* Question.
* V -> OR operator
* /\ -> AND operator.
* We have **two choice**, we may take or we may not take.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adba9b51-e8cc-4286-8d7f-260b494405f9)

* In **0-1** knapsack, **capacity** of the knapsack is **m**.
* In **0-1** knapsack, **no. of objects** is **n**.
* In the **sum of subsets**, **no. of elements in the set** should be **n**.
* i -> no. of elements
* j -> sum of subset
* **i** should be **decreased** whether we take the **element or not**.
* We can either **take** or **not take**. We cannot do both at the same time. Both are **not possible**. That's why **/\ -> AND** operator is not possible. So option **D** is **wrong**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb1853bd-ec45-41b2-9163-397bf16663bd)

* Option **B**. [Answer] [**VERY IMPORTANT**]
* X[i - 1, j] -> We are **not taking** that why no **j - something**, but we have we have to **decrement 'i'**.
* X[i - 1, j - (a * i)] -> We are **taking** that why **j - something(a * i)** and we have we have to **decrement 'i'**.
* We have to **decrement 'i'** in both of the **cases**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a1e326c-e8ff-45c5-8383-6dbaee39fff9)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f376e75-b074-4a7e-952f-77a0cbedbcd5)

* SOS -> Sum of subsets.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03f797b4-4461-4c94-950a-de2c38aa6233)

* Intermediate sub-problems may say **yes** doesn't mean that the **final problem** will say **yes**.
* **Final answer** is decided by the **final entry** only.
* Others may workout or may not workout.
* Option **A** is **correct** as the **sum is 'W'** but the problem is that if the given condition of the option is **True** then only it is **True** which is a **no**.
* Even though option **A** condition failed there is **still hope**.
* So option **A** is **not correct**. Option **A** is an **intermediate answer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3aac8bb1-7c8c-462d-a30e-986b177de314)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66a06d23-8b16-45c0-bf3d-2b84fcb10c1c)

* Option **C** is always correct.
* **C** is the **superset** which will decide everything.
* Everything decided by option **C**.
* Option **C**. [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45b58cef-4b67-4660-a753-d26e502de19f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b939ed23-19d1-4b98-9894-840ed527bbd8)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3039c6e1-193b-453c-93e0-0fa56c411953)

* We are trying option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f3852ad-4ecd-4370-a969-fd0429508284)

* It will go to **infinite loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc1bfddd-d3c5-406e-829f-373f7b54b001)

* Option **A,B and D** will **pass**.
* Option **C** will **fail**. [Answer] [**IMPORTANT**]
* We have to do **manual checking** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08fa48eb-6702-4232-9e33-f7acc94df1a1)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72f025c5-be22-42f2-a139-8fb53fb0dac3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3297d990-35be-4a93-bc6d-5b9360b45a44)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a6e070e-8f67-4822-87f9-caa1db436be4)

* Option **A**.
* Manual checking **needed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50cbc7d5-bb07-46f7-936e-40fafd7a871b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a2d1a62-b923-4715-ac11-8cea719d886d)

* Question.
* We want to create **MST** for **G**.
* We have **5 vertices**.
* We want **4 edges**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/118899ba-ca20-4760-8e35-9cab4a055ad0)

* 3rd minimum is **4**.
* We cannot take **CD** as **cycle** will be formed.
* We can take either **AB OR BC** as they are not causing any **cycles**.
* We can take either of them(AB or BC) so we have **two choices**.
* If we can take **both** then we have **1 choice** only. [**IMPORTANT**]
* We can take either of them(AB or BC) that's why **two choices** came. Only if **one possible** then we have **two choices**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0be1149-115c-4483-93cc-a7ce599f2aec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d5635d2-731e-4499-b475-616781e9c34a)

* We tought we will take **2 MSTs** as there are **2 10's** but we can take **both 10's** so **only one MST will come**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c140742c-693f-4c1d-939a-4e3bc974c882)

* We got only one MST finally.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec2e8717-31c7-4329-a50b-9b3e4514f18a)

* 1st min -> 1 choice.
* 2nd min -> 1 choice.
* 3rd min -> 2 choices. 

> For **3rd min**, 2 people(AB and BC) are fighting we **cannot both at a time**. We have to take either one of them. That's why for **3rd min** we have **2 choices**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b28b8b05-9cb1-4649-be73-6f77508015e1)

* We want **4 edges** and we got **3 edges**, so the **next min** is **5 or x**.
* If we take **x = 1** then there is no fighting for **last min** edge.
* If we take **x = 1** then we will have **only 2 MSTs**.
* For **x = 3**, it is same as **x = 1** only. No fighting there for **last min** edge.
* For the **2nd last min**, then **two 3's** will come but we can take **both 3's** without any **cycle** so we are left with **only 2 MSTs**. No fighting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/793468dd-004d-4685-8329-804c2c94c144)

* If we keep **x = 5** then there will be **two 5's** and there will be fighting for the **last min** edge which we want.
* We will have **two choices**.
* The interesting thing is that we cannot take **both 5's** as **cycle** will come.
* We cannot neglect either one of them as well.
* We have to take **either one of the 5's**.
* We have **2 MSTs** from **4** and **2 MSTs** from **5**.
* So overall no. of **MSTs** is **2 * 2 -> 4** MSTs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b4ea79d-a17f-4300-a012-2737f2700878)

* It is asking **no. of MSTs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76a9af3a-5ece-4421-82ab-e4eea6401aa8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1c4303c-a16a-42f6-8688-f9bbbd429eb4)

* Value of **x** is **5**.
* Answer -> 4 [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/465b0f1d-2814-4d71-9272-864268cd1a3e)

* Question.
* n = 16
* sqrt(n) -> sqrt(16) -> 4
* n -> 16
* log 16 base 2 -> 4
* 100/n -> 100/4 -> 25
* Option **B**.


















