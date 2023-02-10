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

## Practice Questions (1) [10th Feb 2023]











