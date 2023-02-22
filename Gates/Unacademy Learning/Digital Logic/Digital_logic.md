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


* y= A'B'
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







* After This video, do the **5** daily assignments.
* After that do **DPP 1**.






















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



# DPP questions

* Link -> https://drive.google.com/drive/folders/1dq_D8WXuIe_2drVlRyed_ci9QofI_TaU



