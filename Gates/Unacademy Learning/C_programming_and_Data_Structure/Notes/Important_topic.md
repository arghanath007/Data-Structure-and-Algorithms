# Important Topics

## Recursion

![image](https://user-images.githubusercontent.com/54589605/221870575-4aecef70-4cc2-4675-953a-cd2eaf99bba9.png)
![image](https://user-images.githubusercontent.com/54589605/221870741-90eedffc-6763-4088-b905-216c38996334.png)
![image](https://user-images.githubusercontent.com/54589605/221871137-7945b1d7-973e-442e-9f52-738d6a31bf51.png)
![image](https://user-images.githubusercontent.com/54589605/221871222-d8a898e3-b573-4f1c-a2c3-40f1f1627ae5.png)
![image](https://user-images.githubusercontent.com/54589605/221871497-a5c8b12b-4cef-462b-a3a4-2638683dfbcb.png)
![image](https://user-images.githubusercontent.com/54589605/221872011-b0ad46ec-f550-4353-b091-55c81ce2bf15.png)
![image](https://user-images.githubusercontent.com/54589605/221877925-10b3e522-ef71-4732-bf0c-fc408387d878.png)

* It is 5 + 4 + 3 = 12.
* n % r -> Remainder
* n / r -> Quotient.

![image](https://user-images.githubusercontent.com/54589605/221877951-7dbd92cc-6a8b-442a-b2dd-4040a5331ae7.png)
![image](https://user-images.githubusercontent.com/54589605/221874776-8cae9037-6149-403d-9cb5-96566c7d7781.png)
![23](https://user-images.githubusercontent.com/54589605/221877597-e8b8e243-7921-4a13-8599-e2a89001f7c9.jpeg)

* Here we have (char *s) which means we are pointing to a **char or character** and not the whole **string**. So first we are pointing to **a** from the string of **abc**.
* (s+1) means that we are incrementing the pointer(s) to the next character in the string.
* We all know that **strings** end with **\0** which denotes the **end of the string**. 
* **\0** is comparable/equal to **NULL**.

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/

![image](https://user-images.githubusercontent.com/54589605/221880744-066104c3-5379-402b-a491-cc9d90bae874.png)
![image](https://user-images.githubusercontent.com/54589605/221880679-3327008d-8675-4b26-93f9-1fa49c451d02.png)
![image](https://user-images.githubusercontent.com/54589605/221880886-98b7d806-8b15-4d6a-8ae9-6ee2c9be81cf.png)
![image](https://user-images.githubusercontent.com/54589605/221881115-59cef393-a72e-4a5c-8f46-6662cecec552.png)
![image](https://user-images.githubusercontent.com/54589605/221881165-744c1c7b-d42f-45bc-ad1a-c3a89ba78d6d.png)

* **fun(fun(5))** -> fun(5) + fun(7) = 7 + 17 = *24*(Ans)
* We know fun(5) -> 7, fun(3) = 3, fun(4) = 5.
* This is how we calculated **fun(fun(5))**.

> We are re-using the already calculated values(fun(0), fun(1)...fun(5)) from previous fun(5) but computer is doing it again from scratch. Hence first it is calculating *fun(5)* first as it is inside and then calculates *fun(7)* separately from scratch without re-using the values it got from fun(5). Hence we are adding *fun(5) + fun(7)* to get the count of *fun(fun(5))*.

* **IMPORTANT** look at all of the recursion question int *13_REcursive_Questions PDF* file.

## String

```c
    char ch[]= {'A','B','C','D', 'E'}; // Character Array. Size is 5.

    char str[]="ABCDE";  // String. Size is 6. 'str' will be a constant pointer. We cannot increment or decrement it.

    char *p ="ABCDE"; // This is also a string. It removes the size issue from below. 'p' will be a normal pointer, we can increment and decrement it.

    char ch[5]="ABCDE"; // Error as size should be 6.
```

> String has '6' size compared to character array which is of size '5' because the last position of string is reserved for '\0' which is a *NULL character*. *It represents the end of the string*.

![image](https://user-images.githubusercontent.com/54589605/221945663-94303e11-552e-4324-99b1-300c79500190.png)
![image](https://user-images.githubusercontent.com/54589605/221945690-59a17954-b96e-481e-bde2-c40a125fe028.png)
![image](https://user-images.githubusercontent.com/54589605/221945922-9686415b-10e1-4a76-86d8-c0ef04505496.png)

* To be able to **printout** a character from a **string** we have to use **the * (st + 2)**, to get the value at that given address. Otherwise we will get an error.

![image](https://user-images.githubusercontent.com/54589605/221946476-bd6809a5-ab69-448a-841c-760876b44684.png)

## Constants and Macros

![image](https://user-images.githubusercontent.com/54589605/221956501-b00ad1f9-408e-4d61-be17-4b6ac929e325.png)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3de502e-1257-4080-ad31-864497af6df3)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2118e30a-0def-468a-b09f-746b612b6c72)

* Explanation [**IMPORTANT**].

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c43a5f1-34ea-4eaa-b4db-4f95467db742)

* Link -> https://unacademy.com/goal/gate-cs-it/NVLIA/doubts-and-solutions/doubt/ED8C6094C9
x=10 | 9 | 8 | 7 | 6
y=10 | 8 | 8 | 6

* y = 6 [Answer]



# PYQs

* Data Structure -> https://www.youtube.com/playlist?list=PLG9aCp4uE-s3Rs4AjzG0VcXQCggmOJJ6W
* C-programming PYQS -> https://gateoverflow.in/questions/programming-in-c/programming?sort=gate



# Practice Questions

## C-language

1) https://unacademy.com/class/practice-questions-on-c-programming-basics/GE5TJRMC
2) https://unacademy.com/class/practice-questions-on-c-programming-part-ii/XCVPV78U

* 1 and 2 are the have the same questions from the c-language Course.

3) https://unacademy.com/class/c-programming-pyqs-on-recursion-practice-session/7T8AA1KO
4) https://unacademy.com/class/practice-questions-on-c-programming/NJJRFRAN

## 3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5e5ce43-cdfc-46a2-ba5d-199fdb1f9b04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ed320f8-a47f-453c-a469-ab9f432f30b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d9fd933-dd3a-415b-b944-2fc81271d089)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d05f19a-309d-4faf-8f16-d2ca45bf5da2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e6bf54d-209c-42e0-a968-f4874107b354)

* New Question. [**IMPORTANT**]
* 312213444 -> Option **A** [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f8e5a94-9c5c-4c3b-97a0-6ac7af5743cc)

* New Question. [**IMPORTANT**]
* 53423122233445-> Option **A** [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/099fbe58-1648-4fe3-a226-b24ae68fe7d4)

* Solved in two steps only, Check the options using the printf statements numbers we are printing.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/553732ea-15b1-4705-8b47-d113b973a6ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e48149b-8886-4758-95ce-12167bca9c16)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccd0a98c-26c7-4499-8de8-359669694086)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7fafff4-ee62-4170-9477-fe698488142b)

* New Question [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd4878c1-554e-436c-ba6b-b306c4efb93f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4cedd22-9f7c-446b-bfc2-1a3042f3555c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ec84d48-f12d-462a-958d-a3b01310592e)

* 55 [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eee891e9-fc3a-4b03-9b06-fc1f86eab28e)

* New Question [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a176480-4b72-4fe0-bd76-95944aa86107)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b90e1c53-5a88-4546-853a-bd7c8483f6e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06eab3db-ce16-4d57-a0e4-f88e713b6f78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/858a03f0-bb13-48d9-9f2a-dd18345ae707)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d011fc50-8c80-4e35-ae56-22fc5f335240)

* 51 [Answer] [**IMPORTANT**]

## 4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d127419d-7250-4826-b44a-e748a9e8e4ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f59bdbd4-593e-46ad-8ff3-78aaf6bdedf4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a95721ee-4568-40e6-a12d-d476317a3010)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a80abef8-1a85-4083-9880-cdaf32f75753)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5e61b50-71d4-4f5b-b285-48f501ca0753)

* **C-language** is **case-sensitive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d8ccb64-977d-4514-928a-7762fc488ced)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d58d1c77-edcf-4a4b-937b-92bd4f73684f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bcaada1-e462-4263-9a4a-72a3f08c7134)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98f9c0d6-06c1-45d2-a29a-92045b7498f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87c846bb-961d-407e-b50d-c8db77e542f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11478c0f-7948-485d-ade2-aae61accbfb9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caf16f67-2250-4c90-989e-95599917a672)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d86d218-bf67-41c8-9db9-90d2b4eb4a9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/758fe2fe-6f56-4714-8ddd-3fba8bca6c1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95b412f5-ef2a-4092-ab49-31f4ad7a20e8)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3284cd9e-91c9-47e6-b21b-cc859941b149)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3c5bc52-64fa-426c-8708-aec3183674c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a526e96c-f057-45ea-abaa-eb11debd89a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a01e42ca-ddf9-4fcf-8b8e-66e43e20c85e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a384fc64-b3a7-481a-9125-067dbec247ca)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/838c3dfe-0375-46d2-a7f4-4f3912da1da0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b866047-b50d-4468-a1a6-dda026ebe137)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8684370-aa02-455c-a4e8-6751db2a35c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/985b5678-f175-467e-a07c-ac30beb3cdfe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78c3cf70-c6e6-46c9-a91d-05e74446bc9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f3b5eec-2f52-4261-a29b-aebf4b6f3f83)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0949de4d-f4e8-455b-972c-70bd58b72a1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dab27fce-03bc-4ae9-8828-4b00f0b50ab1)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fceb16fc-0dd2-4a51-8cea-002716a7884f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f8510b1-af12-4c4b-ada7-9cea620c816a)






















