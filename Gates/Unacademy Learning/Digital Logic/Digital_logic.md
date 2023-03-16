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
 
* Notes -> https://drive.google.com/drive/folders/1oH9c1DvT9rpii0QGe-mflhyC_ciJK2j9

* Digital Daily Practice -> https://drive.google.com/drive/folders/1Feqhx3AHQt1MXlX-UxTk-q5V0EK_UUJv

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
f'-> Complement of the Initial expression (Answer)

* **Complement** -> Dual + negation

### Examples

![image](https://user-images.githubusercontent.com/54589605/218243925-a2d2e62d-025a-421b-ac59-cbcf8238a49c.png)
![image](https://user-images.githubusercontent.com/54589605/218243937-4c3fac71-b986-49c5-a631-645d1f5ef7e3.png)
![image](https://user-images.githubusercontent.com/54589605/218243945-06008cb5-eb9a-46a2-aa8e-2e9db13d0eac.png)
![image](https://user-images.githubusercontent.com/54589605/218243955-921d3aa6-b00b-43cc-aca3-019e950e3837.png)

> In **Q4 or page 4 question**, we did **T2 Transposition** on **3rd** step, instead of **multiplying** them.

![image](https://user-images.githubusercontent.com/54589605/218244594-d1eeeb58-fb87-4b3b-b471-efb8ecf6bfee.png)
![image](https://user-images.githubusercontent.com/54589605/218244641-81102afb-5cdd-42c2-b6f2-e92634a4433f.png)


> When asked to find **complement** of a given expression, what we do is that we first find the **duality** of the given expression(fd) and then we just put **complement** on **fd** i.e **fd'**. Not **whole complement(')** but we just put **complement(')** on each of the variables individually. As seen in the **examples above**.  And that is the answer. 
> For multiple brackets, we have to solve the **inner most** brackets first.

* f'= f -> fd -> fd' [Steps]


### Consensus Theorem (**Rajinikanth Wala**)

> There might be **only one** variable which has it's **normal form(A)** as well as it's **complement form(A')**. **Normal form(A)** as well as **complement form(A')** is present there. 


### Example

* f = AB + BC + A'C

> 'A' has it's **Normal form(A)** as well as **complement form(A')**. Hence, we call 'A' as **Rajni** here. 
> With 'A' we have 'B' and with '  A'  ' we have 'C'. We can see the **middle expression(BC)** is formed from the **combination** of these two(B and C) variables, which are present along side 'A and A' '. Hence, **BC** is redundant and not required.

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

* f(A,B,C) = ABC' + A'B'C' + ABC -> **Canonical Form** or **Canonical Sum of product(SOP)**
* ABC', A'B'C', ABC -> 3 Product Term

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


## Boolean_Algebra_III (3) [12th Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/218302305-78185896-4c48-4b35-a106-3f69abed0db8.png)

> The no. of **minterms** plus the no. of **maxterms** is **2^3=8**.

* We want the maximum no. of **minterms**

![image](https://user-images.githubusercontent.com/54589605/218302409-a9993987-1c23-485a-b029-34294d159b12.png)

> Here, we are getting the maximum possible **minterms** -> **2^3=8**.
> When there are maximum possible **minterms**, then the maximum possible **maxterms** is **zero(0)**.
> Hence, we can say that maximum possible **minterms** are -> **2^n**.

* We want the maximum no. of **maxterms**

![image](https://user-images.githubusercontent.com/54589605/218302560-3f58504d-6a52-42dc-85df-2119fa240896.png)

> Here, we are getting the maximum possible **maxterms** -> **2^3=8**.
> When there are maximum possible **maxterms**, then the maximum possible **minterms** is **zero(0)**.
> Hence, we can say that maximum possible **maxterms** are -> **2^n**.

![image](https://user-images.githubusercontent.com/54589605/218302636-609b68ca-3b93-488b-a765-7d3d4239c53c.png)

* No. of variables we have taken=3
* Hence, **2^3=8**.
* If we had taken **n** variables then maximum possible **maxterms** would be **2^n**.

![image](https://user-images.githubusercontent.com/54589605/218302718-808b90a1-9ff8-4a54-a9ca-af1d3c7c1664.png)

### Sum of all maximum possible **minterms**

![image](https://user-images.githubusercontent.com/54589605/218302763-7b8f0d4e-1e31-4d38-8641-1adb1452d16e.png)

### Sum of all maximum possible **maxterms**

![image](https://user-images.githubusercontent.com/54589605/218302804-fd3005a3-f40d-4415-a5c5-1963c312124b.png)

### **Maxterm** and **Minterm** of **same index** are complement to each other

![image](https://user-images.githubusercontent.com/54589605/218302909-237ec2e7-27e3-4f04-97eb-7ffc57035fcd.png)
![3_min_and_max_term](https://user-images.githubusercontent.com/54589605/218303909-2491f5a6-6ead-4163-a61b-ef448e14bfad.png)

* There are **n=3** variables. We know 5-> 101. In **SOP** form it will be **AB` `C**. In **POS** form it will be **A` `BC` `**.

### The **product** of two **minterms** of **different index and same index** is

![image](https://user-images.githubusercontent.com/54589605/218302949-ded2f10d-aeae-40e7-8b88-54b6e3e77e13.png)

* Different Index -> zero(0)
* Same Index -> mi [A.A = A]

### The **sum** of two arbitrary maxterms of **different index and same index** is

![image](https://user-images.githubusercontent.com/54589605/218303205-41840f6f-62df-4584-832e-1e67a8494b3e.png)

* Different Index -> One(1)
* Same Index -> mi [A + A = A]

### Questions

![image](https://user-images.githubusercontent.com/54589605/218303275-d9f9fcc5-e0e8-495b-aada-899c90b74902.png)

### Trick for the above type questions

![image](https://user-images.githubusercontent.com/54589605/218303288-21a2a8d4-f129-4f11-a6a9-fa8ea772efc2.png)

### Examples

![image](https://user-images.githubusercontent.com/54589605/218303305-a2a806c2-b16c-4ccf-93e5-090554e9ac72.png)
![image](https://user-images.githubusercontent.com/54589605/218303325-51655801-909a-4871-a071-3fff2a4f7a20.png)
![image](https://user-images.githubusercontent.com/54589605/218303340-03ac67de-a3c7-47a5-aca2-704eb3540041.png)

> In this above question, we can use both **SOP** and **POS** form. But we can see that **POS** form gave us the answer faster than **SOP** form.

![image](https://user-images.githubusercontent.com/54589605/218303439-f6641ff2-4ed9-4aef-aa6e-73817ff36562.png)
![image](https://user-images.githubusercontent.com/54589605/218303457-f10972c5-3817-429e-8c06-3d44d5aa7309.png)
![image](https://user-images.githubusercontent.com/54589605/218303472-29aa7333-7b71-412c-8420-de5e85559681.png)
![image](https://user-images.githubusercontent.com/54589605/218303495-edf6adf4-94c1-4b45-932a-875ff882d50d.png)
![image](https://user-images.githubusercontent.com/54589605/218303505-bba73ecf-e2c9-43b5-84d6-2f9f8b10ed67.png)
![image](https://user-images.githubusercontent.com/54589605/218303515-9bdd1cc2-1434-4625-aa02-67f5a643e61e.png)


![image](https://user-images.githubusercontent.com/54589605/218303539-c518aacf-40e7-4a2a-ac16-3b3d060e74f7.png)
![3_min_and_max_term_1](https://user-images.githubusercontent.com/54589605/218303969-9af92a94-79c5-4af4-b47b-49e3b4c126cf.png)

> Not applicable for **maxterm**. First convert the maxterms into minterms and then do the **minterm** analysis. After the analysis, get the **minterm answers** and from there we will get the maxterms **result/answer**.
> Don't go for **maxterm** analysis. This method is **not valid** for **maxterms**. 

* For f3 =f1*f2 

> For finding **f3** we use **common/intersection** formulae from **set theory**.

* f3 = f1 (intersection) f2


* For f4 = f1 + f2

> For finding **f4** we use **union** formulae from **set theory**.

* f4 = f1 (union) f2

![image](https://user-images.githubusercontent.com/54589605/218303549-1ed976a9-5d89-4838-9f44-4749b69b6ef3.png)

> In this above question, just find the **minterms and maxterms**. Use the below trick. To find the **minterms** of f', we have to take the **maxterms** of **f** and put them as **minterms** of f'.

![image](https://user-images.githubusercontent.com/54589605/218303591-76ddb5b2-8af0-4565-bd6f-341a0d125dca.png)

* Minterms of f` ` <-> Maxterms of f
* Maxterms of f` ` <-> Minterms of f

![image](https://user-images.githubusercontent.com/54589605/218304148-558c6032-af60-40e3-b6a1-33e1abb6629e.png)

> Try to do the **complete simplification or analysis** in **SOP or minterms** form only. So that we do not commit any mistakes. Convert the **POS or maxterms** into **SOP or minterms**, then do the analysis. 


### Boolean Function Question

![3_boolean_functions](https://user-images.githubusercontent.com/54589605/218308175-2a7c8669-36f8-45a2-9dc6-6de9fd1aed89.png)
![image](https://user-images.githubusercontent.com/54589605/218304211-e4cb8547-ee48-442d-bb40-3daa2dd2d664.png)
![3_boolean_functions_one_minterm](https://user-images.githubusercontent.com/54589605/218308176-0457d4c4-2e10-4e11-a124-0386739a5f5f.png)
![3_boolean_functions_two_minterms](https://user-images.githubusercontent.com/54589605/218308178-10545c76-f649-4e10-b45e-f3257badc7a9.png)


* In general, for **n** boolean variables, how many different boolean functions are possible?

> (2^2)^n [**Two** to the power of **Two** to the power of **n**]

![image](https://user-images.githubusercontent.com/54589605/218304232-97b2fd06-da71-47d9-abad-ab9536a01b30.png)


* How many boolean functions have zero(0) **minterms**?

> Only **One(1)** 

* How many boolean functions has **only one(1)** **minterm**?
  
> **Four(4)**

* How many boolean functions has **only two(2)** **minterms**?

> **Six(6)**

![image](https://user-images.githubusercontent.com/54589605/218304253-0729d3b9-2c8e-4b45-b36a-5bc1ad5534f2.png)


### Questions

![image](https://user-images.githubusercontent.com/54589605/218307654-7cb1973b-056d-49ac-8dbe-42771d4d9bbb.png)
![image](https://user-images.githubusercontent.com/54589605/218307661-0a5fb34b-d7e5-4a82-84a2-e1c74e148b24.png)
![image](https://user-images.githubusercontent.com/54589605/218307666-1c0fced1-c595-4ec8-afd3-0c75ae85131a.png)

> We are using **4** here because we have **2** boolean variables and no. of combinations possible with **2** boolean variable is **2^2=4**. Hence **4** is used here.
> **Atmost** means **upto**.
> **Atmost 3** means **upto 3** including **3 -> 0,1,2,3**. 

![image](https://user-images.githubusercontent.com/54589605/218307675-4df16c1e-31c2-4872-afb9-840954693167.png)

> **Having** means **exactly**.
> **Having 3** means **exactly 3** nothing more, nothing less.

* This is how we are getting **4**. There are **4** combinations for **2** variables.

![image](https://user-images.githubusercontent.com/54589605/218307708-92986132-fe4a-489e-8675-5129fc532287.png)
![image](https://user-images.githubusercontent.com/54589605/218307729-ad96673c-5b6d-4bbb-921b-8104f91e4246.png)

### Q36

![image](https://user-images.githubusercontent.com/54589605/218319711-2c22551e-fa7e-4830-bb92-361470694ef5.png)

* *3*, we know that **maxterms and minterms** are same index complements to each other.
* *4*, we know that **maxterms and minterms** are same index complements to each other.
* *5*, we know that **maxterms and minterms** are same index complements to each other.
* *6*, we know that **maxterms and minterms** are same index complements to each other.
* *7*, we know that **product of different index minterms** is **zero(0)**.
* *8*, we know that **sum of different index maxterms** is **one(1)**.
* *9*,  know that **maxterms and minterms** are same index complements to each other. We get the output of **8**. Then, we know that **sum of different index maxterms** is **one(1)**.
* *10*,  know that **maxterms and minterms** are same index complements to each other. We get the output of **7** but they will be capital M(M0 * M2 * M3 * M5). Then, we know that **product of different index maxterms** is **one(1)**.

### Q37

![image](https://user-images.githubusercontent.com/54589605/218319777-eed6c79c-6107-4d30-adab-2a14dd22a245.png)
![image](https://user-images.githubusercontent.com/54589605/218319800-e91c35ae-8da8-4f98-95bc-7a694efab1e2.png)

All options are corrrect. '*' is not multiplication here, it is solved according to the question, A*B= AB + A'B'.


![3_Questions_1](https://user-images.githubusercontent.com/54589605/218306650-53aa240f-f9c8-4f4f-a48b-5bcffebebd04.jpeg)
![3_Questions_2](https://user-images.githubusercontent.com/54589605/218306653-10bc125c-1613-4c08-a542-3757df13dd05.jpeg)
![3_Questions_3](https://user-images.githubusercontent.com/54589605/218306656-7f684484-0849-48b0-9d87-9c024a2cc011.jpeg)
![3_Questions_4](https://user-images.githubusercontent.com/54589605/218306658-40163555-4c92-4f6b-bbbd-779e7439a2cb.jpeg)
![3_Questions_5](https://user-images.githubusercontent.com/54589605/218306669-59debdb6-9eed-498f-b623-fbd3313ce3fb.jpeg)
![3_Questions_6](https://user-images.githubusercontent.com/54589605/218306671-2d10afe2-c184-46dd-b3a1-958b331c6ab6.jpeg)
![3_Questions_7](https://user-images.githubusercontent.com/54589605/218306673-8ca76d1c-0657-419f-88c3-60e090690a95.jpeg)
![3_Questions_8](https://user-images.githubusercontent.com/54589605/218306674-04c71e59-badc-48fd-8c4d-92c32af70d29.jpeg)
![3_Questions_9](https://user-images.githubusercontent.com/54589605/218306675-5e3a90e3-bb6a-4eae-bac4-22615825e8ad.jpeg)
![3_Questions_10](https://user-images.githubusercontent.com/54589605/218306677-165977e9-ad94-49ae-9911-6874dc02ace4.jpeg)
![3_Questions_11](https://user-images.githubusercontent.com/54589605/218306728-2c7ff6fb-6529-46f0-94fc-c51c063d0beb.jpeg)
![3_Questions_12](https://user-images.githubusercontent.com/54589605/218306731-4ee87ad3-1406-43ba-a8a0-f06296717c54.jpeg)
![3_Questions_13](https://user-images.githubusercontent.com/54589605/218306732-f6f6d0cb-77e5-42b4-a7c2-548ba4ad0c20.jpeg)
![3_Questions_14](https://user-images.githubusercontent.com/54589605/218306733-4430276f-f5e5-4016-b9d2-1f35448be93a.jpeg)
![3_Questions_15](https://user-images.githubusercontent.com/54589605/218306736-e44d85b0-8982-42f1-ba9a-99c28aa59f87.jpeg)
![3_Questions_16](https://user-images.githubusercontent.com/54589605/218306738-e160b527-538a-4048-8eb8-c860436e26fa.jpeg)
![3_Questions_17](https://user-images.githubusercontent.com/54589605/218306753-44d278ec-3913-46c9-840a-485e23101d3f.jpeg)

## Neutral Function (4) [12th Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/218320301-e80897e1-f4ea-4c85-b86a-8aaa88b75d3f.png)
![image](https://user-images.githubusercontent.com/54589605/218320985-082f0412-25c6-4138-8f88-410188fcc3a3.png)

![4_neutral_functions](https://user-images.githubusercontent.com/54589605/218323883-f6faed05-67a7-4d55-8784-55a079f2439d.png)


> This boolean expression(f) contains equal no. of **minterms** and **maxterms**. Hence this function is called as a **neutral function**.

## Mutually Exclusive terms

![image](https://user-images.githubusercontent.com/54589605/218320354-9b5ccb93-d41b-4cc6-9448-e161557fb886.png)

* There are **3** variables
* Combinations possible -> 2^3=8
* All possible combinations of **minterms** from **where to where** -> 0 to 7 only
* If **n** variables
* Combinations possible -> 2^n
* All possible combinations of minterms from **where to where** -> 0 to ((2^n) -1))
* Maximum possible value -> ((2^n) -1))

* If **mi** is a minterm. Then **Exclusive term** for **mi** will be:-

![image](https://user-images.githubusercontent.com/54589605/218310167-d932e4b0-cb66-4ce0-a417-672235cef97d.png)
![image](https://user-images.githubusercontent.com/54589605/218320614-985c0be8-020c-4cce-8b77-570585a1cb86.png)


* For **n=3**

![image](https://user-images.githubusercontent.com/54589605/218310882-8387711e-bcc2-4907-bcd9-cad80f4201a7.png)

> This is called as the **Exclusive term**.
> The **Exclusive term** for **3 or m3** is **4 or m4**.
> The **Exclusive term** for **5 or m5** is **2 or m2**.
> The **Exclusive term** for **7 or m7** is **0 or m0**.

![image](https://user-images.githubusercontent.com/54589605/218320650-5a015610-5fa4-49c6-a837-bcbbf38d2e09.png)


* For n=2 [Exclusive Pairs -> 2^(2-1)]

> The maximum possible term that will come is **3**. The sum of these two([0,3]) or ([1,2]) must be **3**.

* For n=3 [Exclusive Pairs -> 2^(3-1)]

> The maximum possible term that will come is **7**. The sum of these two([0,7]) or ([1,6]) or ([2,5]) or ([3,4]) must be **7**.
> These are called as **Exclusive pairs**.
    
* In terms of **minterms**

* 0 -> A'B'C'
* 7 -> ABC

* 1 -> A'B'C
* 6 -> ABC'

> Exclusive term for **1** is **6**. Vice-Versa as well where exclusive term for **6** is **1**.

* For n=4 [Exclusive Pairs -> 2^(4-1)]

* For **n**, [**Exclusive Pairs** -> 2^(n-1)]

> This is called as **Exclusivity**. This is not a **dual or a complement**, keep that in mind.

## Self Dual Function/Expressions

> For a given function(f), if we do **duality** of that function then we get the function **itself** back. The original function and the **duality(fd)** of that function will be the **same**. Not for **all** functions. Some functions can satisfy this **property**.
> We have only taken **one time or once** the duality of the function. We get back the **original function**. These are called as **self dual** functions.

![image](https://user-images.githubusercontent.com/54589605/218320910-38bc61b2-138b-4085-8e26-11e172c95a67.png)


![image](https://user-images.githubusercontent.com/54589605/218320806-a824c354-4200-4dec-9eeb-5a7090946e18.png)
![image](https://user-images.githubusercontent.com/54589605/218320818-3fdb3d3a-4947-4a27-a9fe-1d702df47a7d.png)

> **Remember this expression, it will be needed many times during solving questions and finding patterns in questions**.

### Two conditions need to be satisfied for **Self Dual Function**

1) Should be a **neutral function**

![image](https://user-images.githubusercontent.com/54589605/218320967-afae5499-4c7e-44f8-abc8-4c94c559ece5.png)

* (2^n)/2 <=> 2^(n-1) [Both are the same thing]

2) The terms present in **minterms**, should not have their **exclusive** terms in **minterms**. The **exclusive** term should be in **maxterms**.

![image](https://user-images.githubusercontent.com/54589605/218321086-fd5aaecb-78c2-40a8-a3b9-f67dae6982e9.png)
![image](https://user-images.githubusercontent.com/54589605/218321116-ff4d1dbf-e108-45ed-870a-f4b1d5d1d113.png)
![image](https://user-images.githubusercontent.com/54589605/218321265-47afb5c2-0158-4364-97ab-e6cf600589ad.png)


* m3 -> m4
* m5 -> m2
* m6 -> m1
* m7 -> m0

> All of the m4,m2,m1 and m0 are in **maxterms**. Hence this **expression** is a **Self Dual Function**. 

* Boolean Function -> Boolean Expression -> Logic Function -> Logic Expression -> All have the same meaning.

### Questions

![image](https://user-images.githubusercontent.com/54589605/218321158-7c92a16d-6937-44b6-9a35-9a6767ad1213.png)
![image](https://user-images.githubusercontent.com/54589605/218321193-5c5e916f-4c15-46e6-a7da-b72c2093a442.png)

> In the above question, it is not a **self dual function** because the **exclusive term** for **2** is **5** and it is present in **minterms** itself where **2** is also present, which should not happen. Hence it is not a **self dual expression**.

![image](https://user-images.githubusercontent.com/54589605/218321577-a8df2b7e-e791-4cc6-9584-3198beca2e93.png)
![image](https://user-images.githubusercontent.com/54589605/218321647-defde90d-d316-4aa5-b0b0-5fb2e3e48f2f.png)

* Majority -> 2 or more

![image](https://user-images.githubusercontent.com/54589605/218321677-c400c410-12e6-414f-8589-0bb702cf40b9.png)

* Minority -> Less than 2. 

![image](https://user-images.githubusercontent.com/54589605/218321717-d9bf6044-2c11-412a-b9d6-c78dd5fcd325.png)


## Notes

![image](https://user-images.githubusercontent.com/54589605/218321272-d8f897a1-206e-4da8-b3a5-6f84695c893e.png)


### No. of Neutral functions

* Neutral functions -> No. of **maxterms** is equal to no. of **minterms**.

* For n=2
* Total no. of combinations -> 2^2 -> 4 -> 0,1,2,3
* Total no. of functions possible -> 2^(2^2) -> 16

> For the above function with **n=2**, how many we can select so that the function becomes a **neutral** function. Half of them we can select i.e **4/2=2**. If I select **2** as minterms then the remaining **2** will go to maxterms. 

* How many ways I can do the selection?

> 4C2 ways

![image](https://user-images.githubusercontent.com/54589605/218322459-97170e1c-7a8e-4654-8039-a1e78342c61b.png)

* For n=3
* Total no. of combinations -> 2^3 -> 8 -> 0,1,2,3,4,5,6,7
* Total no. of functions possible -> 2^(2^3) -> 256

> For the above function with **n=3**, how many we can select so that the function becomes a **neutral** function. Half of them we can select i.e **8/2=4**. If I select **4** as minterms then the remaining **4** will go to maxterms. 

* How many ways I can do the selection?

> 8C4 ways

![image](https://user-images.githubusercontent.com/54589605/218322595-70f051fa-5475-48d3-b666-59ed2e24a0b4.png)

* For **n** variables
* Total no. of combinations -> 2^n
* Total no. of functions possible -> 2^(2^n)

> For the above function with **n** variables, how many we can select so that the function becomes a **neutral** function. Half of them we can select i.e **n/2**. If I select **n/2** as minterms then the remaining **n/2** will go to maxterms. 

* How many ways I can do the selection?

> (2^n)C(2^(n-1)) ways

![image](https://user-images.githubusercontent.com/54589605/218322756-844df2c5-b9f5-4fdd-aed8-a8a76f12ce62.png)
![image](https://user-images.githubusercontent.com/54589605/218322815-5cf8f97a-6150-4f68-b1f8-5f2265f525a6.png)
![image](https://user-images.githubusercontent.com/54589605/218322826-41aedfba-7f0d-469e-9c4e-cf41305a85df.png)



![image](https://user-images.githubusercontent.com/54589605/218321418-58828a0d-9cd2-49a5-8085-2b1a9dbbffda.png)


### No. of self dual functions

* For **n=3**
> From this (0,7) or (1,6) or (2,5) or (3,4) group or individual pairs we can only select **one(1)**. In total there are 4 groups/pairs. From **2** values we can select **only one**, hence we can select in **2C1** ways from each pair/group.

![image](https://user-images.githubusercontent.com/54589605/218323082-5fa6aa3a-a8ba-4a1c-91bc-af0e5cabfe3a.png)
![image](https://user-images.githubusercontent.com/54589605/218323211-95ef17ba-ad37-4f6d-a91e-35770736d4d9.png)


* For **n=4**
> From this (0,15) or (1,14) or (2,13) or (3,12) or (4,11) or (5,10) or (6,9) or (7,8) group or individual pairs we can only select **one(1)**. In total there are 8 groups/pairs. From **2** values we can select **only one**, hence we can select in **2C1** ways from each pair/group.

![image](https://user-images.githubusercontent.com/54589605/218321402-9e8c0106-d6c2-480f-9b0f-55c5a09e1ba5.png)
![image](https://user-images.githubusercontent.com/54589605/218323222-549af473-af60-4eff-98f8-53fe3e6d9156.png)

* For **n**
> From this 2^(n-1) group or individual pairs are possible. From **2** values we can select **only one**, hence we can select in **2C1** ways from each pair/group.

### Formula

* 2^(2^(n-1))

![image](https://user-images.githubusercontent.com/54589605/218323385-007886c4-34a9-4428-bdce-56dcf837a809.png)

### Questions

![4_Questions_1](https://user-images.githubusercontent.com/54589605/218324003-ce03afa1-97a1-43d9-8274-da853a2087af.jpeg)
![4_Questions_2](https://user-images.githubusercontent.com/54589605/218324006-4149e016-4f32-4871-86c7-81b65e32c3d1.jpeg)
![4_Questions_3](https://user-images.githubusercontent.com/54589605/218324009-c8a61b94-dff5-44c6-8760-d5ba0821ffd2.jpeg)
![4_Questions_4](https://user-images.githubusercontent.com/54589605/218324011-04a34481-b3a0-42e4-9c3f-89bc4de7c757.jpeg)
![4_Questions_5](https://user-images.githubusercontent.com/54589605/218324030-7bb77632-f7b5-4ac4-8835-a21d1b1ad13b.jpeg)
![4_Questions_6](https://user-images.githubusercontent.com/54589605/218324033-9cad4c14-2047-4562-a0f9-479c12300eea.jpeg)
![4_Questions_7](https://user-images.githubusercontent.com/54589605/218324034-5964977b-3f9a-40f0-a4f9-3f6b86a6f0cb.jpeg)

## Boolean Algebra-IV (5) [21st Feb 2023]

**IMPORTANT**
![image](https://user-images.githubusercontent.com/54589605/220338228-0e0b6be5-a95e-460b-a79a-3780ba238c27.png)
![image](https://user-images.githubusercontent.com/54589605/220338820-98c4adf4-2320-4771-b7b1-f4ced803e581.png)
![image](https://user-images.githubusercontent.com/54589605/220339405-f0a22265-9ab0-43d8-b739-2c9f7c5cb3f3.png)
![image](https://user-images.githubusercontent.com/54589605/220340606-83455827-2356-4bf1-8c9d-dcd070c8bb59.png)

* The no. of boolean functions -> (2^(2^(n))) -> (2^(2^(2))) -> 16

> Even after **negation** also, the minters are the **same**. The **Exclusive terms** must be **present**.


![image](https://user-images.githubusercontent.com/54589605/220340201-3c0bcb08-e7c9-4200-9864-fb9bcf4d1083.png)
![image](https://user-images.githubusercontent.com/54589605/220340495-b4e180d7-8908-45fb-b3d5-00124487e1f4.png)
![image](https://user-images.githubusercontent.com/54589605/220340976-10c0f62a-4438-43d2-bd10-936943fc5888.png)

> The formula used in **self dual expression** is used here as well. (2^(2^(n-1)))
* The no. of boolean functions -> (2^(2^(n))) -> (2^(2^(3))) -> 256

* Solutions for **Daily Practice 1**. **15 Questions**.

## Logic Gates (6) [18th Feb 2023]

## NOT Gate

* The bubble plays a very important role.
* Without having the bubble, it is called as **buffer**.
* **Buffer** means that whatever we have given as **input**, the same thing will come out as **output**.

## Switching Circuit

![image](https://user-images.githubusercontent.com/54589605/219865988-3347799a-1e75-4744-a2a1-9c97677ba15e.png)
![image](https://user-images.githubusercontent.com/54589605/219866009-877bb3de-4ca6-410a-beaf-43c7cb61f8df.png)

* This is called as **NOT operation**.
* The switch must be **parallel** or in **parallel** connection to the bulb for **NOT operations**.


### Buffer

![image](https://user-images.githubusercontent.com/54589605/219866157-a4dd2428-3b84-4219-ab52-862e6ddd2a4d.png)
![image](https://user-images.githubusercontent.com/54589605/219866236-aca81a22-a643-428f-b1fe-e028be805629.png)


> When we want **buffer operations**, then the switch and the bulb must be in **series** connection.
 
## Timing Diagram **Important**

![image](https://user-images.githubusercontent.com/54589605/219866385-2697b502-e41f-4a01-9d48-c0964d723604.png)


## Feedback connection

> It is **one of the important circuits**.

![image](https://user-images.githubusercontent.com/54589605/219866454-b6e71959-f210-4b11-80da-5fb99bab366b.png)

> **Feedback connection** has one **special** property, **it allows the signal in the given direction only**. Not flow of anything in the opposite direction. Output will be connected to the input only. The signal will flow from **output to input** only. It is **uni-directional**.

> We can call it as a **Buffer**. Whatever input we have given, that same input we are getting as the **output**.
> If two ends of the **feedback** are the same, we can call it as **stable** circuit.
> At **P** end we have **0** and on the other end **Q**, we have **0** as well. At both ends of the **feedback**, the values are the **same**. If we have given **input as 0**, then we can say that this circuit is **stable**.
> We are giving **1** as the **input** and we are getting **1** at the other end. Hence both ends of the **feedback** are the **same**. This circuit is **stable** for **input 1** as well. It is stable for **0 as well as for 1**. Hence it is called as **bi-stable** circuit.
> It is also called  as **Basic memory element**.

![image](https://user-images.githubusercontent.com/54589605/219868212-764f717f-d383-47f6-8244-8dc217b4d94c.png)

> It has **two NOT gates** inside the **feedback** connection.

![image](https://user-images.githubusercontent.com/54589605/219868284-78cfef5c-a0c1-4005-bfa4-6c3bf1b932bd.png)

> It has **four NOT gates** inside the **feedback** connection.
> For **even(2,4,6)** no. of **NOT gates** inside the **feedback** connection, then it will behave as a **buffer**, **bi-stable circuit** and a **Basic memory elements**.

* Basic memory element -> storage, if anything has capacity to store, then we can call it as memory element.


![image](https://user-images.githubusercontent.com/54589605/219868659-3e0ef6a0-daf2-47c8-b3ed-c14c42883bf0.png)

* Will we get the output immediately?

> No, it will take some time. How much time it will take?
> It will take **1 tpd** time.

> After **1 tpd** time, output is **1**.
> Before **1 tpd** time, output is **0**. The output **0** is for **1 tpd** time as well.

![image](https://user-images.githubusercontent.com/54589605/219869016-620aa82c-26aa-439c-ba18-4a62ea906784.png)

> The **feedback** doesn't have any delay.
> When the **input is 1**, then **output is 0** after **1 tpd** time.

![image](https://user-images.githubusercontent.com/54589605/219869152-d7d3da26-f2b4-44e3-9c4f-6bca1c3b9df3.png)


> When the **output is 1**, we can call it as **on** state.
> When the **output is 0**, we can call it as **off** state.

### Time-period

> Where the **same** thing is **repeating**.

![image](https://user-images.githubusercontent.com/54589605/219869319-5384294f-3f58-4eb4-85e0-ba63bd1d3d75.png)

> Time Period(T) of the circuit is **2 Tpd**.
> The output is not a **fixed** value. It keeps on changing or changes(on->off->on->off). It continuously changes. In this we can say that this above circuit is not a  **stable or a bi-stable** circuit. It is called as an **unstable** circuit. It is **not stable**. It is neither **stable** on **0 or 1**. This circuit is called as a **clock generator**.
> **On and off** time both are **equal**, i.e they take **1 tpd** time. It is also called as **square wave generator**.
> Here, we have **only one NOT gate** inside the **feedback**. That why ** 2 * 1 * tpd**.

> In general, **Time period** is -> 2n * tpd. [n -> no. of NOT gates inside the feedback]
> 'n' will only take **odd** values, because with **even** values, we will get he **buffer**.

![image](https://user-images.githubusercontent.com/54589605/219870094-33a81a46-d828-4833-a7f5-40df00802cf8.png)

> For **bi-stable** circuits, there is no **time period**.
* Invertes -> NOT gates

![image](https://user-images.githubusercontent.com/54589605/219870553-aee0aaf1-3b15-430a-95d2-42f55716bda3.png)
![image](https://user-images.githubusercontent.com/54589605/219870516-75f09481-3694-4048-9a26-c66470965474.png)

[n -> no. of NOT gates inside the feedback and it is odd numbers only]


## **AND** Gate

![image](https://user-images.githubusercontent.com/54589605/219870705-74588a57-760b-4df7-a306-ac8783658601.png)

* y= AB

> **A * B** means **product**. Product means we should have them in **series**. Product means **intersection**. **Intersection** means how the two switches much be in **series**. Implement the **series**.

* Product(AB) -> insertion -> Series

> If both **A and B** are **off**, then the bulb has **no power** and hence it is **off**.

![image](https://user-images.githubusercontent.com/54589605/219870963-1aeb87d1-f77f-420c-a30a-6dbfd148e1e9.png)
![image](https://user-images.githubusercontent.com/54589605/219871127-c48e29b8-54a4-4baf-b5e7-8ca03342fab1.png)
![image](https://user-images.githubusercontent.com/54589605/219871336-a84626a9-8a52-4636-b24f-849c270b83da.png)
![image](https://user-images.githubusercontent.com/54589605/219871347-89fede23-7b8e-41a3-9c1b-136dce3a6568.png)
![image](https://user-images.githubusercontent.com/54589605/219871385-9cf9b1be-9561-49ac-b214-02024290a5e1.png)


## Enable input and disable input

> If **one** of the inputs is **0**, then the **0** input is **disabling** the **other input(A)**. The **other input(A)** doesn't have any **affect** on the **output**. **0** input is **suppressing** the **other input**. That's why **0** is called as the **disabled input** for the **AND** gate.

* A.0 -> 0

![image](https://user-images.githubusercontent.com/54589605/219871660-9c5edb6b-d6f1-4b2c-b42a-99b243cd6c1d.png)
![image](https://user-images.githubusercontent.com/54589605/219871524-86847b60-a993-456f-b644-da94498bda72.png)

![image](https://user-images.githubusercontent.com/54589605/219872026-b19fad6a-3f69-46eb-93cf-7719fb62bcd9.png)

> If **one** of the inputs is **1**, then the **1** input is **enabling/encouraging** the **other input(A)**. **1** input is **enabling/encouraging** the **other input**. That's why **1** is called as the **enabled input** for the **AND** gate.

* A*1 -> A

### Commutative and Associative law for **AND** Gate

> **AND** gate obeys **commutative law**. **Commutative law** is for **two(2)** inputs.
> **Associative** law is for **more than 2 [3,4,5...] or 3+** inputs.

![image](https://user-images.githubusercontent.com/54589605/219872251-bc44be27-464a-450a-834a-f6f089de02cd.png)

> **AND** gate obeys both **commutative as well as associative** laws.

### Timing Diagram for **AND** Gate

> If any one of the **inputs** is **0**, then the **output** is **0**.

![image](https://user-images.githubusercontent.com/54589605/219872410-4b2d60af-2026-4bea-9c19-2822780b39a0.png)


## OR Gate

![image](https://user-images.githubusercontent.com/54589605/219872605-2b95084d-6e64-415f-bf57-d969e1cea38b.png)

 * **A + B** means **union**. It means they should be in **parallel**.

* Sum(A + B) -> Union -> Parallel.

![image](https://user-images.githubusercontent.com/54589605/219872960-3b4c5395-1f09-4f31-b368-eafe9df61d69.png)

* y= A + B
* y= x [x= A + B]
* y=x [Buffer, hence x is in series to the bulb]
* x= A + B [**A + B** means **union**, hence A and B will be **parallel** to the bulb]

![image](https://user-images.githubusercontent.com/54589605/219873108-1f042a9a-3e60-413a-a9cb-e8f8e04dc158.png)


![image](https://user-images.githubusercontent.com/54589605/219873291-f1b5bf4d-9b95-4bbb-bb83-12a491f5c0cc.png)

> If **one** of the inputs is **0**, then the **0** input is **enabling/encouraging** the **other input(A)**. **0** input is **enabling/encouraging** the **other input**. That's why **0** is called as the **enabled input** for the **OR** gate.

* A + 0 -> A

> If **one** of the inputs is **1**, then the **1** input is **disabling** the **other input(A)**. The **other input(A)** doesn't have any **affect** on the **output**. **1** input is **suppressing** the **other input**. That's why **1** is called as the **disabled input** for the **OR** gate.

* A + 1 -> 1 [Anything + 1 -> 1]

### Commutative and Associative law for **OR** Gate


![image](https://user-images.githubusercontent.com/54589605/219873406-6de999c8-3e12-483f-a377-2c8b08424cca.png)
![image](https://user-images.githubusercontent.com/54589605/219873416-5b318f70-a2e8-4df9-8e7f-abc2c57998ea.png)

> **OR** gate obeys both **commutative as well as associative** laws.


### Timing Diagram for **OR** Gate

> **Output is 1**, if any one of the **inputs** is **1**.


![image](https://user-images.githubusercontent.com/54589605/219873493-0770b033-6ba7-49af-be6e-e8c7277ae5a6.png)


## **NAND** Gate

* NAND -> AND + NOT

y= (AB)' [AB whole bar] 
y= A' + B'

> It is opposite to **AND** gate.
> If any one of the inputs is **0**, then the output is **0** for **AND** gate.
> If any one of the inputs is **0**, then the output is **1** for **NAND** gate.


![image](https://user-images.githubusercontent.com/54589605/219874394-576dd343-c98a-4fb0-8f56-b6271bf8c0f2.png)


* y= (AB)'
* y= x' [x= AB]
* y= x' [Inverter, hence x is in parallel to the bulb]
* x= AB [**AB** means **intersection**, hence A and B will be **series** to the bulb]

![image](https://user-images.githubusercontent.com/54589605/219874609-f3870104-90a2-4298-9b6e-8bbca774c011.png)


![image](https://user-images.githubusercontent.com/54589605/219874829-11d650da-2d2c-4561-91c6-7a6c50ede3b5.png)

> If **one** of the inputs is **0**, then the **0** input is **disabling** the **other input(A)**. **0** input is **disabling** the **other input**. That's why **0** is called as the **disabled input** for the **NAND** gate.

> If **one** of the inputs is **1**, then the **1** input is **enabling** the **other input(A)**. **1** input is **enabling** the **other input**. That's why **1** is called as the **enabled input** for the **NAND** gate.


### Questions

![image](https://user-images.githubusercontent.com/54589605/219873724-190568f5-8c5b-4e12-b2d7-9da0789c7e3a.png)


## Logic Gates (7) [20th Feb 2023]


### Commutative and Associative law for **NAND** Gate

![image](https://user-images.githubusercontent.com/54589605/220028165-bfbf70e6-839c-4b0a-a4cc-058d39c23157.png)


> **NAND** gate obeys **commutative law** but doesn't obey  **associative** laws.

### Alternative logic of **NAND** Gate

![image](https://user-images.githubusercontent.com/54589605/220029408-9cbb6d1a-97b4-493e-bd78-5b34948ddaf5.png)

> These **two** are **exactly** same.


![image](https://user-images.githubusercontent.com/54589605/220029739-23228dff-7804-4fd4-b024-440a1d83d3b1.png)

> We are **lazy people**, hence we have **replaced** the **NOT** Gates with the **bubble**. This is called as a **bubbled OR-Gate**.

![image](https://user-images.githubusercontent.com/54589605/220030165-2dbc1903-117b-4d1e-a01a-045ca34396bf.png)

* **NAND Gate** is **identically equal** to **Bubbled OR-Gate**.


### Timing Diagram for **NAND** Gate

> If any one of the **inputs is 0**, then the **output is 1**.

![image](https://user-images.githubusercontent.com/54589605/220030802-09879c5c-5f54-432e-b8a6-68095bc406dd.png)



### Notes (Logic Gates)

* All **gates** satisfy **commutative law**. 
* The **gates** which have a **bubble** at the **output location**, those gates does not satisfy **associative** laws.


## **NOR** Gate

* NOR -> OR + NOT

> Opposite of **OR** Gate.

![image](https://user-images.githubusercontent.com/54589605/220033441-fdee3309-d741-4d70-a5a8-453e3d2a57cc.png)

### Switching circuit of **NOR** Gate

![image](https://user-images.githubusercontent.com/54589605/220034207-e9b44d52-c604-473b-a8bd-db3e4fcce7c5.png)

* y= (A+B)'
* y=x' [x=A+B]

* **A + B** -> Sum -> Union -> Parallel


> If **one** of the inputs is **0**, then the **0** input is **enabling** the **other input(A)**. **0** input is **enabling** the **other input**. That's why **0** is called as the **enabled input** for the **NOR** gate.

> If **one** of the inputs is **1**, then the **1** input is **disabling** the **other input(A)**. **1** input is **disabling** the **other input**. That's why **1** is called as the **disabled input** for the **NOR** gate.

![image](https://user-images.githubusercontent.com/54589605/220034908-6a9394d4-3da1-42b1-a410-98cb289530e3.png)


### Commutative and Associative law for **NOR** Gate

![image](https://user-images.githubusercontent.com/54589605/220035462-825d1382-a962-4cf9-92a4-5019ad423edd.png)

> **NOR** gate only satisfy **Commutative** law but doesn't satisfy **Associative** law.


### Alternative Logic

![image](https://user-images.githubusercontent.com/54589605/220036070-717fc02a-d174-4e31-bf0a-755118a8f324.png)
 
> We are **lazy people**, hence we have **replaced** the **NOT** Gates with the **bubble**. This is called as a **bubbled AND-Gate**.

* **NOR Gate** is **identically equal** to **Bubbled AND-Gate**.


### Timing Diagram of **NOR Gate**

![image](https://user-images.githubusercontent.com/54589605/220036704-2857b31f-ad89-49e5-9c53-e76fbb81a789.png)


## EX-OR GATE [**Very Very Important**]

* Most questions come from **EX-OR** Gate.

* **Exclusive OR** -> Some extra **OR** gate.
* EX-OR GATE -> **Extra OR** Gate


> **SOP** and **POS** form of Ex-OR gate is **important**. We need to **remember** it.

![image](https://user-images.githubusercontent.com/54589605/220052967-9a2ad619-eabf-4b2a-a24e-acc95c3611af.png)
![image](https://user-images.githubusercontent.com/54589605/220055542-519e2292-c327-40f7-8d93-ddc25379b81e.png)


### Switching Circuit for **EX-OR** gate

![image](https://user-images.githubusercontent.com/54589605/220069252-67a41112-64fb-444c-b83f-1f4a508b9c13.png)

* A Ex-OR B -> A'B + AB'

### SOP Form

y=m(1,2)

![image](https://user-images.githubusercontent.com/54589605/220056688-dfb7f48c-0ced-44b9-b787-b407a32851b2.png)


![image](https://user-images.githubusercontent.com/54589605/220056812-8a263f89-ca87-4db2-a0fe-f595c61074b7.png)
![image](https://user-images.githubusercontent.com/54589605/220056858-80a16e37-f1e4-47c8-a5b2-9c6cda5f94cc.png)
![image](https://user-images.githubusercontent.com/54589605/220057008-6cf5d590-d30e-4384-ba73-2b0ab22270a1.png)


### POS Form

y= M(0,3)

![image](https://user-images.githubusercontent.com/54589605/220058257-6d31fa3e-872e-474d-8f7e-f1fb12635472.png)

* Sum -> Union -> Parallel
* Product -> Intersection -. Series


![image](https://user-images.githubusercontent.com/54589605/220058093-38f8d900-4a50-4af6-b5b9-ee10f69aac80.png)


### Timing Diagram

![image](https://user-images.githubusercontent.com/54589605/220058759-c606f32d-4f3e-4a19-af6d-c1731eb3fcfb.png)

### Commutative and Associative law for **EX-OR** Gate

![image](https://user-images.githubusercontent.com/54589605/220062735-538a58b2-3fd0-450d-b9f2-fb675cdaec35.png)
![image](https://user-images.githubusercontent.com/54589605/220062429-25ae5969-786f-49be-8ea3-16e33365310e.png)

> Hence, **EX-OR** obeys both **Commutative as well as Associative** law.

![image](https://user-images.githubusercontent.com/54589605/220066598-92c3c0fe-83df-4b1b-bec0-0944ff2274a0.png)
![image](https://user-images.githubusercontent.com/54589605/220066929-7088e22f-a7cd-4383-be38-3da64748c85a.png)


> **EX-OR** Gate doesn't have **Enabled and Disabled** inputs.

* A Ex-OR 0 -> A [This behaves as a **buffer**]
* A Ex-OR 1 -> A' [This behaves as a **inverter**]

* 0 -> Buffer
* 1 -> Inverter
* For **same inputs** in Ex-OR gate, we get **0**.
* For **different inputs** in Ex-OR gate, we get **1**.

![image](https://user-images.githubusercontent.com/54589605/220067634-98f88636-c725-4f7b-9d05-44100c578013.png)
![image](https://user-images.githubusercontent.com/54589605/220068074-9becc9b1-6d17-4eb8-9b07-7356c0122278.png)
![image](https://user-images.githubusercontent.com/54589605/220068569-aea5649d-e60e-44cf-9483-264c091adfcd.png)




### Questions

![image](https://user-images.githubusercontent.com/54589605/220037854-4a92aaab-56a9-45b9-aab1-037aba5a4e5b.png)
![image](https://user-images.githubusercontent.com/54589605/220041911-e7d3f3c3-d84e-4b48-9fc0-2041e642e422.png)
![image](https://user-images.githubusercontent.com/54589605/220043723-7c9e0330-8135-4577-b20c-75cf56bbc525.png)

![image](https://user-images.githubusercontent.com/54589605/220070776-4c9add00-7c86-459c-aa98-f5594848b2c3.png)
> Here only in the above question, Ex-OR behaves like an **OR** Gate.

![image](https://user-images.githubusercontent.com/54589605/220071988-ed9db912-1b45-44a2-9da7-2edc728becf3.png)

![image](https://user-images.githubusercontent.com/54589605/220072814-f68aea12-ce57-410d-baf2-ed560d8a1c25.png)
> Here only in the above question, Ex-OR behaves like an **OR** Gate.

## Doubt_Clearing_session (8) [22nd Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/220611772-3898f186-04c4-490c-af3d-83e193720746.png)

> Here **Ex-OR** is behaving like an **OR** Gate.

## **Ex-NOR** Gate

* Ex-OR + NOT -> Ex-NOR

![image](https://user-images.githubusercontent.com/54589605/220612827-62426f0f-613a-47b8-8e0b-97a9be8a38da.png)
![image](https://user-images.githubusercontent.com/54589605/220613170-d252cde3-e74b-4647-b10b-2a2d7145097b.png)
![image](https://user-images.githubusercontent.com/54589605/220614128-aeedf9bc-c708-4f18-b015-84be930c0dbc.png)
![image](https://user-images.githubusercontent.com/54589605/220614197-9e2a06e0-3211-4eee-96c5-f6809af9e780.png)
![image](https://user-images.githubusercontent.com/54589605/220616845-8a758ea3-e75e-4be3-a46a-f685e425ead3.png)

> **Ex-NOR** gate does not satisfy **associative** law.

![image](https://user-images.githubusercontent.com/54589605/220617280-433feffe-499c-4f68-a3f0-5d28852806bd.png)

3. ![image](https://user-images.githubusercontent.com/54589605/220618396-1d1ae2fe-e637-4ddc-9661-a01e0f5f84e0.png)
4. ![image](https://user-images.githubusercontent.com/54589605/220618718-9003545e-7a68-423b-b15d-e781c7536d6e.png)
![image](https://user-images.githubusercontent.com/54589605/220619232-6d5b57c5-a85c-476d-bdcc-f7948b3ed7ea.png)

> **2 and 4** are same.

![image](https://user-images.githubusercontent.com/54589605/220620040-9f1c8cad-7492-4b9c-b083-71adaaf93df3.png)

> **1 and 4** are not complements to each other.


1) **Ex-NOR** -> **Even** no. of 1s
2)  **Ex-OR** -> **Odd** no. of 1s
3) Only include two(A and B)
4) (1) and (4) are different. In **1**, we are taking all **three** together. In **4**, we are taking **A and B** First and then the result of **A and B** with **C**. 

![image](https://user-images.githubusercontent.com/54589605/220620113-b4ceb3d9-c2b4-403a-b9f2-d9223e360ff5.png)
![image](https://user-images.githubusercontent.com/54589605/220620511-8b58932a-765c-4fd4-a986-dd9f609fce60.png)
![image](https://user-images.githubusercontent.com/54589605/220620677-b9b64fec-7876-48e4-9f25-cb9befeef8c1.png)

> These above operations, **2,4 and 6** all are same. But these are not **equal** to **Ex-NOR**.

![image](https://user-images.githubusercontent.com/54589605/220621354-68a7f593-6312-4ea8-86dc-9bee1921032a.png)
![image](https://user-images.githubusercontent.com/54589605/220621791-2525ed35-ab51-4711-a0ba-3916a80b7501.png)

> Y1,Y3 and Y4 are **equal**.
> From this, we can conclude that **Ex-NOR** does not obey **Associative** property.

![image](https://user-images.githubusercontent.com/54589605/220622377-7ec63ed1-fb80-41b3-a82e-a052264e27e6.png)

> From this, we can conclude that **Ex-NOR** obeys **Commutative** property.

![image](https://user-images.githubusercontent.com/54589605/220622491-807729ce-0b2c-42a8-bfb8-ccbc32c78f66.png)
![image](https://user-images.githubusercontent.com/54589605/220623029-acd45a5c-a7cf-4908-a640-f6ed040d451d.png)

> From this, we can conclude that **Ex-NOR** does not obey **Associative** property.


### **Associative** property

![image](https://user-images.githubusercontent.com/54589605/220623270-18d72487-b04a-4702-9635-eca76669860b.png)

![image](https://user-images.githubusercontent.com/54589605/220623453-7a97982d-4c95-4b2d-8de6-1fc2e7cd56da.png)
![image](https://user-images.githubusercontent.com/54589605/220623690-8c5e946d-32ad-4069-8fb8-0a63580a4572.png)

> These *two* are **equal** we have seen but this is not associative law. If it is **equal** to **A Ex-NOR B Ex-NOR C**, then only we can say that this follows **Associative** property.

![image](https://user-images.githubusercontent.com/54589605/220623764-961933e2-2496-4ae1-bf44-82b582c51544.png)

> They are not equal, hence **Ex-NOR** does not obey **Associative** law.

![image](https://user-images.githubusercontent.com/54589605/220624103-7667c5e8-75c3-49c9-a0df-3c88659e091d.png)


> When one of the **inputs** is **1** for **Ex-NOR** gate, then it behaves as a **Buffer**.
> When one of the **inputs** is **0** for **Ex-NOR** gate, then it behaves as an **Inverter**.

* 1 -> Buffer
* 0 -> Inverter

![image](https://user-images.githubusercontent.com/54589605/220625167-9708d015-0b15-43a3-b2e5-2483db11c87a.png)

> Opposite to **Ex-OR**.

![image](https://user-images.githubusercontent.com/54589605/220625506-03b99876-fec8-4695-88d9-0701deccb9c6.png)


![image](https://user-images.githubusercontent.com/54589605/220626917-ecb00fff-686e-490c-af05-68cd1d3394e9.png)
![image](https://user-images.githubusercontent.com/54589605/220627300-1833e7c0-947f-44b0-9291-5d0fef80ab0f.png)
![image](https://user-images.githubusercontent.com/54589605/220627337-22fbb1db-e7fd-4923-8e49-0416b998f7e4.png)
![image](https://user-images.githubusercontent.com/54589605/220627411-5ddccd8d-59ec-4acc-97d3-0a7b45950d7c.png)

* y= A'

![image](https://user-images.githubusercontent.com/54589605/220627490-51c91092-947b-4fc5-b89f-a2fff523846e.png)
![image](https://user-images.githubusercontent.com/54589605/220628046-3cddfa11-c885-4920-bcf1-b253f6869025.png)


### Questions

![image](https://user-images.githubusercontent.com/54589605/220630891-9bafa6d0-289c-4c2e-8b4d-2a8ee64ed9b4.png)
![image](https://user-images.githubusercontent.com/54589605/220631162-7557c2d2-3d52-4679-8c62-ce072b31a38e.png)

> In the above questions, because of the **complements in A' and B'** in **two different questions** circled in the image, the symbol(**Ex-OR**) changes or gets **complemented once** into **Ex-NOR** gate.

![image](https://user-images.githubusercontent.com/54589605/220631455-edc1dac6-4197-499d-86bb-2dbf05a2722c.png)

> Here because of **two complements i.e A' and B'** in the **same question**, the symbol(**Ex-OR**) changes or gets **complemented two times**, **once for A' and once for B'**. Hence after **two** complements, the symbol is back to **Ex-OR**.
> The **conclusion** is that the **no. of complements in the question**, the **no. of times** we have to perform **complement** of the **symbol**.

![image](https://user-images.githubusercontent.com/54589605/220632772-39d98fcd-69e7-4e35-88a3-518cf2fac2e5.png)
![image](https://user-images.githubusercontent.com/54589605/220633082-3acc5450-cd22-40bd-a7c4-46acf0158504.png)
![image](https://user-images.githubusercontent.com/54589605/220634513-474917ec-8a44-4d3a-8438-039f92d8bf42.png)
![image](https://user-images.githubusercontent.com/54589605/220635000-b65b84fd-2d35-408f-af83-8cfd19cb01e3.png)
![image](https://user-images.githubusercontent.com/54589605/220635046-79b33c7a-7417-4134-b1b5-c981d049a4d8.png)
![image](https://user-images.githubusercontent.com/54589605/220635412-a70b4533-dfac-49a6-a298-7825b9a10632.png)
![image](https://user-images.githubusercontent.com/54589605/220636008-4ae55d83-4c47-40d4-b403-494ef63b0d19.png)
![image](https://user-images.githubusercontent.com/54589605/220636112-6e5a726d-e24c-486b-837c-dce259e276ea.png)
![image](https://user-images.githubusercontent.com/54589605/220636544-bf4e2f7c-1c87-471b-936d-2bb24b38d9d0.png)


## Summary of **Ex-OR and Ex-NOR** Gates

![image](https://user-images.githubusercontent.com/54589605/220637511-a4a966e6-05a4-4c3f-bf97-d7b88e0c0e00.png)

* Equality Detector -> When inputs are the **same**, we get **1**.
* Inequality Detector -> When inputs are **different**, we get **1**.
* Anti-coincident Gate -> Different inputs or when inputs are different, we get **1**.
* Coincident Gate -> Same input or when both inputs are the same, we get **1**.


### Questions

![image](https://user-images.githubusercontent.com/54589605/220642385-b1e5d882-8474-4268-8d8e-4962ae35db06.png)
![image](https://user-images.githubusercontent.com/54589605/220649022-73e6167f-03a0-47e9-be2c-d6430fe4234d.png)
![image](https://user-images.githubusercontent.com/54589605/220649563-d3498432-36d0-49bd-b908-18bd91194e26.png)
![image](https://user-images.githubusercontent.com/54589605/220651835-9cd91e63-dc4a-4dc7-b28f-1a3276b21c66.png)
![Logic_Gates_1](https://user-images.githubusercontent.com/54589605/220826567-eb2c46ee-1c37-4a8a-a527-ab50b4820266.jpeg)
![Logic_Gates_2](https://user-images.githubusercontent.com/54589605/220826575-04e931cd-70a6-43de-a0f1-719212fd7c71.jpeg)
![Logic_Gates_3](https://user-images.githubusercontent.com/54589605/220826577-9872694d-e080-4433-b4df-6f54ede5241d.jpeg)

## Logic Gates-II (9) [25th Feb 2023]

> In **Q1**, if both **inputs** are the same then we get **1** as the **ouput**, as **Ex-NOR** is called as a  **equality detector**.

* **Ex-NOR** -> **equality detector**
* **Ex-OR** -> **Inequality detector**.

### Questions

![image](https://user-images.githubusercontent.com/54589605/221355510-60f62ca5-fb09-4ef5-9087-f9ec02057ff4.png)
![image](https://user-images.githubusercontent.com/54589605/221355487-4a28cd5f-7808-41d6-9e6d-567abf1cca03.png)

> Sir made a mistake, in the above question. It should be **C**.
![image](https://user-images.githubusercontent.com/54589605/221356312-b3ce4f25-4b6d-4a0f-b06b-5c591b3d6644.png)
![image](https://user-images.githubusercontent.com/54589605/221356763-2d9301d5-bb0b-4788-86d0-dd414cd43c9d.png)

**Important**
![image](https://user-images.githubusercontent.com/54589605/221356745-f2d1e8ad-0a25-40ec-b8a8-d3d0d9dca746.png)

* y=1 is possible when all of the inputs are **ABC or all of them are 1** as the last gate is an **AND** gate and for and gate, it is **1** when all of the **inputs are 1**.
* For **Ex-NOR**, we get **1**, when the inputs are the **same**, that why **B and C** are **1**.
* For **Ex-OR**, we get **1**, when the inputs are **different**, we already found out that **B** should be **1** then **A** should be **0**.

![image](https://user-images.githubusercontent.com/54589605/221357053-74339990-8c55-43ec-b2ab-28197bc1193d.png)

* As 20 is even, we can do for **2** and found out the answer for **20**.

![image](https://user-images.githubusercontent.com/54589605/221357314-d171c3d6-8147-49f0-aa0e-a2b787925185.png)
![image](https://user-images.githubusercontent.com/54589605/221357359-ba840b9a-2978-406a-8ecc-e88d17d354c5.png)
![image](https://user-images.githubusercontent.com/54589605/221357765-4e2d8523-0ceb-49e6-9d27-36ee7d003a63.png)


### Alternative Logics

![image](https://user-images.githubusercontent.com/54589605/221357982-ce111799-04b4-4ae6-bcd2-0106d3f4da7b.png)

* Buffer -> Even no. of **NOT** Gates.
* NOT -> Bubble + buffer
* AND -> AB **Or** ((AB)')' = (A' + B')'   [Double complement method]

> For the **A' and B'**, we are taking **one bubble each**. For **(A' + B')'**, we have to use **NOR** gate here.
> It is called as a **Bubbled NOR gate**. It is **identically equal** to **AND** gate.

![image](https://user-images.githubusercontent.com/54589605/221358545-9eaa5f52-a349-456f-873c-95af1aa9dbc6.png)

![image](https://user-images.githubusercontent.com/54589605/221358207-15c4806e-2a96-498d-817a-4aa3cd29bc62.png)


* OR -> A + B Or ((A + B)')' = (A' * B')'   [Double complement method]

> For the **A' and B'**, we are taking **one bubble each**. For **(A' + B')'**, we have to use **NAND** gate here.

* NAND -> (AB)' -> (A' + B')

> As there is a **bar/complement** already, so we don't have to use the **Double complement method** here. We can just use **two bubble, one each for A' and B'**. We are using an **OR** gate.

* NOR -> (A + B)' -> (A' * B')

> As there is a **bar/complement** already, so we don't have to use the **Double complement method** here. We can just use **two bubble, one each for A' and B'**. We are using an **AND** gate. It is called as **Bubbled AND** gate. It is **identically equal** to **NOR** gate.

![image](https://user-images.githubusercontent.com/54589605/221358482-2a1e78c9-015f-4aff-a525-3404cfcb53b6.png)

* Bubbled NAND(4) -> OR
* Bubbled OR(5) -> NAND


![image](https://user-images.githubusercontent.com/54589605/221358743-a240a070-8bc8-4fd0-b5e7-e0a16b5d9f56.png)
![image](https://user-images.githubusercontent.com/54589605/221358797-18197379-ed4b-4bbb-9e2b-862bc80d3c29.png)


### Method 1

![image](https://user-images.githubusercontent.com/54589605/221359261-12b996f3-e80d-4851-bc34-0c1ac023157e.png)

> Using **AND** and **OR** gates.

![image](https://user-images.githubusercontent.com/54589605/221359437-5170e797-bae1-4277-8e49-6a3dd19b9f62.png)

* **Bubbled OR gate** is nothing but **NAND** gate only.

> The **two level AND-OR** logic is nothing but **two level NAND-NAND** logic. They are identical equal to each other. 
> We are implementing with **NAND** gate. Whenever we want to express some expression in **NAND** gate, then the expression must be in **SOP** form. If it is not in **SOP** form, then we have to convert it into **SOP** form.

* NAND -> SOP form

![image](https://user-images.githubusercontent.com/54589605/221359529-818c7cf7-14d9-4645-9ab9-70b4e93db976.png)
![image](https://user-images.githubusercontent.com/54589605/221359626-a24ec6cd-f69c-4306-aa7a-413ba23dcd40.png)

### Method 2

![image](https://user-images.githubusercontent.com/54589605/221359736-b4358374-f3b1-4e3b-8414-cc3dcfe66f3b.png)


![image](https://user-images.githubusercontent.com/54589605/221359931-bcacec53-cbfd-4f59-b4cb-8bb700d254c1.png)

* NOR -> POS form
* **Bubbled AND** gate is nothing but **NOR** gate.

![image](https://user-images.githubusercontent.com/54589605/221359997-70876a51-ae7c-4102-a11f-e0d1a55bad5b.png)
![image](https://user-images.githubusercontent.com/54589605/221360027-7fccca64-73b3-4a3e-a129-bf6c0707fb84.png)
![image](https://user-images.githubusercontent.com/54589605/221360080-4284cdcf-33a8-45a8-ab5c-68ea69ba763a.png)

### Notes

![image](https://user-images.githubusercontent.com/54589605/221360094-c2234fc3-d3ae-4293-abce-21383da60082.png)
![image](https://user-images.githubusercontent.com/54589605/221360120-c21624bd-b5f8-4295-86f3-8a8875b08fe4.png)

* It is valid for **two levels** only. 


![image](https://user-images.githubusercontent.com/54589605/221360300-5571d07a-762c-49ae-b5a1-96fea1404b19.png)

* **3 NAND** gates are required to implement the given expression.

![image](https://user-images.githubusercontent.com/54589605/221360434-c83bdd68-ec0e-4690-9047-7502c39f50cb.png)

* **3 NOR** gates are required to implement the given expression.


![image](https://user-images.githubusercontent.com/54589605/221360735-d3f0486d-033b-43e1-945e-6719b11c5829.png)

* **4 NAND** gates are required to implement the given expression.


## Universal Gates

![image](https://user-images.githubusercontent.com/54589605/221360773-7d8e8717-eede-4dbc-b00b-dc0e611a16db.png)
![image](https://user-images.githubusercontent.com/54589605/221360835-e570a765-fce0-451c-a7fc-39f2bb66c46b.png)
![image](https://user-images.githubusercontent.com/54589605/221360951-ffc188ea-a2fc-4c75-8519-c9e48195c51f.png)
![image](https://user-images.githubusercontent.com/54589605/221360969-e0042fee-17f6-4bdd-b2b9-60561bb50deb.png)
![image](https://user-images.githubusercontent.com/54589605/221361181-87ec3340-8afd-41a7-93ac-1453ef400e9d.png)
![image](https://user-images.githubusercontent.com/54589605/221361225-33f24fcc-d026-405b-af35-707501710bab.png)
![image](https://user-images.githubusercontent.com/54589605/221361339-d8f7acf8-eea1-4e12-98f5-2abd5c61163b.png)
![image](https://user-images.githubusercontent.com/54589605/221361394-99d995dc-0ec3-4c72-9d96-a911db831140.png)

* Barfi Design. NAND Barfi. **Kaju Barfi Design**. For both **EX-OR and EX-NOR**, we use the **Barfi NAND** design.
* **4 NAND** gates for **EX-OR**

### NOR Gate

* **Bubbled NOR** gate is **AND** gate.
* **Bubbled AND** gate is **NOR** gate.

![image](https://user-images.githubusercontent.com/54589605/221361534-91b9e43c-e072-45eb-b1f6-423ceb60b6b2.png)
![image](https://user-images.githubusercontent.com/54589605/221361577-d69450c0-0431-421f-85cf-6a9703354fe0.png)


* Barfi Design. NOR Barfi. **Badam Barfi Design**. For both **EX-OR and EX-NOR**, we use the **NOR Barfi** design.

![image](https://user-images.githubusercontent.com/54589605/221361693-56b2e8c8-087b-4631-936d-5bef9f7bd523.png)

* **5 NOR** gates for **EX-OR**

![image](https://user-images.githubusercontent.com/54589605/221361756-19f930c0-ba82-4e52-ba51-c605f45e451b.png)

* **4 NOR** gates for **EX-NOR**


![Logic_Gates_4](https://user-images.githubusercontent.com/54589605/221362300-68281cc5-9c59-460e-bb62-bfbcc9126e5b.jpeg)
![Logic_Gates_5](https://user-images.githubusercontent.com/54589605/221362301-02ae773b-860b-4899-a5e1-5874fffbd195.jpeg)
![Logic_Gates_6](https://user-images.githubusercontent.com/54589605/221362304-b069ca31-df6e-4369-871f-bc6844c85b51.jpeg)
![Logic_Gates_7](https://user-images.githubusercontent.com/54589605/221362305-51ceae4c-1b34-4a07-b9aa-69091902404b.jpeg)
![Logic_Gates_8](https://user-images.githubusercontent.com/54589605/221362320-e0a44930-aae9-46f5-a359-4066a35eaabc.jpeg)


## Logic Gates-III (10) [26th Feb 2023]

* Link -> https://unacademy.com/class/logic-gates-iii/LU60VD4I [**Very Imporant**] 

> Practice these type of questions. They are very hard.

![image](https://user-images.githubusercontent.com/54589605/221401470-e7c3d75f-ec09-4966-9bc9-e1a1445d076e.png)

## Venn Diagrams

* S -> Sample space/Universal Set

![image](https://user-images.githubusercontent.com/54589605/221401589-5f0c7a2d-74c5-473a-a068-a85e5b730514.png)
![image](https://user-images.githubusercontent.com/54589605/221401638-d826dc58-92a3-427b-8549-ba1df129837b.png)
![image](https://user-images.githubusercontent.com/54589605/221401669-4a96daf5-0149-43a0-993b-147e3132062b.png)
![image](https://user-images.githubusercontent.com/54589605/221401709-8505a6f6-2344-4d54-a185-efda7b80e8c3.png)
![image](https://user-images.githubusercontent.com/54589605/221401841-04afdf24-9a94-4722-ba7e-347d765c7e75.png)
![image](https://user-images.githubusercontent.com/54589605/221402006-25dc0c89-3c1d-4b8c-997d-2b9f8e6e43e6.png)
![image](https://user-images.githubusercontent.com/54589605/221401928-34bdc5c5-91a3-42ea-9cf9-df27e5de91db.png)
![image](https://user-images.githubusercontent.com/54589605/221402076-a12d2027-e5b9-4c2f-a977-7708d44267b5.png)

* For **EX-OR**, the things **common** between **A and B**, won't come. The things which are not present in **A or B** won't come as well.

![image](https://user-images.githubusercontent.com/54589605/221402207-b78ceab1-1512-4ebc-8c47-80bc72d1bcc0.png)
![image](https://user-images.githubusercontent.com/54589605/221402261-68fdcdc5-5897-40ca-a03c-823e8e75502a.png)

* AB -> Product -> Intersection -> Common part

### Questions

![image](https://user-images.githubusercontent.com/54589605/221402670-07b4a36b-285f-418f-bb31-419043f2cc2b.png)
![image](https://user-images.githubusercontent.com/54589605/221402660-9a26e038-0f7d-4661-98d1-9d9a7555ff15.png)
![image](https://user-images.githubusercontent.com/54589605/221402650-598541ae-ea63-4531-adce-e2ba334354d7.png)
![image](https://user-images.githubusercontent.com/54589605/221402847-61115748-3173-44da-ae16-1fb023ccc44a.png)
![image](https://user-images.githubusercontent.com/54589605/221402883-b8016ff3-d5bb-4c03-97af-1a1f92b02405.png)
 
![image](https://user-images.githubusercontent.com/54589605/221403120-f2dc9bc9-e23f-4fee-8895-cb6298f89f5e.png)
![image](https://user-images.githubusercontent.com/54589605/221403162-2cc29516-29bb-46ee-8d1c-9dd2000b2e25.png)
![image](https://user-images.githubusercontent.com/54589605/221403184-7a8dd7b3-6581-40c2-8109-cd617230fefd.png)
![image](https://user-images.githubusercontent.com/54589605/221403242-b0b6a5e9-9e52-4eca-aa46-9d19b401e007.png)
![image](https://user-images.githubusercontent.com/54589605/221403297-c9a29865-e705-4951-88b5-a8b698cecba7.png)

> In the above question, don't try to do it directly. There will be chances of making mistakes. Try to analyze it without the bubble. 
> Whenever we have to this type of questions for **NAND and NOR** gates, we have to do it like this only, othewise we will make some mistake.
> For these type of questions, **Remove the bubble** and try to analyze.

![image](https://user-images.githubusercontent.com/54589605/221407159-c7d4e669-5f00-466c-aa68-4559ac37e1df.png)

![image](https://user-images.githubusercontent.com/54589605/221407199-b606faf4-8dab-4c5d-82ab-677bbd93f9aa.png)
![image](https://user-images.githubusercontent.com/54589605/221407331-d3e7e08d-703d-4ebc-9f56-e2f7b861f5c3.png)

![image](https://user-images.githubusercontent.com/54589605/221407718-9f06be73-395a-4c01-8d7c-3b30facc119a.png)

> For these type of questions, **Remove the bubble** and try to analyze.

![image](https://user-images.githubusercontent.com/54589605/221407887-2c43d196-19a5-4b0d-949a-9f57acdfdffb.png)
![image](https://user-images.githubusercontent.com/54589605/221408245-4a6a7150-fe5b-4ad0-af55-cbcdc34b6cd4.png)

![image](https://user-images.githubusercontent.com/54589605/221408527-f44b19e4-6998-4b1a-b48a-d9ad35cae138.png)
![image](https://user-images.githubusercontent.com/54589605/221408743-ce35bde2-1f6f-4e46-b643-8c057d8a47f2.png)
![image](https://user-images.githubusercontent.com/54589605/221408750-f204d64f-b4cc-4109-9c08-b235047b4968.png)
![image](https://user-images.githubusercontent.com/54589605/221408822-1211e62a-c488-424b-a84c-b4e6fd609103.png)
![image](https://user-images.githubusercontent.com/54589605/221409052-b81aefd9-cb15-405c-82a4-42f31d948252.png)
![image](https://user-images.githubusercontent.com/54589605/221409067-8fe3b71d-d2be-4789-827b-74ef981aaa91.png)

![image](https://user-images.githubusercontent.com/54589605/221409198-62797fa6-efc3-4b1d-8176-7d211169fc95.png)
![image](https://user-images.githubusercontent.com/54589605/221409264-2ae3b828-4d22-4e98-ad50-acc2586b52b7.png)
![image](https://user-images.githubusercontent.com/54589605/221409490-92c37a4f-6df5-45ec-9822-a4533836768a.png)
![image](https://user-images.githubusercontent.com/54589605/221409571-8268d868-ab56-4e33-87a6-eaf4aed6644f.png)

* Transition -> Values changing from 0 to 1 and 1 to 0. **0 to 1** is one transition. 

![image](https://user-images.githubusercontent.com/54589605/221409630-86d0d7b7-798e-449e-a424-cbaf32c8cf93.png)

![image](https://user-images.githubusercontent.com/54589605/221409795-0661bb3a-2015-470e-8f83-10d3f1423e77.png)
![image](https://user-images.githubusercontent.com/54589605/221409830-33d53014-5cac-40e6-acb8-081a1ad8d2cf.png)
![image](https://user-images.githubusercontent.com/54589605/221410174-b01d745a-1452-4398-bae8-fc6433405839.png)
![image](https://user-images.githubusercontent.com/54589605/221410190-a348d509-342a-4804-872a-780785c0821b.png)
![image](https://user-images.githubusercontent.com/54589605/221410401-169b0a38-4726-44a4-ac61-212671ce4b96.png)


![image](https://user-images.githubusercontent.com/54589605/221410745-38de010c-6d3b-4c3e-b3d6-1f66896aa16f.png)
![image](https://user-images.githubusercontent.com/54589605/221410872-1adc9190-7f8a-455d-83f5-82792ca2a897.png)
![image](https://user-images.githubusercontent.com/54589605/221410932-e522c1ca-f877-4219-8bab-870bef6edf07.png)

* Should be **60** instead of **80**.

![image](https://user-images.githubusercontent.com/54589605/221411008-0bfe5c3a-c351-44ab-bc4d-081cee2c1926.png)

![image](https://user-images.githubusercontent.com/54589605/221411257-2cd7472d-0219-4516-ac4d-9945020d15f2.png)
![image](https://user-images.githubusercontent.com/54589605/221411352-7f9ff2cf-fa34-44c3-83c1-f71c6d97793f.png)
![image](https://user-images.githubusercontent.com/54589605/221411383-8edf9f53-8bf7-4b91-91b5-1331a91bf1c6.png)
![image](https://user-images.githubusercontent.com/54589605/221411391-31acb28e-4bd6-4ae4-b5b2-11c180786fdf.png)


![image](https://user-images.githubusercontent.com/54589605/221411451-b7032db2-07db-40dd-99ff-349cfb79bac8.png)
![image](https://user-images.githubusercontent.com/54589605/221411464-739c5f8e-a4cb-46e5-b921-a721389b723e.png)

* Same Problem.

## Logic Gates-IV (11) [27th Feb 2023]

![image](https://user-images.githubusercontent.com/54589605/221481459-9d9508fe-cf09-413a-bcdd-c009ced21ab5.png)
![image](https://user-images.githubusercontent.com/54589605/221481841-d74a6f34-56c5-492f-ae89-3bf924a231ad.png)
![image](https://user-images.githubusercontent.com/54589605/221482009-0f8b92e2-80bb-419d-84d6-a64bb0bab959.png)
![image](https://user-images.githubusercontent.com/54589605/221483803-5f6644f5-c6d3-4eda-9f1c-115354bcb8d5.png)
![image](https://user-images.githubusercontent.com/54589605/221484185-63f00728-45ad-4da3-92a5-21ce81048d0d.png)

* Minterms(1,2,4,7) -> 3-input Ex-or Gate. [**IMPORTANT, ATM PIN**]
* Minterms(a,b,c) -> ab + bc + ca -> (3,5,6,7) -> [**IMPORTANT, Mobile pin**] 

![image](https://user-images.githubusercontent.com/54589605/221484821-9032f518-0db9-490b-82d2-9e5ca4cab32f.png)
![image](https://user-images.githubusercontent.com/54589605/221486326-0a8f1c62-91bd-405b-9ea3-bd1d69302326.png)

## Functionally Complete

![image](https://user-images.githubusercontent.com/54589605/221488301-97ac85d5-e8ae-4a0f-8cd7-46f3c7e26081.png)
![image](https://user-images.githubusercontent.com/54589605/221488748-772d9dae-c40f-4e38-91f9-7e94547d836e.png)

> We need to design **one** special circuit that I can use for **AND, OR, as well as NOT** Gate also. This special circuit is called as a **Functionally Complete**. Using the **AND, OR and NOT** Gate, we can implement any and all boolean functions.**AND, OR and NOT** Gates are given as a whole group only. Not only **one** gate but the whole group(**AND, OR and NOT** Gate) is called as the **Functionally Complete Set**.
> In **one** box only, all of the **three** gates are there only. All of the logic expressions we can do.

> We know that using **NAND** Gate we can implement all of the logic expressions. NAND is a universal gate. Hence we can call **NAND** a **Functionally Complete Set**.
> We know that using **NOR** Gate we can implement all of the logic expressions. NOR is a universal gate. Hence we can call **NOR** a **Functionally Complete Set**.

* **NAND** and **NOR** -> **Functionally Complete Set**
* **NAND** -> (NOT + AND) -> With this two we can create **NAND**, hence these two gates are also considered as  **Functionally Complete Set**.
* **NOR** -> (NOT + OR) -> With this two we can create **NOR**, hence these two gates are also considered as  **Functionally Complete Set**.

![image](https://user-images.githubusercontent.com/54589605/221491188-4995d764-edd7-4575-b0a7-f4e611ae5f9b.png)
![image](https://user-images.githubusercontent.com/54589605/221491382-59842116-bcd2-47c6-9272-587da0dc846e.png)

* **Functionally Complete Set** 

1) **AND, OR, as well as NOT** Gates
2) **NOT + AND**
3) **NOT + OR**
4) **NAND**
5) **NOR**

![image](https://user-images.githubusercontent.com/54589605/221491842-2efc605c-bb53-42fc-b1b8-08daf7faae9a.png)
![image](https://user-images.githubusercontent.com/54589605/221492117-e227f89f-4402-44f8-9385-08c2f5996316.png)

> Here, first we have to try and find **NOT** gate first. After that we have to try and get **AND or OR** Gate either one of them is fine. As **NOT + AND** or **NOT + OR** are **Functionally Complete Set**.

![image](https://user-images.githubusercontent.com/54589605/221492566-d3763648-dcd2-4602-aa60-b26ec13fb969.png)

> In place of Boolean Variables, substitude them with **A,0 and 1**.

![image](https://user-images.githubusercontent.com/54589605/221493109-d0ca07b7-cac0-458d-b814-dfe515045f47.png)

* **Both AND and OR** are **not required**. **One** is sufficient. Anyone of  **AND** or **OR** Gate is fine.

![image](https://user-images.githubusercontent.com/54589605/221493781-735f698b-8743-4065-be6c-89e3cf39f366.png)
![image](https://user-images.githubusercontent.com/54589605/221494077-01e28657-4d37-43d2-b063-3a49c1173fcf.png)
![image](https://user-images.githubusercontent.com/54589605/221495143-a499aa16-a876-4852-8473-b722f7fc9b05.png)
![image](https://user-images.githubusercontent.com/54589605/221495573-d6015add-327a-4d40-bc0f-e5eb129bb176.png)
![image](https://user-images.githubusercontent.com/54589605/221496374-8ef3cfba-49e1-43a0-951e-2b13cabc2e18.png)
![image](https://user-images.githubusercontent.com/54589605/221511070-18af10ed-9aa0-4bd4-b6cd-049b562273dc.png)
![image](https://user-images.githubusercontent.com/54589605/221555994-e0fe1034-f308-48ef-8c88-21d93c7985bc.png)

![Logic_Gates_9](https://user-images.githubusercontent.com/54589605/221578186-7eac2208-75e0-44eb-8a34-31e04d49a095.jpeg)
![Logic_Gates_10](https://user-images.githubusercontent.com/54589605/221578194-6ae275de-76cb-4b14-8b5d-a0c13b62828a.jpeg)
![Logic_Gates_11](https://user-images.githubusercontent.com/54589605/221578200-c4d2235a-c2c6-42db-a3a0-c363e4d9adb7.jpeg)
![Logic_Gates_12](https://user-images.githubusercontent.com/54589605/221578206-25c769aa-46ee-4081-9fe4-f0ea2dafbd28.jpeg)

## K-Map (15) [7th March 2023]

* Purpose to minimize boolean expression.

![image](https://user-images.githubusercontent.com/54589605/223485067-1e07e93e-518e-441a-a05e-f36a227fcd42.png)
![image](https://user-images.githubusercontent.com/54589605/223485227-759cd1bd-cdc6-4828-83ee-125aba72c20a.png)
![image](https://user-images.githubusercontent.com/54589605/223486676-1a30a15f-671c-4ddb-808a-d8511df056a3.png)

* Only one bit difference must be there.

* In **grey code**, we have to ensure that **only one bit changes**.
* Grey Code -> 00 -> 01 -> 11 -> 10. [Grey Code sequence, 0,1,3,2]

![image](https://user-images.githubusercontent.com/54589605/223489368-a4bfa039-52f5-49e7-8425-289c503a1e12.png)
![image](https://user-images.githubusercontent.com/54589605/223489801-be61dd48-3ba0-424a-b076-446bfd2c2132.png)

* 01 -> 10 -> Two bits change hence we go from 01 to 11 as only 1 bit changes between them.
* 11 -> 10 -> As there is one bit change.

* If two bit changes then we cannot combine A'B' with AB.

![image](https://user-images.githubusercontent.com/54589605/223492133-7e29d919-8d20-4cee-b295-a5d24437493b.png)

* Whenever there is a 1 bit changes are there, we will combine them. 
* In K-map there is only one big change.

![image](https://user-images.githubusercontent.com/54589605/223493658-a02a89b3-6b0a-4019-928a-8092b1b08a4b.png)

* whoever is near/side by of A'B', wheather the follow is at the right, left, top or bottom. Combine A'B' with that fellow, that's all.

![image](https://user-images.githubusercontent.com/54589605/223494181-82a50fed-9136-4503-a1da-bc842c722a46.png)

> In A'B'(00) and AB'(10), *A* value is changing. Whichever is changing, that thing we can remove simply. Whichever fellow is changing, remove that fellow. Whichever fellow is unchanged, that has to be written.
> In AB(11) and A'B(01), *A* value is changing. Whichever is changing, we should eliminate simply.

![image](https://user-images.githubusercontent.com/54589605/223495257-1e505f11-3f1d-4182-a77b-df64f5b6dae4.png)

* Physical Adjacent -> 0,1,2,3 there are physical adjacent. [0 -> 1 -> 2 -> 3]
* Logical Adjacent -> There put be only one bit change should appear.

![image](https://user-images.githubusercontent.com/54589605/223497761-d77d6652-f010-47dd-ada9-b80fafa65700.png)
 
* Minterms are indicated by **1**.
* Maxterms are indicated by **0**.

![image](https://user-images.githubusercontent.com/54589605/223498116-9890ec4f-86a3-423e-94ea-c37fba38442f.png)
![image](https://user-images.githubusercontent.com/54589605/223498708-7945cdda-ea76-49a2-a37c-744cabdfcb9a.png)
 
![image](https://user-images.githubusercontent.com/54589605/223498278-0fa95ce3-0591-4dca-811b-e1f1a6082dfa.png)

* Yes, that's why we are using grey code here.

* Which number system are preferrable in the K-map?

> Grey code. Because we need the logical adjacency property.

## 2-Variable K-Map

![image](https://user-images.githubusercontent.com/54589605/223514142-782c8ecb-4f6c-43d2-b937-aabd2400a07a.png)

* 4 combinations are possible.
* Each box is called as a cell.

* If it is f(A, B), then we have to maintain the **AB order**. In the K-map we can take it in any manner but the order given in the function should be maintained.

* If we change the position of the variables, then the cell numbers also changes. A and B is interchanging. It is like transpose in a matrix. Rows become columns and columns become rows.

* Whatever order we take, doesn't matter. We should maintain the order given in the function i.e f(A,B). Always maintain the order.

![image](https://user-images.githubusercontent.com/54589605/223516503-186430d3-1785-4c68-b33f-597fd0973921.png)
![image](https://user-images.githubusercontent.com/54589605/223516801-dc43d743-cd1e-4ebb-88ea-417749798e6d.png)

## 3-Variable K-Map

![image](https://user-images.githubusercontent.com/54589605/223517862-9ad9fe3e-a2f0-40ec-ad90-4c01ada41688.png)

* As there are 2 bit change from 01 to 10, hence we have 11 after 01 and at the end we have 10. We have to maintain logical adjancy.


![image](https://user-images.githubusercontent.com/54589605/223518163-cdd3ddcd-5659-48a4-aff7-0ccb0eca2649.png)

* Yes.

![image](https://user-images.githubusercontent.com/54589605/223518505-95bd9deb-91dc-40fe-b5e6-1e44f0f1d128.png)

![image](https://user-images.githubusercontent.com/54589605/223519082-5ac15cef-5fbd-4c55-a017-9222b19d3fb8.png)

* We can shuffle, ABC but we have to maintain the order from the function i.e f(A,B,C). Only maintain these order while writing.

![image](https://user-images.githubusercontent.com/54589605/223519518-71b0b80e-0659-4d5e-8f6d-f5931af166b1.png)
![image](https://user-images.githubusercontent.com/54589605/223525788-681ea6c1-9f89-45f2-be0b-a156a812d684.png)
![image](https://user-images.githubusercontent.com/54589605/223526179-b9513fee-c342-412d-8195-92a510f983d4.png)


## 4-Variable K-Map

![image](https://user-images.githubusercontent.com/54589605/223526773-ac438dcc-9fa9-47db-b69d-a4374f5c309d.png)
![image](https://user-images.githubusercontent.com/54589605/223526976-fabf1729-71cb-433c-bfc8-6b972fd7bd5a.png)
![image](https://user-images.githubusercontent.com/54589605/223527700-34ed8a76-922e-4a96-80b6-c7e9cfdbd3d5.png)

* Logical adjacent cell -> There is only one bit difference.

![image](https://user-images.githubusercontent.com/54589605/223527951-61b12c3a-6d1c-4a0e-bb33-99af2f1fd8de.png)
![image](https://user-images.githubusercontent.com/54589605/223528015-b8dbfc90-3446-4f6e-bf07-d661e9062579.png)
![image](https://user-images.githubusercontent.com/54589605/223528097-63696337-747a-4124-89dc-b80b61c2f42c.png)
![image](https://user-images.githubusercontent.com/54589605/223528178-5cc9f99d-ab02-45d8-a8f0-7fcc30601e69.png)
![image](https://user-images.githubusercontent.com/54589605/223528267-72e56483-e15f-4cd7-a394-9f124a9d5415.png)

* A'B'C'D' cell has **4** logical adjacent cell.

![image](https://user-images.githubusercontent.com/54589605/223529213-c7236b0e-2388-4c9e-98d3-b5b386600ef8.png)

* As 4-variable K-map, then the value of 'n' is 4. Hence, how many logical adjacent cell it should contain?

> 4. Every cell should contain **4** logical adjacent cell.

![image](https://user-images.githubusercontent.com/54589605/223530011-cc490eeb-bfae-41bb-a98a-a5d77dd190b0.png)
![image](https://user-images.githubusercontent.com/54589605/223530373-6c837b7f-ceaa-4d03-b5d8-5c0711bfa54c.png)
![image](https://user-images.githubusercontent.com/54589605/223530785-4d04824c-c364-4214-93f8-38d4ec775d07.png)
![image](https://user-images.githubusercontent.com/54589605/223532483-c0018b71-4d6c-4cc6-884d-c5bcbcd11a1f.png)
![image](https://user-images.githubusercontent.com/54589605/223532778-41865aa2-016e-4dd0-a127-8c3f61603d85.png)
![image](https://user-images.githubusercontent.com/54589605/223534652-84daf449-3900-416f-8d98-494629f55670.png)

* Look at the adjacent cells from the previous one to these one. The adjacent cells are the same, they do not differ. If we shuffle the variables, then everything gets shuffled but the adjacent cells will be the same. Final answer won't change.

![image](https://user-images.githubusercontent.com/54589605/223535220-b6f27b8a-c2ec-4cbf-adaa-14d8a406b52b.png)
![image](https://user-images.githubusercontent.com/54589605/223536009-ff398994-5550-4cb1-8770-f2e5378e81fd.png)
![image](https://user-images.githubusercontent.com/54589605/223536481-114ecdac-1768-451d-8720-5c4d0f41f525.png)
![image](https://user-images.githubusercontent.com/54589605/223537529-a348214c-00a0-4fd9-8cce-b313b92de2d8.png)
![image](https://user-images.githubusercontent.com/54589605/223537920-c8d51cd3-b0d9-460b-acd7-cf158848dfa4.png)
![image](https://user-images.githubusercontent.com/54589605/223538132-f3256a72-0fae-4cd7-a0f1-53eca813324a.png)
![image](https://user-images.githubusercontent.com/54589605/223538215-04264c50-67ee-4554-9d4a-d3c5897acad8.png)
![image](https://user-images.githubusercontent.com/54589605/223538318-2b7ddfb5-b06b-4703-aac0-a4780ee80bad.png)

* For OR gate, we would want to write in POS form.

![image](https://user-images.githubusercontent.com/54589605/223538475-d9e3d548-7c6a-4d68-80fb-0014cc44132a.png)

* Both positive and negative must be present. Both SOP and POS form are helpful in designing of the systems. Some we prefer SOP form and sometimes we prefer POS form. Sepends on the scenarios or based on the requirements.

![image](https://user-images.githubusercontent.com/54589605/223538901-1e7ed460-00af-42de-bdd8-10789d3d3cec.png)

* Which is low? Minterms or Maxterms are low?

> Whichever is low, that we need to implement it. That's why we need both SOP and POS form are required.

## Minimization Steps

![image](https://user-images.githubusercontent.com/54589605/223539645-956d83eb-38f1-43ae-8a07-83220b73cd30.png)

* Grouping should be done in powers of 2(2^1, 2^2, 2^3, 2^4 -> 2^n). 'n' is the number of variables. Try to go for 
2^4 cells, if not possible then go for 2^3, then go for 2^2 and then 2^1. **We should try to group maximum cells**.

* **Don't care** is like a **joker**. If I need it, then I can use it. If I don't want then I don't use it.

![image](https://user-images.githubusercontent.com/54589605/223540874-6f6543d7-a0bd-4c4a-aaa3-f0b177d0e1be.png)

* Don't care is representated by the **X or cross** symbol. **X or cross** symbol means that it can be either **0 or 1**. We can take anything.

* If we have considered, don't care as **0** and we got some benefits/helping in minimizations. Then we can take don't care as **0**.
* If we have considered, don't care as **1** and we got some benefits/helping in minimizations. Then we can take don't care as **1**.

![image](https://user-images.githubusercontent.com/54589605/223542016-e50f7c8a-260c-40bd-a9df-b189cadb91a4.png)
![image](https://user-images.githubusercontent.com/54589605/223542172-c0f5c1af-5c28-46a1-af91-a4dfd733f756.png)
![image](https://user-images.githubusercontent.com/54589605/223542546-b55300a6-00b3-4e0d-8c58-b361b58264c3.png)
![image](https://user-images.githubusercontent.com/54589605/223542623-8b238962-7993-4ebd-b1bf-8f33d90bab9e.png)

* Don't care is like this only. If it is helpful then use it. If it is not helpful then don't use it.

![image](https://user-images.githubusercontent.com/54589605/223542936-8cbd7679-96d3-47af-99c4-0ae92f16014e.png)

### Priority of grouping

> We need to go for **more no. of cells** when grouping.

* 16 -> 8 -> 4 -> 2 [All cell numbers/count]

![image](https://user-images.githubusercontent.com/54589605/223543083-10976be9-3e23-4162-a7f0-72f8be4c6917.png)


### Valid Sub Cube

> A collection of 2^m number of cells in a k-map is said to be forming a valid sub cube, provided inside the collection 2^m number of cells, every cell is logical adjacent to 'm' no. of cells.

![image](https://user-images.githubusercontent.com/54589605/223543623-0e53a3ba-af7a-4063-b49a-809b4636e3d3.png)

![image](https://user-images.githubusercontent.com/54589605/223544005-7e3c79b8-1cea-4438-b24c-d91e8b721b8c.png)

* We need to verify wheather it is a logically adjacent or not.

* How many cells we have selected?

> 4 cells.

* 4 -> 2^2 -> 2^m -> m=2. [Power of 2 is 'm' value]

>  In this group, if we take any cell, every cell should have 2 logically adjacent must be present. Every fellow must contain 2 logically adjacent cells must be present.

![image](https://user-images.githubusercontent.com/54589605/223545999-1f08fb12-5fdf-43d5-84c7-a9cfc59d6c44.png)
![image](https://user-images.githubusercontent.com/54589605/223546180-9d201e2d-9044-42aa-974c-97be48649588.png)
![image](https://user-images.githubusercontent.com/54589605/223546232-b81f40c7-49e1-46aa-9602-efce8768a977.png)
![image](https://user-images.githubusercontent.com/54589605/223546271-55ac7a5e-2a1f-4fdb-ac68-9b93ff9fcbb0.png)
![image](https://user-images.githubusercontent.com/54589605/223546328-16f931b7-403c-405c-92c9-5776b8e859d8.png)

> That why every fellow/cell in the group must contain 2 logically adjacent cells must be present. Because of these reason, these group is called as a **Valid Sub Cube**.

![image](https://user-images.githubusercontent.com/54589605/223546796-b771f4c4-f543-4acf-a5ce-70f8a8cceea4.png)

![image](https://user-images.githubusercontent.com/54589605/223546912-ace419e2-f885-4095-b65c-8c88967b9c69.png)

* Need to verify if it is a valid sub cube or not?



![image](https://user-images.githubusercontent.com/54589605/223544219-28878fbb-0f8d-4408-a19e-1619e21b3813.png)

* Need to verify if it is a valid sub cube or not?

> It is a valid sub cube.

* How many cells are combined?

> 4.

* What is the 'm' value here?

> 4 -> 2^2 -> 2^m -> m=2. 'm' value is **2**. Hence each cell in the group must have 2 logically adjacent cells to be required.

![image](https://user-images.githubusercontent.com/54589605/223547463-fc730ccd-235e-4d77-a268-6c85c52ffa60.png)
![image](https://user-images.githubusercontent.com/54589605/223547511-4abff9e7-cbfe-44d5-949b-a9435c98ad34.png)
![image](https://user-images.githubusercontent.com/54589605/223547543-a95b371e-18fa-4f99-8847-78becb979297.png)
![image](https://user-images.githubusercontent.com/54589605/223547575-e9d91521-7c03-4e4b-999d-a9a8db73cac0.png)

![image](https://user-images.githubusercontent.com/54589605/223547702-c37c32d9-f376-4e8b-9b07-63a347f7dfe4.png)

* Need to verify if it is a valid sub cube or not?

> It is not a valid sub cube.

* How many cells are combined?

> 4.

* What is the 'm' value here?

> 4 -> 2^2 -> 2^m -> m=2. 'm' value is **2**. Hence each cell in the group must have 2 logically adjacent cells to be required.

![image](https://user-images.githubusercontent.com/54589605/223547868-51d5e7bd-7cec-446c-b9d6-42ac74740550.png)

* 0000 -> Contains **only one** logically adjacent cells which is **0100**.

> Hence it is not a valid sub cube.

![image](https://user-images.githubusercontent.com/54589605/223548201-d6b9378e-1916-40bc-beb5-dbbdebae61e4.png)

![image](https://user-images.githubusercontent.com/54589605/223548286-104584b5-c48e-460b-be55-2cfa9c26898b.png)

* **Four black circles are grouped together**.

* Need to verify if it is a valid sub cube or not?

> It is a valid sub cube.

* How many cells are combined?

> 4.

* What is the 'm' value here?

> 4 -> 2^2 -> 2^m -> m=2. 'm' value is **2**. Hence each cell in the group must have 2 logically adjacent cells to be required.


![image](https://user-images.githubusercontent.com/54589605/223548622-551dbb3f-7909-4153-9d67-e63a7961f0fc.png)
![image](https://user-images.githubusercontent.com/54589605/223548691-2d62f17a-098f-4cb1-bae4-89253fe755a7.png)
![image](https://user-images.githubusercontent.com/54589605/223548751-8c091019-c916-4ace-92a7-093b6fb4066b.png)
![image](https://user-images.githubusercontent.com/54589605/223548783-4750bfb0-42d1-4d85-b20e-69d80fbc8c45.png)

* Each fellow/cell in the group contains 2 logically adjacent cells. Hence we can say it is a **valid sub cube**.

![image](https://user-images.githubusercontent.com/54589605/223549090-f2dcb0e9-ac37-4987-896a-d87b821e6faa.png)

![image](https://user-images.githubusercontent.com/54589605/223549138-77590448-28d3-425b-b7d1-3a77c8c423c7.png)

* Yes, if we combine 8 cells then each fellow/cell must contain 3 logically adjacent cells.

![image](https://user-images.githubusercontent.com/54589605/223549403-f840c227-bfbc-4267-bfac-ef5f080cac6a.png)


## K-Map (16) [10th March 2023]

* Every minterm must be grouped **atleast once**. [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/224259820-242c8c11-a864-44bd-ae96-7839a62c3107.png)


![image](https://user-images.githubusercontent.com/54589605/224255342-b21f2638-4898-4576-aa44-7e55ed757b22.png)
![image](https://user-images.githubusercontent.com/54589605/224257847-ef9bb807-938e-42ae-9e4e-5e5bf250f267.png)

* Moving from **left to right**. Then, **A** is constant and **B** is changing. Hence **A'** is the answer.

> Remove the **changing(B) character**. Keep the constant(**A**) here.

![image](https://user-images.githubusercontent.com/54589605/224258840-b3b2f8fc-fac6-4c84-8dc1-7fba3726c50f.png)
![image](https://user-images.githubusercontent.com/54589605/224259083-419ece2b-679c-4906-810f-1054cee7a5d3.png)

* Moving from **top to bottom**. Then, **A** is changing and **B** is constant. Hence **B'** is the answer.


![image](https://user-images.githubusercontent.com/54589605/224259909-13914114-9f2c-4430-9849-db5af4d66e9d.png)
![image](https://user-images.githubusercontent.com/54589605/224260082-41a34dea-d4a4-4fa6-b25b-7e4a271227aa.png)
![image](https://user-images.githubusercontent.com/54589605/224260578-7cd1f5de-6772-42f0-8bae-a6c31ac977dd.png)
![image](https://user-images.githubusercontent.com/54589605/224260990-96412051-20cc-4a1f-9564-bf3c291d605c.png)

* We are doing SOP or minterms. Hence **A'** is a separate minterm and **B'** is another separate minterm. Hence the answer will be **A' + B'** and not **A'B'**.

![image](https://user-images.githubusercontent.com/54589605/224261547-93708a6e-040f-429f-b052-d529b1744fd3.png)
![image](https://user-images.githubusercontent.com/54589605/224261578-6498465e-8bae-4122-98cd-cd1389182d11.png)
![image](https://user-images.githubusercontent.com/54589605/224262047-9e7eb9b1-f919-4838-8d02-c9cd58cd7d39.png)

* **A** changes in first image or from **left to right**.
* **B** changes in second image or from **right to left**.

> We need to remove the changing variables. As both the variables are changing, hence answer is **1**.

![image](https://user-images.githubusercontent.com/54589605/224262386-62495027-99ad-4825-a5b8-ad42bc74d223.png)
![image](https://user-images.githubusercontent.com/54589605/224262648-9f763c43-f45e-4519-9f11-36b2712aacad.png)
![image](https://user-images.githubusercontent.com/54589605/224263238-e56bf787-e405-4db5-938d-310f2501fc82.png)
![image](https://user-images.githubusercontent.com/54589605/224264050-bb246545-a0d9-422f-af88-cbf2a957da33.png)

* For SOP, we get **AB'** because it is **one minterm only** and **not two separate minterms**.
* We got the same answers as well.
* Here, we converted the **POS -> maxterm** form on the left to the **SOP -> minterms** form on the right. It is confusing to do both. Hence convert them into one form and remember that one form only.

![image](https://user-images.githubusercontent.com/54589605/224264949-c3338d16-92c1-44ba-b055-a2a502b5df7e.png)

* Product of all Maxterms -> 0
* Sum of all minterms -> 1

![image](https://user-images.githubusercontent.com/54589605/224266402-93eb70b5-e1e4-46d7-a833-74221521cca4.png)
![image](https://user-images.githubusercontent.com/54589605/224267149-4eea6a7a-6983-47e8-bbc3-c292aa2010cc.png)
![image](https://user-images.githubusercontent.com/54589605/224270371-bc33d365-8305-43c3-9778-044312eefcc2.png)
![image](https://user-images.githubusercontent.com/54589605/224272462-f97aea32-41ab-4c7d-b2db-e545223e5260.png)
![image](https://user-images.githubusercontent.com/54589605/224272520-d86f72b5-29e2-4fbe-b1ce-a602b4e9058c.png)
![image](https://user-images.githubusercontent.com/54589605/224272584-0de35308-a7ce-4885-b9b9-f9e033127cc9.png)
![image](https://user-images.githubusercontent.com/54589605/224272618-460b7014-f737-4332-96c7-991c06c4cc8a.png)
![image](https://user-images.githubusercontent.com/54589605/224272654-334d3fbf-f00d-452c-90ab-1587d82acfa8.png)
![image](https://user-images.githubusercontent.com/54589605/224272809-bf7b4e29-ff06-4a29-b61b-c752f42bdd08.png)
![image](https://user-images.githubusercontent.com/54589605/224274746-c8110d69-2fec-4a8b-ac4e-442ed5cd3dea.png)
![image](https://user-images.githubusercontent.com/54589605/224275024-661180fe-5b15-4b86-aa82-5aa0c5183ebe.png)
![image](https://user-images.githubusercontent.com/54589605/224275114-bd0aa508-c759-49e6-9dd6-22e8e5d72aca.png)
![image](https://user-images.githubusercontent.com/54589605/224275267-b111f417-362c-4307-91ee-0aa4c69746c6.png)

* K-map means most minimized form.
* **A'B'** group is called as redundant group. That group is not required. Remove them.

![image](https://user-images.githubusercontent.com/54589605/224311626-74707751-3316-42ee-bda5-05a994f0c65b.png)
![image](https://user-images.githubusercontent.com/54589605/224311930-f76b1f09-e9b6-420d-9689-881fd68456ac.png)

* Yes. Atleast one minterm should be alone.    

![image](https://user-images.githubusercontent.com/54589605/224312679-eff3081b-02c7-4a8b-884f-0768854e4ec7.png)
![image](https://user-images.githubusercontent.com/54589605/224313450-60f77a1d-555b-46ec-9aab-e95111374e28.png)
![image](https://user-images.githubusercontent.com/54589605/224314080-a5a2e350-d503-4d7f-a33b-e70b7dfb3faa.png)
![image](https://user-images.githubusercontent.com/54589605/224314846-db262f4b-16f0-4da7-bdcb-ff93bb257d38.png)
![image](https://user-images.githubusercontent.com/54589605/224315477-dfd69b89-983e-49c2-b823-f92ab9b850c3.png)
![image](https://user-images.githubusercontent.com/54589605/224315890-370c5f6a-c80d-430b-8f70-108d9e0572c5.png)
![image](https://user-images.githubusercontent.com/54589605/224317027-176d615f-a918-45e1-b0a3-64ccbdf10f03.png)
![image](https://user-images.githubusercontent.com/54589605/224316752-5bfee695-83e5-451e-9e57-664fc1b84ee4.png)
![image](https://user-images.githubusercontent.com/54589605/224317853-ee59c5d0-44c7-442d-865b-c65394a5fdf2.png)
![image](https://user-images.githubusercontent.com/54589605/224318203-18e5134d-d15a-41bf-8c2a-e0afe234b43f.png)
![image](https://user-images.githubusercontent.com/54589605/224318349-c83a812c-5479-4653-ae58-eb29dc0e3118.png)
![image](https://user-images.githubusercontent.com/54589605/224318560-ed4cc20e-036a-4141-9ba3-9c96bb06a154.png)

> There are **4** variables, hence 'n' is **4**. As we have combined **8 or 2^3** cells, hence **m=3** and **3** variables are eliminated. The resultant term contains **4-3 = 1** variables or **n-m** or **total - eleminated** variables.

![image](https://user-images.githubusercontent.com/54589605/224319001-d17f131c-5c3e-4909-a2df-7e074c427c2a.png)

* No. of variables(n) -> 4
* Cells combined -> 8 -> 2^3 -> 2^m -> **m=3**.

![image](https://user-images.githubusercontent.com/54589605/224319477-b5369454-834d-4407-aa65-63b84b02731b.png)

> There are **4** variables, hence 'n' is **4**. As we have combined **8 or 2^3** cells, hence **m=3** and **3** variables are eliminated. The resultant term contains **4-3 = 1** variables or **n-m** or **total - eleminated** variables.

* No. of variables(n) -> 4
* Cells combined -> 8 -> 2^3 -> 2^m -> **m=3**.

![image](https://user-images.githubusercontent.com/54589605/224319646-baa00b31-b9ff-4f27-8ccd-02169a094418.png)
![image](https://user-images.githubusercontent.com/54589605/224319690-7cae24ba-b95b-41aa-8e14-0f2e79ba0b1b.png)

* For the **Blue highlighted box**.

> There are **4** variables, hence 'n' is **4**. As we have combined **4 or 2^2** cells, hence **m=2** and **2** variables are eliminated. The resultant term contains **4-2 = 2** variables or **n-m** or **total - eleminated** variables.

* No. of variables(n) -> 4
* Cells combined -> 4 -> 2^2 -> 2^m -> **m=2**.
* Left out -> 4-2 or n-m -> 2.

![image](https://user-images.githubusercontent.com/54589605/224320027-7400792e-acf9-405a-950f-7475c6642e35.png)

![image](https://user-images.githubusercontent.com/54589605/224320084-3e748c0b-1a39-4a58-abe9-05d7f59ae10b.png)
![image](https://user-images.githubusercontent.com/54589605/224320266-a3c63466-8726-467a-b072-b0ef919da16d.png)

* For the **Green highlighted box**.

> There are **3** variables, hence 'n' is **3**. As we have combined **2 or 2^1** cells, hence **m=1** and **1** variables is eliminated. The resultant term contains **3-1 = 2** variables or **n-m** or **total - eleminated** variables.

* No. of variables(n) -> 3
* Cells combined -> 2 -> 2^1 -> 2^m -> **m=1**.
* Left out -> 3-1 or n-m -> 2.

### Note

![image](https://user-images.githubusercontent.com/54589605/224320701-5b201390-5574-4f20-9970-7f7ae3dd1be9.png)


![image](https://user-images.githubusercontent.com/54589605/224322210-7bb05885-541c-4837-a0e8-30f8a06f30d8.png)
![image](https://user-images.githubusercontent.com/54589605/224322380-a35c6bbd-5a05-4083-82f2-52223660b806.png)

* The minterms are only in diagonal form like below. We will either get **X-OR** or **X-NOR**. 

![image](https://user-images.githubusercontent.com/54589605/224323392-8c9441a1-0844-49f2-8bc5-aa2f6b2c9ab6.png)
![image](https://user-images.githubusercontent.com/54589605/224324273-99c86833-6de1-435b-a193-6bd39a3b2f45.png)
![image](https://user-images.githubusercontent.com/54589605/224324555-13c08464-911e-49c9-a3fc-22dc7521863c.png)

* For **Ex-OR**, the starting minterm is **1**. So if we see, **1** as a minterm in the question, then that is **Ex-OR**. 
* For **Ex-NOR**, the starting minterm is **0**. So if we see, **0** as a minterm in the question, then that is **Ex-NOR**. 

* Diagonals for **3 variables**.

![image](https://user-images.githubusercontent.com/54589605/224325124-1a71d84b-9b2d-4dca-b5f8-c87b1f3c618b.png)

* Diagonals for **4 variables**.

![image](https://user-images.githubusercontent.com/54589605/224325426-602391b8-9c06-4468-9db0-764d29720b47.png)

* We have **two types of diagonal**

1) Principle diagonal -> **X-NOR** -> **0**.
2) HOD diagonal -> **XOR** -> **1**.

![image](https://user-images.githubusercontent.com/54589605/224325817-415346f1-39be-4028-b676-47229ddfd8be.png)
![image](https://user-images.githubusercontent.com/54589605/224326601-920d5baa-0091-4225-9845-2efbc01fe33a.png)
![image](https://user-images.githubusercontent.com/54589605/224326651-83f67861-63b6-44b0-a21e-6cd63d8796fd.png)

* Principle diagonal, above

![image](https://user-images.githubusercontent.com/54589605/224325964-e85d57d9-246d-4da5-a430-40ea51aa08f2.png)
![image](https://user-images.githubusercontent.com/54589605/224326563-adf16997-d52c-4dbd-aacd-c4d9b8904af0.png)
![image](https://user-images.githubusercontent.com/54589605/224326685-ca4053d1-fa23-4d8d-8e72-91178cd17fe8.png)

* HOD diagonal, above

> We will contact **HOD** first, then **principle**.
![image](https://user-images.githubusercontent.com/54589605/224326461-a0390315-f4e2-4aa5-9bb1-ad4f227b6aac.png)

* #principle_diagonal -> **XNOR**.
* #hod_diagonal -> **XOR**.

![image](https://user-images.githubusercontent.com/54589605/224326994-232dc9bf-4749-4423-8418-e1c5987dafc6.png)
![image](https://user-images.githubusercontent.com/54589605/224327072-a2d6fe78-a730-4b5f-aa01-5c00133d404f.png)
![Kmap_1](https://user-images.githubusercontent.com/54589605/224485407-0e4870be-1243-42ad-911d-5147ab971989.jpeg)
![Kmap_2](https://user-images.githubusercontent.com/54589605/224485409-9281bfab-8b43-4ca0-a500-35ea8bc7985e.jpeg)
![Kmap_3](https://user-images.githubusercontent.com/54589605/224485411-c1ee1687-e5b8-4019-bcc2-a5d005436cb5.jpeg)
![Kmap_4](https://user-images.githubusercontent.com/54589605/224485412-f899ba64-c57c-4c23-8e19-fbd5f07641cd.jpeg)
![Kmap_5](https://user-images.githubusercontent.com/54589605/224485417-37633053-e51c-4859-8a82-a01dba3d404f.jpeg)


![Kmap_6](https://user-images.githubusercontent.com/54589605/224485419-c81902f2-eccc-4b0d-8f4d-00f66dcdfa80.jpeg)
![Kmap_7](https://user-images.githubusercontent.com/54589605/224485420-4a15813b-7899-4c3c-ab32-7e3fe15cbafb.jpeg)
![Kmap_8](https://user-images.githubusercontent.com/54589605/224485421-4298a1cd-b017-4636-84fe-c8522b88558f.jpeg)

## Doubt_Session (170 [11th March 2023]

![image](https://user-images.githubusercontent.com/54589605/224486506-d9f52ccb-cf14-4909-ab8e-4dd2c2bddbdc.png)
![image](https://user-images.githubusercontent.com/54589605/224486737-e2668da3-f4e5-4b68-ab02-871b94cff224.png)

> In the above questions, whenever for particular inputs we cannot proceed, then we will treat them as **don't care** conditions.

![image](https://user-images.githubusercontent.com/54589605/224486967-9eb6f389-5d65-48db-8b12-b539059cd72c.png)
![image](https://user-images.githubusercontent.com/54589605/224486984-96b5550c-1948-4fbe-8400-29f9681bd028.png)

* Yes. 

> We have to reduce the no. of literals.

![image](https://user-images.githubusercontent.com/54589605/224487682-09f3d0ad-79e3-4d52-9aac-1d4e81fddce0.png)
![image](https://user-images.githubusercontent.com/54589605/224487861-5f477659-c4b4-498e-8140-5b93fedc1518.png)
![image](https://user-images.githubusercontent.com/54589605/224487904-282908da-c6c6-45cd-8fb5-c14b7abc3c29.png)

> Whichever used the **least or less** no. of literals is the answer.

![image](https://user-images.githubusercontent.com/54589605/224487974-2583513a-5825-4110-8683-2b754ba5e9ff.png)
![image](https://user-images.githubusercontent.com/54589605/224487988-22cf2981-55d2-4e74-ac85-eee3cdf0ea2c.png)
![image](https://user-images.githubusercontent.com/54589605/224488043-126b8efb-df2d-49ad-94e5-77b18c3da880.png)

> The minimized expression we got may not be **unique**. More than **1** also possible.
> Sometimes maybe unique, not always.

![image](https://user-images.githubusercontent.com/54589605/224488108-7cc79768-884d-4bae-aa69-47c5119c2661.png)

> **Don't cares** need not to be grouped. No condition for grouping of the **Don't cares** but every minterm must be **grouped**.   

![image](https://user-images.githubusercontent.com/54589605/224488374-ccdf857e-a178-4690-949a-ade375373a19.png)

> We are getting confused which to be considered and which not to be considered. To avoid these condition, we are going to the **advanced concept of K-map**. Systamic approach to find minimized expression.

## Implicant, prime implicant, Essential Prime implicant

![image](https://user-images.githubusercontent.com/54589605/224488551-62f04b98-89f0-4ca5-acd0-0847031af21a.png)
![image](https://user-images.githubusercontent.com/54589605/224488959-8f8deb59-a2b0-4b3a-be67-0998862ff2d0.png)

* Optional PIs -> Optional means it depends. It could be 1, 0,2,3. **0** also possible.

![image](https://user-images.githubusercontent.com/54589605/224489178-7c9f17c1-550c-437c-8dfc-faf2f426c9dd.png)

### PI

![image](https://user-images.githubusercontent.com/54589605/224489215-969a6324-2d31-414b-887b-701c31c53fc8.png)
![image](https://user-images.githubusercontent.com/54589605/224489226-e219b1af-f108-463c-9bed-96399ee38784.png)

* These are the **PIs** simply. All **maximum** possible groupings. **These are the state level selections**. 

> After state level selections, we will go for **national level selection** which is **EPIs**. Then after the **state level selections** only, the **national team is formed**. The fellows who perfomed very well will be selected for the **state level**. The fellows who perfomed very well for the **state level** will be selected or will be sent to **national level**.

* PIs -> The fellows that are selected at the **state level**.

![image](https://user-images.githubusercontent.com/54589605/224489480-d9aee89a-77c4-4b21-b215-6d2655c2bfa9.png)

> Now, we have to see if these **PIs or state level** are selected for the **national level or EPI** or not.
> We have taken **B'C**, from the **highlighted red part below**, do we have **any minterm** which is **grouped only once**? **YES**, **AB'C** is grouped **twice**. Once with **A'B'C and ABC**. **A'B'C** is grouped only once with **AB'C**. As the fellow(B'C) is **grouped once** hence, the fellow is eligiable for the **nationals**. Selected for the **nationals**.

> We have taken **AC**, do we have **any minterm** which is **grouped only once**? **NO**, **AB'C** is grouped **twice**. Once with **A'B'C and ABC**. **ABC** is grouped twice with **AB'C and ABC'**. As both of them are **grouped twice** hence, the fellow is not eligiable for the **nationals**. Not selected for the **nationals**.

> Same with **AB**, both are **grouped twice**. Hence not eligible/selected.
> For **BC'**, **A'BC'** is **grouped once only**. Hence eligible/selected

![image](https://user-images.githubusercontent.com/54589605/224489615-d869e375-7a2c-467f-bfcc-83b636f2d978.png)
![image](https://user-images.githubusercontent.com/54589605/224489860-95206dab-2c67-49f6-af71-a01798954600.png)
![image](https://user-images.githubusercontent.com/54589605/224490037-2c9f35d2-d3a8-4a13-a95e-bc8415eb93dd.png)
![image](https://user-images.githubusercontent.com/54589605/224490149-bd6b9116-322c-4319-88f5-dfd769d7281d.png)

> The final minimized expression, it should contain all of the **EPIs** must be there in the final expression..

![image](https://user-images.githubusercontent.com/54589605/224490372-de67da3a-5961-489a-9874-fb2bab202b8f.png)

> Sometimes, **1** is required. Sometimes, **2** is required. Someone **0** or nothing is required.
> EPIs must be required, between the two **PI**, **AC and AB**. Sometimes, **0** selected is required, maybe **1** is selected. Sometimes **2** selected. It depends upon the problem.

![image](https://user-images.githubusercontent.com/54589605/224490582-b5e18d29-b0c4-4473-9436-9a8c5dc4a6c0.png)

> **B'C** means that that the **red square or blue highlighted** is covered.

![image](https://user-images.githubusercontent.com/54589605/224490625-dc8bf384-8627-4405-8643-1d6a331fbe11.png)

> **BC'** means the **blue square or blue highlighted** is covered.

> Apart from **BC' and B'C**, do we have any **minterms** which is not at all covered.

![image](https://user-images.githubusercontent.com/54589605/224490814-c02cfdcd-4cd7-40bd-97fc-7fc5bb506d80.png)
![image](https://user-images.githubusercontent.com/54589605/224490821-8417ed1c-099f-42fb-a750-110840bfb07d.png)
![image](https://user-images.githubusercontent.com/54589605/224490867-a7d5ba45-c5e2-4708-9a47-5e419077eb44.png)

> Here, **AC** is called as **Selective PI**. -> 1 [Count]
> **AB** is called as **Rejected PI**. ->  [Count]

![image](https://user-images.githubusercontent.com/54589605/224490961-bdb3b08a-172e-4891-b5d1-de4b8890ed7a.png)

> For **PI** case, whatever possible groupings are possible, do all of them. These fellows will be selected for **state level**. There after, we need to see if they are eligible for **national team** or not.

* Condition for **national team** -> That fellow has to be **grouped only once**. Then only that fellow is **eligible**.

![image](https://user-images.githubusercontent.com/54589605/224491257-fa53ff61-fd91-4331-b6b2-69bf75907f37.png)

> For the final expression, all **EPIs** must be present.

### EPI

![image](https://user-images.githubusercontent.com/54589605/224491486-c4d30fca-f96c-4c58-8efd-9b66e5b33123.png)
![image](https://user-images.githubusercontent.com/54589605/224491504-27e91290-b0b2-4512-84b3-193c4787e0cf.png)
![image](https://user-images.githubusercontent.com/54589605/224491577-e05ccf3f-0719-42ac-b6dd-1b5217d00f63.png)


> If **PIs and EPIs** are **equal** then there is **only one possible expression** possible. More than **1** expression is not possible. Only **unique** expression is possible.

![image](https://user-images.githubusercontent.com/54589605/224491889-dec5e625-c86e-4eb1-bfab-a2249c4a5376.png)
![image](https://user-images.githubusercontent.com/54589605/224491915-a7e4a57c-5bbf-48d2-ad5b-55fdbcd0decd.png)
![image](https://user-images.githubusercontent.com/54589605/224491922-7d547a32-d115-4507-979f-b06c6ebf96e9.png)

> Some cases **PIs and EPIs** are **equal**. **EPIs** are equal to **PIs**. **EPIs** can never be greater than **PIs**. First it is an **PIs** then it will only go to **EPIs**.

![image](https://user-images.githubusercontent.com/54589605/224607145-aa3ade96-cabc-403e-b7dc-77a1c89f97c2.png)
![image](https://user-images.githubusercontent.com/54589605/224492176-c90988c9-6590-4fb3-85cf-7f088251c90a.png)
![image](https://user-images.githubusercontent.com/54589605/224492206-69148748-15b5-4504-9730-068cb5965b26.png)

> No need of **optional EPs**, because there is no **minterm** that is not covered. Hence we do not need any **optional PIs**.
> If there are any **minterms** that are not covered in the EPIs, then only we will go for **optional IPs**.
> **BC** is a **rejected PI**, not at all required.

![image](https://user-images.githubusercontent.com/54589605/224492485-a80d3291-0dfa-4f0c-bab7-0bf224cfc0de.png)
![image](https://user-images.githubusercontent.com/54589605/224492533-bd6050ae-7b7b-4a57-9325-fd2d782f8347.png)
![image](https://user-images.githubusercontent.com/54589605/224492763-e1c6f016-c278-4c5a-8838-970267c8e7c8.png)
![image](https://user-images.githubusercontent.com/54589605/224492793-dbd74740-70df-4a2b-9964-d50e82d1d6cd.png)
![image](https://user-images.githubusercontent.com/54589605/224492846-30cbb20b-cf1b-4c8e-b0f3-01f9c5c5cc03.png)

> Here, All of the **minterms** are grouped **twice** already. Hence there are no **EPIs**. But for the final expression 'f', we put '0' for EPIs and we have to put the **optional IPs** to cover all of the minterms. We could do that in two ways, hence there are two expressions.

![image](https://user-images.githubusercontent.com/54589605/224492925-292bee2c-4d9d-4377-a21c-9699bf4a71a2.png)
![image](https://user-images.githubusercontent.com/54589605/224493025-c506c9f2-e549-4648-ae87-fc667154f91f.png)
![image](https://user-images.githubusercontent.com/54589605/224493249-379014d1-1af0-4113-b87f-332d15766a72.png)
![image](https://user-images.githubusercontent.com/54589605/224493568-02e533e0-f002-4c79-b51a-e29dcd3ed2d3.png)

## Notes

![image](https://user-images.githubusercontent.com/54589605/224493804-30f2ec2c-e9d6-4ab2-8b51-061e39bde549.png)

> Unique expression, when **EPIs == PIs**, EPIs is equal to PIs.

![image](https://user-images.githubusercontent.com/54589605/224494039-2da2c4bc-5482-4219-9d51-4c4fb1ea8f13.png)
![image](https://user-images.githubusercontent.com/54589605/224608673-6609276f-db24-40d5-8614-3b3d09d86f15.png)

> In the above question, there is a **quad**, which is formed that is the **reject PI**, here as all of them were **grouped twice**.
> For K-map, we have to find **PIs and EPIs**, which is the best method to solve them.

![image](https://user-images.githubusercontent.com/54589605/224494272-09c5193b-4abd-4a74-8d83-179d8047000d.png)
![image](https://user-images.githubusercontent.com/54589605/224494522-0e98d31e-bb14-4d93-8a5c-bec0212790ec.png)

> Like this we need to find **PIs and EPIs**.

![image](https://user-images.githubusercontent.com/54589605/224494978-14dfd4ec-c295-4f43-b600-f49af6e75ab3.png)
![image](https://user-images.githubusercontent.com/54589605/224494983-7ddc548e-e780-49cc-81ee-06a74f22f233.png)
![image](https://user-images.githubusercontent.com/54589605/224494985-d58d86db-6465-4325-b30c-b144e8ae3d84.png)
![image](https://user-images.githubusercontent.com/54589605/224494995-c4282305-dc6f-45ed-8826-33c2d29bf39f.png)
![image](https://user-images.githubusercontent.com/54589605/224495003-8dd2f170-f260-44b3-8fa7-ff64e50a6433.png)
![image](https://user-images.githubusercontent.com/54589605/224495008-17c8c20d-4cd6-4765-aacf-1c651a5b2a05.png)
![image](https://user-images.githubusercontent.com/54589605/224495011-b43cfce7-6420-45aa-bf8f-caac70c6c644.png)


## Combinational Circuits (18) [13th March 2023]

## Number Systems

> For any number system, we need a **base**.

![image](https://user-images.githubusercontent.com/54589605/224610766-13ab607f-3fc5-4e27-9579-5dbd134f387a.png)

* Polynomial expansion with the base of the system.

* Minimum base of a system ?

> Atleast 2. Always greater than equal to **2**.

![image](https://user-images.githubusercontent.com/54589605/224611087-f8937f6c-38a7-4108-99b2-ed1dfc46f86a.png)

> Base is always positive. It cannot be negative.

![image](https://user-images.githubusercontent.com/54589605/224611142-05c487e5-4a3e-4bc2-87be-c9cd097d8cb6.png)

* (421) base 4 -> Not valid

> For base 4 system, the valid numbers are 0,1,2,3. **4** is not allowed, hence **(421) base 4** is not valid number.

* (243) base 5 -> Valid

> For base 5 system, the valid numbers are 0,1,2,3,4. **2,4 and 3** are allowed, hence **(243) base 5** is a valid number.

![image](https://user-images.githubusercontent.com/54589605/224611542-4ea2bfa2-1dca-41df-9976-e18e5850f04c.png)

> The min. base of a system is **always greater than equal to 2**. Base is always positive integer only. No fractions are allowed.

![image](https://user-images.githubusercontent.com/54589605/224611907-4a35fcae-347c-4012-b862-63d245a31529.png)
![image](https://user-images.githubusercontent.com/54589605/224612041-554e9eb5-cde6-47c2-addc-46b0bdbba064.png)

> Number is stored as **10** only internally. We just write it as **A**. Instead of **A**, if we write it as **10**, then we will treat **1** and **0** separately, as **two** separate digits and not together. To avoid this problem/confusion, we are treating the whole thing(10) as **A**. Internally, it is stored in **10** form only.

![image](https://user-images.githubusercontent.com/54589605/224612469-f4995ed3-3a9d-49ee-9ef6-f92ae02fb391.png)

## Conversation of Number System

![image](https://user-images.githubusercontent.com/54589605/224612606-4d326fc1-e7c6-44e0-ac51-ed2ddf83e55a.png)

> If the base of a system is **n**, so we have **n** different digits and it will be starting from **0** and ending at **n-1**.

## 1. Decimal to Other base

![image](https://user-images.githubusercontent.com/54589605/224612852-a492376d-95ce-4b4e-b24c-a1f557a94e0a.png)
![image](https://user-images.githubusercontent.com/54589605/224613866-fe35cd86-7047-403d-8c8a-69e3835e3ee7.png)
![image](https://user-images.githubusercontent.com/54589605/224614199-52f96997-1836-41e2-9d7b-778833c0fd97.png)

* **Integer part** -> Successive divisions
* **Fractional part** -> Successive multiplication

![image](https://user-images.githubusercontent.com/54589605/224616056-62009bab-3c22-41a9-aa59-e91f6e151d58.png)

### Note

![image](https://user-images.githubusercontent.com/54589605/224616256-51f4748b-e253-4d57-be62-1c847bd6bd1e.png)

> For **integer** part we are getting the **exact** conversion.
> For **fractional** part, the **exact** conversion may not be possible.

![image](https://user-images.githubusercontent.com/54589605/224616399-50f313bc-ac09-4868-9e2c-0dbffb132dab.png)
![image](https://user-images.githubusercontent.com/54589605/224616580-0f95048a-ab80-4fe7-9101-63004baaa1df.png)
![image](https://user-images.githubusercontent.com/54589605/224616721-644c16cb-e213-424f-98ae-760450ccf86f.png)

* (53.75)  base 10 -> base 4

> The number is **53** and the base is 10. We have to convert them into **base 4** number system. Initial base is 10 and required is 4, i.e we have to convert from **higher** to **lower** base. If we are converting from **higher** to **lower** base or base is **decreasing**, hence the **number increases**.

* (39.5)  base 10 -> base 8 -> (47.4) base 8 [Ans]

> Here also we are converting from **higher(10)** to **lower(8)** base or base is **decreasing**, hence the **number increases**.
> **The number and the base of the system are inversely proportional**.

* (39.5)  base 10 -> base 16 -> (27.8) base 16 [Ans]

> Here we are converting from **lower(10)** to **higher(16)** base or base is **increasing**, hence the **number decreases** because **the number and the base of the system are inversely proportional**.


* As we **increase the base of the system** or convert from **lower(10)** to **higher(16)** base, the actual number **decreases** and vice-versa.

## 2. Any base to Decimal

> Which ever base is required, we have to do polynomial expansion with that base.

![image](https://user-images.githubusercontent.com/54589605/224621539-76fd2152-f02c-448c-b0da-7cce33aa01b2.png)
![image](https://user-images.githubusercontent.com/54589605/224623084-044f42fc-fc21-479a-a4c9-194f981fe751.png)

> The **required base** is **4** here. So, we are multiplying the values with **powers of 4**.

![image](https://user-images.githubusercontent.com/54589605/224624549-8212d3bb-c545-4ca7-a740-985f1b2f4579.png)

> As **B** is present, which represents **11**. So, as **11** is present, the value of **x** must be **12**. As base 12 signifies values form **0 to 11**.

![image](https://user-images.githubusercontent.com/54589605/224624856-21da18e0-3ff1-490b-ba28-dcdd3177f913.png)
![image](https://user-images.githubusercontent.com/54589605/224625848-ea0ef25f-e940-472f-a3e1-e35c7a9e66f7.png)
![image](https://user-images.githubusercontent.com/54589605/224625994-10b7680f-6ee7-483d-ba0c-77b64fe6a2cd.png)
![image](https://user-images.githubusercontent.com/54589605/224626354-0e239a01-d51e-456f-9213-26610d9a348d.png)

> For any mathematical operation like **squaring, multiplying, division**, carefull that **two number's** base must be the **same**.

![image](https://user-images.githubusercontent.com/54589605/224627064-00bbf5a9-3eea-40ca-b02a-a16918623db2.png)

## 3. One base to another base

![image](https://user-images.githubusercontent.com/54589605/224628028-baaf3456-4fa3-48e7-9033-670ea08ee575.png)

> Convert both the numbers into **decimal form**, then convert to from **decimal** to the **required base**.

![image](https://user-images.githubusercontent.com/54589605/224628426-024ab70f-a2d4-4648-8fb7-4b0fd950c1eb.png)
![image](https://user-images.githubusercontent.com/54589605/224628566-9709d11c-7d83-48c1-9f85-d4e9f9b17de0.png)
![image](https://user-images.githubusercontent.com/54589605/224628897-bea4b7ef-6789-4e56-9c62-dde9e3ab52da.png)
![image](https://user-images.githubusercontent.com/54589605/224629036-bb335fc3-192b-4bde-96ec-cb3f0e5ec554.png)

> The **number 3** is less than **base 8**. So after **conversion** also we will get the same thing.
> If number is more than **base**, then we should do **division**.

![image](https://user-images.githubusercontent.com/54589605/224629394-9cb800a4-637f-4026-b584-dbd0039066f2.png)
![image](https://user-images.githubusercontent.com/54589605/224629576-5063bff6-5a79-4029-82d6-607aab6fd07c.png)
![image](https://user-images.githubusercontent.com/54589605/224629660-58f51432-75f9-48dd-8394-0e6470fcd34d.png)
![image](https://user-images.githubusercontent.com/54589605/224630967-eed346c5-71d6-49dc-b6bd-53b4b4d9e10a.png)

> Converted both the numbers **193 and 623** into base 10 format.

![image](https://user-images.githubusercontent.com/54589605/224637779-38b00059-7a76-44b0-b66c-5e569f8dd68f.png)
![image](https://user-images.githubusercontent.com/54589605/224637901-c4844ab4-cb07-47e8-957d-fd4534e8d1d6.png)

[**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/224639447-9f1e322d-bfbc-45a6-957a-5a93425b90b8.png)

* (3) base b -> (3) base 10

> Since **3** is less than **base 10**. Same for **6** as well.

## 4. Required base

* Required base = (Given base)^ (integer).

![image](https://user-images.githubusercontent.com/54589605/224639804-4c7f2253-88ba-49d5-975d-143c3554619e.png)
![image](https://user-images.githubusercontent.com/54589605/224641021-663d57b8-e7b7-4c4a-b684-c55130538c43.png)

* Required base = 8
* Given base = 2
* 8 = 2^n -> 2^3 = 2^n -> n=3 

> So, **n=3**, hence divide into **3-3 parts**. **3** digits will be taken as **1 entity**.
> For **integer part**, move from the left-right side of **dot**. 
> For the **fraction part**, move from right-left side of the **dot**.

![image](https://user-images.githubusercontent.com/54589605/224642504-f24cfd24-dfa2-4ccd-9477-aa118f9151b5.png)
![image](https://user-images.githubusercontent.com/54589605/224642975-b9d15847-c767-423f-a829-4ab5b982b682.png)
![image](https://user-images.githubusercontent.com/54589605/224645151-563518a5-af68-43c9-9e93-231d02b84480.png)
![image](https://user-images.githubusercontent.com/54589605/224646500-e8162995-ebbb-450b-aa89-ba07e7413bfe.png)
![image](https://user-images.githubusercontent.com/54589605/224647747-817750c9-ed20-4814-acc4-7d9dc56cd5cd.png)
![image](https://user-images.githubusercontent.com/54589605/224648389-926af357-b672-48b7-92ad-cacce5530098.png)
![image](https://user-images.githubusercontent.com/54589605/224648803-850721df-7f6c-442e-9d1d-9d8dd17e8b2a.png)
![image](https://user-images.githubusercontent.com/54589605/224649928-089d7f79-3147-4f40-aea9-445e958c7fd7.png)

> **b=7** only and not **10**. Always, we have to give **minimum base**. Whenever they ask for **base**, we have to give **minimum base** only. **Minimum 7** means that above **7**, all values will be **satisfied**.
> For **base 7**, we get values from **0-6**. As the question has the highest value of **6**, that why we put **7** as the answer. 
> **2 and 6** options are not correct because **base 2** can hold **0 and 1** only and as for **6** it can hold **0 to 5**. Both of them cannot have **6** in their range that's why.

[**IMPORTANT**]
![image](https://user-images.githubusercontent.com/54589605/224651191-bde1f64e-a3b2-4d6b-a2e7-88c0fe40098c.png)

> Here we have **1 and 2** values in the question. Let, 'b' be the base. To hold values **1 and 2**, we need **minimum base of 3** as **3** can have values from **0 to 2**. **3** onwards we can take any values. We have to give minimum value, that's why **b=3** is the answer.  

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/7DB99DE5C0

![image](https://user-images.githubusercontent.com/54589605/224652225-d6d90a41-420c-452f-89b0-7e61d61391e0.png)

> Here, we are **squaring both sides**, then on the left we did polynomial expansion of the base and got **b=6** as the answer.

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/A9EA2D5F9B

![image](https://user-images.githubusercontent.com/54589605/225013506-baf01b4d-facc-445e-a2e8-a44d7645db7e.png)
![image](https://user-images.githubusercontent.com/54589605/225013599-af483be5-1c8d-4918-9900-a645a5abd827.png)




## Complement Analysis

![image](https://user-images.githubusercontent.com/54589605/224652426-14692f63-3bf5-4ed7-bbdd-a9de2bbff110.png)
![image](https://user-images.githubusercontent.com/54589605/224652716-3650784c-2a90-4432-bc95-e9179e7cbbc1.png)

> If the base of a system is **r**, for these number we can find, **r's complement** as well as **(r-1)'s complement**. We cannot find any other types of complements are not defined.
> If the base of a system is **r**, then we can find out **r's complement** as well as **(r-1)'s complement** only. We cannot defined any another type of complements.

![image](https://user-images.githubusercontent.com/54589605/224653367-4d69fd21-1ab6-434e-a117-e5b5bcc7e3a5.png)
![image](https://user-images.githubusercontent.com/54589605/224653601-73a633a2-d838-4fbe-99d3-8519c61c2ee3.png)

## **r's** complement

![image](https://user-images.githubusercontent.com/54589605/224653844-1fdbf7cd-88ac-40ea-9624-7b84f6ff9ac7.png)

> **r** is the base of the system.
> **N** is the given number.
> **n** no. of **integer** digits.

![image](https://user-images.githubusercontent.com/54589605/224654310-6579d622-c51e-4b59-91ed-8777536d2b95.png)

## **(r-1)'s** complement

![image](https://user-images.githubusercontent.com/54589605/224654679-bc6c3813-4c9e-4ea4-9e3b-a3c72e6bf310.png)

> **m** no. of **fractional/decimal** digits.

![image](https://user-images.githubusercontent.com/54589605/224690812-d9e1f19c-ad34-4675-a26e-d12a5d120a5f.png)
![image](https://user-images.githubusercontent.com/54589605/224690846-5c56af79-0450-4031-ba52-a81a50021e59.png)
![image](https://user-images.githubusercontent.com/54589605/224690888-30c13f52-2ef9-4f8e-a1a7-c9028368c348.png)
![image](https://user-images.githubusercontent.com/54589605/224690766-4ab20828-f5d8-4f28-a912-f9777ab0f524.png)
![image](https://user-images.githubusercontent.com/54589605/224691192-385947a2-24e6-48c2-b531-4023dc607ac5.png)
![image](https://user-images.githubusercontent.com/54589605/224691236-c2798022-a109-434b-a07c-8582c638d584.png)
![image](https://user-images.githubusercontent.com/54589605/224691266-2af8ddcc-89ae-4d7a-9b61-8a117c4cd53e.png)
![image](https://user-images.githubusercontent.com/54589605/224691296-68620151-3af7-4228-ab45-ff4fb6f0748d.png)
![image](https://user-images.githubusercontent.com/54589605/224691317-836d3b0c-9c88-4895-97a7-1c96e370e558.png)
![image](https://user-images.githubusercontent.com/54589605/224691345-67a85f89-e1d4-470a-9d62-1b57dc7930f9.png)
![image](https://user-images.githubusercontent.com/54589605/224691376-a87feff9-be17-49d3-a07c-bd4299816ca9.png)
![image](https://user-images.githubusercontent.com/54589605/224691399-3d82985a-7360-4cd3-87d8-85e053ed5984.png)


## Combinational Circuits-II (19) [13th March 2023]

* if, **m=0**.
* then, (r-1)'s complement -> r^n - N -1
* (r-1)'s complement -> r's complement -1

* r's complement -> (r-1)'s complement + 1  [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/224693316-2c0d73c7-88c2-4258-b2a5-3ed1ccc3001f.png)
![image](https://user-images.githubusercontent.com/54589605/224693388-b6eb01f1-43c9-4784-9136-80d5cacfd8df.png)

![image](https://user-images.githubusercontent.com/54589605/224694489-ded900b7-3732-4cd9-a0db-3b45090e3970.png)
![image](https://user-images.githubusercontent.com/54589605/224695067-b27794b9-d878-4a86-9bc5-aded00477079.png)
![image](https://user-images.githubusercontent.com/54589605/224696107-6ec531ed-3a91-4d7c-bf81-e1fce1b2ca99.png)

## Trick to get **r and (r-1)** complement

* if **r=10** as **base 10** 
* N = (327.452) base 10
* Count of 'N' -> 6
* Count of 9's depends on (r-1) -> as **r-1** is **9** here, that's why we are substractiong N from 9's.
* **(r-1)'s complement -> 9's complement** -> Count of 9's (6) - N.
* **r's complement -> 10's complement** -> 9's complement + 1(right most bit).

![image](https://user-images.githubusercontent.com/54589605/224697231-ebd813a5-30f7-4239-928c-293070a848e5.png)

> As the base of the system is **10**, that's why we can find the 9th and 10th complement. We cannot get **7's complement** directly. 
> If we want to get 7's complement, then we have to convert the given number to **base 7** then we can find **7 as well as 6 complement**.
> To get 10th complement, we just add **+1** to the right most of **9th complement**.
![image](https://user-images.githubusercontent.com/54589605/224698445-b7e8b2ab-a881-4c27-a02c-eef6c7bc1517.png)


* if **r=2** as **base 2** 
* N -> (101100) base 2
* **(r-1)'s complement -> 1's complement** -> Substract all the numbers by **1**.
* **r's complement -> 2's complement** -> 1's complement + 1(right most bit). [This is same as above]

![image](https://user-images.githubusercontent.com/54589605/224700848-a78b71a8-eeb3-4845-ab84-df8151763379.png)

## Trick to find **2's complement**

> This trick is for **2's complement only** and not for others.

* N = 101100

> We do this on the original number **N** and **not on the 1's complement**. We need to move from right to left direction. We skip and move, till we find first time **1**. We just copy that **1** down and after that **1**, we **flip/negate/opposite** each of the next bits.

![image](https://user-images.githubusercontent.com/54589605/224702251-91df7b9b-9ab6-48cd-a1b3-6af4312afbb6.png)

* N = (0.0110) base 2

> There is **no importance** of the **zero(0)** on the left side of the **dot(.)**. Just leave it there, don't change it. Like below.

![image](https://user-images.githubusercontent.com/54589605/224703119-4ce2925e-0e09-40b3-a57d-de6c84f340ea.png)
![image](https://user-images.githubusercontent.com/54589605/224703591-2fea7cde-7fae-43d2-a498-7050be1fb49a.png)
![image](https://user-images.githubusercontent.com/54589605/224703889-4adcd37d-1827-4d1a-8037-c44f008e58ee.png)
![image](https://user-images.githubusercontent.com/54589605/224704855-fef2b3df-0bc8-4fa9-9826-cc3ec9526b09.png)
![image](https://user-images.githubusercontent.com/54589605/224706104-286577b0-18b4-4fbf-bfae-3b05be81d5b9.png)
![image](https://user-images.githubusercontent.com/54589605/224706283-1f259031-1b72-43d4-957f-fc0c998b4979.png)

> In the above questions, as **r=9** here, so **r-1 = 8**. Hence we would be using **six(6) 8's** and substract **N** from it.


![image](https://user-images.githubusercontent.com/54589605/224707414-5d9a2278-f15b-42aa-9a47-f8cbba8c7265.png)
![image](https://user-images.githubusercontent.com/54589605/224707912-1f0469a0-05f8-4e27-aea9-df5c353b9895.png)

> The base is **16** which means **0 to 15**. As **F** is **15**, so when doing 2's complement we do **F + 1 -> 15 + 1 -> 16**, which givens **16** and **16** doesn't fall under **base 16**, so we have to do carry forward, and take **+1** to the next step.

![image](https://user-images.githubusercontent.com/54589605/224708378-ce0aefb5-a139-4649-9874-56a2cadae709.png)

> For **base 2**, when we find **1's complement**, we just **flip** the bits of the number to get it's **1's complement**.
> For **2's complement**, we can do the **2's complement trick from above** or just add **+1** to **1's complement**.

![image](https://user-images.githubusercontent.com/54589605/224708654-7d108a0c-0dde-4f2a-b939-5fd5982e5eef.png)
![image](https://user-images.githubusercontent.com/54589605/224709128-02b7bf7b-f1ef-4e66-bb66-95c40c801f22.png)
![image](https://user-images.githubusercontent.com/54589605/224709352-9c958642-d125-4249-916e-9089dca48c21.png)

> In the above question, it is **base 8** and in base 8, **8** is not allowed, that why we had to do **carry + 1**, in 2's complement.

![image](https://user-images.githubusercontent.com/54589605/224709920-fc4fd824-da4e-41bf-958e-499282ed6f3e.png)

> In the above question, it is **base 10** and in base 10, **8** is allowed, that why we just added **+1** to 1's complement to get 2's complement.

![image](https://user-images.githubusercontent.com/54589605/224710266-3dc97ac7-8711-4147-bb9a-5e34707d7170.png)

## Data Representation

![image](https://user-images.githubusercontent.com/54589605/224710620-68e562c4-6368-42de-b5f6-9ce1df419b83.png)

* Unsigned number -> **positive or +ve number** only.
* Signed number -> Both **positive and negative** numbers are used.

## Unsigned Number representation

> Positive numbers only. No negative number representation here. No **sign bit** concept. 

![image](https://user-images.githubusercontent.com/54589605/224711930-a0aa938a-4099-4b08-bdab-c3cd008e4a0a.png)
![image](https://user-images.githubusercontent.com/54589605/224712390-8c4d74b7-1cb5-45c9-92f8-ccdf2f5a2ad0.png)

## Signed Number representation

> What system they have used, they will mention it clearly in the question.

![image](https://user-images.githubusercontent.com/54589605/224712737-3363419c-01dd-44a6-a038-0c9962542804.png)


## 1. Signed magnitude representation

> Both for **positive and negative** numbers.
> There is a dedicate **sign bit** is present. **MSB** bit is dedicated for the sign bit only.
> If we have 5 bits allocated, then **1 bit** is used for sign bit only. Remaining bits are used for **magnitude**.

* Sign bit is **zero(0)** -> **positive numbers**.
* Sign bit is **one(1)** -> **negative numbers**.

![image](https://user-images.githubusercontent.com/54589605/224713423-b8e6071c-2abf-4343-b8d9-c055ba39238a.png)

> One bit is allocated for sign bit only, we cannot allocate it for magnitude.

![image](https://user-images.githubusercontent.com/54589605/224713995-653f3dd5-e2be-45dd-af04-eae3d26ab2e6.png)

* Highlighted bit is **MSB** bit and stores the **sign bit**.

![image](https://user-images.githubusercontent.com/54589605/224714488-5b85f92b-e8ef-431c-9239-b9137fb6fcd5.png)
![image](https://user-images.githubusercontent.com/54589605/224714865-866382c3-13e9-41d4-bbc7-df444471e1f9.png)

> One bit is compulsarily dedicated for sign bit only. We cannot use that bit for magnitude.

![image](https://user-images.githubusercontent.com/54589605/224715656-fc7a2e70-d28b-46e2-b8d8-0fbacbca22a2.png)

## 2. 1's complement representation

> **1's complement and 2's complement** are **applicable only** for **negative** numbers only.
> **1's complement** representation of a **positive** number is **same** as a **normal binary** number with **MSB as zero(0)** .

![image](https://user-images.githubusercontent.com/54589605/224716937-74585613-09dd-4581-9fc0-cb423b62ebdd.png)

> For a negative number, when finding it's 1's complement. First we will write that number and there after we will take the 1's complement.
> For example, **-6** is given, then firstly, we will treat it as **+6**. For **+6**, we get **110**. We will now take the 1's complement of the number, we will get **001**. But we are missing the sign bit, so we have to add another bit to **+6** which is **0110**. Now the 1's complement will be **1001**. As MSB is **1** which signifies **negative number**.

![image](https://user-images.githubusercontent.com/54589605/224718740-4ce3cade-6f73-43c8-b5b6-266c3a6b3adc.png)


> If we have **1001** as 1's complement of a number, now we want to get the original number back. By looking at **1001**, we can see that **MSB** bit is **1**, which means it is **negative**. We will now **flip** **1001** to get back the original number.

* 1001 -> 1's complement
* MSB -> 1 [Hence, negative number]
* -[0110] [Flipped 1001, '-' sign since it is a negative number]
* -6 [Which is the original number] [Ans]

![image](https://user-images.githubusercontent.com/54589605/224720066-817bed35-99b4-46de-87b0-e00f12fe9fed.png)

> Observation, like the **normal binary numbers**,

* 0000110 -> 6 [Same]

> Observation, like in **1's and 2's complement**, if we add any number of 1's on the left hand side, there will be no effect, the result will be the **same** only. 
> We will need more no. of bits to store these many 1s and as a result the register size will increase. AS a result we will go for the least no. of bits which is sufficient and we need to focus on the minimum no. of beats.

![image](https://user-images.githubusercontent.com/54589605/224720823-ced97619-fdb4-4ff7-9907-97f63da665c2.png)

> As 1's complement doesn't have any effect on **positive** numbers. Whatever number is given, that only. We do not flip the numbers for positive numbers.
> 1's complement has effect on **negative** numbers only.

![image](https://user-images.githubusercontent.com/54589605/224722252-52d5d1cf-6a00-42a7-8a58-a586033001d6.png)

![image](https://user-images.githubusercontent.com/54589605/224723629-e2e80ead-04dc-4e25-b249-fab87ce63254.png)
![image](https://user-images.githubusercontent.com/54589605/224724362-ce5891ab-d5f9-47e9-a2a7-32151a789112.png)

> For the remaining bits in **+6** in the **3rd** question, will be filled by just copying the sign bit. The sign bit is **zero(0)** here. Called as **sign bit extension**.
> For the remaining bits in **-6** in the **4th** question, will be filled by just copying the sign bit. The sign bit is **one(1)** here. Called as **sign bit extension**.

> 1's complement representation is different, finding 1's complement is different.

> For **-0**, we are taking the 1's complement of **+0**.

* **+0* -> 0000
* **-0** -> 1111 [1's complement of **+0**]

![image](https://user-images.githubusercontent.com/54589605/224725696-27225b48-053d-441d-8f9d-780606e5fa84.png)

## 3. 2's complement representation

![image](https://user-images.githubusercontent.com/54589605/224728555-68baaa1c-2d6e-416e-9e81-6001dafcb4a2.png)

> **1's complement and 2's complement** are **applicable only** for **negative** numbers only.
> **2's complement** representation of a **positive** number is **same** as a **normal binary** number with **MSB as zero(0)** .

* 3 -> 011
* +3 -> 0011
* 5 -> 101
* +5 -> 0101
* -5 -> 1011 [Trick to find 2's complement above, used that here]

![image](https://user-images.githubusercontent.com/54589605/224732115-6af03de7-0404-4cae-9ed4-83ac12f7adae.png)

> For the remaining bits in **+6** in the **3rd** question, will be filled by just copying the sign bit. The sign bit is **zero(0)** here. Called as **sign bit extension**.
> For the remaining bits in **-6** in the **4th** question, will be filled by just copying the sign bit. The sign bit is **one(1)** here. Called as **sign bit extension**.

![image](https://user-images.githubusercontent.com/54589605/224732481-11efac4b-59b1-44fb-9cdb-bc0258038cbc.png)

![image](https://user-images.githubusercontent.com/54589605/224734832-5942b7fe-d320-435f-80fb-717c9e44c05e.png)
![image](https://user-images.githubusercontent.com/54589605/224734897-8255a957-3874-4b19-9643-f04c072ef2a5.png)
![image](https://user-images.githubusercontent.com/54589605/224734930-2444231c-7594-4a3a-a22e-485ce6031504.png)
![image](https://user-images.githubusercontent.com/54589605/224734975-8e6c4664-0eee-4600-ac9a-2875f4406e8b.png)
![image](https://user-images.githubusercontent.com/54589605/224735010-e54c73a3-07b8-40bd-9472-a51b51047d53.png)
![image](https://user-images.githubusercontent.com/54589605/224735050-02469cb3-36c5-485c-9a51-45eb4a9da4a1.png)
![image](https://user-images.githubusercontent.com/54589605/224735074-0dcbb3a8-38a2-4c2b-b43e-1df1c713012c.png)


## Doubts_session (20) [14th March 2023]

### 1's complement representation

![image](https://user-images.githubusercontent.com/54589605/224942438-65c654b2-0771-49e9-825c-8578b27920f8.png)
![image](https://user-images.githubusercontent.com/54589605/224942468-98567530-708e-4f36-88de-82b107e46f72.png)

> No effect on **positive numbers**. Only effects on **negative numbers**.
> Here also, **positive numbers** are represented as **normal binary numbers** only, with MSB as **0**.

### 2's complement representation

![image](https://user-images.githubusercontent.com/54589605/224944269-a2cec5b8-6ba0-4aa2-9a89-deeaebf769f9.png)

> Here also, **positive numbers** are represented as **normal binary numbers** only, with MSB as **0**.
> For **negative numbers** we find the **2's complement** and we need to ensure that MSB is **1**.

* 6 -> 110
* **2's complement representation** of **+6** -> 0110 -> **MSB** is **0**, which means positive number.

![image](https://user-images.githubusercontent.com/54589605/224946097-f90a7602-f0f1-4184-ba14-c8ed8feb4d3d.png)
![image](https://user-images.githubusercontent.com/54589605/224946247-b514d0f4-90bb-41ba-a5d5-38618d980ab4.png)
![image](https://user-images.githubusercontent.com/54589605/224946661-4bc9d932-97ba-438c-964b-8b342b40b59b.png)

> **Sign bit extension** is used in **1's and 2's complement representation**. We are filling the remaining bits with **sign bit**.

> **Quiz 4**, **Q2** solutions.

![image](https://user-images.githubusercontent.com/54589605/224943800-8bfb73c5-1915-47cf-9ac6-a051285390cd.png)

## Questions

![image](https://user-images.githubusercontent.com/54589605/224947033-93943862-8d46-4e9a-844c-bfb75fd905bf.png)
![image](https://user-images.githubusercontent.com/54589605/224948134-3bae6e3f-2aeb-4db9-85bf-bf35328070e1.png)
![image](https://user-images.githubusercontent.com/54589605/224949956-a8dabc7f-92f2-4a31-bcfc-e57473009739.png)

> In the above question, **1's complement** doesn't have any effect on **positive numbers** we can just use the number as the **magnitude** of the number.
> 1's complement representation has effect on **negative numbers**, so the **negative number** is in **1's complement form**, so we have to do **1's complement** again to get back the **original number**.

![image](https://user-images.githubusercontent.com/54589605/224950944-a4e7b7ef-f1b6-41f1-bb1f-7715a82e6efb.png)

> In the above question, **2's complement** doesn't have any effect on **positive numbers** we can just use the number as the **magnitude** of the number.
> In the above question, **2's complement**  has effect on **negative numbers**, so the **negative number** is in **2's complement form**, so we have to do **2's complement** again to get back the **original number**.

![image](https://user-images.githubusercontent.com/54589605/224952508-10c64dc5-d2f4-4cf8-b7d1-6bbe5f22044b.png)
![image](https://user-images.githubusercontent.com/54589605/224952578-4f06c26b-a1f5-435d-af3b-31e70cb45707.png)
![image](https://user-images.githubusercontent.com/54589605/224952998-4c3f0663-6d7a-433c-b1b3-0da6153a5294.png)
![image](https://user-images.githubusercontent.com/54589605/224953952-d8a00e5d-4bca-45dc-9f1b-4f20527b7d0d.png)
![image](https://user-images.githubusercontent.com/54589605/224957018-a8cfc8bb-e555-456d-99cd-02d66576fa54.png)

* No. 

![image](https://user-images.githubusercontent.com/54589605/224958342-57a649da-1af5-4682-b21a-0a1a09a7a6ab.png)

> 1 followed by **n** zeroes.

### Note

![image](https://user-images.githubusercontent.com/54589605/224989061-366631cb-2b54-4e3c-98b1-fed4eb8eced7.png)


> Mp effect of **2's complement** on **positive numbers**.

* Bits taken -> 4 bits (+0 to +7)

* 8 -> 1000
* -8 -> 0111 (1's complement)
* -8 -> 1000 (2's complement)
* +8 -> 01000 (2's complement)

> For **+8**, minimum no. of bits required is **5 bits**. We have taken only **4 bits** here. That's why **+8** not possible here. That's why max. no. is **+7** only.

* 0 -> 0000
* -0 -> 1111 (1's complement)
* -0 -> 10000 (2's complement)

> For **-0**, no. of bits required is **5 bits** but we have only **4 bits** here. Hence **-0** is not possible here(4 bits).

![image](https://user-images.githubusercontent.com/54589605/224991773-150cc291-f736-43a8-b4e6-fd4f3cb4063e.png)

## Difference between 1's and 2's complement

### 1's complement

![image](https://user-images.githubusercontent.com/54589605/224992505-84d80687-73e0-4088-a010-80945b4657fb.png)

* range -> -7 to +7.

> In 1's complement we did two separate allotments for **-0 and +0**.

### 2's complement

![image](https://user-images.githubusercontent.com/54589605/224992627-08dab60d-e811-44cf-aa7c-89c031b55c5c.png)

* range -> -8 to +7

> In 2's complement we alloted space for **+0** only, **-0** is not alloted here. 
> Since **-0** is not alloted here, **-8** has taken it's place. For **-0** we need min. of **5bits**.
> Because of these range is increased by **one**. Also for these reason only, **2's complement** is used more than **1's complement**.

![image](https://user-images.githubusercontent.com/54589605/224993403-46e69f00-f629-4ce1-b859-93a8211700dd.png)
![image](https://user-images.githubusercontent.com/54589605/224993876-d8f35aa6-f90e-4e90-8937-1c09735c65e1.png)
![image](https://user-images.githubusercontent.com/54589605/224994929-d2256afa-c796-4700-8a6e-82939ed7f4f5.png)
![image](https://user-images.githubusercontent.com/54589605/224996415-77a783f2-41c2-47f4-b6a8-aa78063834b0.png)

> In the above question, we did the polynomial expansion in reverse order.

## Binary Substraction using 1's complement method [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/224996884-60a7f8bf-816f-4e5b-a999-679c7e92a6e8.png)
![image](https://user-images.githubusercontent.com/54589605/224997660-91f8a081-3ff5-4c8f-90bd-e7acf9f94053.png)
![image](https://user-images.githubusercontent.com/54589605/224998087-0b1ca291-ca89-4b90-a345-91ba36ccacf0.png)

> Addition means **normal** addition only.
> In computer language, there is no substraction. It has addition only.

![image](https://user-images.githubusercontent.com/54589605/224999611-70fb1594-6ab2-4b31-977b-e0169ba8de64.png)

> If **carry=1**, then **add** the carry to **lsb** like in the **8-4** question.
> If **carry=0**, then take **negative** of the **1's complement of the number(11011)**, like in the **4-8** question.

![image](https://user-images.githubusercontent.com/54589605/225000112-4fa35d66-3b1d-4872-8f18-1bd31e1b86cb.png)
![image](https://user-images.githubusercontent.com/54589605/225000163-4c617dd2-a099-48ab-86b1-46cd95ff3155.png)

> If **carry=0**, then we should do **1's complement** again as it is not the original/true form.
> Here, in **1's complement**, wheather the number will be **positive or negative** will depend on the output **carry**.

## Binary Substraction using 2's complement method [**IMPORTANT**]

![image](https://user-images.githubusercontent.com/54589605/225000446-b1c15dbb-c033-447b-bb3d-02fc17714e10.png)

> Here, in **2's complement**, wheather the number will be **positive or negative** will depend only on the **MSB**.

* If **MSB=0** -> positive number -> no effect -> already in true form.
* If **MSB=1** -> negative number -> has effect -> Again do 2's complement of the result.

![image](https://user-images.githubusercontent.com/54589605/225004321-049c7222-2415-46bd-b3ae-17a358b72411.png)
![image](https://user-images.githubusercontent.com/54589605/225004570-12a1a020-ee16-4eab-8d20-f92790c7ebe4.png)
![image](https://user-images.githubusercontent.com/54589605/225005579-5de3bd0a-f371-4f16-bdda-83583b5eb867.png)

* Cout -> Carry -> 0
* Cin -> Carry for **MSB** bit -> 0
* X -> Sign bit of 1st number(9 here) -> 0
* Y -> Sign bit of 2nd number(4 here) -> 0
* Z -> Sign bit of result(9 + 4)(+13 here) -> 0

![image](https://user-images.githubusercontent.com/54589605/225006131-08504d46-179f-4e8e-82c1-dacde3cf6237.png)
![image](https://user-images.githubusercontent.com/54589605/225006466-bd78d614-1519-45c6-abc2-195dc7e07097.png)
![image](https://user-images.githubusercontent.com/54589605/225007080-1565fb19-e810-43b0-90fb-37d6c9e79c1f.png)
![image](https://user-images.githubusercontent.com/54589605/225007945-d0fb6a35-451a-4bff-9205-2bac11bc2b7d.png)
![image](https://user-images.githubusercontent.com/54589605/225008605-8847dcf0-7ab0-4fcc-adfb-b2ec00d84dd8.png)
![image](https://user-images.githubusercontent.com/54589605/225008495-884cd893-4e73-46fb-8e5c-881e4d9d5031.png)
![image](https://user-images.githubusercontent.com/54589605/225009174-50da61d8-e136-4663-8d67-c5665fbbfa5b.png)
![image](https://user-images.githubusercontent.com/54589605/225009441-e3191408-7109-491f-9850-7d13f4faec10.png)
![image](https://user-images.githubusercontent.com/54589605/225009573-d765d48a-9d4e-406f-a0b1-1bd24f95abdb.png)

> There type of problem arises, if we take **less** no. of bits.

![image](https://user-images.githubusercontent.com/54589605/225009809-23a46fab-28dd-43b3-9ef7-0dc3df046d21.png)
![image](https://user-images.githubusercontent.com/54589605/225009889-5f08c605-da96-406d-9056-5b973979b2cc.png)
![image](https://user-images.githubusercontent.com/54589605/225009909-b095b4f9-397a-43be-bd81-92e59617730c.png)
![image](https://user-images.githubusercontent.com/54589605/225010322-dac73685-1d66-405d-943c-1e76e6ed2c05.png)

> For **5 bits**, the range is from **-16** to **+15**, but the expected answer from **-9-8** is **-17**, which is out of range for **5 bits**, that's why we are getting **+15** as the answer instead of **-17**, as we have used **less** no. of bits. So the **answer which is -17** is out of the range.

![image](https://user-images.githubusercontent.com/54589605/225010395-1599214b-013b-4c5c-bad0-b9276d165a7f.png)

> Here also, we have used **5 bits**, the range is from **-16** to **+15**. But the expected answer for **9+8** is **+17** which is out of rande for **5 bits**, that why we are getting **-15** as the answer instead of **+17**, because of the **less** no. of bits used.

![image](https://user-images.githubusercontent.com/54589605/225021788-48431fe2-b1f1-4023-b6eb-1eda5c044293.png)
![image](https://user-images.githubusercontent.com/54589605/225021892-122eaa4f-8f53-4f25-8479-83dad42a6cb4.png)
![image](https://user-images.githubusercontent.com/54589605/225021999-d8448b13-6b13-4186-b839-87edb798a462.png)
![image](https://user-images.githubusercontent.com/54589605/225022048-731d1b0d-9f6d-4198-af5d-523b731bf9b3.png)
![image](https://user-images.githubusercontent.com/54589605/225022089-69924b3b-91b5-470c-91d9-e11189727b54.png)
![image](https://user-images.githubusercontent.com/54589605/225022119-b153e24a-fccf-4fc2-b4fb-fdd240de32c2.png)
![image](https://user-images.githubusercontent.com/54589605/225022144-f51021e2-470a-4d1c-a33c-be55b397d0d3.png)
![image](https://user-images.githubusercontent.com/54589605/225022167-1fd18ac6-d527-4f10-a02f-00adf34e8acd.png)
![image](https://user-images.githubusercontent.com/54589605/225022186-fbdd7a9f-886a-4e75-ac12-de9e43a969c2.png)
![image](https://user-images.githubusercontent.com/54589605/225022214-49607ae3-913b-4514-8bc9-20561006366b.png)


## Overflow condition

![image](https://user-images.githubusercontent.com/54589605/225011005-e49c2102-c174-489d-ad8b-7552eaaace9c.png)


## Combinational_Circuits_IV (21) [14th March 2023]

### Revision

![image](https://user-images.githubusercontent.com/54589605/225023655-b01184af-2a72-4361-b633-8e4dee835728.png)

* Correct. **9+4 -> +13**.

![image](https://user-images.githubusercontent.com/54589605/225023951-95eed351-e766-4177-af5d-6fa0de95bbac.png)

* Correct. **9 - 4 -> +5**.

![image](https://user-images.githubusercontent.com/54589605/225024557-857237c2-f929-4d8f-b240-8274f59ef991.png)

* Correct. **-9 + 4 -> -5**.

![image](https://user-images.githubusercontent.com/54589605/225024861-51a6e82b-a231-4c61-9ee0-cb35726fbd0f.png)

* Correct. **-9 - 4 -> -13**.

![image](https://user-images.githubusercontent.com/54589605/225025354-ac1183af-7fab-4387-a0c4-206177952e23.png)

* In-correct. **9 + 8 -> -15**. It should give **+17** and not **-15**.

![image](https://user-images.githubusercontent.com/54589605/225025643-74e891a7-d2f0-47bc-b623-7d322906ead2.png)

* In-correct. **-9 - 8 -> +15**. It should give **-17** and not **+15**.

![image](https://user-images.githubusercontent.com/54589605/225025884-95edc890-e20b-4ade-8cbe-fa6de7867120.png)

> Because of **less no. of bits**. 
> If we **increase the no. of bits**, then the problem gets eliminated.


## Overflow Condition

![image](https://user-images.githubusercontent.com/54589605/225026650-09a21529-c0c8-4c7e-831b-e524a01fa8ff.png)
![image](https://user-images.githubusercontent.com/54589605/225027384-cee3014e-a676-41bb-868b-3dc009e98275.png)

> The problem/condition happens when we try to **add** **same sign** numbers, **both positive or both negative**.
> If we do, one positive and one negative, then we will never have that problem. 

> **Overflow** occurs when **two same sign** numbers are added.
> We have to design the system in such a way that if an **overflow** occurs then we have to **increase the bit size**.

![image](https://user-images.githubusercontent.com/54589605/225029284-f96a6d8e-71d1-41df-b30b-5b6710a96922.png)
![image](https://user-images.githubusercontent.com/54589605/225029607-063a3599-2a14-4393-9a90-d91dc9153816.png)

* No **overflow**. Above question
* Cin -> 0
* Cout -> 0
* **Cin Ex-OR Cout** -> **zero(0)**

> As **Cin Ex-OR Cout** equals to **zero(0)**, hence no **overflow**.

![image](https://user-images.githubusercontent.com/54589605/225029715-58a339c6-caaf-4183-9f77-be5f6d1ea3dc.png)

* No **overflow**. Above question
* Cin -> 1
* Cout -> 1
* **Cin Ex-OR Cout** -> **zero(0)**

> As **Cin Ex-OR Cout** equals to **zero(0)**, hence no **overflow**.

![image](https://user-images.githubusercontent.com/54589605/225030027-24fce68b-8355-40c9-8925-14a8fadbfd51.png)
![image](https://user-images.githubusercontent.com/54589605/225030160-1aee5bb8-c72e-49ac-a570-a7dd15afad26.png)
![image](https://user-images.githubusercontent.com/54589605/225030234-71ec9ec3-5b5c-493e-8e58-b51aa40333e6.png)

* **Overflow**. Above question
* Cin -> 1
* Cout -> 0
* **Cin Ex-OR Cout** -> **One(1)**

> As **Cin Ex-OR Cout** equals to **One(1)**, hence **overflow** occured here.

![image](https://user-images.githubusercontent.com/54589605/225030519-64bcd572-2186-4e1d-a32e-6f2afd792218.png)

* **Overflow**. Above question
* Cin -> 1
* Cout -> 0
* **Cin Ex-OR Cout** -> **One(1)**

> As **Cin Ex-OR Cout** equals to **One(1)**, hence **overflow** occured here.

![image](https://user-images.githubusercontent.com/54589605/225030700-0e9be5ed-7e5c-412c-8761-2e9ae6b6bbfe.png)
![image](https://user-images.githubusercontent.com/54589605/225030858-82fc7845-748f-4eca-93d8-4bf57a686227.png)

> Whenever we have **Cin Ex-OR Cout** equals to **One(1)** or **Cin Ex-OR Cout = 1**, then **overflow** occurs.
> Whenever we have **Cin Ex-OR Cout** equals to **zero(0)** or **Cin Ex-OR Cout = 0**, then there is **no overflow** occurs.


### 1. Using **carry bits(Above)**.

![image](https://user-images.githubusercontent.com/54589605/225031366-cc294c75-2344-4bb9-9bbd-4d47195385ee.png)
![image](https://user-images.githubusercontent.com/54589605/225031502-e81c712d-ad4d-44e7-aee2-4250ef612077.png)

### 2. Using **sign bits**.

* X -> Sign bit of 1st number
* Y -> Sign bit of 2nd number
* Z -> Sign bit of result(1st op 2nd) [op -> operator]

![image](https://user-images.githubusercontent.com/54589605/225032137-a03ee0d6-5d0a-429c-b210-b77002fd766a.png)
![image](https://user-images.githubusercontent.com/54589605/225032217-92279f48-966e-46a6-a639-fc9ecb9dee85.png)
![image](https://user-images.githubusercontent.com/54589605/225032267-16cf4da7-9386-4214-b25a-c8052ab0c997.png)
![image](https://user-images.githubusercontent.com/54589605/225032349-8d433ae5-c716-46fe-ab5d-e384ae55405d.png)
![image](https://user-images.githubusercontent.com/54589605/225032809-53f78edb-e69d-4abe-9483-bfba2ab0114e.png)

![image](https://user-images.githubusercontent.com/54589605/225033543-1eb18093-4893-4d15-92a3-4b4c0de07055.png)

* x=0,y=0, z=1

> We get **X'y'z**. **X' = 0** is a **positive number system. **y' = 0** is also a positive number.
> If we add two positive nubers, it should be a **positive number(z)** but **z=1**, which means **z** is a **negative number**. If **Z=1** means that **z** is the resultant of the two positive numbers(x and y), indicating as a **negative number**. This will **never happen**, addition of **two** positive numbers gives **resultant  number as negative(z). Hence we have **overflow** here.
> If we add **two** numbers then the resultant number cannot be a **negative number**.

![image](https://user-images.githubusercontent.com/54589605/225035872-f0dcd131-5c88-4c99-925c-b7de9796b425.png)
![image](https://user-images.githubusercontent.com/54589605/225039339-d8b9f851-d8a9-4f4d-b51b-f4ff126187bf.png)

> We get **Xyz'**. **X=1** is a **negative number**, **y=1** is also a **negative number**.
> If we add **two negative number**, it should be a **negative number(z)** but **z=0**, which means **z** is a **positive number**. If **Z=0** means that **z** is the resultant of the two negative numbers(x and y), indicating as a **positive number**. This will **never happen**, addition of **two** negative numbers gives **result number as positive(z). Hence we have **overflow** here.
> If we add **two negative numbers** then the resultant number cannot be a **positive number**.

![image](https://user-images.githubusercontent.com/54589605/225039783-bc79f8f9-c093-4454-babd-c619fb7174fd.png)

### Case 1

* X=0
* Y=0
* Z=1
* X'Y'Z -> Addition of two positive numbers(X and Y), gives negative number(z). Not possible and hence **overlfow** condition.

### Case 2

* X=1
* Y=1
* Z=0
* XYZ' -> Addition of two negative numbers(X and Y), gives positive number(z). Not possible and hence **overlfow** condition.

![image](https://user-images.githubusercontent.com/54589605/225040930-c1f3f736-1e34-42ee-b54b-f7cd3bc321a5.png)
![image](https://user-images.githubusercontent.com/54589605/225041447-6fd0cd09-ca47-4b8d-9604-769a4f31b283.png)

> We can eliminate **overflow** by **increasing the no. of bits**.

![image](https://user-images.githubusercontent.com/54589605/225042057-2e426605-6202-4c2d-b77a-de8ed676e0b1.png)
![image](https://user-images.githubusercontent.com/54589605/225042271-d75a9e1f-424a-472c-8483-e6f427097d81.png)

> Initially we had **5 bits**, now we are adding **1 more bit** here(with black pen). 
> Now for **9 + 8 -> +17**, we got **+17**, which is the **correct answer** by **increasing** the no. of bits.

![image](https://user-images.githubusercontent.com/54589605/225043116-6525821d-cf67-41b4-9026-486ba2631963.png)
![image](https://user-images.githubusercontent.com/54589605/225043163-7c7a88dc-7695-4966-80ba-611e573670a4.png)
![image](https://user-images.githubusercontent.com/54589605/225043373-0a5de5f3-45b0-45ce-885e-a314514ce0b2.png)

> Overflow when the **sign bits** were the **same** but the resultant **sign bit** was **different**.

![image](https://user-images.githubusercontent.com/54589605/225045473-3cc3e1d3-c8ef-4bbb-a283-008760d193ee.png)
![image](https://user-images.githubusercontent.com/54589605/225045902-d43f57ee-061e-4770-b35c-81b7ccd48566.png)

> In **Method 3**, **X=Y** but Z does't equal to **X or Y**, hence **overflow**.
 
## Binary Codes

![image](https://user-images.githubusercontent.com/54589605/225046538-b64be38f-98ec-42a8-810c-abe3a1cc8398.png)
![image](https://user-images.githubusercontent.com/54589605/225047787-fb77d3c4-ae1b-4b15-a162-2f06e5efdc25.png)
![image](https://user-images.githubusercontent.com/54589605/225048797-3d92491a-2f5f-40f3-b542-2fec1e07b9bc.png)
![image](https://user-images.githubusercontent.com/54589605/225084180-9aa49570-ddd3-4717-b5aa-e348355222c7.png)
![image](https://user-images.githubusercontent.com/54589605/225084389-1f4c15f2-286d-424e-8893-04b0854730de.png)
![image](https://user-images.githubusercontent.com/54589605/225084955-fe010ffc-f068-4fb8-9833-e07f0f8c6aa9.png)

* (27) base 10
* (27) base 10 -> (00100111) -> BCD code
* (27) base 10 -> (11011) base 2 -> Binary code

> In BCD we are using **8 bits** to store 27 but in binary we are just using **5 bits** to store 27.

![image](https://user-images.githubusercontent.com/54589605/225085553-ed4a40eb-a042-4b1b-b38d-d18cf208b4fe.png)
![image](https://user-images.githubusercontent.com/54589605/225085641-de7d8181-934c-40bf-8f10-671de7119fdc.png)
![image](https://user-images.githubusercontent.com/54589605/225085917-7602f8b1-1117-4464-8c1e-45c236526989.png)

> Adding **6 or 0110**, that number comes a valid BCD.
> **0 to 9** are **valid BCDs**. After that **10,11,12 etc** they are invalid or not valid BCDs.
> From **0 to 9**, BCD and binary are the same.

![image](https://user-images.githubusercontent.com/54589605/225088421-732de4ee-27da-463e-8ac3-b2ffa5b78299.png)
![image](https://user-images.githubusercontent.com/54589605/225088842-7bd22d96-3503-44b6-977a-e81c43d208d5.png)

> **8421** only is called as the **Natutal BCD**.

![image](https://user-images.githubusercontent.com/54589605/225088904-cc1f1c9a-5982-4d04-bf41-4ce3db7eb831.png)
![image](https://user-images.githubusercontent.com/54589605/225176549-4a659d03-2296-4ce1-9bbd-43235f7b68c4.png)
![image](https://user-images.githubusercontent.com/54589605/225177044-8aab8d73-31c4-44a6-b386-d91f1ca3d6a7.png)

> **BCD** means **0 to 9**. **14** is not valid.

> We are finding for **9** using **742'1'**. For **9** we need 7 and 2. We need **2** but we have **2'**, so we will put **0** for **2'** which shows **2'** is not required but **2** is required. We dont need **1** so we will put **1'** as 1, as we don't need **1**, which means we need **1'**.
> Which means if we need **2**, then we don't need **2'**.
> Which means if we don't need **1**, then we need **1'**.

* 742'1' -> 1001

![image](https://user-images.githubusercontent.com/54589605/225177757-cadeae65-a4c2-48c9-a9d1-4bba598dbc8a.png)

> If we are able to express all the values from **0 to 9** using that code, then only we can say that it is a **valid BCD** code.
> If some numbers cannot be expressed then that code is **not a valid BCD code**.

![image](https://user-images.githubusercontent.com/54589605/225178003-3aca401d-d27f-4993-8500-32bdc0d3e3d7.png)

> Both are correct only.


## BCD Addition

![image](https://user-images.githubusercontent.com/54589605/225178054-2d2408fe-17f1-43dc-ae96-f39befd46f88.png)
![image](https://user-images.githubusercontent.com/54589605/225178404-50227f04-d13f-4173-8c39-5fafb9de978f.png)

* When we can say that a number is a valid BCD or not?

> When the sum of the number is between 0 to 9.
> If the sum is more than **9** then it is an invalid BCD number.

![image](https://user-images.githubusercontent.com/54589605/225178575-5a82fa25-642e-46f1-8509-5ba39c2f4488.png)
![image](https://user-images.githubusercontent.com/54589605/225178606-502188be-34cf-4176-b97b-54c8c74d3168.png)
![image](https://user-images.githubusercontent.com/54589605/225178775-ec82b047-86f8-4c5f-a5dc-eabc61f70d26.png)
![image](https://user-images.githubusercontent.com/54589605/225178821-de1b268d-3d55-4cff-84da-1f236fd0db94.png)
![image](https://user-images.githubusercontent.com/54589605/225179401-04a089fc-7f85-45b8-b732-4e9b8b6c81ab.png)
![image](https://user-images.githubusercontent.com/54589605/225179370-a61fcf0a-bb1a-4075-82cd-e2d521123ceb.png)

* 4 bits -> nibble
* 8 bits -> byte

![image](https://user-images.githubusercontent.com/54589605/225179908-6267e6e2-313b-4aee-9191-de2ee43e88fa.png)

## Excess-3 Code

![image](https://user-images.githubusercontent.com/54589605/225180213-a3386579-3507-49ce-9b7e-a6be1475bac5.png)
![image](https://user-images.githubusercontent.com/54589605/225180260-7917ca80-8ef9-465b-8d23-90af434d9d07.png)
![image](https://user-images.githubusercontent.com/54589605/225180437-6bff90dd-6c45-4533-bf83-32e91d0be241.png)
![image](https://user-images.githubusercontent.com/54589605/225180865-cf03fd26-e573-42cd-a13e-50dd679ffc81.png)

* **Valid Ex-3 codes** -> 3,4,5,6,7,8,9,10,11,12

> Since **valid BCD** starts from **0** and Ex-3 code is **BCD code + 3**. So **min** valid Ex-3 code is **0 + 3 -> 3**. Max BCD code is **9**, so max valid Ex-3 codes is **9 + 3 ->12**.

* **Invalid Ex-3 codes** -> 0, 1, 2, 13, 14, 15.

> **BCD** and **bianry codes** are **weighted** codes.

## Gray Code

![image](https://user-images.githubusercontent.com/54589605/225181191-2660926b-d3ef-4a9f-9e35-fee5c2853338.png)

> Gray code is **non-weighted** codes. Here, the difference between two **successive** numbers will be **1 bit** only. That why it is called as the **minimum distance code** or **unit distance code**.

> Above place **zeroes**, below place **ones**.

![image](https://user-images.githubusercontent.com/54589605/225182110-08c0470a-e9cd-432a-8175-fa2b15384de1.png)

## Binary to Gray Code

![image](https://user-images.githubusercontent.com/54589605/225183399-eff0b878-f416-4f19-910e-839200ac8779.png)

* Convert to BG -> Convert from Binary to Gray code.

> Remember a song which is **side by side**.

![image](https://user-images.githubusercontent.com/54589605/225183781-2ad208aa-b92d-4054-aa41-4d47a468c5d3.png)

> Remember the **no. of bits** in binary and gray code must be the **same**.

![image](https://user-images.githubusercontent.com/54589605/225183992-8839cf0d-a8d3-41df-98c4-ebdbd40f507b.png)

> **Logical diagram** for the implementation of **binary to gray code**.

![image](https://user-images.githubusercontent.com/54589605/225184229-5f31e468-24e5-4bf0-8481-cda9ed917e88.png)

## Gray to Binary Code

![image](https://user-images.githubusercontent.com/54589605/225184445-c2cdb26f-d59e-4c2c-8cfa-6e14ed4a3299.png)
![image](https://user-images.githubusercontent.com/54589605/225184471-b370d5e6-b141-4d9d-9ff9-b275d962f4f2.png)

> **Logical diagram** for the implementation of **gray to binary code**.

![image](https://user-images.githubusercontent.com/54589605/225184591-dd77b8d8-e72e-4e20-a9bd-58c1e9c201d9.png)
![image](https://user-images.githubusercontent.com/54589605/225184720-2a4acf1f-47ac-4dc8-9bf6-e6c2c9c932d4.png)
![image](https://user-images.githubusercontent.com/54589605/225184847-f78c20f9-6400-4ef5-b55c-b4aaa4a12cda.png)
![image](https://user-images.githubusercontent.com/54589605/225185036-8b21c014-2356-431a-bff6-0ddf61df2e86.png)

## Self Complementing Code

![image](https://user-images.githubusercontent.com/54589605/225185123-d97cde66-20d6-4ab1-9bdd-9f019d1f3291.png)

* 2421
* N=8

> Representation of **8** in these(2421) code format is **1110**.

* 8 -> 1110 [2421]
* 1's complement of 1110 -> 0001
* 9's complement of (8) base 10 -> 9-8 -> 1 
* Express 9's complement in **2421** form -> 0001

> We can see that **1's complement of 1110 -> 0001** and 9's complement of 8 in **2421** form -> **0001**. In both we are getting **0001**. Then, this(2421) number is a **self complementing code**.

![image](https://user-images.githubusercontent.com/54589605/225185932-9f25cfae-f373-4f3e-a9f0-a83226828bcc.png)
![image](https://user-images.githubusercontent.com/54589605/225186185-9ac07818-3544-414b-9263-5a98b1ac43ce.png)

* Excess-3 Code. Same

![image](https://user-images.githubusercontent.com/54589605/225186333-04ad92e7-e847-4562-8ed9-52afab5a7568.png)

* Excess-3 code or XS-3 code
* N=5
* Excess-3 of (5) -> 5 + 3 -> 8 -> 1000
* 1's complement of (1000) -> 0111

* 9's complement of (5) base 10 -> 9 - 5 -> 4
* Excess-3 of (4) -> 4 + 3 -> 7 -> 0111 

> We can see that **1's complement of (1000) -> 0111** and 9's complement of 5 in **Excess-3 code** form -> **0111 **. In both we are getting **0111**. Then, this(XS-3 or excess-3 code) number is a **self complementing code**.

## Parity Bits

![image](https://user-images.githubusercontent.com/54589605/225187275-a32b05fa-147d-4a2d-ad6c-4858659b7abd.png)

* We have two parity bits,

1) Even parity bit -> No. of 1s will be **even**.
2) Odd parity bit -> No. of 1s will are **odd**.

![image](https://user-images.githubusercontent.com/54589605/225188391-a641764c-b588-4173-af89-4047a9126345.png)
![image](https://user-images.githubusercontent.com/54589605/225188399-e9da5c7b-656f-4e10-ad0b-af59dd2b67a8.png)
![image](https://user-images.githubusercontent.com/54589605/225188415-fbaf2b6d-4687-4075-8b4b-0bf335e6f6e5.png)

## Sequential Circuits-I (22) [15th March 2023]

## Parity Bit

### Even Parity

> We have to make sure that **message + parity** gives **even** no. of 1s.
> **0** 1's is **even**.

![image](https://user-images.githubusercontent.com/54589605/225281505-516508f4-b473-4e2c-8dc7-e572dac720e8.png)

### Even Parity Generator

> We have **4 bits** here.
> The ouput of Ex-OR gate is **1** for **odd** no. of **1s**.
> If the message contains **odd** no. of 1s, then the output of Ex-OR gate is **1** which means parity bit or **p=1**. Parity bit plus odd no. of 1s in the message, together they(parity bit + message) contain **even** no. of 1s. So, we can call it as a **even parity** circuit.

![image](https://user-images.githubusercontent.com/54589605/225283547-1022ef08-b3d6-4ecf-9fff-2494e027ac2c.png)
![image](https://user-images.githubusercontent.com/54589605/225283808-bb9d6210-74e3-47f4-8b46-55349d8bbd32.png)

> The ouput of Ex-OR gate is **0** for **even** no. of **1s**.
> If the message contains **even** no. of 1s, then the output of Ex-OR gate is **0** which means parity bit or **p=0**. Parity bit plus even no. of 1s in the message, together they(parity bit + message) contain **even** no. of 1s. So, we can call it as a **even parity** circuit.

![image](https://user-images.githubusercontent.com/54589605/225284218-356a1dd3-dbd9-4b51-8cbc-fdcada84d107.png)
![image](https://user-images.githubusercontent.com/54589605/225284397-24502506-c517-47d0-b87c-834955b2a6ac.png)

> So this is called as an **even** parity generator.

## Odd Parity

![image](https://user-images.githubusercontent.com/54589605/225284848-f056dc01-4c9b-4872-b480-dab896a75c33.png)

> We have to make sure that **message + parity** gives **odd** no. of 1s.

## Odd Parity Generator

> The ouput of Ex-OR gate is **1** for **odd** no. of **1s**.
> If the message contains **odd** no. of 1s, then the output of Ex-OR gate is **1** and we have a **NOT** gate after the Ex-OR gate which means parity bit or **p=0**. Parity bit plus odd no. of 1s in the message, together they(parity bit + message) contain **odd + 0 ->odd** no. of 1s. So, we can call it as a **odd parity** circuit.

![image](https://user-images.githubusercontent.com/54589605/225287430-de009824-103a-464a-b96f-32f606c0f917.png)

> The ouput of Ex-OR gate is **0** for **even** no. of **1s**.
> If the message contains **even** no. of 1s, then the output of Ex-OR gate is **0** and we have a **NOT** gate after the Ex-OR gate which means parity bit or **p=1**. Parity bit plus even no. of 1s in the message, together they(parity bit + message) contains **even + 1 -> odd** no. of 1s. So, we can call it as a **odd parity** circuit.

![image](https://user-images.githubusercontent.com/54589605/225288009-e2ea42bb-b796-42eb-89cc-f599bb43225b.png)

## Hamming Code

> Applicable for detection and correction of 1-bit code errors. If it is more than 1 bit then hamming code will not work.

![image](https://user-images.githubusercontent.com/54589605/225289219-3db8be0e-30f5-4098-a896-3ffb504b688a.png)

> Now, we can say that no. of required **parity bits** for **n=2** no. of bits is **3 or p=3**. Using the relation, we can find the **required no. of parity bits**.

![image](https://user-images.githubusercontent.com/54589605/225290446-a5264622-ec5b-48ee-bf6d-5d505ef95c89.png)
![image](https://user-images.githubusercontent.com/54589605/225290955-9a11b88b-b0c4-4507-816b-882787949e2e.png)

![image](https://user-images.githubusercontent.com/54589605/225292235-522abfd6-7cda-4023-8908-a7dcbd0f981d.png)

> There is no direct relation between **n and p**. The relation we need to consider.

### Location of Parity bits

* Parity bit location -> **2^m** only
* No. of parity bits(p) =3

> When **m=0**, we get **p1** that is a parity bit. -> 2^m -> 2^0 -> 1 -> p1
> When **m=1**, we get **p2** that is a parity bit. -> 2^m -> 2^1 -> 2 -> p2
> When **m=2**, we get **p4** that is a parity bit. -> 2^m -> 2^2 -> 4 -> p4

> These are the location of the **parity bits**.

* No. of parity bits(p) =5

> When **m=0**, we get **p1** that is a parity bit.
> When **m=1**, we get **p2** that is a parity bit.
> When **m=2**, we get **p4** that is a parity bit.
> When **m=3**, we get **p8** that is a parity bit.
> When **m=4**, we get **p16** that is a parity bit.

![image](https://user-images.githubusercontent.com/54589605/225301835-6afcbf03-bd3b-4632-9685-d115cbec9862.png)
![image](https://user-images.githubusercontent.com/54589605/225301958-4aec573a-2052-4f95-b820-1ee14f35e9b8.png)


> First we allocate the **parity bits** then we allocate the **data bits**.

* Total message -> 4 + 3 -> 7 bits

![image](https://user-images.githubusercontent.com/54589605/225302408-e7bba509-5ca3-444d-a224-3b396a1ecca6.png)

> First we need to locate the **parity bits** locations first. Remaining location, we will locate the **data bits**.

![image](https://user-images.githubusercontent.com/54589605/225302933-6c44a3ce-d3b6-411e-ad98-8303f21db6e3.png)
![image](https://user-images.githubusercontent.com/54589605/225303147-9ee00d2c-1296-4737-8bc7-e3504fce8b50.png)

> This is the **Hamming code**.
> Data bits value we know, we need to find out the parity bit's value.

![image](https://user-images.githubusercontent.com/54589605/225303715-bfb4971f-2580-4694-8152-894d8ae925b5.png)

> We need to decide the parity bit, on what factors does the **p1** value depend. **p1** value will be **0 or 1** will be dependent on if it is an **even or an odd** parity. **p1** depends on **p1** also, we need to identify.
> For **p1** case only the last bit is **1**. In the remaining cases, which has last bit as **1**. They are **1, 3, 5 and 7** and they correspond to **p1, d, c, a** respectively. The value of **p1** depends upon the values whose last bit is **1**.
> For **p2** case, the middle bit is **1**. In the remaining cases, which has middle bit as **1**. They are **2, 3,6 and 7** and they correspond to **p2, d, b, a** respectively. The value of **p2** depends upon the values whose middle bit is **1**.
> For **p4** case, the MSB or last bit is **1**. In the remaining cases, which has MSB bit as **1**. They are **4, 5,6 and 7** and they correspond to **p4, c, b, a** respectively. The value of **p4** depends upon the values whose MSB bit is **1**.

![image](https://user-images.githubusercontent.com/54589605/225305970-8704f250-4dee-49af-ba42-ab37c0296250.png)

> We need to decide the value of **p1**. The value of **p1** will be decided based on these(p1 dca) group. Let's call it as **even parity**. So, we need to select the value of **p1**, such that these(p1 dca) group contains **even no. of 1s**. As **dca** are **data bits**, we know their values. If we want to develop as an **even parity**, we need to ensure that the complete group(p1 dca) contains **even** no. of 1s.

![image](https://user-images.githubusercontent.com/54589605/225306204-40638d4f-1b83-4345-8c3d-24c9781b1246.png)
![image](https://user-images.githubusercontent.com/54589605/225308582-cf0c0dd6-87ca-4b01-8085-885e0dd7378a.png)

![image](https://user-images.githubusercontent.com/54589605/225324731-eb75a623-f523-458a-ae15-e6236ee0fe33.png)
![image](https://user-images.githubusercontent.com/54589605/225325584-098a4d0d-05c3-4aaa-b72f-f9aebe6558f6.png)

![image](https://user-images.githubusercontent.com/54589605/225328919-ccb459b5-82bd-4420-9a46-63a19650c72d.png)
![image](https://user-images.githubusercontent.com/54589605/225328956-94491e7e-2c2d-4699-92e0-58593525f303.png)
![image](https://user-images.githubusercontent.com/54589605/225329063-3d15ea93-2702-474f-9f41-6d0c6a1c09c9.png)

> It gives the location of the **correction**. **p4p2p1** gives us the **location of the correction**, based on that we can do the correction. 

![image](https://user-images.githubusercontent.com/54589605/225331581-dc808b78-406d-4ec9-9ddc-3be97621a647.png)

> Correct data. No error. 

![image](https://user-images.githubusercontent.com/54589605/225333673-edaaeb4b-9ce0-4cf6-9a45-f0ebf14188bc.png)

> Sir will check and tell in next class. Below is the correct solution.

### Solution 

[**This is the correct value to find the correct data**]

> As all of the bits of **p4p2p1** are not all zeroes(0), hence we have an error. We need to identify the **location of the error**. The location of the error is given as **p4p2p1 -> 110 -> 6**. This means we have an **error** at the **6th bit**. On the 6th bit we have **1** and it is an error, so we should have **0** there.

![image](https://user-images.githubusercontent.com/54589605/225484198-356dcdb3-091f-4074-aab9-d85da2a1baaf.png)
![image](https://user-images.githubusercontent.com/54589605/225485131-e5bc0de7-0d23-4f61-920b-3826aed0779b.png)

* When there is no error?

> When all of the **p1, p2 and p4** bits are **0, 0 and 0**. The ones highlighted below, when they are all **zeroes(0)** then there is no error. Then we have **no errors**, otherwise we have errors.

![image](https://user-images.githubusercontent.com/54589605/225485262-208b057d-ba98-44e1-8bd9-18c44c3379a3.png)
![image](https://user-images.githubusercontent.com/54589605/225485592-d8ba665e-48cb-4734-923b-8155950ca24a.png)

> Gives the **location of the error bit**.

![image](https://user-images.githubusercontent.com/54589605/225485775-6ff82ed3-5f00-4520-87b7-8cf291076832.png)

> No no, don't see that one. If all **...p4p2p1** values are zeros then only we don't have any error.

![image](https://user-images.githubusercontent.com/54589605/225487866-1dc03073-f220-4ef6-9aac-e50ba0943249.png)
![image](https://user-images.githubusercontent.com/54589605/225488666-50a30c51-8662-451b-8245-afb23015062b.png)

> Error as all the values of **p4p2p1** are not all **zeroes(0)**.

![image](https://user-images.githubusercontent.com/54589605/225488940-d757db0c-ff20-4943-b4d6-654e81d6a397.png)

> No, it is wrong. We need to use **p4p2p1** by calculating, we can find/identify the **location of the error**. and **not the no. of errors**. Location of the error we are going to find out.

![image](https://user-images.githubusercontent.com/54589605/225489522-00809a8e-7d35-4c78-bc97-19f06a652bcb.png)

> Only **1 bit** of data is there nah, so by finding the location of the error, we are able to correct it. If it is **1** then we convert it into **0** and vice-versa.








![image](https://user-images.githubusercontent.com/54589605/225335519-eada81fd-3abd-45d2-b43c-bfd4b0077b38.png)'

> We took the 2's complement of **+11 -> 001011** and got **-11 -> 110101** which is the answer.

![image](https://user-images.githubusercontent.com/54589605/225337387-56b57ddf-d90b-4cb0-b7c6-23fd4890db0d.png)
![image](https://user-images.githubusercontent.com/54589605/225338060-fcf55c9e-f9b9-492b-a8d2-d8465feaab78.png)
![image](https://user-images.githubusercontent.com/54589605/225338824-eef48532-d948-484a-850b-760a592ceb6b.png)
![image](https://user-images.githubusercontent.com/54589605/225339683-872a4511-35bf-41a5-9871-997f65d5e525.png)
![image](https://user-images.githubusercontent.com/54589605/225339995-96232e59-9943-4141-a8a6-8d4829548122.png)
![image](https://user-images.githubusercontent.com/54589605/225341210-090b5167-55d6-4b49-85a4-10f3b672ced2.png)
![image](https://user-images.githubusercontent.com/54589605/225342507-1ea72e28-399c-45e1-a1e1-5d41c472baf8.png)
![image](https://user-images.githubusercontent.com/54589605/225344673-2c908369-e3b6-4f2a-ba6b-08546d94917e.png)
![image](https://user-images.githubusercontent.com/54589605/225344731-655f7e02-09b4-4666-908d-10d42b2d0677.png)
![image](https://user-images.githubusercontent.com/54589605/225344777-13578ed4-2fa3-4b58-8942-fa24fbf3b15b.png)
![image](https://user-images.githubusercontent.com/54589605/225344804-0440e251-0b4c-41df-9e5d-4fbfae47ff06.png)
![image](https://user-images.githubusercontent.com/54589605/225344834-9ca6a521-1ae4-4d24-88e7-d96719b09518.png)
![image](https://user-images.githubusercontent.com/54589605/225344869-ffe302c2-39d3-476e-b529-ffd499386b1d.png)
![image](https://user-images.githubusercontent.com/54589605/225344895-e14d36ea-0932-4cf0-a95b-4c5fdad2eed5.png)
![image](https://user-images.githubusercontent.com/54589605/225344939-90ef4954-cf2c-4b15-94eb-ca5d7446e928.png)
![image](https://user-images.githubusercontent.com/54589605/225344974-cd2866e9-feef-4ec6-bee2-e7bef91f9ce0.png)
![image](https://user-images.githubusercontent.com/54589605/225345017-b73a6255-a2f4-43fb-a7d9-93a3addfb2b5.png)

## Combinational Logic Circuits





 







* Upload the rest of the doubts of digital, uploaded till **Image 15**. Some of the solutions are present check them out.
* After This video, do the **5** daily assignments. (**DONE**)
* After that do **DPP 1**. (**DONE**)


# Practice Questions and Solutions

* Link -> https://drive.google.com/drive/folders/1Feqhx3AHQt1MXlX-UxTk-q5V0EK_UUJv


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

> Solved in  **5_Boolean Algebra_IV, Lesson 5**.

![image](https://user-images.githubusercontent.com/54589605/220342702-2e4a650d-ca6d-426d-87e0-abc8d132ba3c.png)
![image](https://user-images.githubusercontent.com/54589605/220342992-a5206118-de29-46c2-afe0-200724c2e344.png)
![image](https://user-images.githubusercontent.com/54589605/220343107-9a19cb96-7bb8-40e0-817d-b99c80c0dde1.png)
![image](https://user-images.githubusercontent.com/54589605/220343273-a47221c6-78c1-451e-aef2-94d75a718860.png)
![image](https://user-images.githubusercontent.com/54589605/220343418-b3b03176-f75a-44d9-8867-4021aa411a8d.png)
![image](https://user-images.githubusercontent.com/54589605/220343537-f9ee9dee-3758-4d0f-9b4b-ad84dd81da87.png)
![image](https://user-images.githubusercontent.com/54589605/220343820-e50e4b95-97b2-4999-bf4c-b5f215c68bae.png)

![image](https://user-images.githubusercontent.com/54589605/220344239-83b095af-4b5f-4320-9020-1a16e55400bd.png)
![image](https://user-images.githubusercontent.com/54589605/220344394-beeb218b-8d03-46d3-8425-9cc4d27edb67.png)

> In the above question, we have to see the **given values**. Whichever is the **highest** value is given **logic 1** and the **smaller** value is given **logic 0**.

![image](https://user-images.githubusercontent.com/54589605/220344792-2c0a9aaa-25fc-44d9-a2ee-36c1c70b957d.png)

> Here also same as above. Check the **given values**. Whichever is the **smallest** value is given **logic 1** and the **higher** value is given **logic 0**


![image](https://user-images.githubusercontent.com/54589605/220345093-45f928f6-22c0-40b5-aea9-69344de4a1b6.png)
![image](https://user-images.githubusercontent.com/54589605/220345194-504ecb89-c989-4dde-970e-8f092f6d00f5.png)
![image](https://user-images.githubusercontent.com/54589605/220345476-ef2a3663-8063-4e75-a6a2-c340715edce0.png)
![image](https://user-images.githubusercontent.com/54589605/220363569-71a8b193-c1dc-4d45-93ea-efdbf1fc8886.png)
![image](https://user-images.githubusercontent.com/54589605/220363823-d3d59089-bfbc-4ff8-addc-49195f1a21e8.png)
![image](https://user-images.githubusercontent.com/54589605/220363923-582565e4-5d99-420c-881e-e12c44d4fee8.png)


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

## Solutions

> Solved in  **5_Boolean Algebra_IV, Lesson 5**.

![image](https://user-images.githubusercontent.com/54589605/220364239-901adac2-4e6a-4943-ad38-c6378972e119.png)
![image](https://user-images.githubusercontent.com/54589605/220364501-a1c68cd2-39b2-447d-9822-24cbe9dc261b.png)
![image](https://user-images.githubusercontent.com/54589605/220364758-a2ab1c78-b01c-4eba-850b-a26ea7a8c383.png)
![image](https://user-images.githubusercontent.com/54589605/220364874-0d57de93-36b9-477d-8437-95e3a4b99fbc.png)
![image](https://user-images.githubusercontent.com/54589605/220365098-15ca86ac-b8c4-4b49-bb1b-57f187818446.png)
![image](https://user-images.githubusercontent.com/54589605/220365261-e01b8432-87e0-4bfa-8ade-a8a707b52c48.png)
![image](https://user-images.githubusercontent.com/54589605/220365456-a5ee6566-9713-48c5-abb1-72351f8c7688.png)
![image](https://user-images.githubusercontent.com/54589605/220365755-b02dbdf4-a65e-45a0-9c13-bb1e30353eb0.png)
![image](https://user-images.githubusercontent.com/54589605/220366033-c19f1a66-ee72-426c-9094-c627a23f02f7.png)
![image](https://user-images.githubusercontent.com/54589605/220366139-59d5f076-6bdb-4fa9-87fe-9ca5f1a1d0bf.png)
![image](https://user-images.githubusercontent.com/54589605/220366248-2c65a355-b165-4c41-8e69-4b2574b47ed6.png)
![image](https://user-images.githubusercontent.com/54589605/220366332-6fa39f7d-a8f6-459e-8f0b-6ed17065972a.png)
![image](https://user-images.githubusercontent.com/54589605/220366773-7cb69e7c-f968-4f59-a015-46e57333e24d.png)
![image](https://user-images.githubusercontent.com/54589605/220367639-04eb0875-8f3e-423b-bbcd-d7df570dce73.png)
![image](https://user-images.githubusercontent.com/54589605/220371748-234ad26c-660b-4cb2-90fd-dcfe865294c5.png)
![image](https://user-images.githubusercontent.com/54589605/220372150-d3eb228b-9ea8-4623-8953-d273348d966e.png)
![image](https://user-images.githubusercontent.com/54589605/220373805-1d7ec0fa-b5b3-4201-8d20-1500da177349.png)


## Practice Questions (3) [11th Feb 2023]

> From **3_Boolean_Algebra_III**. Page **116**.

![Boolean_Algebra_15](https://user-images.githubusercontent.com/54589605/218306810-0c5e276b-613e-4a27-ba3e-17655cccf521.jpeg)

> Answer for **Q32** will be **15** as well.

![image](https://user-images.githubusercontent.com/54589605/218307654-7cb1973b-056d-49ac-8dbe-42771d4d9bbb.png)
![image](https://user-images.githubusercontent.com/54589605/218307661-0a5fb34b-d7e5-4a82-84a2-e1c74e148b24.png)
![image](https://user-images.githubusercontent.com/54589605/218307666-1c0fced1-c595-4ec8-afd3-0c75ae85131a.png)
![image](https://user-images.githubusercontent.com/54589605/218307675-4df16c1e-31c2-4872-afb9-840954693167.png)

* This is how we are getting **4**. There are **4** combinations for **2** variables.

![image](https://user-images.githubusercontent.com/54589605/218307708-92986132-fe4a-489e-8675-5129fc532287.png)
![image](https://user-images.githubusercontent.com/54589605/218307729-ad96673c-5b6d-4bbb-921b-8104f91e4246.png)

### Q36

* *3*, we know that **maxterms and minterms** are same index complements to each other.
* *4*, we know that **maxterms and minterms** are same index complements to each other.
* *5*, we know that **maxterms and minterms** are same index complements to each other.
* *6*, we know that **maxterms and minterms** are same index complements to each other.
* *7*, we know that **product of different index minterms** is **zero(0)**.
* *8*, we know that **sum of different index maxterms** is **one(1)**.
* *9*,  know that **maxterms and minterms** are same index complements to each other. We get the output of **8**. Then, we know that **sum of different index maxterms** is **one(1)**.
* *10*,  know that **maxterms and minterms** are same index complements to each other. We get the output of **7** but they will be capital M(M0 * M2 * M3 * M5). Then, we know that **product of different index maxterms** is **one(1)**.

### Q37

![image](https://user-images.githubusercontent.com/54589605/218309335-f050151d-d283-4d7a-9c45-cc49c2fa5945.png)
![image](https://user-images.githubusercontent.com/54589605/218309360-13d733f5-36a7-4aff-9b70-5dc6d6578664.png)
![image](https://user-images.githubusercontent.com/54589605/218309449-a9a5174b-eab6-41e5-b8fa-7bb09ef47c33.png)

> All options are corrrect. '*' is not multiplication here, it is solved according to the question, A*B= AB + A'B'.

## Daily Practice 3

> Solved in  **5_Boolean Algebra_IV, Lesson 5**

### solution

![Boolean_Algebra_16](https://user-images.githubusercontent.com/54589605/220421806-d25cfa86-eb5b-4c8a-8aa4-194946770dd4.jpeg)
![Boolean_Algebra_17](https://user-images.githubusercontent.com/54589605/220421869-5fd6c785-c9c1-4129-85f6-50f91e5ebc7f.jpeg)
![Boolean_Algebra_18](https://user-images.githubusercontent.com/54589605/220421908-ed3a8105-8915-48c0-b57c-5a6b5b791a40.jpeg)
![Boolean_Algebra_19](https://user-images.githubusercontent.com/54589605/220421965-525d4f79-fb1b-4917-b975-563cdf64d2d6.jpeg)
![Boolean_Algebra_20](https://user-images.githubusercontent.com/54589605/220422005-9b34455e-6f12-4145-ac70-861776325f36.jpeg)
![Boolean_Algebra_21](https://user-images.githubusercontent.com/54589605/220422024-76577784-36e9-4d07-8e34-c303413d5ecc.jpeg)
![Boolean_Algebra_22](https://user-images.githubusercontent.com/54589605/220422031-87359838-177f-452a-a18e-a74a252f1062.jpeg)
![Boolean_Algebra_23](https://user-images.githubusercontent.com/54589605/220422099-c9b018c6-9727-4896-8d61-e8bae806863a.jpeg)
![Boolean_Algebra_24](https://user-images.githubusercontent.com/54589605/220422114-6d68c060-cd1c-4299-aa3b-4ded3333744f.jpeg)
![Boolean_Algebra_25](https://user-images.githubusercontent.com/54589605/220422188-5934eff9-8684-4003-8d3b-e0302ca5c6f0.jpeg)
![Boolean_Algebra_26](https://user-images.githubusercontent.com/54589605/220422219-473a1977-7ab6-4454-bd29-9a00c6ba0bf0.jpeg)
![Boolean_Algebra_27](https://user-images.githubusercontent.com/54589605/220422242-e9ba815c-c505-4963-8516-f71c5e129382.jpeg)


### Solutions

![image](https://user-images.githubusercontent.com/54589605/220374279-a2cbe065-a65d-45f1-aff0-d2c96886edd6.png)
![image](https://user-images.githubusercontent.com/54589605/220374807-0c3ee8b3-622a-486b-9ce9-91500b1e8e82.png)
![image](https://user-images.githubusercontent.com/54589605/220377232-6751f284-6002-4328-a154-bdf0f7427a84.png)
![image](https://user-images.githubusercontent.com/54589605/220377335-77fc5d97-5c8e-4d42-8098-8e47b2c421f3.png)
![image](https://user-images.githubusercontent.com/54589605/220377519-7086a083-b554-4f82-bd11-824209826603.png)
![image](https://user-images.githubusercontent.com/54589605/220378237-28f38076-590e-4e80-99ee-b5a25bda3103.png)
![image](https://user-images.githubusercontent.com/54589605/220379058-9c4f858a-3613-46be-a142-b80ada7307a5.png)
![image](https://user-images.githubusercontent.com/54589605/220379717-2a9a6613-b068-419a-8504-5342b01feb13.png)
![image](https://user-images.githubusercontent.com/54589605/220380006-f44c0513-e919-4611-81c4-ed7a4b39f050.png)
![image](https://user-images.githubusercontent.com/54589605/220380725-4d5e0abb-4b76-4d5a-b228-96aad4e40ce3.png)
![image](https://user-images.githubusercontent.com/54589605/220380997-fc163809-0802-4532-ad1b-41a2a5b6170a.png)
![image](https://user-images.githubusercontent.com/54589605/220381389-4bf0a9fe-2fc0-4b64-9119-f0178028d7d2.png)
![image](https://user-images.githubusercontent.com/54589605/220381961-63ae3f58-66bf-49b2-8301-8f87ad633a40.png)
![image](https://user-images.githubusercontent.com/54589605/220382288-3651ef42-1859-4b02-b588-8e41f665d357.png)
![image](https://user-images.githubusercontent.com/54589605/220382584-d81a2f3b-4d68-47ea-bae8-253b9d7b4e23.png)
![image](https://user-images.githubusercontent.com/54589605/220383456-abd1df56-4b80-4ab3-bd8a-781826d4645a.png)
![image](https://user-images.githubusercontent.com/54589605/220383615-7d513f3e-b183-424b-82ad-ad4b75827f8c.png)
![image](https://user-images.githubusercontent.com/54589605/220383797-431d5fe9-d7e0-432b-8246-059af1e3d465.png)
![image](https://user-images.githubusercontent.com/54589605/220384307-1a3f1f56-9475-4588-8a02-a9e4de9bd967.png)
![image](https://user-images.githubusercontent.com/54589605/220384493-1846cb4c-a9dc-47a4-8d0a-2849488c7dd6.png)
![image](https://user-images.githubusercontent.com/54589605/220385553-0e29ba02-c481-4fdf-bf30-fc40f90514e1.png)
![image](https://user-images.githubusercontent.com/54589605/220385790-9dbb9b9c-c2ca-45d2-bbc3-4cd52c6d483c.png)
![image](https://user-images.githubusercontent.com/54589605/220386528-173ea492-afd4-4efd-a2f7-3a2a3bbb7a03.png)
![image](https://user-images.githubusercontent.com/54589605/220386931-98a1c616-45d7-4a86-a995-2c1e0fbdddf5.png)

> Here, in the above question, the **minimized expression** may not be **unique**. We need to follow a systematic format, that is the **K-map**.

![image](https://user-images.githubusercontent.com/54589605/220388102-3c217961-a84f-4a15-ad92-32ba5864f318.png)
![image](https://user-images.githubusercontent.com/54589605/220388687-2401dca0-dd71-47d7-ace1-6d17a8cebec8.png)
![image](https://user-images.githubusercontent.com/54589605/220389936-0f456faf-90d6-4584-adeb-12a6cc258408.png)
![image](https://user-images.githubusercontent.com/54589605/220390174-f3ddf2f2-e4c0-454f-83b7-9953979af0da.png)
![image](https://user-images.githubusercontent.com/54589605/220390282-938d2f35-fd76-4bed-b2dc-fc8eeea86e0e.png)
![image](https://user-images.githubusercontent.com/54589605/220390478-a692af73-3775-46fb-b044-bb6e78667a1b.png)
![image](https://user-images.githubusercontent.com/54589605/220390626-44cb17f0-b523-4568-8e87-6aed467f43fd.png)
![image](https://user-images.githubusercontent.com/54589605/220390741-44fd7755-a3b7-46c0-8640-0f8c76b3878f.png)
![image](https://user-images.githubusercontent.com/54589605/220390958-5584e3e1-d443-4c0d-9693-c5b0e692ab18.png)

> In the above question, the expression is in **minimal form**, we are converting it into **canonical form** by multiplying the **values** which are not present.


## Daily Practice 4

### Solutions

![Boolean_Algebra_28](https://user-images.githubusercontent.com/54589605/220425352-3a83f769-23f1-4a1a-ba31-73d864ba98bc.jpeg)
![Boolean_Algebra_29](https://user-images.githubusercontent.com/54589605/220425362-a0d22549-f4c1-422d-8258-692f331e483f.jpeg)
![Boolean_Algebra_30](https://user-images.githubusercontent.com/54589605/220425367-0b724951-517a-4561-b3c6-4d8805d63eb3.jpeg)
![Boolean_Algebra_31](https://user-images.githubusercontent.com/54589605/220425402-5079bbda-9d25-4c12-835a-950fdd1a377e.jpeg)
![Boolean_Algebra_32](https://user-images.githubusercontent.com/54589605/220425446-4a053068-892a-4bb1-9f02-7350231d27df.jpeg)
![Boolean_Algebra_32](https://user-images.githubusercontent.com/54589605/220425416-99f2cab6-9577-4c92-a62d-92b7d9e1d38c.jpeg)


## Daily Practice 5

### Solutions

![Boolean_Algebra_33](https://user-images.githubusercontent.com/54589605/220425515-d6e53cbe-6c97-42a8-bc93-e16a125909c2.jpeg)
![Boolean_Algebra_34](https://user-images.githubusercontent.com/54589605/220425523-8e0f9f4d-351f-46c4-b108-aa951ede6db1.jpeg)
![Boolean_Algebra_35](https://user-images.githubusercontent.com/54589605/220425529-89f63953-6b31-46d0-abb5-845dc2f7ed81.jpeg)
![Boolean_Algebra_36](https://user-images.githubusercontent.com/54589605/220425536-2b0de8af-2916-49c2-9369-a9d2eb559e04.jpeg)
![Boolean_Algebra_37](https://user-images.githubusercontent.com/54589605/220425595-12fc3f5f-ef90-45dc-b98c-5431e516041f.jpeg)
![Boolean_Algebra_38](https://user-images.githubusercontent.com/54589605/220425606-360e3900-d1c7-4f50-aaa5-f25d4f3d4bea.jpeg)
![Boolean_Algebra_39](https://user-images.githubusercontent.com/54589605/220425611-3cc9b1c9-2f0c-4538-ba9d-08c55d9e0418.jpeg)

## Quiz -1

* Link -> https://unacademy.com/quiz/quiz-i/GHBP234BLO/attempts/SP_D3D556TXHE409MJQE

![1_Quiz_1](https://user-images.githubusercontent.com/54589605/221354263-e6ced04e-ca20-4f9c-a2a7-b3bb26caf3c1.jpeg)
![1_Quiz_2](https://user-images.githubusercontent.com/54589605/221354265-f95e476d-f683-4f9d-97e0-ea8b9c31dd42.jpeg)

## Quiz -2

* Link -> https://unacademy.com/quiz/quiz-ii/86ZC82X5Y4/solutions/SP_8D3S0555R3HT0ONHV

> Solved in **13_K_Maps_1** PDF file.

![Quiz_2_1](https://user-images.githubusercontent.com/54589605/222900536-1da6f402-ab09-44ca-9709-03b743c1f611.jpeg)
![Quiz_2_2](https://user-images.githubusercontent.com/54589605/222900538-b2743d90-5af7-40c0-9cf6-9d8a4fca1064.jpeg)

![image](https://user-images.githubusercontent.com/54589605/222901416-a7b01b00-aa26-4546-b61b-02ba3b5ae4d7.png)
![image](https://user-images.githubusercontent.com/54589605/222901446-eb31cac7-1094-4d43-af3e-f8e3b9d87034.png)
![image](https://user-images.githubusercontent.com/54589605/222901459-31278e4a-48a7-4a11-a11c-880e5e31bf1d.png)
![image](https://user-images.githubusercontent.com/54589605/222901510-e5a688d8-d6f7-4d07-891f-0182b2b35768.png)
![image](https://user-images.githubusercontent.com/54589605/222901670-a01b1863-0192-40dd-900d-892fb8d28ad2.png)
![image](https://user-images.githubusercontent.com/54589605/222902083-714e2a8c-a85b-4283-8ce2-58587dbb6d24.png)
![image](https://user-images.githubusercontent.com/54589605/222902078-a9914c62-f92c-42e3-b462-8515da48b328.png)
![image](https://user-images.githubusercontent.com/54589605/222902149-c131f68b-17ba-46d9-bc04-f0450a93a114.png)
![image](https://user-images.githubusercontent.com/54589605/222902185-cf325cfc-1c0e-4059-8b08-7decf4ba39fc.png)
![image](https://user-images.githubusercontent.com/54589605/222902198-58494352-60e2-4bcd-9842-6dd492992c65.png)

>The questions was find the minimized boolean expression which is not correct?

* The answer would be **a**, as **b,c and d** are minimized boolean expression.

![image](https://user-images.githubusercontent.com/54589605/222902383-8afe74cd-47d7-48e2-9400-afdedd03539a.png)

![image](https://user-images.githubusercontent.com/54589605/222902396-afeb439a-3bc8-4c6f-b696-aa765b8a29f4.png)
![image](https://user-images.githubusercontent.com/54589605/222902424-f7b84134-92f0-4643-9e9e-835783d96de7.png)
![image](https://user-images.githubusercontent.com/54589605/222902451-6633fa52-f37f-43ce-848e-cc04352194bc.png)

* I also choose **option D** in the quiz as well.

![image](https://user-images.githubusercontent.com/54589605/222902594-83778cff-0d9b-4163-8214-79f92e81a592.png)
![image](https://user-images.githubusercontent.com/54589605/222902632-1f1d3147-ebbc-4ecc-b1cc-3060223e9eb7.png)
![image](https://user-images.githubusercontent.com/54589605/222903336-a14c8081-78a2-4d81-b080-020580d22fb2.png)
![image](https://user-images.githubusercontent.com/54589605/222903371-53bce139-4262-4afe-b16c-15e51f4c196c.png)

* Product -> Intersection -> Common

![image](https://user-images.githubusercontent.com/54589605/222903597-814809b1-53cd-4484-aec2-c0406686c18e.png)
![image](https://user-images.githubusercontent.com/54589605/222903606-f7c873c6-d054-4366-abdc-10e7d71011b5.png)
![Quiz_2_3](https://user-images.githubusercontent.com/54589605/222904259-c8dd7b45-df2c-4cef-9d33-2c3e8969e07b.jpeg)
![image](https://user-images.githubusercontent.com/54589605/222904272-6064f901-b4f8-475a-a83f-b7ccf8172cda.png)
![image](https://user-images.githubusercontent.com/54589605/222904366-f0b253b3-d110-4e53-be03-90ecf2f7c194.png)
![image](https://user-images.githubusercontent.com/54589605/222904424-9c9a71ae-264a-4d0a-8df7-74323575510b.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/9E08304ADD

![image](https://user-images.githubusercontent.com/54589605/222907881-132152b2-5faa-4489-af67-a5e89bbef38d.png)
![image](https://user-images.githubusercontent.com/54589605/222907922-de77bc77-e086-4b60-94bf-d0a9f4fdcd54.png)
![image](https://user-images.githubusercontent.com/54589605/222907951-45c1aea0-5b1c-4070-b302-1e34a92841b4.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/0F85EDFD59

![image](https://user-images.githubusercontent.com/54589605/222908131-d3f0f144-623a-44d8-8424-a259abbe0545.png)
![image](https://user-images.githubusercontent.com/54589605/222908101-e1b7eea0-6c0c-4d4a-8f44-adb3f42183da.png)
![image](https://user-images.githubusercontent.com/54589605/222908123-bab7631d-7b1a-4253-b2a3-e4ca98e3940d.png)


## Quiz-3

* Link -> https://unacademy.com/quiz/quiz-iii/CXYPV272GG/solutions/SP_PUXNX0XD1XLJZO351

### Solutions

### Q4

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/C6A01A8C34

> Here, we have to create the truth table.

* 0 0 -> 0 [Open circuit]
* 0 1 -> 1 [Closed Circuit and bulb glows]
* 1 0 -> 1 [Closed Circuit and bulb glows]
* 1 1 -> 0 [Open circuit]

![image](https://user-images.githubusercontent.com/54589605/224918888-1c5f45d2-0652-4fe6-849e-5e4ed4819de5.png)
![image](https://user-images.githubusercontent.com/54589605/224919060-3cd9ec97-d183-4748-905e-7f652c3f3a78.png)
![image](https://user-images.githubusercontent.com/54589605/224919282-10bfc786-b742-4d3b-ba94-1a6098cd5f45.png)

> The circuit is behaving like an **odd '1'** detector. We have that **Ex-OR** acts as an **odd '1'** detector.

### Q5

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B0C11533F7

![image](https://user-images.githubusercontent.com/54589605/224927374-2ddc6538-d88d-4b13-8131-2610673d5b7f.png)
![image](https://user-images.githubusercontent.com/54589605/224927448-2b5f6d87-7ebe-4f23-8432-5aac22e36e55.png)
![image](https://user-images.githubusercontent.com/54589605/224917477-7ddf3104-5cd6-4ea9-a0f6-e0171bff822b.png)
![image](https://user-images.githubusercontent.com/54589605/224917435-f1b5a7e4-ddc5-4c02-89da-7214831d39b8.png)

> The video solution also mentioned that the **3rd variable** is not mentioned in the options. Check it.


### Q6

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/7927390292

### Q7

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/E662A2BF2C

> The video solution also said the answer should be **F + (A + B + C) * DE**. Which is option **A**, but the quiz gave **option D** as the answer. 

![image](https://user-images.githubusercontent.com/54589605/224923101-605058de-e6ce-44c6-b43a-ccf064c16b6d.png)
![image](https://user-images.githubusercontent.com/54589605/224923426-31bd51ef-3074-4a81-ac10-767a50dc2317.png)
![image](https://user-images.githubusercontent.com/54589605/224923498-9f313a8c-d681-451b-9a7c-45772042db74.png)

### Q8

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/6E1DF1ADA6

> Waiting for the solution. Got solution for a different question.

### Q9


### Q10

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/2F1B48BB6E

![image](https://user-images.githubusercontent.com/54589605/224928674-13c5acd4-460d-424a-ada9-5f7b1fb7ab4f.png)
![image](https://user-images.githubusercontent.com/54589605/224929243-2890582f-4b19-4861-815b-57cbd95540ec.png)
![image](https://user-images.githubusercontent.com/54589605/224929403-e5ff8f1a-3528-4a61-86e5-1106485fe4a0.png)

> Only **b and c** were correct but in the quiz **a,b and c** were correct.


## Quiz-4 [14th March 2023]

* Link -> https://unacademy.com/quiz/quiz-iv/DCB01ZEY3S/solutions/SP_QVL4A30HZ0V6VOTZG

![image](https://user-images.githubusercontent.com/54589605/224941205-86b0b2c5-32a3-4ff0-aef5-3984a26a060a.png)
![image](https://user-images.githubusercontent.com/54589605/224941222-42fe7b0c-080c-4fcd-95bc-369a78af0d0a.png)
![image](https://user-images.githubusercontent.com/54589605/224941240-ad61594b-904d-4b4c-b7b9-0097e8a76a3d.png)

### Q2

![image](https://user-images.githubusercontent.com/54589605/224943429-e586278d-2a8d-4336-be07-eacb48e2cf80.png)
![image](https://user-images.githubusercontent.com/54589605/224943482-048840e7-ee10-4938-b1f0-4ce07b324241.png)

> Here, the numbers are in different number systems. We have to guess the number systems then it would be easier to find the number.

### Q7

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/350A12D163

> The first video is a solution of a **different** question.

![image](https://user-images.githubusercontent.com/54589605/225016454-f83098d4-c65f-4e13-a7bd-c83ebb3f7a26.png)
![image](https://user-images.githubusercontent.com/54589605/225016807-02d3222d-1135-4986-b377-cd0d63254a4b.png)

> My Solution after seeing the above solution for similar type question.

![image](https://user-images.githubusercontent.com/54589605/225017743-55e7b256-f6a4-4fbe-b177-13214c9e682c.png)
![image](https://user-images.githubusercontent.com/54589605/225019226-48c4334b-8fa0-4d44-ba22-9bbbf1cec2b7.png)

### Q10

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/29CF7082F7

![image](https://user-images.githubusercontent.com/54589605/225279680-a289ca1d-2f14-478c-868c-4f1d0b841644.png)
![image](https://user-images.githubusercontent.com/54589605/225279812-3a89d440-1551-45cf-8ce8-77f1b1ecf24c.png)




# DPP questions

* Link -> https://drive.google.com/drive/folders/1dq_D8WXuIe_2drVlRyed_ci9QofI_TaU
 
## DPP 1

> Solved in **Logic Gates-IV**, Lesson **1**.

![image](https://user-images.githubusercontent.com/54589605/221558780-098518b2-a976-4349-b3c7-c7cae7959ca6.png)
![image](https://user-images.githubusercontent.com/54589605/221558818-4ae50f57-dead-4948-9505-f51957820b19.png)
![image](https://user-images.githubusercontent.com/54589605/221558643-18d71836-bf40-4be8-9224-b62b4ad26eab.png)
![image](https://user-images.githubusercontent.com/54589605/221559393-5b36396c-daa4-4fd8-8ea9-8ad1e1217836.png)
![image](https://user-images.githubusercontent.com/54589605/221559652-d3ea6049-f78a-42a3-98d2-b97afd5f3ff6.png)
![image](https://user-images.githubusercontent.com/54589605/221559885-88bfc081-6ee0-4a55-be0d-4d0437212694.png)
![image](https://user-images.githubusercontent.com/54589605/221560269-1a55c475-6c29-45a1-a7eb-b6e2d0fc1206.png)
![image](https://user-images.githubusercontent.com/54589605/221560419-9c9f4b95-5070-4f2d-a210-985a14ff6040.png)
![image](https://user-images.githubusercontent.com/54589605/221560667-d43100c9-3674-4a5c-b7e8-3fb126c44a18.png)
![image](https://user-images.githubusercontent.com/54589605/221560886-c7193657-77c1-43c8-87de-9b45922ecc1f.png)
![image](https://user-images.githubusercontent.com/54589605/221561779-f1c86f20-14ea-4a1c-b5b9-76bf001ad73c.png)
![image](https://user-images.githubusercontent.com/54589605/221562416-be0e51f9-a9ed-4496-bc04-95db0a6e7997.png)
![image](https://user-images.githubusercontent.com/54589605/221562278-95937d89-d888-4b3c-bb61-266a03ed23b9.png)
![image](https://user-images.githubusercontent.com/54589605/221562614-919721a0-c89e-4e25-87d4-a57705320252.png)

* SSOP -> Standard SOP or Canonical SOP
* SPOS -> Standard POS or Canonical POS

![image](https://user-images.githubusercontent.com/54589605/221562822-de21f2a4-b8b7-4c15-b237-3db9785eb00a.png)
![image](https://user-images.githubusercontent.com/54589605/221563076-a11bc2be-5c89-46ae-8646-85df39415817.png)
![image](https://user-images.githubusercontent.com/54589605/221563186-3743ca92-bc42-4784-b9d2-d7dc54337556.png)
![image](https://user-images.githubusercontent.com/54589605/221563226-114b6cf6-ba7a-4086-9f9a-ba690b283f88.png)
![image](https://user-images.githubusercontent.com/54589605/221563310-dff82011-39c5-4de4-b998-6be29489d238.png)
![image](https://user-images.githubusercontent.com/54589605/221563445-cc232aaa-b9df-4608-8268-1348c48bfdc8.png)
![image](https://user-images.githubusercontent.com/54589605/221563651-5f5c7406-5d72-495a-9c3c-2fff746450d5.png)
![image](https://user-images.githubusercontent.com/54589605/221564227-a6f8121c-d3b1-45c9-be2d-87abd4654999.png)
![image](https://user-images.githubusercontent.com/54589605/221564463-71563bc0-ab8d-4a33-94c6-aafbb38c9f56.png)

> We have to completely convert the expression into either **SOP or POS** form and then count the no. of literals. The expression cannot be in half SOP and half in POS form, we cannot count the no. of literals during that time.

![image](https://user-images.githubusercontent.com/54589605/221564827-a2a0293f-f231-4153-8d7a-755898999f21.png)
![image](https://user-images.githubusercontent.com/54589605/221564885-edbad77d-a77e-42fb-a563-fb60d3dbd68f.png)
![image](https://user-images.githubusercontent.com/54589605/221564973-1fa5d3a5-1ad5-4ac7-8cfc-fc84bda8cfe1.png)
![image](https://user-images.githubusercontent.com/54589605/221565493-152f5cf0-36f5-4f49-a971-51a420bd1085.png)
![image](https://user-images.githubusercontent.com/54589605/221565931-036d1a26-89a9-4da2-9cf0-39b5176a534e.png)
![image](https://user-images.githubusercontent.com/54589605/221565991-fb292d15-e7b6-4f4f-b8cf-b0028bb97264.png)
![image](https://user-images.githubusercontent.com/54589605/221566092-442f2db6-8fb7-4d78-b04b-48d3319003fb.png)
![image](https://user-images.githubusercontent.com/54589605/221567398-3a714b53-0111-49c3-9639-a3b21af5a8d3.png)
![image](https://user-images.githubusercontent.com/54589605/221567557-b5f72468-5c83-4d2b-bb38-9025fa0b71a7.png)
![image](https://user-images.githubusercontent.com/54589605/221567701-9dc67984-a7c9-48e0-9b37-3c97181639c2.png)
![image](https://user-images.githubusercontent.com/54589605/221567893-160e43bd-7412-4845-a7f7-89b2dc338a30.png)
![image](https://user-images.githubusercontent.com/54589605/221568624-563033fd-3ecd-439a-b26a-cbef92d4d27d.png)
![image](https://user-images.githubusercontent.com/54589605/221570291-f4caf204-85ca-41d7-a4eb-807865fa1a68.png)
![image](https://user-images.githubusercontent.com/54589605/221571313-499f077b-99f5-4feb-a871-aa2c63163f62.png)
![image](https://user-images.githubusercontent.com/54589605/221571368-63488afb-5fdc-4ccf-a955-ed6b6eb6ad17.png)
![image](https://user-images.githubusercontent.com/54589605/221572029-12c75dcb-984e-497f-b873-04d98f2d0930.png)
![image](https://user-images.githubusercontent.com/54589605/221572078-e36db17d-033c-4a35-a722-b240ac647ae9.png)


![1_DPP_1](https://user-images.githubusercontent.com/54589605/221579487-ac9d24e3-f76d-48e7-b2c0-33517e00b7e3.jpeg)
![2_DPP_1](https://user-images.githubusercontent.com/54589605/221579494-e28d35a3-6c25-4a90-9e42-1aefdbb70684.jpeg)
![3_DPP_1](https://user-images.githubusercontent.com/54589605/221579499-27d6d3c8-4c0c-4282-ac6e-bfa264fb3f15.jpeg)
![4_DPP_1](https://user-images.githubusercontent.com/54589605/221579503-3fc29a68-52b3-417b-bbe1-3c0d1d4313ef.jpeg)
![5_DPP_1](https://user-images.githubusercontent.com/54589605/221579506-bb9e68d8-c7a2-46f2-abe3-15dcdd2cf4c8.jpeg)
![6_DPP_1](https://user-images.githubusercontent.com/54589605/221579510-5b988a61-3a3a-4532-816c-6eedf416d1af.jpeg)


## Doubt_Solving_Session (12) [2nd March 2023]

![image](https://user-images.githubusercontent.com/54589605/222480589-650927cd-8246-4046-8b30-4eaea4891eb9.png)
![image](https://user-images.githubusercontent.com/54589605/222481393-373458fe-4d6c-45d0-b038-d668f1d9a32e.png)
![image](https://user-images.githubusercontent.com/54589605/222482256-5a0a8d6d-6308-4aef-a75e-54f5167ab0e9.png)
![image](https://user-images.githubusercontent.com/54589605/222482917-9dc3cf96-7603-4fc7-8220-be6ac2120178.png)
![image](https://user-images.githubusercontent.com/54589605/222485454-eccaa7c1-d4fd-4e41-ae75-7b207ebe4a4d.png)
![image](https://user-images.githubusercontent.com/54589605/222486907-d195abe8-f453-4031-92fa-48c4b4c272ef.png)
![image](https://user-images.githubusercontent.com/54589605/222487379-b7e25c6b-3b94-4a59-aa59-c792fce70068.png)
![image](https://user-images.githubusercontent.com/54589605/222488033-bc632168-d269-499f-a9ea-5521c43dabf2.png)
![image](https://user-images.githubusercontent.com/54589605/222489320-cb1ed15f-0193-4fbd-9189-7ff853659e80.png)
![image](https://user-images.githubusercontent.com/54589605/222489883-638aebfb-968e-4d90-a3d6-934f3e9ffc76.png)
![image](https://user-images.githubusercontent.com/54589605/222494862-4543050f-732c-42cf-86a8-1474762fd83a.png)
![image](https://user-images.githubusercontent.com/54589605/222496753-fd0c3318-5e85-48f3-8349-e3611f4ebdcc.png)
 ![image](https://user-images.githubusercontent.com/54589605/222497138-585d339b-6013-4845-b401-4414aadcd1c4.png)
![image](https://user-images.githubusercontent.com/54589605/222497275-b0f1f0b2-e498-4063-b52b-62fa78288f0a.png)
![image](https://user-images.githubusercontent.com/54589605/222497811-48f3a255-932a-420e-bb58-f1aece34142b.png)

* As we have considered the **1s**, hence we are dealing with **SOP** form.

![image](https://user-images.githubusercontent.com/54589605/222498856-d983045b-4351-49da-880b-540449ad5e2b.png)
![image](https://user-images.githubusercontent.com/54589605/222498903-b7bf2048-2c7f-4e61-8c24-756f548b84cc.png)
![image](https://user-images.githubusercontent.com/54589605/222501068-e3022258-e48b-4aa1-88e1-7b44502dd5cb.png)
![image](https://user-images.githubusercontent.com/54589605/222501628-92410938-0791-4b61-bf9e-3a1a3dd1e995.png)
![image](https://user-images.githubusercontent.com/54589605/222502033-f283a840-9015-4c80-bd59-1bdad9530c74.png)
![image](https://user-images.githubusercontent.com/54589605/222502298-7b676759-480c-4b81-8dae-dd846ffce081.png)
![image](https://user-images.githubusercontent.com/54589605/222502590-4a662a89-4c71-4969-bfd5-c881973d5d18.png)
![image](https://user-images.githubusercontent.com/54589605/222503311-9e8a3b2c-fe97-4238-a0a1-0f15c9e117e4.png)
![image](https://user-images.githubusercontent.com/54589605/222504202-d93f97b5-6c10-40d5-beab-ef6b4de303d3.png)
![image](https://user-images.githubusercontent.com/54589605/222504427-9295cc05-971c-4f0f-b9a2-9d5d63c8754b.png)
![image](https://user-images.githubusercontent.com/54589605/222505327-2d2c1563-565a-4c31-9f4e-c1f5703cee40.png)
![image](https://user-images.githubusercontent.com/54589605/222505523-50432c5c-6139-4f42-abc4-d5f8277aa55e.png)
![image](https://user-images.githubusercontent.com/54589605/222506261-0e8039ee-59d4-427c-9f23-07b0461b3858.png)
![image](https://user-images.githubusercontent.com/54589605/222506505-be0007f4-1f21-4461-9e70-e3c6bccd4455.png)
![image](https://user-images.githubusercontent.com/54589605/222506720-f2740c7b-2eb3-4e0c-b37a-c9c8261388f3.png)
![image](https://user-images.githubusercontent.com/54589605/222507690-2480f6d2-9c8c-4459-83bd-1324101844b3.png)
![image](https://user-images.githubusercontent.com/54589605/222509098-6054439a-5484-43ae-a34e-5536f830d9ca.png)
![image](https://user-images.githubusercontent.com/54589605/222509778-50fe43a3-10a2-4d7e-869b-c27bc66d1c07.png)
![image](https://user-images.githubusercontent.com/54589605/222509888-8a3f2e63-94c4-4578-adb6-20a234a950a0.png)
![image](https://user-images.githubusercontent.com/54589605/222510094-a2d4d7be-b148-446d-9ff8-b86bc32f2f85.png)
![image](https://user-images.githubusercontent.com/54589605/222510517-a1c4d41d-7b1d-4b65-888f-fb0ff5188058.png)
![image](https://user-images.githubusercontent.com/54589605/222510706-14e40df4-8051-44ff-9acb-06f5c3d39fda.png)
![image](https://user-images.githubusercontent.com/54589605/222511660-5eaca84c-cff0-4ad5-a926-7d8666b63e15.png)
![image](https://user-images.githubusercontent.com/54589605/222511857-a2653707-0b5a-4764-8c67-8c01481e67c1.png)
![image](https://user-images.githubusercontent.com/54589605/222512062-b3a42812-b3eb-4ce1-a966-43c162746c1c.png)
![image](https://user-images.githubusercontent.com/54589605/222512942-570a486e-6505-4d39-9950-7910ea21be9e.png)
![image](https://user-images.githubusercontent.com/54589605/222513750-f3b9b40b-910f-4db3-a68f-57fbc0e3f390.png)
![image](https://user-images.githubusercontent.com/54589605/222514325-5a092007-aa54-4638-b689-09a54194eb7e.png)
 ![image](https://user-images.githubusercontent.com/54589605/222516567-01e1be58-1f62-492e-bc78-9a900dba7c7e.png)
![image](https://user-images.githubusercontent.com/54589605/222518082-f2ea1464-7457-4381-b19f-081d7b17f8e4.png)

![image](https://user-images.githubusercontent.com/54589605/222518558-5724cfaf-e1a6-48fa-9bb0-2192c58cf439.png)
![image](https://user-images.githubusercontent.com/54589605/222518756-f3a6d777-2791-4973-b23b-0b4fb9ad683e.png)
![image](https://user-images.githubusercontent.com/54589605/222519114-0e6eefb3-3f11-4e39-a03a-09a410d20dcd.png)
![image](https://user-images.githubusercontent.com/54589605/222521606-469d0cd3-f623-4f70-903f-e0eeb7fc5fd8.png)
![image](https://user-images.githubusercontent.com/54589605/222522633-a8f8348b-ed12-441c-8e66-9b2ddeefb26d.png)
![image](https://user-images.githubusercontent.com/54589605/222523006-f00ccb9d-4285-4429-a18e-91c556bbf64c.png)
 ![image](https://user-images.githubusercontent.com/54589605/222523201-f2c7f3bc-2293-480c-b6ee-b71631fb8b52.png)
![image](https://user-images.githubusercontent.com/54589605/222523323-12cde4f5-64c3-426d-a0bb-4ccec9bba0dd.png)
![image](https://user-images.githubusercontent.com/54589605/222523706-8c6cd174-88ac-424c-821e-a6c1a918a0c0.png)
![image](https://user-images.githubusercontent.com/54589605/222524554-49288a46-2b8d-4b34-b364-6dee9a3ee216.png)
![image](https://user-images.githubusercontent.com/54589605/222525590-f27adec8-3695-4b78-90ab-608cb23e8984.png)
![image](https://user-images.githubusercontent.com/54589605/222526674-8184da7f-918f-4ad2-bb82-d181680cc544.png)
![image](https://user-images.githubusercontent.com/54589605/222527105-6f71ea60-c4aa-4547-bd78-2279c3af8c06.png)
![image](https://user-images.githubusercontent.com/54589605/222527523-d56c2155-892f-4d91-81e0-5fb5388a259c.png)
![image](https://user-images.githubusercontent.com/54589605/222528313-3b287eb4-6bde-4837-a315-ba50b0770a88.png)
![image](https://user-images.githubusercontent.com/54589605/222529182-ac8a2bfe-e79a-4a30-a26e-3442961afe21.png)
![image](https://user-images.githubusercontent.com/54589605/222529274-eaf3f3c3-9873-4d26-a63d-bce6937aada6.png)
![image](https://user-images.githubusercontent.com/54589605/222530123-d9a947db-470b-4892-acc3-9c1bcb3894de.png)
![image](https://user-images.githubusercontent.com/54589605/222530633-9179bcde-bd7c-4f1d-9cc7-038169e01ee0.png)
![image](https://user-images.githubusercontent.com/54589605/222532382-e3aa9db4-3873-4d88-abac-8fed993fca47.png)
![image](https://user-images.githubusercontent.com/54589605/222532932-9be35160-9a09-41d2-a5be-2b23b993f6ac.png)
![image](https://user-images.githubusercontent.com/54589605/222533618-4f1530d9-f801-4fd1-b315-de7a16aaac83.png)
![image](https://user-images.githubusercontent.com/54589605/222533761-36386125-5404-4941-8f00-a25f1376e84c.png)
![image](https://user-images.githubusercontent.com/54589605/222534055-39176caf-e2ba-41e8-b8fc-edbbb894eaf2.png)
![image](https://user-images.githubusercontent.com/54589605/222534934-d4511edb-f5a3-41cc-85b3-a88ca07ed0f0.png)
![image](https://user-images.githubusercontent.com/54589605/222534981-c4899cef-2f11-41e7-887b-4a352b398452.png)
![7_DPP_1](https://user-images.githubusercontent.com/54589605/222883915-a7de31ea-f27e-4a68-a5de-2235fe7fc4ef.jpeg)
![8_DPP_1](https://user-images.githubusercontent.com/54589605/222883916-690228d5-5afe-4720-8ffe-db01e1eb19e2.jpeg)
![9_DPP_1](https://user-images.githubusercontent.com/54589605/222883918-3c001f45-ec43-435f-9905-18e8095bcf75.jpeg)
![10_DPP_1](https://user-images.githubusercontent.com/54589605/222883920-3da03155-d05b-4320-83db-13b622fcb347.jpeg)
![11_DPP_1](https://user-images.githubusercontent.com/54589605/222883930-0b3b7b57-6ee3-441f-8184-2c37f8f1a9c3.jpeg)
![12_DPP_1](https://user-images.githubusercontent.com/54589605/222883931-c1b773e1-e95c-4967-b88d-d75ded965c5e.jpeg)
![13_DPP_1](https://user-images.githubusercontent.com/54589605/222883963-911a028b-1bb6-4956-a8d0-a2ef9755849e.jpeg)
![14_DPP_1](https://user-images.githubusercontent.com/54589605/222883966-73dbe711-afbd-498b-947e-1e6a3b1a366a.jpeg)
![15_DPP_1](https://user-images.githubusercontent.com/54589605/222883968-a1628d3c-8383-4a98-99b3-626db25ef481.jpeg)
![16_DPP_1](https://user-images.githubusercontent.com/54589605/222883969-e1933943-8759-42ca-a5ff-2b3a0b6bc4f1.jpeg)
![17_DPP_1](https://user-images.githubusercontent.com/54589605/222883976-6a30f891-6c95-4c80-82fd-219716df3454.jpeg)
![18_DPP_1](https://user-images.githubusercontent.com/54589605/222883979-8640f581-3bfc-4ec7-975d-8b2789dd8cc8.jpeg)
![19_DPP_1](https://user-images.githubusercontent.com/54589605/222883980-ca44f480-a823-418f-8da6-e9e5dda00e9a.jpeg)
![20_DPP_1](https://user-images.githubusercontent.com/54589605/222883982-15629ee2-b79d-4752-b546-ed5628ca1904.jpeg)
![21_DPP_1](https://user-images.githubusercontent.com/54589605/222884010-19aa1fe3-57ce-4230-9b3e-6cc07d5af3a4.jpeg)
![22_DPP_1](https://user-images.githubusercontent.com/54589605/222884012-f23f7635-524e-4c92-8b01-a52d5f627f43.jpeg)
![23_DPP_1](https://user-images.githubusercontent.com/54589605/222884014-ea736f72-269c-4101-9aa1-6537dcc2501b.jpeg)
![24_DPP_1](https://user-images.githubusercontent.com/54589605/222884015-f35eb6b6-52df-42b4-b762-e5a4efc45ea1.jpeg)
![25_DPP_1](https://user-images.githubusercontent.com/54589605/222884019-fbed4508-0191-4052-8dd5-8608b1dfe261.jpeg)
![26_DPP_1](https://user-images.githubusercontent.com/54589605/222884020-a9d2752c-a949-4b15-8813-9ff4cdb72564.jpeg)
![27_DPP_1](https://user-images.githubusercontent.com/54589605/222884022-ac3c90d8-506c-4817-a699-441a5c1e5264.jpeg)
![28_DPP_1](https://user-images.githubusercontent.com/54589605/222884023-4ebcedd9-3f43-41de-bc87-d246a44182b8.jpeg)
![29_DPP_1](https://user-images.githubusercontent.com/54589605/222884024-8b76d4c2-efda-440f-9e73-833d0b686153.jpeg)


### Q98 from DPP-1

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/B6409363AA

![image](https://user-images.githubusercontent.com/54589605/222900706-9fcccb02-52af-4149-ba5f-c78d5d299b8c.png)
![image](https://user-images.githubusercontent.com/54589605/222900723-56351ae0-c0c7-49ee-91ad-5fccecbd4a2a.png)
![image](https://user-images.githubusercontent.com/54589605/222900754-faef90b5-8db8-49a1-a566-3098472df5a2.png)

* Using De-morgans law on 4th statemenet matched with 2nd statement.

## K_Map_I (DPP-1 Continued) (13) [4th March 2023]

![image](https://user-images.githubusercontent.com/54589605/222904624-ae8313c9-c150-45c4-86ff-7926785b8774.png)
![image](https://user-images.githubusercontent.com/54589605/222904888-963b88de-86ed-4461-b221-8c8cf56cc6a0.png)
![image](https://user-images.githubusercontent.com/54589605/222905292-d7d0e10e-9360-4e15-99ca-50c2ea0fd37e.png)
![image](https://user-images.githubusercontent.com/54589605/222905498-c5a52fd6-2878-4255-a837-99192aa5a970.png)
![image](https://user-images.githubusercontent.com/54589605/222905544-97f3d64d-a78d-4f9c-8870-802f1947046c.png)
![image](https://user-images.githubusercontent.com/54589605/222905841-1cc80621-3e5a-43d5-9095-3b0ff06c773f.png)
![image](https://user-images.githubusercontent.com/54589605/222905864-95ba63b3-3d1e-4a02-b23c-f327d590d785.png)
![image](https://user-images.githubusercontent.com/54589605/222905946-400c9adf-9a25-4b81-9e06-6338e8fcf493.png)
![image](https://user-images.githubusercontent.com/54589605/222906068-ff6ab954-bfdf-48b4-b4de-9a68f67fcd7e.png)
![image](https://user-images.githubusercontent.com/54589605/222906151-eef6ba1b-71ed-4334-badd-ac17062baebf.png)
![image](https://user-images.githubusercontent.com/54589605/222906255-a78434fd-4c53-4fb0-b34b-3ac94e7d2c0a.png)
![image](https://user-images.githubusercontent.com/54589605/222906398-c74bd2ff-668c-4c5b-b527-bf0663d4dd63.png)
![image](https://user-images.githubusercontent.com/54589605/222906541-f5a36cd1-6c7c-4d59-8547-bc7d2e7a0248.png)
![image](https://user-images.githubusercontent.com/54589605/222906596-08865dcc-8c4e-4019-98e5-ec5a1c737f5a.png)
![image](https://user-images.githubusercontent.com/54589605/222906836-a9b43932-e1e6-4900-894d-400897f4d5c4.png)
![image](https://user-images.githubusercontent.com/54589605/222906909-8ce1c41b-0567-4414-a166-b42d0433a65c.png)
![image](https://user-images.githubusercontent.com/54589605/222907090-f71243b0-2068-4896-bdec-6b6aa4af4aae.png)
 

### Logic Gates DPP

![image](https://user-images.githubusercontent.com/54589605/222907403-fafee904-ee54-48e4-bf90-0744d3eb4f26.png)
![image](https://user-images.githubusercontent.com/54589605/222907698-114dd8e6-6d44-4831-8f02-340de734ed9c.png)
![image](https://user-images.githubusercontent.com/54589605/222908364-bc9940cb-704a-48ab-b95e-49200f46e90e.png)
![image](https://user-images.githubusercontent.com/54589605/222908431-5e9687bd-8248-4560-ba27-d57d14c8f21c.png)
![image](https://user-images.githubusercontent.com/54589605/222908502-54db59b1-5906-4826-bfa5-9bf438e27603.png)
![image](https://user-images.githubusercontent.com/54589605/222911397-d1d90533-a95a-4a70-b252-9d86cbc2bbfe.png)
![image](https://user-images.githubusercontent.com/54589605/222911965-1f16f3b6-cea0-4817-9077-72714385073a.png)
![image](https://user-images.githubusercontent.com/54589605/222912247-08b59e3f-8bf5-4af8-a551-4636ebd628ab.png)

![image](https://user-images.githubusercontent.com/54589605/222913332-44561e42-d4bf-4ca1-b47b-49fbb346a94d.png)
![image](https://user-images.githubusercontent.com/54589605/222913358-00da12c5-71ed-4151-a89b-52be3d5fea90.png)
![image](https://user-images.githubusercontent.com/54589605/222913398-582f41b1-d9a1-46d3-8e9d-d63273d566b1.png)
![image](https://user-images.githubusercontent.com/54589605/222913465-0ed89232-bcab-4240-b949-9003d87cc313.png)
![image](https://user-images.githubusercontent.com/54589605/222913933-2cc12c86-4968-4065-9417-20b3e01a0f06.png)
![image](https://user-images.githubusercontent.com/54589605/222914323-9ea786e6-d584-4b46-9843-6901f2ad5ba1.png)
![image](https://user-images.githubusercontent.com/54589605/222914873-217fbf2b-c4fa-4b54-8438-6381787cb150.png)
![image](https://user-images.githubusercontent.com/54589605/222914993-a6af8af7-a658-4a12-9a12-cf0df7056fee.png)
![image](https://user-images.githubusercontent.com/54589605/222915221-9ee98b42-ab62-46a1-a0e5-3c257908361a.png)
![image](https://user-images.githubusercontent.com/54589605/222915596-6c5a26dd-4114-4098-b46c-47d029ebfd95.png)
![image](https://user-images.githubusercontent.com/54589605/222915651-fa26f879-ad2b-495a-8efb-0b98c350052c.png)
![image](https://user-images.githubusercontent.com/54589605/222915707-30c4480b-4029-4d02-a2bd-9c76abceff72.png)
![image](https://user-images.githubusercontent.com/54589605/222915863-fb986665-dc81-4049-8aa0-f057f86ec202.png)
![image](https://user-images.githubusercontent.com/54589605/222915906-34e40cef-d756-4e89-8bd4-bc1385996105.png)
![image](https://user-images.githubusercontent.com/54589605/222915989-9d71f41c-3c08-4802-9022-3170c3c4648f.png)
![image](https://user-images.githubusercontent.com/54589605/222916007-98b583d6-e670-4ab0-ab45-f2b07d43e39e.png)
![image](https://user-images.githubusercontent.com/54589605/222916088-a9cc6baa-edb7-44af-a7e3-1af66bf73a07.png)
![image](https://user-images.githubusercontent.com/54589605/222916102-df6e4d3b-d7e7-4943-80b2-0b365486ffbb.png)
![image](https://user-images.githubusercontent.com/54589605/222916291-85cde17a-c3a0-4d58-8c54-8a037761c6d3.png)
![image](https://user-images.githubusercontent.com/54589605/222916416-cfb2f719-a602-4d7c-879c-f1d702ce1f33.png)
![image](https://user-images.githubusercontent.com/54589605/222916551-f3aeddf7-3759-4550-ad4b-b8d347e778e5.png)
![image](https://user-images.githubusercontent.com/54589605/222916605-2de70fd3-6c2d-49ba-be42-a8b15689bd36.png)
![image](https://user-images.githubusercontent.com/54589605/222916751-f644e539-2ece-451b-aa3e-e764925d42da.png)
![image](https://user-images.githubusercontent.com/54589605/222916765-859aef57-d940-4718-b5e8-fc441a092f89.png)

* stuck-at-1 fault -> Whatever the circuit is before it, doesn't matter, it is always stuck at **1**, no matter what.

* stuck-at-0 fault -> Whatever the circuit is before it, doesn't matter, it is always stuck at **0**, no matter what.

![image](https://user-images.githubusercontent.com/54589605/222917365-0da49b8b-cc8f-4338-8dac-b21db36522d1.png)
![image](https://user-images.githubusercontent.com/54589605/222916932-9f0188d1-817c-43df-9302-87a01dbdfd52.png)
![image](https://user-images.githubusercontent.com/54589605/222917313-27cd0e52-ce62-4e80-96de-e21ee4a488d1.png)
![image](https://user-images.githubusercontent.com/54589605/222917414-4a4c84f4-466c-43cd-9ec8-62a2d291790d.png)
![image](https://user-images.githubusercontent.com/54589605/222917484-21eb7f27-10aa-4fe6-9afe-f65687094719.png)
![image](https://user-images.githubusercontent.com/54589605/222917558-75ae81c9-cc2e-4cbb-92ac-edec4179dfc8.png)

### Doubts

![image](https://user-images.githubusercontent.com/54589605/222976868-c3249abd-16a8-4ac1-b5f3-a07ee52332b3.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/C90DC659E3


## Logic Gates DPP continued (K_map_II) (14) [5th march 2023]

![image](https://user-images.githubusercontent.com/54589605/222966405-44ad2982-f22b-4626-9bd5-c0fcc91b4bfc.png)
![image](https://user-images.githubusercontent.com/54589605/222966675-1f892d28-24ba-4e85-98ac-53c0042a026d.png)
![image](https://user-images.githubusercontent.com/54589605/222966708-9b075786-0c40-4cff-ac56-0e0f0e6255bf.png)
![image](https://user-images.githubusercontent.com/54589605/222966752-4a1c22ba-7505-4167-90d7-a25d7e373e3e.png)
![image](https://user-images.githubusercontent.com/54589605/222966780-85d72412-20fd-424a-9583-f97ab4042c8b.png)
![image](https://user-images.githubusercontent.com/54589605/222966855-95b8d02b-6686-4e24-8359-6c5231e57ceb.png)
![image](https://user-images.githubusercontent.com/54589605/222967064-91eeb505-708d-4ca9-b44d-0229fa985f56.png)
![image](https://user-images.githubusercontent.com/54589605/222967376-d3d8a24b-e38b-4c26-afb1-37fc73e86746.png)
![image](https://user-images.githubusercontent.com/54589605/222967700-33475d08-4fea-44a1-9f45-4f7d4c760926.png)
![image](https://user-images.githubusercontent.com/54589605/222967977-47d32212-2da4-4bcb-b0b5-a19be806411b.png)
![image](https://user-images.githubusercontent.com/54589605/222968124-cdccb1de-3ef0-4774-a2b9-0caf20b96060.png)
![image](https://user-images.githubusercontent.com/54589605/222968167-c58740fa-76de-4d1e-bdde-e4831fe490d3.png)
![image](https://user-images.githubusercontent.com/54589605/222968179-2c6a8f94-baeb-484b-9ebb-e08fc3d8c805.png)

* X-NOR -> Equality Gate, coincidence gate.

![image](https://user-images.githubusercontent.com/54589605/222968414-48c70c8f-0652-4733-bd20-830e92903aee.png)

* Only **NAND** as there is only one option where both inputs are high and the output is low.
* In **NOR**, we satisfy the condition that when both inputs are high and the output is low. But here, we are getting more than **1** condition where the output is low and the ouputs are not necessarily both high, one of them is high. Hence as the question says **if and only if** that's we cannot take **NOR** here. 

![image](https://user-images.githubusercontent.com/54589605/222968658-5838a326-7d05-4c3f-8db8-9dd5d54d0700.png)
![image](https://user-images.githubusercontent.com/54589605/222968768-3a2ccf33-c15b-4de1-afea-cc644e64c4c7.png)
![image](https://user-images.githubusercontent.com/54589605/222968783-f20c19b0-73f9-45a1-b6d8-41a842609cac.png)
![image](https://user-images.githubusercontent.com/54589605/222968860-c6593fc6-61d6-4c2a-8adf-e9345edb2c80.png)
![image](https://user-images.githubusercontent.com/54589605/222969292-1e673094-e403-4908-91cc-b57cda027391.png)
![image](https://user-images.githubusercontent.com/54589605/222969323-3a181c3e-8ec8-4402-8acf-5375275d9a25.png)
 ![image](https://user-images.githubusercontent.com/54589605/222969630-006c347a-0924-4826-88c3-279f9359d0f2.png)
![image](https://user-images.githubusercontent.com/54589605/222969753-3fc25b8e-6d22-4c90-883f-0c750ff48cd1.png)

* Two level Nor-Nor circuit is equivalent to OR-AND circuit.
* NAND-NAnD -> AND-or
* NOR-NOR -> OR-AND

![image](https://user-images.githubusercontent.com/54589605/222969980-f587a459-3e0b-4afe-87c6-5a342c296e02.png)
![image](https://user-images.githubusercontent.com/54589605/222970068-22f8523f-b7c8-4e51-af29-34cc8dc00dd7.png)
![image](https://user-images.githubusercontent.com/54589605/222970158-e0975b7f-52e2-4ca2-8fdd-26b33c2b58ca.png)
![image](https://user-images.githubusercontent.com/54589605/222970370-70c0e8d3-65bd-4870-b292-3344e9896e57.png)
![image](https://user-images.githubusercontent.com/54589605/222970536-c3062bb1-466e-47e4-a0ac-fc3d9f6cb70c.png)
![image](https://user-images.githubusercontent.com/54589605/222970671-1898e837-56e7-41e5-aca4-8be8e9717b83.png)
![image](https://user-images.githubusercontent.com/54589605/222970837-6d70c55a-1af9-4a14-b786-766c1a028905.png)
![image](https://user-images.githubusercontent.com/54589605/222970997-f04f159b-c613-46fa-a62e-5b5da5995283.png)
![image](https://user-images.githubusercontent.com/54589605/222971161-52372a16-31ec-4961-9f6f-fdbe492aac79.png)

* Kaju barfi -> NAND Barfi.

![image](https://user-images.githubusercontent.com/54589605/222971388-164c8e44-0b80-4a1d-8258-5ef5c439dbd2.png)
![image](https://user-images.githubusercontent.com/54589605/222971408-3eb69c40-5e23-49f7-aa3c-8f8d8e2f68b1.png)
![image](https://user-images.githubusercontent.com/54589605/222971374-c5e6b373-f709-4abd-9339-12157a6620b1.png)
![image](https://user-images.githubusercontent.com/54589605/222971524-21ba39ea-c31c-425e-9ead-984697c5211e.png)
![image](https://user-images.githubusercontent.com/54589605/222971624-cff7f533-d278-4def-bff6-4d6e55da654b.png)
![image](https://user-images.githubusercontent.com/54589605/222971747-efdcbdd1-0053-442b-9334-c5a95f51fc29.png)
![image](https://user-images.githubusercontent.com/54589605/222972148-7b62f935-6305-45be-ba7c-42f1f3ad4edf.png)
![image](https://user-images.githubusercontent.com/54589605/222972163-a09c2ecc-0e6c-48b7-9263-79a22a71006a.png)
![image](https://user-images.githubusercontent.com/54589605/222972360-5c3a0f9c-e717-4ff3-a2da-a0358cc44eac.png)
![image](https://user-images.githubusercontent.com/54589605/222972904-95dcae30-9feb-403c-ab16-0a083785480c.png)
![image](https://user-images.githubusercontent.com/54589605/222972995-c48e1a91-084d-4eca-bcf7-891d1e4a62b4.png)
![image](https://user-images.githubusercontent.com/54589605/222973091-affeee4a-ee8f-4626-96fb-d6a5ee6ad048.png)
![image](https://user-images.githubusercontent.com/54589605/222973317-05c616a7-51a3-4833-bfee-5eec245fba30.png)
![image](https://user-images.githubusercontent.com/54589605/222973363-f5c2363d-fafd-4a9d-b65a-e10899fd6587.png)
![image](https://user-images.githubusercontent.com/54589605/222974113-a65b82b6-ba46-4a18-aa92-69fd862f8c4f.png)
![image](https://user-images.githubusercontent.com/54589605/222974188-064848a5-02e4-4a65-9857-91ffac445b47.png)
![image](https://user-images.githubusercontent.com/54589605/222974202-cc07435d-ad00-4315-9c39-ade36dfd16ac.png)
![image](https://user-images.githubusercontent.com/54589605/222974539-ccb36726-c2bd-4d2d-a4e6-aa7bee12afb8.png)
![image](https://user-images.githubusercontent.com/54589605/222974614-fa1a7579-cf5c-4105-b4b6-bb6f7d1ea37f.png)
![image](https://user-images.githubusercontent.com/54589605/222974770-35fc179a-b9f1-4ef4-99e8-91970adce53e.png)
![image](https://user-images.githubusercontent.com/54589605/222975142-28822bf1-6ec3-47d2-b040-dd7d4964e60d.png)
![image](https://user-images.githubusercontent.com/54589605/222975251-e96dc58c-a962-4d77-9176-9d7e48060976.png)
![image](https://user-images.githubusercontent.com/54589605/222975357-afe967fb-3a87-4e44-a384-1d7daa56b55a.png)

* Statement **a** is correct in the above question but it is not a **De-morgan's** law.

![image](https://user-images.githubusercontent.com/54589605/222976068-609c2ef9-e16e-4312-bf0d-504f48efed46.png)
![image](https://user-images.githubusercontent.com/54589605/222976486-9a8fa126-884d-4d6e-822f-e247e1c6e12a.png)
![image](https://user-images.githubusercontent.com/54589605/222976609-c2e4890b-eddf-4330-9459-62494bdd8263.png)
![image](https://user-images.githubusercontent.com/54589605/222977237-7accc377-b9cb-4ccc-9a1d-5ddd7dfe5955.png)
![image](https://user-images.githubusercontent.com/54589605/222977305-bfae69b6-1bc6-49ff-86e3-4dba64753abe.png)
![image](https://user-images.githubusercontent.com/54589605/222977409-81f5e335-cae1-4cb6-8d13-6007beef67d5.png)
![image](https://user-images.githubusercontent.com/54589605/222977473-efe2b4ce-5486-467d-9449-6617ec2e5f06.png)

* Z= (xy)' + x + y
* It should be like the above one, as X and y are passed through a OR gate and not an AND gate.

![image](https://user-images.githubusercontent.com/54589605/222977611-ee556c7c-3ac4-4c11-9f80-693b029b9137.png)
![image](https://user-images.githubusercontent.com/54589605/222977695-013a394b-081e-4494-b821-879cb779f309.png)
![image](https://user-images.githubusercontent.com/54589605/222977941-60ea4ae8-3c9b-489e-bd27-7c3703e74858.png)
![image](https://user-images.githubusercontent.com/54589605/222978012-cbb10294-f2c4-48c5-9bc5-3647723d72a2.png)
![image](https://user-images.githubusercontent.com/54589605/222978093-5d1eb7ca-8e84-4a26-b116-7722dccbc884.png)
![image](https://user-images.githubusercontent.com/54589605/222978174-6f080119-803c-474f-b934-9b6afb87fbaf.png)
![image](https://user-images.githubusercontent.com/54589605/222978203-a8530fab-ea07-41cb-89d7-db49da7776d5.png)
![image](https://user-images.githubusercontent.com/54589605/222978206-b41c020a-8ab4-4b82-9dee-7daa409f9389.png)

* Multiplexer -> Also called as a **Universal logic circuit**.

![image](https://user-images.githubusercontent.com/54589605/222978300-d661a097-6de2-40c1-b666-ee29a1002c81.png)
![image](https://user-images.githubusercontent.com/54589605/222978388-dd837aa7-2676-447a-9a31-d50717727b90.png)
![image](https://user-images.githubusercontent.com/54589605/222978467-8e721cd7-bb3e-4b6a-94ac-e1f27db19418.png)
![image](https://user-images.githubusercontent.com/54589605/222978575-f1f3924e-a19b-4ead-9303-087efe0fb8d8.png)
![image](https://user-images.githubusercontent.com/54589605/222978722-c7c7295d-6162-421d-8d87-5610e733cb4b.png)
![image](https://user-images.githubusercontent.com/54589605/222978863-dd81d71e-cb90-4c5b-ab8c-3dfe5892e3d1.png)
![image](https://user-images.githubusercontent.com/54589605/222978966-98e73d1c-efd4-4321-860f-81150bbd2f42.png)
![image](https://user-images.githubusercontent.com/54589605/222979010-4e97ba55-fe14-44c5-a9b7-b19075c2f755.png)
![image](https://user-images.githubusercontent.com/54589605/222979071-9f155d74-d89d-4ba0-b4fb-78e9278e07bb.png)

* If the **no. of inverters** are **even** they that circuit is called as **bi-stable** circuit.

![image](https://user-images.githubusercontent.com/54589605/222979082-ec9ec1e8-5ab7-40ae-ba7a-f0075b61aa90.png)

* Buffer is **bi-stable** circuit as well.

![image](https://user-images.githubusercontent.com/54589605/222979182-0b6ec2bf-185e-4885-aece-e019f2496223.png)
![image](https://user-images.githubusercontent.com/54589605/222979277-88e9f150-ed79-4de0-95f4-028ee1601ba6.png)
![image](https://user-images.githubusercontent.com/54589605/222979326-f3afa7b0-62e2-4d43-bed8-59d03f34474f.png)

* This is valid for **XOR and XNOR** as well. 
* There is no **negative signs** here. Negative signs not valid.
* A XOR B -> B XOR A -> C
* B XOR C -> C XOR B -> A
* C XOR A -> A XOR C -> B

![image](https://user-images.githubusercontent.com/54589605/222979494-17fe03f8-7b2d-4a7a-bef9-3efd7aec488b.png)
![image](https://user-images.githubusercontent.com/54589605/222979505-a2575012-c922-4c7c-a62f-e5b873cdf7af.png)
![image](https://user-images.githubusercontent.com/54589605/222979736-8f54fef9-09b3-4073-984d-34f857dfb126.png)
![image](https://user-images.githubusercontent.com/54589605/222979851-a8e39200-ed9e-4462-a7c6-b2df5880965d.png)
![image](https://user-images.githubusercontent.com/54589605/222980029-74db0188-43a8-4f4a-a884-44330633e8dd.png)
![image](https://user-images.githubusercontent.com/54589605/222980036-01db947f-0368-45a1-83da-889be6a9958e.png)
![image](https://user-images.githubusercontent.com/54589605/222980544-79d08710-22b1-41ad-8522-5c4e74bd5c71.png)
![image](https://user-images.githubusercontent.com/54589605/222980570-1b009eb3-554e-41c1-ada5-99a468d4458c.png)

![image](https://user-images.githubusercontent.com/54589605/222980613-c6842732-b36a-41cd-8d78-6b0093777344.png)
![image](https://user-images.githubusercontent.com/54589605/222980642-3eacf901-b491-47df-a076-cccdbb9744c8.png)

## Rest of Boolean Algebra

![Boolean_Algebra_40](https://user-images.githubusercontent.com/54589605/223480794-170c185c-fdf7-4713-95ef-f7683a5099c9.jpeg)
![Boolean_Algebra_41](https://user-images.githubusercontent.com/54589605/223480809-3eb3c337-cd9f-4f84-961e-4042cb73569c.jpeg)
![Boolean_Algebra_42](https://user-images.githubusercontent.com/54589605/223480816-69cdae35-cdc7-4b8f-bf01-51ef2ab92a47.jpeg)
![Boolean_Algebra_43](https://user-images.githubusercontent.com/54589605/223480819-d7d8e559-4250-4d86-9257-e8d34c6ce285.jpeg)
![Boolean_Algebra_44](https://user-images.githubusercontent.com/54589605/223480824-ee491d62-5e89-4711-85c5-9d00fcb3c633.jpeg)


## Logica Gate 

![Logic_Gates_1](https://user-images.githubusercontent.com/54589605/223480905-e184b40f-1066-4e18-aad4-713122ef6ae9.jpeg)
![Logic_Gates_2](https://user-images.githubusercontent.com/54589605/223480912-2c4bba47-889d-4dbb-be8e-8413661e2773.jpeg)
![Logic_Gates_3](https://user-images.githubusercontent.com/54589605/223480918-4612086a-705d-4aea-8343-a0db9c8c881f.jpeg)
![Logic_Gates_4](https://user-images.githubusercontent.com/54589605/223480924-ff4d86d9-2807-459f-94db-7fa27b648393.jpeg)
![Logic_Gates_5](https://user-images.githubusercontent.com/54589605/223480931-5cc4fce0-bc84-436a-8a88-f5030e9cb0a9.jpeg)
![Logic_Gates_6](https://user-images.githubusercontent.com/54589605/223480937-25d50f4f-924d-4728-b60c-dfefca73bdee.jpeg)
![Logic_Gates_7](https://user-images.githubusercontent.com/54589605/223481228-b05ff45d-d07c-43ec-83af-7875aeb23c5e.jpeg)
![Logic_Gates_8](https://user-images.githubusercontent.com/54589605/223481244-38efc010-0bba-4a49-ba30-9bab390581de.jpeg)
![Logic_Gates_9](https://user-images.githubusercontent.com/54589605/223481252-0dc40027-f510-4aed-aca7-b466e4aafb51.jpeg)
![Logic_Gates_10](https://user-images.githubusercontent.com/54589605/223481254-d7fe12cc-f10a-4723-b313-5d40d13ead87.jpeg)
![Logic_Gates_11](https://user-images.githubusercontent.com/54589605/223481261-44efa4e5-2aa4-42e4-a2d2-c442fc79f75e.jpeg)
![Logic_Gates_12](https://user-images.githubusercontent.com/54589605/223481266-8f2d57c8-4d9b-4cfc-bb82-bce5678a9e29.jpeg)
![Logic_Gates_13](https://user-images.githubusercontent.com/54589605/223481274-4f203b74-74b1-418e-b95f-74fa0f30a5d7.jpeg)
![Logic_Gates_14](https://user-images.githubusercontent.com/54589605/223481281-65df00b4-12ff-4a4c-889e-ea0b2039119d.jpeg)
![Logic_Gates_15](https://user-images.githubusercontent.com/54589605/223481289-cfc1023e-da21-46cd-9495-478b62be200e.jpeg)
![Logic_Gates_16](https://user-images.githubusercontent.com/54589605/223481295-fe49abfa-6007-47a9-8379-61d519ec545f.jpeg)
![Logic_Gates_17](https://user-images.githubusercontent.com/54589605/223481788-04218861-8600-4ca6-9cd7-e74f99634126.jpeg)
![Logic_Gates_18](https://user-images.githubusercontent.com/54589605/223481806-0ec7ad11-90ad-4309-b638-7aa365b8e15c.jpeg)
![Logic_Gates_19](https://user-images.githubusercontent.com/54589605/223481815-2e9e7150-2c53-4935-a2d5-e05fedd52408.jpeg)
![Logic_Gates_20](https://user-images.githubusercontent.com/54589605/223481824-7e5ed225-dba6-47cb-b9fa-587b7d4519da.jpeg)
![Logic_Gates_21](https://user-images.githubusercontent.com/54589605/223481942-ae3b0627-fe10-45ef-a8eb-b6991d881474.jpeg)
![Logic_Gates_22](https://user-images.githubusercontent.com/54589605/223481962-f848cf16-afb2-4d6c-ac93-5468edb927d6.jpeg)
![Logic_Gates_23](https://user-images.githubusercontent.com/54589605/223481971-33bc4cbf-a956-446e-b0d7-a77ae8948db8.jpeg)
![Logic_Gates_24](https://user-images.githubusercontent.com/54589605/223481976-9d5baa12-5126-44a1-a933-a374d7cee08e.jpeg)
![Logic_Gates_25](https://user-images.githubusercontent.com/54589605/223482091-4c2eec9d-f387-4140-8448-ea35dd33c775.jpeg)
![Logic_Gates_26](https://user-images.githubusercontent.com/54589605/223482108-40b653ae-0f75-47aa-ac0d-804b50adace2.jpeg)
![Logic_Gates_27](https://user-images.githubusercontent.com/54589605/223482195-fa33456b-0ae7-44be-91f3-c0fdaa814ae7.jpeg)
![Logic_Gates_28](https://user-images.githubusercontent.com/54589605/223482212-5e3cf58d-c759-4d39-9bb8-0c3a24b6d41f.jpeg)
![Logic_Gates_29](https://user-images.githubusercontent.com/54589605/223482219-3b64010a-8605-4d87-82e4-810f5b90cf2b.jpeg)
![Logic_Gates_30](https://user-images.githubusercontent.com/54589605/223482227-1d8b824e-98e5-4cd4-86e3-5fa81c620ab9.jpeg)
![Logic_Gates_31](https://user-images.githubusercontent.com/54589605/223482236-43a955c3-cb91-4a15-84f4-954bcc27b08b.jpeg)

















































### Doubt

![image](https://user-images.githubusercontent.com/54589605/222977163-f93ad768-dbc2-4938-a487-48b16ded3d54.png)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/F266879C2B



