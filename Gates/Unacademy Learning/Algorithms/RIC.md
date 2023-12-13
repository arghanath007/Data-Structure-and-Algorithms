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

















