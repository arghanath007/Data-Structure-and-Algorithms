# Computer Network

* Link -> https://unacademy.com/@ravula/courses?goal=NVLIA&type=plus

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c968154-8f95-464a-a2ee-53f8bfc15aad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1831db45-2247-4633-9d83-13923da2c6b9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a72ecd02-3e38-457a-b694-d47278074e67)

# Part-1

* Link -> https://unacademy.com/course/computer-networks-complete-course/YGKC2V5S

## Introduction to computer networks and ip addressing (1) [27th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f7e6bf4-53b9-4721-a063-e9e90e20822b)

* Whenever a process tries to get some information from some other process, the process which **sends the information** is called as the **server**. The process which **takes the information** is called as the **client**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d8e4674-4253-49d2-ac78-d026ceddd040)

* Process is nothing but a program which is running.

> Client will sent a request when writing **www.google.com**, the request has to go to the process via server.

* Steps:-

1) Identifying the Network
2) Identifying the host within the network
3) Identifying the process within the host.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c973e2f-32e2-43e7-9e46-206858bbdb24)

* IP address is going to have **two** parts

1) Network ID -> It is used to identify the **newtork**.
2) Host ID -> It is used to identify the **host**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4e7b73a-aa8f-4087-8e15-a370876e1bfb)

* Socket No -> This is used to identify the **process**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c17cee17-eb7e-4c59-b5ac-435b3f271d48)

* IP -> Internet Protocol.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff5c9d4a-58ee-4cee-ac75-834a0fa795b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e0d8e11-65ea-4889-a636-773db6b9b3ad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5b599b3-22e6-4937-81a1-e26293dbad28)

* Yes

* What happens when we type **www.google.com**?

> In my network, we have the ISP. It is the responsibility of your ISP to provide us with one more server network called as **DNS(Domain name server)**.

* What is the purpose of DNS?

> If we have to contact google, we need the IP address of google servers, but we don't know the IP address of google servers, we only know the domain name.
> Before contacting google, we have to contact the **DNS** and **DNS** is going to us the IP address.
> We are giving **domain name** to DNS and we are getting the IP address in return.
> Before we actually communicate with the server, we communicate with the **DNS**.

* For the communication between me sending the **domain name** and getting the IP address in return, this takes **some time**. This time is **wasted** and it is actually unnecessary. It is called as **DNS overhead**.   

* ISP -> Internet Service Provider
* DNS -> Domain name server.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9acc8e0a-fdcc-485d-bd63-0bead24525b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fac4f02-1671-4b5c-8096-49a09a5a4f65)

## Binary System

* With 1 bit -> 2 ^ 1 -> 2 Combinations
* With 2 bits -> 2 ^ 2 -> 4 Combinations
* With 3 bits -> 2 ^ 3 -> 8 Combinations
* With 'n' bits -> 2 ^ n -> (2 ^ n) Combinations

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f5f4fb9-ac2f-4758-90e8-eb9e59ee9457)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1e0bffe-2a51-4cd2-a33f-639d22cf8205)

* If there is 'n' bit no and we are choosing 'k' bits. That menas we are dividing entire numbers in (2 ^ K) parts.
* (2 ^ n) / (2 ^ k) -> 2 ^ (n -k)

* We have a **n** bit number. If we choose **K** bits for **Network ID** and **n-k** bits for **Host ID**, then
* How many networks are possible?

> **2 ^ k** networks.

* How many hosts are possible per network?

> **2 ^ (n-k)** hosts.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84cc1a7d-963b-4436-8e45-222d86b320b3)

* If we have **n** bits and we choose **k** bits from **n** bits then **2 ^ k** groups are possible and size of each group is **2 ^ (n - k)**.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1fc9e88-385f-437a-aaa7-a5e66fad4347)

## IP Address

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/965bad27-6ff2-4f16-8ddc-bfead938b115)

* 32 Bits.
* Even though IP address is **32 bit** number, we represented it in decimal numbers.
* 20.1.2.3 -> **Dotted Decimal Representation**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb0b55d3-6afc-4b88-8f3f-f0fd3ef460f1)

* The **8 bits** are called as **Octets**.
* Octa -> 8 bits
* The Octets are divided into **2** componenets -> **Netword ID and Host ID**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5913b851-a160-4aef-84f8-a52be035c60f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a95ca84-3e9d-4a0b-8fb5-d3a70097588a)

* Binary and Decimal Representation, both representation are given in exam
* Network ID(NID) -> It represents the IP address of the network and is used to identify the network.
* Host ID(HID) -> It represents the IP address of the host and is used to identify the host within the network.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09d6a68a-ce27-4992-ab21-c762b47ca0ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4372c77d-587f-48f3-be48-63d9fdd783a7)

* 32 Bits -> 8 bits network ID and 24 bits Host ID -> This is called as **static division**.
* 8 bits -> 2 ^ 8 -> 256 networks.
* 24 bits -> 2 ^ 24 -> 16 Million hosts in one network.

* Disadvantages of **static division**:-

1) Networks are too low
2) Too many hosts per network.  

* So, **static division** doesn't work.
* They have done dynamic division called as **classfull addressing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79e4ca6d-63f1-429c-88b8-5f9dd26e9408)

## Classfull addressing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0c1aff2-0eb9-4de5-b5fb-2114af0a3186)

* We have **2 ^ 32** bits. If we fix **one bit** then we will have **2 ^ 31** bits.
* 2 ^ 31 = 2 ^ 32 / 2 ^ 1

> So, 2 ^ 32 is divided into **two parts**, one is starting with **0** and the other part is starting with **1**.

* The part is starting with **0** is called as the **class A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2184a40-d076-4642-9796-8418ecb8a343)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58c55ac5-0d9e-42ce-9f72-743501085f29)

* All the nos(2 ^ 31) starting with **1** are remaining.

> So, 2 ^ 31 is divided into **two parts**, one is starting with **10** and the other part is starting with **11**.

* The part is starting with **10** is called as the **class B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98459a9d-8449-465f-9741-8d9b9ad7942e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04f46374-c171-4613-9908-05e01cfd4b91)

* All the nos(2 ^ 30) starting with **11** are remaining.

> So, 2 ^ 30 is divided into **two parts**, one is starting with **110** and the other part is starting with **111**.

* The part is starting with **110** is called as the **class C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/832932b8-0fc4-4046-af6a-4131e93f2ad3)

* All the nos(2 ^ 29) starting with **111** are remaining.

> So, 2 ^ 29 is divided into **two parts**, one is starting with **1110** and the other part is starting with **1111**.

* The part starting with **1110** is called as the **class D**.
* The part starting with **1111** is called as the **class E**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25b3aac7-b2eb-4ae4-b073-6748d62e856d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4b0c604-93a9-4fd4-9d85-506e3d4cf5af)





















