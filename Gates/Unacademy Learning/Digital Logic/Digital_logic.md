# Digital Logic

## Syllabus

![Syllabus_digital_logic](https://user-images.githubusercontent.com/54589605/217532135-629c69a3-b257-4d8a-b774-9af54c34a2d7.png)

![Syllabus](https://user-images.githubusercontent.com/54589605/217532198-c150945c-b55a-499b-80e9-2867d26d8b59.png)
![Syllabus_1](https://user-images.githubusercontent.com/54589605/217532206-929ca025-1624-4dc3-af6e-5892edcaae7f.png)
![Syllabus_2](https://user-images.githubusercontent.com/54589605/217532211-ef780ef4-0c6a-4ef3-af08-3c2c1e994028.png)


## Playlist

* Link (Sanchit Jain sir) -> https://unacademy.com/course/complete-course-on-digital-electronics-gate-2023/6CA5DFM1
* Link(BV Reddy Sir) -> https://unacademy.com/course/comprehensive-course-on-digital-logic-design-20232024-983/SCBXF3JE

## Resources

* Link -> https://bvreddysir.blogspot.com/2022/01/comprehensive-course-on-digital-20232024.html

* Digital Assignments and DPP Discussions -> https://bvreddysir.blogspot.com/2021/10/digital-dppsdiscussion-s.html

* Digital DPP_1 -> https://drive.google.com/file/d/1ZFbNWRYXc9BFPfk3tE7Y7Rtn0yHjUpp6/view

    1) Boolean Algebra(1-60) -> https://unacademy.com/class/practice-course-on-digital-circuits-1/HNMD92L8

## Revision

1) Revise from 7th to 14th Feb

## Introduction (1) [7th Feb 2023]

* We have to convert the analog signal into digital form and again digital signal is converted to analog form.

### Analog Signal

> If we take any point at value in **time(t)**, we have an amplitude like signal. This type of signal is **analog signal**.
> **Amplitude** of a signal is the **strength/energy** of a signal. **y-axis** parameter is called as the **amplitude**.

![1_Analog_signal](https://user-images.githubusercontent.com/54589605/217532268-66f9f38e-3cab-4cea-8a44-20becc28886e.png)

![2_Amplitude](https://user-images.githubusercontent.com/54589605/217532315-b51c7960-d0fc-4e73-8308-7d5f30698694.png)


### Digital Signal

> If the digital signals takes only **two possible amplitudes**, then it is called as **Binary Digital Signal**. Eg: *Yes:No*, *0:1*. Two possibilities only like these. 

* At **input location** we should do **analog to digital** and at the **output location** we should do **digital to analog** conversion takes place for any device.
* For off all, we have to convert the **analog to digital** form then only out computers/systems are able to process/understand it. **All processes** can be done with **digital** signals only. But to understand the signals first of all, we need to convert the **analog signal to digital** form.

> We are using the 2's values now which are **0 and 1** only.
> All **analog systems** are replaced with **digital systems** but before that, we have to convert the **analog** to **digital form**.

## Logic Systems

> Here, the beauty of the system is that we don't want exact value. We just have to say **High or Low** i.e **1 or 0** that is enough for us.

### Positive logic system

> We have to compare the given **two** values and whichever is **high** is the **Logic '1'** and whichever is **low** is the **Logic '0'**.

![image](https://user-images.githubusercontent.com/54589605/217535862-a35e95c5-a4ed-4d4d-96bd-f3a635918b0c.png)
![image](https://user-images.githubusercontent.com/54589605/217535897-6e328de6-6681-4db9-8031-ce90cfb15587.png)


### Negative logic system

> We have to compare the given **two** values and whichever is **high** is the **Logic '0'** and whichever is **low** is the **Logic '1'**.

![image](https://user-images.githubusercontent.com/54589605/217535929-e2c1eb18-f38c-4470-913d-e1214f47b71d.png)
![image](https://user-images.githubusercontent.com/54589605/217535969-aa7729f6-6143-418f-98ae-1557997e6188.png)


![image](https://user-images.githubusercontent.com/54589605/217536036-82b31678-7ad0-4d5e-85dc-cf43c6057e2e.png)


## Duality

> To convert a **Positive logic system** into a **Negative logic system** we use the concept of **duality**.

![image](https://user-images.githubusercontent.com/54589605/217536101-428e83b2-b54e-498e-8876-f6c8777c06f7.png)
![image](https://user-images.githubusercontent.com/54589605/217536174-a33a883d-a5b9-4d7c-a218-ec75ff333256.png)

### Examples

![image](https://user-images.githubusercontent.com/54589605/217536318-a3ba1cb9-1bd9-43fa-8f20-eb8aab265a59.png)


### Priority

* Bracket() > AND gate(*) > OR gate(+)

![image](https://user-images.githubusercontent.com/54589605/217536208-ff7cf8be-6ee3-4eb7-9518-bb1bc47c6f52.png)


## Boolean Algebra

> It is an analysis tool.

![3_Boolean_Algebra](https://user-images.githubusercontent.com/54589605/217532357-638df755-875c-4175-b93d-3d204c8f9ea8.png)
![image](https://user-images.githubusercontent.com/54589605/217536416-b7e231fb-0fb0-466e-b95c-0fd33e3887f5.png)


### OR-operator

> If we **add** anything with **1** (A + 1 -> 1), we will get **1** only.

* **(1 + Anything) -> 1**

## Law of Boolean Algebra

![image](https://user-images.githubusercontent.com/54589605/217536603-582b6b3a-b2b8-4556-94be-f7c6eeec6a4c.png)
![image](https://user-images.githubusercontent.com/54589605/217536654-9be222c3-b5c0-436c-b0f1-946386de470d.png)
![image](https://user-images.githubusercontent.com/54589605/217536689-347a9b70-9c19-49f7-9aea-6b0da28e325d.png)


### Transposition Theorem(T-1)

* For **T1** to apply the condition is **13 + 24** and when **1 and 3** positions should be **same**. 

![image](https://user-images.githubusercontent.com/54589605/217536755-ef869169-8c67-4403-a6bb-c13ffe323e11.png)


### Transposition Theorem(T-2)

* For **T2** to apply the condition is **14 + 23** and when **1 and 3** positions should be **complement** to each other.

### Summary of T1 and T2.

* If **1 and 3** both are **same** then **T1**. Steps are different **13 + 24*.
* If **1 and 3** both are **complement** to each other then **T2**. Steps are **14 + 23*.

![image](https://user-images.githubusercontent.com/54589605/217536846-97f0c1b0-846d-41d7-8e0f-fbf2a926bb27.png)

### Questions

![image](https://user-images.githubusercontent.com/54589605/217536966-1eb0b01c-c403-41f1-9b9e-44fd90484dfb.png)
![image](https://user-images.githubusercontent.com/54589605/217537021-64ec6141-5afc-4396-94df-8ff5ab8d21a3.png)
![image](https://user-images.githubusercontent.com/54589605/217537073-4d7bf3a7-3855-45e7-867a-93ad076331c3.png)
![image](https://user-images.githubusercontent.com/54589605/217537136-687891c2-8215-4db6-a6ee-1294ffefcbae.png)
![image](https://user-images.githubusercontent.com/54589605/217537249-b4b3daec-866d-4690-99c3-997aca670c86.png)
![image](https://user-images.githubusercontent.com/54589605/217537304-ff81a4c0-44d1-4a80-891e-c0fc6478ebca.png)
![image](https://user-images.githubusercontent.com/54589605/217537341-d49f0b6f-2857-4a1f-93a3-d65760fef123.png)

![Questions_1](https://user-images.githubusercontent.com/54589605/217540434-f792b296-cacc-490f-92f8-0aa55ea377d2.jpeg)
![Questions_2](https://user-images.githubusercontent.com/54589605/217540445-ba98924a-f30c-4e4b-9e6f-69756b2036ca.jpeg)
![Questions_3](https://user-images.githubusercontent.com/54589605/217540450-d333b628-6911-4dbc-9d71-ef7608a98cf7.jpeg)
![Boolean_Algebra_2](https://user-images.githubusercontent.com/54589605/218042970-55ebef07-c83c-4e78-a77a-535affc17d33.jpeg)



## Boolean_Algebra_II (2) [10th Feb 2023]

### Complement

### Find Complement **trick**.

![2_complement_trick](https://user-images.githubusercontent.com/54589605/218246061-4196510c-6582-45b5-af15-f7530090cb39.png)

f -> Initial expression
fd -> **Duality** of the Initial expression
f` `-> Complement of the Initial expression (Answer)

* **Complement** -> Dual + negation

### Examples

![image](https://user-images.githubusercontent.com/54589605/218243925-a2d2e62d-025a-421b-ac59-cbcf8238a49c.png)
![image](https://user-images.githubusercontent.com/54589605/218243937-4c3fac71-b986-49c5-a631-645d1f5ef7e3.png)
![image](https://user-images.githubusercontent.com/54589605/218243945-06008cb5-eb9a-46a2-aa8e-2e9db13d0eac.png)
![image](https://user-images.githubusercontent.com/54589605/218243955-921d3aa6-b00b-43cc-aca3-019e950e3837.png)

> In **Q4 or page 4 question**, we did **T2 Transposition** on **3rd** step, instead of **multiplying** them.

![image](https://user-images.githubusercontent.com/54589605/218244594-d1eeeb58-fb87-4b3b-b471-efb8ecf6bfee.png)
![image](https://user-images.githubusercontent.com/54589605/218244641-81102afb-5cdd-42c2-b6f2-e92634a4433f.png)


> When asked to find **complement** of a given expression, what we do is that we first find the **duality** of the given expression(fd) and then we just put **complement** on **fd** i.e **fd` `**. Not **whole complement(`) `** but we just put **complement(`) `** on each of the variables individually. As seen in the **examples above**.  And that is the answer. 
> For multiple brackets, we have to solve the **inner most** brackets first.

* f` `= f -> fd -> fd` `[Steps]


### Consensus Theorem (**Rajinikanth Wala**)

> There might be **only one** variable which has it's **normal form(A)** as well as it's **complement form( A` `)**. **Normal form(A)** as well as **complement form(A` `)** is present there. 


### Example

* f = AB + BC + A`C `

> 'A' has it's **Normal form(A)** as well as **complement form(A`) `**. Hence, we call 'A' as **Rajni** here. 
> With 'A' we have 'B' and with 'A` `' we have 'C'. We can see the **middle expression(BC)** is formed from the **combination** of these two(B and C) variables, which are present along side 'A and A` `'. Hence, **BC** is redundant and not required.

### Steps

* We have to first identify **rajni** from the whole expression. 
    > **Rajni** means the variable which has both of it's **Normal form(A)** as well as **complement form(A` `)** are present.

* The variables(B and C from above example) along side **Rajni** form an expression/term(BC from above example), then that expression/term is called as the **Redundant or not required** term. Remove the **Redundant or not required** term and we got the answer.

### Examples

![image](https://user-images.githubusercontent.com/54589605/218244699-d6a75256-8769-450e-9914-e6f090bcaa09.png)
![image](https://user-images.githubusercontent.com/54589605/218244807-d9b59bca-edf9-435e-a181-c4929859dfbd.png)
![image](https://user-images.githubusercontent.com/54589605/218244816-cf170688-0fdf-40d0-967d-850d82f201a8.png)
![image](https://user-images.githubusercontent.com/54589605/218244839-b45a43e0-7ad8-4aa5-bfda-de59a8ca8b8b.png)
![image](https://user-images.githubusercontent.com/54589605/218245094-10ef90b8-d4f1-42e6-9635-ccaa78b8351b.png)
![image](https://user-images.githubusercontent.com/54589605/218245099-f0e1c313-ac64-4047-a03a-de05e59158c0.png)
![image](https://user-images.githubusercontent.com/54589605/218245106-9e850aee-54e5-41f1-96df-ce77df67c946.png)

> Here, in the above question even though we have many **complement variables** but only **A** has it's normal as well as it's complement form. Hence **A** is the **Rajni** here.

![image](https://user-images.githubusercontent.com/54589605/218245133-99cfcdd9-794d-438a-a43a-20f5d1a79bcc.png)
![image](https://user-images.githubusercontent.com/54589605/218245146-644b598c-6fba-4955-a0c2-b44ac7b3e650.png)

> Here, in the above question, we can see that there are two variables(A and B) who can be **Rajni** but we know that there can only be **one Rajni** in a given expression. Hence we have to simply the question to find the **single Ranjni**.

![image](https://user-images.githubusercontent.com/54589605/218245276-7f6dece2-7eee-434b-a1eb-b93fb9d4906d.png)

> We are solving the **innermost** brackets here. We are taking **X -> (X+Y) and Y-> y**. We are taking **X->y` ` and Y->z**. 

![image](https://user-images.githubusercontent.com/54589605/218245448-1a4bb778-89ca-43e3-b1a5-4505a4fff859.png)
![image](https://user-images.githubusercontent.com/54589605/218245496-23dca778-3a84-43bf-a81d-a9a508df8c28.png)
![image](https://user-images.githubusercontent.com/54589605/218245540-bde3356b-906e-4d07-a494-9a88a79ebe31.png)
![image](https://user-images.githubusercontent.com/54589605/218245610-c84a5ea3-d767-4f3b-a06d-e03522c37ffb.png)

> In this question as well, we can follow the given below **trick** to solve it. Each last variable in each term of the expression are in **normal form**. That's the pattern.

![image](https://user-images.githubusercontent.com/54589605/218245931-4f6ddc2f-cfcb-4747-9572-10e30de1360a.png)
![2_question_trick](https://user-images.githubusercontent.com/54589605/218246079-1806319e-0fba-4317-bcb5-ab97c0967901.png)

> The trick is that we can see all of the **last variables** in each of the terms of the expression has **normal form** variables. If we see this pattern then we know that's the solution/result of the question.

![image](https://user-images.githubusercontent.com/54589605/218246019-8e220976-3f1e-4863-abd0-8af635b3aacf.png)

> Here, we cannot do the above trick as **C` `** is present as the last variable in the last term of the expression. Hence we cannot do the above trick. We have to solve it manually. 
> 1 + anything -> 1

### Boolean Function Representation 

* Canonical Form
* Minimal Form

### Canonical Form or Standard Form

> First we need multiply/product(product term). After taking the product we then did sum/add. **Sum of product(SOP)**.

* f(A,B,C) = ABC` ` + AB`C` + ABC -> **Canonical Form** or **Canonical Sum of product(SOP)**
* ABC` `, AB`C`, ABC -> 3 Product Term

> Above expression contains **3** variables.

> Each product term are called as **minterm**.
> If each of the **minterm** contains **all** of the **boolean variables**, then this expression is called as **Canonical form**.

### Examples

![image](https://user-images.githubusercontent.com/54589605/218260178-a92cc93d-56c8-483d-9bce-4a8e3abb2097.png)


### Minimal Form

* f(A,B,C) = AB + AB`C` + ABC -> **Minimal SOP Form**

> If any variable is **missing** then we can call it as **Minimal Form**.

### Examples

![image](https://user-images.githubusercontent.com/54589605/218260205-d9aa6469-86b5-44e3-b7ca-cbb39e2f3fb0.png)


## Sum of product(SOP)

* f(A,B,C) = ABC` ` + AB`C` + ABC -> **Sum of product(SOP)**

> Each term is **SOP** is called as **minterm**.

![image](https://user-images.githubusercontent.com/54589605/218260477-124bd3b1-2eb6-44f1-a6ae-a082893e93b5.png)


> In case of **SOP** form, we need to concentrate on where the **output** is **High or Logic '1' or 1**.

### Examples

![image](https://user-images.githubusercontent.com/54589605/218260094-fe9c5ed1-0237-4650-96b4-3a01e0b77e87.png)
![image](https://user-images.githubusercontent.com/54589605/218260570-c2de04b2-01c4-4e45-a1a6-26e00366e769.png)
![image](https://user-images.githubusercontent.com/54589605/218260556-a7c23410-8bd5-43a0-b7af-090003889f51.png)


## Product of Sum(POS)

* f(A,B,C) = (A+B+C`)(A`+B`+C)(A`+B`+C`) -> **Canonical Form** or **Canonical f Product of sum(POS)**

> Each term is **POS** is called as **maxterm**.
> Above expression contains **3** variables.
> If each of the **maxterm** contains **all** of the **boolean variables**, then this expression is called as **Canonical form**.

* f(A,B,C) = (A+B+C`)(A`+B`)(A`+B`+C`) -> **Minimal POS form**


> The main purpose of **Boolean Algebra** is to **minimize/reduce** the no. of **literals**.

![image](https://user-images.githubusercontent.com/54589605/218260495-39568449-e06b-4492-ae82-b9e3b862b170.png)


> In case of **POS** form, we need to concentrate on where the **output** is **Low or Logic '0' or 0**.


### Examples

![image](https://user-images.githubusercontent.com/54589605/218260144-491baf23-72d3-4071-9367-6f4fb2e54498.png)
![image](https://user-images.githubusercontent.com/54589605/218260570-c2de04b2-01c4-4e45-a1a6-26e00366e769.png)
![image](https://user-images.githubusercontent.com/54589605/218260602-04b769bf-54ba-4fd8-b8af-68cc73a1d798.png)

### Literal

![image](https://user-images.githubusercontent.com/54589605/218260453-bb4af25f-8719-4fbe-a24b-ae1695f0fbc0.png)


### Questions

![2_Questions_1](https://user-images.githubusercontent.com/54589605/218261738-b0f6baf1-ad8e-4e84-96df-1434e6ccb8e5.jpeg)
![2_Questions_2](https://user-images.githubusercontent.com/54589605/218261742-7c01040f-cad3-42a3-a462-4b70cf0d8546.jpeg)
![2_Questions_3](https://user-images.githubusercontent.com/54589605/218261783-47c941d7-205a-4665-99fa-415d2c257577.jpeg)
![2_Questions_4](https://user-images.githubusercontent.com/54589605/218261785-f1751d2f-2bbc-4682-83d5-3fb1b2f0645a.jpeg)
![2_Questions_5](https://user-images.githubusercontent.com/54589605/218261787-04d78729-41f3-487f-9159-e13f680b0bcf.jpeg)
![2_Questions_6](https://user-images.githubusercontent.com/54589605/218261788-4eadad0a-b8e8-45f5-a8ab-3413619c8d62.jpeg)
![2_Questions_7](https://user-images.githubusercontent.com/54589605/218261790-dcc1636b-8293-439c-8670-11943262561c.jpeg)
![2_Questions_8](https://user-images.githubusercontent.com/54589605/218261791-dc84d95b-aa63-42db-b40c-ab69938018c6.jpeg)
![2_Questions_9](https://user-images.githubusercontent.com/54589605/218261798-35426127-749c-4a2b-99d6-57a07544dde4.jpeg)
![2_Questions_10](https://user-images.githubusercontent.com/54589605/218261801-3e81d63c-f3a5-4ffa-a97b-1957a99d7784.jpeg)


# Practice Questions and Solutions
## Practice Questions (1) [10th Feb 2023]

![Boolean_Algebra_1](https://user-images.githubusercontent.com/54589605/218043260-a7af0cb3-152c-426c-98cc-7038ef4751d9.jpeg)
![Boolean_Algebra_2](https://user-images.githubusercontent.com/54589605/218043272-285511b8-6b03-4114-87fa-f6425b0a5e41.jpeg)
![Boolean_Algebra_3](https://user-images.githubusercontent.com/54589605/218043276-d051f27d-a6f1-480d-a416-72199e484c18.jpeg)
![Boolean_Algebra_4](https://user-images.githubusercontent.com/54589605/218043279-c61892f5-8262-45ad-b047-b5a501dbe63a.jpeg)
![Boolean_Algebra_5](https://user-images.githubusercontent.com/54589605/218043283-c54caf51-aff5-4c98-8714-ec1cd1bccdcc.jpeg)
![Boolean_Algebra_6](https://user-images.githubusercontent.com/54589605/218043326-743bf608-c57c-43ba-bd55-abc6ab15c2b0.jpeg)
![Boolean_Algebra_7](https://user-images.githubusercontent.com/54589605/218043349-d73a3575-15a2-4ad2-b459-beddcab640c7.jpeg)
![Boolean_Algebra_8](https://user-images.githubusercontent.com/54589605/218043356-f3d7800f-818b-4944-98c9-447de1d34cec.jpeg)
![Boolean_Algebra_9](https://user-images.githubusercontent.com/54589605/218043358-5e5ba2dd-d8bb-45ad-b898-bcf0b1333343.jpeg)

## Solutions

### Q1

![image](https://user-images.githubusercontent.com/54589605/218076088-0905e90d-fdae-451c-96ca-f2cf26bd132c.png)

### Q2

![image](https://user-images.githubusercontent.com/54589605/218076887-ab1e1c89-48dd-43b1-b11e-0483a900465e.png)
![image](https://user-images.githubusercontent.com/54589605/218077099-dd446280-1db1-4313-bf68-1a0984e36def.png)
![image](https://user-images.githubusercontent.com/54589605/218077139-13068c43-04eb-47ce-856c-d6d51b6479a6.png)

### Q3

![image](https://user-images.githubusercontent.com/54589605/218077252-89bf37f3-80a4-4b3c-98d7-372f1c0b8d8d.png)


### Q4

![image](https://user-images.githubusercontent.com/54589605/218087370-ba6385c1-ae83-48ee-9282-fd046255714f.png)


### Q5

### Q6

![image](https://user-images.githubusercontent.com/54589605/218074165-2caca298-c473-4c6d-8043-8d4b7851cab2.png)

### Q7

![Solution_of_Q7](https://user-images.githubusercontent.com/54589605/218074881-5096b909-9230-46e4-be7d-6456e82b6dcf.png)

### Q8

### Q9

### Q10

### Q11

![image](https://user-images.githubusercontent.com/54589605/218088280-c9750742-fa91-45c3-98aa-d4f320c785ea.png)


### 12

![image](https://user-images.githubusercontent.com/54589605/218080460-d712894f-9d5b-45c5-a8ad-95a1dff79157.png)

### 13

![image](https://user-images.githubusercontent.com/54589605/218080474-f76b4c43-db36-450c-86ef-6c7090aba33e.png)

> **Q12 and Q13** have the same solution. The expressions are the same in the given questions.

### Q14

### Q15


### Extra

![image](https://user-images.githubusercontent.com/54589605/218077930-625125d5-69f6-49f6-adaf-7bca3fd0c79f.png)
![image](https://user-images.githubusercontent.com/54589605/218078447-9ea891cf-09b0-4026-8d0b-0de0b676db7e.png)
![image](https://user-images.githubusercontent.com/54589605/218079497-4e1557f4-ac56-4e8c-81a8-fccc26fdd1e7.png)
![image](https://user-images.githubusercontent.com/54589605/218079821-003cbec0-7841-4014-971f-e8d7dbd05826.png)
![image](https://user-images.githubusercontent.com/54589605/218082565-5fce5e1b-9214-4585-940e-8628104c94dd.png)
![image](https://user-images.githubusercontent.com/54589605/218087770-eadd18dd-e954-4fff-8f16-c03d9792bb9e.png)


## Practice Questions (2) [11th Feb 2023]

![Boolean_Algebra_10](https://user-images.githubusercontent.com/54589605/218261856-bd7a0b50-1305-4bd1-8415-fcb4162551e2.jpeg)
![Boolean_Algebra_11](https://user-images.githubusercontent.com/54589605/218261859-1bae00a3-94a2-4aa5-a902-f15bb59fd2f4.jpeg)
![Boolean_Algebra_12](https://user-images.githubusercontent.com/54589605/218261862-32bdaf4f-f841-469a-9e4d-181be54cffd5.jpeg)
![Boolean_Algebra_13](https://user-images.githubusercontent.com/54589605/218261867-3abd4cd1-c244-4943-bbe0-8f186f99378b.jpeg)
![Boolean_Algebra_14](https://user-images.githubusercontent.com/54589605/218261869-43370edf-2e58-4ab4-afab-f4a0a8a8a672.jpeg)









