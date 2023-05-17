# Algorithms

## Course Link

* Link -> https://unacademy.com/course/complete-course-on-algorithm-768/MKL1PBOY (**COMPLETEd**)
* Remaining Videos -> https://unacademy.com/course/full-course-on-algorithms/XX14HTSO (Start from **Video 40**, Dynamic Programming-III)
* Live class playlist -> https://unacademy.com/course/complete-course-on-algorithms-gate/K8EKOMCE

## Syllabus

![image](https://user-images.githubusercontent.com/54589605/229165900-6a29602a-d898-4e24-ba8c-b402cc2fe2bc.png)


## Time Complexity (1) [31st March 2023]

![image](https://user-images.githubusercontent.com/54589605/229171932-718dbe68-e46e-4d3a-9207-ba295985e033.png)
![image](https://user-images.githubusercontent.com/54589605/229172682-b9f36d76-c52d-48e8-94b1-b39b77cc24c7.png)

> Algorithm is a combination of sequence of finite steps to solve a problem.

> Combination of some(finite) statements.

> Algorithms is a generic programming language. From one language to another language, syntax will change a little bit.

![image](https://user-images.githubusercontent.com/54589605/229176423-2a904b6d-7ac9-4198-b545-c33c994860a3.png)
![image](https://user-images.githubusercontent.com/54589605/229176605-da580b3a-d2b3-4a93-8594-a39d3d26a44d.png)

> After writing the **algorithm**, we can write it in some **programming language** also.

> Algorithm is for **humans**. If we write the algorithm in some **programming language** then the computer will understand.

> We will first write **algorithm** then we will write **program**.

> We have an **algorithm** and we want to convert it into a **programming language**, the programming language we will **choose/prefer** depends on the **use case or what problem it is solving**.

![image](https://user-images.githubusercontent.com/54589605/229180078-515d676f-6e4f-4bee-bcda-7331c2708762.png)

## Programming of Algorithm

> Finite steps doesn't mean finite time.

![image](https://user-images.githubusercontent.com/54589605/229281293-38ed4065-ceb0-4780-93d2-c3050eceb2c7.png)

> It is a program but not an algorithm. Every algorithm is a **program** but every program is not an **algorithm**. Program may halt and may not halt. Program is a **turing machine**. For a problem, algorithm is possible which means **HTM or halt turing machine** is possible.

![image](https://user-images.githubusercontent.com/54589605/229282357-a3fe704d-1501-4054-a8a5-254fd4513ed8.png)

> Algorithm possible means program possible. Program possible doesn't mean algorithm possible. Program contains **infinite loop**.

* Difference between algo and program?

> Program may stop and may not stop. It may go to **infinite loop**. Algorithm has to **stop**. So, algorithm is a **HTM or halt turing machine**.

* Algorithm -> **HTM or halt turing machine** -> It will terminate after finite time.
* Program -> **Turing machine**

![image](https://user-images.githubusercontent.com/54589605/229284887-1973e0f8-56bf-4df2-b297-536a21c086c0.png)
![image](https://user-images.githubusercontent.com/54589605/229286759-629bf52e-d197-41e0-8ddb-e82cd7dc30e7.png)
![image](https://user-images.githubusercontent.com/54589605/229286825-a414e8e6-9eb8-436c-b6cd-b730b3a01259.png)
![image](https://user-images.githubusercontent.com/54589605/229286830-527b2280-b8a7-4520-92f7-6accfcf33014.png)

1) It should terminate after finite time
2) It should provide atleast one output
3) It should be deterministic
4) Every statement in algo should be effective
5) It is independent of **programming language**.

## Time Complexity-II (2) [1st April 2023]

## Steps to design algorithm for given problem

> With them procedures if we construct an algorithm then the properties are satisfied.

![image](https://user-images.githubusercontent.com/54589605/229287724-0cedcdd3-bb21-4f89-9a5e-5ae8ce210566.png)

1) Problem Definition
2) Select designing technique
3) Draw Flowchart
4) Testing
5) Implementation means coding
6) Analysis

> We have **3** designing technique in the syllabus, **Divide and conquor, Greedy and Dynamic programming**. There are **2** more which are not in syllabus, **Backtracking, branch and bound**.

![image](https://user-images.githubusercontent.com/54589605/229289909-51c4fa62-338b-41e4-bb61-454b75f7b46d.png)
![image](https://user-images.githubusercontent.com/54589605/229290767-b5f3187d-8d0f-46c9-bfe2-e51685df4a36.png)
![image](https://user-images.githubusercontent.com/54589605/229290775-9caa7490-667e-4aca-bc7d-b4e93a659269.png)

## Analysis

1) Finding Time and space complexity
2) 

![image](https://user-images.githubusercontent.com/54589605/229291429-c0f0a728-8db9-4a84-87ba-539ac61b0edb.png)

> Better solution will be provided by **analysis**. If **time complexity** is **same** then go for **space complexity**.

![image](https://user-images.githubusercontent.com/54589605/229291609-9b22ec38-09b3-483a-84f6-66f9a3004250.png)

> If the question, simply asks for **which is better**?

* Then give chance to **time** first.

> If the problem having more than one algo?

* Then, the **best one** is decided based on **time complexity(CPU time)** and **space complexity(Main memory)**. 

![image](https://user-images.githubusercontent.com/54589605/229291954-08421313-1964-4260-a96b-fe371dbd3b86.png)
![image](https://user-images.githubusercontent.com/54589605/229292024-04f749de-c1bc-4f97-ad92-571dde3894fb.png)

## Time Complexity

* 'p' is a program 
* Time complexity or T(p) = Compile time or C(p) + Running time or R(p).

![image](https://user-images.githubusercontent.com/54589605/229299347-0bf03c23-4020-44b1-95ef-9d4adfd22510.png)

> **Time complexity of a program** is **based/dependent** on the **language of the compiler and type of processor**.

## Types of Analysis

1) **Aposteriori analysis** -> **Based/Dependent** on the **language of the compiler and type of processor**. Exact answer. Computer-computer time complexity changes.
2) **Apriori analysis** -> **Independent** of the **language of the compiler and type of processor**. Appropriate answer. Same answer in every computer.

![image](https://user-images.githubusercontent.com/54589605/229301833-7e8fddfa-f9a4-426e-a75c-dfffb02db141.png)
![image](https://user-images.githubusercontent.com/54589605/229302215-e54baa48-232c-4b3c-84ba-cde47fabf1c9.png)

> According to **Apriori analysis**, everyone cannot buy **super computer** but everyone can write **super algorithm** because god gave **same  brain** to all.

![image](https://user-images.githubusercontent.com/54589605/229303214-bb14f85c-420c-432f-b7ea-29822503ed5d.png)

> Some poeple use it effictively and some not. Some people believe in themselves and some not.

## Apriori analysis

> Instead of saying **best logic**, they are saying it in some other way like **employee of the month**.

> It is a determination of order of magnitude of a statement.

> It is **indirectly** talking about **logic**.


> While running, the statement will run only **once or one time only**. This **once or one time** is called as **order of magnitude**.

> **Order of magnitude** of a statement means that while running **the statement will be executed by the processor for how many times**. So add **theta** to it  and it will be like **theta(1)** then it is called as the **time complexity**.
 
 > The **order of magnitude** with **theta symbol** is called as **time complexity**.
 
![image](https://user-images.githubusercontent.com/54589605/229303840-d1c8f434-032c-4829-b799-61ffe5cbcd41.png)
![image](https://user-images.githubusercontent.com/54589605/229303934-0a4124ee-a413-45e5-9932-7f79a6c79c4e.png)

> Every **constant** can be represented as **theta(1)**.
 
![image](https://user-images.githubusercontent.com/54589605/229304161-b151ec85-0e26-4aff-9e02-a7c369d48fde.png)
![image](https://user-images.githubusercontent.com/54589605/229304170-fc834516-18d4-46fe-96e8-2cbcfe57f76c.png)

> **1** will be **executed** once only.

![image](https://user-images.githubusercontent.com/54589605/229304857-4f848126-5396-4993-9cb7-376c255bbd16.png)

> So, time complexity is **theta(n)**. We are ignoring the  **small constant**. **Small constant** are nothing but **processor's speed**.

![image](https://user-images.githubusercontent.com/54589605/229305044-dbc08dca-7151-44b0-8db3-708cc2368385.png)

> We don't need to go **inside**. It still gives the **same analysis**.

## Time Complexity-III (3) [2nd April 2023]

> We have **3** statements here

> We are doing **approximate** analysis. Small things(constants) don't matter. Functions matter.

> Inner for loops are nothing but **product rule**.

* Inner loops -> Multiply
* Outer loops -> Add

![image](https://user-images.githubusercontent.com/54589605/229334747-af798f6b-fe13-4adc-9eb5-9478430d40dc.png)

> **Theta** means we can write **Omega and big O**. But **big O** doesn't mean **theta** and **Omega** doesn't mean **theta**.

> **Theta** work means **Omega and big O** will work also. We are not saying **reverse** is possible.

![image](https://user-images.githubusercontent.com/54589605/229334991-150870f6-5a3d-4d4e-b26d-9c6c079dacbd.png)

> According to **Apriori** analysis, **time complexity** is nothing but **finding loops only but also larger loops as well**.

> **Time complexity** is finding **where the cpu is spending the more time**.

> If **no loops** is there in the program **O(1) or constant**

> If **one loop** is there in the program **O(n) or linear**.

* What is kept in the cache memory?

> It doesn't have much storage, so we keep the **valuable content** in it.

* What is the **valuable content**?

> **bigger loops**, because it is the place where CPU spending a lot of time.

![image](https://user-images.githubusercontent.com/54589605/229339523-88dcd9f7-f142-4b1a-8da1-cb5e543d624d.png)
![image](https://user-images.githubusercontent.com/54589605/229339552-ff559af1-fc12-427d-ae30-04325d873e20.png)
![image](https://user-images.githubusercontent.com/54589605/229339577-2e4ad668-2cc8-4bb6-8b86-bd778f8658ad.png)

> In the first loop, condition is **True** for **'n' times**.

> In the fourth loop, condition is **True** for **'n^(1/2) or sqrt(n)' times**.

![image](https://user-images.githubusercontent.com/54589605/229339992-99d7aece-35f9-4103-b075-fd5a84499c44.png)
![image](https://user-images.githubusercontent.com/54589605/229340135-0bb65e07-ec0e-4ef4-8f00-adfb0ebee439.png)
![image](https://user-images.githubusercontent.com/54589605/229340464-e42a3e51-ed88-4ef3-83df-82afe298a2ad.png)

* pf -> printf();

![image](https://user-images.githubusercontent.com/54589605/229340590-0b238405-e873-4e9a-954d-59c4b5d0aac2.png)
![image](https://user-images.githubusercontent.com/54589605/229341332-cfe9cc2f-fcb4-4440-8da6-ae243454325a.png)

> First loop is going on for **k** times where **k=n^(27/5)**. So, that both the sides are **equal**.

![image](https://user-images.githubusercontent.com/54589605/229341399-281e7842-e9fb-4eef-a435-35210423cdb7.png)
![image](https://user-images.githubusercontent.com/54589605/229341576-4cf83bca-6d01-4dad-a118-7a56a7ac876c.png)

> Third loop is going on for **k** times where **k=n^(6/14)**. So, that both the sides are **equal**.

![image](https://user-images.githubusercontent.com/54589605/229341656-b154adc5-2b75-4a1c-821a-4c8b88fa1b16.png)

> **n^7** is bigger as **27/5 -> 5.4** and **6/14 -> 0.4** both are **smaller**.

> Loop is how many time.

![image](https://user-images.githubusercontent.com/54589605/229342051-bdcbb4f5-9752-423c-a75c-4496ef582d5a.png)

> **Recursion** is loop.

![image](https://user-images.githubusercontent.com/54589605/229342062-0bbcec3e-a01a-4477-be62-7118d3852da1.png)

![image](https://user-images.githubusercontent.com/54589605/229342416-7006c3b2-ff8e-4b94-8eef-5fc624e32d80.png)
![image](https://user-images.githubusercontent.com/54589605/229342547-04bad110-ecf7-4be8-8252-668c792219d3.png)
![image](https://user-images.githubusercontent.com/54589605/229342558-909f4fff-12bc-4fe0-af46-7e9f090b3362.png)
![image](https://user-images.githubusercontent.com/54589605/229342563-3a771f6e-9790-4d95-8d2f-d9190639063e.png)
![image](https://user-images.githubusercontent.com/54589605/229342571-ad2faa59-27b0-44e1-846f-4f5458fd4d8a.png)

> **2** loops. **n/5** since **i** is getting **incremented by 5**.

> Always whenever there is an incrementation, then **divide by that incrementation** to get the **time complexity**. In the above question, **i** was incremented by **5** so, the time complexity was **n/5**. If **i** was incremented by **50** then the time complexity will be **n/50**

![image](https://user-images.githubusercontent.com/54589605/229342585-ce510fa1-bdb5-4e0f-82c5-f33496042959.png)
![image](https://user-images.githubusercontent.com/54589605/229342662-61bd79fc-0364-426d-854d-33944558b575.png)
![image](https://user-images.githubusercontent.com/54589605/229342706-08e28d9d-610f-46ee-bcc5-323243b2266b.png)
![image](https://user-images.githubusercontent.com/54589605/229342782-ee653ff3-5fe1-46bc-8e1e-8241b12bb1d5.png)

> Whatever is the **power of n**, just put it in the **time complexity** and the **incrementation** stays the **same**. 

> In the **second while loop**, **i=n** and **i value is increasing**. It is an **infinite** loop. It will not stop. So, **it is not an algorithm** as it is not stopping. It is a program and the time complexity of the program is **infinite**.

![image](https://user-images.githubusercontent.com/54589605/229343139-4045f163-dd95-4ff8-ad7b-40a0a1331abf.png)

> In the first question we started from **big number** as **i=n**, so we have to **decrement or go in decreaseing order**.

> If we started from **small number** like **i=0 or i=1**, then we have to **increment or go in increasing order**.

![image](https://user-images.githubusercontent.com/54589605/229343228-06526dd6-dc6c-4e48-955b-eef4e2e5fa91.png)

> In the **second while loop**, the time complexity is **n**.

![image](https://user-images.githubusercontent.com/54589605/229343274-da5dc060-f3ce-4843-a9ac-a2eb562aaaf2.png)

> In the **second while loop**, the loops runs for **once or one time only**.

![image](https://user-images.githubusercontent.com/54589605/229343421-bb48e8aa-7df9-4cfd-ae9d-3ebec7fc5cc5.png)
![image](https://user-images.githubusercontent.com/54589605/229343426-268ceb68-1c4c-419b-a4b0-3dc38936e79f.png)

* Yes

![image](https://user-images.githubusercontent.com/54589605/229343433-c4efddaa-8586-4fb6-a655-4555a5e490c6.png)
![image](https://user-images.githubusercontent.com/54589605/229343478-8d416473-76f1-429c-a656-d4b337cd4307.png)

> Same only whether **addition or increment** and **substraction or decrement**.

![image](https://user-images.githubusercontent.com/54589605/229343552-f3bde92c-b923-4c18-acf9-eb4b885c725c.png)

> Overall is substraction means the program started with a **big number** i.e **i=n**.

![image](https://user-images.githubusercontent.com/54589605/229343597-837ef707-1b54-4b93-aa25-85fb4bfebe91.png)

> Overall is addition means the program started with a **small number** i.e **i=1 or i=0**.

![image](https://user-images.githubusercontent.com/54589605/229343718-d6a77cea-00ef-4da4-a562-ad8b12996483.png)

> So it is **i=i-50** and **time complexity** is **n/50**. See the overall effect and it is still overall **substraction**, so the program started with a **big number** i.e **i=n**.

![image](https://user-images.githubusercontent.com/54589605/229343796-84e8e8be-64d5-4dc2-9b41-ad3953c0c92f.png)

> So it is **i=i+90** and **time complexity** is **n/90**. See the overall effect and it is still overall **addition**, so the program started with a **small number** i.e **i=1 or i=0**.

> Otherwise for **both** addition and substraction it will case problems of **infinite loops**.

![image](https://user-images.githubusercontent.com/54589605/229343975-2b7c769c-2113-4112-b5e4-fd3b996f385b.png)
![image](https://user-images.githubusercontent.com/54589605/229344013-73f1c7c5-933d-450a-b09c-568f5c50f835.png)

> If the program started with a **big number** i.e **i=n** and we did **i= i+1000** in the **first while loop** then the loop will be **infinite** loop.

![image](https://user-images.githubusercontent.com/54589605/229344177-8acf7b96-a426-4edf-9c02-98f7a013427f.png)

## Doubt Clearing Session (4) [2nd April 2023]

![image](https://user-images.githubusercontent.com/54589605/229349862-73b2a70e-6345-4fc6-a4a7-06a0f10ce3cc.png)
![image](https://user-images.githubusercontent.com/54589605/229349870-1d8e505c-9c32-4385-93b5-276e711caf20.png)

> First for loop is **increasing** and the second for loop is **decreasing**. One is **increasing** and one is **decreasing** but both are taking the **same time**.

> After **K times**, we got **2^K=n**, which is the last iteration of the **first for** loop. So, after applying **log** on both the sides, we got **K= log n base 2**. So, the **time complexity** for the **first for** loop is **O(log n base 2)**.

![image](https://user-images.githubusercontent.com/54589605/229350276-a7762caf-8950-4e42-bea4-58086221325c.png)
![image](https://user-images.githubusercontent.com/54589605/229350290-e4eec45f-df14-4ce8-a0d6-f17caab10565.png)

> Everytime, **i** is **increasing by double**, then the time complexity is **O(log n base 2)**.

![image](https://user-images.githubusercontent.com/54589605/229351964-f76521c9-f06a-4c52-933b-0209f75b8f93.png)
![image](https://user-images.githubusercontent.com/54589605/229352028-9ec44231-d60d-4da0-8211-43f15bb3a7e9.png)
![image](https://user-images.githubusercontent.com/54589605/229352197-e49c3b0d-5bd4-4ee3-841d-1f7d21f3f4f5.png)

> If we **divide by 2 or multiply by 2**, the value of **i** when incrementing the value of **i**, then the **time complexity** will be **O(log n base 2)**.

> If we **divide by x or multiply by x**, the value of **i** when incrementing the value of **i**, then the **time complexity** will be **O(log n base x)**.

![image](https://user-images.githubusercontent.com/54589605/229352430-a212e56c-4125-4f70-b31a-97af79c87eab.png)

> **i=5 * i and i=12 * 1**, we wrote together, then the **i** value is **incremented** by **i= 60 * i**. Then the **time complexity** is **O(log n base 60)**.  

![image](https://user-images.githubusercontent.com/54589605/229352593-76da8a14-da18-4045-a3f3-715a046bbb1d.png)
![image](https://user-images.githubusercontent.com/54589605/229352717-07dc02b0-a0d7-4e0f-89d1-97695a4517b8.png)
![image](https://user-images.githubusercontent.com/54589605/229352818-45696cfa-6bf3-4d31-8e1d-892258d6766c.png)
![image](https://user-images.githubusercontent.com/54589605/229352948-2cc2ba3b-42bd-4bb1-b644-53ab5a5ae2d6.png)
![image](https://user-images.githubusercontent.com/54589605/229353768-9cecc04f-d127-4e07-a8aa-f432fc142c29.png)

> **log n base 2** is bigger. Whichever base is **small**, we will take that.

![image](https://user-images.githubusercontent.com/54589605/229353802-b930c798-068b-4998-b7fc-d61dce895be8.png)
![image](https://user-images.githubusercontent.com/54589605/229353807-3bc17e59-dd76-4574-9e2c-e51b06178815.png)
![image](https://user-images.githubusercontent.com/54589605/229353886-12398664-8899-4b9b-ae87-e7060ef5de00.png)
![image](https://user-images.githubusercontent.com/54589605/229355507-22d62859-86f3-4d52-9f45-215b225027c6.png)
![image](https://user-images.githubusercontent.com/54589605/229355571-2ac9850f-87d9-4df9-bfc4-00e347821c51.png)
![image](https://user-images.githubusercontent.com/54589605/229355617-faaede82-e486-4f95-a3cb-5ff50566476b.png)
![image](https://user-images.githubusercontent.com/54589605/229355673-97455b13-01f0-41f5-9a2b-dab0439cc142.png)
![image](https://user-images.githubusercontent.com/54589605/229355727-8e9d3755-47fe-4e10-9a08-8ed24f0649ac.png)

> For the first loop, it is **incrementing** as it has started from **smaller value** ie **i=1**.

> For the second loop, it is **decrementing** as it has started from **bigger value** ie **j=n**.

> What is the **overall effect** we have to check.

* **Add and sub** -> n/2 or n/5 etc. -> These loops are **bigger** than the **log** loops below.
* **Div and Mul** -> log n base 2 or log n base 20 etc. -> These loops are **smaller** but **faster** than above loops.

> For multiplication, multiply the **numbers** only and for **division**, divide the **numbers** only.

> **Less time complexity**, loop is repeating **less**, the **better**. So **log** is better than **Add and sub** -> n/2 or n/5**.

> Loop should repeat **minimum** time as possible.

![image](https://user-images.githubusercontent.com/54589605/229356272-5fe38aba-dc13-4fa8-93e6-ac19c717653e.png)

* O(log n base 35) [Ans]

![image](https://user-images.githubusercontent.com/54589605/229356507-ba125e31-6ab7-432b-b6ed-d1395bbc487d.png)

> As starting value of **i=5** and it will not affect that much as **5** is a **constant** value, we can ignore it.

> For **multiplication**, the **reverse** is **division** and vice-versa.

> For **addition**, the **reverse** is **substraction** and vice-versa.

> If we do **multiplication and addition** togerther then we get **7007** which is closer to **multiplication** and it gave **7000**. For the **addition**, we got **1007**. So,  **multiplication and addition** togerther is approximately equal to **multiplication**. Exactly not possible.

![image](https://user-images.githubusercontent.com/54589605/229357155-9466c0e2-4fc6-4c01-9515-4cf03176d88e.png)
![image](https://user-images.githubusercontent.com/54589605/229357239-d6743186-915a-4b1c-9ad4-910dfd2e815a.png)

> So **multiplication** is faster than **addition**, that's why it is affecting more and for **addition**, it is affecting in **constant** values.

![image](https://user-images.githubusercontent.com/54589605/229357689-4c9500e2-72a2-40de-a193-c632f8e118bc.png)
![image](https://user-images.githubusercontent.com/54589605/229357956-e58bff4c-5dd1-49bc-b664-cdcefdb45802.png)

[**IMPORTANT**]

* i + 2 -> n/2
* i * 2 -> log n base 2
* i * i or i^2 -> log(log n)

![image](https://user-images.githubusercontent.com/54589605/229358415-4b380b13-4c16-4a0e-a484-0ea122ea6aee.png)
![image](https://user-images.githubusercontent.com/54589605/229358602-865544b6-6614-462f-a331-44849290a8e0.png)
![image](https://user-images.githubusercontent.com/54589605/229358750-549d09b4-028a-48db-b3a7-1332c5e325a9.png)

![image](https://user-images.githubusercontent.com/54589605/229359090-e9f13bdd-7796-48e4-8596-205a4cf96039.png)

> The **time complexity** is **log(log n base 2) base 10**. 

> Because the **initial value** of **i** is **i=2**, so the **inner base** is **2** as it has come **before/earlier**. At the end the **power** of **i** is **i^10**, so the **outer base** is **10** as it has come **after/later**.

> This is how we got the **time complexity** of **log(log n base 2) base 10**. 

![image](https://user-images.githubusercontent.com/54589605/229359259-d856333b-c5e8-4bd5-ae05-2092c4c079f3.png)
![image](https://user-images.githubusercontent.com/54589605/229359296-a63b614a-ba6d-489c-abd9-8109f750df01.png)

> The **time complexity** is **log(log n base 2) base 30**. Even if we add **i= i =7** in the for loop, it has very small effect which is **some constant**. So, the result remains **same** still. It is **baccha** only.

![image](https://user-images.githubusercontent.com/54589605/229359399-249e129c-0a6a-489b-a1d2-95912b6d29e9.png)

> If we also include **i= i * 7**, then also the result remains the **same** as it has very small effect which is **some constant**. It is **baccha** only

![image](https://user-images.githubusercontent.com/54589605/229359506-85a8a026-06e9-41f6-9e9a-cd956c337594.png)
![image](https://user-images.githubusercontent.com/54589605/229359522-a014b913-19d9-4b63-b6d4-20779aaaab8a.png)

> **log(log n)** is faster compared to **n/2 or log n**. So **log(log n)** is dominating the **time complexity** value compared to them. Every oen is **participating** but **log(log n)** is dominating. So, **overall**, **time complexity** remains the **same** which is **log(log n base 2) base 30**.

> **Constants** doesn't have much effects.

* 9 * 6 * 5/(9) -> 6 * 5 -> 30 
* log(log n base 1500) base 30

> So, we got **log(log n base 1500) base 30** as the **time complexity** value.

> Because the **initial value** of **i** is **i=1500**, so the **inner base** is **1500** as it has come **before/earlier**. At the end the **power** of **i** is **i^30**, so the **outer base** is **30** as it has come **after/later**.

> This is how we got the **time complexity** of **log(log n base 1500) base 30**. 

![image](https://user-images.githubusercontent.com/54589605/229360322-f893ef84-4f51-4192-beff-e6a088cab979.png)
![image](https://user-images.githubusercontent.com/54589605/229360445-870e27a9-188d-49a7-b948-9fb67861ba25.png)

> Answer will be **same** only even if we remove **less than equal to** to **less than** only. As **i^9 or i^6 or i^(1/9)** have the **highest power** compared to **add, mul and divide** that why they are dominating here. We have **ignored** the **rest**.

## Asymptotic Notation-I (5) [3rd April 2023]

> As **i** is starting from a **larger no.**, **i=n**, hence the **overall** effect should be **decreasing or decrement**.

* 5 * 4 / 3 * 15 * 25 -> 4/ 9 * 25 -> 4/225
* log(log n base 2) base 4/225

![image](https://user-images.githubusercontent.com/54589605/229436098-855e308e-58d4-4fd2-bffa-aa5598aa3b09.png)

> So, we got **log(log n base 2) base 4/225** as the **time complexity** value.

> Because the **initial value** of **i** is **i=n**, so it has a **greater value**, so now we have to check the **initial value** where the **condition** ends, which is **i >=2**. So the **inner base** is **2** as it has come **before/earlier**. At the end the **power** of **i** is **i^(4/225)**, so the **outer base** is **4/225** as it has come **after/later**.

> This is how we got the **time complexity** of **log(log n base 2) base 4/225**. 

> This is also **wrong** because of the **below proof**.

![image](https://user-images.githubusercontent.com/54589605/229445145-f47c35d0-3c16-4869-9553-a0a4822a08f1.png)
![image](https://user-images.githubusercontent.com/54589605/229446072-049a5c25-8c90-4c6c-bf62-8f3f146ecc24.png)
![image](https://user-images.githubusercontent.com/54589605/229446245-bf099211-58f3-44f9-abb7-cd1f5aac3adf.png)
![image](https://user-images.githubusercontent.com/54589605/229451172-5cb10e53-0796-4fed-8c8e-cd47d89ff4fb.png)

> So, the **time complexity** is  **O(log(log n base 2) base 255/4)**.


![image](https://user-images.githubusercontent.com/54589605/229436734-f0c42dd7-a885-4b66-8281-5b86b20d82cd.png)

> If we got final value of **i** as **i^(1/2)**. Then, the **time complexity** is **O(log(log n base 2) base 1/2**.

> But **sir** is saying it should be **O(log(log n base 2) base 2**. Let's see his **proof** for these solution.

![image](https://user-images.githubusercontent.com/54589605/229438172-40197edc-20df-4d56-b7fc-1ea12be76696.png)
![image](https://user-images.githubusercontent.com/54589605/229451172-5cb10e53-0796-4fed-8c8e-cd47d89ff4fb.png)

> Here is the **proof** why we are getting **base 2** in **outer** base even though **i^(1/2)**. So, remember when we get **1/2** as the **power** then put **2** as the base. In the proof we got **O(log(log n base 2) base 2**, so for **i^(1/2)** we got **time complexity** as **O(log(log n base 2) base 2** and not **O(log(log n base 2) base 1/2**, which we thought **initially**. 

> If it is **i^(1/2)** then it is **ulta/opposite** i.e **base 2** as the **outer base**.

![image](https://user-images.githubusercontent.com/54589605/229447306-8acf58ba-a21c-46ea-bac2-7b69ab6f6815.png)

> For **square**, reverse is **root**. They(square and root) both are the **same**. So, **i^(1/2)** is **root** only.

> Initially **i=n** and after **k times**, it is **n^(1/2^k) = 2**, which is the **termination** condition for the loop. We want the **k** value as it has looped for **k times**. So after applying **log**, we get **1/(2^k) * log n base 2=1**. So, **log n base 2 = 2^k** and after applying another **log**, we got **k = log(log n base 2) base 2**.

![image](https://user-images.githubusercontent.com/54589605/229451172-5cb10e53-0796-4fed-8c8e-cd47d89ff4fb.png)
![image](https://user-images.githubusercontent.com/54589605/229448219-3d9d39f6-5d57-47b9-8358-5f46bd4f9598.png)

> Initially **i=n** and after **k times**, it is **n^(4/255)^k = 2**, which is the **termination** condition for the loop. We want the **k** value as it has looped for **k times**. So after applying **log**, we get **(4/255)^k * log n base 2=1**. So, **log n base 2 = (255/4)^k** and after applying another **log**, we got **k = log(log n base 2) base 255/4**.

![image](https://user-images.githubusercontent.com/54589605/229450647-f70a7f71-4b00-4dd4-8d88-2fd6be134bbd.png)
![image](https://user-images.githubusercontent.com/54589605/229449100-7c669f9a-baf4-43e0-807c-e740f6f2681e.png)

> So, when we are doing **i^20** and the **initial value** is **i=2**, the time complexity is **log(log n base 2) base 20**.

> So, when we are doing **i^65** and the **initial value** is **i=2**, the time complexity is **log(log n base 2) base 65**.

> It is similar for **root** also. So, when we are doing **i^(1/2)** and the **initial value** for the **termination** condition for the loop is **i=2**, the time complexity is **log(log n base 2) base 2**. So, **reverse** is happening.

![image](https://user-images.githubusercontent.com/54589605/229454189-cfd8032b-7ca6-4f4e-8041-4ee4b8c58a7a.png)

> If we add **i= i + 75**, then also the **result** remains the **same** as  it has **very small effect**. If we add **i= i * 75**, then also the **result** remains the **same** as  it has **very small effect**.

![image](https://user-images.githubusercontent.com/54589605/229454633-edbc6237-8d4f-4db1-8dab-e56c1877d019.png)

> So, if the  **initial value** for the **termination** condition for the loop is **i=23**, then we get **n^(4/225)^k = 23**. Hence, the value of **k= log(log n base 23) base 255/4)**. So, the **time complexity** is **O(log(log n base 23) base 255/4)**.

> Try to understand what is **happening**. **Time complexity** means **how many times the loop is running and what is happening within the loop**.

## GATE Questions

* Find **time complexity** and **value of q**.

> For the first loop, the **time complexity** is **log n base 2** and **p** value is **incrementing everytime**. The loop is repeating **log n base 2** time and **p** is **incrementing everytime**. So, **p** value is **p= log n base 2** only. So, how many times the loop is repeating that many times only **p** is incremented.

> After the end of the first loop, **p= log n**.

> For the second for loop, the **time complexity** is **log p base 2 -> log(log n base 2) base 2**. The second loop is **log p** time and not **log n** times as **j <=p** is the condition.

> As from the first for loop, we gathered whatever is the **time complexity**, that value is the value of **p**. So, here in the second for loop as well, whatever is the **time complexity**, that value is the value of **q** which is **q= log(log n base 2) base 2**.

![image](https://user-images.githubusercontent.com/54589605/229472063-cd52d5b5-b7f4-4acb-9bcd-3553238a8382.png)
![image](https://user-images.githubusercontent.com/54589605/229484717-2e29daf4-7aff-4e5c-b8d4-47f9372e097b.png)
![image](https://user-images.githubusercontent.com/54589605/229488396-fec7b740-17de-42ce-86c1-38250c7cccb5.png)
![image](https://user-images.githubusercontent.com/54589605/229488623-74c42aee-b4d5-401a-9084-479fccb4ec2e.png)

> This is for when we have many values within **one** loop only. If we have **add and mul** within one loop then **mul** will be **faster** than **add**, so it will have much more effect than **add**. That's why we ignored **add** in that case and took the **faster value**.

> When finding **time complexity**, then we have to take the larger value like **log n > log(log n)** in the above example as if **n=16**, then **log 16 -> 4** and **log(log 16) -> log 4 -> 2**. As **4 > 2** which means **log n > log(log n)**. Hence we took **log n** as the **time complexity** in the above question.

[**IMPORTANT**]

> They are **two** different loops and they are **outer** loops, when **outer** loops, take the **larger one**.

![image](https://user-images.githubusercontent.com/54589605/229489833-b7094cbd-6aa4-491f-9e0b-85eba2b46e68.png)
![image](https://user-images.githubusercontent.com/54589605/229491861-8bd6410e-4516-4b4c-a3f5-b48bfabcd48a.png)

> Time complexity is **O(nlog n)** because the time complexity between the inner for loops is **log n** but the outer for loop is running for **n times**. So, it is **O(nlog n)**. The **q** value remains the same because every in the outer for loop, **p and q** are initialized by 0 only.

* return -> Get out of the function.
* exit -> Get out of the entire program or stop the program.

![image](https://user-images.githubusercontent.com/54589605/229493160-63908197-026f-4d08-a8a0-99c5c291754f.png)
![image](https://user-images.githubusercontent.com/54589605/229498658-742e3bc2-fa3f-45f9-810f-bd4a613428e1.png)
![image](https://user-images.githubusercontent.com/54589605/229499000-3e3da2fb-eaac-42a5-916a-1dffa2725d37.png)

> If **q=0** was within the first for loop like **p=0**, then the **q** value would have been **q= log n**, as after every loop, q value would have been initialized with **q=0** only.

* break -> outside loop or out of the loop.
* return -> outside the function(same as above), just different wording.
* exit -> program stops

![image](https://user-images.githubusercontent.com/54589605/229500169-d964c9f0-4f2e-4d42-83e5-4f6cc08b0848.png)

> For the first loop, time complexity is **log n^2 base 7** as the termination condition for the loop is **i <= n^2** that why.

> For the second loop, time complexity is **log n^2 base 7** as the termination condition for the loop is **i <= n^2** that why.

![image](https://user-images.githubusercontent.com/54589605/229502823-f7f097b7-0546-41d8-ac04-33e012c59105.png)
![image](https://user-images.githubusercontent.com/54589605/229503671-6dbfb9a4-7dae-4fee-ad9c-5ed7fdce71e4.png)

> Both are correct if we ignore the **constants**. Check which is given in the **options** of the question. Choose that one.

![image](https://user-images.githubusercontent.com/54589605/229505160-0a9114d3-7db8-4966-a2fe-94414755cf50.png)

> For the **value of x**, as the **inner loop** is repeating **log n** times and every time **n** is getting added so **n log n** but the **outer loop** is also there which is **log n** times. So, value of **x = log n * nlogn -> n * (log n)^2**.

![image](https://user-images.githubusercontent.com/54589605/229505864-77653c1c-7b46-4776-8359-026cf1ded495.png)
![image](https://user-images.githubusercontent.com/54589605/229506380-2c667974-8038-47a7-b56c-ee41add96fe9.png)

> If we have replaced the variable **n** in **x= x + n** with **x=x+1**, then the **value of x** is **log n * log n -> (log n)^2**. As the inner loop runs for **log n** times and the outer loop also runs for **log n** times.

> By replacing **n** with **1**, the **value** is changing only. The **time complexity** is **same** only. Time complexity will only change when loops are **increasing or decreasing**.

![image](https://user-images.githubusercontent.com/54589605/229507869-3706aefb-48c6-478e-961e-9066f9677571.png)

> Even if we put **0**, then also only the **value** changes. The **time complexity** remains **same** only.

> In **power**, constants matter, don't ignore them there.

![image](https://user-images.githubusercontent.com/54589605/229513967-e69ba091-bc02-4051-b9b2-f326e8cae36b.png)
![image](https://user-images.githubusercontent.com/54589605/229516312-1b66d5e2-7d55-4c94-812d-9252496a1841.png)
![image](https://user-images.githubusercontent.com/54589605/229516249-abe8a073-a836-4692-b8fe-199d8467ff15.png)
![image](https://user-images.githubusercontent.com/54589605/229516472-ecd2a386-997a-4998-b6a4-a7f951ad85c5.png)
![image](https://user-images.githubusercontent.com/54589605/229516823-dd337e48-f32b-45e3-bfc0-cf7bc2aaf8f7.png)

> If both the loops have **n** complexity then the value of **x** will be **n^(n^2)**. As **j** loop has run **n** times and each time **n** is multiplied to **x** then the value of **x** after whole of **j** loop is **n * n -> n^2**. So, **n * n -> n^2** will be for each loop of **i**, so for **n** loops of **i**, we get **n^(n^2)**.

![image](https://user-images.githubusercontent.com/54589605/229517864-ec76b7f1-355f-474e-b50b-339c380ea928.png)
![image](https://user-images.githubusercontent.com/54589605/229518106-566ea1c0-95dd-4296-a20f-3781f41d598d.png)

> So multiply **n^(1.57) * log n^7 base 8** and that is the **answer** for the given question.

![image](https://user-images.githubusercontent.com/54589605/229521532-a59fcc11-2c5d-4a57-a2f7-3aea51a22d12.png)
![image](https://user-images.githubusercontent.com/54589605/229521845-0e5338df-6e86-4b3a-b21d-5a71d2a0d21c.png)

> If **x=0**, then **0 * anything -> 0**. So, the value of **x** will be **0** only.

> There are **2** loops in the program. They are **inner** loops as **j** has come before **i** has completely stopped. AS they are **inner**, so we have to **multiply**.

> As **n** is a **prime no**, it has **only two factors** i.e **1 and itself**. So, for all the values of **i**, only **two** values will enter the **j** loop.

![image](https://user-images.githubusercontent.com/54589605/229525351-ff33b8a5-6dd6-41ee-bbef-a6f69111cc9b.png)
![image](https://user-images.githubusercontent.com/54589605/229525731-040aacb7-feb2-44be-b5c6-80d8d319ce75.png)
![image](https://user-images.githubusercontent.com/54589605/229525849-0890ab9c-f0e7-44d9-9b18-11c4d9d74a46.png)

> Even though there are **two** loops and they are **inner** loops. We only got **time complexity** as **O(n)** as there is an **if** condition which is stopping most of the **i** iterations to go to **j** loop. Everyone not allowed into **j** loop. Because of **n** being **prime number**, only **two** values can go into **j** loop.

![image](https://user-images.githubusercontent.com/54589605/229526008-c669800a-d873-4aac-b86f-e4a726abf724.png)

> If we remove the **condition** then the **time complexity** as **O(n^2)*.

![image](https://user-images.githubusercontent.com/54589605/229610057-63d39edf-fc3e-4f3f-a04c-444b937b3a20.png)
![image](https://user-images.githubusercontent.com/54589605/229610083-5ed96e12-f13e-4771-a543-08de173875e7.png)
![image](https://user-images.githubusercontent.com/54589605/229610117-fa09f375-4011-419e-94f8-78919579c1e2.png)
![image](https://user-images.githubusercontent.com/54589605/229610141-f21463be-d26d-4661-bec2-2d524e5a91cf.png)
![image](https://user-images.githubusercontent.com/54589605/229610164-75e7104b-2869-4289-9ef0-39b018acd540.png)
![image](https://user-images.githubusercontent.com/54589605/229610188-cb14c423-f0bd-4327-b9d6-0d282bf3ea82.png)
![image](https://user-images.githubusercontent.com/54589605/229610201-9735d2e5-c655-43d4-a010-b63421294136.png)



## Asymptotic Notation-II (6) [3rd April 2023]

### Time Complexity Questions continued

> There are **two** loops and they are **inner** loops. In **j** loop, it is dependent on **i**. Without mentioning **i**, we cannot define **j**. As **j** is dependent on **i**, or when **one** is dependent on **another** then we can't write them individually. We have to write them **combinedly** only.

> Based on the **dependency**, we cannot **divide**. Based on **i**, **j** will come. **j** is how many times? **i** times. Whenever there is a  **dependency**, we cannot **separate** them. We have to take **both** of them into consideration.

![image](https://user-images.githubusercontent.com/54589605/229578017-d9cf42fd-595f-4dac-a768-e6fe24d3e71d.png)

> If **n terms** are there then **each term** is **one loop**. We are getting the **terms** because of the **combination of i and j**. **i** will say how many loops. **j** will say every loop how many time.

![image](https://user-images.githubusercontent.com/54589605/229582397-11aa207b-9eb5-49a1-82e5-74d4f01e91f2.png)
![image](https://user-images.githubusercontent.com/54589605/229582500-1649aff7-3fc2-4944-aa2d-eb9e7deee18f.png)

> So, the **time complexity** will be **O(n^2)**.

> If **i=1**, then **j** loops  **one** time only.

![image](https://user-images.githubusercontent.com/54589605/229582790-576b0543-4ea8-4511-bcdf-a951bbc99c86.png)

> Instead of **i**, we have put **n** in the **j** loop, then also we would get **O(n^2)** as the **time complexity** which is the **same** as before. But in the **above question**, the actual answer is **n(n+1)/2** but we are simply ignoring the **constants**. So we get **O(n^2)**.

> For the **2nd question** we get **O(n^2) or n * n**, which is the actual correct solution. So they are not the same solutions.

> So the symbol we write on the right hand side which is the **Theta**, are simply **approximation**. But before **Theta**, whatever we write that's the **actual** solution.

> We are **approximating** because the **actual values** differ from system to system, if the system is **slower** then we could get **n(n+1)/2^t** or if the system is **faster** then we could get **n(n+1)/1.2**. So the **actual** answer is varrying with **constant** values. That's why we use **approximations**.

> So the **actual value**, **n(n+1)/2** will change from system to system. It could be **n(n+1)/20** or **n(n+1)/200** or **n(n+1)/2000000**. They keep on **changing**, but in every system one thing is **common** that is **n^2**. **Constant factor** will only **change**. This is the **meaning** of **Theta(n^2)**. From system to system in the **actual answers**, the **constant** factor can **change**. But one thing is **common** in every system which is **n^2**. Some constant factor **n^2**.

![image](https://user-images.githubusercontent.com/54589605/229583693-5e948183-2cc2-43d7-98a6-29e60a59197b.png)

* 1 + 4 + 9 + ........ + n^2 -> Series

* Above series explaination -> https://math.stackexchange.com/questions/1544526/the-sum-of-the-first-n-squares-1-4-9-cdots-n2-is-fracnn12

![image](https://user-images.githubusercontent.com/54589605/229589693-8d7753ca-fa17-402d-bc97-4385e90ca287.png)

> So it givens **n^3**. Hence the time complexity is **Theta(n^3)**. So, in every system **n^3** is **common**.

![image](https://user-images.githubusercontent.com/54589605/229590344-6a20a21d-ba93-4b54-960f-b69ba8ee783d.png)

> The loop is **dependent** on **s**. **s** is always incremented by **i**, but **i** is always incremented by **1**. After doing **k times**, the total sum is equal to **n**.

![image](https://user-images.githubusercontent.com/54589605/229593178-08f36cd9-065c-4bc8-8513-bfe952a97276.png)

> If **s** is incrementing by **s= s + i^2**. Then, the **time complexity** will be **Theta(cube(n)) -> Theta(n^(1/3)**.

![image](https://user-images.githubusercontent.com/54589605/229594030-c427c7bf-1497-45d5-a63a-11f8c22b6ff1.png)

> **j** is based on **i** loop. **YES**. If a for loop **j** is incremeneted by **3** then **time complexity** is **n/3**. If a for loop **j** is incremeneted by **10** then **time complexity** is **n/10**. If a for loop **j** is incremeneted by **20** then **time complexity** is **n/20**.

> So, in the below question **j** is incremented by **i** then **time complexity** is **n/i**. There is **dependency**. So, if **i=1**, then the **j** loop will repeat, **n/i -> n/1 -> n** time.  So, if **i=5**, then the **j** loop will repeat, **n/i -> n/5** time.  So, if **i=n**, then the **j** loop will repeat, **n/i -> n/n -> 1** time. The **series** we got is by considering **both, i and j**.

![image](https://user-images.githubusercontent.com/54589605/229597235-984ca85c-a5e0-4f3a-bf99-41612ef02c8c.png)

* n/1 + n/2 + n/3 ............. + n/n -> n[1/1 + 1/2 + 1/3 + ........ 1/n] 

> This is a **logarithmetic series**. So we get **n * log n -> n(log n)**. The **constant factor**, **[1/1 + 1/2 + 1/3 + ........ 1/n]** is equal to **log n**.

* [1/1 + 1/2 + 1/3 + ........ 1/n] -> log n

> As **1/n** is there so **log n**.

* [1/1 + 1/2 + 1/3 + ........ 1/log n] -> log(log n)

> As **1/log n** is there so **log(log n)**.

> So, whatever is there at the end **1/whatever**, then we do **log** of it so, **log(whatever)**. That's the **logic**.

> They are **inner** loops. They are **dependent** on each other. They are based on **one variable**.

> **int i** means **i** is declared and **memory** is allocated for it.

![image](https://user-images.githubusercontent.com/54589605/229601850-49e40c3c-e57e-4f38-b368-cf247af0f3d5.png)
![image](https://user-images.githubusercontent.com/54589605/229601964-cf7df09f-3a5e-4761-91fd-a92d019d5906.png)
![image](https://user-images.githubusercontent.com/54589605/229602095-6ee91b9e-d3ea-4703-8fdd-180f86e0ca94.png)

> We got **n^3** from the inner most loop and in the next iteration it was **n^3 + 1** which is greater than **n^3**, so the condition of the loop fails and we go to the **second loop**. We check the condition that **n^3 + 1** is less than **n^2** and it is **false**, so we go to the **first/outer** loop. We check condition that **n^3 + 1** less than **n** and it is **false**. So, we get out of all the loops. We got **1** itiration in **first loop**, then **1** itiration in **second loop** and **n^3** iteration in the **third/last** loop. So the **time complexity** is **O(1 * 1 * n^3) -> O(n^3)**.

![image](https://user-images.githubusercontent.com/54589605/229602918-0417a5b8-c2be-4139-959f-2e828b68f631.png)

> If we do like that then **each i** value is localized to their respective **for loop** blocks only. So, they are **different** now. Now, there are **two** declarations. First loop has it's own declaration and the **second and third** loops have their own declaration.

![image](https://user-images.githubusercontent.com/54589605/229603089-a59164c5-9196-43fd-831e-d5845205c438.png)
![image](https://user-images.githubusercontent.com/54589605/229603054-cc0bc2ad-df4f-4e60-89ef-66f854c750b4.png)

> If we write **int i** in every for loop, then there are **three** declaration and each and every loop is **different**. It is like **i, j and k**. It is like **three** different variables. One person don't see the **other person**. Everyone is individual. Their scope is **inside** their respective **for loop** blocks.

![image](https://user-images.githubusercontent.com/54589605/229603558-0ec35f2e-78d6-4f94-a8cc-881e366f4db6.png)
![image](https://user-images.githubusercontent.com/54589605/229604245-288c988d-fa18-4bab-a0ac-2cb00b7f7c48.png)

> Now, there is only **one i**.

![image](https://user-images.githubusercontent.com/54589605/229604504-ea0d11a5-8166-4cf2-a294-48ed0cc1bc22.png)
![image](https://user-images.githubusercontent.com/54589605/229605386-2b910a46-f155-448b-a652-5a1ffba17d48.png)
![image](https://user-images.githubusercontent.com/54589605/229605859-6267f4da-66bd-4286-abec-17cd32c2679c.png)

> It is forming an **infinite loop**. So, it is not an **algorithm**. It is a **program** which is going to  **infinite loop**.

![image](https://user-images.githubusercontent.com/54589605/229606268-a822465d-caac-47ea-9a83-c2b59e5c8a2d.png)

> Inner loops affecting outer loops.

![image](https://user-images.githubusercontent.com/54589605/229610287-aecda8f1-f14b-4c88-a8a1-23693cb27b8f.png)
![image](https://user-images.githubusercontent.com/54589605/229610310-03c68713-57d0-409f-8ca4-eae1d1b5a897.png)
![image](https://user-images.githubusercontent.com/54589605/229610337-e9fde60f-c3c2-4ae7-bf2e-a165a911d2a6.png)
![image](https://user-images.githubusercontent.com/54589605/229610357-63d12144-f145-4051-b844-201b1395b768.png)
![image](https://user-images.githubusercontent.com/54589605/229610373-5b502678-b0f8-4708-bd7e-d910a2b9d58f.png)


[**IMPORTANT**]
> **Practice** all of the questions. Before starting the new topic. Do some **practice** questions and revise them again.

## Asymptotic Notations

> Approximate answer

1) Big-O Notation -> (**<=**)
2) Omega Notation -> (**>=**)
3) Theta Notation -> It means **equal**. It means **Big O(<=)** as well as **Omega(>=)** also. If both(Big-O and omega) satisfied then it is **theta**.

> If between two people <= and >=, both are possible. Then, they are **equal**. If both are **True**, then they are **equal**. 

![image](https://user-images.githubusercontent.com/54589605/231459382-4c202308-2b11-44dc-804f-5118a5db48bf.png)

> If we know **Big-O** then we know how to apply **<=**. If we know **<=**, then we also know **>=**. As we know both(**<=** and **>=**), then we can apply **theta**. 

> If we learn **Big-O**, then automatically **all** will come.

> If we used **Theta** for one problem, then we can use **Big-O** as well as **Omega** for the same problem. **Theta** means **Big-O** as well as **Omega** only. 

![image](https://user-images.githubusercontent.com/54589605/231461655-2466978b-7f27-4f76-b0c5-8119a53f523a.png)
![image](https://user-images.githubusercontent.com/54589605/231462675-ab0129e5-85c1-4963-bbbc-35009ce892f8.png)

* Time and Space complexity cannot be **negative**.

![image](https://user-images.githubusercontent.com/54589605/231463083-bc937018-244f-41a0-b8e9-8a4f2ff6698d.png)

## Big-O Notation(<=)

* O -> <= [Less than or equal too]
* o -> <  [Less than]

![image](https://user-images.githubusercontent.com/54589605/231464989-cafdd352-b73e-44bb-937a-5517092b8aa2.png)

> **Big-O** means **right side** person would be **more or equal too** when compared with the **left side** person.

> In **Big-O**, **more or equal too** is on the **right side**. 

> According to **Big-O**, **right side** is **more/greater/bigger or equal too** than the **left side**.

![image](https://user-images.githubusercontent.com/54589605/231469636-b90040ec-603d-46ee-b7d5-69655dca5f15.png)

## Example

> We want to prove **right bigger** but frankly in the question, **left** is bigger.

![image](https://user-images.githubusercontent.com/54589605/231471403-9b66972c-0e8f-410c-990f-be5735920aff.png)

> The **2n** on the **left side** is far bigger than the **n + 5**. So, we will take **c=2**. Now, **n + 5 <= 2n**, so the **right side** is **bigger**. When comparing **left and right** side, **right side** is bigger with the help of **constant, c**. That's the meaning of **Big-O**.

![image](https://user-images.githubusercontent.com/54589605/231472294-b8c72faa-3f94-48b6-a8fa-72372f6e31ba.png)
![image](https://user-images.githubusercontent.com/54589605/231474437-ab0449d2-ce95-42ba-a0f9-eb77314a36a4.png)
![image](https://user-images.githubusercontent.com/54589605/231476493-3e7eaff7-802a-4585-a4d2-1b5a066c93a5.png)
![image](https://user-images.githubusercontent.com/54589605/231477937-9e2fcc06-2b19-49ee-bdb4-f91b18258e3a.png)

> In **Big=O**, we can take the support of **one** person, which is the **constant, c** and using that **constant, c**, we can prove that **right side** is **bigger or equal too**.

* **right side** is **bigger or equal too** -> **Big O**.

> In **example 2**, we can see that **right side** is **bigger** and we want to prove that **right side** is **bigger** only. So, **we don't need the help of the** **constant, c** here. We can set **c=1**, as support of **constant, c**, is not needed.

> From which value of **n** onwards, this relation will hold? Minimum value, start checking from **n0=1**. May or may not work. **Left** is **1** and **right** is **6**. So, **1(one)** onwards it is working. So, **right side** is **bigger**, proved. It is working from **zero(0)** also but don't write **zero(0)** when analyzing **algorithm**, **minimum one input is required**, so from **one** onwards start checking.

![image](https://user-images.githubusercontent.com/54589605/231481969-f28ac272-1acb-4725-8da1-42fe35754262.png)

> So, it is working **one(1) onwards**, and not **one(1) only**.

![image](https://user-images.githubusercontent.com/54589605/231482186-6d4974c7-c6e3-446e-9c9c-15c878a10a59.png)

> So for **Big-O** notation, it is the **starting** boundary. **From which point onwards it is working**, then is no **until** point here, until **infinite**. There is no **ending boundary** to it. Just say, the **starting point** and **from that point onwards, it is working**.

![image](https://user-images.githubusercontent.com/54589605/231483165-a6ec8330-4c8d-411d-8c18-7271eec4ee5a.png)

> From **1** point onwards, it is working. The constant value is **c=1** and **n0=1**. In place of **c** anything is ok, but is should be **constant**. Greater than **zero(0)**, we can take **anything**.

![image](https://user-images.githubusercontent.com/54589605/231485311-af4739fe-6b64-4fd5-8db6-a7b28cf6a236.png)
![image](https://user-images.githubusercontent.com/54589605/231485852-b607f18a-d5c8-47c5-bc68-7d4a00190317.png)

> The line **n= O(n+5)**, means that when comparing **n** with **O(n+5)** then **O(n+5)** is **bigger or equal too**, **n**, after taking **constant, c** help from some **n0** onwards. **Right side** is **bigger**.

> Even though the **constant, c** is available, we have to take it as **right side** is already **bigger** and we want the **right side** to be **bigger** that's we didn't need any help.


## Recursion-Part-I (7) [13th April 2023]

> **Big-O** means **right side** is **greater**.

> **Omega** means **right side** is **smaller**.

## Questions

![image](https://user-images.githubusercontent.com/54589605/231685712-f14fbe0b-1e42-4a85-8b59-de4af086664d.png)
![image](https://user-images.githubusercontent.com/54589605/231686479-07342880-7e32-45df-a26d-af7e9f0048f3.png)

> With respect to **c**, **n0** value will **change**. If we take **bigger c** value then **n0** value will be **smaller**. 

> **n0=3** means **3 onwards** upto **infinite**. Starting boundary is **n0=3** but there is no **ending boundary**.

![image](https://user-images.githubusercontent.com/54589605/231694994-9a4bdedc-c654-4e48-b7f0-82b8a75511c1.png)
![image](https://user-images.githubusercontent.com/54589605/231695183-1088a399-f0cb-45c9-b543-8bf4438c41b3.png)

> Starting boundary is **n0=10** but there is no **ending boundary**.

![image](https://user-images.githubusercontent.com/54589605/231688210-8bd04214-1a35-4b73-947c-26058dc4eda3.png)

> **f(n)= O(g(n))** means that comparing **f(n)**, **g(n)** will be **greater or equal too** after taking **constant help**. After comparing left and right, right will be **greater or equal too** after taking **constant help**, some **n0** onwards.

![image](https://user-images.githubusercontent.com/54589605/231690377-714b1934-42d3-45d1-b831-cffdd087d91d.png)
![image](https://user-images.githubusercontent.com/54589605/231690539-a0ddc063-d04a-4774-aba4-1d2aacc1839b.png)

> **n** is a function and we cannot take a **function**. Constant help is only allowed.

> The constant(c) cannot take a function **n** as on the left side it is **n * n** and on the right side is **c * n**. Only way it is possible if **c=n** but that is not allowed in notations, we cannot take a **function**.
 
![image](https://user-images.githubusercontent.com/54589605/231691836-9cb4ac0a-2090-4a11-8401-2b17ae8f1958.png)

> Using **Big-O**, we cannot prove any person is **bigger**. We can take only **constant** help and prove whatever possible. By using **constant** help if we can prove **right side** is **bigger** then that is **Big-O**.

> There is a limit for everything, we can only use **constant** help. More than **constant** help is not allowed. 


## Omega Notation(>=)

> In **Omega**, **less or equal too** is on the **right side**.

> By taking **constant, c** help, we can prove that **right side** is **less or equal too**. That is **Omega**.

* **right side** is **less or equal too** -> **Omega**.

![image](https://user-images.githubusercontent.com/54589605/231696283-2dd5ae72-b306-40fe-87c0-8834c2cc4b92.png)

> Not necessary that **c** value should be in **integers** only it can be in **fractions** as well like **1/2 or 0.5, 1/4 or 0.25**. More than **zero(0)**, take anything, which is a **constant**. Less than **zero(0)** not allowed and more than **zero(0)** anything which is **constant** is allowed. 

> **n0** indicates **inputs**, so it has to in **integer** and cannot be in **fractions**. We cannot have **1.5** inputs it should be either **1** or **2** inputs but not **1.5** inputs.

![image](https://user-images.githubusercontent.com/54589605/231698060-84cff2a3-ffd9-4bb6-a7d7-ccfb7b57a613.png)

> As it is **Omega**, we want to prove that the **left side** is **bigger** or directly that the **right side** is **smaller or equal too** as it is the **opposite** of **Big-O**.

>  We want to prove that the **left side** is **greater** but to be frank, the **right side** is **greater**.

![image](https://user-images.githubusercontent.com/54589605/231702689-008e17aa-b172-43af-9c6e-182fb92449a7.png)

> Whenever **c** value changes, then automatically **n0** value also changes. We don't need to find out every **c and n0** value. Find out **one pair** of **c and n0** value.

![image](https://user-images.githubusercontent.com/54589605/231703200-10bc7f82-d997-4e65-9a19-ec7b9951a4f1.png)

> One **c** value is **enough**. After fixing **c** value, adjust **n0** value accordingly.

![image](https://user-images.githubusercontent.com/54589605/231706580-2389733c-7f81-4f54-9e97-99a5f5d3c2b5.png)

> **n = Omega(n+5)** means that when comparing **n** with **Omega(n+5)**, we can prove that **n** is **bigger or equal too**, **n+5** with the **constant help** of **c**.

> Without any help, **n + 5** is **bigger**.

> After taking **constant help**, we proved **n** is **bigger**. **Omega** means **left side** is **bigger or equal too**.

![image](https://user-images.githubusercontent.com/54589605/231708907-f54d580f-1eff-4705-bb26-3eb1ec055921.png)
![image](https://user-images.githubusercontent.com/54589605/231709685-4f89887a-6fe0-4d73-b8a0-51d3da9d41cd.png)

> **c** cannot take a **function**. How small the function is, **c** cannot take a **function**. It can only take **constant** values.

![image](https://user-images.githubusercontent.com/54589605/231710063-88d5db24-e96e-45e0-9af1-019459a89837.png)

> For only few people it is possible to prove with **constant help** and not for all.

![image](https://user-images.githubusercontent.com/54589605/231712069-b4d26761-6b33-4521-a3ce-ba92f8cad741.png)

> Bigger one(n^2 here) will **decide** the answer. Think of the **bigger ones** they will **decide** the answer. Don't worry about the **smaller** ones.

![image](https://user-images.githubusercontent.com/54589605/231712165-8d30bc15-3f98-4806-b33d-7c0e7f32316a.png)

> Comparing **n^2** and **n^2 + n + 1**, we proved **n^2** is **bigger** by taking **constant help** that the **left side** is **bigger**.

## Summary

* With the help of **constant** prove **right side** is **bigger or equal too** is **Big-O**.
* With the help of **constant** prove **left side** is **bigger or equal too** is **Omega**.

> We cannot take **function help**, we have to take **constant help** only to prove them. There is no **requirement** of **every c or every n0**. Just find **one(1)** pair of **c and n0**.

> Until **constant** help is **only possible**. If not possible with **constant** help or more than **constant** help is needed then **Big-O or Omega** is not possible there.

![image](https://user-images.githubusercontent.com/54589605/231714728-a3db7f75-a6f8-4502-b814-6a54fccf4160.png)

![image](https://user-images.githubusercontent.com/54589605/231906104-834a66aa-8262-40a6-ac46-19132abefd0e.png)

> From **c=1/2 and n0=5 onwards**, the **omega** notation is working.

![image](https://user-images.githubusercontent.com/54589605/231906337-c7802369-0621-4b53-8a45-7d0ab9a39e01.png)
![image](https://user-images.githubusercontent.com/54589605/231906672-9b6691e0-6c7b-4df6-9391-48792204260e.png)

> Here also, we proved that for **c=1 and n0=1 onwards**, the **Big-O** notation is working.

> For the given two functions **f(n) and g(n)**, we have proved that **f(n)** is **bigger** by taking the constant help of **c=1/2 and n0=5 onwards**, the **omega** notation is working.

> For the given two functions **f(n) and g(n)**, we have also proved that **g(n)** is **bigger** by taking the constant help of **c=1 and n0=1 onwards**, the **Big-O** notation is working.

> So for some value of **c and n0**, **omega** notation is working. So for some value of **c and n0**, **Big-O** notation is working.

* **c=1 and n0=1 onwards**, the **Big-O** notation is working.
* **c=1/2 and n0=5 onwards**, the **omega** notation is working.

![image](https://user-images.githubusercontent.com/54589605/231907332-afeff6b4-7834-4a0a-81c5-23fc03167a96.png)

> To eliminate the confusion of two **c** values we have taken **c1** for **omega** and **c2** for **Big-O**.

> So we can see that we have **c1=1/2 and c2=1** and **n0=5 and n0=1** respectively. As for **n0** values they are overlapping from **n0=5** which is the **common point**, so we will use **n0=5** as both **Big-O and omega** are working fro **n0=5** onwards.

> Hence, we can say that **c1=1/2 and n0=5**, we can say that **omega** is working and for **c2=1 and n0=5**, we can say that **Big-O** is working. So **Big-O and omega** both are possible.

> Then, we can say that **n = Theta(n+5)**, as we have proved that between **two people** both **Big-O and omega** are possible for some **c1=1/2** value, **c2=1** value and **n0=5** value. Then we can say **Theta** possible.

![image](https://user-images.githubusercontent.com/54589605/231908749-7dbb24e7-1b8e-42cb-bbaa-5e8b7cbb6cad.png)

## Theta Notation

> **Theta** notation is very simple, please prove **Big-O and omega** notation possible. **Both** should satisfy, if **one** fails then we cannot say guranteed.

![image](https://user-images.githubusercontent.com/54589605/231909143-6bff60a8-1480-423e-9c01-21b5b3c9c45e.png)

> In the **first point**, we have to find **c1** value where **omega** notation is working and along with it find the **n0** value which onwards **omega** is working.

> In the **second point**, we have to find **c2** value where **Big-O** notation is working and along with it find the **n0** value which onwards **Big-O** is working.

> After finding **c1 and c2** value we have to find the **common point** in **n0** where both **omega and Big-O** are working. If we find **n0=1 and n0=5**, then the **common point** would be from **n0=5**.

![image](https://user-images.githubusercontent.com/54589605/231909695-adb07659-96c4-4080-8c16-e53a7b34e66d.png)
![image](https://user-images.githubusercontent.com/54589605/231909842-004ac36d-b124-41a8-bca6-7f9ff2c5f03a.png)
![image](https://user-images.githubusercontent.com/54589605/231910556-498bf20d-e046-4174-87ce-123145dc95a4.png)

> To say **Theta**, **omega and Big-O** are possible. It is an **AND** operator, **both**, should be possible.

![image](https://user-images.githubusercontent.com/54589605/231911077-d1d2050e-8e64-4b2a-a598-0f654d7bf282.png)
![image](https://user-images.githubusercontent.com/54589605/231911887-b2670ce7-48fa-4d15-a67f-65dbe2c8bcc6.png)

> Sometimes **c1 and c2** maybe **same**.

![image](https://user-images.githubusercontent.com/54589605/231913041-0aed30fc-934e-406e-a49f-6eaf9b51cdbe.png)

> If any one of the them(Big-O and omega) fails, then **theta** also fails/not possible. That's the reason for **AND(&&)** operator.

![image](https://user-images.githubusercontent.com/54589605/231913216-f3b3510e-85aa-48c9-aa35-e44ed43d3040.png)

> If one fails, then **stop**. If **both pass**, then only **theta** is possible.

> **Theta** means **<= and >=** both should be possible because of **AND operator**, which means they should be **equal**. **<= and >=** both are satisfied which means they are **equal**. 

> But in the above question, **n** and **n^2** were not **equal**, that's why they failed.

![image](https://user-images.githubusercontent.com/54589605/231913579-50460486-4973-43e0-8b16-84aea672c22e.png)

> **Theta** means **equal**. But, **n** and **n^2** were not **equal**, that's why they failed or **theta** failed for them.

> If asked to find **theta** among **two** people, then we don't need to do/find **Big-O and omega** between them. We just need to verify that **both are equal** or not. 

> We don't need to do definitions also. **Theta** means **equal**. We just need to verify that **both are equal** or not. If they are **not equal**, then **theta** fails.

![image](https://user-images.githubusercontent.com/54589605/231913929-91ce6c26-52ac-4343-8b78-0b985fc86f97.png)
![image](https://user-images.githubusercontent.com/54589605/231914330-825936ff-08e7-4dfe-b171-cee62b4bcdfa.png)

> Here, in **both sides**, we have **n** which means both are **equal**. As they are **equal**, hence, **theta** is possible.

![image](https://user-images.githubusercontent.com/54589605/231914597-c0fa94ea-4c17-4064-ba14-eacc30ee28f7.png)
![image](https://user-images.githubusercontent.com/54589605/231915919-af202874-40a1-473c-a09b-5dbb875c3269.png)

> In this case, we have to see the **bigger values** which is **n^2**. As **n^2**, is present on both sides, hence both of them are **equal**. So, **theta** is possible.

> We have to compare the **bigger values**. **Smaller** values will be taken care of by the **constant(c)**. Just compare the **bigger values**. **Theta** possible means **Big-O and omega** both are possible. 

> These **two** are **equal** because we are neglecting the **Smaller** values. They are **mathematically not equal** but they are **asymptotically equal**. By neglecting the **Smaller** values/terms, **bigger** values are **equal**.

![image](https://user-images.githubusercontent.com/54589605/231916402-575910bf-9b98-46e1-91ce-f7a301d529e8.png)

> **Theta** means **asymptotically equal**, which means by neglecting the **Smaller** values/terms, **bigger** values are **equal**.

![image](https://user-images.githubusercontent.com/54589605/231916565-0024fafc-33aa-4b17-8a95-3d8275ab4a7e.png)

> In the above question, they are **mathematically equal** as well as **asymptotically equal** also. **Mathematically equal** means they will be **asymptotically equal** also but **asymptotically equal** doesn't mean they are **mathematically equal**.

![image](https://user-images.githubusercontent.com/54589605/231916941-be779ec7-2e6d-4b8a-a6da-ee529ad07b53.png)

> Both the sides are not **exactly or mathematically equal** but they are **asymptotically equal**, as **bigger** person is **same** for **both the sides**.

## Trick to find **Theta** notation [**IMPORTANT**]

> We have to check the **bigger** values/function on **both sides**. If the **bigger** values/function on **both sides** are **equal**, then **theta** is **asymptotically equal** and possible. 

![image](https://user-images.githubusercontent.com/54589605/231917675-9418171e-03b6-4c8a-86a3-177199316781.png)
![image](https://user-images.githubusercontent.com/54589605/231917733-9f8119c4-a9a6-4ad1-87f6-31d7a482142e.png)

> If without any **constant help**, **both sides** are **equal**, then **c1=1 and c2=1**. No need of any help. This is **mathematically equal**, so it is **asymptotically equal** also.

> If **theta** is possible which means that both **Omega and Big-O** are also possible. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/231918510-6b64bf8a-2b04-4c3b-b97d-622fe602392a.png)

>  As it is **Big-O**, the **right side**, is **bigger or equal too** left side. So, **g(n)** is **bigger** after taking **constant(c)** help.  **g(n)** is **bigger** after some **n0** point. From **n0**, after comparing **f(n) and g(n)**,  **g(n)** is **bigger** after taking **constant(c)** help.

> We have started from **1** and not from **0** because **n0 >= 1**. Some **minimum** input is required.

* The line with **Blue color** is **g(n)** function.
* The line with **Red color** is **f(n)** function.

![image](https://user-images.githubusercontent.com/54589605/231919498-07cc6598-4f19-43e2-889c-5c40e7676d4f.png)
![image](https://user-images.githubusercontent.com/54589605/231919612-e0e4dd56-2afb-4f42-9f24-3051c90ed1d3.png)

> It keeps on **changing**, we cannot tell for sure which is **greater**. Sometimes **g(n)** function is **greater**. Sometimes **f(n)** function is **greater**. We cannot tell for **sure**. We are unable to express which is **smaller** and which is **greater**. 

![image](https://user-images.githubusercontent.com/54589605/231920156-8a76f1ad-5388-45fb-8c62-d6a5b4b04aff.png)

> After a certain point, **g(n)** function is clearly **greater** after taking some **constant help(c)**.

> The **certain point**, is called as **n0** and the value of **n0=4** onwards,  **g(n)** function is **greater**.

> This is called as **Big-O** notation.

![image](https://user-images.githubusercontent.com/54589605/231920433-351fdc82-d030-4051-b069-caf5d6da8e94.png)

> Before **n0**, we cannot say for sure what is the **relation**. We have some **doubts**. From **n0** onwards, we can clearly say that **g(n)** function is **greater** after taking some **constant help(c)**.

![image](https://user-images.githubusercontent.com/54589605/231920492-cbaf0649-a19f-4381-8e4a-3412183a014f.png)
![image](https://user-images.githubusercontent.com/54589605/231920585-fc19618e-8855-41db-8e53-80f0af773261.png)

> In **diagram 2**, **f(n)** is **bigger**.

> We can directly say that after comparing **f(n) and g(n)**, we can say that **g(n)** is **smaller or equal too** after taking some **constant help(c)**. Which means **f(n)** is **bigger**. 

> Always talk about **right side**. Right side means **g(n)**. To whoem we are keeping **constant(c)**, we have to talk about them. As **c** is on the **right side** so we are taking about **g(n)**. So, **g(n)** is **smaller** after taking some **constant help(c)**.

![image](https://user-images.githubusercontent.com/54589605/231921461-28f703f3-dfe9-433b-b830-989e365f4a41.png)

> From **n0** point onwards we can say that **g(n)** is **smaller** after taking some **constant help(c)**.

> We have to keep **c** for **g(n)** only and not for **f(n)**.

![image](https://user-images.githubusercontent.com/54589605/231922367-e0941fe5-e87e-4c1a-9af0-cf193aa166d0.png)

> For some **constant(c1)**, **f(n)** is **bigger**, so it is **omega** notation.

> For some **constant(c2)**, **g(n)** is **bigger**, so it is **Big-O** notation.

![image](https://user-images.githubusercontent.com/54589605/231927546-c3b7cfee-f178-4ad2-80cb-8e2bfb69a821.png)

> For some constant, **f(n)** is **bigger** and for some constant, **g(n)** is **bigger**. Difference is **only constant**. Otherwise how is it possible. If **difference** is function, by changing **constants**, how someone becomes **smaller** and someone becomes **bigger**. 

> This means, difference is only **constant**. Bigger functions are **same**.

![image](https://user-images.githubusercontent.com/54589605/231928043-1b70ae1f-e23a-4818-9fa4-910371012065.png)

> If **g(n) = n + 5** and **f(n)= n**. Then, **theta** is possible as **difference is only constant**. One person is **n+5** and another person is **n**, **difference is only constant** and the difference will be taken care of by **c1 and c2** constants.

> By changing only constant, sometime **g(n)** is **bigger** and sometime, **g(n)** is **smaller**. This means that, **difference is only constant**. That's the **meaning of theta**.

> **Theta** is nothing but sandwitching **f(n)** between **two g(n)s**. Therefore, by **constants**. This is called as **theta**.

> These two, **f(n)** and **g(n)** are working from **n0** onwards only. Before, **n0** anything can happen. After **n0**, we got clarity what is **happening/going on**.

![image](https://user-images.githubusercontent.com/54589605/231929265-173ab310-b5f7-4b61-b949-38d8efbbee2f.png)


## Doubts

![image](https://user-images.githubusercontent.com/54589605/231929742-73ea385a-c446-4bd8-beac-ba1dd0d27ab2.png)
![image](https://user-images.githubusercontent.com/54589605/231930173-e99b2a32-c17f-4b01-a9c1-2c54443501f5.png)

* RIC -> PYQs.

> RIC then PYQs.

![image](https://user-images.githubusercontent.com/54589605/231930669-ebfac401-a2ec-408c-a4ac-17b1653a0cdb.png)
![image](https://user-images.githubusercontent.com/54589605/231930684-3d7f47b4-b26b-4667-92b0-f389b81e3b7f.png)

> Do the above ones, it is sufficient.

![image](https://user-images.githubusercontent.com/54589605/232482124-76d15d55-fe5e-4519-92fd-265cff2d30b6.png)
![image](https://user-images.githubusercontent.com/54589605/232482146-e7340cf4-6f29-4ea3-ba7f-43d3e69623ae.png)
![image](https://user-images.githubusercontent.com/54589605/232482176-db9c2d38-04ff-433c-b824-addda28a5bbf.png)
![image](https://user-images.githubusercontent.com/54589605/232482193-f85e4e01-3d95-4f22-a07a-6ecea39c9499.png)
![image](https://user-images.githubusercontent.com/54589605/232482218-2e49e577-a5c8-4e79-bc19-367bd3a90577.png)
![image](https://user-images.githubusercontent.com/54589605/232482239-9a35e270-b354-4c69-956f-7adae611b1fe.png)
![image](https://user-images.githubusercontent.com/54589605/232482263-d64cc02c-df1a-49a0-8e5f-692e44690e85.png)
![image](https://user-images.githubusercontent.com/54589605/232482281-c88c73c4-03fe-435e-9ae8-1fe83cc78065.png)





## DAC-PART-I (8) [17th April 2023]

## Big-O Notation(O, <=)

> **Big-O** means **right side**, should be **bigger or equal too**.

> Equal and greater poeple are **OK**. Smaller people are **not OK**.

![image](https://user-images.githubusercontent.com/54589605/232393589-25f43e3d-e83a-4b61-b912-08f6d02c0fb9.png)

> In **Big-O** notation, on the **right side**, how are allowed?

> **Bigger and equal** people. They are called as **Upper bounds**.

![image](https://user-images.githubusercontent.com/54589605/232394064-a5268f2f-555f-4188-b0e2-d064e4585396.png)

> Big-O means right side will be **more or equal too** left side. Big-O will give **upper bounds**.

![image](https://user-images.githubusercontent.com/54589605/232394637-d100f173-1995-4130-aa3d-1be589c18b7f.png)

* n^2 = O(n^3) -> Upper Bound
* n^2 = O(n^2) -> Tighest Upper Bound(TUB) 

> When both the sides are **equal**.

![image](https://user-images.githubusercontent.com/54589605/232395269-f917fd94-1700-4a12-9a3f-1b1db407eb36.png)

> In case of **Big-O**, we are giving **upper bound**. Upper bound means **equal or more**.

* A=O(B)

> **A** is the **actual** here. **Left side person** is always **actual**. That's why we don't talk about the **left side** as it is anyways **actual** only. We will always talk about **right side** person only. **B** is **upper bound**. The **upper bound** maybe be **tight upper bound(n^2)** or maybe not **tight upper bound(n^3,N^4,n^10)**.

![image](https://user-images.githubusercontent.com/54589605/232398069-a7549496-f3fe-4580-80fc-364c192ee0f2.png)

> All of them are **upper bounds**. **Equal(n^2= O(n^2) )** is called as the **tightest upper bound**. **Not equal** is know as **not tightest upper bound**.

![image](https://user-images.githubusercontent.com/54589605/232400104-9ccc1f6d-32bb-468f-bd3b-6e6083f90332.png)

* A=O(B)

> **B** is the **upper bound**, which may or may not be **tightest upper bound**. **Dilemma is there**.

![image](https://user-images.githubusercontent.com/54589605/232402122-75fb4aec-1e75-45e0-8f88-0da529b75a20.png)

> In **small o**, there is only **less than** and **no equal too**. That's why only the **not tightest upper bound** are there. 

> **Small o** means **strictly bigger**.

> In **small o**, the **not tightest upper bound** are there on the **right side**.

> In **Big-O**, all are there but in **small o**, the **not tightest upper bound** are there only. So, in **Big-O**, there is some **dilemma**, whether it is **equal** or **more**. But in **small o**, there is **no dilemma**, as only the **not tightest upper bound** are there only.

* If the time complexity of some algorithm is **small o of n^3 or o(n^3)**. This is the **right side**. What will be the actual **time complexity** on the **left side**?

> The **left side** should be **strictly smaller** as we are using **small o** instead of **Big-O**. The left side person should be **n^2 or n or log n etc**.

* **Small o** means **strictly bigger**.
* **Big-O** means **bigger or equal too**.

![image](https://user-images.githubusercontent.com/54589605/232404276-6095d6ac-ad89-428b-8da5-4f6241dab656.png)

* A=o(B) [Small o]

> **B** is **not tightest upper bound**. **No dilemma**.

> **Big-O** has dilemma which is maybe **tightest upper bound** or not. To remove it then we should go with **small o** as it has **no dilemma**.

> If we have **dilemmas**, then we can use **upper as well as lower bounds**.

![image](https://user-images.githubusercontent.com/54589605/232406025-b0e1feee-bfa0-466e-b63d-164f3f817f10.png)

* **Big-O** having **two** operators,**< and =**.
* **small-o** having **one** operator,**<**.

* If **small-o** is satisfied then the **Big-O** will automatically be satisfied.

* If **Big-O** is satisfied then the **small-o** may or may not be satisfied.

![image](https://user-images.githubusercontent.com/54589605/232409630-3dcc6900-e7dd-46f0-9b52-6efbe904b959.png)

## Omega Notation(>=)

* Lower Bound 

> **Omega** means **right side**, should be **smaller or equal too**.

> In **lower bound**, some are **tighest lower bound** and some are **not tighest lower bound**.

* A= Omega(B)

> It means **B** is **lower bound** but it is ambigious/in dilemma that **B** is either **tighest lower bound** or  **not tighest lower bound**.

![image](https://user-images.githubusercontent.com/54589605/232413597-a8b4edc7-bde5-4692-a0c5-3032b10ce356.png)

> **Equal** person(n^4= Omega(n^4)) is allowed because of the **Equal too**. But it brings the **ambigious/ dilemma**.

> We can remove the **dilemma** by using the **small omega(w)**.

## Small Omega(w, >)

![image](https://user-images.githubusercontent.com/54589605/232414475-741dbb99-677b-4193-b831-3c5d50cfdc84.png)

* If **small-omega(w)** is satisfied then the **Omega** will automatically be satisfied.

* If **Omega** is satisfied then the **small-omega(w)** may or may not be satisfied.

> **small-omega(w)** is the **subset** of **Omega**.

![image](https://user-images.githubusercontent.com/54589605/232414954-07e046e9-a62b-4a20-be58-85edb047e2f5.png)

> It is **minimum**, which means **lower bound**.

* n^4 = Omega(n)

> **Omega(n)** means that the **left side** is **more or equal too than n**.

![image](https://user-images.githubusercontent.com/54589605/232415508-40bf956c-5be1-4fdc-ac3b-bed7697a4330.png)
![image](https://user-images.githubusercontent.com/54589605/232415854-ef4fe1fe-ba03-47c1-a4f0-c6767403b44b.png)

* = Omega(6)

> If we say **Omega(6)**, then the **left side** should be **more or equal too 6**, which is **6,7,8....etc**.

> **Omega(6)** means that, we want to say that it is **6 or more than 6**, anytime.

* = w(6)

> If we say **small omega or w(6)**, then the **left side** should be **more than 6**, which is **7,8,9....etc**.

> **Small omega or w(6)** means that, we want to say that it is **after 6, at anytime**.

![image](https://user-images.githubusercontent.com/54589605/232416740-966bcfdb-3b77-4db3-8ebd-f8a66c4cc362.png)

* **Omega** is from **6 and onwards**.
* **Small omega or w**, **7 onwards**.

![image](https://user-images.githubusercontent.com/54589605/232418968-8a2cd0b2-de52-4f60-b904-e348d604c217.png)
![image](https://user-images.githubusercontent.com/54589605/232420262-31a3212a-dacd-4672-8dac-43dec9bb3f6b.png)

## Summary

* Strictly less than 7 or Before 7 -> **Small o**.
* 7 or less than 7 -> **Big-O**, as it is **upper bound**.
* 7 or after 7 -> **Omega**, as it is **lower bound**.
* Definitely after 7 only -> **small omega w**.
* Guranteed less than 9 -> **small o**.

![image](https://user-images.githubusercontent.com/54589605/232421937-485961a4-74b8-4824-8223-df51935959db.png)

> **Tighest upper or lower bound** are not possible in **small o or small omega**, as they don't have the **equal too** operator. 

> **Tighest upper or lower bound** are possible only in **Big O and Omega(Big Omega)**.

![image](https://user-images.githubusercontent.com/54589605/232422565-ad834736-2dc6-427a-82e8-9fe4e9dfe47d.png)

* Tightest Upper bound

## Theta Notation

> If between **two** people, **Big-O and Omega** are possible, then **theta** is also possible.

* A = Theta(B)

> **Theta(B)** means it is the **tightest upper bound** as well as the **tightest lower bound**.

> Theta possible means **Big-O and Omega** are possible.

![image](https://user-images.githubusercontent.com/54589605/232423668-0d864f95-51f0-4b4b-90f3-de2ba1f3c239.png)

> If **left and right** side are **not equal**, then **theta** is not possible.

![image](https://user-images.githubusercontent.com/54589605/232424058-689883c7-2be1-4137-93f8-0695180b2e09.png)

> It is **not possible**, if **left and right** side are **not equal**. One of the **sides** is **True** and one of the sides is **False**.

> If **both** are **equal**, then only possible.

> If between **two** people, **Big-O and Omega** are possible, then **theta** is also possible. If **theta** is possible which means that there is no doubt at all that they both are **equal**. **Equal** means **tightest upper bound** as well as the **tightest lower bound**

## Summary

* Want upper bound may or may not be tight -> Go for **Big-O**.
* Want upper bound which is not tight -> Go for **small-o**.
* Want all lower bounds -> Go for **Omega**.
* Want not tighest lower bound -> Go for **small-omega(w)**.
* Want tighest upper bound and tightest lower bound -> **Theta**.

> On all of them **left side** is the **actual** side.

![image](https://user-images.githubusercontent.com/54589605/232426300-0e8fadc8-519e-44ca-96fb-17ea02e26daa.png)

* As it doesn't go more than **n^2**

> Which means it is **upper bound**, so it is **Big-O(n^2) or O(n^2)**.

* As it doesn't go less than **n^2**

> Which means it is **upper bound**, so it is **small-o(n^2) or o(n^2)**.

![image](https://user-images.githubusercontent.com/54589605/232427466-12f5f406-4572-431b-9e04-8bb551d8bdc1.png)

## DAC-II (9) [17th April 2023]

## Complexity Classes

> **Constant** cannot change.

> When we say **Theta(1)**, it is not Theta(1), the **actual one(1)** is on the **left hand side**.

> Any constant can be written as **Theta(1)**.

![image](https://user-images.githubusercontent.com/54589605/232486492-3be678d6-dd48-417d-901d-95756899e404.png)

> Whichever takes **less time** is **better**.

* In terms of **time complexity**, **constant or Theta(1)** is better.
* In terms of **growth**, **log or logaredmic** is better.

* Bigger algorithm -> Worst algorithm
* Smaller algorithm -> Best algorithm

![image](https://user-images.githubusercontent.com/54589605/232492430-a92d37bb-6fc2-405d-a376-79693e46f195.png)

> As of now, **linear or Theta(n)**, is the **Bigger algorithm** and hence the **Worst algorithm**.

![image](https://user-images.githubusercontent.com/54589605/232492932-e2bc5ae4-dfa2-4cfb-b83f-bc53af8ce1b5.png)

> As of now, **exponential or Theta(2^n)**, is the **Bigger algorithm** and hence the **Worst algorithm**.

> As of now, **constant or Theta(1)**, is the **smaller algorithm** and hence the **best algorithm**.

* Whichever will take **less time** is **better**.
* Whichever will take **less space** is **better**.

![image](https://user-images.githubusercontent.com/54589605/232494980-be58eb49-f007-4b3f-af57-3e38f36b2a55.png)

> Definition of **polynomial** is **n^c**, where **c** is some **constant** and **c>0**, we cannot take any **negatives**. No integers, nothing, **fractions are allowed**.

* n^1 -> polynomial
* n^2, n^3 -> polynomial
* n^100 -> polynomial
* n^(1.414) -> polynomial
* n^(1.5) -> polynomial [1.5, is a constant and greater than zero(0)]
* n^0 -> Not polynomial [As, c should be greater than zero(0)]
* n^(0.5) -> polynomial

![image](https://user-images.githubusercontent.com/54589605/232496667-d829191c-e59c-4bef-9eac-568c88237155.png)

> The main ones are **constant, log, polynomial, exponential**.

> Inside **polynomial**, we have **n^1, n^2, n^3,....**, which are **linear, quadratic, cubic,....** respectively.

![image](https://user-images.githubusercontent.com/54589605/232497942-c77b56de-c50c-430e-93bf-545441d21f59.png)

> Definition of **exponential** is **c^n**, where **c** is some **constant** and **c>1**. They are **2^n, 3^n,4^n...**.

* (1.1)^n -> exponential
* 5^n -> exponential
* (51)^n -> exponential
* (1.01)^n -> exponential

![image](https://user-images.githubusercontent.com/54589605/232499031-085607f5-6d33-4afb-8014-be491e89f0f7.png)

> The **smallest function** is **constant**.

> The **smallest function** is from **constant, log, polynomial(linear, quad, cubic), exponential**. **Exponential** is the **biggest** function.

![image](https://user-images.githubusercontent.com/54589605/232499775-effeeeff-a702-4aa8-84f7-a873fb44d2e0.png)

> **linear, quad, cubic** are polynomials only but **special type** of polynomials, as they have **names** also.

![image](https://user-images.githubusercontent.com/54589605/232507821-63eb4795-15ab-4854-ad71-2dae69da038a.png)

* If asked, if less than **constant** possible?

> **YES**, possible. They are called as **decreasing functions**.

> Examples of **decreasing functions** are **1/n, 1/(2 * n)**.

> The **smallest/minimum**, time complexity of any algo is **constant or Theta(1)**. If no. of inputs increasing then the time is decreasing, how is that possible, atleast it should be **constant**, how time decreases. Less than **constant** time, how possible.

![image](https://user-images.githubusercontent.com/54589605/232527621-ff1650d7-9663-4267-a64a-c9a88c534db3.png)

> They are used for **all**.

> Time complexity or space complexity **decreasing**, possible? **NO**. **Minimum** is **constant**. No meaning of **decreasing**. Just remember it is **one of the functions**.

* Decreasing function < constant < log < (linear < quad < cubic) [Polynomial] < exponential.

![image](https://user-images.githubusercontent.com/54589605/232532909-06d35433-1c2c-430d-a495-4347810b4a79.png)

* n^n is **bigger**
* n! is **bigger**.

![image](https://user-images.githubusercontent.com/54589605/232536065-ffec6245-094b-4a91-ba53-4b0c131db639.png)

> Out of **n^n and n!**, **n^n** is **bigger**.

![image](https://user-images.githubusercontent.com/54589605/232536454-80cbe5af-77d4-43c5-a526-1c4986e576bc.png)
![image](https://user-images.githubusercontent.com/54589605/232536754-3024dca1-7aa5-4c6d-925a-c3e171950193.png)

> **2n** is **bigger** and it is **bigger** by a **constant**.

![image](https://user-images.githubusercontent.com/54589605/232536857-7cd9ff35-578f-4f75-a4c8-41e57d60890f.png)

> As **n!** is **bigger** by a **function** then **theta** not possible. So it is only **2^n= O(n!)**, Big-O. It is **bigger** by **function**. If it was **bigger** by **constant**, then **theta** possible.

![image](https://user-images.githubusercontent.com/54589605/232537758-4b7f378e-61e3-4f56-9991-a58db8f6312d.png)

> As **n^n** is **bigger** by a **function** then **theta** not possible. So it is only **n!= O(n^n)**, Big-O. It is **bigger** by **function**. If it was **bigger** by **constant**, then **theta** possible.

* n^n = Omega(n!)

> Whenever **Big-O** is there, by **reversing** the functions, we can write **omega**.

![image](https://user-images.githubusercontent.com/54589605/232539643-1d91b955-388e-4b33-8719-a6938da22bc5.png)

> We can **reverse** them and then we can use **omega** notation. If we reverse the **function**, then we can **reverse** the symbols also.

![image](https://user-images.githubusercontent.com/54589605/232540967-baf3b309-5b23-4b0d-8e4a-784df029fb88.png)
![image](https://user-images.githubusercontent.com/54589605/232541014-0118ebf6-00a2-476e-a15e-8a0fd741ad81.png)
![image](https://user-images.githubusercontent.com/54589605/232542330-12c33d89-dfd9-4d6e-82b3-8aa7d6422f62.png)

> As **omega** is not possible, that's why **theta** is also not possible. **Big-O** is only possible. 

> **Big-O and omega** possible means, **difference** is **constant**, then **theta** possible.

> In the **above** ones, difference is **not constant**, it is **function** that's why **theta** not possible.

![image](https://user-images.githubusercontent.com/54589605/232541701-2b434c9b-a1bb-4d53-ac5d-5b7e350f85f5.png)
![image](https://user-images.githubusercontent.com/54589605/232541786-0b3db813-e4b5-491d-a6f0-39c8b306ab1b.png)

* constant difference.

![image](https://user-images.githubusercontent.com/54589605/232541986-0a1dd5ca-9756-447f-986c-6d34aed4d66d.png)

![image](https://user-images.githubusercontent.com/54589605/232542423-4056974b-b8ab-4ef1-8c49-1592774948fc.png)

> **n^n** is **bigger** than **2^n**.

> Both **n^n and 2^n** have **powers** and they look **complex**. So, whenever complex functions are given and  we have to find which is **bigger** and which is **smaller**. Apply **log** on both the sides.

![image](https://user-images.githubusercontent.com/54589605/232543082-d02af8c6-9ae0-480a-bc21-5c95eb9c6d81.png)

> After taking **log** on both sides, we got **log n : 1** and **log n** is **bigger** so, **n^n** is **bigger**.

![image](https://user-images.githubusercontent.com/54589605/232543527-e18162b7-f1ec-4fc2-92aa-7a6087cb344d.png)

> **n^3** is **bigger**. Don't apply **log** there **easy questions**. 

> If we apply **log**, then we get **1 : 1**, which is **wrong**.

* Do not apply **log bliendly**. **YES**.

> Apply **log** to complex problems only.

![image](https://user-images.githubusercontent.com/54589605/232548364-7d83dd0d-55c4-49e5-be2f-733441a2dffa.png)

## Doubt_Clearning_Session (10) [18th April 2023]

> Base is **bigger**, **small** value.

> Base is **smaller**, **bigger** value.

> So **log n base 2** is **bigger** compared to **log n base 3**.

[**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/232773731-2236ee93-110f-43bb-800d-1fc09b043167.png)
![image](https://user-images.githubusercontent.com/54589605/232773796-ea3633bb-31ce-464f-b369-399dd2feaa90.png)

> **c** is **some common** base.

* log a base b -> log a base c/ log b base c

![image](https://user-images.githubusercontent.com/54589605/232774203-10d95547-ddd4-418a-9aa3-ff1fb22f8efa.png)

* log 64 base 4 -> log 4^3 base 4 -> 3
* log 64 base 2/ log 4 base 2 -> log 2^6 base 2/ log 2^2 base 2 -> 6/2 -> 3

> Between **two** people, if the difference is only **constant**, then we can write **theta**.

> If two people differ by only **base** which is nothing but **constant** only and not functions.

> Bases are only **constants** means, the **difference** is also **constant** only. Rest is **same** only. Only **base** differ and they are **constants** only, so **difference** is **constant** only. So, we can write, **theta**.

![image](https://user-images.githubusercontent.com/54589605/232777461-6bcb896a-4e99-4f75-b62c-8d0c6f00fdc9.png)

* If in a loop, **i** is incremented by ** i * 2**. How many **times**, the loop is repeating?

> **log n base 2**.

* If in a loop, **i** is incremented by ** i / 3**. How many **times**, the loop is repeating?

> **log n base 3**.

> One program's time complexity is **log n base 2** and another's is **log n base 3**. Asymptotically those **two** algorithms are **same**. They **differ** by **constants** but logic-wise they both are **same**.

> In a question, they asked for **time complexity** and the answer is **log n base 2**. In the options there was **log n base 2** and we **selected** that.

> If **log n base 2**, not there in the **options**, but **O(log n base 3)** is there in the **options**. Then we have to select **O(log n base 3)** as the **correct option** as **log n base 2** not there. Because the **difference**, is only **constant**.

> If **theta** is there, then **Big-O and omega** possible.

> Whatever is there in terms of **log** in the options just select that, because **base** are **constants** and don't worry much about them.

> If the answer was **log n base 2** and the options only had **log n**, then we should select that as the **correct option**, as **bases** are **constants** only.

> **log n base 20** and **log n base 30** are **asymptotically same** but **mathematically not same**.

![image](https://user-images.githubusercontent.com/54589605/232781758-6b94e57c-04a2-4233-8d5c-38f33ab8c84e.png)
![image](https://user-images.githubusercontent.com/54589605/232782175-fdccfd30-4383-49d9-bea7-9e4fea63e054.png)

> If two people are **log n**, therefore, **Big-O, omega and theta** are possible.

![image](https://user-images.githubusercontent.com/54589605/232783559-12834096-3f7f-4d11-8467-dbfe183ebc4a.png)
![image](https://user-images.githubusercontent.com/54589605/232784111-e4a13e1a-4943-4908-a6b0-3b54a069df45.png)

> **3^n** is **bigger**. But it is not bigger by **constants** but is is bigger by **exponential function** which is **(1.5)^n**.

* 2^n = O(3^n) [YES]
* 2^n = Omega(3^n) [NO]
* 2^n = Theta(3^n) [NO]

> **Omega** is not possible because **right side** is **bigger** by **fuction** and not **constant**.

> Remember, **3^n** is **bigger** by some **function** and not **constant**.

![image](https://user-images.githubusercontent.com/54589605/232787036-262db8ba-4fc1-4c49-aeb5-1c7d0dc0c616.png)

> Don't apply **log** in GATE exam. It is a **trap**. [**IMPORTANT**]

> **Worst case**, If applying **log** anyways, then remove/cancel the **common things**.

> **Common** means **writing one interms of another**.

### strling of n!

![image](https://user-images.githubusercontent.com/54589605/232790512-583716f1-59fc-4933-aa5c-43a06e12a930.png)
![image](https://user-images.githubusercontent.com/54589605/232790534-b81fd7c7-6055-47d6-b9f6-452bc7f5e41f.png)
![image](https://user-images.githubusercontent.com/54589605/232790722-1643ba7a-0556-4166-b2d7-4d1e124add8a.png)

> **n^n** is **bigger** but with **function** difference and not with **constant** difference. So, **Big-O** is only possible. **Omega and theta** are not possible.

![image](https://user-images.githubusercontent.com/54589605/232791210-747e7ea4-aa23-4ccb-94b1-1f9a56c44cb0.png)
![image](https://user-images.githubusercontent.com/54589605/232791552-ef4c476e-bad1-4ba6-8890-991b29f26acf.png)

> **n^n** is **bigger** but with **function** difference and not with **constant** difference. So, **Big-O** is only possible. **Omega and theta** are not possible.

![image](https://user-images.githubusercontent.com/54589605/232792535-a101ed9e-39c2-45de-98c6-00a2e167d8fc.png)

> **Before** applying **log**, **theta** is not possible.

![image](https://user-images.githubusercontent.com/54589605/232792592-8d90a77b-7e65-4328-8dea-48cbd79773f7.png)
![image](https://user-images.githubusercontent.com/54589605/232793182-51774b85-846e-41cf-a64a-7514357be8df.png)

> **After**, applying **log**, on both sides, which are **n! and n^n**. We got **n log n** on both the sides. As they are **same**, hence **theta** is possible.

> **Before** applying **log**, **theta** is not possible, but **After**, applying **log** **theta** is possible. This is because of **strling's approximation**.

> This is only for **n!**. Not applicable for others.

> On **6th point's**, part **1**, there is no **n!** there. So, **strling** will not **come**.

> On **6th point's**, part **2**, there is **n!** there. But **before** applying **log**, they both are **not equal**. Only **Big-O** possible. **Theta** is not possible.

> On **6th point's**, part **3**, there is **n!** there. But **before** applying **log**, they both are not **equal**. But **after** applying **log**, they both are **equal**. **Theta** is possible.

![image](https://user-images.githubusercontent.com/54589605/232795488-e7597a42-2149-4c48-b917-adee7365aa09.png)

> There are **two** people, **before** applying **log**, **theta** is not possible. **After** applying **log**, **theta** is possible, because of **strling approximation**. 

> **Strling** keyword will come whenever **factorial or n!** is given. [**IMPORTANT**]

> According to **Strling**, **n!** is not equal to **n^n**. **n^n** is **bigger**, **theta** not possible. But **after** applying **log**, they(n! and n^n) both are **equal**. **After** applying **log**, **left side**, became **n log n** and **right side** also became **n log n**. They both are **equal**, because of **strling**.

![image](https://user-images.githubusercontent.com/54589605/232801649-63a50cc0-5c4b-474f-b2d3-e609743528ec.png)

> On the **3rd last step**, from **1/2 log(2 * pie * n)**, we took **log n** and from **n logn - nloge**, we took, **n logn**, because **n logn** is **bigger**.

> In the **2nd last step**, **log n + nlog n**, we took, **nlog n** because it is **bigger** than **log n**.

![image](https://user-images.githubusercontent.com/54589605/232803378-7b13c256-d55e-41b9-99ec-d115ade9870d.png)

> **Before** applying **log**, left side which is **n!** is **n^n/e^n** and the right side is **n^n**. **Right side** is **bigger**, it is **bigger** by **e^n or exponential** times.

> **After** applying **log**, both are asymptotically **equal**, because of **strling**.

![image](https://user-images.githubusercontent.com/54589605/232804248-9e06855b-75dd-4027-9d3e-1f568501cf79.png)
![image](https://user-images.githubusercontent.com/54589605/232804880-d0878aad-e6f3-4f8c-8ba9-3a54d910f5fc.png)

> **Before** applying **log**, **theta** is not possible. Only **Big-O** is possible.

> **After** applying **log**, **theta** is possible. They both became **equal**.

![image](https://user-images.githubusercontent.com/54589605/232805131-a9a252a3-f037-42b2-b509-4321ef7d1498.png)
![image](https://user-images.githubusercontent.com/54589605/232805274-5ea618be-179f-42a2-89ce-fdc882863121.png)

* If asked to see if **theta** is possible or not? What is the relationship between these two people?

> **We will not apply log** and give answer.

> Before log, theta is not possible.

> After log, theta is possible.

> They are asking without applying log, if both are **equal** or not. **SAY NOT**. They are **not equal**.

> After applying log they are equal.

> After applying log, sometimes they are **equal**. Please avoid applying **log**. Until and unless they are **complex** people/questions, don't apply **log**.

> Before and after applying log sometimes behaviour changing or not. Because of behaviour changing, don't apply log.

![image](https://user-images.githubusercontent.com/54589605/232809398-3f78a340-0850-4e51-a9e8-35ca8b6e17b2.png)

> Before log, theta not possible. But after log, **maybe sometimes**, theta is possible.

* A= Theata(B)

> Don't blindly apply log.

![image](https://user-images.githubusercontent.com/54589605/232810217-5dbbf0ec-e328-4a3a-8cc2-d4c2b237a557.png)

* n^2 = n^3
* n^2 = (n^2 * n) [Cancelling/removing the common things/terms]
* 1= n [Now, applying log]
* log 1 = log n
* 0 = log n 

> We can see that after **careful** application of **log**, **theta** is not possible.

![image](https://user-images.githubusercontent.com/54589605/232812614-7e05900b-e39b-4de8-b6c2-3249b57b0c7b.png)

> Behaviour changing asymptotically. Mathematically nothing changes.

> If A < B. After applying **log** also, it is **A < B** only.

* A < B -> Mathematics. No constant, c.

> If we take some constant help, c, then it is asymptotic.

![image](https://user-images.githubusercontent.com/54589605/232814205-15c25737-3f53-4411-8c36-27e1393ece04.png)
![image](https://user-images.githubusercontent.com/54589605/232814483-e837b271-c61c-4e5d-bd25-fd302e02ac8b.png)
![image](https://user-images.githubusercontent.com/54589605/232815080-639cbbcf-aa18-44a8-a700-e3dd9ead3117.png)
![image](https://user-images.githubusercontent.com/54589605/232817842-c85b3d3d-867c-4c62-a0cb-1405c9cd27ea.png)

> After applying **log** carefully, **theta** is not possible.

![image](https://user-images.githubusercontent.com/54589605/232824974-4ac668f7-9b96-448a-a4a7-bd3028f000e3.png)
![image](https://user-images.githubusercontent.com/54589605/232826389-34bc2c4c-4b52-4408-93a3-5586088012e6.png)
![image](https://user-images.githubusercontent.com/54589605/232826558-0a8872cf-9bd6-4ff3-b484-bef36f9b3a34.png)
![image](https://user-images.githubusercontent.com/54589605/232841118-b628ea74-68a1-4fe1-a80f-b777158f56b0.png)
 
> **n * root(n)** means **n * n^(1/2)**.
 
![image](https://user-images.githubusercontent.com/54589605/232840835-5be58d22-2233-410d-8d20-e19e6669471a.png)

* n * sqrt(n) -> n * n^(1/2) -> n^1 * n^(1/2) -> n^(3/2) -> n^(1.5)

![image](https://user-images.githubusercontent.com/54589605/232842426-1912d987-f21b-49d9-be4b-759637b8b2a6.png)

> In **powers**, **constants** matters. We cannot ignore them. In the **power**, everything matters, we cannot ignore everything.

![image](https://user-images.githubusercontent.com/54589605/232843484-156580f5-4904-4210-b568-f06568241362.png)
![image](https://user-images.githubusercontent.com/54589605/232844455-2049318d-3c8c-418d-81ef-8cc0a21bda71.png)
![image](https://user-images.githubusercontent.com/54589605/232844489-3f1a77ca-4c1d-4c91-a02e-57b37f3b3609.png)

> In the **power**, anything is fine, cannot be ignored.

![image](https://user-images.githubusercontent.com/54589605/232844911-84b7a7f8-acbc-4ea8-bfee-043555e4e1e0.png)

> **Exponential** is **bigger** than **polynomial**.

![image](https://user-images.githubusercontent.com/54589605/232845199-b1d37e82-c2fb-43b1-9717-ca9ac97ac774.png)

> **D** is saying that **2^n** is not equal to **n^x**, which is **correct**.

![image](https://user-images.githubusercontent.com/54589605/232845526-2371c2b5-5be3-437d-842e-fac2de384dae.png)
![image](https://user-images.githubusercontent.com/54589605/232846052-6158ea33-a2f8-4d2c-9701-9636b52c0107.png)

[**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/232846175-aef3acaf-e801-4646-8807-a116cba393e7.png)

* a^(log b base c) = b^(log a base c)  [**IMPORTANT FORMULAE**]

> In the **power**, **log** is there, apply the above formulae.

* 64^(log n base 2) -> n^(log 64 base 2) -> n^(log 2^6 base 2) -> n^(6 * 1) ->n^6

![image](https://user-images.githubusercontent.com/54589605/232846940-5934a42f-4de3-48ef-8d61-903fc76a3600.png)
![image](https://user-images.githubusercontent.com/54589605/232847268-d1a708ce-d662-4a48-a892-8d86e00c1ec6.png)
![image](https://user-images.githubusercontent.com/54589605/232847441-698621c5-bbfd-4a9a-bb6f-1367fbc5417a.png)

> If **theta** is possible, then **small-o and small-omega(w)** has no meaning or are not possible.

## Doubt Clearing Session (11) [19th April 2023]

![image](https://user-images.githubusercontent.com/54589605/233063312-ac1be5ca-6418-48cf-af29-d7f4e387617e.png)

> In **option (a)**, both the sides the bigger value is **2^n** and the difference is constant only. So **Big-O**, possible.

![image](https://user-images.githubusercontent.com/54589605/233065160-e7f7ef53-a21e-489e-b2f7-70ac3a39ad13.png)

> In **option (d)**, both the sides the bigger value is **2^n** and the difference is constant only. So **Theta**, possible.

![image](https://user-images.githubusercontent.com/54589605/233067056-0328a61f-cca4-4020-81fd-d0e275a38d86.png)

![image](https://user-images.githubusercontent.com/54589605/233065327-61c6387d-2660-4ac2-b5fe-eac50c59017c.png)
![image](https://user-images.githubusercontent.com/54589605/233065016-d794f2f1-e454-44f0-9bb8-359c3290188d.png)

> **Gave it by mistake**. It is **false** as the **bigger values** are not the **same**, on both the sides. Left side is **2*(2n)** and on the **right side**, it is **2^n**. The differenece is **function** and not constant. So, **theta** not possible.

![image](https://user-images.githubusercontent.com/54589605/233067334-4e2f781d-03c6-4dcf-a21d-ed90789f58fd.png)
![image](https://user-images.githubusercontent.com/54589605/233067544-45a97f99-58ad-4fd7-8a2b-938cff1c9915.png)

* True

![image](https://user-images.githubusercontent.com/54589605/233067784-d5f00133-4b2e-4e2b-b6e3-0b3e64a0ee25.png)

> In **option (a)**, **omega** is also possible along with **Big-O**. As both, **Big-O and omega** are possible, then **theta** is also possible. As **theta** is possible and it means **equal**, that's why **smal-o and small-omega(w)** are not possible.

![image](https://user-images.githubusercontent.com/54589605/233069108-beae3a80-34eb-48ea-951e-9dcfaf74d556.png)

> In **option (b)**, both the sides have the **same bigger** values but they differ by **functional** difference and not by **constants**. That's why **Big-O** not possible. Hence **option (b)**, is **False**.

![image](https://user-images.githubusercontent.com/54589605/233069264-ba6f568c-23c9-4ccc-b39b-b63cb7f8bb2a.png)

> **Omega** is possible as omega is **>=**. As **Big-O** is not possible, so **theta** is also not possible. As **theta** represents **equal**, so **equal** is not there. Hence, the **small-omega(w)** is also possible. 

> **Omega and small-omega(w)** are possible for **option (b)**.

![image](https://user-images.githubusercontent.com/54589605/233070338-657610e0-7c5b-48cd-94e2-4455fc66760c.png)

> In **option (c)**, both the sides have the **same bigger(2^n)** values but they differ by **functional** difference and not by **constants**. **Omega** is possible as omega is **>=** but **Big-O** is not possible as big-O is **<=**. As, **big-O** is not possible, hence **theta** is also not possible. Hence **option (c)**, is **False**.

![image](https://user-images.githubusercontent.com/54589605/233071312-09875bc6-b15a-43b7-aeab-98ca55e9cc5f.png)

* T
* T
* T
* F

![image](https://user-images.githubusercontent.com/54589605/233071521-26fbd00e-1829-43f7-baa6-27d566814732.png)

> In **option(a)**, it is **True**. When **theta** is possible, **small-o and small-omega(w)** are not possible.

![image](https://user-images.githubusercontent.com/54589605/233073955-f49a076e-0e68-4c78-b694-bb0a08bc6954.png)
![image](https://user-images.githubusercontent.com/54589605/233074104-1e65ec5f-7e8b-4afc-9728-561bbe3002b4.png)

> **1/n** is **less than 1**, when **n > 1**. These are **decreasing functions**.

> In **option(b)**, it is **True** for **normal or increasing** functions but it is **false** for **decreasing functions**.
 
![image](https://user-images.githubusercontent.com/54589605/233075077-3bc56940-d221-4ed7-b464-9cea91713dcd.png)
![image](https://user-images.githubusercontent.com/54589605/233075521-a6928dc3-8462-46e4-981a-93061469c027.png)

> As nothing is mentioned in the question, we have to consider **both or all**, **increasing as well as decreasing**, functions.

> In **option(b)**, **big-O**, failed for **decreasing functions**. **Omega** failed for **increasing functions**.

> **One**, fail is **enough** to say that **option (b)** is **False**.

> In **option(b)**, everything **failed**. So, sometimes, **two** are **not comparable**.

![image](https://user-images.githubusercontent.com/54589605/233076770-2da29b5b-dde5-4856-86b7-66c91f530f78.png)
![image](https://user-images.githubusercontent.com/54589605/233077592-7abd475a-6fb4-4e13-a370-dd596eda1059.png)

> When nothing is mentioned in the question, we have to consider/take **both or all**, **increasing as well as decreasing**, functions.

> If **mentioned** then take accordingly.

![image](https://user-images.githubusercontent.com/54589605/233079838-4e1dd86b-a25e-44b6-b23e-b19a7524eab4.png)

> In **option(b)**, it is only mentioned **increasing functions** and **f(n) >= 1 and n>=1**, then **option(b)** will be **True** as **Big-O** will be possible.

![image](https://user-images.githubusercontent.com/54589605/233080003-1e0e8d8c-6d4a-48d8-afd3-cd65d4ac0f5a.png)

> In **option(b)**, it is only mentioned **decreasing functions** and **f(n) <= 1 and n>=1**, then **option(b)** will be **False** as **Big-O** will not be possible.

![image](https://user-images.githubusercontent.com/54589605/233081061-6fd564b5-1ddd-4014-ae9c-b3ed8e05fbb9.png)

> In **option(c)**, whatever is on the **left side**, that thing's **half** is on the **right side**. If **n** is on the left side, then **n/2** is on the right side.

> The difference is by **constants** only, so **Big-O and omega** are possible and hence, **theta** is also possible.

![image](https://user-images.githubusercontent.com/54589605/233081272-d119322b-e7e2-4fd8-a897-598b05189646.png)
![image](https://user-images.githubusercontent.com/54589605/233081519-8445736c-49c2-4acc-8cf2-42e91e000fc3.png)

> In **option(c)**, it is **True**.

![image](https://user-images.githubusercontent.com/54589605/233082023-197f57a8-fc69-402b-81e5-4de687c6e975.png)
![image](https://user-images.githubusercontent.com/54589605/233081923-9b6dd6ab-2a99-4957-898d-931ae4c5e984.png)

> In one case, **Big-O** is possible and in one case, **Big-O** is not possible. As it has failed in **one** case, it is **fail** only. So, **Big-O** is not possible.

> In **option(c)**, it is **False**. **Big-O** is not possible. The difference is by **function** and not by **constant**.

![image](https://user-images.githubusercontent.com/54589605/233082827-8a5a10f8-2dda-490e-a79b-ec9e384b6169.png)

* 2^n <= c * 2^(n/2) [<=, means **less than equal too** sinn]
* 2^(n/2) * 2^(n/2) <= c * 2^(n/2)
* 2^(n/2) <= c

> So, the **left side** is **bigger**. This also shows that **Big-O** is not possible. With **c** we cannot manage, **2^(n/2)**, the difference is by **function** and not by **constant**.

> One case **fail** also, **fail** only.

> **Option (c) and (d)**, **are different** in the sense that in **Option (c)**, whatever in **left**, keep it in **right** also but **divide it by 2**. In **Option (c)**, the **difference**, is not related with **n**, it is **constant** difference.

![image](https://user-images.githubusercontent.com/54589605/233084565-d9ecfbf6-797d-4b35-9334-114063a9bdda.png)

* For **Option (c)**

> In **Option (d)**, whatever in **left**, keep it in **right** but where ever, **n** is there, replace it with **n/2**. It(n) is creating problem, if it is in the **power**. If it is normally there, then **no problem. If **n** is there in the **power**, then we are **decreasing**.

> If **n** is there on the **left** side then it is **n/2** on the right side. **No problem** as the **difference** is **constant** only. **Big-O** is possible.

> If **2^(2n)** is there on the **left** side then it is **2^(2 * (n/2)) -> 2^n** on the right side. **Problem** is there as the **difference** is **functional** and not **constant**. So, **Big-O** is not possible.

> **Option (D)** is creating trouble, if **n** is there in the **power**. If **n** not there in the **power**, then there is **no problem**.

![image](https://user-images.githubusercontent.com/54589605/233085119-28ef90cc-9418-46c7-b959-b3725a420b96.png)
![image](https://user-images.githubusercontent.com/54589605/233085174-c37afb22-c44f-4dd6-b3b7-8b9f9958e297.png)
![image](https://user-images.githubusercontent.com/54589605/233086873-0e4db431-da39-4f84-968f-02bec92c9a04.png)

* For **Option (D)**

* What about **omega** in **Option (D)**?

> If **n** is there on the **left** side then it is **n/2** on the right side. **No problem** as the **difference** is **constant** only. **Omega* is possible.

> If **2^(2n)** is there on the **left** side then it is **2^(2 * (n/2)) -> 2^n** on the right side. **Problem** is there as the **difference** is **functional** and not **constant**. So, **Big-O** is not possible, but the **left** side is already **bigger**, so **omega** is possible.

> Hence **omega** is possible in **Option (D)**. 

> In **Option (D)**, **omega** is **True**. **Theta** is not possible because **Big-O** is not possible. So, **small-omega(w)** is also possible.

![image](https://user-images.githubusercontent.com/54589605/233088426-022e914c-f57c-4503-a1b8-65d8ee707cd5.png)
![image](https://user-images.githubusercontent.com/54589605/233088565-90183611-98e8-4612-b8e2-e02d20e1cbe1.png)

> Answer is **small-omega(w)**, as **small-omega(w)** means **omega** also.

* **Red line** is **sin** wave
* **Blue line** is **cos** wave

![image](https://user-images.githubusercontent.com/54589605/233126999-4733431e-f6db-4c83-b834-60538e7363cc.png)
![image](https://user-images.githubusercontent.com/54589605/233127287-9730a2d6-1d28-46b3-8960-81492029bcbb.png)

* **f(n)** is with **green color**.
* **g(n)** is with **pink color**.

> We neglected the bases because they are the **same** which is **n** for **f(n) and g(n)**.

> If **bases** are **same**, then only look at the **powers**.

![image](https://user-images.githubusercontent.com/54589605/233128903-d3b423c4-a49d-4b81-98d5-72ca1fb19149.png)

> Base is **same**, see the **power**.

![image](https://user-images.githubusercontent.com/54589605/233129170-89ea266b-ddec-4195-999e-68560107eb8b.png)

> At **0**, **f(n) and g(n)** are at **1** only. They both are **same**.

> At **270 and 360**, **cos and sin** values are the **same**. From **270 to 360**, in between them, **cos** value is **bigger** as **cos 300 = 0.5 and sin 300 = - 0.8 + 1 = 0.2**. **Cos 300** value is **bigger**. 

![image](https://user-images.githubusercontent.com/54589605/233130653-e5c78f37-e8c5-45a0-b104-d6cb6f52a113.png)

* At **0**, both **same**.
* At **90**, **f(n)** is **bigger**.
* At **180**, **f(n)** is **bigger**.
* At **270**, both **same**.
* At **360**, both **same**.

> Sometimes **f(n)** is **bigger**, sometimes, **g(n)** is **bigger**, sometimes, both are **same or equal**.

> So **both** are **not comparable**.

![image](https://user-images.githubusercontent.com/54589605/233131504-58a7cbf8-6905-4328-a513-309d839c292e.png)
![image](https://user-images.githubusercontent.com/54589605/233131656-e72cb0f9-810d-490a-96f8-d4b4159212c1.png)
![image](https://user-images.githubusercontent.com/54589605/233131894-1a152b30-cd7d-4899-bf39-e42b988b3347.png)

* **Green** is **f(n)**
* **Red** is **g(n)**.

![image](https://user-images.githubusercontent.com/54589605/233134699-3c2b375f-de14-49d6-bb5a-afdbab3697ec.png)
![image](https://user-images.githubusercontent.com/54589605/233134778-aad6b835-07dd-4109-92ab-dc1aec941ed7.png)

> They are **not comparable**.

![image](https://user-images.githubusercontent.com/54589605/233137344-31fff011-8243-463f-9c3c-9a90f0c85376.png)
![image](https://user-images.githubusercontent.com/54589605/233139208-1891c78c-82a4-4416-b4d6-2c19fc756f04.png)

> There is **no dilemma**. **g(n)** is **bigger**.

> This will happen for every **360**.

* **Red** is **g(n)**
* **Green** is **f(n)**

> They are **not equal** at any point in time. 

* f(n) = O(g(n)) [True, possible and comparable]
* f(n) = o(g(n)) [Not equal]

![image](https://user-images.githubusercontent.com/54589605/233141522-52584a29-55df-4dbd-b566-626900d81782.png)
![image](https://user-images.githubusercontent.com/54589605/233141583-f2317fcc-cece-4aa4-bf05-f40c4e782afc.png)
![image](https://user-images.githubusercontent.com/54589605/233141820-42d2e35e-7b2f-42c8-8382-3a21d2448e24.png)

> We will not see **small-o or small-omega(w)**, in **GATE** exam. It is for **understanding**.

> Given functions are **trignometric** functions.

![image](https://user-images.githubusercontent.com/54589605/233142562-984771ff-bca0-441e-98ba-1c0c375d3629.png)
![image](https://user-images.githubusercontent.com/54589605/233142600-a975c394-a3d7-4be0-91a1-06a65e4d37ca.png)
![image](https://user-images.githubusercontent.com/54589605/233142984-a09a46d6-a69d-4c88-9703-52c3ca172883.png)


![image](https://user-images.githubusercontent.com/54589605/233142303-f34c1241-216a-4092-baf2-7ffe54830680.png)
![image](https://user-images.githubusercontent.com/54589605/233142335-61a2dab2-ad59-4a96-a1fa-0487edfb8e98.png)

* Next part of **algo**.

## DAC-III (12) [20th April 2023]

> Every **function** has **two** behaviour.

![image](https://user-images.githubusercontent.com/54589605/233239420-df29c4bc-ae12-4c14-9123-b4b4e7e82360.png)
![image](https://user-images.githubusercontent.com/54589605/233239435-daf074e4-d7ea-4f4d-9bd2-012d7a97118e.png)
![image](https://user-images.githubusercontent.com/54589605/233239392-ce4bee75-a90f-44df-95c2-ab9cefa72e6a.png)

> Asymptotic notation means we will bother about **ending**. Just see **ending** part, ignore **starting** part.

> From **100** onwards, **g(n)** is **bigger**.

![image](https://user-images.githubusercontent.com/54589605/233240664-f7cbf929-7f3b-417e-948a-7691d341b12c.png)

* f(n) = O(g(n)) , where **n0=100**.

### Doubt [**IMPORTANT**]

* Link -> https://t.me/c/1432493727/104087

![image](https://user-images.githubusercontent.com/54589605/233244609-53cd922a-ad8d-44de-81d0-a4261aba58b1.png)
![image](https://user-images.githubusercontent.com/54589605/233244636-61e810c1-b330-482b-b5ad-848fa22e82bd.png)
![image](https://user-images.githubusercontent.com/54589605/233244672-a5a5f633-b6e6-47bc-ad7e-b67e69d72718.png)

In the first image it is not comparable but in the 2nd image it is comparable? Why? In the first image the ambiguity was from 270 360 which is at the end. In the 2nd image the ambiguity is from 0 to 99 and it is at the start. That's why? or I am missing something?

![image](https://user-images.githubusercontent.com/54589605/233244702-f4579fb4-a6e4-418f-a1da-7d08aab41d1b.png)
![image](https://user-images.githubusercontent.com/54589605/233244834-864607bf-9e2a-474b-9b07-231d63d601e7.png)
![image](https://user-images.githubusercontent.com/54589605/233244964-ecc08f61-3739-41d1-8687-0d1e147ddbd8.png)

> As in the **first** image, the values where sometimes **bigger** and sometimes **smaller**. It was not certain for sure. That's why it was **not in relation**.

> In the **second** image, from **0 to 99**, **f(n)** is **bigger** but from **100 to 700**, **g(n)** is clearly **bigger** than **f(n)**. That's why we have mentioned that **n0 =100**.

* f(n) = O(g(n), when **n0 =100**.

![image](https://user-images.githubusercontent.com/54589605/233249392-1324c509-49ea-4ff6-aed0-7dc663837259.png)
![image](https://user-images.githubusercontent.com/54589605/233249777-00a0b522-92be-424f-a75e-e8ddba6f0e29.png)
![image](https://user-images.githubusercontent.com/54589605/233249876-89dfb9e3-570f-44ce-8c73-77c65cb6f0b0.png)
![image](https://user-images.githubusercontent.com/54589605/233245619-ef1dca71-9d66-4906-87f7-7e97bcf6b3ee.png)

> Before **100**, it is **ambigious or do not have clarity**, but after **100**, we have **clarity** that **g(n)** is clearly **bigger**.

![image](https://user-images.githubusercontent.com/54589605/233246450-e0980c41-f326-426b-a856-d2fdb887ca2e.png)

> From **0 to 99**, **f(n)** is **bigger** than **g(n)**. So, **n0=1**.

* f(n) = Omega(g(n)), where **n0=1**.

> From **700 onwards**, we are getting clarity that **f(n) and g(n)** are **greater than equal too**.

* f(n) = O(g(n)), where **n0=700**.

> As **both**, **Big-O and omega** possible, then we can say that **theta** is also possible.

* f(n) =Theta(g(n)), where **n0=700**. 

> **n0=700**, since one point is from **n0=1** and another is from **n0=700**. So the **common point** is from **n0=700**.

![image](https://user-images.githubusercontent.com/54589605/233247514-cea7e86a-7637-4305-8391-e6e42af7576f.png)
![image](https://user-images.githubusercontent.com/54589605/233248309-2d74b081-0803-4753-86cb-41fd800fadfc.png)

> All of them **Big-O, omega and theta**, all are **correct**, if given in the **options**.

> As **theta** is possible, we cannot say **small-o and small-omega(w)** are possible.

> Every function having **two** behaviour.

![image](https://user-images.githubusercontent.com/54589605/233248582-2ab7a944-9060-495e-9f43-ae49c3af3df0.png)

1) Reflexive property -> Mirror Image. Both the **sides**, it is the **same person**.

  * f(n) = O(f(n)) -> True
  * f(n) = Omega(f(n)) -> True
  * f(n) = Theta(f(n)) -> True
  * f(n) = small-o(f(n)) -> False [Since, Theta is **True**]
  * f(n) = small-omega(w)(f(n)) -> False [Since, Theta is **True**]

![image](https://user-images.githubusercontent.com/54589605/233250068-436d04fb-2136-4df4-8d6d-da6e69857a6f.png)

2) Symmetric property -> If f(n) = O(g(n)), then, g(n) = O(f(n)). If, A = O(B), then, B = O(A).

![image](https://user-images.githubusercontent.com/54589605/233250303-43a8f200-9a6e-4270-8d0a-59b21cc80071.png)
![image](https://user-images.githubusercontent.com/54589605/233250589-5f537aee-4ec7-4685-9071-85a27ebd8bd5.png)

* n^2 = O(n^5)
* n^5 = O(n^2)

> Symmetric property means that if **first two conditions** are **True**, then the **next two conditions** are **True** or not.

> Not possible.

  * If f(n) = O(g(n)), then, g(n) = O(f(n)) -> False
  * If f(n) = Omega(g(n)), then, g(n) = Omega(f(n)) -> False
  * If f(n) = Theta(g(n)), then, g(n) = Theta(f(n)) -> True
  * f(n) = small-o(f(n)) -> False [Since, Theta is **True**]
  * f(n) = small-omega(w)(f(n)) -> False [Since, Theta is **True**]

> Remember, **theta** possible between **two** people, means that the **two** people are **equal**. We can **reverse** also.

* If, A = B
* Then, B = A [Theta case]

* **Big-O and omega** are not possible, then how is **theta** possible. It is **normal theta** or **conditional theta**?

> It is **conditional theta**, it has nothing to do with **Big-O and omega**. If **first two conditions** are **True**, then the **next two conditions** are **True** or not. It has nothing to do with **Big-O and omega**.

> In **normal theta**, if **Big-O or omega**, either **one of them** is not possible, then **theta** is also not possible.

![image](https://user-images.githubusercontent.com/54589605/233251857-517ae7e2-2802-4c4d-89b2-741dc3def743.png)
![image](https://user-images.githubusercontent.com/54589605/233251940-a0e0dae7-f4c0-4f6a-95aa-d890454ffcce.png)

* Only, **theta** is possible. As it is **conditional theta** and not **normal theta**. **Conditional theta** has nothing to do with **Big-O and omega**. 

![image](https://user-images.githubusercontent.com/54589605/233252171-ef0a267d-f07d-42a9-814f-9fc41089f4b6.png)


3) Transitive property -> If **first two** conditions are satisfied, then the **third** condition should be satisfied as well. If **first two** conditions are satisfied, then only we will go to **third** condition.

> If **first two** conditions are **not satisfied**, then we will not go to **third** condition.

![image](https://user-images.githubusercontent.com/54589605/233252702-200c3bd7-a0ca-4bc6-8677-c56c20e75d25.png)
![image](https://user-images.githubusercontent.com/54589605/233253589-e183d937-5145-4a55-bf2e-dad6a4b28e87.png)
![image](https://user-images.githubusercontent.com/54589605/233253700-e49441b5-ec07-4420-8433-a3213248a796.png)
![image](https://user-images.githubusercontent.com/54589605/233254013-72c8800a-6db1-4e34-a50e-918320ccb03b.png)
![image](https://user-images.githubusercontent.com/54589605/233254067-eb4bb598-a7e0-4c10-ae5d-78c1cb735dcf.png)

* n^2 < n^5
* n^5 < n^9
* n^2 < n^9 [small-o]

* n^9 > n^5
* n^5 > n^2
* n^9 > n^2 [small-omega(w)]

> **Transitive** property is satisfied by **all** of them.

![image](https://user-images.githubusercontent.com/54589605/233254334-017541ec-c545-4394-959b-b80f873bd399.png)

> **Theta** is possible, then how **small-o and small-omega(w)** are possible. **Theta** is **conditional theta**, here.

> In **direct theta**, **small-o and small-omega(w)** are not possible.

![image](https://user-images.githubusercontent.com/54589605/233254697-13febf9f-2d80-42d7-b950-6e95be35d9d7.png)

> Comparing **f(n) and d(n)**, **d(n)** is **bigger**.

> Comparing **g(n) and e(n)**, **e(n)** is **bigger**.

![image](https://user-images.githubusercontent.com/54589605/233256314-ad90a7ae-decc-4c34-a8be-0f216ebf0479.png)
![image](https://user-images.githubusercontent.com/54589605/233256723-31f7c6de-edbd-4fec-a93f-b6606320f65a.png)
![image](https://user-images.githubusercontent.com/54589605/233256808-39488f98-42c1-4c30-b3e1-c7c7a2fa5a7a.png)

* n^5 + n^9 = O(n^15)

> Big-O means right will be **bigger or equal too**, left.

> If we **add** on the **left side**, then we should **add** on the **right side** also.

![image](https://user-images.githubusercontent.com/54589605/233256987-b4f22e7b-1040-4ae5-a37c-d091eceef8d7.png)
![image](https://user-images.githubusercontent.com/54589605/233257647-07cb30eb-82d8-4d73-a348-412bd2bce3c5.png)


* If we **multiply**, **left side** people. What will happen to the **right side** people.

> Previously we **added**, **left side** people. In **Big-O**, **left side** people are **smaller**, **right side** people are **bigger**. If we **multiply**, **left side** people, even though they are **small**, sometimes they will cross **right side** people, **individually**.

* n^5 = O(n^7)
* n^9 = O(n^12)

> On **multiplying**, **left side** people, who are **n^5 and n^9**, we got **n^(5+9) -> n^14**. If we just keep, **d(n) or e(n)** individually, then they will not work out. If we **add** the **right side** people, then we get **n^7 + n^ 12 -> n^12** and it doesn't work out.

![image](https://user-images.githubusercontent.com/54589605/233258599-2047fae7-1977-4e19-b98f-c68eb715a8c9.png)

>  If we **add** the **right side** people, then we get **n^7 + n^ 12 -> n^12** and it doesn't work out

> We **multiplied**, the **left side** people, so **no doubt**, we have to **multiply**, the **right side** people also.

> If  **left side** people are **multiplied**, then, we have to **multiply**, the **right side** people also. Then, it will **always**, work out.

![image](https://user-images.githubusercontent.com/54589605/233258808-9505b936-3f28-4db7-8096-47b7ef691514.png)
![image](https://user-images.githubusercontent.com/54589605/233258863-2c6a5547-c276-430e-890e-1d7e6a676ffb.png)

* If **left side** people are **multiplied**, then **multiply**, the **right side** people also.
* If **left side** people are **added**, then **add**, the **right side** people also.

> **VERY VERY IMPORTANT**.

## Note

1)
![image](https://user-images.githubusercontent.com/54589605/233259135-3a02ea5e-fe93-4b98-92a0-835e03b98413.png)
![image](https://user-images.githubusercontent.com/54589605/233259174-290aa8b4-88bf-4dee-960e-c4be05e4941c.png)

> Taking **maximum** is **addition**, followed by **big-O**.

2)
![image](https://user-images.githubusercontent.com/54589605/233259294-d2995c10-1857-426c-bc01-bb3f82cbd2e6.png)

> If **left side** people are **multiplied**, then **multiply**, the **right side** people also.

3) 
![image](https://user-images.githubusercontent.com/54589605/233259518-35af5966-a8d3-4a40-896a-e6c90b900bd8.png)

> Left side is **decreasing**, right side is also **decreaing**, no problem.

![image](https://user-images.githubusercontent.com/54589605/233259574-61e59e43-1768-4057-b470-aada69220407.png)

> Left is **decreasing**, in the **same way**, right is **decreaing**, so no problem.

> **Same way decreasing** and **Same way increasing**, so no problem.

![image](https://user-images.githubusercontent.com/54589605/233259777-75afaeb4-67df-422a-8d8c-6ac188843f6e.png)

> If we do the **same work**, on **both**, the **left and right** sides, then the **behaviour**, will **not change**.

![image](https://user-images.githubusercontent.com/54589605/233259992-0b538e45-fec4-4b32-9191-903791de9a0f.png)

![image](https://user-images.githubusercontent.com/54589605/233260832-1424fa5c-6392-44cc-ace5-3c01e2101142.png)

> Both the people are having the **same upper bound**, but **no relation** between them. It can be **reverse** also. First is **n^8** and the second is **n^5**. The reverse will be that the first is **n^5** and the second is **n^8**. 

![image](https://user-images.githubusercontent.com/54589605/233261257-4a260fb7-5b05-4b19-b708-d7aac91e2c48.png)

> So, we cannot say anything between **T1 and T2**.

> In **option(a)**, if we **add** left side poeple, then we have to **add**, right side people also.

![image](https://user-images.githubusercontent.com/54589605/233261440-15a62e4d-b1cf-41a6-b24b-ffc7a0d77a5b.png)
![image](https://user-images.githubusercontent.com/54589605/233261465-5b292bc3-1c22-4326-87d7-e769c383a7da.png)

> Between **T1 and T2**, we cannot say anything.

> This is an **MSQ** question.

> **MSQ** question sometimes have **one answer** only.

![image](https://user-images.githubusercontent.com/54589605/233261843-4f36d011-7e19-4fdb-9dea-f7735d74fdbf.png)

* T1(n) = Theta(f(n))
* T2(n) = Theta(f(n))

> When we say **theta**, **T1(n) and Theta(f(n))** are **equal**. **YES**.

> When we say **theta**, **T2(n) and Theta(f(n))** are also **equal**. **YES**.

> So, **T1, T2 and f(n)**, all are **equal**, **YES**.

* A = B
* C = B
* A = B = c

![image](https://user-images.githubusercontent.com/54589605/233262178-ee85d7ab-afd8-436d-89af-72367e9b8ce6.png)

> All(A,B and C) are **Equal**.

> Now **answer** is **all**. **All** of the **options** are satisfied. **Theta** means all **True**.

![image](https://user-images.githubusercontent.com/54589605/233262381-ff85f52c-1612-4917-8896-f2084e6cb902.png)
![image](https://user-images.githubusercontent.com/54589605/233262409-d7edbe5d-2be7-4f84-a250-8f6c64e4c40d.png)

* T1(n) = Omega(f(n))
* T2(n) = Omega(f(n))

> With **omega** also, we cannot get any **relation** between **T1 and T2**.

> Both the people are having the **same lower bound**, but **no relation** between them. It can be **reverse** also. First is **n^10** and the second is **n^8**. The reverse will be that the first is **n^8** and the second is **n^10**. 

![image](https://user-images.githubusercontent.com/54589605/233262945-760d9df1-9fd0-4c58-9a51-41bf100f2d41.png)

> So, all are **wrong**. No option is **correct**.

![image](https://user-images.githubusercontent.com/54589605/233263060-dca8279a-884a-45d1-a5dc-95dbb2d1c5af.png)

* Big-O -> only option **a** is correct.
* Omega -> All are **wrong**. No option is **correct**.
* Theta -> All are **correct**.

![image](https://user-images.githubusercontent.com/54589605/233263485-486678f2-6e6a-435a-a844-86b7ccbf1ab1.png)

> From the **above**, **4** statemenets we have to conclude that the following statements are **True or False**.

![image](https://user-images.githubusercontent.com/54589605/233264468-26f230ec-8f18-43dc-8233-00a4a5684b03.png)
![image](https://user-images.githubusercontent.com/54589605/233264486-54dfcd7a-caff-4f68-bf0e-b96c187b3456.png)
![image](https://user-images.githubusercontent.com/54589605/233264718-44125568-fe73-4a9d-a4ff-d1853ba78229.png)

> Between **two people**, **reverse** as well as **directly** also possible. Which means they are **equal** and **theta** is possible. 

> Between two people, **directly** possible, which means **<=** is possible but **reverse** is not possible, which means **equal** is not possible/there. So it is **small-o** instead of **big-O** as **reverse** is not possible, so, **equal** is not possible/there.

![image](https://user-images.githubusercontent.com/54589605/233265377-d49c4bdd-3e87-4999-a9ce-a7d08c5faf67.png)

* If **direct and reverse** possible then they are **equal**.
* If **direct** is possible then it is **<=** and **reverse** is not possible, so, **equal** is not there. So, it is only **<** only.

![image](https://user-images.githubusercontent.com/54589605/233265616-1b105ee0-3eb1-46f8-baf2-d2a424d22b3a.png)

* A = O(B) [Possible]
* B = O(A) [Not possible]

> Between two people, **A = O(B)** is possible and **B = O(A)** is not possible, then **reverse** is not possible. Which means **A < B**. **Theta** not there, so **equal** is not there. Only **<**(less than) is there.

![image](https://user-images.githubusercontent.com/54589605/233266037-ea64810a-b16a-40f9-8cc6-882378fe8b9f.png)

* f(n) < g(n) = h(n)

> **f(n)** is **smaller**. **g(n) and h(n)** are **bigger** as they are **equal**.

> In option **a**, left side is **smaller** and right side is **bigger**, so **big-O** is possible. Option **a** is **correct**.

> In option **b**, on the left side among **f(n) and g(n)**, **g(n)** is **bigger**, so it will dominate the **left side**. So, **g(n) = O(h(n))** is possible, as they are **equal**. Option **b** is **correct**.

> In option **c**, on the left side, **f(n) and g(n)** are **multiplied**, one **smaller** and one **bigger** respectively are **multiplied**. On the right side, **g(n) and h(n)** are **multiplied**, both are **bigger** are **multiplied**. 

> So **both** the sides are **not equal**. Hence **theta** is not possible. Option **c** is **not correct**.

![image](https://user-images.githubusercontent.com/54589605/233267260-d779fc13-be74-47ff-874c-26da3eff2da0.png)

> In Option **c**, if we keep **Big-O**, instead of **theta**, then, option **c** would have been **correct**.

![image](https://user-images.githubusercontent.com/54589605/233267503-dd80ec19-1e57-406a-8ea9-e64649feef81.png)
![image](https://user-images.githubusercontent.com/54589605/233267644-7f48ad79-e1c6-4570-ac12-b5e196f9f432.png)

> In Option **d**, left and right side, both are **bigger**. So they are **equal**, hence **theta** is possible. So, Option **d** is **correct**.

* A, B and D are **correct**.

![image](https://user-images.githubusercontent.com/54589605/233764629-14b6796c-7142-426a-b3f8-79d613be1f6a.png)
![image](https://user-images.githubusercontent.com/54589605/233764633-fe897356-eade-44bd-85ce-bc174af6a579.png)


## GT-III (13) [20th April 2023]

## Recursion

> Function calling itself is known as **Recursion**. [**Point One**]

> It maybe close to **starting**. It maybe close to **ending**. Most of the time, calling is in the **middle**.

![image](https://user-images.githubusercontent.com/54589605/233365940-d98e8200-35ed-421a-89be-8d49b76ff3af.png)
![image](https://user-images.githubusercontent.com/54589605/233366241-2d367a46-4dbf-475c-9e99-983c03d0a436.png)

* Fact(6) -> 6 * Fact(5)
* Fact(5) -> 6 * Fact(4)

> At anywhere we know, **go back**. Worst case, is **fact(1)** and everyone knows, **fact(1) = 1**.

![image](https://user-images.githubusercontent.com/54589605/233366468-ee619eba-2f5f-49a4-be14-0f25ef40dc50.png)


* Coming down -> Function calling(PUSH operation)
* Going up -> Return(POP operation)

> **Fact(1)** is the **first** function completed and **popped**. Then, **fact(2)** is **popped**.

* **Fact(6)** -> **Fact(5)** -> **Fact(4)** -> .... -> **Fact(2)** -> **Fact(1)** [Sequence of **PUSH**]

* **Fact(1)** -> **Fact(2)** -> **Fact(3)** -> .... -> **Fact(6)** [Sequence of **POP**]

> How many **push** operations, that/those many **pop** operations as well.

> If **push** operations is **7** and **pop** operations is **6**, then there is **no meaning**.

> If **push** operations is **7** then **pop** operations should be **7** only, otherwise something is **stuck** in the **stack**.

> For getting the value of **Fact(6)**, we need all of them from **Fact(5) to Fact(1)**. We need to **store** them in **one data structure** and that data structure is **stack**.

* Among all of them, **Fact(6)** is called **first**.
* Among all of them, **Fact(6)** is completed **last**.
* Among all of them, **Fact(1)** is called **last**.
* Among all of them, **Fact(1)** is completed **first**.

> That's the meaning of **stack**. Stack is **LIFO**, **last in first out**.

> Why stack and why not **queue**, because in queue, **Fact(6)** is called **first** and **Fact(6)** is completed **first**, which doesn't give the **desired result**.

> That's why **stack** used.

> For **recursion** programs, **stack** data structure is used. [**Point Two**]

![image](https://user-images.githubusercontent.com/54589605/233371190-50db29ba-eea4-446d-9493-99b59c3a6e28.png)

> We are completing **Fact(6)**, using **Fact(5), 4, 3, 2 and 1**.

> We are completing **Fact(5)**, using **Fact(4), 3, 2 and 1**.

> We are completing, **bigger** problems, with **smaller** problems. **Recursion** is nothing but solving **bigger** problems, in-terms of **smaller** problems. [**Point three**]

![image](https://user-images.githubusercontent.com/54589605/233372140-a215d383-e9b4-45e7-91d7-6d8b333677fc.png)

> **Divide and Conquour** is nothing but **recursion**.

![image](https://user-images.githubusercontent.com/54589605/233373752-c8e0a8ec-4f6c-4513-b701-09923959e324.png)
![image](https://user-images.githubusercontent.com/54589605/233375372-17e939b2-5d83-466a-96d1-64d81107a3d3.png)


> Every **function call** is a **PUSH** operation.

* Stack Overflow -> Stack Error Message, when **memory** full.

> Every **recursive** program, must have or should have **termination** condition. Otherwise we will get an **error message while running**, which is **Stack Overflow**.           [**Point Four**]

> **Stack Overflow** is a **run-time** error message. It is not **compile** time.

> Some **compile** time, errors are **type mis-match**, **semi-colo missing**, **undeclared variable**, **multiple declaration**.

* In a given recursive program, termination condition is not given. What will happen?

A) Infinite loop -> **NO**. Space is **limited**. Not possible.

> The program will **stop** at some point in time by giving an **error message** that is **Stack Overflow**. [**Correct Answer**]

![image](https://user-images.githubusercontent.com/54589605/233379463-e5048c47-ba51-477a-bf76-f967a99c816a.png)
![image](https://user-images.githubusercontent.com/54589605/233379876-d1ac27c6-258e-4c17-b507-dbd81e082e95.png)

* Recursive program

![image](https://user-images.githubusercontent.com/54589605/233381167-148509de-7232-41dd-8c22-156e65d5c30b.png)
![image](https://user-images.githubusercontent.com/54589605/233381529-a2701d50-09b4-453f-8f36-bb24a1d93457.png)

> **White** color is **going down**, which means **POP** operations which is **return** statements.

> **Red** color is **going up**, which means **PUSH** operations which is **function call**.

* Whenever **recursion** is going on, **many** function calls are there. From **one** function call to **another** function call, what will be the **difference**.

> The **function name**, remains the **same**. Everywhere **f(n)**.

> The **function code**, remains the **same**.

> The **local variables name**, remains the **same**.

> The **no. of local variables**, remains the **same**.

> The **value of local variables**, will **change**.

> Whenever **recursion** is going on, **many** function calls are there. From **one** function call to **another** function call, **parameter value** will **change** but not the **no. of parameter, parameter name, function name, function code**, these will not change. [**Point Five**]

> Somethings should **change**, if **nothing** is **changed** then it will never **terminate**.

![image](https://user-images.githubusercontent.com/54589605/233387648-628bbce9-c17d-4572-a169-875192d9705d.png)

* Parameter value is only **changed**, rest are the **same**.

![image](https://user-images.githubusercontent.com/54589605/233387768-00205e1e-a456-491d-a438-08a0a1b16de1.png)
![image](https://user-images.githubusercontent.com/54589605/233388226-d00fb78e-8162-40c5-9f8a-43f728977cf6.png)
![image](https://user-images.githubusercontent.com/54589605/233388816-f3b9bdfb-0f11-4d29-86ea-b5f5ab65a740.png)

* It is **Non-recursion**.

> The **above** program with **for loop**, will call the **fact(n)** function only **1 time or once** to calculate the **factorial of 6**. Inside loop, running many time but the function **fact(n) or fact(6)** when **n=6** is called **1 time or once**.

> **Fact(6)** is not calling anyone else. **1 time or once** function call.

> **1 time or once** function call, means **1 PUSH** operation.

> So, in the **Non-recursion** program, only **1 PUSH** operation is required as there is **1 time or once** function call. Whereas in the **recursion** program, **6 PUSH** operations are required as **6** function calls are required.

> In terms of **space**, most of the time **non-recursion** programs are **better**.

>  Most of the time, **recursion** will take **more space**, because of **more** function calls.

>  Most of the time, in **non-recursion**, it will take **less space**, because of **less** function calls.

* For **every recursion**, **non-recursion** is possible. [**Point Six**]

![image](https://user-images.githubusercontent.com/54589605/233392404-c4211085-f66c-4417-b9a9-c95d7a58e13a.png)

> Most of the time, **recursion** program takes **more** stack space and **non-Recursion** program takes **less** stack space. [**Point Seven**]

![image](https://user-images.githubusercontent.com/54589605/233393302-9b356f7d-c181-47bb-b58b-217fa7d96cb2.png)

> **Non-Recursion** program takes **less** stack space than **recursion** program for most of the time but in **some cases**, they will take the **same** amount of time.

> Comparing **recursion and non-recursion**, recursion will take **more stack space**, **most** of the time, comparing with **non-recursion** because of **more** function calls.

> Sometimes, **equal** also. [Explained later]

> **Space complexity** for **non-recursion** programs is **constant**.

> For every problem, **space complexity** is **constant**.

> **Space complexity** for **recursion** programs is not **constant**, we have to find it out.

![image](https://user-images.githubusercontent.com/54589605/233403169-38317b01-64d6-4936-a714-5c7c7c429844.png)
![image](https://user-images.githubusercontent.com/54589605/233404014-8cdc13ed-9c7e-40a1-9a17-3ede093132a7.png)

* Non-recursion program

> **Time complexity** is how many **times**, loop is running. **Time complexity** means loop.

> In the above program, there is **loop**. **YES**. The loop is running **n times**. So, the **time complexity** of the program is **O(n)** as loop is running **n times**.

![image](https://user-images.githubusercontent.com/54589605/233404058-52a06cd9-f64c-487e-911d-78974cdcc720.png)

* Recursion program.

> There is **no loops** but the function is calling itself, **n times**. So, the **time complexity** of the program is **O(n)** as the function is calling itself, **n times**.

> So, indirectly, the **time complexity** of both the **recursive and non-recursive** programs are the **same** which is **O(n)**.

![image](https://user-images.githubusercontent.com/54589605/233404822-88096c50-e054-4699-b03e-eec688c693ac.png)

> So, internally, it is doing the **same** thing only. Everytime **one no.** multiplication.

* 5 * 4 * 3 * ... * 1.

![image](https://user-images.githubusercontent.com/54589605/233405145-d03450af-94d6-4c86-9dbc-0fc67eedfda5.png)

> We are doing the **same***, everytime **one no.** multiplication in **non-recursive** programs as well.

![image](https://user-images.githubusercontent.com/54589605/233405379-0636ad4b-fcfd-441d-94c6-fd34936ab0c5.png)

> Different ways of writing.

> Calling myself, it is **loop** only.

> Indirectly **loop** in **recursion** programs and direct **loop** in **non-recursive** programs.

* Which will take more time? **recursion** or **non-recursive** programs?

> They will take **same** amount of time**.

![image](https://user-images.githubusercontent.com/54589605/233405909-c46cb4f0-70d2-4667-8654-91420a4010de.png)
![image](https://user-images.githubusercontent.com/54589605/233406146-2d457975-80b4-4c76-a840-7d8bd20a0b70.png)

> **Time complexity** is based on **logic** and not on **recursion or non-recursion** program.

> **Recursion or non-recursion** programs will not decide **time complexity**, but the **loops or logic** will decide, **time complexity**.

> **Time** point of view, no **discrimination** between **recursion and non-recursion** programs. **Time** is **same** for **both**.

> **Space** point of view, there is **discrimination** between **recursion and non-recursion** programs, because in **recursion**, more **function call** and more **PUSH** operation. In, **non-recursion**, less **function call** and less **PUSH** operation.

[**Point Eight below**] 

> **Recursion and non-recursion** programs will take **same time**, because of **same logic**. If different logic, then both will have different logic, then different time. If logic changes, time will also change.

> **Logic** will decide, **time complexity** and not **recursion and non-recursion** programs.

> **Space complexity** is based on **recursion and non-recursion** programs, because in **recursion**, **more** function calls. In **non-recursion**, **less** function calls. Sometimes, **both** maybe **equal**, but most of the time, **recursion** having more space.  

* In **non-recursion** programs, **1 time or once**, **PUSH** operation and **1 time or once**, **POP** operation .
* In **recursion** programs, **n times**, **PUSH** operation and **n times**, **POP** operation.

> Mathematically, **recursion** will take **more time**. **n time** PUSH and **n time** POP, so, **2n** operations. But in **non-recursion**, one time loop and **n**, one time **PUSH** and one time **POP** but loop is **n** time.

> Asymptotially, **2n and n** are **same**, so, they will take **same time** because of **same logic**. But mathematically, **recursion** having some **over-head**.

> Forget about **constant**, even though **recursion** having some **over-head**, in-terms of **PUSH and POP**. That is **negligible** because of **some constant**.

![image](https://user-images.githubusercontent.com/54589605/233410838-1083022e-e8c6-4b1a-9963-aba3587027a3.png)

## Recurrence Relation

> Recursion program having **two** part.

![image](https://user-images.githubusercontent.com/54589605/233414629-fd9a6634-f388-4c9b-8094-0214196fba1e.png)
![image](https://user-images.githubusercontent.com/54589605/233414849-a791e7eb-1a42-40d6-8aa2-7962da1b513d.png)

* This is called as **recurrence relation** for **fact(n)** value.
 
* For every **recursive** program, **recurrence relation** is possible? 

> **YES**.

## GT-IV (14) [21st April 2023]

* For every **non-recursive** program, **recurrence relation** is possible? 

> **YES**.

> Every **recursive** program, contains **two** parts, **base condition** and **function calling itself**.

![image](https://user-images.githubusercontent.com/54589605/233677216-13e9bec0-11ff-460b-80bf-7e9ffa684535.png)
![image](https://user-images.githubusercontent.com/54589605/233678878-7cd48818-45f4-4209-b392-59e4fad7aa0e.png)

## Recurrence Relation Time Complexity

![image](https://user-images.githubusercontent.com/54589605/233681596-685141b3-f645-4c6a-b33b-437a0322ab25.png)

* **T(n)** is time complexity of **fact(n)**.

> In the **return or else** part, there is no **loops**. Recursion is there.

> **Multiplying** one number, takes **constant** times. That's why we have put **+ c** with **T(n-1) + c**.

![image](https://user-images.githubusercontent.com/54589605/233686524-0205f184-fab2-4730-be75-ba4d59207152.png)

> With **time compleixty**, the **loop** key-word should come immediately.

> In **time compleixty, recurrence relation** and **value, recurrence relation**, one thing is **common**, which is **recursion**. Only **names** will **differ**.

![image](https://user-images.githubusercontent.com/54589605/233687407-f2fd77e1-f17b-435d-84a6-a469d53ea92d.png)

> Until and unless, we see **loops(for or while)**, don't write **n**.

> As a **programmer**, we will take care of **first level**, remaining **recursion** will take care.

## Recurrence Relation of multiplication

> We have to calculate, no. of multiplication.

> We have **one only** multiplication in the **2nd part** of the recursion. 

> Don't worry about **all** the levels. Just do the **first level**. Whatever we are able to see, do that only. Don't do everything. Remaining thing will be do by **recursion**.

> In the **first level** only, we can see **one only** multiplication.

![image](https://user-images.githubusercontent.com/54589605/233690417-8f457f98-97f6-40d2-8d47-e7fa705b07f4.png)

> In **every** area, **recursion** is common. Remaining things a little bit differ.

* If we want to find the **time complexity** of any **recursion** program?

> First, write the **recurrence relation for time**.

![image](https://user-images.githubusercontent.com/54589605/233693592-6bf7b41c-63cf-43a5-a43d-3593c46ae086.png)

* If we want to find the **no. of multiplication** in a given **recursion** program?

> First, write the **recurrence relation for no. of multiplication**.

![image](https://user-images.githubusercontent.com/54589605/233694076-c5b259cd-9a3f-4567-9639-d435a3c69446.png)

## Solving Recurrence Relations

1) Substitution method
2) Recursive Tree method
3) Master's theorem

![image](https://user-images.githubusercontent.com/54589605/233694864-dde1d058-98b7-4218-a20d-0cf212e8df2e.png)

## Substitution method

![image](https://user-images.githubusercontent.com/54589605/233695177-ecb1378a-6019-4a35-ade3-9e3afdecaa4f.png)

* We want to find the **time complexity** of **above** program?

> We will use the **recurrence relation of time**.

> Don't think much about **if** condition, it is for **termination** purpose. Think about **else** part.

![image](https://user-images.githubusercontent.com/54589605/233697080-3aaee42e-c026-4904-bb18-6c3e216283e9.png)

> Among **T(n-1) and C**, **T(n-1)** is the **recursion**. **C** is the **non-recursion**.

> We have to **expand** the **recursion**, **non-recursion** cannot be expanded.

![image](https://user-images.githubusercontent.com/54589605/233697401-e82c49ef-a401-4792-b906-37b345b07a44.png)
![image](https://user-images.githubusercontent.com/54589605/233697573-31f71b9b-ec2d-4fd4-95fd-847a455f7e36.png)

> Every level, **one** constant is coming.

![image](https://user-images.githubusercontent.com/54589605/233698222-6264a3f6-3e69-411d-b1e4-dfa9b4aabd3a.png)

> **T(n-k)** is the **recursive** term.

> To stop the **recursion** on the **recursive** program, we need the **termination or base condition**.

> We want to stop **T(n-k)**, so **n-k = 1** and we need to find the value of **k**, which is **n-k = 1 -> n = k + 1 -> k = n-1**. So, **k** value is **k = n-1**.

> **T(1)** is **constant** time or **O(1)**.

> The **bigger** function is **n**, so asymptotically it is **O(n)**.

![image](https://user-images.githubusercontent.com/54589605/233700147-cc09d5ca-12f4-4f48-88a6-e2dc307db478.png)
![image](https://user-images.githubusercontent.com/54589605/233700407-b4b5c1d3-885b-4cc9-b6c3-0ea3aa03d24b.png)

> **Substitution method** means **substitution, substitution and substitution**, until **termination** happens. For **k** value of **k=n-1**, termination happened.

> We will **expand** the **recursive** term.

![image](https://user-images.githubusercontent.com/54589605/233758367-d50470c5-87ab-4b44-bb8e-88cf15239ee1.png)

> The above **recurrence relation** is for **time**, that why we got **time**.

> If the **recurrence relation** is for **value**, then we would get **value**.

> If the **recurrence relation** is for **no. of multiplication**, then we would get **no. of multiplication **.

### Value

![image](https://user-images.githubusercontent.com/54589605/233758709-d9b4f641-f9cf-4db0-b8d2-2e0a6df0e97b.png)

> If we solve the **above** one then we will get **value**.

> **Recursion** is **important**.

![image](https://user-images.githubusercontent.com/54589605/233758736-c210dcc9-673c-4d39-86c4-e49c6313fe58.png)

> Expand only **recursion**.

![image](https://user-images.githubusercontent.com/54589605/233758859-2fac867d-d4e2-4c0a-8817-ef507ad83e7b.png)

> If we substitude **3** times, then we will get **3** non-recursive terms.

![image](https://user-images.githubusercontent.com/54589605/233758972-090d3a66-5d71-4a38-85bf-74ccb6f4af38.png)

> Always substitude for **3** times.
 
![image](https://user-images.githubusercontent.com/54589605/233759087-4269be1f-92ce-4c94-9aa0-0a0556f44a5d.png)

> If we substitude **2**, then everything will come in-terms of **2**.

![image](https://user-images.githubusercontent.com/54589605/233759198-6f9b5dfa-faae-4259-b989-edf9d4cef98b.png)

> After going **3** times, we will go for **k** times.

> To stop **T(n-k)** recursion, we have to put **n-k=1**, as **1** is the **termination condition** here and we get the value of **k**. The value of **k** is **n-1** and we substituted **n-1** in place of **k** in the equation.

> After substitution, only the **first** term is having **T** and the 2nd term is not having any **T**. Only the **first** term having **T** and the rest terms not having **T**.

![image](https://user-images.githubusercontent.com/54589605/233759412-2b65d574-5d99-4aee-812d-a127932ed198.png)

> This is the **recurrence relation** for **value** and we got **value** which is **n!**.

* If we written for **value**, value will come.
* If we written for **time**, time will come.
* If we written for **no. of multiplication**, multiplication will come.

* All of the **recurrence relation** came from the **same program**.

* One **recursive** program, having many **recurrence relation**.

* Explain **substitution method**.

> Substitude the given function again and again, until **termination** condition will happened.

1) Substitude the given function for **3** times.
2) We have to find the **pattern** for substitution. After **3rd** step, we will stop and observer to find the **pattern**.

![image](https://user-images.githubusercontent.com/54589605/233759917-32d1f2c2-405c-43ce-87a2-012fa5448bf0.png)
![image](https://user-images.githubusercontent.com/54589605/233759935-7dc06382-d6d9-46d8-8870-3976e84c0129.png)

* We did with **recursion**.

> We are **substraction by 1**, that's why we getting **one-one** difference.

> If we are **substraction by 2**, then we will get **two-two** difference.

> Whatever we substract, accordingly the **difference** will come.

![image](https://user-images.githubusercontent.com/54589605/233704226-467672ee-2cae-47b0-927a-b0b86bb9b4ad.png)
![image](https://user-images.githubusercontent.com/54589605/233704487-e4838f75-f246-4b7a-af33-153d37c79582.png)

> If we substitude **3**, then everything will come in-terms of **3**. As, we did in **3**, that's why **T(n-3)** came. That **3** is **3** times.

> To stop **T(n-k)**, we have to put **n-k=1**, as **1** is the **termination** condition and it is **T(1)** and we get the value of **k**. The value of **k** is **n-1** and we substituted **n-1** in place of **k** in the equation.

> So we got **n!**. **n!** is the **actual answer**.

> If **n!** is not there in the options then, **n! = O(n^n)** and **n! = omega(2^n)**.

* **n^n** is **bigger** compared to **n!**.
* **2^n** is **smaller** compared to **n!**.

> **Big-O and omega** are not **exact** they are **upper and lower** bound respectively.

![image](https://user-images.githubusercontent.com/54589605/233705313-2b5853f1-6026-4b99-a776-e7778edf4e42.png)
![image](https://user-images.githubusercontent.com/54589605/233760329-55cf651a-0cad-446e-a84f-920ec3cf3585.png)

> If **n!* is not there in the options then, **upper bound** with **O(n^n)** or **lower bound** with **omega(2^n)**, will be there.

* One recursion program in **GATE** exam will be given. Find the **time complexity** of the recursive program.

> Write **recurrence relation** for **time**.

![image](https://user-images.githubusercontent.com/54589605/233760472-74046fec-b169-4614-a8cd-7c23e43b6bd8.png)
![image](https://user-images.githubusercontent.com/54589605/233760485-84ec8ae1-bb5c-4b60-a753-54ca4570d372.png)
![image](https://user-images.githubusercontent.com/54589605/233760493-2e5be1b3-7591-4585-bf8b-bf62fa0850dc.png)

> There are **3** methods but out of all of them **substitution** method is the **most** powerful.

> **Substitution** method  will solve every problem.

> For every **recursion** program, write it's **recurrence relation** and after that, solve it using one of the **3** methods.

## Fibonacci Series

![image](https://user-images.githubusercontent.com/54589605/233760752-75171d36-7081-4ead-9926-bcf000abdad2.png)
![image](https://user-images.githubusercontent.com/54589605/233762479-02aba72a-0233-4f36-bae3-504045580e1e.png)

> Previous **two** summation will give **next**.

> Fibonacci series having **two** termiantion conditions.

![image](https://user-images.githubusercontent.com/54589605/233762646-c7d54a1e-9cb5-4340-ae46-73d45347fab9.png)
![image](https://user-images.githubusercontent.com/54589605/233762811-f88b5a48-7914-4ae2-9b8f-91ff447a8d90.png)

> We are substituting **two** times. So **Binary tree** coming.

![image](https://user-images.githubusercontent.com/54589605/233762872-f6d32a93-bcd2-4364-83b5-b00a51f6e236.png)

* Binary Tree.

![image](https://user-images.githubusercontent.com/54589605/233762838-974f71bd-644b-4006-bff1-a917f08bcedc.png)

> It was **uniary** tree in the **previous** problem, as we were substituting only **one** time.

* Write **3** recurrence relations(value, time and additions) for the **fibonacci series** program.

![image](https://user-images.githubusercontent.com/54589605/233764649-988fb885-2194-43c7-b95c-78168b4d500b.png)
![image](https://user-images.githubusercontent.com/54589605/233764653-82063169-8bc8-41c5-a785-42cdaa0ccd6b.png)

> Above **3** recurrence relations(value, time and additions) for the **fibonacci series** program.

* Wrong. **n=1 and n=0** should be **together**, like is **below** shown by **sir**.

![image](https://user-images.githubusercontent.com/54589605/233766292-f9859931-e76c-4570-8941-8aa6cb1d80a5.png)



## GT-V (15) [22nd April 2023]

> If **loop** is there, then only write **n**. Otherwise simply write, **+ c***.

> Recursion people, everywhere same. Remaining things will only **differ**.

* Write as it is, the **else** part, it is the **recurrence relation for value**.
* Thinking about **loop**, it is the **recurrence relation for time complexity**.
* Thinking about **addition**, it is the **recurrence relation for addition**.

![image](https://user-images.githubusercontent.com/54589605/233765377-0ecfb03a-7d50-451d-b78d-8932e09a4c23.png)
![image](https://user-images.githubusercontent.com/54589605/233766305-887431a6-5ac9-49d6-9525-e3748a2d1028.png)
![image](https://user-images.githubusercontent.com/54589605/233766357-de3a5576-d315-492f-be0c-79903d629cff.png)

> Beacuse **one** addition(+) is there in the **else** condition.

> As there is no addition(+) is there in the **if** condition, that's we put **zero(0)**.

> In the **else's** place there is **no loop**, that's why time complexity is **constant**, so, **+ c** in the **recurrence relation for time complexity**.

> In **recurrence relation for value**, nothing to discuss, as it is. 

![image](https://user-images.githubusercontent.com/54589605/233766508-378b8e99-1f37-4550-862e-3075644e895b.png)

> We have to solve **recurrence relation for time complexity** to get the **time**.

> In the above recurrence relation, more than **one** function calls is there.

> It is taking time using **substitution method**, that's why we are using **recursive tree method**.

## Recursive Tree method

![image](https://user-images.githubusercontent.com/54589605/233766841-12f6b0d3-8e75-498d-9538-777123a13b12.png)
![image](https://user-images.githubusercontent.com/54589605/233766959-52b93d54-7e17-4912-a732-e6aa65be82ff.png)

> As there is more than **one** function calls, that's why we are using **recursive tree method**.

> More than **one** function call, **recursive tree method** is **better**. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/233767027-ef04f944-a5d4-45ce-8a1c-e14d02eda417.png)

* Tree better.

> We will use **substitution** method when there is only **one** function call.

> **One** function call is there, that is also a **tree**, which is a **1-ary tree**.

> For **three** function call, **recursive tree method** is **better**. **3-ary tree** will come here.

![image](https://user-images.githubusercontent.com/54589605/233767306-7af90827-e822-40d7-bbef-8e812c0242e2.png)

* Recurrence Relation for **time complexity**.

> We cannot write **T(n/2) - T(n/2)**, since there is **no meaning** of **time complexity** substraction. As there are **two** function calls, we have to **add** the **time complexities**, even though there is **minus(-)** sign in between them. That's why we had to write, **T(n/2) + T(n/2) + c**. **+ c** is the **constant** time required to do the **substraction**.

> As it is if we **write**, that is called as **value**. **T(n/2) - T(n/2) - n**, this is called as **value**.

![image](https://user-images.githubusercontent.com/54589605/233767839-53869811-90c4-4b6b-a7e4-c33e804a2520.png)
![image](https://user-images.githubusercontent.com/54589605/233767886-ee8f74d2-c566-4dbf-8b8a-5ffeb84a50b5.png)

> Simplification is possible and now it looks like **one** function call, instead of **two** function calls. We can do **substitution** method for that reason.

> But in **T(n-1) + T(n-2)**, simplification was not possible and it remained as **two** function calls, so we couldn't do **substitution** method there and had to use **recursive tree method**.

![image](https://user-images.githubusercontent.com/54589605/233768003-45d0df7a-5f42-4f13-a630-676854845534.png)

> In **recurrence relation for time complexity**, we would never see **minux(-)**.

> **Minux(-)**, would be possible for other **recurrence relations**.

> Until, **3** rounds/steps are **over** and the pattern is **identified**, don't do simplification. Keep it, as it is.

![image](https://user-images.githubusercontent.com/54589605/233768449-b775285e-82d5-4c38-a033-f56e23231369.png)

* 2 rounds are done.

> After **3 rounds are done**, whatever came, it is in-terms of **3** only. Everything is in-terms of **3**.

![image](https://user-images.githubusercontent.com/54589605/233768756-ba9e12cb-f5e0-409d-9e8b-c56a2b1c6f2d.png)
![image](https://user-images.githubusercontent.com/54589605/233768858-822f5309-caa5-4f66-8581-2510b30632f4.png)

> Until identified the **pattern**, don't do simplification.

> After **k** times, **recursion** is still there. To stop the recursion, **T(n/2^k=1**, since **1** is the termination condition.

![image](https://user-images.githubusercontent.com/54589605/233769141-968aa22c-daf8-494c-882e-7805f9fe1278.png)
![image](https://user-images.githubusercontent.com/54589605/233769221-ef01b77f-bba9-466e-9b98-5989c871c6da.png)

> If **termination condition(if condition)** not given in **GATE** exam, then take some **termination condition(if condition)** for **stopping** purpose. We can take some **constant**.

![image](https://user-images.githubusercontent.com/54589605/233769264-1c09fb1b-9fac-4612-83c1-c7a0c3974f44.png)
![image](https://user-images.githubusercontent.com/54589605/233769301-0d024c99-251a-4e20-8bc8-90daecd4d2ee.png)

> Out of those **three** all are **right/correct**. Anyone we can use. All **three** we can use.

![image](https://user-images.githubusercontent.com/54589605/233769555-1054dff3-5e71-44a8-ba76-05e0e3b666d3.png)
![image](https://user-images.githubusercontent.com/54589605/233769716-d7a7b581-d66b-4c9a-a4ae-23aa1d1d4971.png)
![image](https://user-images.githubusercontent.com/54589605/233769800-dce07ec1-9b15-4568-8afc-38ac920f515f.png)

* GP series formula. [**IMPORTANT**]
* Sum of **n** terms in the GP series.
* [a * (r^n -1)]/(r-1) -> Formula
* a -> 2^0 [First element]
* r -> 2  [First element]
* n -> log n terms. [No. of terms]

![image](https://user-images.githubusercontent.com/54589605/233769642-97ddc9d0-96b0-4441-a666-68d022e22f44.png)
![image](https://user-images.githubusercontent.com/54589605/233769653-111f55cc-15d5-437b-811e-a327c01e28b1.png)

* Log formula

![image](https://user-images.githubusercontent.com/54589605/233769671-cb66edf1-f278-4860-80cc-b9c3cd56abcd.png)

* O(n)

![image](https://user-images.githubusercontent.com/54589605/233769780-2b2935fa-53d4-4cf3-bf71-98ea38bbb7e5.png)

## Steps for **Substitution method** [**IMPORTANT**]

1) Substitution method is **easy**, if we do first **three** rounds properly.

2) First **three** rounds, don't do any simplification. Keep it as it is.

3) Do **three** rounds properly. Automatically remaining all will come.

4) After **three** rounds are over, observe **pattern**.

5) After **pattern** found, go **k** times.

6) After **k** times are over, find **k** value.

7) Some **series** will come, **solve** it.

![image](https://user-images.githubusercontent.com/54589605/233770029-14819136-2042-4b17-96d0-8c4f70656cf4.png)
![image](https://user-images.githubusercontent.com/54589605/233770040-fb1363aa-6407-42a0-8a16-b7399ad77269.png)

> Time complexity cannot be **negative**. Time complexity is about **loops**. Small small **minus(-)** operations will take **constant** time.

> How substracting **two** numbers can be **negative**. It cannot be **negative**.

> Substracting, multiplying, adding **two** numbers is **constant** time.

> Time complexity means **time** only. It cannot be **negative**.

![image](https://user-images.githubusercontent.com/54589605/233770160-2277cac2-17c4-4bfa-ac84-ab43d9effcb2.png)

> Until **yellow** part it is substitution method. Afterwards, normal mathematics.

> The actual answer is **n + c * (n-1)**. **n** is the **larger** function.

> Left and right side, **larger** function is same we can write **theta** also, which is **theta(n)**.

> We could write, **O(n^2)** also, as **big-O** means **right** side is **bigger**.

> We could write, **Omega(1)** also, as **omega** means **right** side is **smaller** or **left** side is **bigger**, same thing.

![image](https://user-images.githubusercontent.com/54589605/233770673-1f5c3a3b-b22c-4553-899b-6f278df02402.png)

> All are **correct**.

![image](https://user-images.githubusercontent.com/54589605/233770685-76df770a-b146-4bc3-8bcf-5fc1cd18be60.png)

* YES. 

![image](https://user-images.githubusercontent.com/54589605/233787571-8999712b-f02c-4028-95bb-7ae9fb5f61e5.png)
![image](https://user-images.githubusercontent.com/54589605/233787452-41d8c2d6-b4de-4783-b60d-5072aa03b510.png)

* O(n^(log 7 base 2).

![image](https://user-images.githubusercontent.com/54589605/233788388-ae6b1034-2736-49af-9bd1-ef933ccc4a72.png)
![image](https://user-images.githubusercontent.com/54589605/233788650-6fe4c4b7-4ec5-4bb9-b100-539656ab77b4.png)

* All are **correct**.

> Explained how to solve, **Even no. squared series**. [**IMPORTANT**]

> Explained how to solve, **'N' natural no. squared series**. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/233789454-850bcaae-ff22-44fc-aa4f-69057b3cbc80.png)

* **'N' natural no. squared series** formula **minus(-)**, **Even no. squared series**, we get **odd numbers**
* n*(n+1)*(2*n + 1) - [(n/2) * [(n/2 + 1)] * [(2 * n)/2 + 1]] -> **O(n^3)**
* **O(n^3)**

![image](https://user-images.githubusercontent.com/54589605/233788875-da75f67e-4d17-49f9-ae0f-0b55a89b6ae0.png)

> **Recursion** means we are doing **many** times. Everytimes, **one term** will come.

> If at all, the **recurrence relation** is for **time complexity**, then **every term** is the **time** for that specific level.

> If at all, the **recurrence relation** is for **value**, then **every term** is the **value** for that specific level.

> When solving **recurrence relation**, we are getting **some series** inside. Sometimes, we will get **GP**. Sometimes, we will get **AP**.

![image](https://user-images.githubusercontent.com/54589605/233788973-2412c316-19ee-4224-8a91-f71f74cd669b.png)

> Above **recurrence relation** is for **time complexity** or **time** purpose. Level to level, **time** is **increasing**. It is a **binary** tree.

> Level to level, function calls are **increasing**, so **time** also **increasing**.

> Whenever we are solving **recurrence relation** is for **time complexity** or **time** purpose, every time, we are getting **one** term, that **term** is **time** at that **level**.

> Whenever we are solving **recurrence relation** is for **value** purpose, every time, we are getting **one** term, that **term** is **value** at that **level**.

![image](https://user-images.githubusercontent.com/54589605/233789603-ae8bd576-5932-484c-8c0e-f1f77b99ed52.png)
![image](https://user-images.githubusercontent.com/54589605/233789658-355a089e-4ef5-4c85-b41b-97294122d29b.png)

> The actual answer is **Theta(n^3)**.

> All **three** with **green ticks or check marks** are **correct**.

> Out of the **three**, only **one** is available.

* Assume that all **three** are available and we can choose **one only**? Which one we should choose? 

> **Theta**, because **theta** means **big-O and omega** are also possible. **Theta** means we selected **all**.

> If, **MSQ**, then select **all three**.

> If, **MCQ**, then select **Theta**.

![image](https://user-images.githubusercontent.com/54589605/233789850-4a6c1cd8-d7de-4239-9dec-c0681fd011ae.png)
![image](https://user-images.githubusercontent.com/54589605/233789860-0ed01533-0865-420d-99e1-73de6eb50614.png)
![image](https://user-images.githubusercontent.com/54589605/233789908-027eb96a-2406-4204-b2d6-c5df235fb106.png)

> If, **MSQ**, then select **all** of them.

## Practice

![image](https://user-images.githubusercontent.com/54589605/233789962-c46e5afe-52f8-485a-9e40-dbf34d5c2072.png)

## Doubt_Solving_Session (16) [22nd April 2023]

> In the **first** question, first level cost is **n**. The no. of levels is **log n** because **T(n/2)**. So, the total cost is **n * log n**. **n * log n** is the **upper bound**. It will not go more/further than **n * log n**. 

> If we are **substracting by 2** from every level, then the total **no. of levels** is **n/2**.

![image](https://user-images.githubusercontent.com/54589605/233798106-642de703-7a34-4742-9632-cda154cef166.png)

> **Two** times, we have substituted and we have **two** non-recursive terms.

![image](https://user-images.githubusercontent.com/54589605/233798149-a0a3c8b6-0640-468f-9490-f4b53d69de81.png)

> In the **first level**, **n** is the  non-recursive term.

> In the **second level**, **n/2** is the  non-recursive term.

> The **non-recursive terms** are different for both the levels.

![image](https://user-images.githubusercontent.com/54589605/233798501-6cf106fe-fad7-4fb3-9051-706c7d54b96e.png)

## Notes

### GP Formula [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/233798538-4f4bb479-9704-4133-afd6-4d6b9869eed7.png)

![image](https://user-images.githubusercontent.com/54589605/233798831-e2e624da-9924-4dee-9bb3-d90e9fd50ff0.png)

> If **r** value is less than **1**, then **r^n** will still be **decreasing**. It will **decrease** more.

![image](https://user-images.githubusercontent.com/54589605/233798855-75b61a92-35f3-4e7b-bce0-d69f102f950c.png)

> If we doing **r^n** which is **function** time squaring, then it is closer to **zero(0)**.

![image](https://user-images.githubusercontent.com/54589605/233799694-b46847eb-1b8d-4a62-95c1-c92df16102ba.png)

> GP series, where **r** value is less than **1**, then the total answer is **O(1)**.

![image](https://user-images.githubusercontent.com/54589605/233798974-8e086430-8ad5-4e8a-9129-daceb9838aa8.png)
![image](https://user-images.githubusercontent.com/54589605/233798990-76ca0c09-7cc5-43ee-acd9-2d61898efb18.png)

* O(n).

> It is a **GP** series and **r** value is less than **1**. In a **GP** series if the **r** value is less than **1**, then whatever the **answer will come**, it will be a **constant**. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/233799093-bd3fa76e-76d9-4891-895b-a5c38b60b8a1.png)
![image](https://user-images.githubusercontent.com/54589605/233799105-e0964632-54ed-45fe-a9fe-8f24303b5928.png)
![image](https://user-images.githubusercontent.com/54589605/233799123-f833db4b-3b72-4f63-8616-9651ad1970e8.png)

> If the exact answer is **n**, then we can write **upper bound** as **O(n * logn)**.

![image](https://user-images.githubusercontent.com/54589605/233799184-7e669bff-16f4-42a8-8326-77af95a44435.png)

> If a series is a **decreasing GP**, then the answer is **constant or O(1)**.

> If the **k** value is **log n**, then the **tree** contains **log n**  levels. The function is a **unary** tree, because of **one** function call.

> **log n**  level tree means stack size is **log n**.

> That **k** indicates, **stack size**.

![image](https://user-images.githubusercontent.com/54589605/233799656-382d187b-c493-44a9-93ea-8852cbf4d722.png)

> First level cost itself is **n**.

> Last level cost itself is also **n**.

* **Decreasing GP series** -> Whatever is the **first** term, final term is also **same**, because the people who came afterwards, they are **very small**, that's the reason.

* **Decreasing GP series** is a **GP** series where the **r** value is less than **1**.

> First term is almost the **answer** as later terms are almost **negligiable**.

> **GP** series, where the **r** value is less than **1**, it is called as **decreasing GP series** and the **final answer** is **constant**.

![image](https://user-images.githubusercontent.com/54589605/233800015-6b4fff64-699c-41af-b6e0-9968d4d271f6.png)

> If **constant**, then how we got **O(n)**, because **n** is outside of the series and **n * 1 -> n** only.

> **Recursion** means **tree** there and the **tree level** is **log n**.

> It is a **unary tree** because of **one** function call, which is **T(n/2)** everytime.

## Summary

> From the above problem, the **total sum** of a **decreasing GP series** is **1**.

![image](https://user-images.githubusercontent.com/54589605/233814340-b92070df-b303-41a5-9555-c658abe25879.png)

* No problem. **T(1)** is **10** now.

![image](https://user-images.githubusercontent.com/54589605/233814381-db6551f9-addd-4532-a593-b40a02ce5e3f.png)
![image](https://user-images.githubusercontent.com/54589605/233814410-eda3c456-5940-4c66-b8ee-57008474e8d5.png)

* No problem. **T(10)** is **10** now. Differ by only **constant**.

> We can take anything as the **termination** condition, because it differs by only some small **constant**

> **Termination** condition cannot have a **function**, it has to be a **constant**.

![image](https://user-images.githubusercontent.com/54589605/233815059-75e73a4a-fbed-4afc-b095-a8b881312330.png)

> In the above question, we got **n** as the non-recursive term for the **first level**.

> In the above question, we got **n** also as the non-recursive term for the **second level**.

> We got **n** as the as the non-recursive term for **first and second** level. 

## Note

* **First and second** level non-recursive term are **same**, which means **same** terms are coming. It is not a **series**. Further also, **same** will come. Series will not come.

* If **First and second** level non-recursive terms **differ**, which means **series** coming.

* If **First and second** level non-recursive terms **same**, which means **same** coming.

> Recursion having clear behaviour, either **everytime changing** or **everytime same or not changing**. 

## Note

* If **base** same, then **powers** we have to **add**.  [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/233815380-802e4a6c-8cb6-410e-9b14-136b2dd8bfac.png)
![image](https://user-images.githubusercontent.com/54589605/233815461-938a05b1-4b5c-4bd2-b025-ee06a6674ec5.png)

* **Third** term also is **n**.

* **First and second** level **same**, means **third** will also be **same**. This is **recursion**, a clear behaviour is followed.

![image](https://user-images.githubusercontent.com/54589605/233815537-d8000013-4a05-4de9-b63a-16fa3a71aa3d.png)
![image](https://user-images.githubusercontent.com/54589605/233815578-669cfdcd-dfa5-420e-92d4-dbe62c3bb85d.png)

> Everything should be in-terms of **three** only.

![image](https://user-images.githubusercontent.com/54589605/233815788-7290f49b-5fe9-4aa9-b584-3d0fbd3eef58.png)
![image](https://user-images.githubusercontent.com/54589605/233815794-d7bd8606-2d0c-4455-82ea-fcd9c4fdd615.png)

> **Theta** means **big-O and omega** also there.

![image](https://user-images.githubusercontent.com/54589605/233815852-895090fe-baaa-4402-a0c6-b607ba3697c2.png)

* Practice

* Recursive program time complexity, how to calculate?

1) Write Recurrence relation for **time**. Many Recurrence relation possible.
2) Using one of the **three** methods(substitution, master's,recursive tree method) to find the time complexity of the recursive program.

> If we apply everytime **sqrt(n) or n^(1/2)** in a loop, then we will get **log(log n)** as the **time complexity**.

![image](https://user-images.githubusercontent.com/54589605/233816232-4e7aacbf-b783-4ed6-a67e-a3239d21406c.png)

* i - 2 -> **n/2**
* i / 2 **OR** i * 2 -> **log n**
* everytime **root** operator **OR** i^(1/2) -> **log(log n)**.

* First non-recursive term is **n**. Every time **root or n^(1/2)**, then the **no. of levels** is **log(log n)**.

> **One** level cost is **n** and total levels is **log(log n)**. So, the total cost is **n * log(log n)**.

![image](https://user-images.githubusercontent.com/54589605/233816294-eb887dfe-82ee-4d79-a135-0680c274ccdb.png)

> Sometimes, it will **work**. Sometimes it will not **work**. May work and may not work. 

![image](https://user-images.githubusercontent.com/54589605/233268911-be152691-b35c-4371-8de6-3339c3790e29.png)
![image](https://user-images.githubusercontent.com/54589605/233816593-4d75210b-9c54-4670-bd4e-2af16bc05d26.png)
![image](https://user-images.githubusercontent.com/54589605/233816640-dd7494f8-078a-4771-a12f-505edf2c1d75.png)
![image](https://user-images.githubusercontent.com/54589605/233816820-169579ef-4903-478d-9e68-68a1dc972d4b.png)
![image](https://user-images.githubusercontent.com/54589605/233816823-450dc81c-6ff0-44af-a7ff-fed732f73d0d.png)

* All the **four** statements are **related**.

![image](https://user-images.githubusercontent.com/54589605/233816854-df58b724-7006-4a79-adff-cbb03c3b2d75.png)
![image](https://user-images.githubusercontent.com/54589605/233816887-b7ede2fa-7d73-4d4c-9509-0d553d511054.png)
![image](https://user-images.githubusercontent.com/54589605/233816942-8122d152-b95e-4249-9cba-116d8a04bafb.png)

* We can use any **one** of the above **four** statements as they all are **related**.

![image](https://user-images.githubusercontent.com/54589605/233817709-3c6e6c72-29f9-488b-bee2-18ee6f4dbef8.png)

> In **first and second** level, non-recursive term is **different**. The non-recursive term in the **first** level is **n** and on the **second** level is **n-1**.

* **Different** means **series** coming.

![image](https://user-images.githubusercontent.com/54589605/233817855-389c5de3-4355-470d-9771-ad5eb4792784.png)
![image](https://user-images.githubusercontent.com/54589605/233818010-bc7dfbf1-80a9-42b3-aa1f-613402420b7b.png)
![image](https://user-images.githubusercontent.com/54589605/233818046-23344188-c621-4fd7-a0f3-9303a8d0acdb.png)

* The **first part(2^0,2^1,2^2......,2^(n-2),2^(n-1)** of every term is a **GP**.
* The **second part(n-0, n-1, n-2,.....,3, 2, 1** of every term is an **AP**.

> It is a combination of **AP and GP** series.

![image](https://user-images.githubusercontent.com/54589605/233818137-fa3f7412-a9ea-4b95-98d2-97bf3492fbd5.png)

## Solving **AP and GP** series combination. [**IMPORTANT**]

> In the **GP** series, **r** value is **2**.

> In the **AP** series, **r** value is **1 or -1**. **2nd term** minus(-) first term. (-1 -0) -> (-1). Common difference is **1**.

1) Whatever is the **r** value in the **GP** series, here is it **2**, multiply it with the whole/total **series**. The power increases by **1**.

![image](https://user-images.githubusercontent.com/54589605/233818524-f0e647e3-fb72-4a73-b8c0-66c125d023ab.png)

2) After **multiplication** is over, **substract**, **T(n)** with **2T(n)**, which is **T(n) - 2T(2)**.

![image](https://user-images.githubusercontent.com/54589605/233818654-6296a828-ccf9-4757-bda3-860c08ca9e84.png)

* **AP and GP** series combination became **GP** series.

![image](https://user-images.githubusercontent.com/54589605/233818718-5a2e05b1-dd95-4ea3-bea3-e0386626d262.png)

* We got **Theta(2^n)**.

![image](https://user-images.githubusercontent.com/54589605/233818994-eb3290f9-a3ca-4709-a00b-cdfff6f141e0.png)

![image](https://user-images.githubusercontent.com/54589605/233819021-3a291c55-bb4d-492b-a224-e84b00755355.png)

* It is another **AP and GP** combination series.
* **First part** of every term is **AP** series and **difference(r)** is **10**. In **AP**, **substract**, second term by first term. **20 - 10 -> 10**. **Third** term by **second**, term and so on, **30 - 20 -> 10**

* **Second part** of every term is **GP** series and **r** is **2^2**. In **GP**, **divide**, second term by first term. **2^11/2^9 -> 2^(11-9) -> 2^2 -> 4**. **Third** term by **second** term and so on.

1) Multiply with the **r** value of **GP** series, so that the **powers** are **equal** and **substraction** will be **easier**.

![image](https://user-images.githubusercontent.com/54589605/233819236-b7252aaf-7e9e-4ec8-a9e3-dbf9144c8dc6.png)
![image](https://user-images.githubusercontent.com/54589605/233819262-7c117227-b1ce-4987-887b-38e3b2ce0e49.png)
![image](https://user-images.githubusercontent.com/54589605/233819273-c4fdca7f-4d60-473a-a69e-9f455af4b43f.png)

* If we are multiplying by **r** value, then all **powers** are **shifted** one position to the right, so that **GP** term powers are **equal** and we can easily **substract** the **AP** term. So, **AP** series is **cancelled** and we are left with **GP** series only.

![image](https://user-images.githubusercontent.com/54589605/233819338-965c61b8-297c-4816-9987-6ecb87d88949.png)
![image](https://user-images.githubusercontent.com/54589605/233819347-ed6e4b1c-261b-47f9-88c3-cac84a6b9504.png)

![image](https://user-images.githubusercontent.com/54589605/234887810-428b32d7-2bb9-4c78-9da0-c2ad0f74cc94.png)
![image](https://user-images.githubusercontent.com/54589605/234887828-59710426-16ff-4db0-a4ff-8fd21d72e953.png)
![image](https://user-images.githubusercontent.com/54589605/234887858-00cbbe1d-2fad-4008-9899-5c39082065d1.png)
![image](https://user-images.githubusercontent.com/54589605/234887897-bdb8a9fc-8d8f-44a6-8bab-94ac605b03cb.png)
![image](https://user-images.githubusercontent.com/54589605/234887931-da40d86d-b3cf-4009-8521-754bf57a311e.png)
![image](https://user-images.githubusercontent.com/54589605/234887952-e20b9f3a-c772-424d-bf48-191338d648e6.png)
![image](https://user-images.githubusercontent.com/54589605/234887973-186bf37e-e62e-4a5b-993c-4049e38af6f3.png)
![image](https://user-images.githubusercontent.com/54589605/234887991-25669ed9-27cd-4e16-a422-e956b0952c1d.png)
![image](https://user-images.githubusercontent.com/54589605/234888008-371e01a7-576b-41f0-bdaa-bb712517e0fe.png)
![image](https://user-images.githubusercontent.com/54589605/234888018-0f6d3787-d94a-4d41-a105-279543a77b7b.png)
![image](https://user-images.githubusercontent.com/54589605/234888049-47baec89-cd5f-4ca8-8f44-2672fff4201a.png)
![image](https://user-images.githubusercontent.com/54589605/234888081-4c6c8233-4ed1-4f68-8035-48938fc80c19.png)
![image](https://user-images.githubusercontent.com/54589605/234888102-2c052c8e-5d7e-46c3-83ae-f16dec2affc8.png)
![image](https://user-images.githubusercontent.com/54589605/234888131-da3180de-d513-4f39-b7c9-08e1f356e4ba.png)
![image](https://user-images.githubusercontent.com/54589605/234888155-698718b0-9847-42c7-96d9-f52ec9cdb31c.png)
![image](https://user-images.githubusercontent.com/54589605/234888207-fa4eec87-27eb-4c7d-a756-701830dbd610.png)
![image](https://user-images.githubusercontent.com/54589605/234888228-ec07d27b-8dff-4822-9122-d2ab52658880.png)
![image](https://user-images.githubusercontent.com/54589605/234888257-afe5bdb6-e09f-42d8-9ab5-40305685f941.png)


## Practice

![image](https://user-images.githubusercontent.com/54589605/233819352-857d2b46-889c-4790-b8a0-35ea2dc715a5.png)

* **Solved below**.

## GT-VI (17) [27th April 2023]

![image](https://user-images.githubusercontent.com/54589605/234893008-43b883e5-88ee-46d6-8de5-2310ba05ed85.png)
![image](https://user-images.githubusercontent.com/54589605/234894122-cbfca89f-4745-4782-95ad-ed91efa1ff29.png)

## Recursive Tree Method

* More than **one** function call.

> We are **dividing** by **two**, so we will see **log n** levels. The first level cost is **n** and every level cost is **n** as well. 

> As first level cost and second level cost is the **same**, which is **n**, which means that they are **same/equal**, so no **series** will be **formed/created**.

![image](https://user-images.githubusercontent.com/54589605/234905749-57ad9573-91b6-442b-ac1b-90b81961504c.png)
![image](https://user-images.githubusercontent.com/54589605/234906326-540da068-7280-4e6f-bdf7-5e29cf0e316e.png)
![image](https://user-images.githubusercontent.com/54589605/234912648-2c440ce0-dd2a-4e37-bfa6-1a93609f6697.png)
![image](https://user-images.githubusercontent.com/54589605/234912911-db2228de-4bbc-48fc-a396-89c68f05959c.png)

> So, the **time complexity** is **n  * log n** which is **n * (log n)**.

![image](https://user-images.githubusercontent.com/54589605/234913630-675d138a-61ab-4895-9c37-24b673188511.png)
![image](https://user-images.githubusercontent.com/54589605/234914175-c29c1502-42f9-42d7-af90-2f15b7a6d7a7.png)

> Because of always **divide by 2**, we got **log n** levels.

![image](https://user-images.githubusercontent.com/54589605/234914706-789c54d8-d5e7-4b3d-848c-e41e375c5d9a.png)


![image](https://user-images.githubusercontent.com/54589605/234916641-387680af-58f7-4c2f-8a59-9d80e6418bf0.png)
![image](https://user-images.githubusercontent.com/54589605/235089348-8cc59b44-c155-485d-9c21-6b8512a8aeff.png)

* **Divide by 5** is nothing but **multiply by 1/5**.
* **Multiply by 4/5** is nothing but **divide by 5/4**.

![image](https://user-images.githubusercontent.com/54589605/235089816-5a472128-dea9-49e0-8500-debfa0a9c0c7.png)

* Second level total cost is **n** also.

> As **first and second** level total cost are **same**, which is **n** only. So in the further levels, it is also **same**, which will be **n** only.

![image](https://user-images.githubusercontent.com/54589605/235090535-90d4a5b1-032e-4875-80a6-5e9a57a32f1d.png)
![image](https://user-images.githubusercontent.com/54589605/235090909-2ddce5a6-88b5-413e-b491-6acf88cd836d.png)

> **Left and right** side values are **different** because we are **dividing** by **different** numbers.

> **Left** base is **bigger** as it is **5**, compared to **5/4**, which is **5/4 -> 1.25**. 

> Whichever **base** is **bigger** that is **smaller**.

> **Base** is **small**, **bigger** value will come.

> **Base** is **bigger**, **smaller** value will come.

> As, **left** base is **bigger** so it has **smaller** value. So **right** is **bigger** as it has **smaller** base.

> **Left** stopped somewhere in the **middle** and **right** is still going.

![image](https://user-images.githubusercontent.com/54589605/235091531-24d400e8-fcb0-4063-91d5-3dec5bbaa618.png)
![image](https://user-images.githubusercontent.com/54589605/235092157-a4da8955-2978-400e-94f9-ef06b4f2fb19.png)

> In the **below** problem, the **base** difference didn't came because in both of them they were **divided by 2** only, so they were **same/equal**.

![image](https://user-images.githubusercontent.com/54589605/235092201-3af3249a-d29a-41c5-a01c-c3db4f4b2134.png)
![image](https://user-images.githubusercontent.com/54589605/235092750-f89b1dd4-a219-4567-bef4-eabe59af6110.png)
![image](https://user-images.githubusercontent.com/54589605/235092839-194d0ad4-a197-4b1b-a5ea-0ba7e7b5c08b.png)
![image](https://user-images.githubusercontent.com/54589605/235093104-8b9f4cb9-9097-40c8-aaf1-c203e1fc4f76.png)

* Every level cost is **n**.

![image](https://user-images.githubusercontent.com/54589605/235093994-d4577086-605c-4aec-a736-381851950898.png)

> We **added** something, so we will get **upper bound**, when we **add** something.

> We are **adding** all to get **n**.

> As we go down, **left** people are **decreasing/missing** so it will be **less than n**.

![image](https://user-images.githubusercontent.com/54589605/235094675-b5d205bb-5a13-4673-b95d-4f921fe9601c.png)

> After **adding** extra with the **white color part** at the bottom of the **left side**, after adding all we got **n**. It is called as **upper bound**.

* **Upper bound** means **right height** as it is **bigger**. So, until **right height** time, we **added 'n'**. 

![image](https://user-images.githubusercontent.com/54589605/235097244-ba485295-582a-4ed6-a826-fbd411e1a8d2.png)

* Right side is **bigger**, that's why **<=**.

![image](https://user-images.githubusercontent.com/54589605/235097525-95fa7f30-1209-4a3e-8859-355877c26f84.png)

> As we have **added** something, that's why it is **upper** bound.

![image](https://user-images.githubusercontent.com/54589605/235097927-66b5faa6-71b9-477d-9ace-410e3f60a93b.png)
![image](https://user-images.githubusercontent.com/54589605/235098134-a1e58097-88fa-43fb-a8fb-d5d0c0f4812b.png)

> If we **cut/substract** it, then we will get **less**. This is called as **lower bound**.

![image](https://user-images.githubusercontent.com/54589605/235098433-f9aefd26-f868-4042-9124-895013e29a49.png)
![image](https://user-images.githubusercontent.com/54589605/235098552-7e10d8b4-f0b2-4702-9058-bf10e7ab1e24.png)

* **Omega** is **lower bound**. Comparing with **actual** answer it is **smaller**.

* If we take **maximum** levels, then we will get **upper bound(O)**.
* If we take **minimum** levels, then we will get **lower bound(Omega)**.

> **Left** height has **lower** levels. So, it has **lower bound(Omega)**. As we have left out **something**, that's why it is called as **lower bound(Omega)**.

> **Right** height has **bigger** levels. So, it has **upper bound(O)**. As we have taken **extra**, that's why it is **upper bound(O)**. 

![image](https://user-images.githubusercontent.com/54589605/235099570-c0869671-2c10-412b-bdf4-f37048b95342.png)

> In the **above** question there was no question of **upper or lower** bound, as both the **left and right** heights were **same/equal**. No, **upper or lower** bound.

![image](https://user-images.githubusercontent.com/54589605/235099950-e7c72fe9-db6c-4871-82cf-cecf80f844d6.png)

> In the **above** question, **left and right** heights are **different**. That's why we cannot find out **exact** answer.

![image](https://user-images.githubusercontent.com/54589605/235100309-5a718cea-ebbd-4b5c-8acd-53327762d4d2.png)

> In the **above** diagrams, it is not possible to give **exact** answers. **Add** something to make a **nice diagram** so that we can give **answer**. 

> If **adding** not possible, then **cut/substract** something, then make a **nice diagram** so that we can give **answer**.

> So, whenever not possible, **add** something to give the **upper bound(O)**. 

> So, whenever not possible, **cut/substract** something, to give the **lower bound(omega)**.

> Whenever not possible, to give **exact** answer, atleast give **upper or lower** bound as **answer**.

![image](https://user-images.githubusercontent.com/54589605/235103739-62795f5a-1262-418f-b1a8-0385ca57a640.png)
![image](https://user-images.githubusercontent.com/54589605/235104314-3a51bebc-2a5d-4339-8d9f-fd6052c6b53e.png)

* **T(n)** is **smaller** than **n * (log n base (5/4))** and **T(n)** is **bigger** than **n * (log n base 5)**.

> So **T(n)**, lies betweeen **upper and lower** bound, as we **add** something to get **upper** bound and we **cut/substract** something to get **lower bound(omega)**.

> **Left** side is **smaller** and **right** side is **bigger**. **In-betweeen** is **In-betweeen**.

* **Left** person is **less than**, **T(n)**.
* **Right** person is **more than**, **T(n)**.

> **Left and right** sides, **differ** by only **constants** only and bigger functions are **same**.  

> So, **theta** is also possible, as they differ by **constants only**.

![image](https://user-images.githubusercontent.com/54589605/235105074-528ddd40-bc71-431b-9902-73880464614d.png)
![image](https://user-images.githubusercontent.com/54589605/235105475-0d2fe7ff-c696-4bf1-b348-63cd90cee175.png)
![image](https://user-images.githubusercontent.com/54589605/235105941-1363277d-d867-46d3-b52c-59c1b7bac2b9.png)

* Differ by **constants** only, so **theta** possible.

![image](https://user-images.githubusercontent.com/54589605/235106078-0a448e06-9b5d-47ad-8f03-9b42a16dd8c3.png)

> **Lower and upper** bound, differ by **constants** only.

![image](https://user-images.githubusercontent.com/54589605/235106512-c0d4e1b7-3dfc-4d21-a19f-e282f2eca4ec.png)

> In the above question, **left and right** height are **same**. So difference at all. Even **constant** also, no difference.

![image](https://user-images.githubusercontent.com/54589605/235106705-d6a9ad74-ac0f-4976-a825-9a3f04944ee3.png)

> In the above question, **left and right** height are not **same** but still **theta** possible as **difference** by **constant** also.

![image](https://user-images.githubusercontent.com/54589605/235107405-39bc43cc-730b-40c9-8820-f12c7b937aaf.png)
![image](https://user-images.githubusercontent.com/54589605/235107549-2d3c92df-be1d-4fea-9240-22de5bf02711.png)

> **Constant** difference so, we can write **Big-O and omega**.

> Same thing can happen for **n * (log n base 5)** also.

> The total levels in the tree is **log n base (5/4)**.

> **Stack space** means **no. of levels** in the Tree. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/235117640-18d26ea8-40fe-4ef4-a293-30bf8976f433.png)

* **Right** is **bigger** because **5/3** base is **smaller** than **5** base.

> First level cost is **n**. Second level cost is **n/5 + (3 * n)/5 -> (4 * n)/5**. So, first and second level costs are **different**, which means **series** coming.

![image](https://user-images.githubusercontent.com/54589605/235118760-92e19530-0ea9-4084-9897-bd64e4c65a16.png)

> To know, which **series**, we have to **expand** upto **3** times, then only we will get clarity.

![image](https://user-images.githubusercontent.com/54589605/235119087-5bcb97b5-8041-433e-a2b8-715a3aa80805.png)
![image](https://user-images.githubusercontent.com/54589605/235119406-2a651988-cf9f-441b-ae12-fa173b6132b9.png)

> To make **series** ok, we have to **add** something, and **adding** something leads to **upper bound**.

> To make **series** ok, we have to **cut/substract** something, and **cut/substract** something leads to **lower bound**.

![image](https://user-images.githubusercontent.com/54589605/235119742-0c20840f-63a5-407b-a77a-127e1e045b6e.png)
![image](https://user-images.githubusercontent.com/54589605/235119887-c6e9d2f5-bda1-421e-8c25-1e20836e7c67.png)

* Upper bound. **Red area** is **extra**.

![image](https://user-images.githubusercontent.com/54589605/235120050-01b07a9b-8e98-416d-8fcc-bf1d1f557d53.png)
![image](https://user-images.githubusercontent.com/54589605/235120188-9c8a4dcb-434e-4dca-bf96-8af3a0953e55.png)

* Lower bound.

![image](https://user-images.githubusercontent.com/54589605/235120253-8b543282-ea65-4f8a-934b-b72eae8c11ae.png)

> **GP** series, and **r** value is **less than 1** as **4/5** is **0.something**. So the whole thing will become **constant or O(1)**.

![image](https://user-images.githubusercontent.com/54589605/235120564-cdd34118-96ce-482a-965d-4cce63c2772c.png)
![image](https://user-images.githubusercontent.com/54589605/235121148-7c7a8aac-ced1-43ad-9ffa-f2a9a3813db3.png)

> Here, in the **above** question, **series** is coming.

> It is a **decreasing GP**. [**IMPORTANT**]

* In a **decreasing GP**, whoever is the first person, is the **answer**, the first person was **(4/5)^0 * n -> n** and we got **n** as the answer as well.

![image](https://user-images.githubusercontent.com/54589605/235121770-07f1161f-a880-4961-bd1c-92438cb395e5.png)
![image](https://user-images.githubusercontent.com/54589605/235121965-8bba2736-ba24-403f-a249-53cc11184cd4.png)
![image](https://user-images.githubusercontent.com/54589605/235122108-2738ccb4-d721-489e-af13-b7b21f8d081f.png)

> Asymptotically, both are **constant or O(1)** but mathematically **above one** is **bigger**.

![image](https://user-images.githubusercontent.com/54589605/235122427-dcd2d76b-e9c2-4e07-82b0-aff03356edef.png)

## Practice

![image](https://user-images.githubusercontent.com/54589605/235122636-4cd711c7-0367-4058-a04d-fc11bd1da708.png)

## GT-VII (18) [28th April 2023]

![image](https://user-images.githubusercontent.com/54589605/235143478-9eeb69c6-4889-451e-baf9-8ce74eb3251d.png)

> For the first level, the cost is **c**, where **c** is a **constant**. **c** is independent of **n**.

> For the second level, the cost is **2 * c**. So, first and second level costs are **different**, which means **series** coming.

![image](https://user-images.githubusercontent.com/54589605/235144637-2d8dd4ee-c1ce-4e6a-b652-f4a488216bdc.png)
![image](https://user-images.githubusercontent.com/54589605/235144822-41a260ef-97fd-4f68-9507-12ee235a0677.png)

* **Right** side or **log n base (5/3)** is **bigger**, since base **5/3** is **smaller** compared to **5** base.

![image](https://user-images.githubusercontent.com/54589605/235145515-3d4ea2ce-b38d-4b67-8b9d-894256f29578.png)
![image](https://user-images.githubusercontent.com/54589605/235146894-bb4a8af9-30f9-445b-95ee-55f16f931c44.png)

> **Big-O and omega** differ by **constants** only, which are the **bases** and they are **5/3 and 5**, which are **constants** only.

> In **n^(log 2 base (5/3))**, we will get **bigger** value for **(log 2 base (5/3)** as **base** is **smaller**. 

> In **n^(log 2 base 5)**, we will get **smaller** value for **(log 2 base 5** as **base** is **bigger**. 

> They differ by **base** only which is **constant** but they are in the **power** of **n**.

> In **power**, **differ** by **constants matter**. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/235148704-90b14f0a-011b-4cb5-9a0b-3b647970b99b.png)

> **n^2 and n^3**, differ by **constants** but **n^3** is **bigger** than **n^2**.

![image](https://user-images.githubusercontent.com/54589605/235147498-84be757f-0a49-4fc5-9fee-dced25c6660b.png)
![image](https://user-images.githubusercontent.com/54589605/235147404-c900b25c-ab9f-42ad-97c1-81e03a7e46bc.png)

> So the **bases** are in the **power** of **n**, so they **matter** and hence we cannot write **theta** possible.

![image](https://user-images.githubusercontent.com/54589605/235149060-648c7d0f-f55e-4550-8cd9-67004db1a19b.png)
![image](https://user-images.githubusercontent.com/54589605/235149220-ee99b84a-2072-495e-81df-1b4a51c7ad80.png)

> Constant difference in power. That's why we cannot write **theta** possible.

> Constant difference is not there, functional difference is there, because in **power**, **constant difference** is **functional difference**.

![image](https://user-images.githubusercontent.com/54589605/235149594-611ec2cb-c9d2-40b5-958e-740df91a285b.png)
![image](https://user-images.githubusercontent.com/54589605/235150360-ca1b7dbf-f00d-4fc7-99ba-f4e2a07ed678.png)

* Everytime **theta** possible?

> **NO**. Above question.

![image](https://user-images.githubusercontent.com/54589605/235152500-cfc2db68-7941-4feb-b209-6e36f2b6c7d7.png)
![image](https://user-images.githubusercontent.com/54589605/235155060-86fc69ae-631f-4426-a322-fa12e18af9c5.png)
![image](https://user-images.githubusercontent.com/54589605/235156535-5026e5bf-f437-4dd0-b9b7-ee46c3e97cb0.png)
![image](https://user-images.githubusercontent.com/54589605/235156874-62f6bf2d-353a-42d7-99e0-fbd4090b4d11.png)

> **Upper and lower** bound, both differ by constants only and the **constants** are **beside** or in **multiply** i.e they are not in **power**, so we can **ignore** them and say that **theta** is possible. 

![image](https://user-images.githubusercontent.com/54589605/235157338-6e1d44b5-34d9-4417-9e04-c7b445f0cac9.png)

> **T(n) = Theta(n^2)**, it is **True**. **Big-O and omega** are possible, so **theta** also possible. **T(n)** is the **actual** person.

![image](https://user-images.githubusercontent.com/54589605/235157879-7840809e-7f5f-462b-900c-20dc65a6d2d7.png)

> Only for **n^2**, **theta** is possible. For others, **theta** is not possible.

![image](https://user-images.githubusercontent.com/54589605/235158171-5f7de8ce-fc59-4ab7-bb42-b7868fff5608.png)
![image](https://user-images.githubusercontent.com/54589605/235158248-ba0b702d-67d6-4505-a337-07875c49eaea.png)
![image](https://user-images.githubusercontent.com/54589605/235158927-45952564-cb5b-44ed-a285-f7e0a5792996.png)

> **log n base 2** will give **upper bound** because **base 2** which is the **smallest** base.

> **log n base 4** will give **lower bound** because **base 4** which is the **biggest** base.

> In the above question, we can say definitely because it is an **increasing GP** series, where **13/12 -> 1/something** which is **greater** than **1**.

![image](https://user-images.githubusercontent.com/54589605/235160851-db8bdddb-46ff-4ec4-99cd-1d35c076f593.png)

> Everyone is **less** than **leftmost** one and everyone is **more** than **rightmost** one.

![image](https://user-images.githubusercontent.com/54589605/235161184-e6bd3de1-0e76-4f2d-9c1d-91b5fdc9f288.png)
![image](https://user-images.githubusercontent.com/54589605/235162812-e3d90ef8-2436-4789-9738-4d907e24f1e1.png)

> Both the **upper and lower** bounds differ by **bases** only, which are **constant** difference but the constants are present in the **power of n**, and constants present in **power** cannot be **ignored** and they matter. So, we cannot say that **theta** is possible, as the constants are present in the power.

![image](https://user-images.githubusercontent.com/54589605/235163337-e625c801-3d71-4fed-87cb-03c3fe86c11c.png)

> So **functional difference** is there. That's why we cannot write **theta**.

![image](https://user-images.githubusercontent.com/54589605/235164125-9d8c1897-8b49-4ea2-93b7-698ba83f75dd.png)

> After **3 rounds** are over, we got to know that it is an **increasing** series.

![image](https://user-images.githubusercontent.com/54589605/235164412-2264ae8b-c642-42bb-a875-60fbcf7a7be0.png)
![image](https://user-images.githubusercontent.com/54589605/235164973-69f49dc9-0c53-4bdb-9918-fac4d110a07d.png)
![image](https://user-images.githubusercontent.com/54589605/235165088-213278ca-e8a7-48fe-abc3-39b9936c02fb.png)

> It is a **series** and it is **increasing**.

![image](https://user-images.githubusercontent.com/54589605/235165867-20a099ce-8b99-4826-a7c0-16de391ee57d.png)

> Among all of them **middle** one is the **smallest** as it has **log n base 5** levels. Which gives us the **lower bound**. 

> Among all of them **left** one is the **largest** as it has **n** levels. Which gives us the **upper bound**. 

![image](https://user-images.githubusercontent.com/54589605/235166827-ad9afd3c-b699-4282-b765-77878c4ce55e.png)
![image](https://user-images.githubusercontent.com/54589605/235168762-c1fe14a1-d47f-4dd9-859f-06721996c28d.png)
![image](https://user-images.githubusercontent.com/54589605/235168960-761566bb-31f2-441b-bb5b-f868a6f0c12e.png)
![image](https://user-images.githubusercontent.com/54589605/235169040-b311c4e1-a3e9-4bfa-8204-aa6d65906a31.png)
![image](https://user-images.githubusercontent.com/54589605/235169129-aae719b6-23e5-4ca5-879f-76d2d273f37e.png)

> We cannot write, **theta** as **upper and lower** bound, differ.

## Master's Theorem

![image](https://user-images.githubusercontent.com/54589605/235170342-2debd372-6a4f-47d8-a6df-f6c16cb8730a.png)
![image](https://user-images.githubusercontent.com/54589605/235172299-9370cd82-d882-4d39-96e5-99c3b7f85640.png)
![image](https://user-images.githubusercontent.com/54589605/235172871-974c3c9c-e3d4-4902-83cc-58756f394bab.png)

* 'a' value -> 1,2,3, ........
* 'b' value -> 2,3,4,.............., 3/2 also possible. 

> **Integer constants** is not mentioned, only **constants** are mentioned. So, **3/2** also possible.

![image](https://user-images.githubusercontent.com/54589605/235173810-b8587d3a-9a46-47fe-9775-bf11d24351f6.png)

> **n** should be **non-negative** and **integer**. **n** is the **no. of inputs**.

![image](https://user-images.githubusercontent.com/54589605/235192204-64b389b2-f3f6-41cd-99a3-9de1eb08268a.png)

> There is no **minus(-)** operator. Master's theorem is not applicable for **minus(-)** operator. Go to **substitution** method.

> For more than one function call, master's theorem is not applicable. Go to **recursive tree method**.

![image](https://user-images.githubusercontent.com/54589605/235195347-72f68711-89d7-4300-b3f4-191f696fccd4.png)

> If any **recurrence** relation in the above format, then only use master's theorem.

![image](https://user-images.githubusercontent.com/54589605/235195774-66d9bf62-c012-463f-823f-bcbba1bdea87.png)

* Red ticks are **shortcuts**.

![image](https://user-images.githubusercontent.com/54589605/235195906-5383f6fe-57a6-4019-bd5e-c54898fd2cac.png)

> The given **recurrence** relation is in the master's theorem format.

![image](https://user-images.githubusercontent.com/54589605/235196061-5d62a224-2dcf-4059-befa-307cdbcaf060.png)
![image](https://user-images.githubusercontent.com/54589605/235196310-2532b31d-82c9-43b8-aaef-79c75fbe0d9b.png)

> Always talk about **right side** only.

> Right side person is **bigger** compared to left side person.

* Compare **left and right** side, whoever is **bigger**, is the **answer**.

![image](https://user-images.githubusercontent.com/54589605/235197207-e51ffe80-ef09-4b8d-aebf-5fdc01e9ca42.png)
![image](https://user-images.githubusercontent.com/54589605/235197543-198c1c7c-a367-4b90-884c-e8d6430c4a15.png)
![image](https://user-images.githubusercontent.com/54589605/235197856-661ae2f0-b5c9-46de-a592-6315935c8fd7.png)

* Compare **left and right** side, right is **bigger** by **polynomial** time.

* Whoever is **bigger**, is the **answer**.

* If we want to solve a **recurrence** relation using master theorem.

1) First check if it is there in the given format.
2) If Yes, then write **f(n)** on the **left** side.
3) On the **right** side, write **n ^ (log a base b)**.
4) Whoever is **bigger**, is the **answer**.

![image](https://user-images.githubusercontent.com/54589605/235198846-6903bb0b-1b57-47fe-ab62-f267ae44005c.png)

> **Right** side is **smaller**.

> So, **right** side is **smaller** by **polynomial** time.

![image](https://user-images.githubusercontent.com/54589605/235199471-d5beb709-59d4-4b21-aae6-f9e0ec6fc732.png)

> **Right** side is **smaller** by **polynomial** time.

> **Right** side is **small**, to make it **equal**, we multiplied it with **n**.

![image](https://user-images.githubusercontent.com/54589605/235199932-d71f7958-fc7b-49ea-9f7e-e6668d4df456.png)
![image](https://user-images.githubusercontent.com/54589605/235202009-de97fafe-c2e9-4653-a2ba-85f9a1bfe840.png)

> Whoever **bigger** is the **answer**.

![image](https://user-images.githubusercontent.com/54589605/235202239-cffb8d30-e655-4959-8675-809f32d0b282.png)

* Right is bigger.

![image](https://user-images.githubusercontent.com/54589605/235202301-128cc1c1-8706-4a4f-af7c-93ff7b06868a.png)
![image](https://user-images.githubusercontent.com/54589605/235202396-33724b13-26ba-4b17-8632-fb55749c02c7.png)

* Left is bigger.

> In all of the above questions, either **left or right** is **bigger**. How much **bigger/smaller**?, we will get from the **right** side only.

![image](https://user-images.githubusercontent.com/54589605/235202687-eeee49e3-9a98-426b-ab46-7e0fd9173e5f.png)
![image](https://user-images.githubusercontent.com/54589605/235203007-5513b55a-11d5-44a9-b2f7-f86ae5cefc2a.png)

* Because of **big** on the right side, to make it **equal** to the **left side**, we will do **division**. **Division** is nothing but **power substraction**.

![image](https://user-images.githubusercontent.com/54589605/235203178-51081555-834b-40a3-a74c-5e05bd3eed12.png)

* Because of **smaller** on the right side, to make it **equal** to the **left side**, we will do **multiplication**. **Multiplication** is nothing but **power addition**.

* In all of the **above questions**, the **right side person** is either **bigger or smaller** than the **left side person** by **polynomial** times.

* If a **recurrence** relation is given, calculate **left and right** side. After calculation done, whoever is **bigger** is the **answer** but before writing the answer, confirm one more thing. Ask the **right** side, if it is **bigger/smaller** by **polynomial** times. If **YES** then, whoever is **bigger** is the **answer**, **confirmed**.

![image](https://user-images.githubusercontent.com/54589605/235204596-c10c6443-e94b-44c8-91f6-c320dc0a424b.png)
![image](https://user-images.githubusercontent.com/54589605/235204639-275d29f4-396a-4323-a6e0-3aa80da42cc1.png)

* If the condition, **bigger/smaller** by **polynomial** is **satisfied**, then only whoever is **bigger** is the **answer**, **confirmed**.

* If the condition, is **not satisfied**, then we cannot take whoever is **bigger** as the **answer**.

> Master theorem is saying that, comparing **left and right**, if **right** is **bigger/smaller** compared to the **left** by **polynomial** times, then only whoever is **bigger** is the **answer**, **confirmed**.

> Otherwise, we cannot take whoever is **bigger** as the **answer**.

![image](https://user-images.githubusercontent.com/54589605/235206090-220594f6-5011-4716-88a4-bda3906fc6ec.png)
![image](https://user-images.githubusercontent.com/54589605/235206247-3c04bb44-56d1-420b-9efd-4b94e0fe9ce8.png)

> In the **first** case, we are doing **division**.

> In place of **c**, the formula has **E**.

> It is **divided**, because **right** side **bigger** compared to left side.

> **Right** side is **bigger** by **polynomial**, then whoever is **bigger** is the **answer**, **confirmed**.

![image](https://user-images.githubusercontent.com/54589605/235206921-2d65fab0-2525-45a7-a020-408774c1343b.png)
![image](https://user-images.githubusercontent.com/54589605/235207413-72b820eb-1540-4cc3-9fc4-ec079acd5fda.png)

> In the **3rd case**, we are doing **multiplication**, as the **right** side is **smaller** by **polynomial** compared to the left side.

![image](https://user-images.githubusercontent.com/54589605/235207528-6b70a859-1a9f-4d10-8e6f-4abe70aeb57b.png)

> So, the **answer** is, whoever is **bigger** is the **answer**.

* In **case 1**, we are doing **division**, **minus(-)** means **divide**, because **right** side is **bigger**. So, **n^(log a base b)** is **bigger**. So, whoever is **bigger** is the **answer**.
* In **case 3**, we are doing **multiplication**, **add(+)** means **multiply**, because **right** side is **smaller**. So, **f(n)** is **bigger**. So, whoever is **bigger** is the **answer**.

![image](https://user-images.githubusercontent.com/54589605/235208237-c2666efb-a145-450b-8a8d-eb2f7ab9c6e9.png)
![image](https://user-images.githubusercontent.com/54589605/235208671-28389877-e793-4f4c-8c75-64a99669797e.png)
![image](https://user-images.githubusercontent.com/54589605/235208777-c46d4eae-c71e-467b-ae79-67ca5076316b.png)

> **Left** is **bigger**, as we have to **multiply**, **log n** on the **right** side. So, **right** side is **smaller** compared to the left side.

> Right side person is **smaller** than the left side, as right is **smaller**, we have to **multiply**. How much **smaller**? We have to **multiply**, **log n** to make both the sides as **equal**. **log n** is **not polynomial**, it is **logarithmic**.

> Because of the **above reason**, that it is **not polynomial** and it is **logarithmic**, immediately come back and **remove** the previous answer which is **Whoever is **bigger** is the **answer**.**.

> If **bigger/smaller** by **polynomial** then only **master theorem** will work out. 

> If also **bigger/smaller** by **logarithmic** times, then also **master theorem** will not work out.

![image](https://user-images.githubusercontent.com/54589605/235209984-56c8463b-3066-45eb-a92d-2e3a20f7c9f8.png)
![image](https://user-images.githubusercontent.com/54589605/235210432-79ccddc9-debb-46ee-8f6c-25eba293cf9e.png)

> The actual answer is **n * (log n)^2**.

![image](https://user-images.githubusercontent.com/54589605/235210911-9cb5ae1f-d76c-40fa-a5fa-4e3534af7494.png)
![image](https://user-images.githubusercontent.com/54589605/235210981-7b42eba4-b021-4468-bba1-e7921d396800.png)

* Must be **polynomial** times **smaller/bigger**.

> Apply **substitution method** to get **actual/correct** answer.

![image](https://user-images.githubusercontent.com/54589605/235211846-eb2480bd-39ab-4b84-9a95-94555069f2e6.png)

> They are **equal**. Whenever they are **equal**, we have to do one thing.

> Whenever both are equal, go **right** side. In the **right** side, attach some **(log n)^0**, so that both sides are still **equal**.

> Take the **same** thing which is present on the **right** side as the **answer** and add **+1** to the **power** of **log n**. So, the answer will be from **n * (log n)^0** to **n * (log n)^(0+1) -> n * (log n)^1**.

![image](https://user-images.githubusercontent.com/54589605/235213073-8eabc90f-ac28-40d7-a8d9-be03c29734cd.png)
![image](https://user-images.githubusercontent.com/54589605/235213466-890474ba-a5e4-4f8c-ab34-d55f9f6cc88b.png)

* This is the **answer**.

> Whenever **both are equal**, on the **right** side, attach some **(log n)^0**, so that both sides are still **equal**. So, the **answer** is, whatever we have written on the **right** side, take as it is and add **+1** to the **power** of **log n**.


![image](https://user-images.githubusercontent.com/54589605/235212008-f8393dc4-3ed1-46cb-a8d8-9a6f200441eb.png)

* In **first case** of master theorem, it is **big-O**, which means **right** is **bigger**.
* In **last/third case** of master theorem, it is **omega**, which means **right** is **smaller** or **left** is **bigger**.
* In **second case** of master theorem, it is **theta**.

![image](https://user-images.githubusercontent.com/54589605/235213706-44771359-b547-4cd7-bc5c-18d590b17aea.png)

* **Case 1 and case 3** fail because **right** side is not **polynomicall** bigger than the left side and it is not **polynomicall** smaller than the left side. It is **logrithmically** smaller than the left side.  

![image](https://user-images.githubusercontent.com/54589605/235214022-d4cad58c-7c4a-469f-9837-1f8b5b4c6839.png)

> We can attach some **log n** power something on the right side to make **both** the sides as **equal**. 

> We can attach **(log n)^1** on the right side to make **both** the sides as **equal**. 

> Then, the **answer** is take whatever is there on the right side and add **+1** to the power of **log n**.

![image](https://user-images.githubusercontent.com/54589605/235214516-33373ebc-bcc1-485b-839d-590dc8c2d671.png)
![image](https://user-images.githubusercontent.com/54589605/235214641-9f96ff05-4b96-4c52-851e-6cec113e007c.png)

> So the **answer** is **n * (log n)^2**.

* **Case 2** is meant for, between **f(n) and n^(log a base b)**, if **no difference** at all and **logrithmetic** difference(smaller), then go to **case 2**.

![image](https://user-images.githubusercontent.com/54589605/235215276-2b474683-6fab-45a5-affd-92a84ae58e3d.png)
![image](https://user-images.githubusercontent.com/54589605/235215450-db54c540-10cb-47c9-90fe-52dd538b782e.png)
![image](https://user-images.githubusercontent.com/54589605/235215702-48fd82cf-8925-45d1-8b4d-746362d1735c.png)

> **Left and right** side are not **equal**.

> By **multiplying** **(log n)^8** on the right side, we are getting both the sides as **equal**, which means right side is **logrithmetically* smaller than the left side. So, we will go to **case 2**.

> So the answer is take whatever on the right side and **add(+1)** to the power of **log n**. The answer is **(log n)^11**.

![image](https://user-images.githubusercontent.com/54589605/235216410-c0445b31-0fa5-495c-b422-a7128155076f.png)
![image](https://user-images.githubusercontent.com/54589605/235216770-295b3763-c067-4bdb-9221-7fe711264783.png)

* **Case 2** when they are **equal** or the right hand side person is **smaller** by **logarithemetic**.

![image](https://user-images.githubusercontent.com/54589605/235216938-d394f26c-5a85-454d-92f5-74f760ee24d2.png)

> By **multiplying** with **log**, **both** are **equal**. So, right side is **logarithemetically** **smaller** than the left side.

> Only **multiply** no division here.

![image](https://user-images.githubusercontent.com/54589605/235217305-3a492da8-276f-4f93-858d-ea52e2a8a56f.png)
![image](https://user-images.githubusercontent.com/54589605/235217353-d1518a58-c0eb-449b-961c-6efd0ca8c882.png)

> We made **left and right** equal by **multiplying** by **log n**. **Multiplying** means **right** is **smaller**.

![image](https://user-images.githubusercontent.com/54589605/235217631-db35cf18-dee0-4874-8ccc-c743d193f79d.png)

> By **multiplying** with **log n or logarithemetic**, both sides are **equal**.

![image](https://user-images.githubusercontent.com/54589605/235218020-69583458-34b4-4678-a49e-fc18df829fce.png)

> **Case 2** will work for when **both** the sides are **equal** as well, when we take **k=0** value, which is **(log n)^k -> (log n)^0**.

* **Polynomial** time, **bigger/smaller**, then whoever is **bigger** is the **answer**. **Case 1 or 3**.
* If **equal(no difference)** or **logarithemetic** time, **smaller** then **case 2**.

> **Logarithemetic** time, **smaller** because we are **multiplying**.

![image](https://user-images.githubusercontent.com/54589605/235218888-1b2688f8-48ea-4d80-ab4f-4ca0ce328193.png)
![image](https://user-images.githubusercontent.com/54589605/235219624-082aaa2a-0a9e-4df9-89c8-c326aba07159.png)

> Not possible as **a and b** are **constants**.

![image](https://user-images.githubusercontent.com/54589605/235219989-ca9def86-93e3-4d6d-bb65-52a4c6d9a3e3.png)

> **k > 0**, **k** cannot be **negative**.

![image](https://user-images.githubusercontent.com/54589605/235220066-41acbe21-50c1-46c0-8454-7b09bcfc042d.png)

> We cannot take **negatives** as powers.

![image](https://user-images.githubusercontent.com/54589605/235220176-96fdda44-5646-4b0b-b5d1-d77a138e6b41.png)
![image](https://user-images.githubusercontent.com/54589605/235220353-10687e4c-57e1-4ee2-b6ca-46fd58e56626.png)

> **k=-3** then only both sides are **equal**.

> Right side person **bigger** by **logarethmetic** will not work out.

> Right side person **smaller** by **logarethmetic** then only it will work out.

![image](https://user-images.githubusercontent.com/54589605/235220683-50dd5add-fe1b-4f01-bd97-6fd911052b58.png)
![image](https://user-images.githubusercontent.com/54589605/235220716-e853e2f9-023a-4bf4-8c1a-b53ec7cc5734.png)
![image](https://user-images.githubusercontent.com/54589605/235220730-03008096-e002-43d9-b7e5-54bfe3d4cd01.png)
![image](https://user-images.githubusercontent.com/54589605/235220767-c71005eb-05b5-46b8-9a23-113414a98903.png)

* For **Case 2** of master's theorem, it should be **equal** or **right small** by **logarethmetic**.

![image](https://user-images.githubusercontent.com/54589605/235220875-c2c0f3f1-42c4-4de9-ab8b-482f6a82b392.png)

* If **exponential** difference then only **case 1 or case 3**.

![image](https://user-images.githubusercontent.com/54589605/235221310-63e95da7-bd3f-4a99-b34d-2d80a34193a1.png)

> **Right** is **bigger** by **exponential** times. **2^n** is more than **polynomial**.

> **Polynomial** is **ok** and more than **polynomial** is also **ok**. So, **master theorem** will work.

![image](https://user-images.githubusercontent.com/54589605/235221378-572256dd-a505-4adc-bf13-61d8127d04fb.png)
![image](https://user-images.githubusercontent.com/54589605/235221636-a0fec0e0-31ad-4a0d-aad4-94ecaeffc39b.png)

* Whoever is **bigger** is the **answer**.
* n, n^2, n^3 all are **polynomial**.

![image](https://user-images.githubusercontent.com/54589605/235221956-0d03ab12-26b3-4aa1-aa58-4e9c764b0132.png)

> **Right** side is **bigger**, and it is **bigger** by **n * log n**. So, **n * log n** is **polynomial** as **n, n^2, n^3** all are **polynomial**, so **in-between** also, **n and n^2** where **n * log n** stays is also **polynomial**.

![image](https://user-images.githubusercontent.com/54589605/235222258-6dd173c0-fed9-4c84-9483-b5c553fc1bb3.png)
![image](https://user-images.githubusercontent.com/54589605/235222320-cfe44b71-9c32-434f-a936-834acad286f3.png)

> Master's theorem possible. **n and n^2** are **polynomial**, so **in-between** also **polynomial**.

![image](https://user-images.githubusercontent.com/54589605/235222466-5c3d7698-32a0-4b0d-b2e2-d7681aa0daa8.png)
![image](https://user-images.githubusercontent.com/54589605/235222750-bcc99c56-3717-440a-9423-734a5c30dbed.png)
![image](https://user-images.githubusercontent.com/54589605/235222834-b4b1de2f-9d0b-4467-a15f-1859e812e3fd.png)

> **Right** side is **bigger** by **exponential** of **n^(n-1)**.

![image](https://user-images.githubusercontent.com/54589605/235222902-ef02043c-d57f-4c88-9547-42aff0a444c5.png)

* **2^n** is not **constant** and **a** should be a **constant**. 

> Because of this reason **Theta(n^n)** is **wrong**.

![image](https://user-images.githubusercontent.com/54589605/235223151-b536155f-d06b-4dda-8601-c53a36725df8.png)
![image](https://user-images.githubusercontent.com/54589605/235223112-5405ddfd-0e9a-4554-b273-2b6485652b3d.png)

## Questions

![image](https://user-images.githubusercontent.com/54589605/235282049-f260093e-de7b-488c-9055-46256583bb90.png)
![image](https://user-images.githubusercontent.com/54589605/235282053-3e548185-d430-4661-ba11-962713a595ae.png)
![image](https://user-images.githubusercontent.com/54589605/235282055-596cffec-4a8b-409a-a2f3-25caa9f4ceaf.png)
![image](https://user-images.githubusercontent.com/54589605/235282079-4d558c8b-ae00-4709-9c54-41023ce3c2dc.png)
![image](https://user-images.githubusercontent.com/54589605/235282085-d6b26aaf-a3bb-4acc-a59c-6d67f5cb9dc9.png)
![image](https://user-images.githubusercontent.com/54589605/235282088-6347778f-8b59-4283-b289-97fcb0c3e279.png)
![image](https://user-images.githubusercontent.com/54589605/235282090-054c9160-56dd-45af-9d6c-d547faff8dc1.png)
![image](https://user-images.githubusercontent.com/54589605/235282095-b638fd66-43f5-4be8-a1d8-a209575c5739.png)
![image](https://user-images.githubusercontent.com/54589605/235282098-9a3d22be-4ef1-472f-a079-21b3a1ffb8b4.png)
![image](https://user-images.githubusercontent.com/54589605/235282102-178dd3d7-919c-4f30-a8db-bdf80f69c684.png)
![image](https://user-images.githubusercontent.com/54589605/235282105-07628c8b-7338-4f53-8724-f894c4673098.png)
![image](https://user-images.githubusercontent.com/54589605/235282110-343a2dff-a215-456f-a4d9-87a161a3e47f.png)
![image](https://user-images.githubusercontent.com/54589605/235282113-08fcb891-2871-4ee7-a7a8-6d6b3324e232.png)
![image](https://user-images.githubusercontent.com/54589605/235282116-9816f085-bca9-4eda-9798-f92fabd35a69.png)
![image](https://user-images.githubusercontent.com/54589605/235282120-a427f7f4-a897-4690-be2c-aadb0ada4f9c.png)
![image](https://user-images.githubusercontent.com/54589605/235282126-fc30d8f0-5e94-4d9a-944f-8e05a08cb1d4.png)
![image](https://user-images.githubusercontent.com/54589605/235282129-04653e88-f7fb-4f82-97a9-47733ea43976.png)
![image](https://user-images.githubusercontent.com/54589605/235282134-c70c0fd1-6282-4025-8696-05b5df843ac7.png)


## DAC-IV (19) [29th April 2023]

![image](https://user-images.githubusercontent.com/54589605/235282322-61c39e5d-b08b-4230-abcf-591405b429f4.png)
![image](https://user-images.githubusercontent.com/54589605/235282364-0ceac59a-e9cc-4db4-97e2-0cb666fd4d0d.png)

* **No difference** also **case 2** and **log or logrametric difference** also **case 2**.

![image](https://user-images.githubusercontent.com/54589605/235282500-3134efe0-4a81-481d-99c8-221c0c82edca.png)
![image](https://user-images.githubusercontent.com/54589605/235282502-71ca36c1-5f22-40cc-8feb-87cb4cc094b0.png)

> When we say, master's theorem, **divide** should be there, but there is **no divide**.

> **We cannot apply master's theorem**, because **divide** is not there. 

* **Divide** should be there when solving with master's theorem.

> If we convert it into the **required** form then we can apply **master's theorem**.

* The **required format** is **a * T(n/b) + f(n)**.

> Convert into the above required format.

> The purpose of the above question is to help solve questions when **recurrence relation** contain **root operator**, then using **master's theorem**, how we will **solve** it. 

> **Worst case** is we can go for **substitution** method.

> As it is not there in the **master's theorem** form, convert it into the **master's theorem* form, which is **a * T(n/b) + f(n)**.

* Steps to **convert it**.

1) Assume, **n= 2^k**.

![image](https://user-images.githubusercontent.com/54589605/235282824-636ab9d5-53d6-4dda-a9eb-5f79df19df3f.png)

2) Assume, **T(2^k) = s(k)**. We are mapping **T function** to **s function**. In the **power** whatever there in the **T function**, comes to the **s function**. Whatever leftout will go to **s**.

![image](https://user-images.githubusercontent.com/54589605/235282877-cf64f32e-18df-4fe4-9d02-14d4dc10011a.png)
![image](https://user-images.githubusercontent.com/54589605/235282889-8491422e-f2cc-464a-a116-4918e520f907.png)

> If **T** comes, then only **s** comes.

![image](https://user-images.githubusercontent.com/54589605/235283278-c17cc93a-ac98-4fed-bb0c-879129e82b10.png)
![image](https://user-images.githubusercontent.com/54589605/235283321-b42a4729-fabf-4a39-b71b-7a389d429f5c.png)

> Directly we cannot solve the recurrence relation, **convert first**.

> Now apply **master's theorem**.

> **k** is a **function**.

![image](https://user-images.githubusercontent.com/54589605/235283482-5500e443-54ca-49df-8752-19a6b36d4299.png)

> Left is **bigger** because on the left **k** is a function and on the write **c** is a **constant**.

> Right side **c** is **smaller**, it is **smaller** by some **k**. Then only **both** sides are **equal**.

> Comparing left and right side, right side is smaller by **k** times, where **k** is a function. **K** is a **polynomial** because, **k** is there in terms of **function**.

![image](https://user-images.githubusercontent.com/54589605/235283584-48e66d8a-a8be-4a38-99b5-9bd25f04d064.png)
![image](https://user-images.githubusercontent.com/54589605/235283669-f2cd4eab-4a78-4a3d-b47e-899b3dcfc21d.png)

> Given problem is there in the form of **n**.

> We have to **convert** whatever answer we got in the form of **n**.

3) Now do, **step 2** in **reverse** order. **No s** there, then **no T** will come. Where ever **s** there, keep **T**.

![image](https://user-images.githubusercontent.com/54589605/235283790-a2799a29-628e-41c8-b2f2-dde1ddae4eaf.png)

4) Now do **step 1** in **reverse** order. We know **n = 2^k**, so we will find the value of **k**, which is **k = log n base 2**. Where ever, **k** there, replace it by **n**.

![image](https://user-images.githubusercontent.com/54589605/235283951-6dff96f4-d454-4e06-a854-794241e855fd.png)

> After **converting** into **master's theorem**, please **solve** master theorem **format**. Why solving **master's theorem**, don't worry about **k** value, some **function** is there in the form of **k**, solve it.

![image](https://user-images.githubusercontent.com/54589605/235285337-30233c0d-cde0-46f0-88cf-4c04000b4c47.png)
![image](https://user-images.githubusercontent.com/54589605/235285469-2288803f-9d71-43ac-a890-fa80e277ae7b.png)

> We got the **master's theorem** format now.

> While applying **master's theorem**, don't bring **before and after**.

> The function is in the form of **K**, **YES**.

![image](https://user-images.githubusercontent.com/54589605/235285815-831334d9-b4bf-412b-9b8b-fbb9c39b82c7.png)
![image](https://user-images.githubusercontent.com/54589605/235285838-1f4f2f92-c09c-4fd5-ab66-51e581aa00d2.png)

> We want **answer** in the form of **n** as it was given in the question in the form of **n**.

* 3rd step **reverse** is **2nd** step.
* 4th step **reverse** is **1st** step.

![image](https://user-images.githubusercontent.com/54589605/235285938-39629b47-9194-4b91-897e-98efc92e0d43.png)
![image](https://user-images.githubusercontent.com/54589605/235286353-d980e350-84f2-4aee-ac2e-7bf425ecbb93.png)

> Both the sides are **equal**, so **case 2** and we can multiply with **(log k)^0**, to keep both the sides as **equal** only still. We are multipling with **(log k)^0** and not **(log n)^0** because **function** is there in the form of **k**.

> If we are multipy with **(log n)^0*, then it is **wrong**. Here, we only know about **k** as **function** is there in the form of **k**.

![image](https://user-images.githubusercontent.com/54589605/235286531-70b0e5f5-16ac-4616-9245-0b8f1583bd71.png)
![image](https://user-images.githubusercontent.com/54589605/235286572-0b4cde3f-db3e-467e-bea0-1b71b046047f.png)
![image](https://user-images.githubusercontent.com/54589605/235286626-dd4c5fd0-5610-4795-b6b4-17d905090eee.png)

* Recurrence relation for **time**.

![image](https://user-images.githubusercontent.com/54589605/235286676-95bba476-03a7-4b38-a428-08e3c2a7a0d3.png)

> First and second level costs are **different**, so **series** coming.

![image](https://user-images.githubusercontent.com/54589605/235286869-d6b3cc19-bb58-4b82-9b16-2a1003c9383a.png)

> Upper and lower bound differ by **constants** but that **constant** is in the **power of 2**, so it becomes a **functional** difference and we cannot **ignore**. So, we cannot say that **theta** is possible.

![image](https://user-images.githubusercontent.com/54589605/235286985-b06a6cb6-5c90-446a-9aa2-be6bac558295.png)
![image](https://user-images.githubusercontent.com/54589605/235286974-f51a8554-f589-47b4-979e-99cdc5f8151f.png)

> If **both** upper and lower bound are there in the **answer**, then the **answer** is **both**.

![image](https://user-images.githubusercontent.com/54589605/235287065-6eaa6b84-99ff-4a3c-8d33-559eb29bc006.png)
![image](https://user-images.githubusercontent.com/54589605/235287078-c5910ddb-4a18-4f6b-bcc7-5787bf338697.png)
![image](https://user-images.githubusercontent.com/54589605/235287082-8f433984-436a-4874-8edb-ec56b6bcbe86.png)
![image](https://user-images.githubusercontent.com/54589605/235287092-4eebd423-eedb-4a5e-bdc7-01893584c35c.png)
![image](https://user-images.githubusercontent.com/54589605/235287100-128910c8-57dd-4ec8-b66e-4a590548a882.png)

![image](https://user-images.githubusercontent.com/54589605/235287165-771cc606-8117-40be-a3ff-05cbf86e1601.png)

> **T(n)** is **in-between**.

> Comparing **T(n)**, **2^n** is **bigger**, so **big-O**.

> Comparing **T(n)**, **2^(n/2)** is **smaller**, so **omega**.

> We are not sure if  **T(n)** is **Big-O or omega**, that why we have not written **theta**.

![image](https://user-images.githubusercontent.com/54589605/235287237-8d8ae822-f080-4469-b11a-86b2b14871ae.png)
![image](https://user-images.githubusercontent.com/54589605/235287291-c039cd53-74ed-4e44-b483-92a45f84c3d8.png)

## DP-I (20) [29th April 2023]

## Divide and Conquor

![image](https://user-images.githubusercontent.com/54589605/235288298-b2f59af5-da49-4a50-8b2f-5a878921c802.png)
![image](https://user-images.githubusercontent.com/54589605/235288295-38aa7c43-25da-4ad1-b143-c2f64b701e86.png)

> We are calling **two** times. So it may give **binary tree**.

![image](https://user-images.githubusercontent.com/54589605/235288347-3819cc30-851d-4d9e-b458-33e809a90517.png)

> There are **4** function(small, solution, divide, combine) calls which are not **recursive**. 

> The above **4** function codes are **outside**.

![image](https://user-images.githubusercontent.com/54589605/235288437-0419e435-affc-4f8e-b652-b6ca240bcbb0.png)

* i -> First element index
* j -> Last element index
* a -> Array, which contains elements from i to j.

> We want to **sort** the array, using **divide and conquor**.

* small function -> Will check if the problem is small or not. Return **1** means problem is **small**. Return **0** means problem is not **small**. 

![image](https://user-images.githubusercontent.com/54589605/235289395-e5c2155c-501f-4f61-a2df-870140f65c3e.png)
![image](https://user-images.githubusercontent.com/54589605/235289493-f00f4f43-ff3b-4314-b909-dee63705bdfc.png)
![image](https://user-images.githubusercontent.com/54589605/235289683-9c5cc719-2542-4a60-847a-03613038627b.png)

> A Recursive function without **if(termination condition)** part will give **stack overflow** error message.

![image](https://user-images.githubusercontent.com/54589605/235289829-1fa10bea-b177-4aeb-a5c8-762752f01fa6.png)

> Divide and conquor doesn't mean, we will divide bliendly or divide everytime. First verify **small** or not. If not small, then divide. Don't divide everytime.

> There are **4** non-recursive function calls and out them, **2** are in the **if** part and **2** are there in the **else** part.

> As **2** functions belong to the **else** part, there is chance of **for** loop. Inside **divide**, **for** loop maybe there.

> Inside, **Divide()** there is **one** for loop running till **n** times. Then the time complexity is **n**.

> Inside, **Combine()** there is **two** for loop running till **n** times each. They are **inner** loops. Then the time complexity is **n ^ 2**.

> If no loop is there, then the **time complexity** is **constant**.

> Inside **Small() and solution()**, there are **no loops**. But inside **Divide() and Combine()**, loop maybe there.

![image](https://user-images.githubusercontent.com/54589605/235290221-ee6784b3-7bcd-4da1-befc-9e9b31e33f7e.png)

> **Combine()** code executed means **Combine()** code is **over**.

* Small() -> **True** -> Solution() 
* Small() -> **False** -> Divide() -> Combine()

> This is **Divide and Conquor** abstract algorithm.

![image](https://user-images.githubusercontent.com/54589605/235291467-cc1776f1-3596-48b2-ac1a-98690be618eb.png)

* Code is **hidden**.

* **Divide and conquor** doesn't mean we will **divide** directly, first verify it is **small** or not. Don't divide directly.

![image](https://user-images.githubusercontent.com/54589605/235291592-81d6da76-6d33-43c9-aa64-7f8abcdf3459.png)

* Getting **sub-problem** solutions using **recursion** is called as **conquor**.

![image](https://user-images.githubusercontent.com/54589605/235291638-b7110de4-2026-4013-9de8-ccba94750593.png)

* First **divide**, now we got **sub-problems**, **conquor** will solve the **sub-problems**. **Conquor** goal is to get **sub-problem** solutions using **recursion**. **Combine** is **multiplication**. After getting the **sub-problem** solutions, **multiply**, that is called as **combine**.

![image](https://user-images.githubusercontent.com/54589605/235291769-cfd2a990-2fd7-4ebd-80be-080d3e811f8d.png)

* F(5) = F(4) + F(3)

> F(5) is divided into two parts, F(4) and F(3), it is **divide**.

> Solve F(4) and F(3), individually. It is **conquor**.

> Now, **combine**, here for F(5), **combine** is **addition**. 

![image](https://user-images.githubusercontent.com/54589605/235291912-aa805729-4cf4-4460-bdae-d3096495b437.png)

* From problem to problem, **combine** will change.

> **Combine()** code **inputs** are **sub-problem** solutions, which are **b and c** here.

> **Combine()** code **output** is **total problem** solution which is **d** here.

![image](https://user-images.githubusercontent.com/54589605/235292023-6ca81e41-9895-498b-9e17-5f65bdb37d30.png)

> **Divide and conquor** major part is **else** part. In the **else** part only, **Divide(), Conquor() and Combine()** there.

> **If** is required for **termination** condition.

> In the **else** part, **Divide()** will be executed **first**.

> **Divide()** will divide into **how many parts**, will depend on **divide code**.

![image](https://user-images.githubusercontent.com/54589605/235292140-72def053-5c41-4746-a49c-00a4bd992761.png)

> **How to do combine**? will depend on **combine code**.

> **How to do divide**? will depend on **divide code**.

> In the **else** part, **Divide()** is the **first** part. After divide, **conquor** will come and solve every single problem using recursion. Now, we have solutions to all of the sub-problems. These parts of the solutions are **inputs** to the **combine()**.

![image](https://user-images.githubusercontent.com/54589605/235297957-e2f60f96-e63c-4b72-97c8-52bdc702901e.png)

> Lastly we got **f** as the final solution and we return **f**.

> **Combine()** inputs are going to be **solutions** for the **sub-problems**.

## Summary

* Divide and conquor major part -> **else** part
* **else** part -> Divide() -> Conquor() -> Combine()

![image](https://user-images.githubusercontent.com/54589605/235298376-323fab08-a174-4041-b067-c0e50914b9e8.png)

> The above algorithm is solving **many problems**.

> **Divide and conquor** is a **designing technique**. It is a **template**. That's why somethings are **hidden**.

> It will solve **as many** problems as possible.

![image](https://user-images.githubusercontent.com/54589605/235298679-a74c4488-869c-41cb-83b0-d6b4a085bf26.png)

> **Merge and Quick** sort are implemented using **divide and conquor** designing technique.

> **As many** problems are solved using the **same** algorithm, but the **code** is different in **different functions**.

## Applications of Divide and Conquor (FOR GATE)

1) Finding max and min (DONE)
2) Power of an element (DONE)
3) Binary Search (DONE)
4) Merge sort (DONE)
5) Quick sort (DONE)
6) Selection procedure(Not selection sort) (DONE)
7) Maximum contigious sub-array sum  [Find it in the new hybrid course] [To me done in Special Class]
8) Finding no. of inversions (DONE)
9) Strassen's matrix multiplication (DONE)

> All of them use, **same** algorithm. The **4** function's code will **differ**.

![image](https://user-images.githubusercontent.com/54589605/235299034-9beb8c48-f4ff-42de-b0bc-0de205ca89d3.png)
![image](https://user-images.githubusercontent.com/54589605/235299189-d20e2a66-3040-4d43-87d3-07d8ce6b72b6.png)

> All of the applications are having the **same** format but the **4** function's code will **differ**.

> **Small()** function code will take **O(1) or constant** time, as there is **no loop**. Code may change but **no loop**.

> **Solution()** function code will take **O(1) or constant** time, as there is **no loop**. Code may change but **no loop**.

* So, total **if** part is **O(1) or constant** time.

![image](https://user-images.githubusercontent.com/54589605/235299290-638114ac-a162-48ae-9da0-ae3fbe21c3d4.png)

> **Divide()** function time is **dependent** on how the problem is being **divided**, it can be in **constant** or in **some loop**. Some divisions are **easy** and some are **difficult**. Some divisions will take **exponential**.

> Until and unless we see the **code**, we cannot say **anything**. So, we can say **some function**, which is **f1(n)**.

> **Divide()** function time is **dependent** on how the problem is being **combined**, it can be in **constant** or in **some loop**. Some combinations are **easy** and some are **difficult**. Some combinations will take **exponential**.

> Until and unless we see the **code**, we cannot say **anything**. So, we can say **some function**, which is **f2(n)**.

![image](https://user-images.githubusercontent.com/54589605/235299559-e55ae7ef-6212-4337-857d-3130b64961ea.png)

> **Divide and conquor** algorithm for **n** elements, will take time complexity of **T(n)** time.

> **Divide and conquor** algorithm for **n/2** elements, will take time complexity of **T(n/2)** time.

![image](https://user-images.githubusercontent.com/54589605/235299615-ae97f2ba-3347-453b-a49b-f2982bd073c7.png)
![image](https://user-images.githubusercontent.com/54589605/235299643-db0fed28-e3a6-4191-a363-1582f42f4bc4.png)


> If we **add**, divide(f1(n)) and combine time(f2(n)), then we will get **f(n)**.

![image](https://user-images.githubusercontent.com/54589605/235301419-fadb05a1-3c35-4bf3-af80-b01f5aefb811.png)

> First **two** indicate **how many sub-problems** we have, which is **two**. One **sub-problem** size is **n/2**. **T(n/2)** is one **sub-problem** cost. To solve one **sub-problem**, cost is **T(n/2)**.

> **2T(n/2)** represent **cost of all sub-problems**, which means **conquor** time.

> So the **conquor** time is **T(n/2) + T(n/2) -> 2 * T(n/2)**.

![image](https://user-images.githubusercontent.com/54589605/235299747-1b99b465-8250-47ce-bc97-3534da3c5d72.png)
![image](https://user-images.githubusercontent.com/54589605/235299892-9218d271-bafb-436a-9a4a-cc1410ba0f2a.png)

> So, **f(n)** is the time required for both **divide and combine**.

> In general someone can make **a** sub-problems, each of size, **n/b**.**F(n)** is the time required for both **divide and combine**.
 
> It is the **recurrence relation** of **master's theorem**.

![image](https://user-images.githubusercontent.com/54589605/235302085-f152f4f5-3df8-420b-8d51-567198ac5069.png)

> **Master theorem** was invented to solve **divide and conquor** recurrence relations.

> All **divide and conquor** recurrence relation problem will look like the **above** format.

* a -> No. of sub-problems. a >= 1
* n/b -> Size of sub-problems
* f(n) -> Time required for both divide and conquor.
* T(n/b) -> Time/cost of one sub-problem
* b -> b > 1. Otherwise no divide.

![image](https://user-images.githubusercontent.com/54589605/235302268-10f7e1b9-9ffd-4cb5-a45f-279e802f717a.png)
![image](https://user-images.githubusercontent.com/54589605/235302476-d7763c45-8ee3-44e5-955b-db09222ace0c.png)
![image](https://user-images.githubusercontent.com/54589605/235302482-da41f881-ee70-4d3c-8a77-59921acae81a.png)

* **a >= 1**, which means that **a=1** also possible. If we keep **a > 1**, then **binary search** is gone. In **binary search**, **a=1**. If **a > 1**, then we have to remove **binary search**.

## 1. Finding Max and min

* Input -> An array of **n** distinct elements
* Output -> Returns max and min elements.

![image](https://user-images.githubusercontent.com/54589605/235302838-8b05b2bb-e0c5-4206-993d-bcaa61ee6604.png)
![image](https://user-images.githubusercontent.com/54589605/235302889-26c0e21a-cc94-4885-a6cd-2a63aa53532a.png)

> **One scan** is required, which means **O(n)** times.

![image](https://user-images.githubusercontent.com/54589605/235303058-8e167b98-d455-4044-9934-d68c3d6b2ecd.png)

> Finding max, **one scan** is required.

> Finding min, **one scan** is required.

![image](https://user-images.githubusercontent.com/54589605/235303087-8261ec28-9f8c-4120-b018-ca1053a23a9a.png)

> **Loop** will repeat, approximately **n** times.

![image](https://user-images.githubusercontent.com/54589605/235303141-d4d21ab5-9ef0-498d-9ee0-c921151f51e1.png)
![image](https://user-images.githubusercontent.com/54589605/235303170-a0df633d-bca8-405b-a646-45226ad38d65.png)

> Left to right, we went **one** time only, which is **one** scan.

> Within **one** scan, we managed **two** people.

> Within **one** scan, we can manage **two** max people.

![image](https://user-images.githubusercontent.com/54589605/235303274-2076cadf-7700-48e2-a8b5-254b2b41118c.png)
![image](https://user-images.githubusercontent.com/54589605/235303395-a617251e-524f-495a-92ac-0bd8f0145d18.png)

> The above code is **without** **divide and conquor** strategies.

> This is called as **straight max, min** algorithm. The time complexity is **O(n) or theta(n)**, **one scan** is mandatory.

![image](https://user-images.githubusercontent.com/54589605/235303491-c483af10-6e42-4275-96b0-0941a9b25c2c.png)
![image](https://user-images.githubusercontent.com/54589605/235303514-8702190c-9346-4ac2-9e92-6bef1ecc2226.png)
![image](https://user-images.githubusercontent.com/54589605/235303538-ea7a43ef-75df-4460-ba7f-203060dd91b6.png)

> More coming, **change**, less coming, **no change**.

![image](https://user-images.githubusercontent.com/54589605/235303745-96c58d18-3b3d-48cb-a3a6-1ed21bf0a201.png)
![image](https://user-images.githubusercontent.com/54589605/235303758-f359ecb7-42d5-40cc-b14e-2419dd78ec4d.png)

> **Topper** can be at **any place**. If we like it or not, we have to **compare** all of them.

* ECE -> Every Case

![image](https://user-images.githubusercontent.com/54589605/235304033-73116b6a-1a6f-4355-9357-f9caa6ef04b2.png)

> In a given array, finding **max**, **best case** time is, **O(n)** which is **one scan** and it is mandatory.

* Best, Worst, Average -> **O(n)**

> All of them are **O(n)**. **O(n)** is for **every case**.

> The above program is **without** divide and conquor strategies.

![image](https://user-images.githubusercontent.com/54589605/235329777-a8239654-36b2-4e23-822b-049fabd3796c.png)
![image](https://user-images.githubusercontent.com/54589605/235329781-146dd7f8-88b6-4758-8eca-0b48d459395c.png)
![image](https://user-images.githubusercontent.com/54589605/235329784-41056e0f-0741-4cfa-997f-1a1514b97278.png)
![image](https://user-images.githubusercontent.com/54589605/235329786-bbe1c33e-9a44-44e2-9926-0dceb46a7979.png)
![image](https://user-images.githubusercontent.com/54589605/235329789-5430133a-ba53-44ed-a00a-f947dd0ce412.png)
![image](https://user-images.githubusercontent.com/54589605/235329791-6b0d7d32-fc84-412a-827c-6b194c7a0032.png)
![image](https://user-images.githubusercontent.com/54589605/235329794-88d03559-c2c7-4c3c-ae81-d0ee18c9b6bf.png)
![image](https://user-images.githubusercontent.com/54589605/235329795-4bd32e56-7bf4-4529-bcb0-275f4d8376d1.png)


## DP-II (21) [29th April 2023]

## Finding Max and min using divide and conquor strategies

![image](https://user-images.githubusercontent.com/54589605/235304200-710be72b-6ea4-437d-9626-7e8c0a073106.png)

> Compulsory **one scan** needed. This will also give, **O(n)**.

> Yesterday's algorithm of **Finding Max and min** is without using **divide and conquor strategies**.

* **divide and conquor** abstract algorithm steps:

1) Check for the problem is small or not in the if condition.
2) 

> Time complexity is decided by **else** part. **If** is for **stopping/termination** purpose.

![image](https://user-images.githubusercontent.com/54589605/235329958-30b33d1d-c975-40e6-b448-4c3fa142112b.png)

> **1-element** is small, **2-element** is also **small**.

> If **1-element** is there in the array, then that element is **max** as well as **min** element of the array. **No comparions** needed.

> If **1-element** is there in the array, then compare once, one element is **max** and one element is **min**. **Only one** comparison needed.

![image](https://user-images.githubusercontent.com/54589605/235330086-1af48ca8-d8a9-49c4-86c4-1e0d0015d29b.png)

> Array containing **7** elements, it is **big**.

> Bigger one is solved in terms of smaller one, it is **recursion**.

> When calculating **mid** value, we need to take **floor** value.

> **1 and 2-elements** mean **small**, stop it.

![image](https://user-images.githubusercontent.com/54589605/235330189-3169745a-99c1-4e1f-8435-523957fc9025.png)
![image](https://user-images.githubusercontent.com/54589605/235330196-f87a4616-4a3a-4e79-8257-e787757980f9.png)

> **Divides** happened, **combines** will start.

> **3** divides have happened, one that (1,7), another at (1,4) and last at (5,7).

> **3** divides mean compulsory **3** combines will happen or required, otherwise system will not be stabilized.

> Leaf nodes or last level nodes are all **small** problems.

> A node with **zero** children is **leaf** node.

![image](https://user-images.githubusercontent.com/54589605/235330460-a410c9eb-a6a1-4f03-bc17-6225ade77839.png)

> A node with **atleast one** child is **internal** node.

![image](https://user-images.githubusercontent.com/54589605/235330473-62eb73b4-5a8b-4816-a9bc-ddedd67bbaa9.png)
![image](https://user-images.githubusercontent.com/54589605/235330375-64a67ce4-efd9-465e-848f-b755e9202a46.png)

* YES

![image](https://user-images.githubusercontent.com/54589605/235330521-993d717a-c25e-4613-9ac8-6f9e55c1a203.png)

> Every node is a function call.

> Left child(**c1**) is called **first**. Left is over, then only right child is called.

> To completed **c1**, we need **c2 and c5**.

> To complete **c2**, **c3 and c4** are required. 

> To complete **c3 and c4**, **none or no one** is required.

> To complete **c2**, **c3 and c4** are required and they are available. So, **c2** is completed.

> Then it goes to **c5**. To completed **c5**, **c6 and c7** are needed.

> When **c6 and c7** are over, then **c5** is also over.

> Childern over, then **parents** also over.

![image](https://user-images.githubusercontent.com/54589605/235330811-4ada59a7-543d-4e4e-bdf2-e0a72cce6c50.png)

* First and last line in code. There is no left and right in code.

![image](https://user-images.githubusercontent.com/54589605/235330876-47bdf68b-854b-465b-9801-c8cf2db03988.png)
![image](https://user-images.githubusercontent.com/54589605/235330914-73c3d458-9da4-4a41-8e8a-583a4fef6003.png)

* c1 -> c2 -> c3 -> c4 -> c5 -> c6 -> c7.

> This ordering is function **calling**.

![image](https://user-images.githubusercontent.com/54589605/235331041-4e8060ad-7283-4b2e-a210-9bc0861eae6a.png)

> **c1** will finish **last**, even though **c1** started **first**, until and unless, rest of them are **finished/over**. **c1** is based on all of the people. If all over, then only **c1** is over.

![image](https://user-images.githubusercontent.com/54589605/235330987-4393c2ed-58d8-4460-b13c-ffabaa032300.png)

> **Left** means **first**.

* Who will complete first?

> **c3**. Leftmost element of the tree, which is a **leaf** node.

![image](https://user-images.githubusercontent.com/54589605/235331075-543225f9-304a-4c7b-a16d-c67bd39dea56.png)

* c3 -> c4 -> c2 -> c6 -> c7 -> c5 -> c1

> This is the ordering of **function execution**.

![image](https://user-images.githubusercontent.com/54589605/235331095-292bfbfa-d45d-4041-a506-e8e42bc1d3be.png)

* Left -> Right -> Root 

> This is called as **post-order**. It is also called as **bottom-up** approach.

![image](https://user-images.githubusercontent.com/54589605/235331137-f407e73f-3075-40d4-9208-876bf9dc5070.png)
![image](https://user-images.githubusercontent.com/54589605/235331172-aa4cd098-e541-452b-b207-ce2e2ece5610.png)
![image](https://user-images.githubusercontent.com/54589605/235331193-4b2e0b32-ef9c-4b37-9a3d-d99a05a6061a.png)

* Root -> Left -> Right

> This is called as **pre-order**.

![image](https://user-images.githubusercontent.com/54589605/235331248-9adaf6c1-7fd7-4156-bfdb-e27c165b7569.png)
![image](https://user-images.githubusercontent.com/54589605/235331369-0317803f-164a-4e87-a4d9-482763893596.png)

> Every programming language uses **pre-order** for function calling.

> Every programming language uses **post-order** for function execution.

![image](https://user-images.githubusercontent.com/54589605/235331413-ab3dae08-c6d2-46f9-946e-8e1508379b38.png)

* Array is contiguous.
* Linked list may not be contiguous.

![image](https://user-images.githubusercontent.com/54589605/235331531-9c8576d2-9862-4a84-afde-3d3b7c1861d0.png)

* Function call is a **push operation**.

> At **c3**, **c3** can complete directly and call none or no one. As **c3** is a **small** problem.

> At **stack**, **stack-top** will execute.

![image](https://user-images.githubusercontent.com/54589605/235331663-c2dcb91b-132c-4ea7-a8d1-5ae9759698f0.png)

> Completed means **POP**, before **POP**, it returned to it's **parent**. 

* **Siblings** are at the **same** level.

* **Parents and children** differ by **1-level**.

> All children will not come at the same time. One after another, they will come.

![image](https://user-images.githubusercontent.com/54589605/235331828-3a14a05c-b9d7-49cd-8d86-c7102616a35b.png)
![image](https://user-images.githubusercontent.com/54589605/235331918-2b41545e-7440-4012-ae4a-edd69edba6c3.png)
![image](https://user-images.githubusercontent.com/54589605/235331933-ff054891-762b-468d-b6e3-0856d240f21d.png)
![image](https://user-images.githubusercontent.com/54589605/235332042-1a2cc9c5-9607-4e20-9ca1-7f81a4a3c953.png)
![image](https://user-images.githubusercontent.com/54589605/235332056-cee4950a-33eb-4316-a3f8-6bc32e5d60ae.png)
![image](https://user-images.githubusercontent.com/54589605/235332100-d6eef294-458a-4ec7-8c77-8494b25aebc4.png)
![image](https://user-images.githubusercontent.com/54589605/235332129-a71708f4-1a19-446f-b0d2-7ef66759969c.png)
![image](https://user-images.githubusercontent.com/54589605/235332134-1b2d41f1-5bff-45e3-97bc-e5b48f5ae17c.png)

* How many places divide?

> **3**.

> In those **3** places, **Combine()** also happened. Those many places **divide** happened, those many places, **Combine()** also happened.

> How many times, we **divide**, those many times, we **combine**.

* In the above tree, how many levels?

> **3**.

> Whenever we are dividing, we are **dividing by 2**. Middle means by 2. If we always do by 2, then it is **log n** levels. So, there are **7** elements, then **log 7 base 2** levels. So more than **2** levels, which is **3** levels.

> So, if we always do by 2, then **log n base 2** levels will come. 

> So, if we always do by 3, then **log n base 3** levels will come. 

> So, if we always do by 5, then **log n base 5** levels will come. 

> We are always dividing into two **equal** parts, when **dividing by 2**. Half on the left and half on the right. It is **log n base 2** levels.

![image](https://user-images.githubusercontent.com/54589605/235332367-2d396de6-41d5-4c6c-99f2-c8c5b91bfa44.png)
![image](https://user-images.githubusercontent.com/54589605/235332378-31ed566c-d057-4f28-b7b6-bf600fe8d19e.png)

> In algo, **floor and ceil** doesn't matter.

* How many levels, in the above tree?

> Asymptotically, **log n** levels.

![image](https://user-images.githubusercontent.com/54589605/235332398-9ad559f6-4374-46fa-9a1d-f5503320096f.png)

> Always dividing by 2, so **3** level tree came. what is that tree? **log n base 2**.

![image](https://user-images.githubusercontent.com/54589605/235332428-63a21fc5-9116-4326-a959-adbc4e64a334.png)
![image](https://user-images.githubusercontent.com/54589605/235332429-bf86513a-7702-4589-ac19-e14993537d64.png)

> **Tree** and **stack** both are **same**. **YES**.

> In the **stack**, **c1** will be at the **bottom**, but in the **tre**, **c1** will be at the **top**.

> Rotate the tree, **180 degrees** and we will get **stack**.

> In-side, computer **stack** will be there. **Tree** is for **our/human's** purpose.

* Computer -> Stack
* Humans -> Tree

> Computer never contains **tree**. It contains **stack**.

![image](https://user-images.githubusercontent.com/54589605/235332560-4e0d0da3-3957-49b4-9157-c37e8980a0d5.png)

* How many levels, stack has?

> Stack contains as many levels as tree does, because **stack and tree** are **same** only.

> So, it is **log n**.

![image](https://user-images.githubusercontent.com/54589605/235332615-25306161-d87f-4ea7-9947-a47201ad0f3d.png)
![image](https://user-images.githubusercontent.com/54589605/235332631-de0cc2e3-800b-42c9-be18-5b25a334bab8.png)

> Since dividing by 2, so **base 2**.

> Those many **divides**, those many **combines**.

> The tree level is **log n**.

![image](https://user-images.githubusercontent.com/54589605/235332656-04008c96-73b9-4204-bcb0-105d6bef90dc.png)

> Everywhere is **divide by 2**. So, **log n base 2**.

![image](https://user-images.githubusercontent.com/54589605/235332734-88722cea-ddc1-462d-8cc6-3f1e03ff3ed1.png)
![image](https://user-images.githubusercontent.com/54589605/235332774-06e7eadc-ffd8-4f9e-aa11-0bde1566e59a.png)

* Done, after **divide**.

> Using **Divide and comquor** technique.

![image](https://user-images.githubusercontent.com/54589605/235332851-f58f6b04-0263-46ba-bd70-cd03ba5077e0.png)
![image](https://user-images.githubusercontent.com/54589605/235332869-f26d26e1-0de4-4e45-9a40-e955587a068b.png)

* Divided into **3** parts. **Log n base 3**.

![image](https://user-images.githubusercontent.com/54589605/235332960-6ddac40a-60bd-4ab0-96cf-b0669abbcbc1.png)
![image](https://user-images.githubusercontent.com/54589605/235332964-b949882f-1bd0-47c4-ac1e-8e0f03ec605d.png)
![image](https://user-images.githubusercontent.com/54589605/235332997-091e5737-fb3b-4459-ac18-edba19eb5dfe.png)
  
> Recursive program **running** is time consuming.

![image](https://user-images.githubusercontent.com/54589605/235333370-818d6c6d-7325-43e1-a298-3a3be5a8cc4e.png)
![image](https://user-images.githubusercontent.com/54589605/235333376-7e26ca05-9021-4216-a865-04f6a1565816.png)
![image](https://user-images.githubusercontent.com/54589605/235333432-a43ed770-407c-40fd-a2bb-fa630e366756.png)
![image](https://user-images.githubusercontent.com/54589605/235333446-a4419c18-34b4-4be1-894c-20be1e16d84e.png)

* Small and solution(if part). **If** part is **small** problem.

![image](https://user-images.githubusercontent.com/54589605/235333459-25c9f165-633c-43b8-b1ee-19d1d1e3ba07.png)

> **else** part is **big** problem.

![image](https://user-images.githubusercontent.com/54589605/235333496-17f04f9c-e96a-47b4-ac0e-992d9c44e458.png)
![image](https://user-images.githubusercontent.com/54589605/235333543-6db1826d-b4ff-4b12-9612-d53a10d97a80.png)
![image](https://user-images.githubusercontent.com/54589605/235333573-c5631669-157f-4d4a-999c-b017c5043f06.png)

> Conquor completed successfully, we got **left and right** answer. Now, we can go for **Combine()**.

> Inputs of **Combine()** are the **outputs** of **Conquor()**.

![image](https://user-images.githubusercontent.com/54589605/235333643-5b0c6476-52c5-477a-aa4b-f6d232ad7587.png)
![image](https://user-images.githubusercontent.com/54589605/235333661-ae5430a3-ffe3-4ddb-a53d-318df7e09b01.png)

> So, the **Combine()** algo will take **4** things as inputs, it will **return**, **2** things as **output**.

> **Conquor** over means we have **4** things, **max1, min1, max2 and min2**.

![image](https://user-images.githubusercontent.com/54589605/235333741-8da99b61-8d0a-45e9-8173-f8067d7ad5b9.png)
![image](https://user-images.githubusercontent.com/54589605/235333763-5b588eea-dc0f-41ae-875d-bc1bf540e7d0.png)

> Just take both the **max** and find out which is the real **max**.

> Just take both the **min** and find out which is the real **min**.

> Now, we got **overall**, **max and min**.

![image](https://user-images.githubusercontent.com/54589605/235333798-1eb2f0f8-314f-48b1-8b5c-b4cbcc15cb7b.png)
![image](https://user-images.githubusercontent.com/54589605/235333803-af2e4315-99cd-49e0-bf93-ac46ab30c48c.png)
![image](https://user-images.githubusercontent.com/54589605/235333812-21c5d850-4307-480e-ae06-2b0de524bf77.png)

> We are dividing into **2** parts.

> If we divide into **3** parts, then we will get **3** maximums(max1, max2 and max3).

![image](https://user-images.githubusercontent.com/54589605/235333879-aeb39ca3-069b-4199-859c-28ac0e174ca0.png)

* Recursion will take care.

![image](https://user-images.githubusercontent.com/54589605/235333890-8d0621df-b19c-47bc-a2dc-e9d20f43df62.png)

* Conquor. Solving **sub-problems** is **conquor**.

> **Conquor** step is over means, we got the **answers/solutions** for the **sub-problems**. Now, we can **combine**.

> In **combine**, we are **comparing**.

* Steps:

1) First **Divide()**.
2) Then **sub-problems** came.
3) Solve **sub-problems**, that is **recursion**. This is **Conquor()**.
4) Then **Combine()**.

![image](https://user-images.githubusercontent.com/54589605/235333979-6fd8195c-d858-42da-8b47-364a4b447393.png)
![image](https://user-images.githubusercontent.com/54589605/235334007-7b503264-c55b-42b0-8cba-63e066321e0a.png)

> We have **divided** the problem into **two** equal parts.

![image](https://user-images.githubusercontent.com/54589605/235334035-667cde01-b2cc-458c-b8d5-58f5074c3f7b.png)
![image](https://user-images.githubusercontent.com/54589605/235334042-bff17a76-8391-47c6-ba03-a358407e3c05.png)

> Divde and conquor, max-min for **n** people is **T(n)**.

> Divde and conquor, max-min for **n/2 or half people** people is **T(n/2)**.

![image](https://user-images.githubusercontent.com/54589605/235334083-26e7a201-e1b3-450b-a125-218befe15e4b.png)

> After getting both the solutions, we will **Combine()**. Inside, **Combine()**, there is no **for** loop. So, it is **constant or O(1)**.

![image](https://user-images.githubusercontent.com/54589605/235334100-37c99ad4-3e1f-4762-a788-09cbf54adfc4.png)

> For **Divide()**, there is no **for** loop. So, it is **constant or O(1)**.

![image](https://user-images.githubusercontent.com/54589605/235334114-2d76889b-91c7-4a9b-ad6e-b38d2a7f5316.png)

> For **Small() and Solution()**, there is no **for** loop. So, it is **constant or O(1)**.

![image](https://user-images.githubusercontent.com/54589605/235334137-89a95080-6508-432b-bfda-aea86fc23f58.png)

## Time complexity of above program.

* Write Recurrence relation for **time**.

![image](https://user-images.githubusercontent.com/54589605/235334180-d733189f-c138-46d8-bab8-7a76d7430dac.png)

* **T(n)** = 2 * T(n/2) + C

> **C** is the amount of time required for **both**, **Divide() and Combine()** functions. Amount of time is for **first level** only.

![image](https://user-images.githubusercontent.com/54589605/235334216-f1cf7348-0114-4319-9ceb-ca1e74381a91.png)
![image](https://user-images.githubusercontent.com/54589605/235334235-2cae9fdd-d7b3-42c8-8996-1bdc826da9a4.png)

> In the **first level**, we have done **Divide() and Combine()** function both.

![image](https://user-images.githubusercontent.com/54589605/235334253-a068872a-b5c5-4b7c-a172-e4fe2179fbae.png)
![image](https://user-images.githubusercontent.com/54589605/235334264-7cab0f89-45e3-472c-b47c-6d6816618ade.png)
![image](https://user-images.githubusercontent.com/54589605/235334271-8691b04b-dd44-4ca2-8aa0-ae1098c25e20.png)
![image](https://user-images.githubusercontent.com/54589605/235334278-c8a0a676-2684-4a30-ac52-68c65fb5c80d.png)

> **n** is **bigger** than **c**. We have to **divide** right side **n** with **n**, so that both the sides are **equal**. So, we are **dividing** by **polynomial**, means **n** is **polynomial** times **bigger** than the left side person.

> Hence, **Case 1 and 3** are allowed, so, whoever is **bigger** is the **answer**.

> So, **n** is **bigger**, hence **Theta(n)**.

![image](https://user-images.githubusercontent.com/54589605/235334306-e54b6192-c0a0-4415-b69e-67133d4bee8b.png)
![image](https://user-images.githubusercontent.com/54589605/235334349-a7b1ccc1-839b-4478-9f90-09b74f530e9d.png)
![image](https://user-images.githubusercontent.com/54589605/235334397-66ac5de9-0b5c-464d-a364-68f9679ea257.png)

> **Log n** time in **substitution** method is called as **stack space**, which is **how many times we have substituted**. 

![image](https://user-images.githubusercontent.com/54589605/235334426-369ebf65-23c0-4b70-99d4-0870ca43a69f.png)
![image](https://user-images.githubusercontent.com/54589605/235334454-a0b80248-3113-49ba-9698-0c7f49d8f462.png)

> **Divide()** time is **constant** because there are **no loops** in the **Divide()** code.

> **Combine()** time is **constant** because there are **no loops** in the **Combine()** code.

> In the **if** condition, there are **no loops** so, the **Small() and Solution()** functions have **constant** time.

![image](https://user-images.githubusercontent.com/54589605/235334487-e3e80ccc-fb43-4a21-bee3-3f008c3d7c6c.png)

> In **Conquor()**, it is always **same**, because **recursion** is always **same**.

> **Master's theorem** doesn't give any clarity about, no. of **levels** in the tree. **NO**. **Master's theorem** purpose is only **answer**.

![image](https://user-images.githubusercontent.com/54589605/235334584-08b2bb9d-dcb7-4577-980b-0e5a123c87d5.png)

* Continuing **substituiton** method.

> We can **stop** at **1 or 2**.

![image](https://user-images.githubusercontent.com/54589605/235334637-e88c5a0d-ce87-41b1-bb0e-5bbed6eb9920.png)
![image](https://user-images.githubusercontent.com/54589605/235334640-f63e1778-3318-43b9-ab7a-41c344096401.png)

> Last level is **n/2** people.

![image](https://user-images.githubusercontent.com/54589605/235334661-e13091ec-ecdc-4605-8a57-23e4abf00045.png)
![image](https://user-images.githubusercontent.com/54589605/235334669-2c35189f-90ac-4b0b-b251-28bac7347418.png)

> Leave it. Approximated is **OK**.

![image](https://user-images.githubusercontent.com/54589605/235334704-8b0321b8-57c2-4369-8e6b-c4a4786e08d9.png)

## Slide Numebrs

![image](https://user-images.githubusercontent.com/54589605/235334713-39cfdf93-424a-4f60-96f4-101481842865.png)
![image](https://user-images.githubusercontent.com/54589605/235334722-7a43162f-f208-4285-ad00-257e60c02a20.png)
![image](https://user-images.githubusercontent.com/54589605/235334724-db886526-7376-4544-a0dc-d95de6be68ea.png)
![image](https://user-images.githubusercontent.com/54589605/235334731-c7ec2897-f3af-4a0f-af85-bcf16f783580.png)
![image](https://user-images.githubusercontent.com/54589605/235334735-bb5dc137-844b-4c9e-90c5-c69e1661fb4f.png)

![image](https://user-images.githubusercontent.com/54589605/235334740-6117952d-2f5f-4e87-89d1-bbbdfa179550.png)

* Same only

* Space Complexity -> Stack Space -> O(log n).

![image](https://user-images.githubusercontent.com/54589605/235334755-20f77e46-d568-42f5-8f40-5d294a282736.png)

> Master's theorem will not give **stack space**. It will only give **answer**.

## Doubt_Clearing_Session (22) [30th April 2023]

* Time complexity recurrence relation  -> 2T(n/2) + C. -> Theta(n)

![image](https://user-images.githubusercontent.com/54589605/235347534-bb76b52b-3865-4064-a7c2-8ceb4d3d567c.png)

> **Else** is **more** valuable.

> The **time complexity** to find max-min is **O(n)** for **every case**. We cannot stop in-between. It is **every case**.

![image](https://user-images.githubusercontent.com/54589605/235347626-ccfd578d-fd1b-4fa4-90cb-3c9cf63c5c22.png)

> Recursive program's **space** is based on **no. of levels**.

> Stack space is based on **no. of levels**.

* c1 push -> c2 push -> c3 push -> c3 pop -> c4 push -> c4 pop -> c2 pop -> c5 push -> c6 push -> c6 pop -> c7 push -> c7 pop -> c5 pop -> c1 pop

> If completed, then only **popped**.

> **Function calling and function execution**, both are done **simultaneously**, if possible, **immediately** done.

> **c2 and c5** are **sibling**, once **c2** is **popeed**, then only **c5** is **pushed**.

> Whenever recursive programming is executing, **stack space** is based on **no. of levels**. [**IMPORTANT**]

> Recursive programs, create a recursive **tree**, which is nothing but a **stack**. In the stack, **how many levels are there** is called as **stack space**.

> If we want **time complexity**, then solve recurrence relation for **time**.

> We have substituted **log n** times as there are **log n** no. of levels in the tree, that's why **stack space or space complexity** is **log n**.

![image](https://user-images.githubusercontent.com/54589605/235350123-6554d3dd-dcae-4d29-ae80-b9fd3dd97ea2.png)
![image](https://user-images.githubusercontent.com/54589605/235350157-137efd8a-6b4d-45b3-8a2d-0312175f65b6.png)

> **Array** is fixed space only.

> Finding **max-min**, **else** part is **important**.

* Divide -> O(1)  [No loop]
* Left part(sub-problem) -> T(n/2)
* Right part(sub-problem) -> T(n/2)
* Combine -> O(1) [No loop]

![image](https://user-images.githubusercontent.com/54589605/235350314-3f1234f9-6c3f-4bde-a949-61fee2af118a.png)

> From problem to problem, those **4** functions(Divide, 2 * Conquor, Combine) will **change**. Whenever **code** changes, **time complexity** will also change.

> The above problem's **time complexity** is **O(n)**.

> Conquor is always **recursion** and there are **two** function calls, so **2 * T(n/2)**.

![image](https://user-images.githubusercontent.com/54589605/235350451-2eea791b-7d0b-4fa6-93cb-486e7a416d8d.png)

> Less function calls **less time**. 

> More function calls **more time**. 

> If we divide **one element**, each level, then the **no. of levels** is **n**. **n** level stack required. Stack size increasing.

> Time complexity is **same** which is **n** only but **space** is **increasing**.

> Unnecessarily **space is increasing**.

![image](https://user-images.githubusercontent.com/54589605/235350855-6b9c28ac-f4f9-41ee-bd4c-54d40af343a7.png)

* Let c(n) be the no. of comparisons between the elements in the above algorithm on **n-elements* array.

> Divide and conquor for **max-min** for **n** elements is **c(n)** comparisons.

> Divide and conquor for **max-min** for **n/2** elements is **c(n/2)** comparisons.

![image](https://user-images.githubusercontent.com/54589605/235350997-88db70a5-44ac-4feb-889f-166c98c4c7f1.png)

> For **1-element**, no comparisons.

> For **2-elements**, one(1) comparison is there.

> **Divide()** has no comparisons.

> In **Combine()**, there are **2** comparisons.

![image](https://user-images.githubusercontent.com/54589605/235351070-dd839421-61fb-4f11-9d30-7fc00960e949.png)

* We are calculating **comparisons**.

> Don't write **constants**, write the exact **numbers**, we are not calculating **time complexity** here.

> For **if** purpose, bring **n** value, in **else** don't bring **n** value. It is **very big**.

> Don't give number for **conquor**, it is **recursion**.

> For **non-recursion**, we can give number.

![image](https://user-images.githubusercontent.com/54589605/235351426-0ed45197-94dc-4600-985f-1faf1c4361b9.png)

> a[i] and a[j] are comparison **between elements**, it will give **value**.

> i and j are comparison **between positions**.

![image](https://user-images.githubusercontent.com/54589605/235351469-12f1d902-106c-4cad-a2ab-9fbbe6920167.png)

> Question asked, comparisons between it's elements.

* Recurrence relation **comparisons**.

> The goal is **else** part only and not **if** part.

![image](https://user-images.githubusercontent.com/54589605/235351532-1e15a6b6-681e-4ef1-87cd-44666adf4366.png)

* Exact number required. 

> We have to do **substitution** method, because we want **exact** answer.

> First and second level **non-recursive** term is **different**.

![image](https://user-images.githubusercontent.com/54589605/235352402-086a493e-ca91-4d4f-bb1f-34f1742dfaec.png)

> For first level, **Divide is zero(0)**, **Combine is 2**, so the overall is **2** for the **first level**.

> For second level, **Divide is zero(0)**, **Combine is 2**, so the overall is **0 + 2 + 0 + 2 -> 4 -> 2^2** for the **second level**.

> For third level, **Divide is zero(0)**, **Combine is 2**, so the overall is **0 + 2 + 0 + 2 + 0 + 2 -> 8 -> 2^3** for the **third level**.

> For every level, **Divide and Combine** is going on.

![image](https://user-images.githubusercontent.com/54589605/235352540-0cb57307-82ad-4369-83a3-f63ee20d767c.png)
![image](https://user-images.githubusercontent.com/54589605/235352631-fda5d910-f340-4bc2-a941-bdf48dea1e4b.png)

> We have **two** terminations, **1 and 2**, we can stop at **2** also.

![image](https://user-images.githubusercontent.com/54589605/235352698-87b01b9d-7166-4a3c-a376-6822a54b8770.png)

* c(2) -> 1.

![image](https://user-images.githubusercontent.com/54589605/235352872-c6816f28-c8f0-4586-8230-ba3f52c5f062.png)

* We did **exact**.

> The algo to find **max-min** using divide and conquor, will take **1.5 * n - 2** comparisons.

![image](https://user-images.githubusercontent.com/54589605/235352934-86964173-c7dc-4e0a-a72f-90e2f7a15334.png)

* To find **max-min** using divide and conquor, how many comparisons needed?

> **1.5 * n - 2** or **(3 * n)/2 - 2** comparisons.

> Anything we can use for **asymptotic notations**. That should be **last line**, don't do anything in-between.

* Actual answer is **1.5 * n - 2** or **(3 * n)/2 - 2** comparisons, which is **Theta(n)**.

![image](https://user-images.githubusercontent.com/54589605/235353105-7db89912-0166-4d96-a8b5-8972dbb56193.png)

* In **MSQ**, both are correct.

> If **exact** is there, then why go for **approx** answer. [**IMPORTANT QUESTION**]

* **1.5 * n - 2** or **(3 * n)/2 - 2** comparisons is for **n > 2**.

![image](https://user-images.githubusercontent.com/54589605/235353172-ebe9b70f-5b15-49d5-a5b1-e09c39b922e9.png)

* What is the prodecure to find **1.5 * n - 2** or **(3 * n)/2 - 2** comparisons? [**IMPORTANT QUESTION**]

> Write the recurrence relation and solve it using substitution method.

![image](https://user-images.githubusercontent.com/54589605/235353249-d0a40b63-b1ec-4c91-9610-080a74bdd1a6.png)
![image](https://user-images.githubusercontent.com/54589605/235353268-631ef632-792e-47c8-bee8-f61d7ef03075.png)

> One is **left max and right max** comparion. Another is **left min and right min** comparison. So that we get the overall **max and min**.

![image](https://user-images.githubusercontent.com/54589605/235353341-4e0c5704-f034-4857-b27a-ead3096bf5ac.png)
![image](https://user-images.githubusercontent.com/54589605/235353355-f920b907-cfa0-49f4-8b66-9e34515e6847.png)

> **Total divide and conquor with every application** is having **similar** story.

![image](https://user-images.githubusercontent.com/54589605/235353444-88caa4f8-6ac0-4a3d-a68d-0def85eae7b7.png)
![image](https://user-images.githubusercontent.com/54589605/235353454-c5524c5e-2b40-4cf9-a89b-7c617eacb073.png)

* Both are **similar**.

> In recurrence relation for **time**, **c** is constant so we can write **O(1)**. It can be **anything**.

![image](https://user-images.githubusercontent.com/54589605/235353498-5b54a3d1-23ec-48d0-b40b-888fe70c73d8.png)

> In recurrence relation for **comparisons**, it is **2**, nothing more and nothing less.

> The program had **two(2)** terminations(1 and 2), and we stopped at **2** element.

> If we continue **one more level** till **1**, then **one more term** will **increase**. Automatically, **comparisions** will **increase**.

> Then it will become **2 * n - 2**.

![image](https://user-images.githubusercontent.com/54589605/235353679-7608c5ce-b28a-4d04-ba1e-4e77535d622e.png)

> We have chance to end at **element 2**, then why we should go to **element 1**. Stop at **2**.

> Stopped at **2** for **less comparisons**.

> **2** will come first, so that we can **stop** one level. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/235353872-f9feec3d-b506-425d-9123-ad8c4722cbd6.png)

> Among **Divide and combine**, **Combine()** is take more **comparisons**.

![image](https://user-images.githubusercontent.com/54589605/235353937-4c6cd2cd-149f-4266-82a0-d74917c14c50.png)

> If we want **approximation**, then go to asymptotic notation.

> In the **time complexity** recurrence relation, the final time we got was **Theta(n)**.

> In the **comparisons** recurrence relation, the final comparisons we got was **Theta(n)**.

> They are **same**.

![image](https://user-images.githubusercontent.com/54589605/235354209-9f4586fb-1e4d-4ceb-853e-f4461bb84fcd.png)

> They both will take same **time**. The **constant factor** in **stright max min** algo will take **more comparisons**.

* Finding **max-min**, how many comparison?

> **1.5 * n - 2** or **(3 * n)/2 - 2** comparisons.

## Problem

![image](https://user-images.githubusercontent.com/54589605/235354348-ce92beaa-2c13-48eb-a741-500f9ef60b26.png)

* To find **max-min** in the array of 100 elements, comparisons needed?

> 1.5 * n -2 -> 1.5 * 100 -2 -> 150 - 2 -> 148.

> Remember the **comparisons**.

![image](https://user-images.githubusercontent.com/54589605/235362471-443dc197-92f1-4254-8cd5-67e6c4bbfe62.png)
![image](https://user-images.githubusercontent.com/54589605/235362567-c1cc2c63-c3e7-468d-9a34-77bbe5e71002.png)

> When **no algo** mentioned, which ever **better**, go for that.

> If mentioned, take that only.

> If nothing mentioned, we have flexibility.

![image](https://user-images.githubusercontent.com/54589605/235362949-de9e9bbf-49d4-49d1-9e62-a331d54a84db.png)
![image](https://user-images.githubusercontent.com/54589605/235363531-d87122bd-3976-4c58-80b3-225b565812f1.png)

> Repeatation not allowed. Sorted yes.

![image](https://user-images.githubusercontent.com/54589605/235363598-8dd3b4a6-8576-460a-b250-38486e83a89a.png)

* Time complexity is **O(1)**.

> No comparisons.

![image](https://user-images.githubusercontent.com/54589605/235363698-5e574f01-c34d-466d-ba8e-2d0ca3ae2a18.png)

* Best Algo only -> O(1), constant time. Every case
* return (2nd element)

> Other than **first and last** element, return any element.

![image](https://user-images.githubusercontent.com/54589605/235363763-def5f878-a83a-4349-b72a-0dde686b1a72.png)
![image](https://user-images.githubusercontent.com/54589605/235363774-e8bc6041-6546-4a15-b240-011f1c798ee8.png)

> To find **max-min**, we have a well known algo. Worst case is that we have to use that algo.

> The question didn't mention, give **best algo** but also didn't say give **worst algo** as well. If nothing mentioned give **best algo** because there is no limit or limitation end of **worst algo**.

![image](https://user-images.githubusercontent.com/54589605/235364025-2925cc08-b5b1-423c-ba93-d4b2b5ef0845.png)
![image](https://user-images.githubusercontent.com/54589605/235364416-1ba5c70c-5e3d-4276-90c1-6039d54020eb.png)

![image](https://user-images.githubusercontent.com/54589605/235364471-a4a061ef-accd-4fde-b487-48433d9cfa98.png)

* Not sorted. No duplicates.

> We have to scan the whole array **once** to find the **min and max** elements. Then only we can give an element which is neither max nor min.

> So, time complexity is **O(n)**, which is the worst case. 

> Let's try to find if any better time complexity is there or not.

> Take first three elements and sort them. It will take **constant** time. **80** is the **answer** because he is either min nor max, as there is **10** which is a min element and there is **90** which is the max element.

> So, **80** is either min nor max element.

> As there is one element which is less than **80** and there is one element which is more than **80**. 

> The entire process will take **constant or O(1)** time. [**Correct Answer**]

![image](https://user-images.githubusercontent.com/54589605/235365208-28e63ada-526b-4cbb-b60c-d18b7edfd16a.png)
![image](https://user-images.githubusercontent.com/54589605/235365311-3075240f-d1a1-4001-bee0-972f8463b1e6.png)

> To find out **1 element** which is either max nor min, we don't need to scan the whole array.

> Take first **3 elements**, sort them. Return **middle** person.

> Middle person should be the **answer** because there is **one element more** than middle element and **one element less** than middle element.

> Any **3 people** ok, sort them and return **middle** element.

* Time Complexity -> O(1) [Best algo, Every case(EC)]

![image](https://user-images.githubusercontent.com/54589605/235365548-379ab773-0ecb-4930-98fb-5704517e8023.png)
![image](https://user-images.githubusercontent.com/54589605/235365657-efdf4e2b-857c-4ad8-8c88-c2df3fd199c0.png)

* Straight max-min without divide conquor strategies -> (2 * n) - 1.
* Max-min using divide conquor strategies -> (1.5 * (n)) - 2.

> **Max-min using divide conquor strategies** is asymptotically **better** than **Straight max-min without divide conquor strategies**.

> In both of them, we are doing **one scan**.

> Both of the algos are the **same**. 

## Required slides

![image](https://user-images.githubusercontent.com/54589605/235366066-b5fd1e1b-3486-4359-aebc-4501852757bd.png)
![image](https://user-images.githubusercontent.com/54589605/235366078-5515820b-6c36-4924-a5bd-bcd7122b29a3.png)
![image](https://user-images.githubusercontent.com/54589605/235366083-a18fc524-a55d-4cf7-89e8-776f6ce54e53.png)
![image](https://user-images.githubusercontent.com/54589605/235366085-1781cd70-723e-4341-b3f7-75f1fbc45baf.png)
![image](https://user-images.githubusercontent.com/54589605/235366093-0f419529-7c81-4f72-93ce-a0b4a853af20.png)

> In one problem, we don't know which one to apply, either **straight max-min** or **divide and conquor max-min**, then always apply **divide and conquor max-min**, that's the last one we have to see.

![image](https://user-images.githubusercontent.com/54589605/235366190-ea367dc1-a1bb-48ce-ae92-cc539d30c011.png)

* Not sorted but distinct is there.

![image](https://user-images.githubusercontent.com/54589605/235366220-7e90a21b-8f55-4b34-aed9-a0614fed9834.png)
![image](https://user-images.githubusercontent.com/54589605/235366275-e9115f16-1159-4d61-947f-8aa3770b563b.png)

* Same as above problem but **not sorted** and **not distinct**.

> Repetition is allowed.

> We took first **3 elements**, sort them and returned the **middle** element. We cannot do this because of **non-distinct** elements. There is no gurantee now.

> Worst case is we have to **scan array once**.

> So, time complexity is **O(n)**.

![image](https://user-images.githubusercontent.com/54589605/235366414-696dae23-67b5-4813-bef6-f2ebc8968ac3.png)

> This is the **only algo** possible.

* **Time complexity**  ->  **O(n)** [Best algo]
* Worst Case -> **O(n)**.
* Best Case -> **O(1)**.

> We didn't get any doubt of **best, worst or best** case in the previous questions, because all of the **cases** were the same, that's why we wrote **Every Case(EC)**.

> In the above question, we have different time complexities for different cases.

![image](https://user-images.githubusercontent.com/54589605/235366568-57e5cd8b-0fca-4982-95b8-ad82054946bf.png)
![image](https://user-images.githubusercontent.com/54589605/235366596-08295c0b-d2ad-4e47-8a0b-fe846b8d7526.png)

## DAC-VII (23) [30th April 2023]

## 2. Power of an element

![image](https://user-images.githubusercontent.com/54589605/235367653-ac061971-cbab-4b98-94ec-1afc8cd71107.png)
![image](https://user-images.githubusercontent.com/54589605/235367787-d770488a-fb89-45fb-957c-42cea190d597.png)

> Everytime, **a** is **multiplied**.

* Time complexity -> **O(n)**.

> Above algo is **without** divide and conquor strategies, normal approach.

![image](https://user-images.githubusercontent.com/54589605/235367988-2da2b21e-c34f-4eb5-a4e1-23d2c4fce11b.png)
![image](https://user-images.githubusercontent.com/54589605/235368012-dc782af5-d3cf-4c75-a474-7f4c1acc4248.png)

* Goal is with divide and conquor strategies, only.

![image](https://user-images.githubusercontent.com/54589605/235368070-bbaaa982-f55c-4ab1-a094-96d8fa0e1862.png)
![image](https://user-images.githubusercontent.com/54589605/235368182-7a91d2ae-7561-492e-a906-0a0717758e79.png)

> With **divide and conquor** strategies, we will first **Divide()**. We have to **divide**.

![image](https://user-images.githubusercontent.com/54589605/235368285-d87bee17-1cce-44d7-9fd5-da4bc5e2dbd6.png)

> Calculate **both** and **multiply**.

> We have to define, **small problems**.

![image](https://user-images.githubusercontent.com/54589605/235368328-80a53cec-8852-4ba7-959f-3efe40b6d976.png)
![image](https://user-images.githubusercontent.com/54589605/235368392-54dad1ee-1f8a-415c-a3d9-8830549f0569.png)

> One time, we have **saved**, we can further use it. It is the **power of loops**.

> According to problem, we have to take care.

> **Always by 2**, so, **log n** levels.

> We divided **32**, 5 times.

* log n base 2 -> log 32 base 2 -> log 2^5 base 2 -> 5 [**Answer**]

> Afte getting **sub-problem** answer. **b and b**.

> Our goal is **algorithm**.

> We already got **half answer**.

![image](https://user-images.githubusercontent.com/54589605/235369154-cb8ad9ad-4d8c-4eea-933a-d9c35e526164.png)
![image](https://user-images.githubusercontent.com/54589605/235369206-fd5c1c53-9cce-430c-b1c5-7642fd070683.png)

> So many **recursive calls** are there.

![image](https://user-images.githubusercontent.com/54589605/235369242-0b01ef4b-bdad-4d81-8478-4108540b883d.png)

* Recursion.

> While **execution** going on, so many **recursive calls**.

> We will write the code, **only once**.

> If we write it many times, then no point of **Recursion**.

![image](https://user-images.githubusercontent.com/54589605/235369506-62d697c1-9297-4ad1-a66c-7ff083756026.png)

> Recursive program writting, we will just give **path**.

![image](https://user-images.githubusercontent.com/54589605/235370084-7239a499-0cc4-413c-aad0-57a0969f524e.png)
![image](https://user-images.githubusercontent.com/54589605/235370116-bf21279a-1da5-4677-8a9a-36588aea9ee1.png)

> All divide and conquor strategies have these **4** functions only.

> **Small, Solutions, Divide and Combine** have **no loops**, so their **time complexity** is **O(1)**.

![image](https://user-images.githubusercontent.com/54589605/235370256-5d2cb2f0-36d2-4469-9256-fdffb98a8e20.png)
![image](https://user-images.githubusercontent.com/54589605/235370272-3cbf3adf-1be4-441b-91d6-592d27468835.png)

* Let, **T(n)** be the time complexity of the above algo to find **a^n**.

* **c** is **constant**, but it is the **amount of time** required for both **Divide() and Combine()** at **first** level.

* It is a **unary** tree. Everywhere , **one(1) c**, because of **one function call**.

![image](https://user-images.githubusercontent.com/54589605/235370477-bdef2196-8a48-45f6-9bdd-9996b55bc648.png)

> Time complexity of **a^n** value after using divide and conquor strategies is **O(logn) or Theta(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235370627-a979479a-1dd5-41d3-adb7-f8ea7976d478.png)

> If we repeat it, **log n** times, then we will get **log c**.

![image](https://user-images.githubusercontent.com/54589605/235370660-1b5f7599-1d7f-42c4-bc2a-3a8abf0c43de.png)

> **a^n, where n=1** is a **small** problem. So. it is **O(1)**.

> Big problem cost is **log n**.

> Overall cost is **small + big problem** cost which is **O(1) + O(log n)**. So the overall cost is **O(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235370790-1c56ffad-01ad-4a43-8ded-abcc7de123ab.png)
![image](https://user-images.githubusercontent.com/54589605/235370827-ff1491a5-e42e-41d2-bb3d-338131907804.png)

> Left and right side, **bigger** function **same**, so we can write **theta** also.

![image](https://user-images.githubusercontent.com/54589605/235370863-b12c1ca5-01fa-4607-ab16-9ad0a7052da2.png)

* Stack space -> **O(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235370874-bc3cb3ff-0ac2-4daf-87eb-60bfee2a50b4.png)
![image](https://user-images.githubusercontent.com/54589605/235370910-b7d2f6ec-778b-4b0b-88b1-6bbee74d2ad1.png)
![image](https://user-images.githubusercontent.com/54589605/235370926-45234910-3993-4faf-97b0-f01d3b15fba4.png)

* Final answer what we got is for **time** which is **Theta(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235370964-2d6fcdb5-6c6b-4613-ae87-3c10b420d018.png)

> We can also solve it using **master's theorem**. Both sides are **c or constant**, which means we got **case 2**. So we can add **(log n)^0** to the right side, so that both the sides are sill **equal**.

* The time complexity  -> O((log n)^(0+1)) -> **O(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235371085-28064939-72a2-47ef-ac34-8b68f3c2714a.png)

* Master theorem will give **last answer**.

* Substitution method will say, **how it came**.

![image](https://user-images.githubusercontent.com/54589605/235371133-329e5da1-55ea-46e1-9698-5f7349a33e71.png)

* Time and space complexity  ->  **O(log n)**.

## Slides

![image](https://user-images.githubusercontent.com/54589605/235371261-ce3bc440-162f-4cd9-99fc-d9da9392831e.png)
![image](https://user-images.githubusercontent.com/54589605/235371272-7fec20f7-aef7-45bb-85e5-167d570e1da1.png)
![image](https://user-images.githubusercontent.com/54589605/235371279-8ac20799-0791-4122-b289-146378a7df80.png)

* Recursive program, stack space is based on **no. of levels**.

> If **n** value is **even**, then **no problem** and also we can **directly** return **c**.

> **Else** means **odd** numebr, then return **a * c**.

![image](https://user-images.githubusercontent.com/54589605/235371603-d5063120-e53c-40ed-8453-3dc9150338a3.png)

> While **returning** check if the numbers are **even or odd** numbers.

> By doing **small adjustment**, we can handle **odd numbers** also.
 
![image](https://user-images.githubusercontent.com/54589605/235371780-cdb157e0-7f7b-4478-8f19-1027c379e849.png)

> **No loop** is there, so **time complexity** is **O(1)**.

![image](https://user-images.githubusercontent.com/54589605/235371828-dd4372a3-c3bb-4279-975f-52d6d57344b8.png)

> If we repeat **3** times, then **T(n/2^3)**.

> If we repeat **2** times, then **T(n/2^2)**.

> If we repeat for **k** times, then **n/2^k**.

![image](https://user-images.githubusercontent.com/54589605/235371986-d206645d-de14-43be-ac96-0837db2f82c3.png)

> To terminate the above program, the condition we would take is that, **n = 2^k**.

> Remember, **n** cannot be **odd** number. **n** should be **even** number. **n** should be **powers** of 2 only.

![image](https://user-images.githubusercontent.com/54589605/235372112-f008bbe1-3ad5-4bc1-8f5c-6e43363ae7ae.png)

> When it comes to divide and conquor, we will always divide by 2.

> In the total divide and conquor strategy, we are assuming that **n** is powers  of 2.

> When we always divide by 2 and **n** is powers  of 2, then the story is **quite simple**.

> If not powers of 2, then also divide and conquor strategy will work.


* If anyone asked that if **n** is **odd** than the above code will work or not?

> Because of divide and conquor, we are assuming **n** is powers of 2, then **odd** numbers will not come into the picture.

![image](https://user-images.githubusercontent.com/54589605/235372329-d17b8bc6-a6a0-4d86-8bc1-01b5b7496284.png)

> We have done it in **two** parts, because of **dividing by 2**.

> If there are **three** parts, that is because of **dividing by 3**.

![image](https://user-images.githubusercontent.com/54589605/235372417-b5903a8d-272c-4f6c-862d-c570e1b0c765.png)

> If we divide by 3, then **n** is in the powers of **3**.

![image](https://user-images.githubusercontent.com/54589605/235372462-d0402823-78db-44ee-9244-f4c8246999d9.png)
![image](https://user-images.githubusercontent.com/54589605/235372492-22ab7781-3aa5-4b02-ad39-481abcd3f25c.png)

> Without divide and conquor we had done and got **time complexity** of **O(n)**, because of **1 loop**.

![image](https://user-images.githubusercontent.com/54589605/235372550-c9a819bf-14f3-454a-bcfb-f223d6114ec6.png)

> With divide and conquor we had done and got **time complexity** of **O(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235372578-387e5b20-5612-4bef-8f1c-119749de8535.png)

> The loop is repeating **log n** time.

![image](https://user-images.githubusercontent.com/54589605/235372698-e14fc402-bf9b-4407-abba-2dff9941ad49.png)

> Here also, without divide and conquor. We got **log n** time.

> Time complexity is determined by **logic** and not by **divide and conquor** techniques.

> divide and conquor doesn't mean better one.

* With or without, divide and conquor, **log n** time is possible.
* With or without, divide and conquor, **n** time is possible.

> It is **dependent** on how we write it. Differ by **constants** but both are **same**.

> Recursion something possible, non-recursion also possible.

> Non-recursion something possible, recursion  also possible.

* The **only difference** is that in **recursion**, because of so many **function calls**, stack space maybe **more**. From **time** point of view, both are **same**.

> It is **dependent** on what type of **logic** we write**.

![image](https://user-images.githubusercontent.com/54589605/235373007-938f1054-3e28-45fc-8811-9af7e5c3fcb7.png)

* Maybe in terms of **space**.

![image](https://user-images.githubusercontent.com/54589605/235373028-b2606984-6940-476b-8893-4c8522c7e640.png)

* Only **one** function call. So, **one** unit of stack.
* But the other one is having **log n** function calls. So, **log n** units of stack.

> They will both take **one** stack only, but stack units is different.

* Non-recursion is **better** in terms of or from the point of view of **space** compared to **recursions**.
* From the point of view of **time**, they would be **similar**.

![image](https://user-images.githubusercontent.com/54589605/235373165-710b22c4-7817-4131-b8a9-afc79d6af7d1.png)

* For understanding purpose.

> If we write **better logic**, even **better time** will come.

> If we write **worse logic**, even **worse time** will come.

* Time complexity depends on **logic**, how we have written the logic.

* If we want to calculate **a^n**, how much time?

> **O(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235373337-320f88f5-38c6-4afd-afd5-1b333ef11b5d.png)

> With or without recursion, anything is fine.

![image](https://user-images.githubusercontent.com/54589605/235373374-16f47694-0c54-4bc4-b37d-3657eb12d041.png)
![image](https://user-images.githubusercontent.com/54589605/235373403-48fb2260-a2a2-4221-9a38-3172a7539919.png)

> No requirement for doing all **three**. **One(1)** is enough.

![image](https://user-images.githubusercontent.com/54589605/235373418-8077d734-947d-4b2c-aa5c-bede0ed9b426.png)

> How we have **divided**, **combination** will also **change** accordingly.

## DP-IV (24) [1st May 2023]

![image](https://user-images.githubusercontent.com/54589605/235411253-69b0883a-0f54-40c3-9e69-1986acf1b340.png)

## Searching

## Linear Search

1) Linear Search -> * Input -> An array of **n-elements** and an **element 'x'**.
                    * Output -> Returns position of x, else return '-1'. If found then return position of 'x', else                                     return '-1'.

> 'x' is the element we are searching and return the position of 'x' if found, then return '-1'.

![image](https://user-images.githubusercontent.com/54589605/235412170-a0766aea-3c5b-4d7e-ac79-df11aac56e4f.png)
![image](https://user-images.githubusercontent.com/54589605/235412178-65f2ba5e-8b76-42d8-92bf-17b74166892f.png)

> We are **searching** for **one element**. As soon as we get that element we will stop.

> This is called as **Best case**, which is **O(1)**.

* **Best case** -> **O(1)** [Minimum time to solve the problem]
* **Worst case** -> **O(n)** [When last element is the element we want or the element is not present only]

![image](https://user-images.githubusercontent.com/54589605/235412975-c66f26f4-ed0f-4b12-86f6-ed610cc32905.png)

> Finding element x, **best case** is **O(1)**.

> Finding maximum, **one scan** is required, **best case**  is **O(n)**.

* Maximum means **we have to compare all**.

> Best case to find **x** is **O(1)**.

> Best case to find **max or larger** than the others is **O(n)**. We have to compare with the rest of them and do **one scan**.

> Best case doesn't always mean **O(1)**, we have to **adapt and change** according to the problem and then verify.

![image](https://user-images.githubusercontent.com/54589605/235415148-a93fe6eb-b124-43a7-b9cb-ed5903a939d0.png)

* Best case -> O(1) [Minimum time to solve the problem. When first element is the element, we are finding]
* Worst case -> O(n) [Maximum time to solve the problem. When last element is the element we want or the element is not present only]

> **Best case** to finding an element in a array is **O(n)** and the **worst case** is also **O(n)**. So, the **average case** will also be **O(n)**.

> When **best and worst** are the **same**, then **average** case is also **same**. 

> Starting matching is **best case** and ending matching is **worst case**.

> To calculate **average** case, we have to take everyone or every case into consideration.

> Average matters. It is based on **everyone or every case**.

![image](https://user-images.githubusercontent.com/54589605/235416549-cebe08ba-765a-4603-837f-343ee8804c2d.png)

* Calculating **average case**.

![image](https://user-images.githubusercontent.com/54589605/235416950-6a54a53f-6d3a-4be1-89b5-475a7260f26c.png)
![image](https://user-images.githubusercontent.com/54589605/235417027-db994a32-7700-4a80-981c-77a6abd87a88.png)

> We cannot say that **60 and 100** are **average case** values, because we cannot just take **min and max** values and divide them by 2. That doesn't give **average**.

> We have to use the **upper or first image** steps to calculate average. We have to take all of the values into consideration and then find **average**.

> **Average** is not based on **two** scores which are **min and max** values. **It is values on all of the scores.**

![image](https://user-images.githubusercontent.com/54589605/235417315-5ca86418-fdf3-4e98-98ea-5b4005837629.png)

> All the **(people/scores) by n** is **more** accurate than **two people/2**.


 ## Linear search time complexity

* Best case -> O(1)
* Worst case -> O(n)
* Average case -> (n+1)/2 -> O(n).

* Assume, Linear search time complexity -> **T(n)**.

> **T(n)** having **three** choices. For these **three**, we can write time complexity as **O(n)**. Everyone should satisfy.

* 1 = O(n)
* n = O(n)
* (n + 1)/2 = O(n)

> All are satisfied.

> We cannot write, **theta(n)**, because in **theta**, both sides should be **equal** but they are not. So, **1** is not satisfied with **theta(n)**. So, **theta(n)** not possible.

![image](https://user-images.githubusercontent.com/54589605/235417903-a2b449c0-e2c9-4a97-9ed6-f0dabc7e53b4.png)

> We can write, **omega(1)**, because when comparing **left and right**, **left** should be **bigger or equal to** right side. 

* 1 = Omega(1)
* n = Omega(1)
* (n + 1)/2 = Omega(1)

> All are satisfied. For **1**, **left side** is **bigger or equal to** right side that's why.

![image](https://user-images.githubusercontent.com/54589605/235418304-dfd344af-554a-4d21-bb85-935200df147f.png)

> **T(n)** having **three** possibilities.

> **Theta(1)** is also not possible because only **1** is happy but **n and (n+1)/2** are not happy, as they are not **equal** on both the sides.

![image](https://user-images.githubusercontent.com/54589605/235418552-dd5b309d-7ac6-4d31-a237-088888f422bc.png)
![image](https://user-images.githubusercontent.com/54589605/235418578-6c2ca10d-086c-428a-9e59-57d360b1dedd.png)

> Linear search time complexity **T(n)**, then,

* T(n) = O(n)
* T(n) = Omega(1)

![image](https://user-images.githubusercontent.com/54589605/235418705-71b0a4d7-37b3-41a6-8ff8-9029ad68858d.png)

* Assume linear search worst case time complexity is **T(n)**.

> So **T(n)** is **worst case time complexity**.

![image](https://user-images.githubusercontent.com/54589605/235418947-c2a97031-eaf6-4a4b-9f14-e38d998a05c5.png)

> So, **T(n)** is having only **one** possibility.

* **T(n)** -> O(n)
* **T(n)** -> Omega(n)
* **T(n)** -> Theta(n)

![image](https://user-images.githubusercontent.com/54589605/235419136-3d56b875-bb06-4aed-b669-da462adebc74.png)

> In the above one, they have not mentioned if **T(n)** is **best, worst or average**. They have just mentioned that **T(n)** is time complexity of linear search. That's why we had **three** options there.

> Time complexity of linear search  is **three** options or possibilities. It didn't mention **best, worst or average**.

> If not mentioned, then we have to take **all possibilities**. With respect to **all**, we have to give.

> When mentioned **worst** case, then respect to **worst** case, we have to give.

![image](https://user-images.githubusercontent.com/54589605/235419488-03314188-f84d-4f29-a7bf-31245aa681ee.png)
![image](https://user-images.githubusercontent.com/54589605/235419503-4c3d2c48-64cc-4d38-99bf-3774f2f7acf5.png)

* Assume linear search Best case time complexity is **T(n)**.

> There is only one possibility that is **O(1)**.

![image](https://user-images.githubusercontent.com/54589605/235425369-a435fe60-f038-4afe-ad7e-e8ac27615b2a.png)

* 1 -> Theta(1)

![image](https://user-images.githubusercontent.com/54589605/235425454-02bcce26-866b-4b63-bcaa-f457d59ff896.png)

* In linear search time complexity, **theta** possible?

> It depends on how we define **T(n)**. **T(n)** is simply time complexity.

> If **T(n)** is simply time complexity, then we have to consider **every case** which is **best, worst, average**.

![image](https://user-images.githubusercontent.com/54589605/235425779-4f5e6c69-8a9a-4396-8314-edb9db465b05.png)

* Best case -> Minimum time to solve the problem(correct answer).
* Worst case -> Maximum time to solve the problem(correct answer).

> If **min and max** time are **same**, then **average** time is also **same**.

> If **min and max** time are **different**, then **average** time is **in-between** of **min and max** time.

> If **min= O(1) and max= O(n)**, then average is **(n + 1)/2**, which is **in-between**.

![image](https://user-images.githubusercontent.com/54589605/235426361-91e02ece-7e42-4dc5-8382-cb7c66ef84ba.png)

> There is **no change** that **average** will go **more** than **worst** case and there is **no change** that **average** will go **less** than **best** case.

> Either **all three** will be **same/equal** or **average** is **in-between**.

* Arrange **best, average and worst** cases asymptotically?

> **Best -> Average -> Worst**. Arranged from **less to more**.

> **Best <= Average <= Worst**. 

* **Best** less than **average**
* **Average** less than **worst**.

![image](https://user-images.githubusercontent.com/54589605/235426786-35d2c031-603f-4ab1-9d05-378891874d86.png)

* In-general relation

* Remember how to find out **average case**.

> Average is based on **all person** and not on **two people or two scores**.

![image](https://user-images.githubusercontent.com/54589605/235427017-c31fe845-7631-45dc-ba50-fd0efbe0023a.png)

## 3. Binary Search

* Input -> An **array of sorted** which has **n-elements** and an **element, 'x'**.
* Output -> Returns position of x, else return '-1'. If found then return position of 'x', else return '-1'.

> If we want **efficient** algo, then the **input** should be **efficient** as well.

> In **linear search**, the **numbers** are **random**.

![image](https://user-images.githubusercontent.com/54589605/235428388-84ace385-eb12-460c-9402-a2a4a08eb5a1.png)

> In **Binary search**, the **numbers** are in **increasing order**.

![image](https://user-images.githubusercontent.com/54589605/235428441-095feaaa-1fd6-43ba-b036-4098fbc32d33.png)
![image](https://user-images.githubusercontent.com/54589605/235428545-d5c9f73b-ba8b-440f-a01f-acd2a999f067.png)

* Binary Search

> We are doing **one side** everytime, either it is **left side** or it is **right side**. We are not going at **both** the sides at the **same time**.

> Everytime, it will be **half** of the previous one.

![image](https://user-images.githubusercontent.com/54589605/235429672-eda47c2f-f966-41ca-b65f-e670c16bb7c9.png)

> Algorithm is **deterministic** in nature.

* Best case -> O(1) [The first middle element is the element to be searched]

![image](https://user-images.githubusercontent.com/54589605/235430074-88e7b257-036f-4a80-8467-43b3c8fb2988.png)
![image](https://user-images.githubusercontent.com/54589605/235430188-c26df3f3-6eda-46a1-858e-fc2dcfdaefaf.png)
![image](https://user-images.githubusercontent.com/54589605/235430164-7ddf0364-852e-407c-9150-b8f730fdb605.png)

> As **mid(40)** is less than **10** that's why we have to go **left**.

> **1 element** is a **small** problem.

![image](https://user-images.githubusercontent.com/54589605/235430438-2a847550-2d2a-4dd6-a237-cd6378b79153.png)

> So, we **returned**, the position of 'x' as **1**. 

> If we divide the **n**, everytime by 2, then we will get **n/2**, until one element comes. It is **O(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235430675-bb500cea-ab55-4428-ab15-7a270171dab6.png)

* Best case -> O(1)

![image](https://user-images.githubusercontent.com/54589605/235430732-3bbccbb1-c89e-4fd7-a1f9-513b77b36d09.png)

* Worst case -> O(log n)

![image](https://user-images.githubusercontent.com/54589605/235430942-867ddd98-e1ef-4502-84e7-71dab4c64f1c.png)

> At **7** position, it is **one element** only, so, **small problem**. One element is there, if that's 'x', which we are searching. As it is **70** and we are finding **69**, which means we diidn't find 'x'. So, return **-1**.

> **Not found** is **max** work done and **worst case**.

![image](https://user-images.githubusercontent.com/54589605/235431255-40f01206-268b-4b45-b2f8-918ae866136a.png)
![image](https://user-images.githubusercontent.com/54589605/235431359-33ee1921-1b66-4f21-bd11-1e5daec63b71.png)

* Return **-1**, **41** not possible.

![image](https://user-images.githubusercontent.com/54589605/235431404-fdde0454-426b-4c96-b2f3-c8738c524984.png)
![image](https://user-images.githubusercontent.com/54589605/235431633-0077e058-bdd7-4895-ba2a-4054bec03c97.png)

* i -> First element index
* j -> Last element index
* j - i + 1 -> Array size.

![image](https://user-images.githubusercontent.com/54589605/235432227-598e9b9c-d1c2-4134-8087-83a82a044c6c.png)

> The element we are finding(x) is on the **left** side. So, it will be from **i to mid - 1**.

![image](https://user-images.githubusercontent.com/54589605/235432421-07e6a213-2316-4e71-9974-1f0838ec7abd.png)

> The element we are finding(x) is on the **right** side. So, it will be from **mid + 1 to j**.

![image](https://user-images.githubusercontent.com/54589605/235432441-e52a1c38-aef7-4778-8e95-83466a76eded.png)
![image](https://user-images.githubusercontent.com/54589605/235432504-8069c893-e6fc-4804-9bbb-792c0ed83113.png)
![image](https://user-images.githubusercontent.com/54589605/235432530-fb9470ea-f501-48c8-afff-53513d591a99.png)

* Will come eventually. Wait.

> In the **else** part we have **two** function calls. Only one function call will execute at a time, because of in-between **else** there. 

> Only one will execute, we don't know which one, whether it is **left or right** one, no idea.

> Because **only one(1)** will execute, so the **conquor** time will be **T(n/2)**.

> In the **min-max** divide conquor algo, **two** of the functions calls were executed simultaneously to calculate the **left and right** values, that why it was **2 * T(n/2)** there and here it is only **T(n/2)**, as only **one(1)** function call is executed.

> If **n** elements is **T(n)**, then **n/2** elements is **T(n/2)**.

![image](https://user-images.githubusercontent.com/54589605/235433154-7955f406-37bd-4ab4-a4ad-4ca875c56502.png)

* **Only one** will execute.

* In **conquor**, there are **two** function calls but **only one** is executed because of the **else** in-between so it is **T(n/2)** and not **2 * T(n/2)**.

![image](https://user-images.githubusercontent.com/54589605/235433426-68877642-4234-4423-b382-3cdcff620753.png)
![image](https://user-images.githubusercontent.com/54589605/235433474-069a6c53-0c23-4b76-8c14-c6cb0fd16a6f.png)

> As soon as we enter the **else** part, first we do **constant or O(1)** time, then we take **T(n/2)** time for **conquor**.

> If we are lucky then we can stop at **constant or O(1)** time only, as there is a **return** statement there.

> Without function call also, we can **stop**, as there is a **return** statement there.

* In the **else** part of the program, we can stop in-between?

> **YES**.

> At the staring only of the **else** part, we can **stop**. That is the **best case**.

* In a recursive program, which is more valuable, if or else part?

> **Else** part.

* In a recursive program, how will give better **case**, if or else part?

> **Else** part. [**Correct answer**]

> **If** part. [**JOKE ONLY**]

> If anyone says that **If** part gives the **best** case, then the **best case** always becomes **1 or O(1)**.

> This will be a **joke** only.

* In a recursive program, how is powerful, if or else part?

> **Else** part.

> **Powerful** means **best, worst, average case** from that area. All cases from that area only.

> Everything will come from **else** only.

![image](https://user-images.githubusercontent.com/54589605/235434451-924d0226-0475-4e2c-bedb-7ae74833e274.png)
![image](https://user-images.githubusercontent.com/54589605/235434543-1816feba-4520-4411-a77e-11384a5d80c4.png)

> If **lucky**, we will get **c or constant** only. 

> If **not lucky**, we will get **c + T(n/2)**. We have to do some extra work also.

* Let, **T(n)** be the time complexity of above algo.

* Reccurence relation for **time** or time complexity for **worst case(wc)**.

![image](https://user-images.githubusercontent.com/54589605/235434745-11b577cd-774e-4614-914e-d965cad5c285.png)

* Reccurence relation for **time** or time complexity for **best case(wc)**.

![image](https://user-images.githubusercontent.com/54589605/235434818-c968b408-f113-42f6-93c1-d70f26ca2733.png)
![image](https://user-images.githubusercontent.com/54589605/235434873-348082d6-033f-4d6e-9047-10d331921f81.png)
![image](https://user-images.githubusercontent.com/54589605/235434972-0445ab7e-d9be-43a6-969e-a9cce75c25e9.png)

* Function calls mean **conquor**.

![image](https://user-images.githubusercontent.com/54589605/235435281-ca411995-7f95-429c-86ff-d7df225f96e0.png)

* **Divide and conquor** but **no combine**. No need/requirement for **combine**.

* **Binary Search** is a partial application of **divide and conquor** strategy, as there is need/requirement for **combine**.

![image](https://user-images.githubusercontent.com/54589605/235435541-c708dead-ce1d-40df-a610-cfcecfd7f269.png)

* What is the **c** here?

> **c** is the **Divide** time only, as there is no **combine*. It is for **first** level.

![image](https://user-images.githubusercontent.com/54589605/235435727-4d0d7b77-b173-4aaf-8782-28bf27b7fa6e.png)

> The above recurrence relation is for **worst case** and we will get **worst case** only. We will not get **best case**. It is for **worst case** only.

![image](https://user-images.githubusercontent.com/54589605/235435959-efd722a9-69de-4999-ad51-8090450b3b7e.png)
![image](https://user-images.githubusercontent.com/54589605/235436057-ad941954-7fa8-4668-a9a4-4a84877f2cf2.png)
![image](https://user-images.githubusercontent.com/54589605/235436072-653b2627-c175-45a8-903e-e3320ae8cac4.png)

> Left and right side are **same**, so we can write **theta**, which is **theta(log n)**.

> We can write **O(n)** as well.

> We can write **Omega(1)** as well.

> We cannot write **theta(1)** because **left and right** side are not **same**.

> We cannot write **theta(n)** because **left and right** side are not **same**.

* This is for **worst case**.

* Reccurence relation for **time** or time complexity for **best case(bc)**.

> In the starting of **else** part there is a **return** statement. So, we can **stop** it there.

* Best case -> Theta(1).
* Best case -> O(1).

![image](https://user-images.githubusercontent.com/54589605/235436439-be58a046-fefc-4d3a-907b-94e164d3244a.png)
![image](https://user-images.githubusercontent.com/54589605/235436606-3ea8f30c-f569-4bf2-90ea-bf0c9fc2bfde.png)

> Best case recurrence relation is **not possible** because we are either going **left or right** side. We are stopping at the **middle** only.

* In the **else** part, if we stop at the **starting** only then that is the **best case**.

* When someone doing **binary search**, the **left(worst case)** one will happen **more frequently** compared to **right(best case)**.  

* The worst case of **binary search** is also **average** case only.

![image](https://user-images.githubusercontent.com/54589605/235436912-5210806b-825c-4ccf-9056-102b3d8a7c6f.png)

* Most of the time, **worst case** will happen for **binary search**.
* Whichever will happen, **most of the time**, that will decide **average case**.
* Most of the time, **binary search** will behave as **worst case**.

* Why sachin's average is 60?

![image](https://user-images.githubusercontent.com/54589605/235437139-6fc1a7bc-be4a-4447-917e-cd24adf86cef.png)
![image](https://user-images.githubusercontent.com/54589605/235437162-fe17ad6e-4bf9-4de0-bab2-22f121b3c9a4.png)

* For **best case** of **binary search**, there is **no recurrence relation** because at the **entrance** only we got the **answer**.

* **T(n)** is time complexity. Every case we have to **cover**.

* log n = O(log n)
* 1 = O(log n)

> All are **satisfied**.

![image](https://user-images.githubusercontent.com/54589605/235437735-b0a7a064-8c25-47c7-aaf0-dcc8808a0605.png)

* log n = Omega(1)
* 1 = Omega(1)

> All are **satisfied**.

* log n = Theta(log n)
* 1 = Theta(log n)

> **1** is opposing because **left and right** sides are not the **same**. Hence, **theta(log n)** not possible.

* log n = Theta(1)
* 1 = Theta(1)

> **log n** is opposing because **left and right** sides are not the **same**. Hence, **theta(1)** not possible.

![image](https://user-images.githubusercontent.com/54589605/235437980-24c04e8c-6650-4f24-9d39-dd275b676dbe.png)

* In **T(n)** we have to **cover** everything. **T(n)** has **two** choices, it has to consider both **log n and 1**.

![image](https://user-images.githubusercontent.com/54589605/235438094-10e8d770-7d2a-4642-a3fa-35f4f9a992a0.png)

* what is **Binary search** time complexity?

> O(log n) OR Omega(1). Anyone is **correct**.

![image](https://user-images.githubusercontent.com/54589605/235438311-83744372-880c-4e9e-94cd-52cc6171ed06.png)

* what is **Binary search** time complexity for best case?

> They are asking only **one case**. So, it is **O(1)**. We can also use **theta(1)**, no problem.

> In **best case**, **T(n)** having **only one** choice.


* what is **Binary search** time complexity for worst case?

> They are asking only **one case**. So, it is **O(log n)**. We can also use **theta(log n)**, no problem.

> In **worst case**, **T(n)** having **only one** choice.

* In **one** case, we don't have **any problem**, because **only one** answer.

![image](https://user-images.githubusercontent.com/54589605/235438574-364ca8ad-0384-40be-9f46-0e6c6329e17c.png)

* When asking for **binary search** time complexity?

> Take all of the **cases**. Give **O(log n) or Omega(1)** as the **answer**.

* In **binary search**, we will go **one side**.

![image](https://user-images.githubusercontent.com/54589605/235438716-cc4253d6-1740-444f-8611-79645b4aa055.png)

* Sometimes, we don't go **one side** also, it is the **Best case**.

![image](https://user-images.githubusercontent.com/54589605/235438799-23a1da7f-f4a5-4f94-93b8-86725540cede.png)

* If we are **lucky**, then we don't have to go **any sides**.
* If we are **not lucky**, then we have to go in **one of the sides**.

* In specific case, we can use **theta**. We have **only one answer**.

![image](https://user-images.githubusercontent.com/54589605/235438970-7f1f5b81-1ece-4f77-a3bf-7522b997d7ce.png)

* Time complexity of **binary search**.

*  Best case -> O(1)
*  Average case -> O(log n) [Most of the time, **worst case** will happen]
*  Worst case -> O(log n)

* Why the time complexity of **binary search** in **average case** is **O(log n)**?

> Average means we have to **consider all**. When considering all, most of the time, it is behaving like **worst case**.

> So, **average and worst** case is **same**.

> **Best case** is **very rare** incident, happening very less amount of time.

![image](https://user-images.githubusercontent.com/54589605/235439276-45d2f61a-656a-4cbb-8b9f-3deb424a3223.png)
![image](https://user-images.githubusercontent.com/54589605/235439535-7c4e8c43-602f-4961-8cd3-e8424ef5ca71.png)

* Stack space is **log n**, which is **average and worst case**.
* If we are lucky, then **once divide** then **stop**, which is **best case**.

![image](https://user-images.githubusercontent.com/54589605/235439722-bf443e7e-79ad-4794-913f-061b49e56e7c.png)

* Recursive program performance is based on  -> **Else** part.
* If we want **best case** -> **Else** part.
* Everything thing or every case -> **Else** part.
* Binary search time complexity(In general) -> O(log n) OR Omega(1).

![image](https://user-images.githubusercontent.com/54589605/235440167-f4e44894-2849-405a-a586-14cda8b9ecd9.png)
![image](https://user-images.githubusercontent.com/54589605/235440205-aab3f28a-9774-4e68-90ea-6e4bd6410336.png)

* Binary search time complexity best case -> O(1) OR theta(1) -> 1
* Binary search time complexity worst case -> O(log n) OR theta(log n) -> log n
* Binary search time complexity average case -> O(log n) OR theta(log n) -> log n

> For **one case**, we can give **any symbol** as there is **only one** answer. So better don't give **any symbols**.

* Binary search time complexity(In general) -> O(log n) OR Omega(1).

![image](https://user-images.githubusercontent.com/54589605/235440604-5ea28d0f-7079-438b-8351-f592e2e526a0.png)

* Not needed [**EXTRA**]

![image](https://user-images.githubusercontent.com/54589605/235440697-4664b646-5094-49ea-8cb6-d95579b3da93.png)
![image](https://user-images.githubusercontent.com/54589605/235440714-f901763c-9336-4a91-b5c9-6f2da1a845c6.png)
![image](https://user-images.githubusercontent.com/54589605/235440974-5c938bf1-aacc-403a-8eb3-aa2fd3a52afa.png)
![image](https://user-images.githubusercontent.com/54589605/235441087-29adb420-175c-465b-ae03-8d811d2925c0.png)
![image](https://user-images.githubusercontent.com/54589605/235441124-95ce8765-9b2a-4a23-b751-0a6168afc193.png)

* Non-recursive program. Only **i and j** are updated.
* Because of non-recursive program, the **Stack space** is **1**, because of **1 function call**.
* Time complexity is **same**.
* Other than **recursion**, both the codes are **same**.
* In place of **recursion**, the above program used **while** loop.
* Everything **same**, except **space**.

![image](https://user-images.githubusercontent.com/54589605/235441399-235e33c7-229b-4d37-bf2e-fd0a10d12874.png)

* Binary search time complexity best case -> O(1) OR theta(1) -> 1
* Binary search time complexity worst case -> O(log n) OR theta(log n) -> log n
* Binary search time complexity average case -> O(log n) OR theta(log n) -> log n
* Binary search time complexity(In general) -> O(log n) OR Omega(1).

![image](https://user-images.githubusercontent.com/54589605/235441543-16d1d628-30f5-4b16-a97d-aac46caf1859.png)

> Because of **non-recursion**, **space** is **saved**.

* Space complexity -> **Theta(1)** or constant.

* If above program(non-recursion) given, how much **space complexity** needed?

> **1**.

![image](https://user-images.githubusercontent.com/54589605/235441646-f0c87257-0b54-425f-975c-9916818666ce.png)

* If above program(recursion) given, how much **space complexity** needed?

> **log n**.

* Depending on how we write the program, **space complexity** will **change**.
* Recursion means **more space**.

* If **space complexity** asked then **program** will be given. Without program, how we will calculate **space complexity**.

* **Time complexity** is **same** as **logic** is **same** for **recursive** as well as **non-recursive** program.
* Depending on **how we write the program**, **space complexity** will **change**.

![image](https://user-images.githubusercontent.com/54589605/235442352-6cedcefa-bce6-47f5-ad40-37d3ac1878bc.png)

## DP-V (25) [1st May 2023]

* Binary search is **partial** divide and conquor strategy, because there is **no combine()**.

## Application of Binary Search

![image](https://user-images.githubusercontent.com/54589605/235458815-ccc456f8-a50b-454d-b322-b323cacdebbf.png)
![image](https://user-images.githubusercontent.com/54589605/235459243-38929151-ef77-42d8-b96a-9d0e2b4be7f6.png)

* Sorted and no-repetation allowed.

> If we want to give **best algo**, then first we have to give **some algo**.

> Any problem is given, first we can try **linear search**.

> Linear searching is working. The problem has asked for **worst case**.

> Linear search is possible with time complexity of **O(n)**, which is the **worst case**.

> When mentioning specific case(worst case here), then **one** possibility. So, we can use **theta(n)** because left and right side are **same**.

![image](https://user-images.githubusercontent.com/54589605/235463280-520cd040-adb9-4545-ae3c-bc2bca1c513e.png)

* Linear Search -> Worst case -> **O(n)** -> n.

> If asked for **worst case** in the problem, find **worst case**.

> If nothing mentioned in the problem, then we will have to find **everything or every case**. If nothing mentioned, then find **every case**.

> If asked for **best case** in the problem, then there is a twist in the problem. **Best case** is not asked normally in problems/questions.

![image](https://user-images.githubusercontent.com/54589605/235465983-1090f20e-2386-427d-81ab-27cbfd849f1f.png)

> In **binary search**, the **middle** is the **mid element**. The middle element is **9** so **i=9**, then **a[9] == 9 -> 6 == 9**, **NO**. Now, we are at a **dilemma**, which side to go? If we go to the left then we are at **8th position** and at **i=8** will have **less than 6** element as **i=9** had **6** and it is an **increasing sorted** array. But we wanted **8** at **i=8** which is **not possible**, so we cannot go **left**.

> In **i=9** we had **6**, so at **i=10**, we will have **greater/more than 6**, which could be **10** that's what we are looking for which is **a[i] == i**. So it is **possible, that's why we went **right**.

![image](https://user-images.githubusercontent.com/54589605/235468922-2a5cf513-cfc2-4fb2-b226-c06acf7d7905.png)

> The middle is **10 + 17/2 -> 27/2 -> 13**. So **i=13** and it has **70**. We want **a[13] == 13 -> 70 == 13**, **NO**.  If we go to the **right** then **i=14** and the value will be **more than 70**, which is not possible, so we cannot go **right**. If we go to the **left** then **i=12** and the value is **less than 70**, which is possible, so we got **left**.

![image](https://user-images.githubusercontent.com/54589605/235469714-1775365a-d82f-4e66-87f3-ebddf63c6179.png)

> The middle is **10 + 12/2 -> 22/2 -> 11**. So in **i=11**, the value is **15** and it is not **a[i] == i**. If we go to the **right**, then **i=12** and value is **more than 15**, then it is not possible. If we go to the **left**, then **i=10** and the value is **less than 15**, possible, so we have to go **left**.

![image](https://user-images.githubusercontent.com/54589605/235470371-9fb9ddb8-aabe-4810-ad35-d22ccf3d234a.png)

> The middle is **10 + 10/2 -> 20/2 -> 10**, we have only **one** element which is **10** only so, it is a **small** problem. So for **i=10**, the value is **10** and it satisfies the condition which is **a[i] == i -> a[10] == 10 -> 10 == 10**, **YES**. The condition is **satisfied**. So, we will **return** the **index** which is **10**, **return index -> return 10**.

* Worst case -> log n
* Best Case -> 1

![image](https://user-images.githubusercontent.com/54589605/235471189-b780eb15-959f-4371-ae07-0b1f3b161d04.png)

* If we can decide, which side, we want to go, **left or right*** then **binary search** is possible.

> If **9th person's** value is **6**, then **10th person's** value is **more than 6** as it is an **increasing sorted** array. So, there is **hope**. For **8th person's** value is **less than 6**, so, **no hope**.

![image](https://user-images.githubusercontent.com/54589605/235472005-399de7f7-78ce-4cbb-a586-a771eea43aed.png)

* Using the above logic we can decide, which side, we want to go, **left or right** then **binary search** is possible.

* If we are at the **middle** and we can't decide which side to go, then **binary search** is **not possible**.

* If we are at the **middle** and are able to decide which side to go, then **binary search** is  **possible**.

> If **9th person's** value is **6**, then **10th person's** value can be **anything**, if the array is **not sorted**. For **8th person's**  value also, it can be **anything**, as the array is **not sorted**. 

> We cannot say clearly that if the element is present on the **left or right** side. Then, we have to **verify**, both the sides, this is called as **dilemma**.

* If array is **not sorted**, then **binary search** is not possible.
* If the array is **not sorted**, then we can't take decision to go either **left or right** side, when we are at the **middle**, it is called  as **dilemma**. Both the side people are saying **maybe**. So, we cannot go blindly to either one of the sides. Both the side,**maybe**, so **binary search** is not possible.

* How to decide, if binary search is possible or not?

> Go to the **middle**, if we can go to the **left** only or to the **right** only, then **binary search** is possible, otherwise, if go either **left or right**, it is **dilemma** and **binary search** is not possible.

> When we are in the **middle** and unable to decide which side to go, either **left or right**, dilemma happens, that's why **binary search** is not possible.

> If we try both the sides, then it is called as **linear search**. **Linear search** means covering everyone.

> **Binary search** means **covering only one side**.

![image](https://user-images.githubusercontent.com/54589605/235477934-61c6234b-c281-497d-9232-296c278695e6.png)
![image](https://user-images.githubusercontent.com/54589605/235478189-9d6c3c10-c270-48e5-8f8d-5dc6689c633f.png)
![image](https://user-images.githubusercontent.com/54589605/235478499-28e9c8fb-ff25-4cd1-8574-7034c0627d4f.png)
![image](https://user-images.githubusercontent.com/54589605/235478803-1e5d78ae-1861-4f79-97bb-726c4de169b8.png)

> If we should be able to resolve otherwise we will not be able to proceed further.

* In the above problem, if **sorted** keyword is not there, then only **linear search** is **possible**, **binary search** is **not possible**.

* In the above program, if **sorted** keyword is not there, then time complexity is **n** because only **linear search** is **possible**.

![image](https://user-images.githubusercontent.com/54589605/235479676-3b34bb92-499d-48c7-b1f7-4c43003f5ff4.png)

* In the above problem, if **distinct** keyword is not there, but **sorted** keyword is there then?

> So, if **sorted** is there but **distinct** is not there, then **binary search** is not possible. [**Answer, explained below**]

> If **10th person** is **13**, then **11th person** is **greater than equal to 13**. **12th person** is **greater than equal to 13**. **13th person** is **greater than equal to 13**, there is a change that **13th person** is **13**.

> If **10th person** is **13**, then **repetation** is possible on the **right** side.

![image](https://user-images.githubusercontent.com/54589605/235480051-66b39c69-1bad-41a1-8b58-f4e51a78b35d.png)

> If **10th person** is **13**, then **10th person** is **less than equal to 13**. Then, **left** is also possible.

* If **distinct** is not there, then both the **sides** are possible.
* So, if **sorted** is there but **distinct** is not there, then **binary search** is not possible.

![image](https://user-images.githubusercontent.com/54589605/235480483-a721337d-4f82-46a6-876f-d809e21f9ca6.png)

* If array is **sorted**, then **binary search** is guranteed possible?

> **NO**. See the above example only. **Sorted** array but **non-distinct**, binary search was not possible.

* If array is **sorted**, then **binary search** is **maybe**. No gurantee.

* If array is **not sorted**, then there is **no change** of **binary search** is there. Confirmed, no way.

![image](https://user-images.githubusercontent.com/54589605/235481448-149da0f4-9cd7-44fd-ba8d-1d3bed8f6ab2.png)
![image](https://user-images.githubusercontent.com/54589605/235482179-44a25af0-1f6b-4708-ac69-a1905f9e0571.png)
![image](https://user-images.githubusercontent.com/54589605/235482290-3896850c-63a0-4295-a77a-9a0e76a918d6.png)

* For the above program.
* Not sorted, then **binary search** is **not possible**. 
* Sorted but distinct is not there, then also **binary search** is **not possible**

## DAC-V (26) [1st May 2023]

![image](https://user-images.githubusercontent.com/54589605/235490799-cdfa5077-10f8-4c15-877c-bbb7ae424059.png)
![image](https://user-images.githubusercontent.com/54589605/235491405-fea5df5a-37d0-47a6-9b70-dffdd6316ec0.png)

* **n^(log a base b)** is **bigger**. It is **bigger** by **log n/ root(n) -> log n/n^(1/2)**. Because there is **roo(n) or n^(1/2)** also, that's why it is **bigger** by **polynomial** times, as we are **dividing** by **polynomial** times.

> As, **polynomial** time **bigger**, so **case 1 and 2** of master's theore, which means whoever is **bigger** is the **answer**. So **O(root(n)) -> O(n^(1/2))** is the **answer**.

* If only **log n** was there then we would have to go to **case 2** of master's theorem. 

![image](https://user-images.githubusercontent.com/54589605/235491973-26d362e1-a65d-4f54-8e77-d0eaa8fd5753.png)
![image](https://user-images.githubusercontent.com/54589605/235492021-4c239588-b9ab-4762-a56e-65da2ca8e475.png)
![image](https://user-images.githubusercontent.com/54589605/235492337-a78c1cfc-1a25-46bd-987e-b3d84b6faaf4.png)

* Both the **side**, it can be possible. So, **binary search** is not possible.

![image](https://user-images.githubusercontent.com/54589605/235492963-89d0ff7d-5523-429d-8085-2ff0092c64fb.png)

* Input -> An array of 'n' elements in which, until some position all are integers and afterwards all are infinite.

* Array is not sorted. No mention of positive numbers.

![image](https://user-images.githubusercontent.com/54589605/235494294-77f5b16d-aefa-4941-b0f8-69cd4ec2bc43.png)

* Until which position, integers are there?

> Still **16th** index. 

* What will be the **output**?

![image](https://user-images.githubusercontent.com/54589605/235494790-0ab4f385-d72d-4b11-a474-fdb668109590.png)

1) First try linear search
2) See the best and worst case of linear search
3) Applications/improvement of linear search. Try to improve it. Binary search possible or not.

![image](https://user-images.githubusercontent.com/54589605/235565953-561e8a3c-e7e1-4115-96e0-d47cdeda79c6.png)
![image](https://user-images.githubusercontent.com/54589605/235565972-34ddd544-65f1-4db8-8b00-1d1418eefe17.png)
![image](https://user-images.githubusercontent.com/54589605/235566080-5d3cb86a-9aeb-4a64-b85b-7298715f72bc.png)

1) First algo is linear search.
2) Worst case is **n** and best case is **1**, for linear search. Worst case is mentioned so we will consider **n** only. If nothing mentioned then consider/find out all and we will use **O(n) or Omega(1)** in that case, as all cases agree to **O(n) or Omega(1)**.

![image](https://user-images.githubusercontent.com/54589605/235566682-1eb61338-82e3-45c6-963f-4df5b4f9a38a.png)

> As mentioned in the question, **worst case**, so we only have **n** and we can say **any symbol(O,omega, theta)**.

![image](https://user-images.githubusercontent.com/54589605/235566999-f9a661e7-8533-4959-a877-7931f45cb73e.png)
![image](https://user-images.githubusercontent.com/54589605/235567066-b244f1e7-458a-4a0e-8862-7b7b7e7f7d94.png)

> See the options for the **question**, if **n** is there and **less than n**, no one or not there. Then **n** is the **answer** and we can stop.

> If **less than n** there in the **options**, then we can to **continue**. If **log n** there, then **signal came**, **binary search** possible. Could be a trap a well.

![image](https://user-images.githubusercontent.com/54589605/235569536-a323ae42-ffcc-4493-9c06-1ae2ba51ea7c.png)

3) Try binary search. Array is not sorted. Go to the middle element, which is **1+30/2 -> 31/2-> 15**. Ask if **15** is **integer or infinite**. **15** is **integer**, but we want **infinite**, we should go to **right**, as mentioned in the question that **after some integer, all are **infinite**. There is no **dilemma**.

![image](https://user-images.githubusercontent.com/54589605/235570524-05caa5d9-6141-4439-871c-73e6749fe39c.png)

> Again go to the **middle**. The middle is **16+30/2 -> 23**. **23** is **infinite**, now ask if **before** is **infinite** or not. We will get to know if it is the **first, middle or last infinite**. We got to know that it is the **middle** infinite as there are **infinites** to the **left** as well. We want the **first infinite**, so we **go left**, to find the **first infinite**.

![image](https://user-images.githubusercontent.com/54589605/235571247-75a53016-9dfa-436c-bb76-95f9f8213592.png)

> Again go to the **middle**. The middle is **16+22/2 -> 19**. **19** is **infinite**, now ask if **before** is **infinite** or not. We will get to know if it is the **first, middle or last infinite**. We got to know that it is the **middle** infinite as there are **infinites** to the **left** as well. We want the **first infinite**, so we **go left**, to find the **first infinite**.

> Again go to the **middle**. The middle is **17** only, as there is only one element, which is a **small problem**. **17** is **infinite**, now ask if **before** is **infinite** or not. We will get to know if it is the **first, middle or last infinite**. We got to know that it is the **first** infinite as there are no **infinites** to the **left**. We got the **first infinite**. So, stop and **return** the **position** of the **first infinite**.

![image](https://user-images.githubusercontent.com/54589605/235571706-14c7ffe1-483a-479e-b8e3-b0e9bba4686e.png)

> Whenever **infinite** came, we will check if it is the **middle** person or not, by checking if there are **any infinites** to the **left**. If there are **infinites** to the **left**, then it is the **middle** infinite and we have to go **left**.

> If the **middle** is **infinite**, and the **left** is **not infinite**, then stop it. We found the  **first infinite**.

> If the **middle** is **integer**, then go to the **right**.

![image](https://user-images.githubusercontent.com/54589605/235572148-db01b9d8-b529-47d0-b2a2-3e1062a80228.png)

> Worst is maximum we **divide by 2** and get the **last element**.

![image](https://user-images.githubusercontent.com/54589605/235569922-e7d0953a-f2a2-42b7-ac7c-77f9f63bb5e8.png)

* Array is **sorted**, **according to the requirements** of the question/problem. Physically not sorted but logically sorted.
* Don't judge, **sorted or not** from outside.
* Array **not sorted**, we will not apply **binary search** -> **JUST SHUT UP**. It is logically sorted, **according to the requirements** of the question/problem.
* We have to go **inside** and verify if the array is **sorted or not**. Don't judge from **outside**.

* Worst case for bianry search -> log n
* Best case for bianry search -> 1

![image](https://user-images.githubusercontent.com/54589605/235572966-31593503-a0e1-4aea-bfa3-ebc6723acef4.png)

* Best case example.
* We are not interested in **Best case**, as worst case is asked in the question.

![image](https://user-images.githubusercontent.com/54589605/235573110-511469f9-c1a2-434a-8245-275dfde386a2.png)

* Both, **theta(log n) and theta(n)** both are given in the options. Then we should select **theta(log n)** as it is the **best algorithm** and the **worst case time complexity** as **asked/mentioned** in the question.

* We can use **theta** because only **worst case** asked so **one case** and **one choice** only. 
* From **outside** it looked like **binary search** is not possible. Go inside and verify.
* Array sorted according to problem.

![image](https://user-images.githubusercontent.com/54589605/235573600-a3a73c19-c9db-42cf-bd0d-757f4972448b.png)
![image](https://user-images.githubusercontent.com/54589605/235573623-ad60401d-4fd9-4068-a1bc-68cf9ee022ef.png)
![image](https://user-images.githubusercontent.com/54589605/235573656-3b05c1d0-eb72-4e14-ba0a-3d6a307a58b7.png)
![image](https://user-images.githubusercontent.com/54589605/235573684-993312e3-178a-4829-9097-48d12964e3a6.png)

* We want the **last integer**.

> Middle element is **12**, ask if it is **integer**. It is **integer**. We asked, **right** if it is **integer** or not, it is **integer**. So, we go to the **right**.

> Middle element is **22**, ask if it is **integer**. It is **infinite**. So, we go **left**.

> Middle element is **17**, ask if it is **integer**. It is **infinite**. So, we go **left**.

> Middle element is **15**, ask if it is **integer**. It is **infinite**. So, we go **left**.

> Middle element is **13**, ask if it is **integer**. It is **integer**. We asked, **right** if it is an **integer** or not, it is **integer**. So, we go to the **right**.

> Middle element is **14**, it is the **only one element**, so it is a **small problem**. Ask if it is an **integer**. It is an **integer**. We asked, **right** if it is an **integer** or not, it is **infinite**. So, we found the **last integer**. Now stop, and return the **position** of the **last integer**.

![image](https://user-images.githubusercontent.com/54589605/235574145-a9de34d4-2080-46ce-95b6-0b99e86491bf.png)
![image](https://user-images.githubusercontent.com/54589605/235574289-bbf9ce06-4d59-4c41-9de2-84b91f29ca27.png)
![image](https://user-images.githubusercontent.com/54589605/235574796-869d1555-32cf-4538-ae34-78cef9012f7f.png)

* **n** becomes **log n** is great achievement. This is the meaning of **making apps faster**.

![image](https://user-images.githubusercontent.com/54589605/235574865-d2beee24-f16c-4398-b44b-f141bacdb9f9.png)
![image](https://user-images.githubusercontent.com/54589605/235575007-40b3853e-526b-4cc7-bde8-4c482b9b064f.png)

* If we write **n distinct elements**, then how we will write that many **infinites**.

![image](https://user-images.githubusercontent.com/54589605/235576074-bfc40379-1fda-46f0-ab8f-d90d48b36c00.png)

* Assume 'n' is unknown and after array, all the symbols in memory are '#'.

* If **size** is **unknown**, how we will know that **array** is over.

![image](https://user-images.githubusercontent.com/54589605/235576177-09849ad4-9ab7-4634-a13e-27e99b7df573.png)

* Array having size but we don't know the **size**. We cannot tell when the array is over.
* We cannot use **n**. Be careful.
* Linear search is possible because we will take a **loop** and **search** until we find an **#**, then we stop.

![image](https://user-images.githubusercontent.com/54589605/235576489-658f58eb-e957-4ccd-b437-f18493bf0bb1.png)

> When we see the **first #**, it indicates that the array is over. Stop it and say not there. If we are lucky then we will find the **first infinite** in the array.

> We haven't used **n** anywhere.

![image](https://user-images.githubusercontent.com/54589605/235576686-e5224527-f96b-4ab1-a086-4ec55622e227.png)
![image](https://user-images.githubusercontent.com/54589605/235576779-d0bbe87e-63c8-44b2-8104-003d6cab6b58.png)
![image](https://user-images.githubusercontent.com/54589605/235577263-4d63ca6a-b539-46a3-a980-105fd975561b.png)

* We haven't used **n** anywhere in the code.
* Worst case -> n.

![image](https://user-images.githubusercontent.com/54589605/235577381-9c77b9a3-77fe-427c-be2f-a52a625f2294.png)

* Binary search is not possible because we can't go to the **middle** element or find the **middle** element because we don't know the value of **n**, it is **unknown** or not given in the question.

* As **binary search** is not possible, so, **linear search** is the **best algo**.

![image](https://user-images.githubusercontent.com/54589605/235577644-66a7c918-03d7-4ece-994c-88ce8dc968c5.png)
![image](https://user-images.githubusercontent.com/54589605/235578150-4be90167-e7d6-41d6-be3b-05437711bd0d.png)

* Binary Search.

* We are doing **i * 2**. We are jumping by **double**.

![image](https://user-images.githubusercontent.com/54589605/235578381-98737b4e-3dc1-4eef-8a09-044e8181f8d2.png)

* If we know **n** value then do **divide by 2**.
* If we don't know **n** value then do **multiply by 2**. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/235578531-7a137400-d16d-40c6-9e4e-93fc920eb274.png)

* We still want to find the **first infinite**.

> We are starting from **first**. We are asking if the first element is **infinite** or not. It is an **integer**, so, we will go to the **right**. We are **multiplying**, **i * 2**, every time we more to the **right**. Now, after **3-4** jumps, we have reached/entered to the **infinites**. Now, in the given area from **start or 1st index** to the currenct index which is **16**. So the **first index** is **1** and the **last index** which is **n** is **16**. So, now we can  do **binary search** in that area as **n** value is **known** now and also the **answer** is there in that area only.

* **Binary Search** steps:

1) We took **log n** time to find the **infinite** at the **16th** index, as we did **double** by **multiplying**, **i * 2**.
2) **One binary search** for finding **n** value is **log n**.

* We took **log n** time to find the **n** value.

3) Now do normal, binary search to find the **first infinite**. 

> Middle element is **8**. It is an **integer**, go to the right.

> Middle element is **9 + 16/2 -> 12**. It is an **integer**, go to the right.

> Middle element is **13 + 16/2 -> 14**. It is an **integer**, go to the right.

> Middle element is **15 + 16/2 -> 15**. It is **infinite**. Check **before**, it is **not infinite**, then this is the **first infinite**. Now, stop and return the **position** of the **first infinite**.

![image](https://user-images.githubusercontent.com/54589605/235581015-b64dc29a-6f24-4b32-93bd-3d8afe832d18.png)

* First find **n** value, for that apply **binary search**.
* So **log n + log n -> 2 * log n -> log n**.
* Binary search **possible**.

![image](https://user-images.githubusercontent.com/54589605/235581221-89ae1e7f-5d57-463f-badf-07dfd5817ff5.png)

* Binary search means **divide by 2** as well as **multiply by 2**, both meaning are **same** they are coming from **two** different directions/angles. [**IMPORTANT**]

* So, binary search is possible in the **above problem**.

![image](https://user-images.githubusercontent.com/54589605/235579802-3471c931-86ac-4f9b-86e8-dfc2552b8fd9.png)

* Previous problem and the above(current) problem is the **n**value. It was known in the **previous problem** but it is unknown in the **above(current) problem**.

* Algo means **logics**. Learn logics.

![image](https://user-images.githubusercontent.com/54589605/235581307-25f6650f-91bc-414b-9943-8cf30d6e1ab0.png)
![image](https://user-images.githubusercontent.com/54589605/235578703-819a8e6d-b532-4d4e-aa22-036abadfa317.png)

* Practice like **sir**.

![image](https://user-images.githubusercontent.com/54589605/235581640-5639bf85-cf90-4823-9ea1-c5ac94fe9af6.png)
![image](https://user-images.githubusercontent.com/54589605/235581801-0831236a-fde7-49df-8be6-d1d50bbc325d.png)

* We are multiplying **i * 2**, because we want to find the value of **n** as it is **unknown** in the **above** question.
* If we go **slowly**, **i**, then it will be **linear search** only and time complexity will be **n**.
* If we go **fast**, multiplying **i * 2**, then it will be **binary search** only and time complexity will be **log n**.

![image](https://user-images.githubusercontent.com/54589605/235582255-7ee952f2-581b-493a-b0cb-4e70d8eabe7e.png)

> We went to **16th person** and it said it is an **integer**. Now we jumped to **32nd** person. **32nd** person said **#**. We crossed the array. Keep the **marker** at **32** only.

> Now, apply **binary search** from **1st to 32nd** person. The **n** value is **32** only. 

> Find the middle element, it is **1 + 32/2 -> 17/2 -> 16**. It is **integer**, go to the **right**.

> Find the middle element, it is **17 + 32/2 -> 49/2 -> 24**. It is **infinite**, check before, if it is an **integer** or not. It is **infinite**, go to the **left**.

> Find the middle element, it is **17 + 23/2 -> 40/2 -> 20**. It is **infinite**, check before, if it is an **integer** or not. It is **infinite**, go to the **left**.

> Find the middle element, it is **17 + 19/2 -> 36/2 -> 18**. It is **infinite**, check before, if it is an **integer** or not. It is **infinite**, go to the **left**.

> Find the middle element, it is **17 + 17/2 -> 34/2 -> 17**, there is only **one element**, which is a **small problem**. It is **infinite**, check before, if it is an **integer** or not. It is an **integer**. So, we found the **first infinite**. Now, stop and return the position of the **first infinite**.

![image](https://user-images.githubusercontent.com/54589605/235583251-a5f2980c-694d-4ada-83ac-8ec6afc6b641.png)

* **log n** for finding unknown **n** value and another **log n** to find the **first infinite** or the **required** thing from the **question**.
'
* **log n + log n -> 2 * log n -> log n**. **log n** only.
* So, for the **above problem**, **binary search** is **possible**.

![image](https://user-images.githubusercontent.com/54589605/235583441-5e217b66-5841-4afc-a39d-a72d09a69156.png)

* When we are multiplying **i * 2**, to find the **n** value, if we cross the array, there is **no problem**.
* If nothing mentioned about **no #** present after **array** is over, then it is a **serious issue**. There should be some marker to say that **array** is over. Use that market and stop it.

* If **integers and infinites** are **randomly** there in the **array** then we can apply **binary search**?

> **NO**.

![image](https://user-images.githubusercontent.com/54589605/235583966-2c65a799-dabe-49a9-a74c-c29e4090c1ec.png)
![image](https://user-images.githubusercontent.com/54589605/235584031-74f2c733-f7b7-4fdc-b6b5-582c88581c6b.png)

* We will not know, if **array** is over or not. Continued to **infinite**.

![image](https://user-images.githubusercontent.com/54589605/235584315-e811343c-a168-48bc-a5db-cf4574ea3c5c.png)

### Next Question

![image](https://user-images.githubusercontent.com/54589605/235584910-76752a6b-fc8b-4bb0-84e6-2f3eb783553c.png)

* Input -> Sorted array of n-distinct positive integers.
* Output -> Find any 2 elements a and b such that a + b > 1000.

![image](https://user-images.githubusercontent.com/54589605/235585567-d5cc6ff3-aafb-4a51-8a86-24a55c4b071d.png)

* Find time complexity. [Best Algo and worst case]

* We have to find out **2** elements, **a and b**.

* Steps:

1) First apply linear Search.  

![image](https://user-images.githubusercontent.com/54589605/235585768-5c40b646-9c03-45ee-8402-01813d2fd9cc.png)

* If **a + b > 100**. Otherwise increment **b** or go to the next **b**.

> We are asking **one by one** and **a** is **asking**, every other person. It is asking, I am **a** is confirmed, if you are **b** or not. 

> If anyone satisfied then stop it, otherwise continue.

![image](https://user-images.githubusercontent.com/54589605/235586603-4222b10e-4fbd-4747-af93-bc2c19f40073.png)
![image](https://user-images.githubusercontent.com/54589605/235586885-daf8a61e-e7f4-403f-895a-5ab45c5b2244.png)
![image](https://user-images.githubusercontent.com/54589605/235586905-6cd330d4-d516-43e8-8b85-e5e7ea1f5732.png)

* We need **two** for loops here.

![image](https://user-images.githubusercontent.com/54589605/235587089-cc9a0c27-ecd2-4704-8a9f-cc39b028ee7d.png)

* Fix **a** value and rotate **b** value.
* Using **linear search** we know how to find **one element or value**.
* **n** time linear search happening.
* Two inner loops, we have to **multiply**.

![image](https://user-images.githubusercontent.com/54589605/235587629-2362451f-cbfd-4842-8015-da0ca82c6934.png)

* For finding **3 elements or people**, we need **3 loops**.

![image](https://user-images.githubusercontent.com/54589605/235587762-bfc45508-4589-40a1-b54d-f49ffc16a3b4.png)
![image](https://user-images.githubusercontent.com/54589605/235587913-d94123cb-2905-4513-a16b-03406e34d839.png)
![image](https://user-images.githubusercontent.com/54589605/235588181-fb3eceb3-3a16-497a-b954-cad88aef9815.png)
![image](https://user-images.githubusercontent.com/54589605/235588203-8715a07d-2666-42da-8a1d-0f85bccd17e4.png)
![image](https://user-images.githubusercontent.com/54589605/235588407-a3a601ed-9d09-4248-b29a-cf4b1aa12abf.png)

* For finding **two** people, **time complexity** is **n * n -> n^2**.

* **LINEAR SEARCH**

* One time **linear search** -> **n**.
* So for **n** times **linear search** -> **n * n -> n^2**


* Array is sorted. So, why applying **linear search**, we can apply **binary search**.

> Fix **a** and the for **remaining** people, for **b** purpose, apply **binary search**.

> **a** will ask the **middle** person, are you **b**, so that the **sum** is more than 1000? **No**. We want **more**, and as it is a **sorted** array, we go to the **right** side.

![image](https://user-images.githubusercontent.com/54589605/235588903-e124da34-ec87-4944-afad-16a79224915b.png)

> **a** will ask the **middle** person, are you **b**, so that the **sum** is more than 1000? **No**. We want **more**, and as it is a **sorted** array, we go to the **right** side.

![image](https://user-images.githubusercontent.com/54589605/235589154-7c11124d-cc5b-4061-8c73-f9d0f45eb648.png)

* Everytime we are doing **divide by 2**, so it is **binary search**. **a** asking for **b** purpose of **binary search**.

* How much time is over till now?

> **log n** time, as we did **one** binary search.

> Unfortunately, it failed, so **a** will move/increment one position to the **right**.

![image](https://user-images.githubusercontent.com/54589605/235589571-2c70a554-5df2-4e1b-b5dd-a5808362fea1.png)

> Again fix **a** and for the purpose of **b**, apply **binary search**. 

![image](https://user-images.githubusercontent.com/54589605/235589712-a3f78808-0399-4b0b-b578-8dd36f0c83f8.png)

**BINARY SEARCH**

* One time **binary search** -> **log n**.
* So for **n** times **binary search** -> **n * log n**

![image](https://user-images.githubusercontent.com/54589605/235590397-605ab86c-c793-4ac0-b368-38c28a20fb37.png)

* We are finding **two** people.
* Binary search is going for **b** purpose.

![image](https://user-images.githubusercontent.com/54589605/235590482-5f19bbf1-a349-487b-95c4-bc27f76bb59d.png)

* For **three** people, we will apply **binary search** for **c** purpose. Only on **last** element, we apply **binary search**.

> For **a and b** there are **two** loops. So, **n^2**, but for **c** loop it is not **linear search**, it is **binary search**, so it is **log n**.

* For **three** elements it is **(n^2) * log n**.

![image](https://user-images.githubusercontent.com/54589605/235590559-fdf5e9f9-2f15-4834-ac7f-6c6eb63ef9ad.png)

* For **ten** elements it is **(n^9) * log n**.

![image](https://user-images.githubusercontent.com/54589605/235590993-7319db9b-3155-4dd4-b4fc-3e4dfcff9490.png)
![image](https://user-images.githubusercontent.com/54589605/235591024-1c4f06a8-052f-4d48-b92b-2e18bd3f6cd0.png)

* For **two** people.

![image](https://user-images.githubusercontent.com/54589605/235591080-d5d031ad-0bb4-4986-9e96-6a83393a8434.png)
![image](https://user-images.githubusercontent.com/54589605/235591100-0180f29f-c075-4268-9f61-373419e0d75a.png)

> In the above question, first try **linear search**, if in the **options**, **n^2** is there and **less than n^2** is not there, then stop it and select **n^2** as the **answer**.

> Suppose **n^2** is there and **n * log n** is also there in the **options**, then by seeing **n * log n**, we got the clarity that **binary search** is there. Now, just check if **binary search** is **possible or not**.

![image](https://user-images.githubusercontent.com/54589605/235591825-d27e4aac-d427-47a2-a688-089321af84ae.png)

* **log n** -> One **binary search**
* **n * log n** -> **n** number of **binary search** are possible.

> **n * log n** is there but **less than (n * log n)** is not there, then stop and select **n * log n** as the **answer** only.

> **n * log n** is there and **less than (n * log n)** is also there, then we have to **try** further. **YES**.

![image](https://user-images.githubusercontent.com/54589605/235592070-9cc4f06f-5a19-42ad-9389-bbf7be4a36b6.png)

* **Sorted array and increasing**.

## 3rd Algo

![image](https://user-images.githubusercontent.com/54589605/235592219-534a78fd-15bf-43db-af60-482e861dcc09.png)
![image](https://user-images.githubusercontent.com/54589605/235592443-e7c5d9a2-861b-4c23-a374-d2eadb044ac5.png)

> It is a **Sorted array and increasing**, so if the **last two** elements don't give **greater than 1000**, then no one can give.

> Either they will give or none or no one will give.

![image](https://user-images.githubusercontent.com/54589605/235592493-6df09d69-c4e2-45fe-bbaa-ace5f9922285.png)

* Return **last two elements**.
* Time complexity is O(1), since **no loops**.

> If **n^2, (n * log n) and O(1)** there, then **O(1)** is the **correct** answer.

![image](https://user-images.githubusercontent.com/54589605/235592721-08e64a4f-cf4a-4459-bde3-5b2a5947b06b.png)

* For the above problem, **3rd algo** is **better**.
* We want **best algo** and **worst case time complexity**.

![image](https://user-images.githubusercontent.com/54589605/235592961-62827eef-1316-4f54-8363-8b6fa0292c07.png)
![image](https://user-images.githubusercontent.com/54589605/235593055-9d27d842-00d3-4b9e-896e-c65245f7afe2.png)

* For the **3rd algo**, **every case(EC)** is **1**.
* **3rd algo** came from **common sense**.

![image](https://user-images.githubusercontent.com/54589605/235593121-8854053a-196e-4e93-974b-97bc9475d755.png)

* The **3rd algo** will work out for **three** people also.

![image](https://user-images.githubusercontent.com/54589605/235593261-2ae0fef0-9dac-4e0a-9ad8-3467bd559c9d.png)

* All of them will give **correct** answer.
* Only thing is **3rd algo** will take **less time**.
* Best algo is **3rd algo**.

![image](https://user-images.githubusercontent.com/54589605/235593390-359eabfe-f686-4644-bd67-ca1eda33f113.png)
![image](https://user-images.githubusercontent.com/54589605/235593406-8342c39c-1f09-41be-8516-947fa4294302.png)

* Worst Case only and if **array** is **un-sorted**. 

![image](https://user-images.githubusercontent.com/54589605/235593579-c597f98c-326b-4aff-ad95-ff36432cb7dc.png)
![image](https://user-images.githubusercontent.com/54589605/235593895-c0241ae2-4786-4c4a-bb23-b601dc497d91.png)
![image](https://user-images.githubusercontent.com/54589605/235593930-70d1f0f8-eb97-4405-ba5f-36168aac4742.png)

## Doubt_Clearing_Session (27) [2nd May 2023]

![image](https://user-images.githubusercontent.com/54589605/235653584-3dfbf039-5606-410f-9749-f2847f5ebfc4.png)

### Sorted

* Sorted(2-elements)

1) Linear Search -> n^2
2) Binary Search -> n * log n
3) Short-cut -> O(1)

* Sorted(3-elements)

1) Linear Search -> n^3
2) Binary Search -> (n^2) * log n
3) Short-cut -> O(1)

* Sorted(4-elements)

1) Linear Search -> n^4
2) Binary Search -> (n^3) * log n
3) Short-cut -> O(1)

### Unsorted

* Unsorted(2-elements)

1) Linear Search -> n^2
2) Binary Search -> 1) Sort array -> n * log n.
                    2) Binary search ->  n * log n.    

* Together -> n * log n + n * log n -> 2 * (n * log n) -> n * log n.

3) Short-cut -> 1) Sort array -> n * log n.
                2) Short-cut ->  O(1).   

* Together -> n * log n + O(1) -> n * log n.

> In **unsorted array**, between **binary search and short-cut**, **short-cut** is **better** because it is **n * log n + O(1)** but **binary search** is **2 * (n * log n)**. 

* **n * log n + O(1)** <= **2 * (n * log n)**

## 4th Algo

> In array, we know how to find **max** element. We can **scan once** and find the **max** element.

> In **one scan**, we can find **first max and first min**.

* Using **one scan**, we can find **first two max** and return them. It will take **O(n)** time complexity.
* Time complexity -> O(n).

* If we want **two** maximum, then **no need/requirement** of **sorting** the total array. Find them **directly** only.

* **STEPS**:

1) Find **first two max** directly using only **one scan**.
2) Return them.

![image](https://user-images.githubusercontent.com/54589605/235658515-92173649-9703-49c8-9842-a5059964dba8.png)
![image](https://user-images.githubusercontent.com/54589605/235658435-2e85992e-2e49-4007-9234-e6d27808a06e.png)

* **Best Answers/Best Algo**:-

* If array **not sorted or un-sorted** -> O(n).
* If array **sorted** -> O(1).

![image](https://user-images.githubusercontent.com/54589605/235658691-516f8db2-9584-4a5d-86b8-06f65c71a174.png)

![image](https://user-images.githubusercontent.com/54589605/235659065-c435a38c-3fdf-47fb-b783-21d10153c604.png)

* No **hashmap** in **algo**. Don't use it, unless mentioned in question.

![image](https://user-images.githubusercontent.com/54589605/235659294-bf662fdf-cf86-4c40-a2de-c7139d5e4f56.png)

* **YES**.

![image](https://user-images.githubusercontent.com/54589605/235659399-adda0893-2c51-4011-bcb6-dfdd752271b4.png)

* **O(n)**. Use **4th algo**, as it is an **unsorted array**.

![image](https://user-images.githubusercontent.com/54589605/235660688-c79380be-c3c6-4c3f-80cb-dd236e7f9ad0.png)
![image](https://user-images.githubusercontent.com/54589605/235660717-5958b163-0b19-4539-82e5-3048f5b86e0e.png)

* For sorted array.

![image](https://user-images.githubusercontent.com/54589605/235661051-ae20e576-ea3a-4dd3-b2b8-47141346cd9a.png)

* In the previous question it was **max** elements.
* In the above question it is **min** elements.

![image](https://user-images.githubusercontent.com/54589605/235661275-240df8ab-50b9-4f2a-a96d-7df20ae1a05c.png)

### Next question

* Input -> Sorted array of n distinct elements
* Output -> Find any 2-elements(a and b) such that a + b == 1000.

* Sorted -> O(n * log n) 
* Unsorted -> O(n * log n)

* **Binary Search** in **both cases**.
* We can see that **linear and binary** search both are possible on the **above** question.

![image](https://user-images.githubusercontent.com/54589605/235662843-c3653062-3aaf-423b-bc99-5b99ae7bf053.png)

* Wait sirji.


## 3rd Algo

* If we want **more** then **increment/move**, 'a'  to the **right**.
* If we want **less** then **decrement/move**, 'b'  to the **left**.

![image](https://user-images.githubusercontent.com/54589605/235670313-5b15f9ea-5af3-4177-bdc4-072f2b14715b.png)
![image](https://user-images.githubusercontent.com/54589605/235670401-8589f5e4-6ee8-41f7-a1b9-56ab5d7ad283.png)

* We got it with **one scan**. **a** is **increment/moving** every time because we want **more**. 

* In the **algo**, how will change, a or b?

> Depending on the **requirement**, sometimes **a** will change, sometimes **b** will change.

![image](https://user-images.githubusercontent.com/54589605/235670993-ae7bebc1-8fc5-4f05-b469-9175a990f4fa.png)
![image](https://user-images.githubusercontent.com/54589605/235671071-6296e61d-a0b9-4823-a4d7-519fec107461.png)

* It is also **one scan**. Right most **b**, moved to the **left** because we want **less**.
* **One scan** means **one loop**, so it is **O(n)**.

![image](https://user-images.githubusercontent.com/54589605/235671660-f2b43bdf-6c7d-4414-ac7d-ede21715f0be.png)

> We are getting **a + b -> 100 + 700 -> 800**, which is **less than 950**, which we want. Hence, we want **more**. We **moved** 'a' to the **right**.

![image](https://user-images.githubusercontent.com/54589605/235672198-d50fc773-00c4-47eb-a1dd-c491066162c0.png)

> We are getting **a + b -> 200 + 700 -> 900**, which is **less than 950**, which we want. Hence, we want **more**. We **moved** 'a' to the **right**.

![image](https://user-images.githubusercontent.com/54589605/235672250-f8b1cbe3-329e-40bc-ab79-934d05a17d6f.png)

> We are getting **a + b -> 300 + 700 -> 1000**, which is **more than 950**, which we want. Hence, we want **less**. We **moved** 'b' to the **left**.

![image](https://user-images.githubusercontent.com/54589605/235672881-6ec968a7-a50d-4458-a5e9-ece4b807f6ca.png)

> We are getting **a + b -> 300 + 600 -> 900**, which is **less than 950**, which we want. Hence, we want **more**. We **moved** 'a' to the **right**.

![image](https://user-images.githubusercontent.com/54589605/235673053-47d33cd6-b9ec-4746-b79a-5b0a633a2a2a.png)

> We are getting **a + b -> 450 + 600 -> 1050**, which is **more than 950**, which we want. Hence, we want **less**. We **moved** 'b' to the **left**.

![image](https://user-images.githubusercontent.com/54589605/235673270-3c5268e1-b587-4cd0-9cae-3acaf07888b8.png)

> We are getting **a + b -> 450 + 500 -> 950**, which is **equal than 950**, which we want. We got what we wanted, which is **950**. Return **a and b**.

![image](https://user-images.githubusercontent.com/54589605/235673581-5a3b47be-b220-4248-af4b-621291c9c923.png)

* Sometimes, **left** will move, sometimes, **right** will move and sometimes **both** will move.

![image](https://user-images.githubusercontent.com/54589605/235673783-1c46d6ff-f444-4dab-8dcf-52dc5c5d918f.png)

* Simply **one scan**, which is **one loop**.

![image](https://user-images.githubusercontent.com/54589605/235674434-f458ea66-0dda-44ae-a6dc-a9bbcad36040.png)
![image](https://user-images.githubusercontent.com/54589605/235674685-ea6a27ac-997c-4ce3-a733-22afbcfff4a6.png)

* If **not equal** in the **while** loop, then come **inside**.

![image](https://user-images.githubusercontent.com/54589605/235675512-97b4d567-1f0d-4f9a-8cd9-581e21d42536.png)
![image](https://user-images.githubusercontent.com/54589605/235675551-628cfe96-845f-404f-9f70-16d79f1ebac5.png)

* Elements **not found**. They are not possible.
* Time Complexity -> **O(n)**.

![image](https://user-images.githubusercontent.com/54589605/235675817-d272a7ca-94d0-4ea4-ac77-418b8814c483.png)

* Loop is **n** time, only **one scan** required.
* The options are **n^2, (n * log n) and O(n)**, then the **answer** is **O(n)**.
* Sorted array and **equal asked**, answer is **O(n)**.
* Same problem, un-sorted array and **equal asked**, answer is **(n * log n) + O(n) -> (n * log n)**. First we have to sort the **un-sorted array** which will take **(n * log n**, then apply **3rd algo**, which will take **O(n)**.

* **3rd Algo** is **not possible** if the array is **not sorted**. We have to **sort** the array first then apply **3rd algo**.


* Same problem, un-sorted array and **equal asked**, answer:

* Linear Search -> n^2
* Binary search -> (n * log n) -> (n * log n) + (n * log n)  => 2 * (n * log n).
* 3rd algo -> **(n * log n) + O(n) -> (n * log n)** [Since, we have to do sorting first]

* 2 * (n * log n) > (n * log n) + O(n) -> That's why **3rd algo** is **better**.

![image](https://user-images.githubusercontent.com/54589605/235678607-c063a01a-12e2-4e42-98c0-2abe06429200.png)

* Another name of **greedy** technique is **short-cut**.

![image](https://user-images.githubusercontent.com/54589605/235679019-3010d6f1-1fb0-4de7-8a17-2154b6906c2d.png)
![image](https://user-images.githubusercontent.com/54589605/235679307-20d3a15b-c603-485e-9ea4-d043959c510c.png)
![image](https://user-images.githubusercontent.com/54589605/235679391-69525277-6d5c-41d4-909b-c8ba8f925107.png)
![image](https://user-images.githubusercontent.com/54589605/235679773-493b0eee-fe90-4363-bf82-780fff7de074.png)

## Process

1) First try **linear search**, it will give some ideal.
2) Improvement of **linear search** is **binary search**.
3) Now try the **greedy or short-cut** algos from above to get improvement from **binary search**.

![image](https://user-images.githubusercontent.com/54589605/235680815-e86cb7f6-6ca4-4191-ae33-1ebbcaeabfad.png)

* Greedy Approach.

![image](https://user-images.githubusercontent.com/54589605/235681211-3aba41b5-a8de-4a01-bb50-cac1665e70f2.png)

* BRO. DEAD.

## 4. Merge Sort

* Sorting Technique.

![image](https://user-images.githubusercontent.com/54589605/235688721-7c5e308e-df29-4f7e-b57a-bf09c32b9547.png)
![image](https://user-images.githubusercontent.com/54589605/235688750-d498ad3c-5882-44e3-a90e-92a0524de50f.png)

* They are **different**.
* Merge sort -> Given array is converted into sorted array.

![image](https://user-images.githubusercontent.com/54589605/235714001-13edf355-f8eb-48e9-a968-8d92366a9c2f.png)
![image](https://user-images.githubusercontent.com/54589605/235715070-f6551a30-c7a1-434b-87b0-5bcbd21aa1a0.png)

* Merge sort is application of **divide and conquor**.
* One element is a **small problem**, return that element.

![image](https://user-images.githubusercontent.com/54589605/235717142-46ea5492-cece-47fe-a2d1-d68fa363f93b.png)

* Every circle is a **function** call.
* Space complexity of recursive programs depends on **no. of levels**. The **no. of levels** is **log n**.

![image](https://user-images.githubusercontent.com/54589605/235718116-65631ec8-0a8c-4cd0-af34-c1aa9fa52c49.png)

* For function calling.

![image](https://user-images.githubusercontent.com/54589605/235731650-9f9c8ec8-60d1-4b8a-90d0-9fb2e3684b62.png)

* At every **divide**, **combine** should take place.
* To do **c3**, **c4 and c5** are required. **c4** is required first then **c5**.
* c4 is a **small** problem, so return that element.
* As both **c4 and c5** are **available**, we can **combine**.
* Left is **1** element and right also **1** element. So, if we **combine**, we will get **2** elements but in **sorted** order.

![image](https://user-images.githubusercontent.com/54589605/235734816-8b28a258-20e8-4814-9732-11b8cfdf6783.png)

* Left and right person become **two** people in the **sorted** order, then that process is called as **combine**. It is also called as **merge**. **Combine** is nothing but **merge**.

![image](https://user-images.githubusercontent.com/54589605/235735271-fe946e06-9c9a-4732-b19b-92b380604039.png)
![image](https://user-images.githubusercontent.com/54589605/235736405-b7acf89e-9bb9-4579-9bda-72530a474bfe.png)
![image](https://user-images.githubusercontent.com/54589605/235736425-1e8b756e-16dd-4629-92aa-b11b7a4bede7.png)

![image](https://user-images.githubusercontent.com/54589605/235738628-f7c0e5dc-7f18-49d5-b354-ba80cfd9cc7b.png)

* Top of the **stack** is **c1**.

* For **c9**, **c10 and c13** are available. Because both are available, we have to **combine**. **c9** has **2** elements and **c13** has **1** element. So, total is **2 + 1 -> 3** people in the sorted order.

![image](https://user-images.githubusercontent.com/54589605/235739072-b0b0072d-521a-4cc2-8bb7-5ee5ab0afd40.png)
![image](https://user-images.githubusercontent.com/54589605/235739102-f5eb29a1-6d77-4166-b680-e6dd3577004e.png)

* Top of the **stack** is **c1**.
* For **c1**, **c2 and c9** are needed and they are available. **c2** has **4** elements, **c9** has **3** elements. So, total is **4 + 3 -> 7** people in the sorted order.

![image](https://user-images.githubusercontent.com/54589605/235739428-f597d84b-d699-4717-960d-d7c17a5e0eeb.png)
![image](https://user-images.githubusercontent.com/54589605/235739477-4a9ccedd-6a37-408b-87f7-6cedb7498ca1.png)

* We got **sorted order**.
* There is **Divide(), small(), solution(), combine()** within **merge sort**. The **combine()** is called as **merge** in merge sort.
* **6** times divide, means **6** times combine.
* **1** divide time or simply divide time is **constant**.
* **1** combine time is not **constant**.

> If total elements is **n**, then the **left side**, is **n/2** and right side is also **n/2**.

> To **combine** both the **n/2** elements from **left and right**, it would take **n** time. One **merge or combine** will take **n** time.

* **merge or combine** is costlier than **divide**.

![image](https://user-images.githubusercontent.com/54589605/235741242-c791a2a9-9462-4dd0-a3fc-a75bb6d0154b.png)
![image](https://user-images.githubusercontent.com/54589605/235741301-2df2447b-e916-433e-8b9c-4c07e017ca3c.png)
![image](https://user-images.githubusercontent.com/54589605/235741409-a59a670e-4c8f-41f5-a66e-58745ff37563.png)

* All are **same**.
* We are dividing at every level.
* Dominator is **combine** time.

* At every level, we are doing **merging**. At every level it will take **n** time, we have **log n** levels, so it is **n * log n**.
 
## DP-VI (28) [3rd May 2023]

* **Log n** levels in the tree. Because we are always **dividing by 2**.
* First level, we have **1** divide. Every function call, we will **divide**.
* At every division, there is **combine** also.

![image](https://user-images.githubusercontent.com/54589605/235836634-fe00da11-8fc1-406a-a589-55fd34760280.png)

* In the bottom level, there are **n** groups. Every group contains **1 element**.
* In the 2nd last level, there are **n/2** groups. Every group contains **2 element**. So, it is **n/2 * 2 -> n**. So at the end of the day, it is **n** people only.
* Groups are **compressing/decreasig** but the **no. of elements** remain the **same**.
* First level has **1 group**, containing **n**  people/elements. 
* Every level, containing **n** people/elements.

![image](https://user-images.githubusercontent.com/54589605/235839600-4b022af9-3979-4292-928d-4c87b1bcbb5d.png)
![image](https://user-images.githubusercontent.com/54589605/235839698-17eaab75-5bd6-4b61-95b9-897b6ee5a54b.png)
![image](https://user-images.githubusercontent.com/54589605/235839863-a0cd1c29-43b5-4656-b416-09ae0ac52d53.png)

## Merge() or combine()

* Merge is **two sorted sub-arrays**. Merge is the other name for **combine()**. It is different from **merge sort**. Merge sort is superset of **merge**.
* Even if we have **two sub-arrays**, then also we cannot go to **merger**, we need **two sorted sub-arrays**.

![image](https://user-images.githubusercontent.com/54589605/235840746-1a45ee71-1f2b-46fa-b981-c757df0978de.png)

* **One(1) sorted sub-array**,apply **binary search**.

* If in any problem, more than **one** sorted array given?

> Apply **merge algorithm** not **merge sort**.

* If in any problem, only **one** sorted array given?

> Apply **binary search**.

## Summary

* **Merge algorithm** input -> **two sorted sub arrays**
* **Merge sort** input -> **One array**.

![image](https://user-images.githubusercontent.com/54589605/235844003-421a3acf-17d7-4ebf-a433-83d483893e89.png)

* After every comparison is over, **move** or do assignment, whoever is **winner**, **move** them.
* As only **41** is left, as there are **no elements** to fight with, it, cannot fight further.
* No change of **comparison** further, so we just simply **copy 41** to the **last place**. 

![image](https://user-images.githubusercontent.com/54589605/235844552-7585b3c4-6ec4-401c-b90d-7cb1d968941b.png)

* If there are **m** elements in first arrray, **n** elements in second array then the **no of comparisons** is **m + n -1**.
* No. of moves is **m + n**.
* Time complexity of **merge algorithm** is **moves** only, as somethings **comparisions** may not be there, but every element **move** is there.

![image](https://user-images.githubusercontent.com/54589605/235845103-e9c40ded-23f5-4a2f-9a3e-f5209d0948a7.png)

* Time complexity of **merge algorithm** -> O(n).

![image](https://user-images.githubusercontent.com/54589605/235845540-8c9b84aa-0fe9-4e2e-9a08-0677ce2a2741.png)

* In the **A** group, the two arrays are **individually** sorted.
* In the **B** group, the array is **completely** sorted.

![image](https://user-images.githubusercontent.com/54589605/235846602-3f181c36-0c8e-42e2-b4f7-a272f07da25c.png)
![image](https://user-images.githubusercontent.com/54589605/235846690-71643961-f131-4bf9-a5c7-3675391ecce6.png)
 
* Elements are always going from **same** group, that is also **small group**. Here, **n=3** and **m=6**, so **n** is **smaller**.

![image](https://user-images.githubusercontent.com/54589605/235884820-740f3ec3-e629-40eb-bc92-a0ce58864d4f.png)
![image](https://user-images.githubusercontent.com/54589605/235885295-c62c9b63-23dc-4b58-8603-0247fcd8c039.png)

* This is an example of **merge algorithm** with **best case**.

![image](https://user-images.githubusercontent.com/54589605/235885442-4bb10575-676f-4bce-8b46-ca703091fae4.png)

* This is an example of **merge algorithm** with **worst case**.
* It will take much more time.

* Whether it is **best or worst** case, **time complexity** is the **same** which is the **no. of moves**. Moves are **same** only **m + n**.
* From **best to worst** case, the **no. of comparisions** are **changing(increasing or decreasing)** instead of **no. of moves**.

![image](https://user-images.githubusercontent.com/54589605/235886337-8d8e49f2-9f9f-497c-84d8-740209a8d4d8.png)
![image](https://user-images.githubusercontent.com/54589605/235886414-0cca4378-dfaf-4920-ae77-37d5af40df5c.png)

* If we are asked any algo's **best and worst** case time complexity, shpuld we bother about **input order or input size**?

> **Input order**. Don't think about **input size**. We are bothered about **logic** and not **size** here.

* **Any case**, the **no. of elements** is **same(n)**.
 
> Whenever **merge algo** is going on, we are taking **another array**, where the **merge algo** is happening. **YES**. We are taking some **extra space** from outside. That's why **merge algo**, happens on the **outside/outplace**.

![image](https://user-images.githubusercontent.com/54589605/235890040-0cc7b7c2-c083-4302-b741-f99851da584e.png)
![image](https://user-images.githubusercontent.com/54589605/235890066-a24fcd88-bba9-427f-a777-235621158521.png)

* We can take **max** of **log n** extra space. We have taken an extra array of size **n**. As, **n** is greater than **log n**, so it is considered to be **outplace**.

* Why **merge sort** is **outplace**?

> When doing **merge sort**, we are taking **extra space**. We are taking **more than log n**, which is **n**. As we took an array of size **n**.

> We want to say that we have taken **more space**. If really needed then take.

## Note[**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/235892745-0e273ddb-c59f-464b-a8c2-c7801b9ebc5c.png)

* Merging 2-sorted sub-arrays each of size **m and n** will take **O(m + n)**.

> It is for **every case(EC)**, because **moves** are always **m + n**. It is called as **outplace** algorithm. **Outplace** means we have take **more space** than **log n**.

* To save **time**, we have take **extra space**.

* Moves are always **bigger** than comparisions.

* If we won't want to take **more space**?

> If we take **less space**, then the time complexity of **merge algo** will be **O(m * n)**.

> It is **worst case** and it is **in-place** algorithm because we have not take any **extra space**.

![image](https://user-images.githubusercontent.com/54589605/235895186-c0bdbd23-6572-45a3-95fc-8c565889e1c0.png)

* In-place -> **Less space**, so time is **more**. Time is **m * n** more.
* Out-place -> **More space**, so time is **less/decreased**. 

* If **m=10 and n=20**, then for **In-place** algo, where **more** space is taken, time complexity is **O(m + n) -> 20 + 10 -> 30**.

* If **m=10 and n=20**, then for **out-place** algo, where **less** space is taken, time complexity is **O(m * n) -> 20 * 10 -> 200**.

* **Time and space** both are important. But **time** is **more important** than **space**.

![image](https://user-images.githubusercontent.com/54589605/235895899-03b02476-7401-4052-909f-b46dca5a6552.png)

> We don't discuss **in-place** because it takes **more time** than **out-place**.

![image](https://user-images.githubusercontent.com/54589605/235896011-6e27fdd8-46a2-48e7-93ad-4e38fd4c15a4.png)
![image](https://user-images.githubusercontent.com/54589605/235896598-7dbb23df-b551-443d-b96a-bd26a911b77e.png)

* **Inplace** algo.

![image](https://user-images.githubusercontent.com/54589605/235897012-91684108-82c2-4a05-8a47-661a9ab522e7.png)
![image](https://user-images.githubusercontent.com/54589605/235897626-4d9f0d16-3e5f-4b9d-be45-ce688b932010.png)
![image](https://user-images.githubusercontent.com/54589605/235897995-af4c86d4-1c01-4c47-b067-48ab047af1c5.png)

* Not required.

* Inside **merge sort**, **merge** is there then it is **out-place**.
* If we try to **decrease space**, **time** is **increasing**. 

![image](https://user-images.githubusercontent.com/54589605/235898022-cfa22261-1592-4559-884c-b5d212803a63.png)

* Meaningful **merge**.
* In **merge sort**, **combine** is **careful** but **divide** is **blind divide**, as we have not done any **comparisions**.
* Blind division is **O(1) or constant**, **advantage** is that they are **fast** or take less time.

* Who is rectfying **blind divide's** mistakes?

> **Combine()**.

* **Combine()** is meaningful combine.

![image](https://user-images.githubusercontent.com/54589605/235899146-388ad5a0-836d-4e19-830c-071a8e09938a.png)

* Above is **VERY IMPORTANT**.

![image](https://user-images.githubusercontent.com/54589605/235899294-8b1e7333-53e8-4c30-bd00-ea76e5aef5c6.png)

* For **min** comparisions, one group only, which is **smaller**.

![image](https://user-images.githubusercontent.com/54589605/235899432-cb39e89b-9283-4a02-bfd0-9721cdc9ad12.png)

* For **min** comparisions, both group will come, which is **m + n -1**. Last element is **excluded**.

![image](https://user-images.githubusercontent.com/54589605/235899658-dd79c0fd-2138-4e46-9930-28c640eaf344.png)

* **Moves** is always **bigger** and it is the **time complexity**.

![image](https://user-images.githubusercontent.com/54589605/235899734-7c0381a1-9cbc-4994-9fd7-b5e0523c5c34.png)
![image](https://user-images.githubusercontent.com/54589605/235899899-83ea5e82-441f-47f6-a8df-cd9ea1184083.png)

## Doubt by student

![image](https://user-images.githubusercontent.com/54589605/235900221-152271f4-f186-4531-8070-8d0d7e8b927c.png)
![image](https://user-images.githubusercontent.com/54589605/235900258-7f0c63f2-9a85-4dc4-907c-84d4f9eceee9.png)
![image](https://user-images.githubusercontent.com/54589605/235900633-5436c3fc-0860-4b2c-9a46-134f364b9e49.png)

> He's comparing **last element** of **first** array and **first element** of **second** array. Which is **incorrect** or **wrong**.
> It should be comparing **first element** of **first** array with **first element** of **second** array. This is **correct**.

![image](https://user-images.githubusercontent.com/54589605/235900806-9c300e68-b185-4e8f-88dc-1edbf85b1d94.png)

* This is possible if they ask in the question to modify the **merge sort** algo in such a way that it gives certain time complexity?

> We can try then, the above one.

* Worst case matters.

![image](https://user-images.githubusercontent.com/54589605/235901198-9ba98e83-65f5-438f-823f-60500a920e6c.png)

* Algo is **fixed**. We can change the **input**.
* Without touching the algo, change the **input** and see which **input** matches the **best, worst or average** cases.

## Merge Sort Algorithm

* **One** array.

* merge(a, i, mid); -> Sorts the **left** part.
* merge(a, mid + 1, j); -> Sorts the **right** part.
* **Left and right** part are **individually** sorted.
* merge(a, i, mid, j); -> **Merge** algo. It is the **combine** part.

* **Merge algo**, time complexity is **moves** only.

![image](https://user-images.githubusercontent.com/54589605/235902699-cefce45b-cb31-4afc-ae92-34b485bb41ee.png)
![image](https://user-images.githubusercontent.com/54589605/235902936-e878b4ce-6453-465e-9299-4a00ee80ddea.png)

* Time complexity of **merge algo** is **O(n)** for **every case(EC)**.
* Merge algo is over, now the **total array** is **sorted**.

![image](https://user-images.githubusercontent.com/54589605/235903140-e5fc55b3-4fa9-478e-85f8-f70bab1a1d76.png)

* Time complexity of **divide** time  -> O(1) or constant
* The total is **T(n)**.
* Time complexity of **conquor** time -> T(n/2) + T(n/2) -> **2 * T(n/2)*

![image](https://user-images.githubusercontent.com/54589605/235903429-23e86a93-c78a-4963-8710-93be3237ad10.png)
![image](https://user-images.githubusercontent.com/54589605/235903707-05e9aa94-fe6b-44e6-8a9d-dbc60ae1bd93.png)

* **Combine** time is **more** compared to **divide** time.
* **Combine + divide** time, combined time is **O(n) + O(1) -> O(n)**.

* Inside **merge sort**, **merge** is there. The **merge** is **out-place** because it has take **more space** than **log n**.
* As **merge** is **out-place**, so the whole **merge sort** algorithm is **out-place** now.

![image](https://user-images.githubusercontent.com/54589605/235904484-0b40c9ab-8974-411e-8f2e-a90599e28374.png)
![image](https://user-images.githubusercontent.com/54589605/235904559-e86fd205-bd41-470e-9807-3cdd06e8af61.png)

### Time complexity of Merge Sort

![image](https://user-images.githubusercontent.com/54589605/235905485-17c45566-9721-41d7-9c0a-caaf2f3c98e7.png)

* It is **log n** level tree, or **no. of levels** is **log n**.

* Time complexity of Merge Sort -> **Theta(n * log n)**. [For every case, as **moves** are always **same**]
* Space complexity of Merge Sort -> log n + n -> **O(n)**.

> In the **space complexity**, **log n** is for the **stack**, as it is a **recursive** function. When the **merge** function is running it is taking **extra space** by using another array of size **n**. So it is **log n + n -> O(n)**.

> If the extra array is not taken of size **n**, then it is an **in-place** algo.

![image](https://user-images.githubusercontent.com/54589605/235906380-8056c6b3-6c83-43f0-aef2-864c2a83da28.png)
![image](https://user-images.githubusercontent.com/54589605/235906520-6739537b-e432-42e8-a0a9-42459c6ec545.png)
![image](https://user-images.githubusercontent.com/54589605/235906574-fba25ae1-a87a-4d5f-b1e7-e7168e226539.png)
![image](https://user-images.githubusercontent.com/54589605/235906971-086e091d-2166-4e1d-9e50-b483d8807cfe.png)
![image](https://user-images.githubusercontent.com/54589605/235907094-dfa54c4d-560f-4ee7-afb7-631a3cc1a66a.png)

## DAC-VI (29) [3rd May 2023]

![image](https://user-images.githubusercontent.com/54589605/235924629-f1a3dacf-59e7-4715-b0e8-db943fee3c3d.png)

* Time complexity of Merge Sort -> **Theta(n * log n)**. [For every case, as **moves** are always **same**]
* Best case(Min time) in **divide and conquor** techniques -> **else** part

![image](https://user-images.githubusercontent.com/54589605/235939111-0a32df21-47e9-4ecb-994f-f3476891eb4c.png)

* Whenever an array is given to **merge sort**, then **divide, conquor and combine/merge** will always happen as there is no **return** in the **middle**. The **return** statemenet is there at the **end** only.
* We cannot stop in-between a **merge sort**, because there is no **return** in the **middle**. The **return** statemenet is there at the **end** only.

* Why merge sort time complexity is **O(n *  log n)**?

>  As there is no **return** in the **middle**, the program has to execute till the end everytime. The **return** statemenet is there at the **end** only. That's it is always **O(n *  log n)** only.

![image](https://user-images.githubusercontent.com/54589605/235940217-17f04c30-90eb-4a08-9354-5cacfad26e39.png)

> If both the sides are **equal**, then we can apply master theorem's **case 2** there and multiply right side with **(log n)^0**. So that both the sides are still **equal**.

> Left and right side person **no difference** at all or **difference** by **log n**.

* **Binary search** is the only algo as of now, where we can stop at the **middle** only. Other algos stop at the end only.

* Time complexity of **merge sort** having **only one** value which is **O(n *  log n)**.

![image](https://user-images.githubusercontent.com/54589605/235944350-593053f9-4017-42dd-ad3a-9cbb83738d98.png)

### Problems

![image](https://user-images.githubusercontent.com/54589605/235944435-40a9179d-2597-4ba5-93b7-44ba8767b00a.png)

* Merge sort input -> It can be anything, sorted, unsorted etc array.
* Merge sort output -> Sorted array.

* Merge algo input -> 2 sorted arrays.
* Merge algo output -> 1 Sorted array.

* One sorted array -> Binary search
* More than One sorted array -> Merge algo [Multiple arrays become one array]

* Total element is **n** elements.

![image](https://user-images.githubusercontent.com/54589605/235949456-ad7c92cb-d2d6-452b-ae1a-af5f64e46579.png)

* From **bottom to top**, **groups** are decreasing, as we are merging groups.
* For **merge algo**, **moves** is important.

![image](https://user-images.githubusercontent.com/54589605/235951433-16f63bbe-6fe3-44e7-aaa2-8e605238420d.png)

* Until and unless they mention **merge sort**, don't go to **n * log n**.
* Normal merge sort contain **divide, cconquor, combine**. In **merge also** there is no **divide or conquor**, there is only **combine**.

![image](https://user-images.githubusercontent.com/54589605/235952347-e2c20387-70f9-4488-bd6b-e9db68a19bb7.png)

* Input -> log n sorted sub-array each of size **n/log n**.
* Output -> Find single sorted array. 
* Find time complexity. [Best algo and worst case]

> We want **1** group only.

* Whenver we are doing recurrence relation, when the first and second level values are **same**, then all of the level value are **same** as well.
* Whenver we are doing recurrence relation, when the first and second level values are **different**, then all of the level value are **different** which means **series** coming.

![image](https://user-images.githubusercontent.com/54589605/235953624-8dba2347-e245-46e7-8359-e81033535dce.png)
![image](https://user-images.githubusercontent.com/54589605/235954648-3ec12bd4-3689-4ae9-8ebd-fd33767eb6b0.png)

* If we have **n** elements and we divide by 2 everytime, then it is **log n** levels.
* If we have **a** elements and we divide by 2 everytime, then it is **log a** levels.
* If we have **k** elements and we divide by 2 everytime, then it is **log k** levels.
* If we have **log n** elements and we divide by 2 everytime, then it is **log(log n)** levels.

> We have **log n** elements and we divide by 2 everytime, that's why we got **log(log n)** levels. When we had **n** elements and we divide by 2 everytime, we got **log n**.

* Every level cost is **n**. **No. of levels** is **log(log n)**. So, the **total cost** is **n * log(log n)** 

![image](https://user-images.githubusercontent.com/54589605/235955822-66d0a27b-46f1-4bf5-b45b-1662da505e08.png)

> We have **log n** groups, every group is **n/log n**. Bottom level has **log n** groups. Next level(2nd last level) has **log n/2** groups. Every level, total elements is **n**. At the bottom level, the one group contain how many elements, **n/log n** elements. Bottom level cost is **nothing** as input given.

> Levels became **log(log n)**, because we are always dividing **log n** by 2. 

![image](https://user-images.githubusercontent.com/54589605/235972957-441d5d47-a368-4c69-94ef-95a513a31036.png)
  
> Inputs groups are **log n**. 

* In the exam, they will give like "Inputs groups are **k**", instead of **log n**.

> How many levels? **log k**.
> Groups? **k**
> Sorted arrays? **k**

![image](https://user-images.githubusercontent.com/54589605/235975922-7f3144f2-d922-4659-99ee-ed561d1b5703.png)

> Normal merge sort contains **n** groups, where each group contains **1 element**. Normal merge sort input is **n element** array.

> In the **2nd last level**, **n** is the **no. of elements**, **n/2** groups. Total cost is **n**.

> Groups are **compressed**.

![image](https://user-images.githubusercontent.com/54589605/235976223-95d1dfcc-76f3-4ce5-9ea3-d74fa8ce235d.png)
![image](https://user-images.githubusercontent.com/54589605/235976627-e341babd-dd36-4d82-b7c8-3e2da2652fdf.png)

* We will see **log n** groups.
* From the **bottom to top**, the total time is **n * log n**. It is **log n** level and every level cost is **n**.
* In the given problem, it is given from **middle to top**, **log n** groups to **1** group. Actual problem is **n** groups to **1** group how? but the problem has given from **middle to top**.
* They can **ask** any part.

* **bottom to top** -> **n * log n**. [Normal merge sort]
* **middle to top**

![image](https://user-images.githubusercontent.com/54589605/235978343-dabd3678-6b97-47f5-bfb1-b8a1ed113daa.png)
![image](https://user-images.githubusercontent.com/54589605/235979375-3bd6d31e-12a3-4f34-a494-fd1b8dc72ee4.png)
 
> We continued for **k** times. We got **n/2^k** groups. **k** value is **log(log n)**.

![image](https://user-images.githubusercontent.com/54589605/235979712-a3aa79fd-bc91-4356-a58c-a4e8aa693063.png)

* input ->'n' sorted sub-array each of size **1**.
* Output -> Find single sorted array.

> 'n' sorted sub-array each of size **1** means **one array**. Finally want **sorted array**. It is **merge sort**.

* Total time is -> **n * logn**. [Answer]

![image](https://user-images.githubusercontent.com/54589605/235980606-3ab68e51-e87d-4888-9b71-96fe62d29c45.png)

* input -> 'n' sorted sub-array each of size **1**.
* Output -> Find **log n** sorted array.

> 'n' sorted sub-array each of size **1**, that is the **input**. Output is gonna be **log n** sorted sub-arrays. We only want **log n** sorted sub-array.

![image](https://user-images.githubusercontent.com/54589605/235981448-8a9789c5-3969-4974-9dda-acc70aa52bdf.png)

> In the question, they can start from anywhere and end at anywhere.

> 'n' sorted sub-array each of size **1**. It is **n** elements sub-array. Start from the **bottom** and do it till the **middle**. Time complexity is gonna be **n * logn - log(log n)**. Asymptotically it is **n * log n**.

* Total time is -> **n * log(logn)**. [Answer]

![image](https://user-images.githubusercontent.com/54589605/235982960-136cadb4-2c40-41c4-9bac-c3b51168acb3.png)

* input -> '80' sorted sub-array each of size **1**.
* Output -> Find **log n** sorted array.

> '80' sorted sub-array each of size **1** means the program has done some portion/work. In the **below**, there are **n** sorted sub-array but now we have **80** sorted sub-array.

> Major portion of work is done from **n to 80**. Now, he wants **4** sorted sub-arrays.

![image](https://user-images.githubusercontent.com/54589605/235984152-2fa78d1d-ca49-4fd5-ae35-ca51308626c8.png)

* They will ask the portion how they got from **80 to 4**. We will **divide 80 by 2** to reach 4.

> So for **k** times, it is **80/(2^K) = 4**.

* We got the value of **k** which is **k = log 20 base 2**.

![image](https://user-images.githubusercontent.com/54589605/235984815-cd137eab-67d3-47a7-baa3-9181c6b05384.png)

* No. of levels from **80 to 4** is **log 20 base 2**.

![image](https://user-images.githubusercontent.com/54589605/235985658-9585f956-c505-48c6-b038-69b6347df877.png)

* Time complexity -> **n * O(1) -> O(n)**.

![image](https://user-images.githubusercontent.com/54589605/235988538-f418334f-aee4-4de1-a6e4-c609f5038fef.png)

* input -> n-sorted sub-arrays each of size **n^2/n**.
* Output -> Find **log n** sorted subarrays.

* Total elements -> **n * (n^2/n) -> n^2**. 

![image](https://user-images.githubusercontent.com/54589605/235989078-0aa3b1ad-c624-4764-9ce3-62cad19765b8.png)

> **n** sorted sub-arrays each containing **n** element. Total people is **n^2**. 

> If **n^2** elements are there, then at the bottom level, there are **n^2** groups each containing **1** element. This is **normal merge sort** behaviour.

> What is the problem here? Not **n^2** groups, but **n** groups only., where every group contain **n** people, who are already sorted. So he done a lot of work, **n^2** groups became **n** groups.

> Follow the **procedure**.

![image](https://user-images.githubusercontent.com/54589605/235990899-e5735eab-56f9-4bb9-a976-13403e61a4ba.png)

* There are **n** groups. Each group size is **n^2/n**.

* How many people/elements at the given level?

> **n** groups and every group is **n^2/n**. So **n * n^2/n -> n^2**. The **no. of people** in the given level is **n^2**.

> We have **n^2** **no. of elements**, **n** groups and group size is **n**, for the given level. Total is **n^2**.

![image](https://user-images.githubusercontent.com/54589605/235991285-4b7e4ed1-a269-40b3-a857-246f33386c6c.png)

> **Two** groups become **one** group. So it is **n/2** groups. 

> Cost of every group is **n^2/n * n^2/n -> (2 * (n^2))/n**.

> **No. of moves** is **n/2 * (2 * (n^2))/n -> n^2**.

![image](https://user-images.githubusercontent.com/54589605/235993672-ae09beda-6eb6-4775-8df9-f9b7243e42b5.png)

> **n^2** elements are moving from **one** level to another level. Definitely moves becomes **n^2**.

* Time complexity of **merge algo** is **moves** only.

![image](https://user-images.githubusercontent.com/54589605/235994432-bdb15fdb-d409-4e06-a217-4845c2914eb2.png)

* First and second level values are **same**, so rest of the levels are **same** as well.
* Every level is **n^2**.
* **No. of groups** is **n/2^k**. The question is expecting **log n** groups.

![image](https://user-images.githubusercontent.com/54589605/235995281-cc513e2f-82f8-475a-b7f6-53247931a798.png)

* n/2^k = log n
* n= 2^k * log n
* log n = k* 1 + log(log n)
* k= log n - log(log n).

* **log n - log(log n)** is asymptotically equal to **log n**.
* k = **log n**.

* There are **log n** groups.
* No. of levels -> log n
* Every level -> n^2
* Total cost -> **log n * (n^2) -> (n^2) * log n**.

![image](https://user-images.githubusercontent.com/54589605/235996828-ba197251-abb9-4a1c-be27-b486621e487a.png)
![image](https://user-images.githubusercontent.com/54589605/236000106-89481ea9-2f40-45db-9c43-ec6301653e10.png)

* input -> K-sorted sub-arrays each of size 'm'
* Output -> Find single sorted array with all elements.

* No. of elements -> k * m.

> **k-sorted arrays**, if we **divide by 2**, then the **no. of levels** is **log k**.

* Every level cost is -> k * m.
* Total cost -> O(k * m * log k). [**Answer**]

![image](https://user-images.githubusercontent.com/54589605/236000872-c6019d8b-7053-4bfd-ba50-a6948792cb5b.png)

* Decreasing series question example.

![image](https://user-images.githubusercontent.com/54589605/236001354-70fe4309-da92-4329-b3dc-e4e128803a15.png)
![image](https://user-images.githubusercontent.com/54589605/236001446-02245ded-9908-47a4-9bb9-49088f85b636.png)

* Minimum do **2-3** levels.

![image](https://user-images.githubusercontent.com/54589605/236001792-e2fe80b0-208f-4b64-9dfa-ec5ea1e5726f.png)
![image](https://user-images.githubusercontent.com/54589605/236002107-8f629806-efa9-4af4-bfd7-c8eff979f1e0.png)

* Input -> K-sorted sub-arrays each of size 'm', where every sub-array sorted individually using insertion sort
* Output -> Find single sorted array.

* If we want to apply **merge algo**, we need **sorted sub-arrays**.

> In the previous problem, **k** sorted sub-arrays was given directly. In the above question, sub-arrays are not sorted but explained how to sort. Sorting level cost we also have to take care.

* First and second level have **same** cost, so it will be **same** for the rest of the levels.
* No. of levels -> log k
* Every level cost -> m * k
* Total cost -> m * k * log k.

> For the, first level it is **k** groups. They are **not sorted**, so for each group we are applying **insertion sort**. For **m** elements time complexity is **m^2**. One group contains **m** elements so it is **m^2**. On group sorting is **m^2** amd we have **k** groups, so it is **k * m^2**.

* Insertion sort, worst case for **n** elements -> **n^2**
* Insertion sort, best case for **n** elements -> **n**

![image](https://user-images.githubusercontent.com/54589605/236004260-793b3e85-7f0f-4605-a5b2-69dee28072d4.png)
![image](https://user-images.githubusercontent.com/54589605/236004464-d15512fd-1e23-44a4-aa7b-bffd960a26d6.png)

* Total time -> **k * m^2** + **m * k * log k**. [**Answer**]

![image](https://user-images.githubusercontent.com/54589605/236004616-e0836d57-6677-4446-914b-ff5f33e6a806.png)

* **k * m** is **common** part. The comparision is between **m and log k**.

* Both are **possible**. If we can't decide which is **bigger** then keep **both**.

![image](https://user-images.githubusercontent.com/54589605/236005136-b5ddd688-182d-49a8-a68f-a63494ef6145.png)

* **k * m^2** is the cost of **first level** only.
* In the first level, how many groups, **k** groups.
* In the question, mentioned how to sorted, not sorted array given.

![image](https://user-images.githubusercontent.com/54589605/236005617-e235fed0-581b-470e-b394-f017f137d67f.png)

* If algo not mentioned for sorting, we can take any algo we want. **YES**.
* Normally in the **bottom part**, it is **small** problems. Groups maybe **more**, but every group size is **m**.
* Group size**small** means **small** problem.

* **Merging** required **sorted sub-arrays**.
* If **sorted sub-arrays** not given, we will **sort** the array ourselves only.
* In the **merge sort**, bottom level, so many sub-problems are there, every sub-problem size is **small**.

## Note

* It is a well known fact that for **small arrays**, **insertion** sort is preferred.
* **Merge sort** is preferred if array is **large**.

![image](https://user-images.githubusercontent.com/54589605/236007242-db9d396d-6119-45ac-ab3a-6989fc5b3a1b.png)

* Smaller array -> Insetion sort
* Larger array -> Merge sort

![image](https://user-images.githubusercontent.com/54589605/236007422-1a0a0767-b73d-4774-984f-c925b21383c4.png)
![image](https://user-images.githubusercontent.com/54589605/236007491-6d3d483e-82ab-4227-825f-d440e1253342.png)

* Except **first level** everything else is **merge sort**.
* In first level, every group is **small**, there we have applied **insertion sort**, rest we have applied **merge sort**.

* Combination of merge and insertion sort will lead to **better** results/performance.

![image](https://user-images.githubusercontent.com/54589605/236007932-96ab0cfd-13f6-41ba-87eb-b59686970937.png)
 
* Smaller size **insertion** sort is preferred.

![image](https://user-images.githubusercontent.com/54589605/236008461-5df4f494-f315-4b34-b727-555edec73eda.png)

* Selection sort

* We need to study all **sorting algorithms**.

![image](https://user-images.githubusercontent.com/54589605/236008587-44c92908-eea0-4a11-9bfb-242c0de01666.png)

* Merge sort.

![image](https://user-images.githubusercontent.com/54589605/236008789-4fb2b885-92ab-4eea-b590-ffcc6323f5d9.png)

* Smaller size **insertion** sort is preferred.

* Sorting array is **many ways**.
* Sorted array is very **large**, so **merge sort** is preferred.

![image](https://user-images.githubusercontent.com/54589605/236009071-a90afecc-da29-446a-949a-1ca95adbc543.png)

* Sorted array is very **smaller**, so **insertion sort** is preferred.

* input -> k-subarrays each of size m, where 'm' is very **small**.

> Insertion sort.


* Merge sort on sorted array ->  n * log n
* Merge sort on un-sorted array ->  n * log n

> Every time **n * log n**.

## Summary

* Nothing mentioned then **merge sort**.
* For **un-sorted** array, always use **Quick sort**.
* To be same, use **merge sort**.
* For **small arrays** use **insertion sort**.
* Random array -> **Quick sort**.
* **Large array** -> **merge sort**

![image](https://user-images.githubusercontent.com/54589605/236011760-38228055-d5a0-4b06-8f70-0b5155b37abe.png)

* By **default**, **merge sort** is **out-place**. Don't bother about **in-place**.

* For **merge algo** time:
* in-place -> n^2
* out-place ->  n

## Doubt_Clearing_Session (30) [4th May 2023]

> **Merge sort** is better for **larger problems**, **insertion sort** is better for **smaller problems**. When doing merge sort, we **divided-divide** the array, at the bottom we will see **small problem**, there apply **insertion sort**. Then, it will be **better performance**.

* Un-sorted array -> Quick sort
* Any array, nothing mentioned -> Merge sort.

## Straight 2-way merge sort

![image](https://user-images.githubusercontent.com/54589605/236106222-2d229c55-e21b-45cd-94cf-6a81b0fae5ea.png)

> From the **bottom**, first level is given array. **Second** level is, **output** after **first pass**.

![image](https://user-images.githubusercontent.com/54589605/236106356-877fc6a9-3925-4d76-80ce-e746c4317e43.png)

> On the given array, we are not **dividing**, we are directly **merging**.

![image](https://user-images.githubusercontent.com/54589605/236106452-afdfe1df-5cc8-424b-8d29-5093290464c6.png)

* This is not the **divide and conquor** technique, **merge sort**. It is called as **straight 2-way merge sort**. 

![image](https://user-images.githubusercontent.com/54589605/236106795-4daf222d-a7e0-4325-840d-b1b067c1a87d.png)
![image](https://user-images.githubusercontent.com/54589605/236106823-c9f79d3d-d6d8-4dd4-9a53-88f9b60ceb91.png)

* 1st pass.

### Question

* In a **straight two way merge sort** algo, what is the ouput after **2nd pass**?

> 13,28,36,80,15,19,42,75,3,7.

* **Straight two way merge sort** algo is **pass wise** output. This is the way.

![image](https://user-images.githubusercontent.com/54589605/236107906-bf0443a1-63cf-44cb-bdf9-6051131fa4a9.png)

* Divide and conquor technique, **merge sort** will start from **top**. Given array **divide** it into **two** parts. We **divide** equally. At the **last level**, we see **1** element each. It follows **post order** traversal.

* There is no output nothing after each pass, because it doesn't go **level by level**.

![image](https://user-images.githubusercontent.com/54589605/236108373-675a5fa1-755a-4b34-a054-e138b916f86a.png)
![image](https://user-images.githubusercontent.com/54589605/236108359-e519e166-c35b-4355-9d4d-dc84f929c5d2.png)

* In **straight two way merge sort** algo only, we have to do **level by level**.

> **Pass wise** output will come from **straight two way merge sort** algo only.

![image](https://user-images.githubusercontent.com/54589605/236108777-2574072d-6e7d-4486-990b-35c772799e72.png)

* Why levels came **4**?

> It is also **divide by 2**. So, **log n** levels will come and **log n** passes. It contains **log n base 2** passes.

* At the **bottom** level, we are **combining** two elements, so **two moves** required. So the **total move** is **10** only. The **10** elements we have, are moving from **first to second** level. So, the moves are **10**.

![image](https://user-images.githubusercontent.com/54589605/236110181-c12071f4-440d-455b-ab80-cc78c50ebe5d.png)

* At every level, moves are **n**, **n=10** in the above example.
* No. of passes -> log n base 2 -> log 10 base 2.
* No. of moves for every pass -> n -> 10
* Time complexity -> O(10 * (log 10 base 2)) -> O(n * (log n base 2))

![image](https://user-images.githubusercontent.com/54589605/236110613-dbdf13b7-c66a-40df-aa73-a14db0bc15b8.png)
![image](https://user-images.githubusercontent.com/54589605/236110668-f25217fd-dd55-44fc-9c60-641299485ed3.png)

* Normal **merge sort** time complexity is also **same**.  The difference is that it is having some **different behaviour** as it is a **recursive program**.

![image](https://user-images.githubusercontent.com/54589605/236110867-43bc60d2-75e6-4944-be63-c054662fd31b.png)

* It is a **straing 2-way merge sort**.
* If it was a **straing 3-way merge sort**. Then we had to **merge** 3 elements, which would have given **O(n * (log n base 3)).
* No. of passes is **log n base 2** because we are **dividing by 2** from the bottom.
* Every pass cost is **n**, as there are **n** elements in every level.
* No. of levels is **log n**, which means **no. of passes** is **log n**.
* Every pass, contains **n** moves.
* So, it is **O(n * log n)**.

![image](https://user-images.githubusercontent.com/54589605/236111284-3a34c08f-5f69-4e7b-b20f-fc986108e833.png)

* Little bit variation but it is still **merge sort**. In the divide and conquor technique, merge sort, we **divide-divide** and divide. We are doing by **post order** traversal.

* In straight 2-way merge sort, we take **two** people and **merge** them. Level by level we are doing.

![image](https://user-images.githubusercontent.com/54589605/236111544-d62fe566-1ddb-41dc-aeea-3ae3779a1745.png)
![image](https://user-images.githubusercontent.com/54589605/236111700-d4185a6e-9b90-4eaa-bdbc-91046eb5c7b0.png)

* Divide and conquor technique, merge sort example. How it works. 

## Merge sort space complexity

![image](https://user-images.githubusercontent.com/54589605/236112623-0ddc6666-dbb9-4d4f-8d8b-1168e358f4aa.png)

* Extra space we have taken **more** than **log n**.
* Space complexity of merge sort -> O(n).

* Space complexity means **extra only**. The extra space we have taken, more than **log n**. Asymptotically, the extra space we have taken more than **log n**, that's why it is **out-place**.

![image](https://user-images.githubusercontent.com/54589605/236112861-08c18083-4ce1-42f0-9078-7cdc6960717f.png)

* All the other algos, we have seen so far, they have not used any **extra space**. Other than the **stack space**, nothing extra. 
* In **Merge sort**, other than **stack space*, there is **merge algo** which is taking **n** space.

* From Merge sort only, sorting algos are divided into **two** parts, how?

1) In-place
2) Out-place

![image](https://user-images.githubusercontent.com/54589605/236113547-9e6c382d-417c-41c6-b1f0-d64ecffa4cdf.png)
![image](https://user-images.githubusercontent.com/54589605/236113703-1c63f063-4d80-4842-b90c-f97d49e6b897.png)

* It is **n** because it is **out-place**.
* It is **n^2** because it is **in-place**.

![image](https://user-images.githubusercontent.com/54589605/236113813-c5dd45f1-92c1-4a38-9426-b309e873fef3.png)

* In both(in-place and out-place), the **stack space** is **log n**. Extra array(B) required in **out-place** and it is not required in **in-place**.

![image](https://user-images.githubusercontent.com/54589605/236114034-3ef07b5f-edd5-4123-8ed3-baf91410239e.png)

* Reuse the **same** array.

![image](https://user-images.githubusercontent.com/54589605/236114227-f5200345-b8ca-46af-9236-d1d0c12a6325.png)

* Straight 2-way merge sort is for **output** purpose, as we can get the **output** after **each and every** pass.
* When they are asking for **output** pass-wise, we will directly **merge**. **2-2** elements we will **merge**.
* Time complexity is **same**, no variation, doesn't matter if we do **Straight 2-way merge sort** or we do **divide and conquor technique merge sort**.

* In the **merge sort**, will be use another sorting algo also at the bottom?

> Because of **small** problems at the bottom, we will use **insertion sort** for most of the **cases**.

* Two sorting algos can be combined/merged and asked in the question. What will be the time complexity?

### Fibonacci series type questions [Fibonacci merge sort]

![image](https://user-images.githubusercontent.com/54589605/236353679-548f7c02-a83b-48ae-83b5-4a20563894e7.png)

* **n** elements are there, we want to apply merge sort, time complexity will be?

> **n * log n**. There will be **log n** no. of levels(stack space).

* n=6, then fibonacci value of **n** is **8**.
* Fibonacci, f(6), of **6** means **8**.

> Fibonacci of **6** elements I have, f(6), means we have **8** elements. Which means the array contains **8** elements.

> Instead of saying "the array contains **8** elements", we can say that the "the array contains Fibonacci of **6** elements elements".

* Fibonacci of **6** -> **8** only.

![image](https://user-images.githubusercontent.com/54589605/236354194-34f28ef1-7d1d-406a-afe0-7858dd696e97.png)

* In normal **merge sort**, we divide elements **50-50** or **equally**. So, **8** elements will be divided **4-4** only.
* But here, we are **dividing** the **no. of elements** in **fibonacci series** manner. We are not dividing, **8** into **4-4** or **50-50** manner, we are diving into **fibonacci series** manner.

![image](https://user-images.githubusercontent.com/54589605/236354678-7948e8e2-8d50-4f28-8aba-5ff605305448.png)

* **5** elements on the **left** side and **3** elements on the **right** side. So, the total is **5 + 3 -> 8**. There is **no change** in the **combination or merge algo**.
* In here, for the merge sort, the **divide** procedure changed. **Combine or merge algo** remained the **same**.

![image](https://user-images.githubusercontent.com/54589605/236355010-7636f4f6-ef99-4e01-91d6-189ddbf31c85.png)

* At the end of the day, all elements are moving from one level to another level.
* **Divide** time is **changing**, because we are dividing using **fibonacci series** manner, instead of **50-50** manner.

![image](https://user-images.githubusercontent.com/54589605/236355201-9fcda1df-4d81-4a2e-bf62-a26c500611cd.png)
![image](https://user-images.githubusercontent.com/54589605/236355238-2ed1bace-f55c-4615-a907-817147b6231f.png)

> In the above **merge sort**, we are **dividing** by **fibonacci series** manner, that why this **merge sort** is called as **fibonacci merge sort**.

![image](https://user-images.githubusercontent.com/54589605/236355354-6e771201-22d8-4375-ad3d-39d92047017e.png)

* **Fibonacci series** manner, we are **dividing**.
* Divide only change, combine no-change.

> **f(1) and f(0)** are **small** problems so stop it.

![image](https://user-images.githubusercontent.com/54589605/236355537-461916a4-b8c1-4363-bf94-d5e15330a180.png)

> If we observe the tree clearly, **left side**, we are **substracting one(1)**, every level. **Left most** part. [6->5->4->3->2->1]

> If we observe the tree clearly, **right side**, we are **substracting two(2)**. **Right most** part. [6->4->2->0]

* f(6) or fibonacci of **6** means **6 levels**.
* If it is f(k) or fibonacci of **k** means **'k' levels**, on the **left most** part. So it is **6** levels.
* If it is f(k) or fibonacci of **k** means **'k/2' levels**, on the **right most** part. So it is **6/2** levels.

![image](https://user-images.githubusercontent.com/54589605/236356028-3315b9c2-7446-433a-9558-0e67e9dce2ee.png)

* It is an **un-balanced** tree.

> In **normal merge sort**, the no. of levels is **log n**. **Log n** is on **both** the sides. We are always **dividing by 2**.
> In the above **fibonacci merge sort**, in the **left side** we are **substracting by 1** and on the **right side**, we are **substracting by 2**.

> We are doing **differently** on the left and right sides, so **different heights** are coming. Left height is **6** and right side is **6/2**.

* If it is f(k) or fibonacci of **k**, then the **left height** is **k** levels. As for the **right height**, it is **k/2** levels.

![image](https://user-images.githubusercontent.com/54589605/236356470-57e0da22-384c-47a0-98b4-26e3128bd1ce.png)

* Every level cost is **8**. We can say the **8** as f(6) or fibonacci of **6**.
* No. of levels -> 6 -> K.
* Every level cost -> f(6) -> F(K). [f(6) means **8** only. **8** is the **no. of elements** moving from one level to another] 
* Total time complexity -> 6 * f(6) -> 6 * 8 -> O(K * f(K)).

![image](https://user-images.githubusercontent.com/54589605/236356696-79c82ab1-6717-45cb-b598-e1f81f7c6e6d.png)
![image](https://user-images.githubusercontent.com/54589605/236356937-8b58f328-5710-497c-b9df-e0272d52821c.png)

> Every level **8** elements are coming. If we observe the **bottom** then **less than 8** elements will come.

> Every level **8** elements are coming, but if we go down, then gaps are there, we are not getting **8**. We will get **less than 8**.

* Even though we are getting **less than 8** as we move down to th bottom, we have take **8**, which means **upper bound**.

![image](https://user-images.githubusercontent.com/54589605/236357117-b345ad0a-0095-4a64-bab6-1c61617ae729.png)

* Upper bound -> O(K * f(K)
* Lower bound -> Omega((K/2) * f(k)
* Actual answer -> T(K) 
* Omega((K/2) * f(k) <= T(K) <= O(K * f(K)

![image](https://user-images.githubusercontent.com/54589605/236357696-4fd35f32-4a91-4fb2-9f84-d606f1926b7d.png)

> As they differ by **constansts** only, we can say **theta** possible.

* Equal or theta bound -> Theta(K * f(k)).

> **Merge(Combine) also** is **same**, **divide** also is **changed** from **50-50** form to **fibonacci series** form.

> **Merge** means **moves** only. So for every level , **merge** is **8** only.

![image](https://user-images.githubusercontent.com/54589605/236358106-53ff5090-a12e-4b32-8bdf-9883548d3664.png)
![image](https://user-images.githubusercontent.com/54589605/236358361-933a75fe-6513-48ff-b16f-3c506a1655e4.png)

### Problems

* Input -> 2-sorted arrays, 'A' is m-distinct elements and 'B' is n-distinct elements.
* Output -> Find 'A' Union 'B' and 'A'  intersection 'B'.
* Time complexity? [Best Algo and worst case]

![image](https://user-images.githubusercontent.com/54589605/236358804-6df6d60f-c27c-4d0c-abca-fd9e00713c7c.png)
![image](https://user-images.githubusercontent.com/54589605/236358883-ed2b265f-99c5-404b-8030-dace7549f641.png)

Steps:

1) First we are doing **linear search**. 

![image](https://user-images.githubusercontent.com/54589605/236360110-948cb067-28d0-4a77-84d7-e5e8d359a10a.png)

* Linear Search(L) worst case -> n * LS(n) -> n * n -> O(n^2).

![image](https://user-images.githubusercontent.com/54589605/236360214-32cfc807-acb1-496c-b25c-c494d3a965ff.png)

2) Improving linear search by doing **binary search**.

* Binary Search(BS) worst case -> m * BS(n) -> m * log n -> O(m * log n). [If m=n, then we can right O(n * log n)]

![image](https://user-images.githubusercontent.com/54589605/236360434-e9afcb1a-1ed9-4e54-bc3e-ab5182b9f6a4.png)

> We can see that **binary search** is clearly better than **linear search**, so we will use **binary search** to find the **A intersection B**.

> The **searches** wheather they it is **linear or binary** they are applied on the **B** array. It doesn't matter if **A** array is **sorted or not**, as long as **B** array is **sorted**, we can apply **binary** search.

![image](https://user-images.githubusercontent.com/54589605/236361718-0b9ae615-9a5d-4935-b47f-458e1a426419.png)

> If **A** is sorted but **B** is not sorted, then apply **binary** search on **A** and not on **B**.

![image](https://user-images.githubusercontent.com/54589605/236361818-3b8b04ca-a06a-4614-9774-e1a2b0c71fd3.png)

* If atleast any one of the arrays is **sorted**, then **binary** search is possible.

* More than **one** array is **sorted**, then we can try **merge algo**. 

![image](https://user-images.githubusercontent.com/54589605/236362166-cf50b63e-d7c7-45f1-82ae-e9256ae10f01.png)

> If we have **m** element on the left and **n** element on the **right** then we will have exactly **m + n** comparisions.

> If we have **40** on the right and another **40** on the right, like the **above image**, then we have to **take both 40s** because in **merge algo**, it is exactly **m + n**.

> **Merge algo** doesn't bother about repeatation. It is bothered about **m + n** element after merging.

> **Merge algo** means **everything** required.

### Union and Intersection

![image](https://user-images.githubusercontent.com/54589605/236363441-f2a6ad6f-da98-4b13-8252-3e4d9b01705d.png)

* Union -> Different elements.
* Intersection -> Different elements but common people required.

![image](https://user-images.githubusercontent.com/54589605/236363689-7d1cad3c-f55f-4fbe-9ee2-dd9b5d055d0b.png)

> If we **merge**, 'm' and 'n' elements then it is **m + n**. It is **everytime**.

> Repeatation is allowed in **merge algo**.

![image](https://user-images.githubusercontent.com/54589605/236364203-5aa7a31d-62d5-4e74-a520-ffac6aee4142.png)

> If we have **40** on the right and another **40** on the right, like the **above image**, then we have to **take both 40s** but the **left 40** will come **first** and then the **right 40** will come, because in the **array**, between the **left and right** people, **left** people came **first**.

![image](https://user-images.githubusercontent.com/54589605/236364519-7a69a2f5-aa0b-4db3-9bbb-bb7496ffaa3d.png)
![image](https://user-images.githubusercontent.com/54589605/236364601-70226a4e-4c47-40d3-bb74-edb91030977f.png)
![image](https://user-images.githubusercontent.com/54589605/236364709-e8f2e78a-77be-4fde-a8bd-c832acd224f8.png)

* Merge sort is **stable** sorting technique. 
* **Stable** sorting technique means **repeated element's order** will not change before and after sorting.
* **Stable** sorting technique is related to **repeatative** people.

![image](https://user-images.githubusercontent.com/54589605/236364903-0119fa61-1764-4d11-a2af-a04f00cbb2e9.png)

* **Stable** sorting technique.

![image](https://user-images.githubusercontent.com/54589605/236364937-19f9ab82-c8a1-4e2a-9c7d-1f191ddcbc5b.png)

* **Not stable** sorting technique.

![image](https://user-images.githubusercontent.com/54589605/236365004-c8c3059b-65e3-418c-a9f5-7d3e32514d9b.png)

* If it doesn't matter then why we would change it.

![image](https://user-images.githubusercontent.com/54589605/236365418-4815f624-eee0-4e34-b739-f6d4593d5e96.png)

3) Using **merge algo**.

### Intersection part

> The **first** element from both the arrays are taken, it is **10 and 5**. Whoever is **smaller**, cancel it or skip it. Don't print it. We want to find out **intersection** and not **everyone**. Print only the **common** things, don't print the others. So we **remove 5**.

> Now we take **10 and 10**. They are **equal**. Print **10** and skip both. Whenever **equal** came, print **once** and skip both. It is **intersection** and not **merge algo**.

> It is **20 and 15**. **15** is **smaller**, so we skip it.

> It is **20 and 20**. They are **equal**. So we print **20** once and skip both.

> It is **30 and 25**. **25** is **smaller**, so we skip it.

> It is **30 and 30**. They are **equal**. So we print **30** once and skip both.

> It is **40 and 35**. **35** is **smaller**, so we skip it.

> It is **40 and 60**. **40** is **smaller**, so we skip it.

> It is **50 and 60**. **50** is **smaller**, so we skip it.

> It is **60 and 60**. They are **equal**. So we print **60** once and skip both.

> It is **70 and 80**. **70** is **smaller**, so we skip it.

> After some point of time, one of the arrays is **over**. **NO**, we will not **continue** as we are finding **intersection/common** elements.

* We are using **merge algo**. We are using with **some change**.

> Compare both, if it is **smaller** then **skip it or don't print it**. If they are **equal**, then **print once** and **skip both of them**, as **intersection** allows only one person.

![image](https://user-images.githubusercontent.com/54589605/236367731-972a63fc-a9d1-4ad8-9fbc-38900e3ec38f.png)
![image](https://user-images.githubusercontent.com/54589605/236367773-49052b52-ca81-4cd7-941b-3ab1a02f192e.png)

* **Modified merge algo**.
* Time complexity for **modified merge algo** for **A intersection B** [Worst Case] -> O(m + n) [If m=n, then it is O(2 * n) -> O(n)]

![image](https://user-images.githubusercontent.com/54589605/236368066-d8793afd-6345-4c13-8fb2-0d9a3033a5fc.png)
![image](https://user-images.githubusercontent.com/54589605/236368147-7f83f7c7-ff30-4f67-9efd-c55436d9cd87.png)

* **Modified merge algo** is the **correct** answer for the **above** question for the **intersection of A and B**.

### Union Part

1) Linear search.

> First take the **A** array elements as it is. For the **B** array elements, first is **5**, before adding **5** to the answer, ask the available people that if **5** is already there or not. If not there, then **add** 5. Do the same for the rest of the elements of **B**. For **10**, as **10** is already present in the **answer** that why we didn't add **10**.

![image](https://user-images.githubusercontent.com/54589605/236369869-d25e66ce-773f-410f-ba51-c3ba9780f373.png)

* **Sorted or not sorted** doesn't matter.

* First take all of the **A** array elements as it is. While writing **B** people, please **check/verify** with the **A people** if they are already there or not. If not there then **add** them otherwise don't **add** them.

* It is called as **linear search**, so it is **n^2**.

2) Binary search is **n * log n**.
3) Modified Merge algo.

> First take first element from both the arrays. If it is **smaller** then **print it**. **Union** means **everyone required** but **repeatation** not allowed. If it is **equal**, then **print once** and skip both. When one of the **arrays** is over, we will **continue** and **copy** rest of the elements from the **other array** as **everyone required**.

![image](https://user-images.githubusercontent.com/54589605/236370706-752bcf04-a00e-4d19-9794-859ded897ef3.png)

> For **10 and 5**, print **5**.

> For **10 and 8**, print **8**.

> For **10 and 9**, print **9**.

> For **10 and 10**, print **10** once and skip both.

> For **20 and 15**, print **15**.

> For **20 and 20**, print **20** once and skip both.

> For **30 and 50**, print **30**.

> After some point of time, one of the arrays is **over**. **YES**, we will **continue** and **copy** rest of the elements from the **other array** as **everyone required** for findining **union**.

* **Modified merge algo**.
* Time complexity for **modified merge algo** for **A union B** [Worst Case] -> Theta(m + n) -> Theta(n) [If m=n, then it is Theta(2 * n) -> Theta(n)]

> **Theta** is possible as for **every case** wheather it is **best, worst and average**, we will always get **(m + n)**. 

![image](https://user-images.githubusercontent.com/54589605/236371313-55b18094-996b-4f98-b944-45fc8cf0d380.png)
![image](https://user-images.githubusercontent.com/54589605/236371411-0beb35ca-78a5-4a0c-8f40-ada6f7dcc8da.png)

* By seeing **two** sorted sub-arrays in the **input**, we got the signal that **merge algo** is possible.
* Merge sort is **stable**, which means that **repeatative** element's orders, before and after are **same**.

![image](https://user-images.githubusercontent.com/54589605/236371872-d74dcae0-7a3b-4542-b904-f6d790e6179d.png)

* For the **given problem**, to do **union and intersection**, which is the best algo possible?

> **Merge algo** with time complexity of **O(m + n) -> O(n)**.

![image](https://user-images.githubusercontent.com/54589605/236371968-75937e8b-7610-472c-a643-50b79b6364dc.png)

* Same problem, but **not sorted arrays**.

1) Linear search possible.

* Time complexity -> O(n^2)

2) Binary search not possible. To make it possible, first we **sort the arrays**, which will make it **n * log n** and then we apply **binary search**, which will make it another **n * log n**. So the overall. is **O(n * log n)**.

* Time complexity -> **O(2 * (n * log n)) -> O(n * log n)**.

3) Merge sort is not possible. If we want to apply **merge algo**, we need sorted arrays. First we **sort the arrays**, which will make it **n * log n** and then we apply **modified merge algo**, which will make it **n**. So, it is **O(n * log n)**.

* Time complexity -> **O(n + (n * log n)) -> O(n * log n)**.

![image](https://user-images.githubusercontent.com/54589605/236375237-2f6b7448-1dc4-49cf-93b2-ea5184e3bf0d.png)
![image](https://user-images.githubusercontent.com/54589605/236375281-0dbc157f-79e4-4b58-bf73-423bccb7e4d7.png)

## 5. Quick Sort

1) Merge sort is **stable**. Quick sort is **not stable**. 
2) Merge sort is **out-place**. Quick sort is **in-place**(Taking max space upto **log n**).

* **In-place** doesn't mean that the algo will not take any extra space. The algo can take up **log n**. If the algo takes upto **log n** or **less than log n** then it is an **in-place** algo.
* **Out-place** means that the algo will take more extra space. The algo will take more than **log n**. If the algo takes more than **log n** then it is an **out-place** algo.

3) Merge sort time complexity is **O(n * log n)**. Quick sort time complexity is also **O(n * log n)**. As the time complexities are **same** then we will take **space complexity** into consideration. From **point 2**, we can see that quick sort is **in-place** algo and merge sort is **out-place** algo. So, we will take **merge sort** over **quick sort**.

![image](https://user-images.githubusercontent.com/54589605/236376630-ff31a30e-ca52-4345-a84b-c882671cfbda.png)

4) Quick sort is a **practical sorting algorithm**. If we don't need **sorting**, then **quick sort** will not keep quite. If we give a **sorted array** to quick sort then it will take time complexity of **O(n^2)**, which is **more**.

* Quick sort is a **practical sorting algorithm**, which means that if **really needed** then only go to **quick sort**.

* Array maybe sorted or may not be sorted, it is a dilemma/doubt -> Merge sort.
* Confirmed that the array is **not sorted** -> Quick sort.
* Array sorted, then which algo we will **not prefer** -> Quick sort.
* Array almost sorted, then which algo we will **not prefer** -> Quick sort.

> Time complexity is decided by **majority** of the people.

![image](https://user-images.githubusercontent.com/54589605/236377468-3927cbb2-5aa7-430c-ac9f-b31a210281ab.png)
![image](https://user-images.githubusercontent.com/54589605/236377549-d26ea083-ec59-4d58-b219-6b1fe33dcacd.png)

* Quick sort is **not preferred** but **insertion sort** is **preferred**.
* Array is **small** -> Insertion sort.
* Array is **sorted or almost sorted** -> Insertion sort

![image](https://user-images.githubusercontent.com/54589605/236378193-276cef80-3dec-4a43-b000-3293db890f15.png)

* Quick sort is also an application of **Divide and conquor** technique.
* Both **merge and quick** sort divide the array.
* Merge sort will **divide blindly**. As it has **divided blindly**, **one mistake** has happened. 

> The mistake is that the **smallest** element is on the **right** side and the **biggest** element is on the **left** side. It should be the **opposite**, the **biggest** element should be on the **right** side and the **smallest** element should be on the **left** side.

> We need **combine** because of the **divide blindly**, there was **one mistake** and to fix/rectify that mistake, we have to do **combine** at the end. 

![image](https://user-images.githubusercontent.com/54589605/236379158-4f16417c-8354-45d8-b96c-d601da3b3199.png)

* The mistake we did when doing **divide blindly**, it has been fixed/rectified by the **combine** only.

> **Blind division** takes **'c' or constant** time. **Combine** take **n + c -> n** time and it is for **one level**. So there are **log n** level, which means **n *  log n -> O(n * log n)** time complexity for merge sort.

![image](https://user-images.githubusercontent.com/54589605/236379555-7444b2e6-9d48-4061-aeaa-83f103e0f14a.png)

> Quick sort will **divide**, **YES**. It is not **divide blindly**, it is **dividing meaningfully**. With respect to **500**, quick sort **divided**. **More from first person(500)** keep on the **right** side. **Less from first person(500)** keep on the **left** side.

* Division in **quick sort**.

![image](https://user-images.githubusercontent.com/54589605/236379840-839f7b2b-08d9-4c4c-a2e6-2e7ceb80175b.png)

> After **division** is over, **left** people sort using **recursion**, **right** people sort using **recursion**. Divide is over, **conquor** is completed, left and right people are **sorted**. Without **combine**, the array is **totally sorted** only.

![image](https://user-images.githubusercontent.com/54589605/236380273-28afb589-103a-49b2-aaee-164e8a771a46.png)

> In quick sort, first we did **meaningful division**, then **left** people sorted, **right** people sorted. Now, we verify if the **total array** is sorted or not.

* If we do **meaningful division**, then no need of **combine**.

![image](https://user-images.githubusercontent.com/54589605/236380497-4fb18826-3e4a-463b-9829-48a71a71c38e.png)
![image](https://user-images.githubusercontent.com/54589605/236380553-fc059d95-1b50-4858-b9d7-39c5ab7dc5dc.png)

* In **merge sort**, **three** steps are involved which is **divide, conquor, combine**.
* In **quick sort**, **two** steps are involved which is **divide, conquor**. No need of **combine** step.

![image](https://user-images.githubusercontent.com/54589605/236380640-6ef97f2a-e9cf-4e69-8c1f-073abeba498d.png)

* Merge sort is **careful** at then ending. At the **merge time**, it is **careful**. It is **not careful** at the **divide** time.

* Quick sort is **careful** from **start to end**. While **divide** time only, quick sort is **careful**.

![image](https://user-images.githubusercontent.com/54589605/236381286-2ffd32cb-f2f6-4291-8741-aae99d63f3dc.png)

* Why is **quick sort** "quick"? ["quick" -> Quote and un-quote quick, as in meaning quick, not quick sort].

> It is wasting anything? **NO**. It is **careful** at the **starting only**. **YES**.

> For **merge sort**, it is **careful** at the **ending only**. At the **starting only**, it wasted **something** only. So, it is **OK**, but not "quick".

## Notes

* For **meaningful division** -> **Partition algo** [Divide part of Quick sort]
* For **meaningful combine** -> **Merge algo** [Combine part of Merge sort]
* For **searching** -> **Binary searching**.
* Sorted array -> Binary search.
* Not sorted array -> Linear search.
* More than one sorted array -> Merge algo.
* One array and we want to make it into two parts? -> Partition algo.

![image](https://user-images.githubusercontent.com/54589605/236381855-1da351a9-613f-49ab-b26c-f2efc2bc006a.png)

## DP-VII (31) [5th May 2023]

## Partition Algorithm

* Input -> It is an **array**.

> It can be an **unsorted array**, which will give the **best performance**. If the array is **sorted** then, it will give it's **worst performance**.

* Partition algo contains an array **a** which contains elements from **p(first element index) to q(last element index)**.
* Output -> It will divide the given array into some **smaller** parts. It will divide meaningfully. 

> Quick sort is the **super-set** of **partition algo**.

* Meaningfully means we have to **ask every person**, which side they want to go, either left or right side. If we want **meaningful division**, then everyone should participate.

* To make **meaningful division**, we have to **ask every person**.

> The purpose of **partition** algo is **dividing** the given array, with respect to **first element**. Select **first element** and compare **other elements** with **first element**. **First element** will ask the **second element**, compared to **first element** is the **second element** smaller or greater.

> If it is **smaller**, then go to the **left** side.

> If it is **greater**, then go to the **right** side.

![image](https://user-images.githubusercontent.com/54589605/236450720-e386569f-be50-4d45-bd0e-7b5a18b10a18.png)

* In-side quick sort, **partition algo** is major. **Partition's** another name is **divide**.
*  There is **no combine** also.

* The **first element** we have **selectd** and which is compared with rest of the elements is called as **pivot element**.

* In partition algo, what will be the first step? [**Partition algo steps**]

1) Select an element which is called as the **pivot** element. Normally the **first** element in the array is **selected** as the **pivot** element, but we can **select** anyone of the elements.
2) The **pivot** element will be compared with all the other elements.
3) When comparing elements with **pivot** element, some elements will be **small** and some elements will be **big**. Accoring to that **swap** them. **Smaller** ones will go to the **left** side, and the **bigger** ones will go to the **right** side. That's the purpose of **swap**.

* Second swap is out of the **for loops**.

![image](https://user-images.githubusercontent.com/54589605/236455434-0059214f-4e85-4d58-92d5-ad7545fb091b.png)
![image](https://user-images.githubusercontent.com/54589605/236455509-0f58d1b2-e512-43fb-8bce-2469bf84995c.png)

* The purpose of the **second or last swap** is that the **pivot** elements goes to the **middle**.
* After **partition** algo is done, at the **left** side, **smaller people** are there. In the **middle**, the **pivot** element is there. At the **right** side, the **larger people** are there.

> After **partition** algo is done, the array is broken into **two** parts, **left** side is **smaller** elements, **right** side is **larger** elements and at the **middle** is the **pivot** element.

![image](https://user-images.githubusercontent.com/54589605/236456077-727977cd-0e99-47bd-8565-0c01bb62095a.png)

> The loop is repeating for **n-1** times.

* The time complexity -> Theta(n).

> It is **n** because we have to ask **every person** and for that **one loop** is required.

* In all of the **previous** algos, the **divide** time is always **constant**, because there was **no loops**. In **partition** algo, **loop** is there, so it is **not constant** and it is **n**.

![image](https://user-images.githubusercontent.com/54589605/236456858-a7a6fb96-b7fb-47aa-9ac2-0aa48b0b7e8d.png)

> The **divide** time is **n** is for **every case(EC)** because there is **no breaks or return** statements within the loops. We have to continue **n** times.

* The time complexity of **partition** algo -> Theta(n). [Loop is there for **n-1** times and it is for **every case(EC)**].

![image](https://user-images.githubusercontent.com/54589605/236458104-ff644cd3-129c-4843-bed1-884344e15d07.png)

* The purpose of **partition** algo is that we have to **ask everyone** and why we want to do **meaningful division**.

> **Partition** algo compulsorily needs **one loop**, because we are **asking everyone**.

![image](https://user-images.githubusercontent.com/54589605/236461089-a0b121c3-6dd6-4dc5-82a6-10af44a560ca.png)

> Whichever element we have take as **pivot**, keep **i** also.

> From **j** position, the comparisions between **pivot(x)** and the other elements will start.

* 'P' is the **first** element index
* 'Q' is the **last** element index
* 'x' is the **pivot** element
* 'i' is for the for loop
* 'j' is for the comparision elements.

> We cannot change **P and q** as they are **first and last index** of elements

> We can change **i and j** as they are normal variables.

> We can algo is running **P and Q** will **not change** but **i and j** will **change**.

![image](https://user-images.githubusercontent.com/54589605/236462739-c80d931b-91a4-4a9d-b7ff-1c50c6062869.png)

> Left side is **i** and right side is **j**. Whenever **partitionon** is going on and at the **end**, we want **smaller** elements to the **left** and **larger** elements to the **right**. It means that **i** is expecting **smaller** people and for **j** we are expecting **larger** people.

> Intially between **i and j**, both want to **move**. The final compromise is that **j** only will **move**. So, **j** will take the **larger** ones and give the **smaller** ones to **i**. So, finally **j** is moving, as the loop is on **j** only.

![image](https://user-images.githubusercontent.com/54589605/236464568-02c23d90-84bf-4d3b-86ff-9b59d651e295.png)

* **i** is expecting **smaller** elements and **j** is expecting **larger** elements. Wherever **greater**, **j** will take. Wherever **smaller**, **i** will take.

* We don't have to worry that much about **P and Q** they are **fixed**.

> **J** will start from **2nd** place. **J=2** and **a[j] = 150**. Everytime, we have to **compare** with **pivot(80)**. **150** is greater than **pivot**? **YES**. As it is **greater** than **pivot** and **j** wanted **greater** so, **j** will **increment/move to the right**.

![image](https://user-images.githubusercontent.com/54589605/236478653-ccb1c52a-3329-4820-b1b6-47927da20f38.png)
![image](https://user-images.githubusercontent.com/54589605/236478865-dc9fac16-849f-4fe0-a7aa-7cfa2eb2f39e.png)

> **J=3** and **a[j] = 200**. Everytime, we have to **compare** with **pivot**. **200** is greater than **pivot(80)**? **YES**. As it is **greater** than **pivot** and **j** wanted **greater** so, **j** will **increment/move to the right**.

> **J=4** and **a[j] = 70**. Everytime, we have to **compare** with **pivot**. **70** is greater than **pivot(80)**? **NO**. As it is **lesser** than **pivot** and **j** wanted **greater** but got **lesser** so, **j** will **stop/wait**. **J** will say to **i**, he found **lesser**. So, now **i** will **increment/move to the right**. So **exchange/swap** both **a[i] and a[j]**. After **swap** is over, now **j** will **increment/move to the right**.

> **J=5** and **a[j] = 30**. Everytime, we have to **compare** with **pivot**. **30** is greater than **pivot(80)**? **NO**. As it is **lesser** than **pivot** and **j** wanted **greater** but got **lesser** so, **j** will **stop/wait**. So, now **i** will **increment/move to the right**. Now, swaps happens between **a[i] and a[j]**. After **swap** is over, now **j** will **increment/move to the right**.

![image](https://user-images.githubusercontent.com/54589605/236481615-8663e02d-ba0a-4ebb-9112-a21f3191ceda.png)

> **J=5** and **a[j] = 30**. Everytime, we have to **compare** with **pivot**. **30** is greater than **pivot(80)**? **NO**. As it is **lesser** than **pivot** and **j** wanted **greater** but got **lesser** so, **j** will **stop/wait**. So, now **i** will **increment/move to the right**. Now, swaps happens between **a[i] and a[j]**. After **swap** is over, now **j** will **increment/move to the right**.

> **J=6** and **a[j] = 250**. Everytime, we have to **compare** with **pivot**. **250** is greater than **pivot(80)**? **YES**. As it is **greater** than **pivot** and **j** wanted **greater** so, **j** will **increment/move to the right**. 

> **J=7** and **a[j] = 75**. Everytime, we have to **compare** with **pivot**. **75** is greater than **pivot(80)**? **NO**. As it is **lesser** than **pivot** and **j** wanted **greater** but got **lesser** so, **j** will **stop/wait**. So, now **i** will **increment/move to the right**. Now, swaps happens between **a[i] and a[j]**. After **swap** is over, now **j** will **increment/move to the right**.

![image](https://user-images.githubusercontent.com/54589605/236482847-897f06b4-57c4-4e89-a640-ac4795c41bdf.png)

> **J=8** and **a[j] = 45**. Everytime, we have to **compare** with **pivot**. **45** is greater than **pivot(80)**? **NO**. As it is **lesser** than **pivot** and **j** wanted **greater** but got **lesser** so, **j** will **stop/wait**. So, now **i** will **increment/move to the right**. Now, swaps happens between **a[i] and a[j]**. After **swap** is over, now **j** will **increment/move to the right**.

> **J=9** and **a[j] = 180**. Everytime, we have to **compare** with **pivot**. **180** is greater than **pivot(80)**? **YES**. As it is **greater** than **pivot** and **j** wanted **greater** so, **j** will **increment/move to the right**. 

![image](https://user-images.githubusercontent.com/54589605/236483075-02d6b441-a078-4365-b912-4d28218f68df.png)

> **J=10** and **a[j] = 90**. Everytime, we have to **compare** with **pivot**. **90** is greater than **pivot(80)**? **YES**. As it is **greater** than **pivot** and **j** wanted **greater** so, **j** will **increment/move to the right**. 

![image](https://user-images.githubusercontent.com/54589605/236483219-de583818-d87a-41d3-b06b-dfcab4073caa.png)

> Total array is over, means **for loop** over. **J** crosses, **q**.

> When we are out of the **for loop**, all elements are **completed**.

> After array is **over**, first element is **pivot**. **I** is incremented **4** times. **I** will be incremented by **1** if **small** elements came.

> **I=5** means, **4** times we have **incremented**, which means **4** small people are there.

> Comparing with pivot element, the **4** elements are **smaller**.

> At the end of the **for loop**, **i** is there at the **5th** place. **2nd to 5th** are **small**. Wherever **i** is there, until that place, **small** people are there.

> After **i** remaining people are **greater**.

* First element is **pivot**.
* Until **i**, they are **small**.
* After **i**, they are **big**.

![image](https://user-images.githubusercontent.com/54589605/236485636-6dca46dc-c8c9-4d90-8937-fe3198341d97.png)

* If **small** comes then we enter into the **if** statement. If **small** comes, then the first thing we do is we **increment i**. 
* We have to continue until the array is over, we have to **ask everyone**.

* After **i** all remaining things are **greater**. Wherever **i** is there, until that place, **small** people are there.

![image](https://user-images.githubusercontent.com/54589605/236474872-45b9aa7c-3a32-4f15-963c-88bd7eda8111.png)

> First element is **pivot** element. Until **i**, elements are **small**. After **i**, elements are **big**.

* Until which place **small**?

> **i**.

* Where is the last **small** element?

> At **i**.

* Where is the first **smallest** element?

> After **P**, which is **P + 1**. **P + 1** is the first **smallest** element.

* What is **i** as of now?

> 5th position. a[i] = 45

* At what index is the last **smallest** element there?

> **ith** index.

> At the end of the **for loop**, last smallest element is there at the **ith** place, where **i=5** and **a[i]=45** and a[P]=80. So, **a[i] and a[P]** are **swaped**. Pivot element will go to **ith** place  and **ith** place element will go to **pivot** element.  

* It shows that **pivot** element is going to the **middel**.

* What is **partition** algo doing?

> At the end of the **partition** algo, it will divide the array into **two** parts.

* Before pivot on the left side are **smaller** and on the **right** are **larger**.
* **Partition** algo will **divide** the array only and not sort.

* Total array is not **soted** but the **pivot** element is sorted.
* After **partition algo** over, only **pivot** element is sorted.
* Left and right people ordering is not perfect. Left and right people are nor **sorted**.
* After **partition algo** over, **pivot** element when to it's correct place, it means that **pivot** element is  sorted.
* Left and right position elements will change.
 
![image](https://user-images.githubusercontent.com/54589605/236489639-64995884-2d0a-41d9-bd9e-4ff09b8cfa35.png)

* After **partition algo** over, how many elements are **sorted**?

> **Pivot** element is only sorted.

![image](https://user-images.githubusercontent.com/54589605/236491080-da4ef7bd-e9b2-4011-a664-92317e96f2ff.png)

* **Only one** scan required to get all the work done.
* After **partition algo or for loop over**, **pivot** is at the **first place**. 
* After, **second swap statement, is over, **pivot** is at the **middle place**. 

![image](https://user-images.githubusercontent.com/54589605/236492339-41c5955f-6683-4e06-b3b3-3c5f1dc0eb15.png)

* **Pivot** will also return the position.

![image](https://user-images.githubusercontent.com/54589605/236492857-d9dbcd72-299a-4b5b-bc9c-d8e53aea9da8.png)

> when we go inside the **if condition**, then only **i** is increased. We go to **if condition** when **small** coming.

> **J** will increase everytime.

> When **big** coming, we will go outside of **if condition**, which means **j= j+1**.

* **i** will increment when **small** coming.
* **j** will increment everytime/always.

* By default, the pivot element is the  First element.

![image](https://user-images.githubusercontent.com/54589605/236497689-af4a0de0-cd54-4a66-be35-0a71e64823aa.png)

> On the given array if we do **partition**, then the array is **divided** into **two** parts.

* Time complexity of **partition** algo -> O(n).

![image](https://user-images.githubusercontent.com/54589605/236497972-782b30e3-c200-4361-af3b-6ed3634690d0.png)

> Quick sort algo on **10** people. Inside quick sort, we will apply **partition** algo. First we will apply **partition** algo and it will take **n** time. **Partition** algo divided the array. On the **left** side, apply **quick sort**. On the **right** side also, apply **quick sort**.

![image](https://user-images.githubusercontent.com/54589605/236498614-2cd70c39-4139-4a40-91d1-29fd6268b7e7.png)
![image](https://user-images.githubusercontent.com/54589605/236498936-fa192b84-a226-4d09-a718-1812d6e42aae.png)

* Big sorting equals to **small sortings**. Big quick sort equals to smaller quick sorts.
* Inside, quick sort, **partition** algo is there.

* After **partition algo** over, only **pivot** element is **sorted**.

> If the **pivot** is **5** then **1 to 4** should be sorted.

> If the **pivot** is **5** then **6 to 10** should be sorted.

> By seeing the **5** we can tell how many are the **left** side people and how many are the **right** side people.

> If **pivot** element position is not returned then we cannot say  how many are the **left** side people and how many are the **right** side people.

![image](https://user-images.githubusercontent.com/54589605/236500645-cf96455d-5c42-4800-80dc-f39f5a3b4280.png)
![image](https://user-images.githubusercontent.com/54589605/236519612-e7c20eaa-836b-4209-b44a-4b4192df0da5.png)
![image](https://user-images.githubusercontent.com/54589605/236519859-32eb3e1b-9e6b-4561-9063-f3bf5dd9ac4f.png)

* In the **if condition**, **less than and equal too**, so the **small** and the **equals** also come inside.
* If **small** coming then **increment i**, if **equal** coming then also **increment i**. Now, **swap**.

![image](https://user-images.githubusercontent.com/54589605/236520256-28bcca8b-c5a2-4acd-968e-6caa678bf79a.png)

> For loop is over. There are **three** parts. **Pivot element**, the **smaller or equal** elements are there, until **i** and the **bigger** elements are there from greater than **i**.

![image](https://user-images.githubusercontent.com/54589605/236520625-3a6b660b-df59-4689-80f0-eb18039401e4.png)

> We want **pivot** at the **middle** place. The last **small or equal** element is **i**. **Small and equal** also, we are swapping.

* Left side is not **only smaller** but **equal** also. For both we are **swapping**. Left side is **smaller or equal too**.
* Right side is **greater**.

![image](https://user-images.githubusercontent.com/54589605/236584205-986cdda9-182d-419a-b3bc-7c7df4b90bdf.png)

* Repeatative element's position is **changing**, that's the reason why **quick sort** is not **stable**. Unnecessarily swapping the position of repeatative elements.

> After swapping is over, quick sort will return the position of **i** which is **6** here.

![image](https://user-images.githubusercontent.com/54589605/236521884-81bde18e-ac34-449e-84e8-13a6d920fa05.png)
![image](https://user-images.githubusercontent.com/54589605/236584524-c42fd2ba-18a9-404b-820f-a5b10d864fa1.png)

> Don't worry about **a,b and c**.

> Before doing **partition**, **70a** was at the **first place**. 

> After **partition** over, **70a** went to the **6th place**.

> **6th place** person came to the **first place**.

* Repetative element's position in the quick sort, before and after sorting may change or may not change.  
* In merge sort, it never changes
* In Quick sort, it may change or may not change. Once fail means fail only, that's the reason **quick sort** is not **stable**. 

![image](https://user-images.githubusercontent.com/54589605/236584872-c6439ce7-f9d7-4397-9f19-e19247afd87d.png)

> After **partition** algo is over, the **pivot** element is only sorted. The position of the **pivot** element will not change.

* Time Complexity of **partition** algo -> O(n)

> Left and right people sorting will be taken care of by **conquor** using recursion.

> Because of **partition** algo **middle or pivot** element is sorted. Left and right element are sorted using **conquor**.

> All of the them, **left, middle or pivot and right** are sorted. So no need of **combine**.

* Just do **partition** algo **middle or pivot** element is sorted. Use **conquor** to sort the left and right element. So no need of **combine**.

> No need of **combine** because left people are not interested to go to the **right** side.

> No need of **combine** because right people are not interested to go to the **left** side.

> Left and right solving/sorting takes **T(n/2)** time individually. So the total is **2 * T(n/2)**.

* Recurrence relation -> 2 * T(n/2) +  n 

> By using master's theorem we will get **O(n * log n)**.

> We are solving **both** the sides.

![image](https://user-images.githubusercontent.com/54589605/236585705-b875fc5e-519e-4604-8b32-ac641d4b97b8.png)

### Example 3 of quick sort

![image](https://user-images.githubusercontent.com/54589605/236585841-1dcba6e5-56fb-4427-abe5-3c6aa50cc468.png)
![image](https://user-images.githubusercontent.com/54589605/236585976-c854560a-225b-49b8-9516-87c3ae17e1b7.png)

> After for loop over, array is divided into **3** parts.

![image](https://user-images.githubusercontent.com/54589605/236586013-3f319f25-cf6e-4c69-b4a0-9ae9a7f790f2.png)

* **i** is the last small element.

* The **partition algo** will return **7** as it is the **middle/pivot** element.

> **Less than and equal too** pivot is on the **left** side. **Greater than** pivot is on the **right** side.

* **Partition algo** time is **O(n)** is for **every case(EC)**.
* **One time partition**, one element is sorted.

![image](https://user-images.githubusercontent.com/54589605/236586320-e5b1a8fc-8031-4a79-a593-a9de8615f6d1.png)

* Binary tree is coming.

> The **no. of levels** in the tree is **log n**. 

> Every level cost is partition time only which is **O(n)** time.

* Whenever a **quick sort** algo is running, we will call **partition** algo again and again. Quick sort is recursion, so for every quick sort there is a **partition** algo called.
* Many time quick sort is called, **partition** algo is also called many times.
* **Quick sort** algo is running means inside also **partition** algo is running many time.

> If **Quick sort** algo is called **50** times then,

* Every function call of **quick sort** algo is **one partition**.
* As many times we have called **quick sort** that many times **partition** occurs.
* One time quick sort, **one time partition**.

> Top level quick sort is **one partition**, left side quick sort is **one partition**, right side quick sort is also **one partition**.

* Quick sort is a **recursive program**, so if quick sort is called many times then **partition** algo will also be called many times.

* If quick sort is many times, then partition is also many times. Every partition needed **pivot** element selection.
* When we say **partition is applied** which means **pivot** element is selected.

![image](https://user-images.githubusercontent.com/54589605/236587363-91e85f1d-f99c-4271-b557-01a1dcfaefd4.png)

* How many times **partition** those many times, **pivot** element is selected.
* Quick sort is running many time, partition is running many time, which means **pivot** selection is also going on **many time**. Everytime, we are selecting the **first** element.

> * Quick sort is running many time, partition is running many time, which means **pivot** selection is also going on **many time**. Everytime, we are selecting the **any** element we want, generally people select the **first** element. We can select **any element**.

> Everytime we have the **middle** element, that is also **quick sort**.

> Everytime we have the **first** element, that is also **quick sort**.

> Everytime we have the **last** element, that is also **quick sort**.

> First time quick sort, in the **partition** we take the **middle** element as the **pivot**. Second time, we will take the **middle** element as the pivot. Third time we took the **last** element as pivot. 

> Pivot selection we keep changing. Whenever recursion going on and in every recursive call, partition comes and in every partition, pivot required. Sometimes we will select **first** element as pivot, sometimes we will select the **last** element as pivot and sometimes we will select the **middle* element also. Then also **quick sort** works and it is called as **randomized quick sort**.

> **Randomized quick sort** means that we are **randomly** changing the **pivot** element selection. Every recursive call, we are taking some **random** element as **pivot** element.

* If we change **randomly**, performance will **increase** or not?

![image](https://user-images.githubusercontent.com/54589605/236588701-a5f7e823-1685-475d-8108-26046d010805.png)

> Better to have **more than one** possibility.

> If **same** possibility, then there is higher change of **death**, as all **enemies** will be at the **same** place.


* Quick sort performance will increase for **normal quick sort** or **randomized quick sort**?

> **Randomized quick sort** performance will **improve**.

![image](https://user-images.githubusercontent.com/54589605/236588930-ac10c250-f27a-4aca-af9f-8259455103be.png)

* Selecting pivot element randomly is known as **randomized quick sort**.
* In **Randomized quick sort**, **performance** of the **quick sort** will **improve**.

> Wheather we take **first, last, middle or any other element**, as the **pivot**, it doesn't matter, **pivot** element will go to it's **correct** place.

> We can take whatever we want as **pivot**, it is **same** only.

* Inside, quick sort, we have **partition** algo.

![image](https://user-images.githubusercontent.com/54589605/236589149-8aeeafcc-3ea7-4437-b167-b8660e4ae984.png)

> When we come to the **else** part, problem is **big**.

![image](https://user-images.githubusercontent.com/54589605/236589303-af053261-9bea-4b5b-a1c9-64c96843b0e0.png)
![image](https://user-images.githubusercontent.com/54589605/236589235-f75a7959-bf36-48a0-8302-9ca9221e50ed.png)

> At the end of the **partition** algo, the **pivot** element will go to it's **correct** place. It will return the **pivot** element position. The position **partition** returned is stored in **m** variable. **Pivot** element is there at the **m** position.

> **mth** element is already **sorted**.

![image](https://user-images.githubusercontent.com/54589605/236589486-a77002ec-901a-4af0-ac08-60e21da4ef04.png)

* Because of **partition** algo, middle element is **sorted**. 
* Because of **left side quick sort recursive** call, left elements are **sorted**. 
* Because of **right side quick sort recursive** call, right elements are **sorted**. 

> Everyone is **sorted**.

![image](https://user-images.githubusercontent.com/54589605/236589569-cd405c36-7e17-4cee-a6f8-63bcea5f57c3.png)

* All are there in the **same** array, as it is **in-place**. Now simply return the array(a).

![image](https://user-images.githubusercontent.com/54589605/236589612-5f66c7ad-cbea-4367-ba5d-9cc255b62abe.png)

### Doubt

![image](https://user-images.githubusercontent.com/54589605/236589680-6e714595-2bf9-48ab-a391-b3e86f21fb54.png)

## Recursion-II (32) [6th May 2023]

![image](https://user-images.githubusercontent.com/54589605/236602353-75deaa3d-eef0-4de7-9eb5-5ab165fc914b.png)

* After completion of the above code, who is sorted?

> The element we have choosen as **pivot** is **sorted**. The element at the **mth** position is already **sorted**. **m** is the index of the **pivot** element after keeping it at the **correct/sorted** place, means element at the **mth** place is already sorted.

![image](https://user-images.githubusercontent.com/54589605/236602734-e6593ceb-9aa8-489c-b568-c70d9d57cf58.png)

* Qs(a, P, m-1) -> Left side elements, before **m**, **P to (m-1)** elements we should sort.
* Qs(a, m+1, q) -> Right side elements, after **m**, **(m+1) + q** elements we should sort.

![image](https://user-images.githubusercontent.com/54589605/236602860-0560bfc4-94ba-4ecd-b9fa-12a6c2134c4e.png)
![image](https://user-images.githubusercontent.com/54589605/236602919-d33b3fe1-8d44-4587-9e80-8638c192fb04.png)

* Time complexity for **quick sort** of **n** elements is **T(n)**. **n = (q - p + 1)**. That is the value of **n**.

![image](https://user-images.githubusercontent.com/54589605/236603070-73a8a1f9-049d-49a7-a8ec-8b041018c024.png)

* For the whole quick sort algo, it is **T(n)** -> T(q-p-1).
* In the **if** part as there are **no loops**, so it is **constant or O(1)**.
* We know that **partition algo** takes **n** times as there is **one loop**.
* For the first recursive call, it is -> T(m-1-p+1) -> **T(m-p)**.
* For the second recursive call, it is -> T(q-(m+1)+1) -> T(q-m-1+1) -> **T(q-m)**.

> If we take **110** as the pivot element. It went to exact the **middle**.

![image](https://user-images.githubusercontent.com/54589605/236603984-26eb8701-3cbc-4d19-bc76-c9520968aa5b.png)

> If we take **70** which is the **first** element as **pivot**. All of the elements went to the **left** side as they were all **smaller** than **70** and none of them went to the **right** side, as none of them were **greater/bigger** than **70** so the **right** side is **empty**.

* In which position, did the pivot element(70) go?

> It went to the **last** position.

![image](https://user-images.githubusercontent.com/54589605/236604635-d7fe8094-47e2-439c-b4a8-f283b9ec650c.png)
![image](https://user-images.githubusercontent.com/54589605/236605133-e370b737-9884-42d9-b200-9f0b8634e42d.png)

> If we take **20** as the pivot element. If not all but most of the elements went to the **right** side as they were all **greater/bigger** than **20** and only **10** went to the **left** side, as **10** is **smaller** than **20** so the **left** side has **only one element**.

* In which position, did the pivot element(70) go?

> It went to the **second** position/place.

![image](https://user-images.githubusercontent.com/54589605/236605865-e2844b55-844b-4128-a1e3-855023ec2a98.png)

> After **partition** algo is over, pivot element will go **exactly to the middle**, we cannot give any **gurantee**.

* It can go **anywhere**.

![image](https://user-images.githubusercontent.com/54589605/236605939-8468f6a3-4071-4c4c-bdc5-c0b63ee35d30.png)

> If we are **lucky** then it will go exactly to the **middle**.

> If we are **unlucky**, then it will go in the **extreme** direction of the **left or the right** side.

![image](https://user-images.githubusercontent.com/54589605/236606115-66681946-2784-4564-8636-e2841750d664.png)

> We cannot give gurantee that the **recursive** call will go to the **half/middle**. That's why we cannot write **T(n/2)**.

* There is **no gurantee** that it will always be **half/middle**. 
* Sometimes it is possible that we will get **T(n/2)**.

* Between T(m-p) and T(n/2), which is always correct?

> The first one which is **T(m-p)** is **always correct**.

![image](https://user-images.githubusercontent.com/54589605/236606315-250384cf-dfbb-4b38-b912-721eaf1cd6a8.png)

* **T(m-p) and T(q-m)** are **exact** values.

![image](https://user-images.githubusercontent.com/54589605/236606436-3caae433-d26b-4723-9f9d-06aabc58761d.png)
![image](https://user-images.githubusercontent.com/54589605/236606446-d6a244c1-4c53-4215-8675-2e059a32dce6.png)

* In **partition** algo, **(n-1)** is asymptotically **equal** to **n** only.

### Quick sort problem

![image](https://user-images.githubusercontent.com/54589605/236607341-24d6ede2-f51a-4f6f-beb2-1cda32b568a9.png)

* Let **T(n)** be the time complexity of the above algorithm(Quick sort).
* If we are **lucky** which means **Best case**.
* If we are **un-lucky** which means **worst case**.

#### Best Case(Lucky)

> If we are lucky, then **n** is for **partition** algo. We will also get **50-50** divide, which means it will be **T(n/2) + T(n/2) -> 2 * T(n/2)**.

* T(n) -> 2 * T(n/2) + n.

> Solved using **substitution method**, we will get **O(n * log n)**.

* T(n) -> 2 * T(n/2) + n -> **O(n * log n)**. [**Best Case**]

* This is the **recurrence relation** for **best case time complexity** of **quick sort**.

> **50-50** is the **balanced behaviour**. Life will be **lucky** if we have **balanced behaviour**.

![image](https://user-images.githubusercontent.com/54589605/236607861-7b140529-8d31-45d5-9896-f31f03558338.png)

* Equal priority. Body requires everything.

![image](https://user-images.githubusercontent.com/54589605/236607947-602a93f8-8c97-4de7-a4dc-bd8454c98b42.png)

* Don't eat like **PIG**.

#### Worst Case(Un-lucky)

> First apply **partition** algo which is **n**. After applying **partition** algo, if we are **un-lucky** then all of the elements except the **pivot** element will go to **one side** wheather it is **left or right** side. After **partition** algo is over, **pivot** element went to the **correct** place. Remaining elements are **(n-1)**.

> All(n-1) will go to **one side**, other side, no one.

![image](https://user-images.githubusercontent.com/54589605/236608359-35aad3c3-1ab7-4d38-b1ae-a75d6eb85b2f.png)

> After **partition** algo is over, **pivot** element went to the **correct** place. Remaining is **n-1** elements, all of the **n-1** elements that are left out, they will go to **one side**, other side, no one.

* This is **un-balanced** behaviour.

![image](https://user-images.githubusercontent.com/54589605/236608467-81699633-132b-4c79-999a-4d727119ee0e.png)

* T(n) = n + T(n-1) + T(0)
* T(n) = T(n-1) + n + 1
* T(n) = T(n-1) + n

> After doing **substitution method**, we got **O(n^2)**, which is the **worst case**.

* T(n) = T(n-1) + n -> **O(n^2)** [**Worst case**]

* This is the **recurrence relation** for **worst case time complexity** of **quick sort**. 

![image](https://user-images.githubusercontent.com/54589605/236608562-dc5aa47f-ce6b-4daf-a49a-2be1495ce567.png)

* Quick sort will give **worst case** performance if **partition algo** behave **best way or worst way**?

> **Worst Way**. Worst Way means **un-balanced** behaviour. It is recursion, so **partition** algo behaving like this all of the time. Everytime it is **un-balanced** partition.

> When quick sort is going on, **partition** algo runs many time.

* Quick sort will give **worst case behaviour/performance** if **partition** algo behaves like **worst way** everytime.
* Quick sort will give **best case behaviour/performance** if **partition** algo behaves like **best way** everytime.

![image](https://user-images.githubusercontent.com/54589605/236608757-7ed04537-40fc-4927-994e-b15b081e27b8.png)
![image](https://user-images.githubusercontent.com/54589605/236619436-198c21db-2b2c-4e48-981d-6657d046fe7d.png)

* Merge sort is similar to **quick sort's**, best case.
* Merge sort is always **50-50**.
* Merge sort having **only one varition** which is **50-50** to find the **middle** element.

![image](https://user-images.githubusercontent.com/54589605/236628622-1836259d-5b4f-4c0a-9950-f139d9699ff7.png)
![image](https://user-images.githubusercontent.com/54589605/236628722-8cd64172-b166-4c7d-8a8a-08e7701c4e3e.png)

* Quick sort **worst case** is giving **unbalanced tree**. The no. of levels is **n**, as **only one element** is going.
* Quick sort **best case** is giving **balanced tree**.

* Quick sort **best case** time complexity -> O(n * log n).

> The recurrence relation is **50-50**, after partition it is **50-50**, which is **2 * T(n/2)**.

* Quick sort **worst case** time complexity -> O(n * 2).

> After partition, all of the **n-1** elements will go to **one side** and the other side is **empty**. So, it is **T(n-1)**.

* Recurrence relation for quick sort best case time complexity?

> 2 * T(n/2) + n. Because it is **50-50**.

* Recurrence relation for quick sort worst case time complexity?

> T(n-1) + n. Because all the elements go to **one side**.

> Quick sort's worst behaviour is **n^2** and it will come when **partition** algo is at it's **worst case** and behaving like **un-balanced**.

![image](https://user-images.githubusercontent.com/54589605/236629141-0f076cb6-929c-4932-a4e1-c31b6587bf37.png)

* Left side is **balanced behaviour**.
* Right side is **un-balanced behaviour**.

* Balanced or un-balanced which will happen **more**?

> Balanced.

* Balanced happens **more** that's why the **best case** for quick sort is the **average** case also.

* Quick sort **best case** time complexity -> O(n * log n). **Balanced behaviour**.
* Quick sort **average case** time complexity -> O(n * log n).
* Quick sort **worst case** time complexity -> O(n * 2). **Un-balanced behaviour**.

![image](https://user-images.githubusercontent.com/54589605/236629757-9ae3b47a-3bc9-464a-802e-f06601921955.png)
![image](https://user-images.githubusercontent.com/54589605/236629923-7bf16a74-3e3e-4c29-b41b-723d700aa442.png)
![image](https://user-images.githubusercontent.com/54589605/236630000-bf14471a-65f6-4b37-83b4-ef4b41d00b58.png)

* The above **recurrence relation** for quick sort is for **every case**.
* Quick sort **best case**, stack size -> **log n**.
* Quick sort **worst case**, stack size -> **n**.

> In  Quick sort **worst case**, the stack size is more than **log n** and it is actual **n**. So it will be **out-place**.

* Quick sort is **in-place**. The **recursive** program is converted into a **better way**, something like **non-recursion**. 
* Time complexities are **same** only.
* Best case, stack space -> O(1)
* Worst case, stack space -> O(log n).

> Using better programming, stack space will be **decreased** to **bast case** which is **O(1)**. Because of that reason, **quick sort** is **in-place**.

![image](https://user-images.githubusercontent.com/54589605/236630667-76e9d51e-b335-410a-bc70-aa2ea8276fb7.png)
![image](https://user-images.githubusercontent.com/54589605/236630762-acd07851-e619-444a-a360-5f9741cb1236.png)

* It is for **modified** program. [**NOT NEEDED**]

![image](https://user-images.githubusercontent.com/54589605/236631119-2f04f4d7-de78-4da7-8661-b92c907bdae3.png)

* For the **Recursive** program.
* Best case, stack space -> O(log n).
* Worst case, stack space -> O(n).

* Even though **worst case** stack space is **n** for quick sort, then also it is **in-place** why?

> We can save the space by using **non-recursive** programs.

![image](https://user-images.githubusercontent.com/54589605/236631292-257df664-9c92-4bec-b20b-38cd4881dbe4.png)

* Quick sort **best case** time complexity -> o(n * log n)
* Quick sort **average case** time complexity -> o(n * log n)
* Quick sort **worst case** time complexity -> o(n * 2)

* When, quick sort gives **best case** -> Partition algo is in balanced behaviour or in best case.
* When, quick sort gives **average case** -> Partition algo is in balanced behaviour or in best case.
* When, quick sort gives **worst case** -> Partition algo is in un-balanced behaviour or in worst case.

![image](https://user-images.githubusercontent.com/54589605/236631812-00afeea5-7a78-4df9-bb83-c993056324ea.png)

* Merge sort is always **left** diagram. Always **n * log n**.

### Quick sort problems

![image](https://user-images.githubusercontent.com/54589605/236632211-92525f30-968d-4018-a681-f7528030799d.png)
![image](https://user-images.githubusercontent.com/54589605/236633343-347fea1d-a0bd-443c-9ac7-2ab5683d7b9c.png)

1) Increasing order sequence
2) Decreasing order sequence
3) Same elements.

* Any **quick sort** question came, directly or in-directly it belongs to **partition** algo. [**IMPORTANT**]

* What  is the **relationship** between **c1, c2 and c3** that we have to calculate?
* Comparisions and swaps are almost **same**. 

#### (1)

> First input is **increasing/ascending** order. For quick sort, the **no. of comparisions** we meed to calculate, quick sort is directly or in-directly **partition** algo. First element is **pivot**. **J** completed the whole loop and **i** didn't move at all. Comparing any element with pivot, no small element came, that's the reason **j** never stopped.

> In partition alog, **for loop** is over now, as **j** has crossed the boundary. Lastly, **one swap** is there before the program terminates. We have to swap a[i] with a[p]. Now, return **i**.

> The pivot element we selected is **10**, after the **partition** algo is over, the pivot element went to **one place** that is **first place**. More than **pivot**, all elements. Less than **pivot**, no one.

> If we select the **smallest** element as the **pivot** element then no one will go to the  **left** of the **pivot** element as it is already **smallest**. Input is **increasing/ascending** order, which means **first** place is **smallest** person. Already input is **increasing/ascending** order, we are taking the first element as **pivot**.

> **smaller** than him, no one will come. Everyone will come to the **right side** of **pivot**.

> Partiiont algo, we applied on **7** people, then **no. of comparisions** will be **6**. 

> Partiiont algo, we applied on **7** people, then **no. of swaps** will be **1**. As it is in **ascending** order, there are **no swaps**. The only swap is at the end of the program between a[i] and a[p].

![image](https://user-images.githubusercontent.com/54589605/236633976-7d15f7f2-7897-49f5-a5da-deda98930edd.png)

> When we say quick sort, all elements should be **sorted**.

* We have to complete all.

![image](https://user-images.githubusercontent.com/54589605/236634168-e77d113e-13ba-4ac1-b9ee-3bcd5f26423e.png)
![image](https://user-images.githubusercontent.com/54589605/236634194-4ca82f33-31cc-4286-ac65-37c658b8851f.png)

* Total comparisions -> 6 + 5 + 4 + 3 + 2 + 1 -> 1 + 2 + 3 + 4 + 5 + 6 -> (n * (n-1))/2 -> O(n^2).

![image](https://user-images.githubusercontent.com/54589605/236634399-fa396023-cec6-4139-8a56-fda993607ecc.png)
![image](https://user-images.githubusercontent.com/54589605/236634833-6dc8b405-8b76-4f95-9749-86dbbd134ec9.png)

* No. of passes -> **n-1** -> **O(n)**.
* Total swaps -> **n-1** -> **O(n)**.

> Ascending order input and we apply quick sort on it, **no. of comparision** is **O(n^2)**.

* **No. of comparision** is **O(n^2)**.
* **No. of swaps** is **O(n-1)**

![image](https://user-images.githubusercontent.com/54589605/236634971-977af5b2-adb5-4ab0-9430-435597d55634.png)

> Because of **ascending order**, there is a **left gap** that why **time complexity** of **quick sort** is **O(n^2)**.

* **Left gap** is always, that why quick sort is giving **worst case**.

* Quick sort will give **best or worst** case when elements are arranged in **ascending order**?

> **Worst case**, unbalanced behaviour we get.

* Here, it was **ascending** order, so **no swaps**, as everytime **greater** coming. Only one swap at the end.
* It was **left** grapped.

#### (2)

##### Pass 1

![image](https://user-images.githubusercontent.com/54589605/236635209-0393f467-1163-4f9b-9cbc-2a901c9a9586.png)

* By default, **first** element is the **pivot**. On the second input we have to apply **partition**.

> As it is a **descending order**, so whatever comes after **pivot** element will be **smaller**. So, eveytime **swap** as everytime it is **smaller**. **J** crossed border, so **loop** over. Now swap **a[i] and a[p]**.We returned **7** as it the **index** of the pivot element which went to the **correct** place.

> All are **less** than pivot, so they all came to the **left** side. No one on the right side, as no one is **more** than pivot.

* In this problem, it is **right** gapped.
* It looks like **un-balanced** behaviour.

> If the first two rounds are **un-balanced** behaviour but the rest are **balanced** behaviour, then it is **best case**.

> That's why with **1 or 2** round we cannot say anything, until we are **confirmed** we have to **continue**.

![image](https://user-images.githubusercontent.com/54589605/236652132-5713af69-572c-495b-b5ff-ef04a336628a.png)

> For **n** elements, partition will take **n-1** comparisions. Time complexity is **n**.

> For **7** elements, partition will take **6** comparisions. 

> For **7** elements, partition will take **6 + 1 -> 7** swaps. **6** swaps for **6** comparisions and lastly **one more** swap.

![image](https://user-images.githubusercontent.com/54589605/236652380-0a2bdc2b-237a-42ca-86b8-94bd40f345ac.png)
![image](https://user-images.githubusercontent.com/54589605/236652878-fe22dc17-5bad-463e-9f3a-a37fa0518f4f.png)

* Time complexity -> Comparisions + swaps -> O(n^2)

##### Pass 2

![image](https://user-images.githubusercontent.com/54589605/236652274-20c3f83a-4e8c-4e98-96b0-eead76f95c5e.png)

> The pivot is the first element which is **10**. **J** crosses boundary and there are **zero(0)** swaps. **I** didn't move at all. Now swap **a[i] and a[p]**.We returned **1** as it the **index** of the pivot element which went to the **correct** place.  

> Less than **pivot** no one and everyone is more than pivot. 

* It is **left** gapped now.

> In the **Pass 1** it was **right** gapped and now in **Pass 2**, it is **left** gapped.

* Just by seeing **Pass 1**, don't conclude the behaviour. Observe what is going on.

> In **Pass 1**, last element came to **first** place and first element when to **last** place. Which means in **Pass 2**, pivot element is **small** element.

* It is behaving like **alternative gap**. One time it is **left** gap, one time it is **right** gap.

![image](https://user-images.githubusercontent.com/54589605/236652559-eac63e39-38da-4415-a763-bd9f3396c4d9.png)

> In **Pass 1**, there are **6** comparisions and we will **7** swaps.

> In **Pass 2**, there are **5** comparisions and we will **1** swaps.

> In **Pass 3**, there are **4** comparisions and we will **5** swaps.

> In **Pass 4**, there are **3** comparisions and we will **1** swaps.

> In **Pass 5**, there are **2** comparisions and we will **3** swaps.

* **More** no. of swaps are coming in **right** gapped. [**IMPORTANT**]
* **Left** gapped means **one(1)** swap only. [**IMPORTANT**]
* **Right** gapped means, **n** element, then **n** swaps only. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/236652695-ecbc138e-f330-4d31-a2ab-05b4ecb12884.png)

* Alternative gapes.

* Total comparisions -> 6 + 5 + 4 + 3 + 2 + 1 -> n-1 + n-2 + n-3 + n-4 + n-5 + n-6 + .... + 2 + 1 -> ((n-1) * n)/2 -> O(n^2).
* Total swaps -> n + 1 + (n-2) + 1 + (n-4) + 1 -> (n(n+1))/(2 * 2) -> (n(n+1))/4 ->O(n^2)

> We are dividing by **4** because we want either **even** or **odd** numbers. **Dividing by 2**, gives sum of all natural numbers.

![image](https://user-images.githubusercontent.com/54589605/236652857-d1cbbebe-f72b-43f5-8d89-6c3b0f735c45.png)

* Time complexity -> Comparision + swaps -> n^2 + n^2 -> 2 * (n^2) -> O(n^2).

![image](https://user-images.githubusercontent.com/54589605/236652871-48893815-8710-451c-a14a-ef231caba1e9.png)

* If we apply quick sort on **ascending order**, time complexity?

> **O(n^2)**.

* If we apply quick sort on **ascending order**, time complexity?

> **O(n^2)**.

> For both **increasing and decreasing** we are getting **un-balanced** tree, because all of the elements are goint to **one side** only and the other side is **empty**. Swaps may comes or may not come, but the **no. of comparisions** are the **same** only, which is **n^2**.

![image](https://user-images.githubusercontent.com/54589605/236653262-cc5a2256-e784-49fa-a7cd-647e38338657.png)

#### (3)

![image](https://user-images.githubusercontent.com/54589605/236653251-a5aeccfb-6fba-47b4-84f7-3a68f17c10bc.png)

> One pass is **enough**. All elements are **same** only.

![image](https://user-images.githubusercontent.com/54589605/236653279-2950aae6-704b-4ae3-8cd1-64f6500ecef5.png)

> First element is the pivot element only, which is **10**. **J** closes boundary. **I** is at the **7th** position. Now swap **a[i] and a[p]**.We returned **7** as it the **index** of the pivot element which went to the **correct** place. 

![image](https://user-images.githubusercontent.com/54589605/236653348-050c0ad6-a4d0-4195-a57d-c9d07f2354f3.png)

> **10a** was there at the **first** place, now it is at the **last** place. **More** than **10**, no one. All of the elements are **less than or equal to 10**.  

![image](https://user-images.githubusercontent.com/54589605/236653394-c851a9cc-9ff5-48ab-9957-58fc0139746b.png)

* It is **right** side gapped everytime.

> For **7** elements, there are **6** comparisions, so the **no of swaps** are **6 + 1 -> 7**.

> No more **rounds** needed, because we got to know, that it will be always **right** gapped.

* **10a** was there at the **first** place and after sorting, it went to the **last** place. It is not **stable**.

> Repetative order of elements are **changing**. It is not **stable*

![image](https://user-images.githubusercontent.com/54589605/236653736-10728ebd-2bb9-47a4-9c7f-fbf78a500c1a.png)

* Total comparision -> O(n^2)
* Total swaps -> O(n^2)
* Time complexity -> Comparision + swaps -> n^2 + n^2 -> 2 * n^2 -> O(n^2).

![image](https://user-images.githubusercontent.com/54589605/236653782-d5b90364-c431-40e9-b531-62281021ef55.png)

## Summary

* 3rd question -> Right gapped
* 2nd Question -> Alternative gapped
* 1st question -> Left gapped.

> In all of the **three** question's inputs, **no. of comparisions** are **same**, which is **n^2** everytime.

> If we apply quick sort on the given three question's inputs, **no. of comparisions** are **n^2** everytime. For the first question's input it is **c1= n^2**.  For the second question's input it is **c2= n^2**.  For the third question's input it is **c3= n^2**.

> All **three(c1, c2 and c3)** are **equal**.

![image](https://user-images.githubusercontent.com/54589605/236653890-f47c1812-de07-438b-ac22-f2d7a3a868b6.png)

* c1 = c2 = c3 = **O(n^2)**.

## Note [**IMPORTANT**]

* Quick sort will give **worst case performance**, if the **array** is already **sorted or almost sorted**.

![image](https://user-images.githubusercontent.com/54589605/236653978-fe20c9ca-cb14-40eb-bb38-7c7fa8462b35.png)

* Quick sort will give **best case or average case performance**, if the **array** is **unsorted or not sorted**.

> Quick sort is the hero for **unsorted or not sorted** arrays.

> Swaps maybe **increasing or decreasing** but **no. of comparisions** are **same** which is **n^2**.

* Normally, time complexity of **quick sort** is **no. of comparisions** only which is **O(n^2)** only.

> **O(n^2)** came because in all of the trees, there are **n** levels. Every level partition is **n** time. So, the time complexity becomes **n * n -> n * 2 -> O(n * 2)**.

> Forget about **swaps**, the goal is **comparisions** only.

> **c1, c2 and c3** are all **O(n^2)** because they have all given **un-balanced** tree. So, it is **O(n^2)**.

* Quick sort behaviour when **ascending** order array given -> **un-balanced** behaviour -> **O(n^2)**.
* Quick sort behaviour when **descending** order array given -> **un-balanced** behaviour -> **O(n^2)**.
* Quick sort will give **best performance** on what type of array?

> **Unsorted or not sorted** arrays.

* For **merge sort** algo, anything is **OK**, give **ascending, descending, sorted, un-sorted** doesn't matter. Everytime it is **n * log n**.
* Quick sort encouraged with **good inputs** i.e **unsorted or not sorted** arrays.

![image](https://user-images.githubusercontent.com/54589605/236654521-5cf69c65-440c-4df9-8e08-498ac2d73e17.png)

* What will be the **stack space** for these **inputs**?

> **Stack space** means program should be given. If program not given, then we have to **assume** the **best program/algo**. **Worst case** it is **n** and for **best case** it is **log n**. We have to assume the **best case** which is **log n**.

* Recursive or non-recursive program, time complexity is **same**.

* Time complexity of **quick sort** is **O(n^2)**, everytime or when sorted array given?

> When sorted arrays given. 

> For **un-sorted** arrays it is **n * log n**.

## Conclusions

![image](https://user-images.githubusercontent.com/54589605/236655026-31cb042f-aa6e-4319-9ce1-bd84a9d47e71.png)
![image](https://user-images.githubusercontent.com/54589605/236655052-5c1177a2-9104-4069-9795-3c8c48a127ea.png)

* TIme complexity is **O(n * log n)**.
* T(n) = T(n/2) + T(n/2) + n -> **O(n * log n)**

> After **partition** algo is over, **n** times is completed. Now, array is divided, **un-equally** and not **un-balanced**.

![image](https://user-images.githubusercontent.com/54589605/236655112-f5664146-c03a-4c5d-b2e8-264ecaa1b04b.png)

* T(n/3) -> log n base 3
* T((2 * n)/3) -> log n base 3/2

> First level cost is **n**. Second level cost is also **n**. As it is a **recursive** program, so rest of the levels will also be **n** only.

* T(n) = T(n/3) + T((2 * n)/3) + n -> **O(n * (log n base (3/2)))**.

> As we have used base **3/2 -> 1.5** as it **smaller** compared to **3**, which means we took **upper bound**, so we took **Big-O**.

![image](https://user-images.githubusercontent.com/54589605/236655222-928aae65-955d-42be-8a56-c9ad19a393d1.png)

> Both **differ** by **constants** only, as one base is **3** and other base is **3/2**. So we can write **O(n * log n)**. 

* T(n) = T(n/3) + T((2 * n)/3) + n -> **O(n * (log n base (3/2)))** -> **O(n * log n)**.

> We can write **theta** also.

![image](https://user-images.githubusercontent.com/54589605/236655271-c06bcc35-15fd-4913-9c37-98c4d510a2bc.png)

> Quick sort algo will give **best case performance** of **O(n * log n)**, not only in **50-50** equal division, but in **1:2** also. 

> Just make the total as **three** parts, keep **one part** to the **left**, keep **two parts** to the **right**. **Un-equal** division also leads to **best performance**.

![image](https://user-images.githubusercontent.com/54589605/236655421-ea389021-c86f-4ee7-88f8-1d8e03cb435e.png)
![image](https://user-images.githubusercontent.com/54589605/236655439-d8d58130-a5e5-47d3-8f44-d3da5be763e6.png)

* T(n/5) -> log n base 5
* T((4n)/5 -> log n base 5/4.

> Every level cost is **n**. We have **log n base 5/4 levels**.

* T(n) =  T(n/5) + T((4n)/5) + n -> **O(n * log n base 5/4)**.

> For **100** people, **20** people on the **left** side and **80** people on the **right** side. Then also **best performance**.

* Mostly **quick sort** will give **best performance**, which means for **average case**, quick sort gives **best performance**.

![image](https://user-images.githubusercontent.com/54589605/236655566-1a7d3092-9d8b-48cd-9188-007a0fef0c72.png)
![image](https://user-images.githubusercontent.com/54589605/236655581-b61672e3-536c-4d7f-a834-06e8f44abd35.png)

* Using **recursive** tree method, we can solve all of them.
* The above ones are **best and average** case performances.

* Quick sort will give **best or average** case performance if:

* T(n) = T((alpha) * n) + T((1 - (alpha)) * n) + n

> All of the **alpha** elements are on **one side** and the remaining **(1 - (alpha)) * n)** elements on the **other side**. If the **partition** algo dividing like this, then quick sort will give **best case** performance, which is **O(n * log n)**.

* 0 < (alpha) < 1. [Alpha is more than 0 but less than 1]

![image](https://user-images.githubusercontent.com/54589605/236655754-9908f53f-83b3-473f-8f60-857684ad09e9.png)
![image](https://user-images.githubusercontent.com/54589605/236655795-507184ad-0885-4323-8f5d-2e811a6b3121.png)

* (alpha) = 1/2 [**O(n * log n)**] [1st example]
* (alpha) = 1/3 [**O(n * log n)**] [2nd example]
* (alpha) = 1/5 [**O(n * log n)**] [3rd example]
* (alpha) = 1/5 [**O(n * log n)**] [4th example]

> We can take **(alpha)** as anything as long as it is **less than 1** and **more than 0**.

* If, (alpha) = 1/2, then the time complexity is **log n base (1 / alpha) -> log n base (1/(1/2)) -> log n base 2**.
* If, (alpha) = 1/2, then time complexity is **log n base 2**.

* T((alpha) * n) -> log n base (1/ (alpha)).
* T((1 - (alpha)) * n) -> log n base (1 / (1 - alpha))

![image](https://user-images.githubusercontent.com/54589605/236656017-62de2f1b-98cb-49b6-89ca-457a6e37c70a.png)

> Comparing **left and right** heights, we cannot say who is **bigger**, because we can **inter-change**.

![image](https://user-images.githubusercontent.com/54589605/236656069-15cdd27d-07be-43bc-bbba-ad8be4fd0f44.png)

* If (alpha)=2/3, then **1 - (alpha)** is **1 - (2/3) -> 1/3**. 
* f (alpha)=1/3, then **1 - (alpha)** is **1 - (1/3) -> 2/3**. 

> We can **inter-change** that's the reason why we cannot say **clearly** who or which one is **bigger**. It is **dependent** on what **(alpha)** we will take. That's why we cannot say who is **bigger**.

![image](https://user-images.githubusercontent.com/54589605/236656215-bb5934ae-38d9-46bf-80ad-875c1623dae6.png)

* If array is **unsorted** then what type of recurrence relation for time complexity we will see for quick sort?

![image](https://user-images.githubusercontent.com/54589605/236656253-69299b95-bb79-416a-812f-57d1e2383402.png)

* These kind of things.
* If array is **unsorted** then time complexity will be **one** of the above recurrence relation for time complexity will come?

> **One of the above** recurrence relations for time complexity will **come**.

![image](https://user-images.githubusercontent.com/54589605/236656315-7b64123c-dc37-47fe-823b-e5f55ecf8383.png)
![image](https://user-images.githubusercontent.com/54589605/236656332-520e76cd-3864-4f75-b3eb-dddcea1e94d3.png)

> Between **0 and 1** there are **infinite** possibilities.

* Mostly **quick sort** will give **best or average** case.

![image](https://user-images.githubusercontent.com/54589605/236656381-5a912d89-9bb0-4c6f-af0d-aa50cb4d3b07.png)

> Partition algo is dividing the array in such a way that **fraction of n** is on **one side** and **remaining** is on **another** side.

![image](https://user-images.githubusercontent.com/54589605/236656426-6df2bf3f-f342-4dd6-aa62-248e91b58d27.png)

* **Fraction of n** -> n/5, n/10, n/2, n/3.
* **Remaining** is on **another** side -> (1 - (1/5)), (1 - (1/10)), (1 - (1/2)), (1 - (1/3)).

![image](https://user-images.githubusercontent.com/54589605/236656517-ac7924b6-5168-40f9-aec4-cd7cea048d45.png)

> **max** is written because **it depends on (alpha)**. (alpha) maybe **1/5**, (alpha) maybe **4/5**. If **(alpha) = 4/5** then **1 - (alpha) -> 1 - 4/5 -> 1/5**. I f **(alpha) = 1/5** then **1 - (alpha) -> 1 - 1/5 -> 4/5**. It is **dependent on (alpha)**. **Reverse** also possible. **TRUE**.

![image](https://user-images.githubusercontent.com/54589605/236656572-e92e9871-3143-49e6-87df-b781bf4f01de.png)

* Quick sort **best case** is **infinite**, that means **everytime**, **best case** only will happen. Mostly it is **best or average** case only.

![image](https://user-images.githubusercontent.com/54589605/236656618-89c33198-33fc-4183-b2b9-9d2df6a260a7.png)

* Quick sort.

![image](https://user-images.githubusercontent.com/54589605/236656853-2205609e-0320-4c2c-8461-7133de75737c.png)

> After **partition** algo is over, quick sort divided the given array into **two** parts, no one came to the **left** side and on the **right** side, remaining everyone(n-1) elements came. **One more** elements is the **pivot element** and it is placed in the **correct** position/index.

> We can neglect **T(0)**.

> All elements(n-1) are going to **one side**. It will lead to **n** level tree. Everywhere **partition** cost is **n**. So, **n * n -> n^2**.

![image](https://user-images.githubusercontent.com/54589605/236656912-ba900039-e997-4357-ad58-43083e1a1c39.png)

> After **partition** algo is over, quick sort divided the given array into **two** parts, only **one element** came to the **left** side and on the **right** side, remaining everyone(n-2) elements came. **One more** elements is the **pivot element** and it is placed in the **correct** position/index.

> Every time **n-2** means **n/2** level. Everywhere **partition** cost is **n**

* T(1) -> Constant time.

* T(n) = **(n/2) * n** -> **n^2**.

![image](https://user-images.githubusercontent.com/54589605/236657346-87621a58-264c-4458-a51c-ff518be3fda2.png)

* **Partition** time is **n** time. **Left** hand side is **constant(c)** elements. **Right** hand side is **remaining** elements. **One element** is pivot element.

![image](https://user-images.githubusercontent.com/54589605/236657393-cb3da1a4-be21-4a92-b5ef-a8873a537014.png)

* Where **c** is **constant** and **c >= 0**.

![image](https://user-images.githubusercontent.com/54589605/236657421-09f0b23b-5b6b-4f1f-9e60-ac3874c0ce4f.png)

* If **left** is **zero(0)** then **right** is **n-1** elements. **First** recurrence relation will come from **above**.

* If **left** is **one(1)** then **right** is **n-2** elements. **Second** recurrence relation will come from **above**.

* If **left** is **five(5)** then **right** is **n-6** elements. **Third** recurrence relation will come from **above**.

* We can take any value of **c** as **constant**.
* **Worst case** of **quick sort** is many **possibilities**, but the **only condition** is **one side is constant(c)** elements, other side is **remaining elements**.  

![image](https://user-images.githubusercontent.com/54589605/236657520-61d38e67-6fe8-4cdf-af50-e0a1938c660f.png)

* Partition algo behaving like, **one side is constant(c)** elements and on the other side is **remaining elements**. Quick sort will give **worst case** performance of **O(n^2)**.
* Quick sort will give **worst case** performance for, **sorted or almost sorted** arrays.
* **Almost sorted** means **constant(c) people** not sorted. **Constant(c) people** will go to **one side** and the **remaining** on the **other** side. 

![image](https://user-images.githubusercontent.com/54589605/236658408-4f2ccfdf-0951-4b3b-b432-b44c37716fc8.png)
![image](https://user-images.githubusercontent.com/54589605/236659514-25b45350-e91f-4cde-a469-dfe7c7bc2573.png)

* Worst Case. All of them are quick sort worst cases.
* Numbers mean **constant only**.

![image](https://user-images.githubusercontent.com/54589605/236659762-75f1b3f6-c6e0-43cf-8af9-795be1c2218e.png)

* Best and average case -> **Unsorted arrays**.

> In the **best or average case** of quick sort, **not constant** but **fraction of 'n'** on **one side** and the **remaining elements** on the other side.

* It is **n/2 -> n/4 -> n/8**. 

### Question

* While doing quick sort algo, partition algo always dividing the array in such a way that **300** elements are on **one side** and the **remaining** elements are on the **other** side?

> **O(n^2)**.

* Numbers(300, 10, 1, 5, 2) mean **constant only**.
* In-terms of **n**, then it is **not constant**.

![image](https://user-images.githubusercontent.com/54589605/236659675-35f5e1c1-5427-47d1-913d-2399ca7523f0.png)

### Doubt

![image](https://user-images.githubusercontent.com/54589605/236659811-0498da05-5794-4978-9776-db01f73fde92.png)

* 8hrs more needed. 8 more classes needed.

## DP-VIII (33) [7th May 2023]

* r = randomgenerator(a, p, q)
* Swap(a[p], a[r])

![image](https://user-images.githubusercontent.com/54589605/236671227-cb9bfa3e-ecf0-4178-8889-6c8a2ff86346.png)

* p=1 and q=10. a[p]=80, a[7]=40.

> randomgenerator(), choose **7**. Now swap **a[p] and a[r]**. We got **a[p]=40** and **a[r]=80**. Now apply **partition**. **7th** element is taken as the **pivot** now. This is the way, on how to take a particular element as  **pivot** element.

> Earlier we learned, how to take the **first** element as the pivot element. If we want to take someone else then don't change the algorithm. Just **add** a few lines extra before the algorithm starts to choose some other element.

> If we want to take the **4th** element as the pivot element now. We have to swap(a[p], a[4]). We have to swap, a[4] with the **first element**. Now, at the **first** place **4th element** is there. Now, apply **partition**. That's it, no need to change the algorithm.

![image](https://user-images.githubusercontent.com/54589605/236671729-65772b6b-c760-40d6-8ccc-cd94b54bbe82.png)

> If we want to take the **8th** element as the pivot element now. We have to swap(a[p], a[8]). We have to swap, a[8] with the **first element**. Now, at the **first** place **8th element** is there. Now, apply **partition**. That's it, no need to change the algorithm.

![image](https://user-images.githubusercontent.com/54589605/236671848-1a289999-ed1a-4ac4-bb5e-1caf71bda45c.png)

* When we called quick sort for the **first time**, **randomgenerator()** returned some **random number(k)**, so we have take **kth** element as **pivot** elements. This is **randomized quick sort**.

![image](https://user-images.githubusercontent.com/54589605/236672024-c64c76ad-785e-4dfe-83c3-a93695ff9dac.png)

* **Randomized quick sort*

> If we **remove** the lines written with **red color**, then the sorting algo is called as **normal quick sort or just quick sort**. 

* Time complexity of **Randomized quick sort** for **best and average case** -> **O(n * log n)**
* Time complexity of **Randomized quick sort** for **worst case** -> **O(n^2)**.

> The **performance** is improved as well. The **worst case** was **more** previous but with the **randomized quick sort**, the **worst case** is also **less** than before.

![image](https://user-images.githubusercontent.com/54589605/236672286-e8b95c32-e20e-4779-825a-552247abb2b8.png)
![image](https://user-images.githubusercontent.com/54589605/236672464-76ae92ff-9ee5-4a61-8085-37cd399d9c02.png)

> If we want to take the **last** element as the pivot element now. Then we don't need the **randomgenerator()**, remove that. **Q** stores the **last** element. We have to swap(a[p], a[q]). We have to swap, a[q] with the **first element**. Now, at the **first** place, **last element** is there. Now, apply **partition**. That's it, no need to change the algorithm.

* If we want **random** pivot elements then also the **quick sort algo** will work out.

> By doing **randomized quick sort** algo, we cannot completely neglect the **worst case** of quick sort, but we can **improve** the **performance** of **worst** case by lowering the **amount or percentage** of **worst** case. If in normal quick sort algo, the **amount or percentage** of **worst** case was **10%** then in **randomized quick sort** algo, **worst** case is **reduced/lowered** down to **5%**.

* In **randomized quick sort** algo, **worst case** performance **probability** is **less or lesser**.

![image](https://user-images.githubusercontent.com/54589605/236672916-ddbe2e97-6c9b-44d6-8e01-66705529a3aa.png)
![image](https://user-images.githubusercontent.com/54589605/236673046-145299b0-2a34-4674-ad36-b817429e3bb8.png)

* It is **right** side gapped. 

> All are **10** so they are **less than or equal** to pivot, so they will all be in the **left** side and **right** side is empty or **right** side gapped.

* In normal quick sort, **first element** is pivot element.

![image](https://user-images.githubusercontent.com/54589605/236673084-9fee8bc7-48eb-4e49-b8b6-82a7154650b7.png)
![image](https://user-images.githubusercontent.com/54589605/236673131-d6baeeba-2060-45d3-9c62-71cbbd1d44bd.png)

* Normal quick sort.

![image](https://user-images.githubusercontent.com/54589605/236673181-9b559d91-b184-4454-aff5-140719c596eb.png)

* Even if we **randomly** choose the **pivot** element using a **random_generator**, then also all of the elements are going to **left side** only and the **right** side is **empty**.
* **Time complexity** is **same** as **normal quick sort** which is **O(n^2)**.

![image](https://user-images.githubusercontent.com/54589605/236673328-53f60a66-bfac-4063-898d-eefefc39db0a.png)

* In **normal** quick sort algo, if the array is **ascending order** then all the elements go to the **right** side and the **left** side is **gapped**.
* **Time complexity** is **O(n^2)**.

> **Randomized quick sort** algo can take any element as pivot. If it takes **40** then it is the **best case** partition. **Randomized quick sort** can take any possibility.

> Sometimes **randomized quick sort** will take the **first** element as pivot.

> Sometimes **randomized quick sort** will take the **middle** element as pivot.

> So it is sometimes **first** and sometimes **middle**. It is **50-50**. It is sometimes, **half or 50% best partition** and sometimes, **half or 50% worst partition**. If it is **everytime** worst, then it is **worst**. 

> It is **half or 50% best partition** and it is **half or 50% worst partition**. So **half best** and **half worst** will **lead** to, **best case** only which is **O(n * log n)**.

> Sometimes **randomized quick sort** will take the **middle** element as pivot and we will get **best case** only which is **O(n * log n)**.

> Sometimes **randomized quick sort** will take the **first** element as pivot and we will get **worst case** only which is **O(n ^ 2)**.

![image](https://user-images.githubusercontent.com/54589605/236673707-af805a17-9072-4946-b73b-88c9117811c8.png)

> Previously ascending order **best case** for **normal quick sort** algo has now been **worst** case for **randomized quick sort**.

> Performance improved but **worst case** we cannot completely ignore. Previously whatever was the **percentage** of **worst case**, it is not **reduced** and **few** maybe there and **few** are eliminated.

> Performance improved but we cannot give **100%** efficiency.

* Randomized quick sort worst case time complexity -> **O(n^2)**.
* If we have given **sorted** array to  **randomized quick sort**, then time complexity maybe it is **O(n * log n)** or maybe it is **O(n^2)**. Previously it was **O(n^2)** but now it maybe **O(n * log n)** or maybe **O(n^2)**, because it will **pick** elements at **random**, it will pick whatever it wants. We don't know what exactly it will pick.

* It is a **random_generator** but performance improved. Previously **worst case** guranteed for the **sorted arrays** but now, it is **not guranteed**, it is maybe **O(n * log n)** or maybe **O(n^2)** because it will **pick** elements at **random**. **Best** performance can also come.

* Previously it was **100%** to be **O(n^2)** but now it is **50%** to be **O(n * log n)** which is the **best case** and **50%** to be **O(n^2)** which is the **worst case**. So performance **improved**.

* Previously probability of getting **worst case** was more, now it is **less**.

* We have an **ascending order** array, normal quick sort time complexity, by default **first** element is the **pivot**, then it is **O(n^2)**, which is the **worst case**.
*  We have an **ascending order** array, normal quick sort time complexity if the **middle** element is the **pivot**, then it is **O(n * log n)**.

> As it is alrady sorted and we took the **middle element** as pivot, it will **divide the array** into **50-50**.

* **Randomized quick sort** increases performance. **YES**.
* **Randomized quick sort** cannot give gurantee that **worst case** for **randomized quick sort** which is **O(n^2)** is never possible. **NO**.
* Improvement is done, still **best and average case** is **O(n * log n)** and **worst case** is **O(n^2)**.

![image](https://user-images.githubusercontent.com/54589605/236680914-008444ed-a1a7-426d-af47-7ac379c0035e.png)

* Yes. For un-sorted array, we don't know what's in the **middle** also.
* If the array is un-sorted then any use of taking the **middle** element?

> **NO**. Take anyone, any how it is **un-sorted** array.

![image](https://user-images.githubusercontent.com/54589605/236681031-58c0ea11-ade6-49c8-b36e-712fc1b5f817.png)

> For **sorted** arrays, we don't need any special preperation because if it is **already sorted**, then why are we **sorting** it again.

* Randomization in **randomized quick sort** will improve performance but there is **no gurantee** that it will go to **O(n * log n)** everytime.
* Just say performance improved.

* In **normal binary search**, we always go to the **middle** and check if the **middle** is the element we are looking for.
* In **randomized binary search**, why are we always going to the **middle** everytime. why don't we sometimes go to **n/2**, sometimes **n/3**, sometimes **n/10**. Why don't we go **randomly**. Concept is **same**, go **randomly**.

> If we do **randomized binary search**, performance will **improve**, comparing with always **dividing by 2** and getting **half-half**, performance will **improve** a little.

## Problems (Quick sort)

![image](https://user-images.githubusercontent.com/54589605/236682075-15e7ce17-c8d4-43bc-a39e-aff01983edcc.png)

* In quick sort, the sorting of n-elements the **n/5th smallest element** selected as pivot using **O(n)** time complexity algo. Then what will be the **worst case time complexity of quick sort**?

1) Theta(n * log n)
2) Theta(n^2)
3) Theta(n)
4) Theta(n^3)

> In normal quick sort, by default we select the **first** element as the pivot element. Pivot selection is **O(1) or constant** time. In the question, **n/5th** element is selected as the pivot element using **O(n)** time complexity algo.

> For **n** elements we have to select **n-1** pivot elements, so we know **worst case time complexity of quick sort** is **O(n^2)** and we are selection pivot element **n** times.

* **Worst case time complexity of quick sort** for the **above** problem -> **n * (n^2) -> n^3** -> **O(n^3)**.
* Option(d) or Option(4) which is **Theta(n^3)** is the **correct** answer. 

* [**WORST answer**]. Check below for **correct** answer. It is **O(n * log n)**.

> When quick sort is going on, we are applying **partition** algo **many times**. It means **pivot** selection is also **many times**. Everytime, **pivot** selection is **O(n)** time. So it is **many times 'n'**.

> **Pivot** selection is not **one** time work. How many times, we are calling **quick sort**, because of **recursion** those many times **partition**. How many times, we are calling **partition**, those many times **pivot selection**. So, those many times it is **O(n)**.

* Partition algo is not **one time** inside quick sort, it runs many times. It is the **recursion**.

![image](https://user-images.githubusercontent.com/54589605/236683042-4a6263a9-997a-4282-bec1-cbcca090693b.png)

* Normal quick sort. The pivot element can go anywhere, it can go to the **middle** or to the **end**. We don't know. It can be anywhere.

* PS -> Pivot selection
* PA -> Partition Algo
* 

> If we take the **7th** smallest element as the pivot and after partition then it will go to the **7th** place.

> If we take the **4th** smallest element as the pivot and after partition then it will go to the **4th** place.

> If we take the **1st** smallest element as the pivot and after partition then it will go to the **1st** place.

> If we take the **1st** smallest element as the pivot and after partition then it will go to the **1st** place.

> If we take the **n/5th** smallest element as the pivot and after partition then it will go to the **n/5th** place.

![image](https://user-images.githubusercontent.com/54589605/236683466-1f6c491e-50b1-4b33-a8d4-8f0c108146e6.png)
![image](https://user-images.githubusercontent.com/54589605/236683523-f5b35a28-aa5a-4213-b125-703673e26a82.png)

* Constant term for **recursive** terms is **important**. Don't neglect.
* Constant term for **non-recursive** terms is ** not important**. We can neglect.

 
* If we take **first** element as the pivot, after partition algo, it will go to **anywhere**.
* If we take **first** smallest element as the pivot, after partition algo, it will go to **first place**.
* If we take **n/5th** smallest element as the pivot, after partition algo, it will go to **n/5th place**. So, the **left** side elements is **n/5-1**, **right** side elements is **n - n/5 -> (4 * n)/5**.

![image](https://user-images.githubusercontent.com/54589605/236687387-2a4310bd-c39d-4d18-b911-4814891cf6a8.png)

> This is the **only** division possible. So, **worst, best and average** case, it is the **same** time which is **O(n * log n)**.

* If **different** divisions are possible, then **different** time complexities will come.

> **O(n * log n)** will be the **same** answer for **worst, best and average** case.

![image](https://user-images.githubusercontent.com/54589605/236687511-e6027b47-2575-4dde-840d-9535abd1a30c.png)
![image](https://user-images.githubusercontent.com/54589605/236687516-d642e10f-7a57-4f9f-a227-29d42ca219f5.png)

* Only **one** division possible, so **one** answer is possible which is **O(n * log n)**.

![image](https://user-images.githubusercontent.com/54589605/236687558-8d6fb9ea-8f6b-4fbb-a21b-4cdcf65da779.png)

* In normal quick sort, **many divisions** are possible, so **many answers**.

![image](https://user-images.githubusercontent.com/54589605/236687819-8a9c3a04-c0dc-4727-b1d0-c5fd5e6cebb4.png)

* In quick sort, the sorting of 'n' numbers, the **n/10th** element is selected as pivot, with time complexity of **O(n^2) time algo. Find what is the **worst case ** time complexity of quick sort?

1) Theta(n^2)
2) Theta(n * log n)
3) Theta(n^3)
4) Theta(n)

* If we take **n/10th** element as the pivot, after partition algo, it will go **anywhere**. No clarity.
* **Anywhere** means **multiple possibilies**. The question wants **worst case** so it went to the **extreme**.
* The question wanted **worst case**, so that **worst possibility**.

> Normally, to select **n/10th** element, it is **constant**.

![image](https://user-images.githubusercontent.com/54589605/236688246-34cba6b9-c78f-4e6b-9e2d-36f240c68102.png)

* Worst case.

![image](https://user-images.githubusercontent.com/54589605/236688262-1ead9b5b-b803-44a9-b0b2-945d90cd4171.png)

* Not true. For the above question. Asymptotically it is **correct** but sir is better .

* Smallest element is **different**.
* **N/10th** smallest element can go to **N/10th** place.
* **N/10th** element can go to **anywhere** place.

![image](https://user-images.githubusercontent.com/54589605/236688520-d95085f3-8cd3-42bb-86b8-1a7f5392a413.png)

* In quick sort, the sorting of 'n' numbers the **n/5th** **largest element** is selected as pivot using **O(log n)** time complexity algo. Find best case time complexity of quick sort?

1) Theta(n * log n)
2) Theta(n^2)
3) Theta(n^3)
4) Theta(n)


* Largest element is **different**.
* **N/10th** smallest element can go to **N/10th** place.

> If we have **n** elements, and we take **nth** smallest element as the pivot then it will go the **nth** place. So, **nth** smallest is nothing but **1st largest**. It is from **right** hand side.

![image](https://user-images.githubusercontent.com/54589605/236689180-8b875383-49a2-4393-89b2-6ed082c9883c.png)
![image](https://user-images.githubusercontent.com/54589605/236689303-9912fa5c-d91b-4c94-8d2d-20e9d3992cac.png)

* If we take the **first** largest as the pivot, then it will go to **first place** from last.
* If we take the **second** largest as the pivot, then it will go to **second place** from last.
* If we take the **10th** largest as the pivot, then it will go to **10th place** from last.

* **N/5th** largest element, after partition, it will go to **N/5th** place from the **last**.
* **N/5th** element can go to **anywhere** place.

* For the **above** question, **only one** division is possible. So, it is **one** answer only.

![image](https://user-images.githubusercontent.com/54589605/236689555-31963a54-919b-4605-b3e6-bbf30dd27e89.png)

* Option(A) or Option(1) is **corret** which is **O(n  * log n)**.

[**IMPORTANT**]

* **n/2th** element is taken as pivot element, the **worst case** is **O(n^2)**. It can go **anywhere**.
* **n/2th** smallest element is taken as pivot element, the **best case** is **O(n * log n)**. It can go to **n/2th** place.
* **n/2th** largest element is taken as pivot element, the **best case** is **O(n * log n)**. It can go to **n/2th** place from last.

* **Element, smallest and largest** matters and not **n/2th**.

![image](https://user-images.githubusercontent.com/54589605/236690229-c6a9cdb1-9294-4dae-87e1-37b7c01d1f56.png)

* In quick sort, the sorting of 'n' numbers, **300th** largest element is selected as pivot element with **O(n^2)** time complexity. Find best case time complexity of quick sort?

* It is **every case**, because there is only **one** possibility. So there is only **one** answer.

![image](https://user-images.githubusercontent.com/54589605/236690768-68a2b340-3349-41a7-a61e-9811289e0964.png)

* If there are **many** possibilities then there are **many** answers.

## Summary

* N/2 element
* N/2 smallest element

> They are **different**.

* N/2 element is known as **middle** element.
* N/2 smallest element is also known as **median** element. 
* **Median** means in a **sorted array**, the **middle** element.

* If we take the **middle** element as the **pivot** then the **worst case** time complexity is **O(n^2)**.
* If we take the **median** element as the **pivot** then the **worst case** time complexity is **O(n * log n)**.

![image](https://user-images.githubusercontent.com/54589605/236691005-208eb883-0e3d-40ff-bf32-abd1e20604c2.png)

* If any question of **quick sort** comes then, directly or in-directly, it is **partition** algo. **YES**.
* If any question of **merge sort** comes then, directly or in-directly, it is **merge** algo. **YES**.

![image](https://user-images.githubusercontent.com/54589605/236691303-06584c54-3089-43a2-8a89-1ca0b42d7d18.png)
![image](https://user-images.githubusercontent.com/54589605/236691316-3271441d-230e-42d8-981d-eb3f0a2647f2.png)

* Worst partition, so **worst case**. Only on one side, all the elements are going.
* Normally, worst case is **O(n^2)** but it is **O(n^3)** in the above example question, because to find out **300th** largest element it took **O(n^2)**. That's why it is **increased**.

* To the above problem, **every case** is **same**.

## 6. Selection Procedure

* It is not **selection sort**, it is **selection procedure**.

* Input -> An array of 'n' elements and an integer 'k'.

> Total inputs to the **selection procedure** is **n + 1** elements.

* Output -> Find **Kth** smallest element in array.

> If the given array is **sorted** in **ascending**, then the problem is **very easy**. At **Kth** place we have **Kth** smallest element, return a[k].

![image](https://user-images.githubusercontent.com/54589605/236692429-9f18aad0-3a06-4372-87ea-b1492459ef2e.png)
![image](https://user-images.githubusercontent.com/54589605/236692436-983ecadb-d7b3-4319-be77-daf9b26fe37e.png)

> To solve the above problem, one way is to use **merge sort** to sort the array first and then find the **Kth** smallest element in the arraay. Return it. The time complexity will be **O(n * log n + O(1)) -> O(n * log n)**. Returning **Kth** element is **constant**.

* The **best algo** for the above problem.

![image](https://user-images.githubusercontent.com/54589605/236709564-e50da8c5-1e93-4a24-8bac-3d18b367ca2c.png)
![image](https://user-images.githubusercontent.com/54589605/236709655-c24b9476-baa2-4be3-a4a7-bc958dfd1bb4.png)

* First **min** is **30**.

> We want to find **Kth** smallest element and **k=6**.

> We are applying **partition** algo on the above given array. For **n** elements, time complexity of **partition** algo is **O(n)**. The pivot element is the first element which is **80**. 

> The behaviour of **partition** algo is that **less than** pivot elements will go to **left** side and **more than** pivot elements will go to the **right** side. Any order we write, no issues.

![image](https://user-images.githubusercontent.com/54589605/236709928-71936fcc-af98-4b40-9265-d2a099b8860a.png)

> We applied **partition** algo and we got approximate output. The pivot element will go to the **correct** place and it will return the **position/index** of iteself.

![image](https://user-images.githubusercontent.com/54589605/236710068-2f287d66-8820-4c48-be0e-733d73f03ade.png)

> After **partition** algo is over, if the pivot element is returning something **6**, then we know what is the **6th smallest element** in the array.

> After **partition** algo is over, pivot element will go to it's **correct** place. After sorting also, pivot element's position is the **same**, which is **6th** position. It means that the pivot element is the **6th** smallest element in the array.

> After sorting, **6th** smallest element is there at the **6th** place.

* After **partition** algo is over, it returned **6**. what does it mean?

> It means that at the **6th** place, there is the **6th** smallest element in the array.

> After **partition** algo is over, we are expecting the **Kth** smallest element, but we got the **mth** smallest element which is **6**. **m=6** means **6th** smallest element. **k=6** means **6th** smallest element. 

> Let's **verify** if the **Kth and mth** elements are **same** or not. We are checking if **K == m** or not. If **m and K** both are **same** or not. After checking they both are **same** as **m** is returning the **6th** smallest element and **K** also want the **6th** smallest element. So, **a[m] = 80**, which is the **6th** smallest element and which is the **answer**.

* Simply apply **partition** algo, verify if **m == k** or not. If it is **True** then **stop**. We should return **a[m] or a[k]**, as **m == k**. Until now, **n** times is over. 

* Finding **Kth** element if we follow the **above procedure** then it will take **time complexity** of **O(n)**. It is the **best case**.
* Time complexity -> **O(n)**
* If **not matching** then we have to go **either left or right**.

![image](https://user-images.githubusercontent.com/54589605/236711393-51314d47-92c1-4a93-8fc4-f60f60e413ea.png)

* Now, we want **5th** smallest element. 

> After applying partition we got **m=6** but we want **k=5**. The pivot element is the **6th** element but we want **5th**, which is **smaller** than **6th**, that why we go to the **left**. Apply **recursion** on the **left** side.

* Now, we want **8th** smallest element. 

> After applying partition we got **m=6** but we want **k=8**. The pivot element is the **6th** element but we want **8th**, which is **greater** than **6th** so we go to the **right**. Apply **recursion** on the **left** side.

![image](https://user-images.githubusercontent.com/54589605/236711815-ade8a5b8-1066-4d02-9f5f-13dedd64abef.png)

* Example

> We applied **selection procedure** on the total array, which is **sp(1,11)**. After applying partition we got **m=6** but we want **k=8**. The pivot element is the **6th** element but we want **8th**, which is **greater** than **6th** so we go to the **right**. 

> On the right hand side, apply **selection procedure**, which is **sp(7,11)**. After applying partition we got **m=8** but we want **k=8**. The pivot element is the **8th** element and we want **8th** element, so **m == k**. Now return **a[m] or a[k]**.

* It is **similar** to **binary search**, we will do **one side**. 
* In **binary search** it is **blind division**. 
* In **selection procedure**, the division is **meaningful division**. Partition means **meaningful division**.
* In **binary search**, we didn't go **partition** that why it is **blind division**.
* Calling **selection procedure** means we are calling **partition()** algo.
* In **selection procedure**, there is **partition()** algo.

![image](https://user-images.githubusercontent.com/54589605/236713149-63c472b9-f6e3-41e1-b92b-ae9efc3facec.png)

* Now, we want **7th** smallest element. **m=8**, so we will go **left**.

> On the left hand side, we got only **one** element which is **7**, so we can't apply **partition**. So we stop. We got **m=7** but we want **k=7**. We have the **7th** element, so **m == k**. Now return **a[m] or a[k]**.

![image](https://user-images.githubusercontent.com/54589605/236713441-78848f42-8aad-4d15-b7f2-6fd2179dd593.png)

* Now, we want **11th** smallest element. **m=8**, so we will go **right**.

> On the right hand side, apply **selection procedure**, which is **sp(9,11)**. After applying partition we got **m=10** but we want **k=11**. The pivot element is the **10th** element and we want **11th** element, so **m != k**. As **m < k**, we go to **right**.

![image](https://user-images.githubusercontent.com/54589605/236713880-4e841c2d-4939-4a38-9ab0-3f100d125257.png)

> On the right hand side, we got only **one** element which is **11**, so we can't apply **partition**. So we stop. We got **m=11** but we want **k=11**. We have the **11th** element, so **m == k**. Now return **a[m] or a[k]**.

![image](https://user-images.githubusercontent.com/54589605/236714080-06a9bac5-754c-4a60-ae2a-f0de0089cacb.png)

* Quick sort and selection procedure are same or not?

1) We will go **both sides** on **quick sort** but in **selection procedure** we only go to **one side**.
2) In both **quick sort** and **selection procedure**, we use **partition** algo.

![image](https://user-images.githubusercontent.com/54589605/236714310-25492691-c8ec-412c-b0e5-056a46ed1696.png)
![image](https://user-images.githubusercontent.com/54589605/236714367-78f4fa8b-1731-4e31-b93b-b978d68a319f.png)

* If **m == k**, then stop it. It is **best case**, because we can **stop** in the **middle or in-between** as there is a **return** statement in the **else** part. Partition is over, so it is **n** times.

* **m** is the **position/index** of the pivot element we returned.
* **k** is the **position/index** of the element we are **finding/want**.

* If **k < m** then we have to go to the **left**.
* If **k > m** then we have to go to the **right**.

![image](https://user-images.githubusercontent.com/54589605/236714787-fbac3969-bfd0-4a26-91ea-da3d368e5581.png)

* If we are **lucky** then we can stop at the **nth** position.
* If we are **un-lucky** then we have to go either to the **left or right** of **nth** position.
* We will go **one** side, either **left** or **right**. Not both.

* Selection procedure on **n** people is **T(n)** time.
* Selection procedure on **m-1** people is **T(m-p)** time.  
* Selection procedure on **q** people is **T(q-m)** time.

> For **partition** it is **n**. After **partition** is over, if we are procceding further than **n** then it is **worst case**.

> For **partition** it is **n**. After **partition** is over, we will **stop**. That is **best case**.

* Recurrence Relation for **selection sort worst case**:

* We will go **one side**. Either we will go to **T(m-p)** which is the **left** side or we go to the **right** side which is **T(q-m)**. We are going going to **both**. So, **OR** is there.

* After partition is over, which is **n**, either go **left or right**, don't go **both** and don't write **both** in the recurrence relation.

![image](https://user-images.githubusercontent.com/54589605/236715631-7928a452-d1ac-466c-8d9a-3284c2276694.png)
![image](https://user-images.githubusercontent.com/54589605/236715782-6621a66e-24aa-42e3-ae8e-1d38448a9d6d.png)

* Selection sort worst case -> **O(n^2)**.
* Selection sort best case -> **O(n)**.

* We are going **one side**.
* If we are **lucky** then it is **best partition** which is **n/2**.
* If we are **un-lucky** then it is the **worst partition** and all the elements(n-1) came to that **one side** only.

![image](https://user-images.githubusercontent.com/54589605/236715992-82605758-d4f7-409b-b203-fe989806969f.png)

* When will the **selection procedure** give **best case**?

> 1)**Best partition** happened.

> 2) If we are **lucky** then we don't have to go **left or right** side, we can stop after **partition** algo over. That is also **best case** for **selection procedure**.

![image](https://user-images.githubusercontent.com/54589605/236716307-103bc6ec-904e-453a-bc84-294f5ffcc2e4.png)

* **Best case** is possible, **two** times. Forget about which partition. If we are **lucky** then **middle** element. Partition algo is **one time**, check **m == k**.

* **Best case** is possible, **two** times.

1) After partition is over, check **m == k** and then **stop**.
2) If **m == k** failed but **best partition** happened then also, **O(n)** time complexity will come.

![image](https://user-images.githubusercontent.com/54589605/236716756-3daff996-e587-47ab-9352-0656aa6ccd4b.png)

* This is **possible** for **every case(EC)**. 

* Selection procedure **best case** time complexity -> **O(n)**.
* Selection procedure **average case** time complexity -> **O(n)**.
* Selection procedure **worst case** time complexity -> **O(n^2)**.

* Selection procedure **worst case** time complexity will come when the **partition** is **worst case** or **worst**.
* Selection procedure **best case** time complexity will come when:

1) After partition over, check **m == k** and we **stop**.
2) If **m == k** failed, then we got **best partition** then also **O(n)** possible.

![image](https://user-images.githubusercontent.com/54589605/236717273-81a12857-939e-42bb-b9f9-24a632e30f26.png)

* Same story happened for **quick sort** also.
* Quick sort **best case**, we go to **both sides** then time complexity -> **O(n * log n)**.
* Worst case is **same** for both **quick sort and selection procedure**.

* Most of the **time**, **best partition** will happen, so the **best case** of **selection procedure** is also it's **average case**.

![image](https://user-images.githubusercontent.com/54589605/236717580-b2facf7e-100c-4fe4-a562-23a2cfe49c14.png)

* Half **best partition** and half **worst partition** will lead to **average case** which is **best case** only.
* Exactly like **quick sort**.

* Selection procedure is **like**, **quick sort**.

1) We apply **partition** in both the algos.
2) In case of **quick sort**, we go to **both** the sides. In case of **selection procedure**, we go **only one** side.
3) In both, for **best partition**, **best case** will come. For **worst partition**, **worst case** will come.

* Purpose of **selection procedure** -> Finding the **Kth** smallest element in the given array.

![image](https://user-images.githubusercontent.com/54589605/236718208-90fa945b-322b-4c5b-a0c5-68577fe5b7c5.png)

## 8. Counting no. of inversions or Finding no. of inversions

* Input -> Array of n-distinct elements
* Output -> Count inversions

* Between position **3 and 4** who is **greater?

> Positions are normally **increasing** order. So **3 < 4**, but when we **compare** the values with **a[3] and a[4]**, we see that **a[3] > a[4] -> 50 > 40**.

![image](https://user-images.githubusercontent.com/54589605/236725744-6c3047ba-4319-4cd5-801e-e4cd347c165b.png)

* If we take **two** indexes(i and j), and **i < j** and then **a[i] > a[j]**. This is called as **inversion**. [**IMPORTANT**]
* Positions are **less than** then the **values** should be **greater than**.

> Given an array a[]. The task is to find the inversion count of a[]. Where two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.


> In the **given** array, how many people have **inversion** behaviour, we have to **calculate**. We have to **count** the **no. of inversions** in the given array.

> We take two **indexes** which are **1 and 6**. So, **1 < 6**, but when we **compare** the values with **a[1] and a[6]**, we see that **a[1] > a[6] -> 10 > 60**. **a[1]** is **not greater than a[6]**. So this is **not an inversion**. As, **1 < 6**, so to be an counted as an  **inversion** it would have been **a[1] > a[6]** but that didn't happen. So **not an inversion**.

![image](https://user-images.githubusercontent.com/54589605/236727171-1f6ed69a-c191-41fe-a8be-3c5207e4d750.png)

> We take two **indexes** which are **2 and 5**. So, **2 < 5**, but when we **compare** the values with **a[2] and a[5]**, we see that **a[2] > a[5] -> 200 > 100**. Positions are **less than** then the **values** should be **greater than**. So it is an **inversion**.

![image](https://user-images.githubusercontent.com/54589605/236727382-42afef3d-4a03-4648-a172-cabff29c5c58.png)


### Inversion examples

![image](https://user-images.githubusercontent.com/54589605/236727582-30d09a6d-a190-4a9b-bc7f-26d4c9b06e86.png)

* If we take **50** which has position of **1**. We have to find **inversions** from the given array.

1) Position -> **1 < 2**. Values -> **50 > 10**.
2) Position -> **1 < 5**. Values -> **50 > 11**.
3) Position -> **1 < 6**. Values -> **50 > 21**.
4) Position -> **1 < 7**. Values -> **50 > 31**.
5) Position -> **1 < 10**. Values -> **50 > 3**.

> We also could get by **without counting positions**, as the **positions** are in **increasing** order only.

* No. of inversions -> **5**.

![image](https://user-images.githubusercontent.com/54589605/236728131-18c4c91a-fc8c-43bb-bb74-1a2784027a55.png)

* If we take **10** which has position of **2**. We have to find **inversions** from the given array.

* Position -> **2 < 1**. Values -> **10 > 50**. 

> For **50**, **10** was an **inversion**. Now in **10**, don't count **50** as the **inversion**, we have already **counted** that in **50** only. Don't count **twice**. It will **increase** the number.

* Don't go **back**. Go **forward**. Previous things are **already** counted.

1) Position -> **2 < 10**. Values -> **10 > 3**.

* No. of inversions -> **1**.

* If we take **60** which has position of **3**. We have to find **inversions** from the given array.

1) Position -> **3 < 5**. Values -> **60 > 11**.
2) Position -> **3 < 6**. Values -> **60 > 21**.
3) Position -> **3 < 7**. Values -> **60 > 31**.
4) Position -> **3 < 10**. Values -> **60 > 3**.

* No. of inversions -> **4**.

* If we take **70** which has position of **4**. We have to find **inversions** from the given array.

1) Position -> **4 < 5**. Values -> **70 > 11**.
2) Position -> **4 < 6**. Values -> **70 > 21**.
3) Position -> **4 < 7**. Values -> **70 > 31**.
4) Position -> **4 < 10**. Values -> **70 > 3**.

* No. of inversions -> **4**.

![image](https://user-images.githubusercontent.com/54589605/236730331-89f1f29f-cb88-4c0a-8867-a8e7061f25c1.png)

* Total **no. of inversions** -> 19.
* Same thing, don't count **twice**. Don't **count** before. **Count** after.

![image](https://user-images.githubusercontent.com/54589605/236730617-bef7e653-efd5-451b-9057-85209d1147cc.png)
![image](https://user-images.githubusercontent.com/54589605/236730792-ec35f466-334c-4448-b80b-1c654709149f.png)

* Watch **recording**.

![image](https://user-images.githubusercontent.com/54589605/236730943-40a73941-ddbe-4da9-93e2-646acb3d253d.png)
![image](https://user-images.githubusercontent.com/54589605/236731308-6648f172-7e22-463c-a08a-165b7160935a.png)

## Dynamic Programming-III (34) [8th May 2023]

## Remaining Syllabus

* Video 40 -> https://unacademy.com/class/dynamic-programming-iii/CE4EZGLY
* Time  -> **1hr 4mins**

## Counting no. of inversions (Continued)

![image](https://user-images.githubusercontent.com/54589605/236741367-7f7aa5d5-7c0e-44f4-b772-2982cf4d4298.png)

* Index/Positions -> 5 < 8
* Values -> a[5] > a[8]

* If we take **two** indexes(i and j), and **i < j** and then **a[i] > a[j]**. This is called as **inversion**. [**IMPORTANT**]
* Positions/indexes are **less than** then the **values** should be **greater than**.

> Given an array a[]. The task is to find the inversion count of a[]. Where two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

![image](https://user-images.githubusercontent.com/54589605/236741731-85d161d5-600c-4e66-ac1f-c45718d03ef3.png)
![image](https://user-images.githubusercontent.com/54589605/236741783-5acbc128-fbd5-47c0-9a84-26efeaa51da5.png)

* No **reverse** nothing.

> For the element **80**, **no. of invertions** is **8**.

> For the element **15**, **no. of invertions** is **4**.

> For the element **10**, invertions are **1, 3**, so the **no. of invertions** is **2**.

> For the element **1**, **no invertions** are possible, so the **no. of invertions** is **zero(0)**.

![image](https://user-images.githubusercontent.com/54589605/236742350-2b517dce-99f8-46d0-92d6-616b6c62c71f.png)
![image](https://user-images.githubusercontent.com/54589605/236742707-4161fb8e-4aba-4dde-953b-d0fd9ac15887.png)

* For every element to find the **no invertions**, it is taking only **one scan**, so it is **n** times only. For **n** elements, it is **n * n -> n ^ 2** times.

* Time complexity of **counting no. of inversions** -> **O(n^2)**. Using **Linear Search**, also called as **brute force** method.

![image](https://user-images.githubusercontent.com/54589605/236743265-79078297-a631-412b-b336-ed6aba59a5b9.png)
![image](https://user-images.githubusercontent.com/54589605/236743467-4b07aa6a-6ee4-4c09-b27c-45221596de41.png)
![image](https://user-images.githubusercontent.com/54589605/236743669-8e4b8321-b9fa-4960-8d1f-16cc904f04ac.png)

* True.

* The above problem is going to be a **small** problem when there is **only one** element left in the array.
* When **one** element, **no. of invertions** is **zero(0)**.

![image](https://user-images.githubusercontent.com/54589605/236744758-c68b6961-2348-4f8f-a84b-45f2407d62f5.png)
![image](https://user-images.githubusercontent.com/54589605/236744775-445a03c1-7116-4785-993b-3528f4019c2e.png)

* We are doing **blind division** . If we do **meaningful** division then all of the **smaller** elements will go to  the **left** side and the **larger** elements will go to the **right** side. Now, the element's order are **changing**  and we cannot calculate the **no. of invertions**. Then we will not get the expected **result**.

> We have to find **no. of invertions** for **given array** and not **modified** array.

> If we **change** the order, then the answer is also **changes**, which is **wrong**. So, don't **change the array**. 

* **Meaningful** division -> **Smaller** elements will go to  the **left** side and the **larger** elements will go to the **right** side.
* If really needed then only do **meaningful division**.

![image](https://user-images.githubusercontent.com/54589605/236745909-5c6e8900-fbb4-4b3b-9d7c-52158b36568c.png)

* We need to do **blind division**. Now, as **division** time is done **blindly**, we have to do **combine** time in **meaningful way**.
* Somewhere we have to take care.

![image](https://user-images.githubusercontent.com/54589605/236747857-60c8b6e5-f83b-4f81-95d7-3975ef8c3e7b.png)

* Array element's ordered **not changed**. We are always **dividing by 2**. So the **stack size or no. of tree levels** is **log n**. The **divide time** is **constant or O(1)**, as we are doing **blind division**.

* The no. of times we have **divided** those many times **combine** as well.
* Combine will take **more** time compared to **divide** time.

![image](https://user-images.githubusercontent.com/54589605/236749790-19d9abc1-c9a7-4888-9f24-e371f89a8bdb.png)
![image](https://user-images.githubusercontent.com/54589605/236750232-a60ac4ba-a482-4d57-9a0e-0b410827b077.png)

* Merge algo

> Whoever is **smaller**, store that person in **b** array. After sometime, **one** array is **over** then **copy** remaining elements to **b** array.

![image](https://user-images.githubusercontent.com/54589605/236750910-aed7d842-6085-4493-8eeb-86b93e4d309b.png)

* Time complexity of merge sort -> **O(n)**, for **every case(EC)**, because of **moves**.

* **Counting the no. of invertions**.

* In **combine** time we are keeping the array in **sorted** order.

![image](https://user-images.githubusercontent.com/54589605/236782556-d0e5f408-ffc2-488d-a0a9-e9a0fc1ec681.png)
![image](https://user-images.githubusercontent.com/54589605/236783051-b5198058-b20f-4c7c-aea1-ff25c7095be1.png)

> It is (a[1], 1, 1). The **first** element is **80**. As of now, the **no. of inversions** is **zero(0)**. The element we have is **80** but the **no. of inversions** is still **zero(0)**. (1, 1) means **first** index and the **no. of elements** is **1**. The element we have is only **80**.

> Every element should be **compared**.

> (2,2) means **2nd** index and there is **one** element. The elemenet is **15** but the **no. of inversions** is **zero(0)**.

> As of now, **no. of inversions** in the **left** is **zero(0)** and on the **right** is **zero(0)** as well. Left no. of inversions is **zero(0)** and right no. of inversions is **zero(0)**, so at the **parent**, the **no. of inversions** is **equal** to the **no. of inversions** the **left** is having **plus** the **no. of inversions** the **right** is having **plus** the **no. of inversions** the **parent** is having.

* **No. of inversions** of **parents** -> **No. of inversions** of **parents** + **No. of inversions** of **left** + **No. of inversions** of **right**.

> Calculating the **No. of inversions** of **parents**, the **left** side element is **80**, the **right** side element is **50**. Compare **both** of them, who is **smaller**? **15** is **smaller**. Whoever is **smaller**, take him **first**. 

> **Small** element came from **left or right** side? Came from **right** side. Right side people having **more** index, so **more** index and **value** less. It is called as **inversion**. So, **small** came from the **right** side. If it is **inversion** then **add + 1**. AS **15** was **inversion** so we **added +1** to the **parent**.

> As **15** already moved to **top**, only **80** is left at the **below**. We cannot compare **80** with anything, so we copy **80** as it is to the **top**.

![image](https://user-images.githubusercontent.com/54589605/236787079-f0b882d1-8928-4d2c-b614-636ac1e27202.png)
![image](https://user-images.githubusercontent.com/54589605/236788537-15fb0d2a-752b-464f-8923-c15718b5bbb9.png)

* Exactly. **Right** side means **inversion**.

![image](https://user-images.githubusercontent.com/54589605/236789282-a75e4942-ec22-48e3-8e68-8b58079e5eaa.png)

* Merge algo going on.
* In **combine** time we are **careful**. We are keeping elements properly during **combine** time. We are keeping elements properly in **combine** time. 
* We are keeping elements in **sorted** in **combine** time.

* Elements are **sorted** means **no. of invertions** will **change** or not. **NO**, why **after** calculationg, we are **sorting** that why **no. of invertions** will not **change**.
* First calculate, **no. of invertions** then **sort**.

> There was **no inversion** at the **parent** of **80 and 15**. When we **sort** there is **no inversion**. Before sorting, there is **inversion**.

![image](https://user-images.githubusercontent.com/54589605/236790815-f78ce260-bda0-428e-99b4-f4c65b533206.png)

> If elements are there in the **proper order** then, **counting no. of inversions** in the further levels is **easier**.

* Inside the **above** problem, we are using **merge algo**.

![image](https://user-images.githubusercontent.com/54589605/236791452-ce292144-42e0-450d-85eb-b21701271fe4.png)

> In (3, 3), there is **one** element whose index is **3rd**.  So, the element is **10**. **No. of inversions** till now is **zero(0)**. Left side has **'1' inversion** already, the right side has **'0' inversions**.

> The **no. of inversions** at the **parent** is, **no. of inversions** on the **left** side + **no. of inversions** on the **right** side + **no. of inversions** of parent. Some **inversion** maybe come in the **parent's** level.Now, we can apply **merge algo**, as **left and right** are **sorted**.

> On the **left** side we have **two** elements they are **15 and 80**. On the **right** side we have **one** elements which is **10**. Left and right, both are **sorted**. We can apply **merge algo**. First person from left and right are compared. **15 and 10** are compared. **10** is **smaller**. Whoever is **smaller** we will take, but the **smaller** came from **right** side. Right side means **inversion**. **15 and 10** is  **inversion**. Whenever **inversion** will come, don't write **one**, left side how many people are there? **two**. So, directly write **two** inversions.

* Whenever **inversion** will come, don't write **one**, left side how many people are there? write that many people in **inversion** count. If we get **inversion** with first then we will get **inversion** with the rest people as well because it is **sorted** array. That's the reason why we are sorting.
* With **one comparision** we got **two** inversions.

![image](https://user-images.githubusercontent.com/54589605/236797498-fb700945-b8c3-429d-ae94-7b7aad945bec.png)

> Between **10 and 15**, whoever is **smaller** keep it at the **parent**, **10** is **smaller** so it is at the parent. Whoever we store, cancel it from the below level as well. Elemenet came from **right** side so it is **inversion**. Whenever **inversion** will come, don't write **one**, count the **no. of elements** on the **left** side and **write that many count** as **inversion count**. One side is **over**, **copy** the rest.

> All elements should move to the **top** level. Not only moving, we should **move** in **sorted** order. So that, further counting becomes **easy**.

* We are **sorting** after **counting no. of inversions**.

![image](https://user-images.githubusercontent.com/54589605/236798640-7d5610ff-dc85-45d6-b628-e5b2345fa3bd.png)

> Comparing **1 and 75**, **smaller** came from **left** side, so **no inversions**. On the **left** side, index is **lesser** and the value is also **lesser**. At the Parent level also **no inversions**.

![image](https://user-images.githubusercontent.com/54589605/236799229-187bde2b-ef7d-4f56-a01e-e38542845dec.png)

> Left side has **1 and 75**, right side has **92**. Comparing **1 and 92**, **1** is **smaller**. As **smaller** came from the **left**, so **no inversion**. Whoever is **smaller**, **copy**, cancel it and move it to the **parent**.

> Comparing **75 and 92**, **75** is **smaller**. As **smaller** came from the **left**, so **no inversion**. Whoever is **smaller**, **copy**, cancel it and move it to the **parent**.

![image](https://user-images.githubusercontent.com/54589605/236800046-39dbdad2-536b-4060-ba8d-74bd057df611.png)

> On the **left** side we have **three(3)** inversions and on the **right** we have **zero(0)** inversions. Left side has **3** elements and right side also has **3** elements.

> We have **10,15 and 80** on the **left**. On the **right** we have **1, 75 and 92**. Compare **first** elements which are **10 and 1**. **1** is **smaller**, **smaller** came from **right**. So it is **inversion**. We have **3** elements on the **left**, so the **no. of inversions** is **3** only. 

![image](https://user-images.githubusercontent.com/54589605/236800961-f771b251-ea28-482e-93f5-c9054e92cffb.png)

> Copy **1** to the parent and then cancel it . Between **10 and 75**, **10** is **smaller**, copy **10** to the parent and cancel it. **10** is not **inversion** as it is from **left**. Between **15 and 75**, **15** is **smaller**, copy **15** to the parent and cancel it. **15** is not **inversion** as it is from **left**. Between **80 and 75**, **75** is **smaller**, copy **75** to the parent and cancel it. **75** is **inversion** as it is from **left**. There is only **one** element on the **left** only so add(+1) to the count of **inversions** in the parent. Between **80 and 92**, **80** is **smaller**, copy **80** to the parent and cancel it. **80** is not **inversion** as it is from **left**.

> One group is over, copy the remaining elements. No. of inversions on the **left** is **7** now.

* 1, 10, 15, 75, 80, 92

![image](https://user-images.githubusercontent.com/54589605/236802713-ec26536b-5af7-4300-95d0-6c4a402bc98f.png)
![image](https://user-images.githubusercontent.com/54589605/236802953-6da97695-4e5b-4526-bdcb-00d27cadf176.png)

* Before **merging**, **no. of inversions** we have is **NI**. Between **a[i] and a[j]**, we can see that **i** elements are the **left** side elements, **j** are the **right** side people. Left means index less, right means index more. **i** has **less** index but value is **more**, so **invertions** possible. So, the **if** block is **invertions**. Whenever the **if** block is **true** it is **invertions**. 

* So the **no. of invertions** is **NI = NI + (mid - i + 1)
* **NI** -> **no. of invertions** which are already existing.
* (mid - i + 1) -> No. of elements on the **left** side.

![image](https://user-images.githubusercontent.com/54589605/236808363-9e8e46ba-d4f5-4e53-8a7a-0778e26c080f.png)
![image](https://user-images.githubusercontent.com/54589605/236808387-8f7e9a7d-2398-48e7-b387-65bf6c4fe269.png)

* It is doing **merging** and at the **same** time it will **update/count** the **no. of invertions** also.
* NI finally contains the **total no. of invertions**.
* At the end array is **sorted**.
* If we **don't sort** then the **time complexity** will **increase**. Then, we have to compare **every left** element with **every right** element.
* If **sorted** then with **one comparison**, we are able to find the **no. of inversions** at a time.
* At the starting it is an **un-sorted** array. Because of **un-sorted** array, we have to compare **everyone** with **everyone**.
* **Merge algo** done **many** time.

![image](https://user-images.githubusercontent.com/54589605/236811857-97077b6d-be2f-447b-8841-1cd175ab502e.png)
![image](https://user-images.githubusercontent.com/54589605/236811912-250d7585-a17c-41dc-9e9e-a337f349f7d0.png)
![image](https://user-images.githubusercontent.com/54589605/236812188-967c7c54-f92b-4640-8d6d-2cfd88bd743e.png)
![image](https://user-images.githubusercontent.com/54589605/236812289-a9012ff3-ddd9-489a-bc6a-0613ff04feb6.png)

* Divide time is **constant**.
* Combine time is **O(n)**, which is **merge algo**.

* Time complexity of **no. of inversions** -> **O(1) + O(n) + T(n/2) + T(n/2)** -> **O(n) + 2 * T(n/2)** -> **O(n * log n)**.
* It is **exactly merge sort** only. 

![image](https://user-images.githubusercontent.com/54589605/236812879-a11c2121-5d5f-479b-8db3-3cf691e80faa.png)

* No change at all.
* The purpose is for **counting no. of inversions**.
* Stack space is **log n**.

* **Counting no. of inversions** == **Merge sort** only.
* Everything **same**.

![image](https://user-images.githubusercontent.com/54589605/236813336-f13cd11d-efa5-4f97-9783-bd68cce1c636.png)
![image](https://user-images.githubusercontent.com/54589605/236813556-fad8f471-df19-4ca6-82b1-a9f6bd2e0dd6.png)

## Heap-sort-II (35) 

* Link -> https://unacademy.com/class/heap-sort-ii/KAUOV2FP

## Selection Procedure

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bac1ed2b-a9d4-40bf-abdd-cb1cca24d058)

> If given array is already **sorted** then we will **find Kth smallest element** at **Kth** place. So, no need of **for** loop.

> 1st smallest is **1st place**. 2nd smallest is that **2nd place**.

> As there is **no loops**, so the **time complexity** will be **constant or O(1)** and return **a[k]**, where **a** is the **array**.

> If given array is not **sorted**, then we can first do is **sort** the array and then **find Kth smallest element**  at **Kth** place. 

> As we are applying **sorting algo**, so the **time complexity** will be **O(n * log n)** and return **a[k]**.

* **Sorted** -> **O(1) or constant**
* **Not sorted** -> **O(n * log n)  + O(1) -> O(n * log n)**.

> If given array is not **sorted**, then we can first do is **sort** the array and then **find Kth smallest element**  at **Kth** place. 

> As we are applying **selection sort algo**. In **selection sort**, **1st pass** over gives **1st minima or smallest element**. So, the time will be **n**. So, for the **Kth** element there will be **Kth pass**, so the time will be **K * n**.

> So the **time complexity** when using **selection sort** will be **O(K * n)** and return **a[k]**.

* Selection procedure is an **application** of **divide and conquor** algo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44f1729a-63f4-400c-82f8-e7f3b5dd5540)

* In the array we want to find **8th minimum**.

> The **8th minimum** is **80**.

* We want to find out **8th minimum** in the given array?

> Steps: 

1) Apply **Partition algo**.

> **Partition algo** on **n** elements will take **O(n)** time.

> We by default take the **first element** which is **80** as pivot. We will apply **Partition algo**, then the **smaller than 80** will go to **left** side and **greater than 80** will go to the **right** side. 

> **Partition algo** is over, we will return **m** which is the **index** of the pivot element, which is at it's **correct place**.

> After **Partition algo**, the **pivot** element is **sorted** which means pivot is at it's **correct place**, **left and right** not sorted.

> **Pivot** is at **8th place**. It means that **pivot** which is **80** is the **8th smallest** element in the array. Guranteed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccd370b6-cf80-450d-aa5f-0fcd28d8f052)

* Partition algo is over, it returned **8th**?

> It means that the **pivot** element which we have **choosen**, went to the **8th** place which is the **correct** place, that's why it is the **8th smallest** element in the array.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec825b34-99b6-45bb-9f1d-7e6d05e2740d)

* Partition algo is over, it returned **m**?

> It means that we know in the given array who is the **mth smallest element** in the array, which is **a[m]**.


> * Partition algo is over, we know the **mth smallest element**. What we want is **Kth** smallest element in the array. If **m == K**, then it is **over**, the algo is **over**.

> If we are **lucky** then we will stop in the **m == K** case only. So, the **time complexity** will be **m**. Kust apply **Partition algo** and it will be arrow.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ecc4822-a87e-4141-a208-af461dfac636)

> It is like **binary search**, we are going only **one side**.

* It case of **binary search**, it is **blind division**. In case of **selection procedure** it is **meaningful division**. 

* In **quick sort**, we will go **both side**.
* Partition followed by **both side**, it is **quick sort**.
* Partition followed by **single side**, it is **selection procedure**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4eecdbf8-ef3c-4436-97d7-1ffb9aad3d95)

> In quick sort, we are going **both side**. **More time**.

> In **selection procedure**, we are going only **one side**. **Less time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e8dc277-e7a9-4d50-84c2-429d4732dff5)

> When it is a **meaningful division** anything can happen. Hence we get **two** parts, **best partition** and **worst partition**. It is not **50-50** guranteed.

* **Worst partition** -> When all elements are going to **one side** and on that side only, the element we are **finding** is there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d022cc95-b92e-4f51-8122-9b3c432702ed)

> If only **one elemenent** is there then that **element itself** is the **answer**. If we are finding **Kth** element then, **K <= n**, 'n' is the size of the array.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c935390-9239-432a-a3fd-f14d8b5e1c9d)

> Till now, we have done **one** partition and if **m == k**, then we return **a[k]**. So, it is **O(n)**. This is the **best case** for **selection procedure**.

> As **return** is there in the **middle** of the program, **different cases** will come.

> Normally, there is **only one** return and it is at the very end. So, **every case** is **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67d5d8e4-55fd-4ab4-8fc9-e2a623105ec2)

* If we are **lucky** and stop here, then the **time complexity** is **O(n)** only.

* Selection Procedure **Best case** -> **O(n)**. [Apply **partition**, check **m == k** and then stop]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17a03cfa-fcc0-4ca3-ae02-32ea54985367)

* It is like **binary search** but in  **one direction** only.
* In case of **binary search*, **blind division**. Then, we don't know which side is what. **Binary search** input is **sorted** array.

> As it is already **sorted** that why we can go for **blind division**. Anyhow, **left** is **smaller** and **right** is **bigger**.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb470251-6a19-4ac2-b7f6-0b524bb71aea)

> In **selection procedure** it is **un-sorted** array, so if we do **blind division**, then we won't know which side is what. We have to do **meaningful** division, depending on **requirement**.

> In the **Divide** part we have **partition algo**, which takes **n** times. So the whole **divide** part takes **n** times.

* If we are **lucky** after **n**, we can **stop**.
* If we are **un-lucky** then **n** plus(+) the **else part time complexity**. After that we can **stop**.

> It cannot be **both** as **else** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7820071-f1bb-46ff-ac18-798b386e7ea4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8eafbbec-ee1b-44c9-97e9-0ecd04f7c363)

> **Best partition** is **50-50**, which leads to **best case**.

> **Worst partition** is not **50-50**, which leads to **worst case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee341e96-01fe-43c5-901b-cd6c91542e82)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0caaefc-620c-49a8-b7c7-126e9c9e4355)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/194e2f3a-4e1b-4895-ac2f-6df27ab6de4a)

* Selection procedure **best case** -> O(n)
* Selection procedure **worst case** -> O(n^2)

* Most of the time **best partition** will happen. So, the **average case** for **Selection procedure** is also **best case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44efebf2-5994-4a84-ba1c-861196e32474)

* Just go **one side**.
* **Stack size** of **Selection procedure** is **log n**.
* If array is sorted then only **worst case** comes.
* For both **quick sort and selection procedure**, **worst case** is **n^2**.
* For both **quick sort and selection procedure**, **best case** are different. It is **O(n * log n)** for **quick sort** as we are going to **both the sides**. It is **O(n)** for **selection procedure** as we are going to **one side** only.

* When will **selection procedure** will give **best performance/case**, when the given array is **random**.
* When will **selection procedure** will give **worst performance/case**, when the given array elements are going to **one side** only.


* **Selection procedure** will give **best performance** in **two** cases:-

1) Apply partition, array divided into **50-50**, which means **best partition** happened.
2) Apply partition, then check **m == k**, then return **a[k]**.

> In both the cases we got **O(n)**.

* Best case **stack space** -> **O(1)**. [Not **O(log n)** because after **partition** over we can stop. Two best cases are possible]
* Worst case **stack space** -> **O(n)**.
* Average case **stack space** -> **O(log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05416822-5bad-4e26-b237-1ac1f055ac01)

![image](https://user-images.githubusercontent.com/54589605/236865111-4f0dd4d4-153f-4129-92b6-0982aa62fe9b.png)

## Strassen's matrix multiplication

* No questions have come yet from this.

### Without DAC, matrix addition

> If we want to **add** two matrices then the **two** matrices should have **same** size. Addition means both should be of **same** size.

> There are **two** loops. So, the time complexity is **O(n^2)**.

> Resultant **matrix, 'C'** contains **n ^ 2**, no. of elements only. As **A** contains **n ^ 2** and **B** also contains **n ^ 2*, so matrix, 'C' contains **n ^ 2** elements. Adding two **n X n** matrices gives **n X n** matrix only.

* Matrix addition time complexity?

> **O(n^2)**, because resultant matrix contains **n ^ 2** elements. Every element requires **one addition**. So **O(n ^ 2) * O(1) -> O(n^2)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eb08cf6-ac4f-4b07-aff2-6a9ecafd5506)

> If we want to get **one element**, **one addition** is required.

* Time complexity is taken up by **loops** only. **Two loops**, so **O(n ^ 2)** only.

> When we **add or do addition** with the **A's first person** with the **B's first person**, then we get **C's first person**. 

> So, it is **normal addition**, which will take **constant time**, we have **n ^ 2** people in **C matrix**. So, **n ^ 2** people and each addition takes **constant time**, which means **n ^ 2 * O(1) -> O(n ^ 2)** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06186728-d59c-4fda-a14e-4f0b70037916)

### Matrix multiplication

* Matrix multiplication requires **3 loops**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5121ae7-fea2-4178-ac2b-b1f94635ca6f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2f7fab9-70c9-4b20-bebf-febf3337681b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dc3670c-bd56-430b-9ae1-bece17dfd79d)

> We have **n ^ 2** elements, for **each element** we have to do **n** times, which means for **n ^ 2** elements we have to do **(n ^ 2) * n -> n ^ 3** times.

* Time complexity -> **O(n^3)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45ead164-fad8-479e-9c5f-80e25e27a174)

* 3 inner loops(i, j and k).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e05bb24f-5f3b-48b5-8f36-b156eac4afc7)

* For **each element** we have to do **n** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1019b7a0-d4f7-440a-91fd-dadded4da9df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d218fb10-6b8c-4dc2-a19d-4f462f236a09)

* The **initial values** of **C[i][j]** is **zeros(0)**. The resultant matrix(c), initial contains **zeros(0)**, as it is **needed** otherwise some problems will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a516a74a-0dfd-425f-96ad-2ea07b5c096c)

* Addition -> **O(n ^ 2)**.
* Multiplication -> **O(n ^ 3)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f30cc62-272d-4345-ab8f-d0ff9c49b5fb)

* If the **sizes** of the matrix are **not equal**, then **multiplication of matrix** is also not **possible**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e206811-94de-49f4-8fb3-8e74eed8a8fa)

* (m X n) * (n X p) -> m X p [Matrix sizes after multiplication] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33139d14-f19a-4985-8789-93cb30238c49)

* The **above** is **Matrix multiplicatio** without **divide and conquor algo(DAC)**.

## With DAC, Matrix multiplication

> With **DAC**,  matrix-multiplication will take **n^3** times. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e02ffc6-3ecd-4291-bad4-027fbe4d6b8c)

> In the **matrix**, **divide by 2** means **half rows and half columns**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/332a62ba-f806-48d2-ae70-b51706c76cc1)

> All are **2 X 2** in the matrix **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e551225-2829-46aa-87de-d8ba26249258)

> **Divide and conquor** means we have to **divide it**. If we **divide**, **4 X 4** by 2, we got **2 X 2**. **4 X 4** matrix we are **multiplying** in-terms of **2 X 2**.

> Now, matrix **A** has **two rows and two columns**. Row -> **A11 and A12**.

> Now, matrix **B** has **two rows and two columns**. Row -> **B11 and B12**.

> Now, matrix **C** has **two rows and two columns**. Row -> **CA11 and C12**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e254440-9d0a-4fd8-bc90-127aaf2482e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcc4efdc-b37e-435d-9b93-f3f46880a371)

> If **2 X 2** or less than **2 X 2**, they are **small** problems.

* At a time **4** elements are coming.
* If we want to **divide by 2**, then the **matrix** size should be in the **powers of 2**, and not **even nos.** also.
* Why we have taken **rows and columns** same?

> Otherwise **multiplication** would be **complex**. There is a **condition** in matrix that, **no. of columns** in the **first matrix**, should be **equal/same** to the **no. of rows** in the **second matrix**.

* Conditions

1) Take only squared matrix.
2) **n X n** should be **powers of 2**, so that division is easy. Add **zeros** if **one row** less. Add **zeroes** if **one column** less, we need in **powers of 2**.

> We want to multiply **two**, **4 X 4** matrixes which are **A and B**. If we observe carefully in the inside, they are **multiplications** of **2 X 2**. There are **8**, **2 X 2** multiplications.

> If we want to do **one 4 X 4 matrix** multiplication then, we are doing **8**, **2 X 2** multiplications in te inside. This is **divide and conquor algo**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/887cb3fb-37b2-4cf4-b550-1b987e8f7043)

* Time complexity of **4 X 4 matrix multiplication** or T(4) -> 8 * T(4/2) + 4 * (2 ^ 2)
* T(8) -> 8 * T(8/2) + 4 * (4 ^ 4)
* T(64) -> 8 * T(64/2) + 4 * (32 ^ 32)

* Recurrence relation of Time complexity:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2779003e-61bd-4314-bbb3-167dcb0a31f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6569cca-55f1-4a82-99ec-309cfc2073cb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6686e067-34ee-4e33-9a8a-64859feae6b2)

* Stack space -> O(log n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a6e69f3-60e6-43e4-bedd-1d5be1bd8156)

* T(n) -> Time complexity to multiply **n X n** matrices. **8** came from the **8** multiplications and the **4** came from the **4** additions.
* We can use **recursion** in multiplication.
* We cannot use **recursion** in addition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faceb9f2-a700-48f4-a264-a9f26e6557fb)

* Recurrence relation for multiplying **two** matrices using divide and conquor algo:-
* T(n) = 8 * T(n/2) + n^2 -> **O(n^3)**.

* Without divide and conquor algo -> **O(n^3)**.
* With divide and conquor algo -> **O(n^3)**.
* Stack place **increased a bit** in divide and conquor algo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6204c4e-1043-403b-9718-ff2b0cd87878)

> **Decreased** the **time complexity** in the **powers** and **powers** matters, we cannot **ignore** them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b69cb49-c57f-44a4-bbee-581a4aa139fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/077b3e5b-61c9-4b78-9ca1-db0d0490aecd)

> Remember the time complexity values. **8** multiplications was replaced by **7** multiplications.

> Everyone thinking **three for loops** are mandatory. **Strassen** proved that **less than 3** also **possible**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/891f4922-6c03-45bc-a9c5-32b6c2d46359)


* **Strassen** matrix multiplication purpose?

> Multiplying **two** matrices with **less time**, which is **O(n ^ (2.81))**.

* Quick sort time complexity if we take **median** element as **pivot**?

> **O(n * log n)**.

* n/2th smallest element we take as **pivot**, after partition it will go to **n/2th** place.

* Quick sort time complexity is **O(n * log n)** for **every case**, which element we have to take as **pivot**?

> Take **Median** element as pivot.

* Median element finding take **n** time only.

> But anways we are taking **any element** as **pivot** because we know that, **Quick sort** time complexity will always give **O(n * log n)** if the array is **not sorted**.

> If we don't want to take the risk, then always take, **median** element as pivot. It will give **O(n * log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef6ebcf8-24da-4d9a-83ba-5dcdd9ce315d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2f1cc83-ad43-4cd4-aefb-06e97ca39c12)

* Doubt.


* Link -> https://unacademy.com/class/heap-sort-ii/KAUOV2FP
* Start from **55mins**. Watch the **Strassein's matrix multiplication**. Missed it.

## Bubble_Sort (36) [13thMay 2023]

* Link -> https://unacademy.com/class/bubble-sort/P3ZX3ZNU

## Heap Sort

* Every year, **one question** comes from **Heap sort**.
* Heap sort is not **application** of divide and conquor algo.

### Binary Tree

* **Max** of **two** children.
* **Empty binary tree** with **zero** nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2476309-1789-4dde-bdc8-c172e2e1ede5)

### Almost Complete Binary Tree(ACBT)

* Binary Tree means **no conditions**, max of **two** children. We can go any no. of levels, no objection at all.
* In **almost complete binary tree**, not only **binary tree** but the condition is that if **above levels** are **free** then use them.

> Condition of **almost complete binary tree** is that if **current level** is **free** then don't go to the **next level**, don't unnecessarily **increase** levels. 

> Without **completing** left, don't go to the **right**.

* Rules of **almost complete binary tree**:-

1) Without **completing** left child at **every node**, don't go to the **right**.
2) Without completing **current/present level** fully, don't go to the **next level**.

> Any **binary tree** that satisfies the above **two** conditions is called as **almost complete binary tree**. 

### Complete Binary Tree(CBT)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d18a407-43f1-4ac7-8448-42e144be54fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6c812fa-ddc8-47f1-9557-66922bcba580)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ae85a73-f62b-4c1c-a821-4f227d969b76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8452e560-8a5a-44d7-b8ac-78304bf6873a)

> **CBT or Complete Binary Tree** is a special condition of **ACBT** where there is **no gap** in the tree. 

* In **ACBT** gaps can be there, in the **last level** but at the **right-left** side only.
* In **ACBT**, a **few gaps** are allowed, in the **last level** but at the **right-left** side only. If there are **no gaps** then it is **CBT or Complete Binary Tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebc49d70-de5b-4efc-a76e-0b4855796c8f)

> Every **CBT** is **ACBT**, but not every **ACBT** is **CBT**.

* **4-level** CBT contains -> (2^4) - 1.
* **K-level** CBT contains -> (2^K) - 1.
* **N-level** CBT contains -> (2^N) - 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddc0d5cc-f104-4515-bfbc-cba93154be0d)

* It is the **CBT**, max and min are the **same** only. So, for **N-level** CBT contains **(2^N) - 1** nodes which is **min as well as max**. Every time it is **same** for **every case**.
* There is **no gap** in **CBT**, so **same** will come. 
* In **ACBT** there are **gaps** so, **max and min** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fa3c7a9-16c3-49d1-9aaa-ab3f9df9b183)

* There are **4** levels. We cannot leave the last level which is the **4th** level empty then how is the tree **4** levels, that why we putting **one node** as the last level to make it into a **ACBT**.

> So to find the **ACBT min** for **4** levels, what are we are doing is we are finding **max of ACBT** for **3** levels which is **2 ^ 3 - 1** and we have **one node** at the **4th level**. So, it is **2 ^ 3 - 1 + 1 -> 2 ^ 3**.

* **ACBT min** for **4 levels** -> **2 ^ 3**.
* **ACBT max** for **4 levels** -> **2 ^ 4 -1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9565c795-97c0-4940-bcad-5620fcb78060)

> **Max and min** conditions are coming from **ACBT**, as **ACBT** has gaps.

* In **K** level, how many nodes are there in an **ACBT**?

> **2 ^(k-1) - 1 + 1 -> 2^(k-1)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24010305-0722-4eec-84c6-780b7c94b23d)

> It doesn't matter from where we start, at the end of the day, **how many levels**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0576873f-22de-4413-9e73-3f4e9def6144)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ed691c2-e4da-4998-a5ab-a1aa7f5c3e47)

* If asked that **n** nodes **CBT** contains how many levels?

> **K = log(n + 1) base 2**. Where **K** is the **no. of levels**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7ecb61-3e98-4213-b38e-c9925453e135)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44d52e6b-fc9e-4c50-9894-ad42af91bc52)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/043ec2b7-35f0-4945-922d-85e30835eac7)

> We have **4** levels, so the **total no. of nodes** is **(2 ^ 4) - 1 -> 15**. If we do **15/2 -> 7.5**, which gives **7.5**. Take the **ceil(7.5) -> 8**. So, **8** is the **no. of leaf nodes** in the **4 level** tree.

* Leaf node is **zero child or children**. In **CBT**, leaf node is **last level** only.
> In a **CBT**, there are **n** nodes, so there are **n/2 or half** leaf nodes and **n/2 or half** are **non-leaf** nodes. If **fractions** came then take the **bigger** one, which is **ceil()** or ceil value, as the **leaf nodes**.

> We have **4** levels, so the **total no. of nodes** is **(2 ^ 4) - 1 -> 15**. If we do **15/2 -> 7.5**, which gives **7.5**. Take the **floor(7.5) -> 7**. So, **7** is the **no. of non-leaf nodes** in the **4 level** tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff1739c9-8bdc-4fd3-8b82-45f0747828ed)

* Every formula is for **CBT** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f240c824-7afc-4479-981c-fc46438c92fb)

* CBT contains **n-nodes**.
* No. of **leaf nodes** -> Ceil(n/2)
* No. of **non-leaf nodes** -> floor(n/2)

> The **above** formula are meant for **CBT** only but they work for **both**, **ACBT and CBT**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ad1dcf5-ff05-43c1-8300-c8119ba172e6)

* **Heap sort** is **ACBT**.

### Binary Tree representations

1) Array representation
2) Linked List representation

* Computer cannot see a **tree**, **tree** representation is for humans.
* So computer, uses the **above** representations. It is for any **tree**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7eb24d4-0c38-4336-90b5-86f335a9ea4c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92c66919-9f0b-4ed4-8f69-8f78eda25b3d)

* In **linked list** if **both** the **address or pointers** are **null** then it is a **leaf node**.

> The **original diagram** has **7** nodes, and everyone is a **character**, so **each** is **1 byte**. So, in total for **7** node, it has **7 * 1 byte -> 7 bytes**.

> In **array representation** for **7** node, the total size is **7 bytes** only.

> In **linked list representation**, there are **3 parts** in every **node** of the linked list. So, **each node** has **3 parts** which means **1 bytes * 3 -> 3 bytes**. So, for the total of **7** node it is **7 * 3 bytes -> 21 bytes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f2847c0-07f1-4894-a9b9-fd6cf26758cb) 

> There are **two** binary tree representation but **depending on the situation**, **one** is better than the **other**.

> The **greater** advantage of **array representation** is that **random access** is possible but in **linked list representation**, **random access** is not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fad3819c-1315-4a7b-bd07-a7406c031632)

* In Array representation, **n** is a node.
* Find **Parent** -> floor(n/2)
* Find **Left child**, next generation -> 2 * n.
* Find **Right child**, next generation -> 2 * n + 1.

> When the **calculation** is **crossing boundary** it is **leaf node**.

* Linked List representation does not have **formulas**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df3b2ea0-df9f-42da-bb3a-ad33124865b7)

* In Array representation, **nth** place is a node.
* Find **Parent** -> floor(n/2)
* Find **Left child**, next generation -> 2 * n.
* Find **Right child**, next generation -> 2 * n + 1.

> This will work for **any binary tree representation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e33ff6a7-76ec-4f97-aec7-0f4611faaabb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adf7ec3f-96aa-45d7-a59d-3e8b52eb451f)

> In there as we can see that **B** node, doesn't have any **child** nodes. So we have to **leave gaps** in the **array representation** for the **children** of **B**. That why we have given **two gaps** after **C** as **B** doesn't have **any children**. After that put the **children ** of **node C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f18e2fa-d9f0-4873-b967-b1383ce9b803)

> Check the **answer** with the **formula** to see if the **answer** is  **right or wrong**.

* Binary Tree having **5 nodes** but in the **array representation** of the **binary tree**, we have **7** nodes/indexes. So, if we are **unlucky** then **more slotes** we have to take in **array representation**.

> Array represenation is not **always** better, it is **dependent** on the **situation**.

* In **Array represenation** we have to keep **gaps** for the **missing children** but in **linked list represenation**, we are simply putting **NULL(N)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31f47338-6b6a-497e-96b5-3e227627b6fa)

> Tree has **5** nodes, so it should take **5** slots. In **Array represenation**, it took **7** slots as **two** gapes were there. In **linked list represenation**, we are doing **5** nodes only but each node is **3 bytes**. So it is **15 bytes** which is still **smaller** than the **7 bytes** which was taken by **Array represenation**.

* For the **above** formula to work, **array index** starting from **1** only. 
* Array index starting with **0** it will work with some other formula.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc7874a6-394a-48c2-b518-0fbec49efe1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/099f9cb5-cb94-4717-a793-473b0ba149d7)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9e11c8d-1bc4-4dde-b4d5-03674394ec22)

> In the **array representation**, for the **4** nodes, it took **15** slots. For the **linked list represenation**, it took **4** slots only but **each slot** is **3 bytes** which means in total **4 * 3 -> 12 bytes**. Here, **linked list represenation** is **better** than **array representation** for the **given above problem*.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e92e6c10-9e21-48e7-aa61-f3e3467bdd9e)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3742cfd-953c-45d4-a88f-8c01af40b52d)

> We will finish the **array representation** as soon as we get the **last element** into the **array**. As we got **D** in the array, we finished the **array representation**, no need of that **gap** after **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faa57e97-7e17-4ee0-9f5a-42bdb336b8be)

* Array representation is **better** for **CBT and ACBT**.
* Linked list representation is **better** for other than **CBT and ACBT**.
* Binary tree means **Linked list representation**.
* By default if those two, **CBT and ACBT* are **not mentioned** then go for **linked list representation**.
* Heap sort means **CBT and ACBT**. So, **heap sort** is representation inside the **computer** by the **array representation**.

## Heap Tree

1) Min Heap
2) Max Heap

* Heap's final goal is **sorting** only which is **heap sort**.
* CBT is also ACBT, so it is better to write **ACBT**.
* In **min-heap**, **root/parent** is **minimum** when comparing **children**. **Equal** also **no problem**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42a0f83b-5901-4d01-be64-257fa423c2f5)

* Min Heap

1) ACBT
2) In ACBT, **root** is **minimum or equal** also when comparing **children** at every node. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcca6137-be0d-4471-9310-4d59b725a9dc)

> We don't care in **min-heap tree**, left or right child is **bigger**. Comparing **root**, how **children** look like. Comparing **child and parent**, parent is **minimum**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8378c1e0-fbd4-49ac-bb91-20fdd1ccd462)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e5651d2-cc70-47b3-8e95-8baeb376e893)


## Max Heap

* **Root** is **more or equal too** when comparing with **children**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aeede4a6-8a0d-4014-ad32-49bbaf9b59f3)

* ACBT and CBT contains **n** nodes, then the **no. of levels** is **K = log(n + 1) base 2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c004348f-a527-4eb4-903c-e9dcb22103a3)

* Max Heap

1) ACBT
2) At every node, **root** is **max or equal too** compared with it's **children**. Then it is known as **Max-Heap**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bdd8e19-33b1-41c8-8e56-2f47a810c723)
 
> In **both** the trees, all of the elements are the **same**, then it is **both, min as well as max** heap.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f100743-2daa-458a-957b-ba815a081472)

* In a given tree, all of the elements are **same** then the tree will be **both, min as well as max** heap also. The tree will give **both ascending as well as descending** order. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/780ca3db-d5dd-4c92-aced-9259b60b1014)


* In **min-heap**, it is guranteed that the **root** contains the **min. element**.
* In **max-heap**, it is guranteed that the **root** contains the **max. element**.

* If a **min-heap** is given and we are asked to find **min element**?

> It will take **constant or O(1)** time as the **root** contains the **min. element**.

* ACBT is stored in the computer using **array representation**.
* So, **min and max** heaps are also stored in the computer using **array representation** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/192a9382-2edc-4301-aa12-50508c8c1620)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6eac86f7-1b24-4101-baa2-3181750f5cab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5579a052-aad6-4dd2-b46c-65cb67b1d337)


## Greedy-Techniques (37) [15th May 2023]

## Min-Heap

* Min-Heap tree with **n** people, how many levels?

> **O(log n)**. **Every case** is **log n** levels as it is a **balanced tree**.

* Binary tree with **n** people, how many levels?

> Max is **n** levels, min is **log n** levels.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1ca054f-3a99-48c3-ba23-9e849d7c6106)

* Min-Heap tree **min element** as the **first level**.
* Min-Heap tree **max element** as the **leaf node**.

* Min-Heap tree containing **n** elements, finding **min element** is **O(1)**.
* Min-Heap tree containing **n** elements, finding **max element** is **O(n)**. We don't need to scan the entire tree, we can just scan the **leaf nodes** and we know leaf nodes is **n/2**. We can do **one scan** and found out.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e46d0aa-2bd8-43da-988c-8e7e7b0eddfa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bf0dbca-7d7e-448e-b206-9338ca2f55a2)

> Half is **leaf** and half is **non-leaf**. Find **middle element** and from **mid + 1**, we can find the **leaf nodes**. 

* In the **min heap** tree there are **1024** elements in total. We need to find the **max element**. How many comparisions.

> n/2 -> 1024/2 -> 512. So  **512** leaf and **512** non-leaf elements. So **no. of comparisions** to find **max element**, **n - 1 -> 512 - 1 -> 511**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/054c8c8a-a22f-456f-8842-b4a38822fc6d)

* Min-heap tree, finding **min elememnt**, how much time? How many comparisions?

> O(1) or constant. **No comparisions** as **root** is the **min element** only.

* Min-heap tree, finding **max elememnt**, how much time? How many comparisions?

> O(n) times . **(n/2) - 1** comparisions as **n/2** elements is the **leaf nodes**.

* Formula to find **leaf nodes**?

> **(n/2) + 1** still **n** are the **leaf nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fafc37cb-b6bf-40b8-aded-ce371f15de18)

* n/2 -> 21/2 -> 10.5 -> Ceil(10.5)
* n/2 -> 20/2 -> 10 -> 10 + 1 -> 11

> If **fraction** comes as the **mid** element then do **Ceil()**. If **whole numbers** come then do **plus 1(+1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c14782e4-2576-4ca6-91ab-31d227c4234f)

* Normal array max is **anywhere** we have to do **one scan**. It takes **n** times.
* Normal array min is **anywhere** we have to do **one scan**. It takes **n** times.
* Min and Max heap tree are **arrays**, but every array is not **min or max** heap.
* In **Min heap** array representation, min element is the **first element**, no scan needed. It takes **constant time**.
* In **Min heap** array representation, max element is the **leaf nodes**. It takes **n** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20708968-bbfa-4412-a852-f592ea27665e)

* Min-heap advantage is **min** element.
* In **Max heap** array representation, max element is the **first element**, no scan needed. It takes **constant time**.
* In **Max heap** array representation, min element is the **leaf nodes**. It takes **n** times.
* Max-heap advantage is **max** element.

* In a min-heap, it has **n** elements, how much time to find the **max** element?

> O(n). One scan.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ee2ac4e-cc95-4dec-836b-3ae415e59f41)

* Min-heap **first min** -> O(1)
* Min-heap **2nd min** -> O(1)
* Min-heap **3rd min** -> O(1)
* Min-heap **100th min** -> O(1)
* Min-heap is meant for **min** elements.
* It is good for **constant** minimum. If we use **functions** then problem will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5edab875-a523-4445-a253-5b786c51fa6a)

> Random access possible in **array** so we went to the last place and inserted the element. It will take **O(1)** time and after insertion is over, ask the **parent** if everything is OK. We check **min-heap** property where the **parent** is **smaller** than child.

> So, **80 > 5**, and we **swap**. **5** will ask parent, if everything is OK. So, **50 > 5**, **swap**. **5** will ask parent, if everything is OK. So, **30 > 5**, **swap**. **5** will ask parent, if everything is OK. So, **10 > 5**, **swap**.

> It is **min-heap**, so the **smaller** elements will go to the **top**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cea588f9-4868-456d-9b9b-e9e090a36d9f)

> When the **min** element is going up, then it is following one **specific path**. The **path length** is **log n**, as we are going on **one specific path** only.

* It is **log n** comparisions and **log n** swaps. So, **log n + log n -> 2 * log n -> O(log n)**.

> We have **log n** levels. So, we are **first comparing** the **parent with the child** and then **swapping** the parent with the child. We are doing **both** comparisions and swaps all of the time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9dc3b72-a1c9-4c2d-996d-1dc8ce63e037)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1e0f463-3a2d-4d96-9934-46e39f8c1e53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fbefe2e-86c1-4d13-aca9-16510ba85762)

* The process is called as **heapify** method.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3357a4f-d4d1-4a6f-874b-8571bc5715b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1bb07a7-4fbd-4988-a32b-04a040dd27b2)

* Time complexity of **min heapify** procedure -> **log n + log n -> 2 * log n -> O(log n)**
* We are **inserting** the **new element** at the **bottom level** because we have **gap** at the **bottom** level only.

* Insertion Algo **best case** for min-heap -> O(1).
* Insertion Algo **worst case** for min-heap -> O(log n).
* Insertion Algo **average case** for min-heap -> O(log n).

> When we inserted the element at the bottom and the element asked the parent if the element is OK. We are checking if the parent is smaller than the child. If parent is smaller than child, then we **stop**, which is the **best case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bbd2a94-3d0e-46a1-a90f-f3b9b381fa81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dc7ee3b-4c0d-4d4d-9ded-c14175837943)

* NO. **Maximum level**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0943644c-3df1-4d53-b1a5-2442a45006e8)

* Min heap tree to **insert** one element, how much time?

> **log n** for **worst and average** case. **O(1)** for **best case**.

* For **n** people to create **min-heap**, how much time?

> **O(n * log n)**. [Inserting one element at a time]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b15cfa6-ef0b-4021-8540-e183f6dae3c4)

* For **n** people to create **min-heap**, how much time [All elements are present in the array at a time]?

> **O(n)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15bae352-7df5-4ea4-a1c4-6213e2cd9148)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e46840e-95ee-4b48-8230-a1d2b769ce1f)

> **Insertion** is at the last place because **gap** is at the last only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3caca8a1-dbe7-4990-9033-6517082c5137)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5fb50f4-e67f-43ee-a776-d234217ebbf6)

* YES. Only if the **new element** is bigger than it's parent. So no **swapping** neded which is the **best case**.

### Deletion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/683917d5-d41b-46a2-87e4-7bbbb5f117e4)

* Elements will **decrease** in **deletion**.
* n = 20 [array size]
* m = 20 [Last element position]

* Who will change among **n and m** in **deletion**?

> **m** will **change**. **n** is size of the array, it is **fixed**, we cannot **change** it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1700760-8a92-4fb0-b34c-765e5c8e1e5c)

> In stack, if we say **pop**, the **last element(LIFO)** is deleted. In queue, if we say **delete**, the **first element(FIFO)** is deleted.

> In case of stack, **last element(LIFO)** is deleted. In case of queue, **first element(FIFO)** is deleted. 

> In case of min-heap, if we say **delete**, then **root** element is deleted, because **root** is the **min** element.

* If we are asked to get the **min element** out from a **min-heap** tree?

> Perform **Deletion** once. Root will be **deleted**.

* If mentioned in the question, **delete** some specific element, then delete that element only. If nothing mentioned then delete the **root** element.

> When deleting **first element(root)**, store it in some variable, **x= a[1]**. Deleting the **first element(root)** is nothing but **replacing** it with the **last element**. It is not **ACBT**. It not **min-heap** now. So, we have to do **adjustments**, the **new element** in the **rott** should ask the **childrens**.

> Parent is compared with **two** children, **best one** is swapped with the **parent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a2bd8cd-edb3-4920-b746-85a78243561c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dee7b68a-ec6d-4e7c-bca4-e8f737d7dbd8)

> The root element is **deleted** and it is **replaced** with the **last element**. Now we are **comparing** the **parent** with it's children. Whoever is **smaller** is swapped with the **parent**. This goes on, until we get **min-heap** again.

> Adjustment going on from **top to bottom**. **Parent** is **asking** children. Everytime we are coming down, we are doing **two comparisions** and **one swap**. We have **log n** levels. The **path length** is **log n**.

> So, we are doing **2 comparisiona and 1 swap** at **each level** and we have **log n** levels.

* Time complexity -> **2 * log n + log n -> 3 * log n -> O(log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/499d1670-c577-40e1-aae6-e2b52ad25814)

* Time complexity of deletion for **worst case** -> **O(log n)**.
* Time complexity of deletion for **average case** -> **O(log n)**.
* Time complexity of deletion for **best case** -> **O(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/166471be-d4b5-48e7-a708-b2ff3f404db7)

> **Insertion and deletion** time is **same**. In **insertion** we are going from **bottom to top** and in **deletion**, we are going from **top to bottom**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d08d720d-6c17-4bc2-8fe9-30ace9abedeb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f45ba749-fc7f-45a7-a7fe-006ead79c4ac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f781df5b-2e0b-4119-8801-f0d75ef746ee)

* **Root** element is **deleted** by default. First **store** then **delete** because we want the **min element**.

* In **min heap** tree, how much time for **deleting**?

> **log n** time is **average worst case**. **O(1)** for **best case**.

* In **min heap** tree, how much time for **finding**?

> **O(1)** for **every case**. Finding means **just return** over.

* Finding and deleting is **different**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b29c90e-a852-45a0-a454-16a9cb5b577f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b2fe448-8943-4033-8f8b-c00531ddcc1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89c77b3a-afbf-440f-88be-0a8638e0e048)

> **Deletion** is **root** element deleting. First store the element to be deleted. Deletion is nothing but **ignoring**. So, the **first element** which is **10** is being **replaced** by the **last element(m)** which is **160**. Now, we have **two** instances of **160**, so we do **m=m-1**, so **remove/ignore** the **last instance** of **160**.

> So the **gap** is at the **last place**, now the **no. of elemenets** is from **20** to **19**. So, **160** is at the **root**. Now **parent** is **comparing** with **children** to see if **children** are **smaller** than **parent** or not.

> If **smaller** then the **parent and child** are **swapped**. We do the same thing in the next level also. We do this until we find that the **parent** is **smaller** than the **childen** then we stop, which is the **condition** of **min-heap**.

* **Insertion and deletion**, **Both** are **adjusting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efb27cf1-d40d-403a-ac49-aa16fa775c88)

* Min heapify procedure from **top** -> **Deletion**
* Min heapify procedure from **bottom** -> **Insertion**

* Deletion is over, **one gap** came at the **last** and **one minimum** also came.
* **Min-heap** tree **first time** deleted, **one min** element came.

## Greedy Techniques-IX (38) [15th May 2023]

* No. of levels is **log n base 2** for **every case** as it is a balanced tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b57f3761-d78a-4728-b02c-ee4ed5459418)

* Because of **deletion**, elements are **decreasing**.

* n = 9(Array size)
* m = 9(Last element size)

> **m** will only **change**, it will keep on **increasing or decreasing**. Array size which is **n** is **fixed** only, it cannot be **changed**.

> By default, **first elemenent** is **deleted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8864c5bf-3fb2-46f0-a8e0-a3822090c800)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68139825-e012-4c9c-b471-84e61959e8c6)

* Deletion **best** case -> O(1)
* Deletion **worst and average** case -> O(log n).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/072159e7-9d3f-49ba-9263-ae85f06d60b6)

 * After **deletion**, the last element comes to the **top** and now **min heapify** procedure happens to make the **min-heap**. The **parent** is asking the **children** if it is the **correct** place for the parent or not. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51a88182-c867-4c78-a25a-78eb39a71aff)

* Every deletion worst case -> O(log n)
* Time complexity of **Heap sort** -> O(n * log n).  [There are **n** elements, so **deletion** happening **n** times]

* Deletion -> Parent ask children.
* Insertion -> Children ask parent.
* Heap sort is **in-place**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42dfe5ed-b2ee-4724-afe9-66e4160ebbde)

* We are **deleting** because we want the **min element**and it is for **sorting** purpose.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4a4fe29-7387-416a-b237-9d5c2648b62c)


> We can **delete** anywhere not only **root** element only but can't give gurantee that it is **min or max** from the tree. 

> In **min-heap** we can only talk about **root** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d68630c-7f32-4eb8-9af3-54e39fba195b)

* Simply delete. It is always **O(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22deddd5-a284-4e73-abaa-50c1e19a17df)

* In **min-heap** tree, how much time to **find** the **max** element?

> **Max** element is with the **leaf nodes** and we have **n/2** leaf nodes. It will take **n/2 - 1** comparisions. So it will be **O(n)** times.

> It is **finding**.

* In **min-heap** tree, how much time to **delete** the **max** element?

> For **finding** it took **n** times. After **finding**, delete the element and replace it with the **last** element. Now adjust so that it is **min-heap**. The adjusting will take **log n** time. 

> For **deleting** it is **n + log n -> O(n)** only

* For both **deleting and finding**, it is **O(n)** only.

* **Min-heap** is for **min** element only. **Min-heap** for **max** is of **no use**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7624d9b-0487-4411-af43-031a83661cc9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d41a72d-72ff-4b9e-a163-a00748ab8f83)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc9fcc67-440a-4055-875a-68cc6d33023b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72f1b9cc-a20c-4b3e-a69a-18b31ef41086)

> We have **random access** in **array** so go to the middle which is **n/2** which will take **constant or O(1)**, then **replace** the element with the **last** element and then adjust accordingly. The **adjustment** will take **log n**.

* Time complexity for **deleting** middle element, **worst case** -> O(1) + O(log n) -> **O(log n)**.
* Time complexity for **deleting** middle element, **best case** -> O(1)

* **Deleting/finding 'n/3'** mininum in **min-heap** -> Sum of **n/3** natural numbers -> O(n^2) [One way]
* **Deleting/finding 'n/3'** mininum in **min-heap** -> Delete **n/3** times -> O((n/3) * log n) -> **O(n * log n)**. [Better way]

> Every **deletion** is **log n** and we are deleting **n/3** times so it is **O(n * logn)**.

> **O(n * logn)** is way better than **O(n^2)**.

* Min-heap and maximum, any relation?

> **NO**. **One scan** required like in **array**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d984737b-60aa-4a19-b514-7c11c9c88050)

* Min heap, **first max** finding, how much time?

> **O(n)**.

* Min heap, **second max** finding, how much time?

> **O(2 * n) -> O(n)**.

* Min heap, **third max** finding, how much time?

> **O(3 * n) -> O(n)**.

> **Normal array** story. **One scan** required.

* We have **normal array** and not **min-heap** array, first minimum finding -> One Scan -> O(n)
* We have **normal array** and not **min-heap** array, second minimum finding -> One Scan -> O(n)
* We have **normal array** and not **min-heap** array, third minimum finding -> One Scan -> O(n)

* We have **min-heap** array, first minimum finding -> O(1)
* We have **min-heap** array, second minimum finding -> O(1)
* We have **min-heap** array, third minimum finding -> O(1)

* We have **min-heap** array, first minimum deleting -> O(log n)
* We have **min-heap** array, second minimum deleting -> O(log n)
* We have **min-heap** array, third minimum deleting -> O(log n)

* We have **normal array**, first max finding -> One Scan -> O(n)
* We have **normal array**, second max finding -> One Scan -> O(n)
* We have **normal array**, third max finding -> One Scan -> O(n)

* We have **normal array**, finding **n/2** minumum -> Delete **n/2** times -> **O(n * log n)**.

## Build heap method

* Constructing a **heap** tree. By default, if nothing mentioned then go for **max heap**.
* Creating min-heap with **O(n)** times for **every case**. One condition is there that **all elements** should be **present** at a time.
* For **one after another** element comes, we cannot apply **build heap** we have to use **insertion** one by one.

* If we have **n** elements and we want to create **min-heap**, how much time?

> **O(n)** and **O(n * log n)** both are **possible** but **O(n)** is **better** in terms of **time complexity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f910ec75-4e0d-4473-aaa5-fc278c80f675)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1284210a-ba1d-490c-a186-8186aed1561b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7139131d-fb45-40c9-8ace-25a44d595978)

* Build Heap Algo

* Build-minHeap();
* for(i=n; i >=1; i--)
*  parent-minheapify(i);

* **Build Heap** steps:-

1) First build/create **ACBT**. It took **no time**. We just draw the tree for **convenience**.
2) Now run the **algo** for **build-heap**.

> In the **loop** we are starting from the **nth** or **last element** of the tree, and we are asking if the element has **any children or not**? If no children, then we can go to the **next element**.

* Leaf nodes, don't have any work. 
* We have to start from **basement** because we have to build the **foundation** first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c8d4696-c538-4cd5-a691-a170d31b245b)

> The **real algo** will start from **n/2**.

* i =floor(n/2) -> It indicates the first **non-leaf** node from the **bottom**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ce0a374-5f11-4e3b-8d58-ff6d3b20330f)

* Build heap will start from **bottom** because we are building and building starts from **basement**. We should do **parent-minheapify**. Leaf nodes have **no children**, so **real work** will start from **floor(n/2)** which is the **first non-leaf** element from the **bottom**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8da1424-a366-4fa8-b224-e6e1ed5cd483)

* **Min-heapify** means we will go from **bottom to top**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/677dca0e-e855-4f91-a3a9-24017559b971)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96bdd59e-0bfe-489d-a896-878ce92aaae9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87d72b98-2372-441a-a6c6-be6279ad182d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3f46e28-5eba-4326-a6d8-706fc231a86b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7559a01-a5e9-4565-b395-8edce5780b25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5583fd14-d00f-490f-9d5a-4e10a223b491)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69f515bc-eabe-45d4-896b-8f4615c53df5)

* From the bottom, find the **first non-leaf** element and start from there. Now ask the elements, **parent_min_heap()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b570f39a-9c20-4bc9-a323-03f769f1f71e)

* Time complexity -> **O(n)**.

> Half of the people, **no work** and the remianing is **n/2** elements. Everywhere we are applying **min_heapify** procedure which will take **log n**. So, it should be **(n/2) * log n -> O(n * logn)**. Because we are doing **at a time**, some work will be **decreased** and it became **n** only.

> If the **total nodes** is **n**, then the **no. of leaf nodes** is **floor(n/2)** which we have taken as **m**. So, **m = floor(n/2)**.

* (m/2^(log m base 2)) -> (m/m ^ 1) -> m/m = 1.

> So, at the **first level** we have **1** element.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f40c884a-5c80-49c2-bcbf-3e383a3fbb98)

> At the **last level**, the **no. of swaps** is **zero(0)**, as the real work starts from **non-leaf** elements.

* If **swaps** are **1** then the **no. of comparisions** is **two**, it is **double**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2a41499-84fa-4956-a4a6-1e80f214fe57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ff8cdf8-a50a-4f67-9749-0b34df0aa6f2)

* Total swaps = n/2 = m
* Total comparisions = 2 * n/2 = n
* Time Complexity = n + n/2 = (3 * n)/2 -> **O(n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a40f91f7-1b00-4b5b-840a-3774256d8b09)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f19fd71b-b089-4bb4-9622-0b2476692ff1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e431b540-c581-4c40-a5f5-d90aa583d87e)

* Last level, how many nodes?

> **n/2** or **m** nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8082a1df-4fac-4b14-9216-340883c5aea0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cfa1743c-cae1-47cb-9f4b-50475ccd5472)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c84e9f8a-1e62-4652-98f3-1b2c820bb8b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fa3aa97-f62c-404a-9d68-b5b05725e7c0)

* The **proof** is not needed in **GATE exam**.

* Build heap, time complexity, for **every case** -> **O(n)**  [Only one for loop required]

> The reason is because of **decreasing GP series**.

* Heap sort input -> **One** array.
* Heap sort output -> **One** sorted array.


## Heap Sort Algo

1) Create **max-heap** using **build heap**. It will take **O(n)** because of **one** for loop.
2) Delete every element and store it from **right-most** place. Repeat **n** times. Deletion takes **log n** for **wost case**, so it is **n * log n -> O(n * log n)**.

* Time complexity of **Heap sort** for **every case** -> **n + (n * log n) -> O(n * log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecfed973-2316-479a-8091-f1227eb87149)

3) We are **storing** in the **same array**, so it is **in-place**.
4) Not stable

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50529122-d0eb-46a9-b322-b5f24e178984)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46b7e096-548d-4b75-a16a-af3bc7ef5fa9)

* Deleting **one** element **best case** -> O(1)
* Deleting **one** element **worst case** -> O(log n)

* Heap sort algo is for **distinct elements**. If **elements** are **same** then it is a **special** case.

* Time complexity of **heap sort** if all elements are **same** ?

> **n * 1 -> O(n)**, it is a **special case**. Build heap is **n** and every deletion is **O(1)**.

* Time complexity of **heap sort** for **best case**?

> **O(n * log n)** for **every case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2efbef4c-36ab-408b-b075-0dffce4b0a8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef89b7af-9355-4a4a-bb5d-82c1c22ebc17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d18ceaf5-c332-49ca-8ebe-45baed45f7cb)


## Greedy Techniques-X (39) [15th May 2023]

## Greedy Technique

* Also called as **short-cut** technique.
* Notes -> Most of the problems in **greedy** contain **n** inputs and the **objective** is finding a **subset** which will satisfy the conditions and maximizes the **goal**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39e2a1f5-0e67-440e-9e66-6520859e2add)

* Input -> **n** inputs
* Output -> The **objective** is finding a **subset** which will satisfy the conditions and maximizes the **goal**

* In **sorting**, we cannot go for **greedy** technique.
* In **searching**, we cannot go for **greedy** technique.


* Out of **300** people, taking **5** people in a **group** in how many ways?

> No. of Groups possible = **300c5**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caafeaf1-d2ca-433d-ab23-24ce4ba246df)

* Every group contains **5** people. Between **two** groups **atleast one difference** should be there.

* **All possible solutions**, out of **300** only selecting **5**, how many possibilities? **300c5**, those many possibilities -> **Solution space**.
* **Those solutions, satisfying the condition**, Out of the **300c5** groups, how many groups are satisfying the condition?  -> **Feasable solutions**.
* **Best One**, Out of the **feasable solutions**, which one is **optimizing** the **goal**? **Maximum Average**  -> **Optimal Solution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baf32b84-af7e-4f55-88de-24eefc025e77)

* **Solution space** -> Set of all possible solutions, over the given **n** no. of inputs, is known as **solution space**. It is **300c5**
* **Feasable solutions** -> Those solutions which will **satisfy the conditions**, are known as **feasable solutions**. It is **50c5**.
* **Optimal Solution** -> It is **one** of the **feasable solutions**, which will **optimize/maximize the goal**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/873ae092-5f86-498a-92bd-4001d6196ee7)

* **Optimal Solution** need not be **unique**. More than **one** possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/993ca3fb-f26c-4327-a7ec-95adbbe19b10)

## Application of Greedy Technique

1) Knapsack problem
2) Job Sequencing with deadlines
3) Huffman coding
4) Optimal merge pattern
5) minimum cost spanning tree((MST) [**IMPORTANT**]
 A) Prims
 B) Kruskal
6) Single Souce Shortest Path(SSSP) -> **One To Many** path.
 A) Dijkstra's -> **Positive edge weight only**.
 B) Bellman-ford -> **Positive and negative edge weights**.
 C) Breath first search/traversal -> **No Edge Weight**. 


* Single Souce Shortest Path(SSSP) 's input -> **One Graph and single source**.
* Output -> From **source to every other person** we have to find **shortest** path.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea86c24f-cc53-4315-ae64-ed451a9d5231)

* Out of the **three** algos in **Single Souce Shortest Path(SSSP)**, only **Dijkstra's** is **practical**.

## Knapsack Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22c0f753-c898-447b-9c6d-c81a66701faa)

* Knapsack -> Bag

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d36aaa1-24de-4a6a-8c6e-25e344465625)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6f15e6d-e0fe-4c1a-a631-75aed6814a0b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/895a3d62-3e11-44a1-ba68-a27bf40cea7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67166877-9d3e-46f9-9f2b-4354ed1e661f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4e452b2-5dc3-47dd-8d12-a936219a652c)

* Sum of all the weights = 25kgs.
* The **max capacity** of the **thief's bag** -> 20Kgs.
* **Fractions** are also **allowed**.
* Knapsack is also called as **fractional knapsack** as **fractions** are **allowed**.
* Taking object **half** means **multiplying weight with 1/2** and also **multiplying value with 1/2** also.
* Taking object **full** means **multiplying weight with 1** and also **multiplying value with 1** also.
* Not Taking object means **multiplying weight with zero(0)** and also **multiplying value with zero(0)** also.
* **Greedy** means **we cannot take all**, we have to take a **subset**.

* Conditions of **Knapsack problem**:

1) Take whatever object we can but do not cross the **limit/capacity** of the **bag/knapsack**. This is called as **peaceful** solution.
2) Out of all the **peaceful** solution we have, the solution which gives the **max profit**, that is the **optimal solution**.

> For the **knapsack** some **damange** happened because we **kept more**, then that solution is not a **peaceful** solution.

> When we can say the solution is **peaceful** when there is **no damage** to the **knapsack** and we taking between **0 to 1**, including **0 and 1**. 

> Out of all the **peaceful** solution we have, the **best solution**, which gives the **max profit**, that is the **optimal solution**

> For **1 unit**, **object 2** is giving the **best profit**, so take **object 2** as much as possible. So, we will **first** take **object 2**. As **object 2** is the **best one**, we are taking it **fully**, so we have put **1** in **x2**. 

> After taking **5** units of **object 2**, we have remaining storage of **20-5 -> 15** units of space in the **knapsack**. Now, **object 3** is giving the **2nd best profit**. So we will take **object 3** fully as it has **8 units** but we can still take **15 units**.

> After adding more **8** units of **object 3**  we have remaining storage of **15-8 -> 7** units of space in the **knapsack**. Now, we are left with **object 1**. It has **12** units but we only have **7** units. So, we cannot take **fully**. So we will take **7/12** units only of **object 1**. Now the **knapsack** is **full**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9f01056-998a-4689-8f69-453a88231741)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8d85fb4-086f-4297-8b3c-a38c1641277d)

> While giving **answer** we have considered both **profit as well as weight** here.

* Knapsack will give **best answer** when we have given **priority** to both **profit as well as weight** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0324cefe-b6b4-414f-869a-034b4509e687)

> We have taken the **objects** using **some calculations** and not **blindly**.

> We have given **importance** to the **best** person because for **1 unit** weight it is giving **max profit**.

> So finally **625** is the **max profit**, we will get.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6f5b235-e04a-4d78-8eb4-e438b4cbc9b7)

* Steps for **knapsack** problem:-

1) For every object, find out their **1 unit** weight and their **profit**.
2) Whoever is **best** after calculations, take that **one** then **2nd best** and on and on until **capacity** is **zero(0)**.
3) Whatever **fraction** we have **take**, that **fraction** of **profit** we will get. Add of the **them** and we will get the **max profit**.


* What is the **Optimal soution**? It means in **which fractions** we have to take the **objects**?

> **7/12, 1, 1**. The **max profit** is **625** as it came from **optimal solution**.

* **Optimal soution** -> **(7/12, 1, 1)**.
* **Feasible solution** -> **(7/12, 1, 1)**.
* **Feasible solution** but not **Optimal soution** -> **(7/12, 1, 0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bec56a03-a08a-4908-b0e1-4ec89e1e3705)

* **No damage** to **knapsack** in both the **cases**.

> **1 and 0** both are **feasible**, so between **1 and 0** we can write **infinite feasible** solutions. As **fractions** are **allowed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/049e8f51-d691-4b8c-a7f0-796bf34c7cc1)

* What are the things really required for the **problem**?

1) **How many objects? -> 'n'**. Here we have **n = 3** objects.
2) For every object, the question should give **two** things, they are **weight and profit**.
3) Capacity of **knapsack** should be given.
4) The twist is that **sum of all the weights** of the **objects** should be **more/cross** the **limit/capacity** of the **knapsack**.
5) We can take **fractions**. That's why it is called as **fractional knapsack problem**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9721f4a-5d90-4728-8adc-484cb2367c9c)

* **Fractional knapsack problem** -> Greedy Technique
* **No fractions** allowed, **knapsack problem**. Also called as **0-1 knapsack** problem -> Dynamic programming.

> **Greedy** cannot give answer to **0-1 knapsack** problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5df6f462-a76c-4480-8139-75f2fe0fd57e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdfa4dad-422b-49b5-b71f-f6a2f4fadecd)

* Home work.

## Greedy-Techniques-XI (40) [16th May 2023]

* **First step** took **one for loop** which is **n** times.
* **Second step** required **sorting** which took **n * log n** times.
* Taking an object means **two** operations which are **addition** to the **profits** and **substraction** from the **knapsack capacity**.

* **Step three** also requires **one for loop**, which is **n** times.
* **Step three**, **best case** is that we have taken the **obj 1** completely and **capacity** is **full**. Stop it.
* **Step three**, **worst case** is that we have to go till the **last object** and take **some fractions** from it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d780fe7c-7521-4ba4-80f0-43c94f524910)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a268f377-1ecc-49f3-90a7-53ff2350ba9b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c044450a-7a98-45d6-bb2b-91e22612b2c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44c00acb-4af9-4c68-bcfe-08afaa018ffd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2041b71d-ae7f-4730-9b83-3c1178b8e8cb)

* So the **total time** is **n + (n * log n) + n -> O(n * log n)**.

* If asked why doing **knapsack** problem using **Quick sort** worst case, what is the time complexity?

> **n + n ^ 2 + n -> O(n ^ 2)**.

* If asked why doing **knapsack** problem using **Heap sort** worst case, what is the time complexity?

> **n + (n * log n) + n -> O(n * log n)**

* what is the time complexity of a **knapsack** problem if all of the objects are already in the **decreasing** order of **Pi/Wi ratio**?

> **n + n + n -> O(n)**. Since we don't have to do the **sorting** step, time complexity of **step 2** is **O(n)**, as they are **already sorted** as mentioned in the question, we just need **one for loop**.

* If nothing is given and **standard** time complexity of **knapsack** problem is asked?

> O(n * log n).

* If **conditions** are given and then asked for time complexity of **knapsack** problem?

> We cannot use **standard knapsack** problem. We have to design it **differently** as per the **conditions**.

* what is the time complexity of a **knapsack** problem if all of the objects are already in the **increasing** order of **Pi/Wi ratio**?

> **n + n + n -> O(n)**. Since we don't have to do the **sorting** step, time complexity of **step 2** is **O(n)**, as they are **already sorted** as mentioned in the question, we just need **one for loop** and start from the **last** side. Last one is the **bigger** one.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7602f11a-28f6-40ea-a12b-711e39da361b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d7f68a1-f035-4c9c-a9d5-72796db22fe6)

* **n * log n** is the **answer** if **no conditions** are mentioned.
* **Array** means **continuous**, after **index 1**, **index 2**, **index 3** and so on will come. Not index coming in between. **Array** also means **similar**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eba477c7-ace8-466e-ab9e-b35cfbae699a)

* Structure -> Custom datatype.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/972b205f-74ba-4de9-985e-1206ff04e4f0)

* In **Knapsack** we are using only **one array**, but **every element** contains **three(3) parts**. **First part** name is **object**. **Second part** name is **profit**. **Third part** name is **weight**.
* It is called as **structure array**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30deac09-fe32-43e8-96e9-898377c42b72)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3347d20c-9314-40a0-be00-f48573ce09aa)

> **One group** is **6 bytes** as there are **3 integer** numbers each of **2 bytes** and there are **7 groups** in total. Continuously, **7** groups are there.

* What is the time complexity of a knapsack problem, if we use an algo for sorting purpose which will always take **n** time?

> **n + n + n -> 3 * n -> O(n)** is the time complexity of a knapsack problem.

## Job Sequencing With Deadlines

1) Single CPU
2) Arrival time of each job same
3) Running time of each job is 1-unit
4) No-preemption
5) 

* Preemtion -> Forcefully taken out from CPU.
* CPU scheduling -> Only **one cpu** available but **many jobs/process** want that cpu.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a53f6179-e161-4af9-b76d-177da9e9690f)


* Where **preemption** possible?

> **Round Robin**.

* CPU scheduling came because of which reason?

* When 20 jobs are running, then which algo is running?

> **Round Robin**.

* By seeing, **Single CPU**, we understood that, **CPU scheduling** is required because we have only **one or single cpu** and many processes are going on inside the computer.
* **Arrival time of each job same** means that all of the **process** came at the **same time**. So we cannot use **FCFS** as it is **First come First Serve**, so it will not work, as all of the **process** came at the **same time**. **FCFS** has **failed**. 
* **Running time of each job is 1-unit** means every **process** required **1-unit**, so there is **no small and no big**, every process is the **same**.**SJF** means the **smaller** process get **first** chance. So, **SJF** also failed.
* **No-preemption** means **one process** is running on the cpu and in the middle another process came but we cannot stop the already running process on the cpu and run another process. So, **Round Robin** not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d99cc5be-10e4-4b40-8dd0-1627cd445f12)

* All preemptive algo also gone.
* Round Robin is **preemptive** algo.

> Existing algos have **failed**, so we need a new algo which is **Job sequencing with deadlines**.

* n=4, means **4** jobs are there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13b54970-ab16-4a8e-ae6f-5df1273735d0)

* Running time of **each job** is **1 unit**.
* Running time and deadline are **different**, be careful.
* Compared between **running time and deadline**, **deadline** is **more**.
* Running time is **6months** but the deadline is **9 months**.
* Running and deadline time may be **same** but **deadline** time cannot be **less than** running time.

> As there are **4** jobs and every job required **1 month** because of **1 person** there, so **total time** required to complete **4** jobs is **1 + 1 + 1 + 1 -> 4 months**. None can wait **4 months**. To complete **1 job**, **1 month** is required.

> So, for **4** jobs, each taking **1 month**, so the total time is **4 months** and none is waiting for **4 months**. We have to leave some people, whom we will **take** and whom we will **leave**. 

> There is only **1 developer** and **4 jobs** are there and each jobs requires **1 month**. So the total time is **1 * 4 -> 4 months**. None can wait **4 months**. Max they can wait is **2 months**.

* No job will take **more than 1 month**. It is **running time** and not **deadline**.
* No job is **bigger or smaller** as the **running time** for **each job** is **1 month** only. No-preemption is not allowed. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c59e3d5-d70e-47d2-8c61-d0c48d488fd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/221306be-c3a1-4059-bdac-a5d8a90bd59a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85dfa8c6-853b-42d8-88eb-be935a854fd6)

* If we don't cross **deadline** then it is **feasible** solution.
* Deadline is **2 months** means we can **complete in first month**, **YES**, can we complete it in **second month**, **YES**, **3months** not allowed. More than **2** not allowed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6e5b667-c2fb-4339-901d-5db500724797)

* Sequence is **more important** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8112148-c16b-45e9-b262-c352e6afa014)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50a10811-4046-4344-9849-2da3e94711d8)

* YES

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61d8c86b-79ce-4a35-b5a1-13599df93bc0)

* Optimal solution is **J4, J3** which gives **profit** of **300 + 150 -> 450**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dca4af2-c0ba-46e7-b2d4-1d42230eb532)

* We can do **two** jobs and we have to **arrange properly**. **Less deadline** job do **first** and then do the **more deadline** job in **second**, as the **more deadline** job has **more time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/471bc8af-dc12-4ee2-98e8-2bdbbeb81e5f)

* **9** feasible solutions. Among them, the **best one** is **optimal solution**.
* **J4, J3** is the **optimal solution** with **profit** of **450**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d1fc08c-68a2-4e0f-b056-40311e409324)

* Wait.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6164f790-6d4d-434a-9d60-c3757a46a940)

* From the above problem, expect **two** types of questions. 
1) What is the **max profit**?  [450 answer for the above question]
2) what is the **optimal solution**? [**J4, J3** answer for the above question]

* Sequence is **important**.

* Shortcut method steps:-

1) Go to the problem and see only the **deadline** first. In the **deadline**, which is **bigger/max**? Take an array with **max** slots. Start from the **right** side and see whoever is giving **more profit** take that.
2) From the **rest** of the remaining job, whoever is giving **max profit** take that.


> In **more deadline** we have more **options** we can do it in **first month** or in **second month**. **Less deadline** people begging for **first month**.

> See all the **jobs** and see who are fighting for **first month**. All are fighting but **J2 and J4** are begging.

> If we start from **second month** then we have **less fightining** because **1 month** deadline jobs can't come and only **J1 and J3** are **2 month** deadline jobs. So between **J1 and J3**, whoever is giving **more profit** take that in **second month**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/288ec17b-ce2f-49c5-8d9a-c5835f4e02d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6786c44f-3e67-4535-8577-e76f11564beb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5d72c4d-5d9c-4d32-9c50-a95c5f018b59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f3dca4f-f44f-4f5f-bae8-60c1e67da889)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed7e8074-4e5a-4fe8-a6b4-0b714943bec4)

* Who can come in the **ith** month?

> Those jobs who have **deadlines** as **ith** or **more than** ith month.

* Who can fight for **5th month**?

> The jobs that have **deadlines** as **5th** or **more than** 5th month.

> For the **5th** slot and to find the **correct** job for that **slot** we need **one scan**. So, time complexity is **n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/034d2a3f-156e-4f29-a499-efceff23d3ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c72a62a-075a-4614-8d18-754a3a8d16bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1ae5f63-14a7-4ca2-9a6d-a496a330ff03)
 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69d182cd-8b19-4c8f-a90e-76b725750540)

* YES

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc7c4f5e-fd1a-457f-b7d3-c0b5c0198179)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ceb41539-2025-4dea-94bf-0f08ea1d8796)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57d5153a-6755-4c02-bbd6-9d48267a8bbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4706e333-e8b2-4762-ad10-b8aa92be4ef8)

* It is not **n** everytime, it is **decreasing by 1** as we are taking/selecting **one job** everytime. Approximately we are taking as **n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a3ab6d0-b7d1-457f-8c18-6bab06f2deb1)

> For every slot, time is approximately **n** and we have **n** slots. 

* Time complexity -> **n * n -> O(n ^ 2)**.

> In the **next question** so change in **time complexity** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d32e4e0-0f25-4328-9a87-257269a2af05)

* What jobs we were unable to finish or what are the jobs that are **left out**? [Same Question]

> **J5 and J6**.

* What is the **penalty** or what is the amount of **profit** we **lost**? [Same Question]

> **J5 is 70** and **J6 is 180**. So, **70 + 180 -> 250**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/408f2535-d448-48a3-852e-ebfe717799a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fc4652b-44d6-46fb-8691-520c7fa31eb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6637a0a7-7b25-4e89-ae7d-a1d228da3511)

> Ever though **J1** has **less deadline** it came in the **answer** because **J1** has the **highest/max profit** when we came for **first month** slot.

* Who is the **less or least profit** job?

> **J5**. 

> **J5** has a deadline of **5** units. Even though it has **more deadline** it didn't came in the **answer** because there is **J3** with same deadline of **5** units but **J3** has **more profit** has **J5**. That's **J5** was not taken.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65fece9b-cd43-45e0-a1c2-6d801a92600e)

> **J5** has a deadline of **5** units. If **J3** had deadline of **4** units, then **J5** would have been came to the **answer** as there was no one **fightining** with **J5** for **5th month slot**.

* There is only **one array** called as the **structure array**. Structure means **group**. Every element has **group of data**. Every group contain **3 people**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c276bf91-5eda-4baf-a835-ef5b68d5fec9)

* Steps to solve the above problem:

1) Arrange all jobs in **decreasing order** of **profits**. We are **sorting** using **merge sort** so the time is **O(n * log n)**.
2) Now do whatever we were doing **previously** on the **sorted** array.

> Without **sorting** for **each slot** the time was **n** as we were applying **linear search** and it is for **every case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/664b9b7c-8808-44ed-9603-167dd152bdcc)

> With **sorting** for **each slot** the **min** time is **constant or O(1)**, first case can match which is the **best case**. The worst case is **n** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d592c417-861b-45ee-8a59-d89469c30b3c)

* No one fightining for **6th month**. The jobs who have deadline of **6 or more than 6** can fight for **6th month** slot.

* **Right people** can **move** to **left side** but **left people** cannot move to right side.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40d10685-5914-43a5-afc9-4b7e89e45e58)

* We went to the **last place** very less time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/453b5092-a849-478f-9ea2-9be7a047b779)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8221a3ac-d4df-4a2c-9802-45b2e57c25c2)

* More deadline people we can do before?

> **YES**.

* Less deadline people we can do after?

> **NO**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a824ef2f-f578-42a7-b165-ec48c167727c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdc433b1-f3f2-4a90-a9ae-70fad05a4213)

* Every slot is **n** times for **worst case**. We have **n** elements so, time is **n * n -> n^2**.
* Every slot is **constant or O(1)** for **best case**. We have **n** elements so, time is **n * 1 -> n**
* The time for **sorting** is **n * log n**.

* Time complexity for **worst case** -> **n ^ 2 + (n * log n) -> O(n ^ 2)**.
* Time complexity for **best case** -> **n + (n * log n) -> O(n * log n)**.
* Average case not needed. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c40e3bbe-e44b-4edb-94dd-e37e76bd509b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef166b05-d20f-47a7-987c-ff40fa37aa15)

* We started filling the **jobs** from the **right to left** side.
* If we start filling the **jobs** from the **left** side then **all/everyone** of the jobs will be **fighting** for the **first month** slot.

* By starting from **right to left side** there are **two** advantages:

1) Less comparisions.
2) **More deadline** people are **giving change** to **less deadline** people.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf832d58-3e06-464a-9520-80cb4a139da4)

> **Gap** is at **6th or 7th** place, simply read the sequence, no one will ask for **gap** and all.

* J2 -> 3 [Deadlines]
* J8 -> 3 [Deadlines]
* J1 -> 5 [Deadlines]
* J4 -> 4 [Deadlines]

> **Swapping** is possible between **J4 and J1** as they have **5 and 4** units of **deadline**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8804142a-f299-41ff-8b9b-a60fbbee9c74)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c12867b-11de-4188-a356-a63490eff2a3)

> **J5** has **6** deadline and **J1** has **4** deadline. **J5** can definitely go to **J1's** place but **J1** cannot go because it is **4** units and it is between **1 to 4** and for **J5** it is **6** so it is between **1 and 6**.

* If **both** agree then only **swapping** possible, otherwise **no swapping** possible. If **one person** doesn't agree then don't do **swapping**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bda9de06-5119-40ee-8b44-8efecaf3f241)

* If the **answer** what we got is not there in the **options** then some **swapping** maybe done.
* If more jobs are given then don't do **directly**, first do **sorting**, it will reduce significant amount of time to find the **answer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/962133ac-efd5-4f7b-b40f-66a89b2d3bf0)

> After **sorting**, instead of **linear search**, do **binary search** but we cannot do **binary search** because **sorting** done on **profit** and **searching** is done on **deadlines**, we have two **different** parameters that's why **binary search** not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97a43292-3c8f-4d45-bcef-6c472da8b4df)

* True.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64d254e7-319d-4939-a0b2-ea584626269c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d341717-0e7d-4420-889f-6034e30a2dd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/242a59df-c750-4cb1-aa3c-0114cc2d39e7)

* Yes, that is the **best case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/672ef392-eafd-4f9b-be3f-8734778da964)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3da83ae3-e04e-429c-a48c-774a01dae955)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5655e87-f329-4efe-8ff8-911c277d1d69)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/683b519a-aa6d-4c52-a3e5-d2ea002b5e5b)


## Greedy-Techniques-XII (41) [16th May 2023]

## Huffman Coding

1) Data Encoding Technique
2) Data Compression Technique

> One message(m) going from **sender(S)** to **receiver(D)**. The **message size** is **100 characters**. The **distinct characters** are **6** only.

* Some characters are **repeating** they are called as **frequency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcdb27e3-4c31-40f5-868f-0ec52f5fa113)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6126a584-42b1-4f2b-93ac-9a19d43935b0)

* In ASCII format/representation, for every **character** it is **8 bits**. So **100 characters** is **8 * 100 -> 800 bits**.
* 1-character, how many bits?

> **800/100 -> 8bits** per **character**. It is also called as **average no. of bits**.

* Without **huffman coding** we have to send **800 bits**.
* With **huffman coding** we have to send maybe **300 bits**. It is a **data compression technique**.

* Can you compress?

* How many **distinct characters** we have?

> **6** there.

* For **6** people to give **different** numbers, how many **bits** required?

> **3** bits required. With **3 bits** we can have **8** possibilities, which are from **0 to 7**.

> So, for **6** people to give **different** numbers, **3** bits are more than enough.
 
> Now for **100** characters, we require **300 bits**.
> So for **1** character or **on average**, we require **3 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/763516d9-81fe-4250-84a0-c456a1c9ed68)

* Huffman coding **purpose** is **data compression** and **data encoding**. **800** bits is **compressed** to **300** bits, that is **data compression**.

> We will require to represent **a** with **8 bits** when we have **2^8= 256** distinct characters.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d33854af-2c03-472d-a6ab-58ed3a4db0b9)

> We are not sending **a** as **a** but in **some other** format, which is **a=000**. That is called as **data encoding**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4998eec1-4d43-47b8-b32b-ea91f6ff6465)

* In computer, to represent **a**, how many **bits**?

> **8 bits**, because in computer's keyboard there are **many characters**.

> For the **above problem**, we have only **6** distinct characters, so **2 ^ 3 >= 6**, that's why **3** bits is more than enough for **6** distinct characters.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eed1edbe-23fb-4bab-b6aa-a622b7ea1b17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d5c0f81-8b62-43fb-bc5d-ed27368b8e76)

* Can we compress further? [Direct approach] [Huffman Coding]

* **Huffman Coding** points:

1) It is **non-uniform**. If it is **more frequency** then give **less bits**. The **side-effect** is that with **less frequency** then give **more bits**.
2) In all of the **distinct** elements who is the **first minimum**? It is **C** as **C=1**. Take **second min**. Take the these **two** mins. first. **Add** them up and we got **1 + 2 = 3**. Whatever result came, keep that **inside**. So, now it is **5** people from the **6** people we **initially** had.

> Do the above story again, take the **first two minimums** from the **available people**. Check that the **first min** is always on the **left** and the **next min** is on the **right**. Now, **add** and we got **3 + 5 =8**. Keep the result **inside**.

> Do the above story again, take the **first two minimums** from the **available people**. Check that the **first min** is always on the **left** and the **next min** is on the **right**. Now, **add** and we got **8 + 17 =25**. Keep the result **inside**.

> Do the above story again, take the **first two minimums** from the **available people**. Check that the **first min** is always on the **left** and the **next min** is on the **right**. Now, **add** and we got **25 + 30 =55**. Keep the result **inside**.

> Do the above story again, take the **first two minimums** from the **available people**. Check that the **first min** is always on the **left** and the **next min** is on the **right**. Now, **add** and we got **45 + 55 =100**. Keep the result **inside**.

> After **tree** construction is over, go to the **top** of the tree, **left side** person keep **zero(0)** and **right side** person keep **one(1)**. It means that the **left** is labelled with **zero(0)** and **right** is labelled with **one(1)** 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/843e0f72-9bb9-494f-9e10-24fb9119df9d)


> So, the total is **100**. The tree with **red** color is **Huffman coding**. The **tree** is called as **Huffman encoded tree**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ab24f00-e7eb-4617-85d3-3ee5a11b12cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dedf068b-1938-404b-b2ab-69f754e1b9cf)

> Huffman coding purpose is data encoding and data compression. They are do by **non-uniform** coding. **Non-uniform** means **more frequency** then give **less bits** and the **side-effect** is that with **less frequency** then give **more bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3398703-3625-4d21-b570-8482bcb6b87d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3aac8973-f2a9-4775-b5c1-a7e7b1617b64)

* **Huffman coding** directly approach. Do this part only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d8cd543-690a-4d7b-be78-12b262fcc387)

* In exam, if asked that assume in **Huffman coding** that the left is **1** and right is **0**, assume that only. Whatever said in the question, assume that only.

* If nothing mentioned then do like **above**, left is **0** and right is **1**.

> We have to find out the **paths** in the tree, required to reach the **characters** from the **top/root**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abdfd11f-fc95-46cf-9a5e-d6d1208c529d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bb8ee35-cdd0-489f-b6d1-fc81cb1d23f9)

* Like these give the **codes** to the **characters**.

* In the **above** tree who is the **bottom**?

> **C and B** because they are **first two min**.

> The **two mins** are at the **bottom**.

* The **min** people are at the **bottom**.
* The **max** people are close to the **root/top**.

> As the **min** elements are at the **bottom** and so far away from the **root**. We are starting from the **root**, when writing **codes** for the **characters**, that why **min** elements are getting **more codes**.

> As the **max** elements are at the **root/top** and they are close to the **root**. We are starting from the **root**, when writing **codes** for the **characters**, that why **max** elements are getting **less codes**.

* If we want to do **reverse** which means **more frequency -> more bits** and **less frequency -> less bits** required?

> While **construction** tree instead of taking **two min**, now take **two max**. Close to **root** is **min elements** and they will get **less bits** and at the **bottom** are **max elements** which will get **more bits**.


* Steps of **Huffman coding**:-

1) Take **two** min, take **two** min and so on. Lastly **max people** close to **root** and **min people** at the **bottom**. Take **two mins** everytime and **construct** a tree.
2) Code is from **top**, whoever is at the **top** has **less bits**.
3) After tree construction is done, give **left side** labelled as **zero(0)** and on the **right side** label it as **one(1)**. **OR** do whatever is mentioned in the **question** do that.
4) Start from **root** and every **character** name is **leaf node**. From the **root**, until the **leaf node** come what **labels** we have to **read**. Write every code.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c8c5882-b9f5-4b38-8e67-4d6aad3636e7)

* **191** bits is for **100** characters.
* For **1** character or **on average**, it is **191/100 -> 1.91** bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45ba530f-f627-46d2-ad40-dde3f018e445)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c16b26e8-3f0c-4c9c-92f5-a38b8e4717cd)

> We cannot do less than **huffman coding**, because **less than this** will cause **data damage**.

> The **more frequency** will have **less bits** and the **less frequency** will have **more bits**, but there will be **no problem** as the **show** is run by the, **more frequency** will have **less bits** people.

* **Two** expected questions from **huffman coding**.

1) What is the **average** no. of **bits** per character? [1.91 bits per character, as in the above question]
2) What is the **Huffman code** for **every character**? [The characters when coded]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7547026-f20f-45c8-9416-5846e8c551c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/353c42da-fe3d-4a4b-8b8b-cb0d65cd9c11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1e70033-d8f3-4644-92bb-7c5c178960ff)

* Build heap takes **O(n)** times.
* We are constructing **min-heap** because algo saying take **two min** everytime.
* We are creating **min-heap** using **build heap**. 
* One deletiong taking **log n** time.
* One insertion taking **log n** time.
* Everytime **2 people** going out and **1 person** coming in. So, total is **log n + log n + log n -> 3 * log n**. So, everytime it is **3 * log n**.
* Everytime **one person** is **missing**.
* Taking **min** from **normal array** is **n** times but taking **min** from **min heap array representation** is **log n** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91309f3a-02d6-43a0-8a07-977bb6269509)

* Only **one** left, so **stop it**.
* For **7** people to make into **1** people, we need **6** rounds.
* For **10** people to make into **1** people, we need **9** rounds.
* For **n** people to make into **1** people, we need **n-1** rounds.
* Every round time is **3 * log n**.
* Time complexity of **Huffman coding** -> **n + n * log n -> n * log n**.

 [Class ended in the middle only]

## Dynamic Programming-IX (42) [16th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c95ff68-9cfa-44ca-afcf-7d441e83961a)

* Answer of **previous class question**.

* If we want **min** everytime, then go for **min-heap**.
* Creating **min-heap** using **build heap** for **n** elements is **n** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d2dba65-5f3e-4f51-809f-3e2a49c326dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c0fd5e2-d4d0-498d-9cf3-072a7ada12df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a65e7b2-7d8f-491a-b794-1a668c93cfbc)

* Time complexity of **Huffman coding** -> **n + (n -1) * (3 * log n) -> O(n * log n)**.
* Time complexity of **Huffman coding** -> **O(n * log n)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39d162b3-cf7a-4a6f-80f3-20b49c04ba65)

> **log n** is given by only **three** people, **min-heap, max-heap and binary search**.

> **Binary search** and **Hauffman** have **no relation**, so the **log n** came from **min-heap** only.

* If we don't use **min-heap** and instead use **normal array** then the **time complexity** will be **O(n ^ 2)**.

* What is the **Hauffman** code for **every character**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65e87c75-6a38-4a1a-91ae-7be3b417ee7c)

> The tree we have created finally, it is the **Hauffman encoded tree** and not **min-heap**. To create the tree we are using **min-heap**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd911d7d-96f7-4c29-aa26-dc60bec4518f)

* Almost balanced tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d73ecb9-dc0b-436a-af0d-a040413af776)

* Encoded message is : 1011100100101000100111100, Find the **decoded** message?

> Start reading the **encoded message** from **left to right**.

* The **Huffman encoded tree** is with the **sender or receiver**?

> **Sender or receiver** doesn't matter. Team created it. On both the **sender and receiver**, **same** tree is there. So, it is seen by **both** the **sender and receiver** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecffa4fc-7d1e-45f0-98be-aee791169c88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66973705-77f8-4102-b5db-9f4c4d91cc17)

* Time Complexity -> **O(n * log n)**.

> **Log n** came from **min heap**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edb7a18c-7a5f-4035-88da-663f69f33dbb)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6103ea5-e028-4b78-9f64-ad9ce08ce1d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ad67a0d-7311-4e3c-a56e-bf57bda9251a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2422c7a-a691-4ab0-86c6-cb4f319d6e78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff7bd392-814c-40a0-8138-5fcbc1887d1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a83ba580-a2f0-4773-a6e0-2046d106121b)


## Optimal Merge Pattern

* **Files** is nothing but **collection of records**. **Every record** is written in some **format** only. If written **randomly** then **searching** is very difficult.
* We have **3 files** which are **x, y and z**.
* We are trying to **merge** the **3 files** into **one file**.
* Merging **two** files of **80 and 100** records, what is the **best case** for comparisions?

> **80** comparisions because all the elements moved from the **smaller** files.

* Merging **two** files of **80 and 100** records, what is the **worst case** for comparisions?

> **80 + 100 -1 -> 179** comparisions every element of one file is compared with another element of different files.

* How many moves?

> **80 + 100 -> 180**. Moves are **same** for **every case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/635d59f9-460c-4d08-9a49-1efdae0f6514)

> Finally we got **1 single file** with all of the records.
* **Merging** is **done properly** or **meaningfully**.

> To construct the **diagram**, we did in total of **2 mergings**. 

> When we did the **first merging**, then **total no. of moves** is **80 + 100 -> 180**.

> When we did the **second merging**, then **total no. of moves** is **180 + 60 -> 240**.

* So the **total moves** is **180 + 240 -> 420** moves.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bb26d6b-d158-4b9c-bad3-ff88988fcaba)

* Three different files become one single file, it is done using **420** moves.

> We did **merging** of x and y files **first**. Then with the **result of x and y**, we **merged** it with 'z' file.

> Not only **merging** but in which **order** we are **merging** that also matters.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dca6a4ee-a6f4-493a-96a4-2ee5a55bfbe7)

> All of them will **merge** the three files into **one file**.

> **m3** is taking the **least/less no. of moves** to **merge** the three files into **one file**. That's why **m3** is called as the **optimal merge pattern**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7153f44-bc0e-4b74-a2a8-47f1d99b47ce)

> Three different files to **merge** into **one file**. There are so **many ways**. Whichever one having **less moves**, that is the **best optimal merge pattern**.

* In terms of **profit** we have to see **more** and in terms of **cost** we have to see **less**. If **moves** are less then **less cost**.

> In profit's point of view, optimal means **more profit** but in **cost** point of view, optimal means **less cost**.

> The **above one** is a **two-way merge pattern** because we are taking **two** files at a time to **merge**.

> For **three-way merge pattern** we would be taking **three** files at a time to **merge**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69ba9acf-30ae-459e-86ae-275d6c260dc8)

> To **merge** given **3 files** into **single file**, we have **three** merge patterns **m1, m2 and m3**. Out of them **m3** is the **optimal merge pattern** because **less moves**.

> This is the **brute** force approach.

* Greedy Apporach:-

> Take **first two mins** everytime. We want **min** everytime, that's why we are going to use **min-heap**. We will use like **exact previous** we did in **Hauffman** coding examples.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69f44332-7623-4699-96c1-c37519219ec4)

> In **optimal merge pattern** we just need to **draw** the tree and we got the **answer**. We don't need to do the **codes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d75c79b-2b1e-4df9-8996-674a5ba69503)

* Time Complexity -> **n + (n-1) * (3 * log n) -> O(n * log n)**.
* Building the **min-heap** took **n** time.
* **Two deletion and one insertion** is taking **3 * log n** time.
* We are going for or looping for **n-1** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bd7441e-92fd-41e4-9f1c-98e1904f7123)

* The tree is called as **2-way optimal merge tree**.

> The **70** came after **merging, B =60 and F =40**. **70** is a **non-leaf** node.

* So **70** came after **merging** and it is a **non-leaf** node.
* So, **non-leaf** node is a node which we got after **merging**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e40e34dc-991b-4986-a328-3cd7c43549ad)

* What is the **sum** of **internal nodes or non-leaf nodes**? [Same thing]

> **70 + 115 + 145 + 169 + 260 + 429 -> 1188**. This is the **min** moves.

* **Min** no. of moves =(equals to) **Sum** of **internal nodes or non-leaf nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8534aeb3-b738-4076-bcc5-76aa6a9cc01e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4133de5e-f1ca-4618-89cc-abd9b5865e58)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bc02516-9f09-4a79-bd84-168467331577)

* We are not doing **merging** here. After **merging** how many files, we are just calculating the **moves**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5f6d5a-8e60-4212-9d5a-4434a655a0df)

> **Non leaf nodes** came **after merging**, which means **moves**.

> We are using **merging** and not doing **merging**, because elements not there. Simply calculating **how many moves**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27173d6a-a57a-41b0-aac9-614467784c16)

* We have to count the **no. of moves** in the **last one** or in all of them?

> We have to **count** for **all of them**. **429** is the **no. of moves** in the last one, but **1188** is the **total no. of moves** from all of them.

* We have to **count** all of the **merging moves** and not the **last one**.

* No. of merging is **6** times and we have in total of **7** people.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab993851-3f78-4865-a5a5-99318a30d0ab)

* If asked for **3-way merging** then take **3 min elements** at a time for **merging**.
* Unless asked for **3-way merging**, don't do it. Do **2-way merging** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9bab35d-3bb6-4558-8994-dc7e36466030)

## Minimum Cost Spanning Tree (MCST) [**IMPORTANT**]

* Graph 'G' is a combination of **vertices(V) and edges(E)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34bb1092-9df4-4876-b5a3-857c2dfa8c7a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5340ebcc-41d4-4364-a470-5009d3106cc0)

* e1 = AB
* e2 = BC

> There is **no starting** point in the **graph**, as it is not a machine. We can **start** from **anywhere**.

> When we say a **tree** there is a **starting** point called as **root**.

> In a **C-program**, the starting point is the **main()**.

> **Programs** should have a **root**.

> Whenever it is not a program, it has **no root**.

> From **A to B** there is an edge(e1), which means there is a **road** there. When **road** is there and to go from **A to B**, there is some **cost**, that **cost** is called as **edge weight**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbea34cc-aba7-4ded-bd78-7f96239d5d9d)

* If **no edge weight** there then it is called as **un-weighted** graphs.
* If **edge weight** there then it is called as **weighted** graphs.

> These **two** graphs are only possible, **mixed** is not possible.

* If we give **direction** to the **edges** then they are called as **directed graphs**.

> **D to C** we can go but **C to D** we cannot go.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/340b65f5-d507-4410-90aa-e579953b1bee)

* If **directions and weights** both are there, then it is called as **directed weighted graph**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bcac434-6132-410c-b3d8-7b4a860aa219)

* No **mixture** possible. 

> If out of all the **edges**, one of the edges, doesn't have weight for **some reason** then **by default** assume **1** weight for tha edge. It will not happen but just in case.

> If **directions** not there, then we can go **both** the sides, **YES**. It is the meaning of **un-directed** graph.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6808055a-869e-4b33-9499-2a9438bcedf3)

* No self loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e1508f5-c322-4d5c-8f75-6ef4202081c2)

* Self loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb44e8a2-0bb0-45af-aee8-edf1ce0d55e2)

* Parallel edges and not parallel paths.

* If a graph contains a **self loop or Parallel edges or both**, then that graph is called as **multi** graph.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c99b742-0c1a-400c-a52c-99df6229c078)

* Simple Graph -> In the given graph, no self loop and no parallel edge, both cannot be there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e495ccce-afee-4b53-9251-06dcf5630ad8)

> We will only **discuss** about **simple graph**.

> Multi graph has **4** vertices and **infinite** edges. As **Multi graph** has **infinite** edges, so **no questions** will be asked from **Multi graph**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5aff386-33cb-4295-9868-2c6016442dcf)

* How many people are **associated** with vertice A?

> **2** people **associated**, because there is an **edge** between them. So it is called as **degree of A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a3ae8f6-497e-4101-89bc-096b1ea60c92)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bec68f3c-ffa4-4aec-93cf-b6671bac1303)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc2ed4c3-ece4-49be-a6fe-3fd05ee9a3cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91ddd968-e754-486c-beb7-046d0cb94d23)































 



## Sorting Algorithms

* Link -> https://unacademy.com/class/sorting-algorithms/V5GBW26Y


## Waiting for newer videos

* Link -> https://unacademy.com/course/complete-course-on-algorithms-gate/K8EKOMCE

* Counting no. of Inversions(DONE)
* Selection Procedure(DONE)

* Started from -> https://unacademy.com/class/heap-sort-ii/KAUOV2FP (Heap-sort-II)


# Practice Videos (27th April 2023)

* Video 1 -> https://unacademy.com/class/algo-practice-class/7THGBZDH

![image](https://user-images.githubusercontent.com/54589605/234853417-e669a0b7-d9be-44b4-a5e0-2a36673a53c2.png)
![image](https://user-images.githubusercontent.com/54589605/234853698-bd0014ff-46e9-40e7-bbdf-1de7ad565114.png)
![image](https://user-images.githubusercontent.com/54589605/234854938-ea1c37a3-d859-45ec-b208-6575eee2136f.png)
![image](https://user-images.githubusercontent.com/54589605/234854964-1a82df9d-4697-4455-bb9d-68e7f142b7ff.png)
![image](https://user-images.githubusercontent.com/54589605/234855044-7c56e6c0-4692-41b2-ae0e-f408def16721.png)
![image](https://user-images.githubusercontent.com/54589605/234856190-b20b8022-592c-44ca-84fe-019376de2c0c.png)
![image](https://user-images.githubusercontent.com/54589605/234856332-14f82fc0-4d7b-431e-8f5e-46fc25dc9317.png)
![image](https://user-images.githubusercontent.com/54589605/234856402-77f82ea8-4179-44c3-8b8c-296edb426c07.png)

* Asymptotically equal. All are **correct**.

![image](https://user-images.githubusercontent.com/54589605/234856643-82c3285d-1d30-460f-adf7-f927a272114e.png)
![image](https://user-images.githubusercontent.com/54589605/234856712-eeefa6bd-8952-47e3-8589-216a2e9aeeee.png)

![image](https://user-images.githubusercontent.com/54589605/234860633-1546e7d0-1d29-41ff-bb4b-25bfc1a05811.png)
![image](https://user-images.githubusercontent.com/54589605/234860419-6e3e1f7c-b1ab-45ba-8aa6-de716c04770c.png)
![image](https://user-images.githubusercontent.com/54589605/234860461-aaf98de4-3d7e-4fa5-8180-52240dcb25b1.png)

* Condition is on **i** only.

![image](https://user-images.githubusercontent.com/54589605/234860977-3ec1c234-bb7a-4060-986e-40b5baac02e1.png)
![image](https://user-images.githubusercontent.com/54589605/234861169-d8ac0f48-80a7-433a-9344-96c1c837c2e4.png)

## GP series formula [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/234861705-2e2b5a1b-3c0a-4d70-b9d5-84c555bd5748.png)
![image](https://user-images.githubusercontent.com/54589605/234861859-aa184a8e-fca2-47e6-9afe-12c77c3e99a7.png)

![image](https://user-images.githubusercontent.com/54589605/234862871-743256f9-17ca-45ee-9e6d-26da870e800b.png)

> For **larger n** values, which is **1/(2^(log n))**, the **(2^(log n)** value becomes **infinite**, so, **1/(2^(log n))** becomes **zero(0)** as **1/(infinite)** is **zero(0)**.

![image](https://user-images.githubusercontent.com/54589605/234863186-efd5b290-4479-4a50-9207-b303d282b293.png)
![image](https://user-images.githubusercontent.com/54589605/234863408-ac97ee62-2b3d-414e-b0fc-2aeb78113bd2.png)
![image](https://user-images.githubusercontent.com/54589605/234863640-5cfc9432-c689-451a-aa9d-da12f285ffa7.png)

> There is **no negatives** in the  above **given series**. If we finally got **negative**, then we have **done something** wrong while solving the series.

> If we use the **wrong formulae**, then we will get **negative** as an answer for the series.

* Time Complexity is **O(log n)**

> Since only **i** was there in the **condition**.

* **j** value is **n**.

![image](https://user-images.githubusercontent.com/54589605/234864089-e3a92b6b-1f36-4573-a554-333420c6882a.png)
![image](https://user-images.githubusercontent.com/54589605/234865925-f6faa930-f803-4325-9278-b0e0f2f9f561.png)
![image](https://user-images.githubusercontent.com/54589605/234870341-b33d9ff1-182d-4029-aeba-a624af30f9e2.png)


## Revision

1) Asymptotic Notation and complexities -> Book and practice questions [21st April 2023]



# Practice Questions

* Link -> https://unacademy.com/course/complete-course-on-algorithms-gate/K8EKOMCE

> Every video has **5** practice questions. Do them **regularly**.

* Video 1 -> None given
* Video 2 -> Done [19th April 2023]
* Video 3 -> Done [19th April 2023]

# Doubts

## 1

![1](https://user-images.githubusercontent.com/54589605/233017636-36e65fe8-d0c0-4ef0-948e-d8f9645f247b.png)


## 2

> We are using **log N base 2**, and **base 2**, because we are representing the no. in **binary** form or in **bits** form as asked in the question, they are the **same** thing.

> For representing **15**, in **bits or binary** form, we have to do **log N base 2 -> log 15 base 2**, where **N=15**.

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/4E9F25BC81

![2](https://user-images.githubusercontent.com/54589605/233017799-52346147-d5a1-432c-bfaa-8ddfbd134477.png)
![image](https://user-images.githubusercontent.com/54589605/233018553-b142659f-ee7c-45b2-b0bd-8b007928fc56.png)

## 3

![3](https://user-images.githubusercontent.com/54589605/233019898-38cf80a1-b44e-48e8-a794-312ff2a60fcc.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/E6B3684ACC

> First remove the **common things** then do **log**.

![image](https://user-images.githubusercontent.com/54589605/233023669-91b3d808-5d12-4f28-b7e8-6331db6c93c1.png)


## 4

* a^(log b base a) = b [**IMPORTANT FORMULAE**]

![image](https://user-images.githubusercontent.com/54589605/233021203-b25194ef-9fa5-435f-846b-935fc93733b8.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/3F80718DC8
* Solution -> https://unacademy.com/goal/gate-cs-it/NVLIA/practice/PQQFK?topic_type=2&topic_group=PQQFK&type=4&quiz_uid=NXB8YCHZX9&educator_name=Subbarao+Lingamgunta&source=Course

![image](https://user-images.githubusercontent.com/54589605/233022141-167e45cd-7b2e-471e-aef3-5ed97a89ad96.png)
![image](https://user-images.githubusercontent.com/54589605/233022187-04dbc2c1-67b2-48a6-92cb-7483728d2784.png)

* **Solved**. Solutions available. 

## 5

![image](https://user-images.githubusercontent.com/54589605/233143309-53f64a98-8648-4d74-ada3-5f47fee34cff.png)
![image](https://user-images.githubusercontent.com/54589605/233143371-142812a5-a42e-40d2-bcb4-6df6e8e076b0.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B09B352AC7

* Different question solution below

![image](https://user-images.githubusercontent.com/54589605/233364266-c051146e-4cca-47f1-9875-c52c691b9e59.png)
![image](https://user-images.githubusercontent.com/54589605/233364606-b78cf1a4-5d6e-495c-a84a-73533fee75d3.png)

* **Solved**. Solutions available.

## 6

![image](https://user-images.githubusercontent.com/54589605/233268478-2bd7e8f7-3837-4c1f-a1ae-6faf33493519.png)
![image](https://user-images.githubusercontent.com/54589605/233268940-1c71cf55-13ca-4ede-9534-0e147445a75f.png)

> **n** increases, value increases, **increasing function**.

> **n** increases, value decreases, **decreasing function**.

> Option **B** is **True** for **increasing function**. **False** for **decreasing function**.

![image](https://user-images.githubusercontent.com/54589605/233268817-7507759a-bb8e-4fdc-88e1-aaf3635dfda4.png)

> Time complexity is not mentioned in the question. Asymptotic notation does not bother about **constants**.

![image](https://user-images.githubusercontent.com/54589605/233269230-67da1031-a388-4765-9c69-d5891cde532c.png)
![image](https://user-images.githubusercontent.com/54589605/233269385-465bd05a-8122-443f-868f-1c9eb7726af3.png)

* YES.

> **Big-O, omega and theta** are applicable for **anything**.

















