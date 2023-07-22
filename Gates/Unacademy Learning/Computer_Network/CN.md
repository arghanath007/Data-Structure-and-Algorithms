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

* The beauty of the concept is that if we take any IP address and we convert it into **binary number**, adn we look at the **first** few bits. We will be able to say what is the **class of the IP address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b06d39dc-d194-411d-8096-4c94e0d45a80)

* Totally we have -> 2 ^ 32 bits.
* Total no. of IP addresses present in **Class A** -> Fix **1 bit(0)** -> 2 ^ 31.
* Total no. of IP addresses present in **Class B** -> Fix **2 bits(10)** -> 2 ^ 30.
* Total no. of IP addresses present in **Class C** -> Fix **3 bits(110)** -> 2 ^ 29.
* Total no. of IP addresses present in **Class D** -> Fix **4 bits(1110)** -> 2 ^ 28.
* Total no. of IP addresses present in **Class E** -> Fix **4 bits(1111)** -> 2 ^ 28.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75912cf1-6be8-4e00-92bf-4a1fa8bad533)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/145b7aae-8431-40c3-8214-0511e30bb52b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c27d65ab-78d6-4958-a4d9-f721010a048e)

* **Class A**:-
* Min. value of 1st octet -> 00000000 -> 0
* Max value of 1st octet -> 01111111 -> (2 ^ 7) - 1 -> 128 - 1 -> 127
* Range of 1st octet -> [0, 127]

* **Class B**:-
* Min. value of 1st octet -> 10000000 -> 128
* Max value of 1st octet -> 10111111 -> 2 ^ 7 + 2 ^ 6 - 1 -> 128 + 63 -> -> 191
* Range of 1st octet -> [128, 191]

* **Class C**:-
* Min. value of 1st octet -> 11000000 -> 192
* Max value of 1st octet -> 11011111 -> 223
* Range of 1st octet -> [192, 223]

* **Class D**:-
* Min. value of 1st octet -> 11100000 -> 224
* Max value of 1st octet -> 11101111 -> 239
* Range of 1st octet -> [224, 239]

* **Class E**:-
* Min. value of 1st octet -> 11110000 -> 240
* Max value of 1st octet -> 11111111 -> 255
* Range of 1st octet -> [240, 255]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1c32b03-0b5c-4492-9b3a-71777d329825)

* [**IMPORTANT**]

* By looking at the **first octet** we will be able to say what **class** does the IP address belong to.
* Class **A** starts with **0**.
* In the **first octet how many bits are remaining**?
 
> **7 bits**.

* 1 -> 1 -> (2 ^ 1) - 1
* 11 -> 3 -> (2 ^ 2) - 1
* 111 -> 7 -> (2 ^ 3) - 1
* 1111 -> 15 -> (2 ^ 4) - 1
* 11111 -> 31 -> (2 ^ 5) - 1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbe471c2-348d-4d27-b2bb-bbd058d52fdd)

* If the **decimal no** in the first octet is in the range of **0 to 127** then it is in **class A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/336870f6-6c25-4753-a94e-e99ad10d3c6e)

* Class **B** starts with **10** bits and **6 bits** are remaining.
* **10** bits are fixed and the **6 bits** can be from **000000** to **111111**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48eb0ff3-3c57-4d24-91ae-e4f97f6f042c)

* So the range is **10000000** to **10111111** -> 128 to 191  
* **10111111** -> 2 ^ 7 + 2 ^ 6 - 1 -> 128 + 63 -> -> 191

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f29a404c-c34e-4865-9521-08a48fd3a2f6)

## Ip addressing and type of casting (2) [30th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b795879e-23a6-487f-9e7b-ce192945027b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d99b1f0-31b0-4d0a-9cb6-dea6a913a81c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6987096b-062e-4db7-b7df-8fc859116f7f)

* Range of **Class C** -> 192 to 223.
* We have **8 bits**, 3 bits are fixed, so **5 bits** are left.
* 3 bits are fixed -> 110
* 11000000 -> 2^7 + 2 ^6 -> 128 + 64 -> 192
* 11011111 -> 2^7 + 2 ^6 + 2 ^ 4 + 2 ^ 3 + 2 ^ 2 + 2 ^ 1 + 2 ^ 0 -> 128 + 64 + 16 + 8 + 4 + 2 + 1 -> 192 + 31 -> 223.
* 11011111 -> 2^7 + 2 ^6 + (2 ^ 5 - 1) -> 128 + 64 + 31 -> 192 + 31 -> 223.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f89b516-4fa0-4616-98c2-7bd22ca8f463)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d71fc37-249d-4a68-84f6-8e771ab8a2e4)

* Range of **Class D** -> 224 to 239.
* We have **8 bits**, 4 bits are fixed, so **4 bits** are left.
* 4 bits are fixed -> 1110
* 11100000 -> 2^7 + 2 ^6 + 2^5  -> 128 + 64 + 32 -> 224
* 11101111 -> 2^7 + 2 ^6 + 2 ^ 5 + (2 ^ 4 - 1) -> 128 + 64 + 32  15 -> 224 + 15 -> 239.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6137e39c-0706-459b-9450-a5b34e6439ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b680f02c-97a8-42b1-b71e-0b19016fd377)

* Range of **Class E** -> 240 to 255.
* We have **8 bits**, 4 bits are fixed, so **4 bits** are left.
* 4 bits are fixed -> 1111
* 11110000 -> 2^7 + 2 ^6 + 2^5 + 2 ^ 4  -> 128 + 64 + 32 + 16 -> 240
* 11111111 -> (2 ^ 8) -1 -> 256 - 1 -> 255.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78801bef-98b9-4884-92fc-f2b98de1ecd8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1eb93517-24c0-4e69-88e4-2d5486efea5f)

* Range of **Class A** -> 0 to 127.
* Range of **Class B** -> 128 to 191.
* Range of **Class C** -> 192 to 223.
* Range of **Class D** -> 224 to 239.
* Range of **Class E** -> 240 to 255.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76f3f9a2-14a6-4280-9088-a0ae1701b9a9)

* How many total no. of addresses present?

> In class **A**, starting bit is **0** which is **fixed**, so 31 bits are remaining. With **31 bits**, no. of combination possible is **2 ^ 31** bits.

* Class **A** has how many addresses?

> **2 ^ 31** addresses.

> In class **B**, starting bit is **10** which is **fixed**, so 30 bits are remaining. With **30 bits**, no. of combination possible is **2 ^ 30** bits.

* Class **B** has how many addresses?

> **2 ^ 30** addresses.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9e84018-9bc7-405c-9caa-6e93d14480dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a6e8641-2b43-4253-afa5-544208690ce1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af9cbfbb-2451-4122-b0f9-6bff343808c6)

> In class **C**, starting bit is **110** which is **fixed**, so 29 bits are remaining. With **29 bits**, no. of combination possible is **2 ^ 29** bits.

* Class **C** has how many addresses?

> **2 ^ 29** addresses.

> In class **D**, starting bit is **1110** which is **fixed**, so 28 bits are remaining. With **28 bits**, no. of combination possible is **2 ^ 28** bits.

* Class **D** has how many addresses?

> **2 ^ 28** addresses.

> In class **E**, starting bit is **1111** which is **fixed**, so 28 bits are remaining. With **28 bits**, no. of combination possible is **2 ^ 28** bits.

* Class **E** has how many addresses?

> **2 ^ 28** addresses.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2efd7aa-d5da-4d22-b121-3a33becd7f2f)

* Total no. of IP addresses we haveis **2 ^ 32**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa6191cc-fbf5-41db-a3eb-3e028dcaef97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d958b11d-817c-448a-8f01-9098a6f0636e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f6ebf62-8fe5-4e7a-aef9-c3cba1978db3)

* Class **A**.
* How many networks possible in **class A**?

> We have **7 combinations**, **1 bit** is fixed which is **0**. So we have **2 ^ 7 -> 128** networks.

* 128 networks range -> 0 to 127.

> We are not going to use **0 and 127**. So we are not using **two** networks. 

> Remaining networks -> 128 - 2 -> 126.

* Total networks in **Class A** -> 126.

* What about the no. of **Hosts** per network?

> We have **24 bits**, so no. of combination is **2 ^ 24**. We are going to discard **two** combinations which is **all zeroes(24 zeroes) and all ones(24 ones)**. 

* Total Hosts per network -> (2 ^ 24) - 2  -> 16 Million(Approx).
* True Range of **Class A** -> 1 to 126.
* Who are going to use **Class A** networks -> Pentagon, NASA, Google.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/428e8ecd-802c-4218-8926-f555d1ea1e76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3170c646-d907-402f-a7fc-4a9898b6c35d)

* Class **B**.
* How many networks possible in **class B**?

> We have **16 bits**. **2 bits** is fixed which is **10**. We will have **14  combinations**.  So we have **2 ^ 14** networks.

> It is not possible to have **all zeroes or all ones** cases here.

* Total networks in **Class B** -> **2 ^ 14**. [**IMPORTANT**]

* What about the no. of **Hosts** per network?

> We have **16 bits**, so no. of combination is **2 ^ 16**. We are going to discard **two** combinations which is **all zeroes(16 zeroes) and all ones(16 ones)**. 

* Total Hosts per network -> (2 ^ 16) - 2  -> 64K(64000).
* Who are going to use **Class B** networks -> TCS, Infosys

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/646121b3-34b0-43b7-905b-21f25fe7839c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04cc29d6-dc6e-47d8-9ad7-9979dd30b7b9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/206c0174-a10d-44bf-b7e6-2da3d281bd67)

* In **class A**, the total no. of hosts possible is **(2 ^ 24) - 2**.

* If the questions is,
* What are the total no. of IP addresses present in a network? [**IMPORTANT**]

> **2 ^ 24** [Answer]

* There is a **difference**, total no. of IP address present is **2 ^ 24** but we will only be able to configure **(2 ^ 24) - 2** hosts, as **2** of them are going to go **waste**.

* In **class B**, the total no. of hosts possible is **(2 ^ 16) - 2**.
* What are the total no. of IP addresses present in a network?

> **2 ^16** IP addresses. [Answer]

* There is a **difference**, total no. of IP address present is **2 ^ 16** but we will only be able to configure **(2 ^ 16) - 2** hosts, as **2** of them are going to go **waste**.

* Two nos, which are going to waste are **all zeroes and all ones**. Both for **Class A and B**.
* **All zeroes** 
* **All ones**
* Network ID and broadcast address.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4a8a78c-acca-4121-a62e-2db0397e87e4)

* Class **C**.
* How many networks possible in **class C**?

> We have **24 bits**. **3 bits** is fixed which is **110**. We will have **21  combinations**.  So we have **2 ^ 21** networks.

> It is not possible to have **all zeroes or all ones** here.

* Total networks in **Class C** -> 2 ^ 21. [**IMPORTANT**]

* What about the no. of **Hosts** per network?

> We have **8 bits**, so no. of combination is **2 ^ 8**. We are going to discard **two** combinations which is **all zeroes(8 zeroes) and all ones(8 ones)**. 

* Total Hosts per network -> (2 ^ 8) - 2  -> 254.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f353e9d-d75e-4cea-83ae-9f6dbff79c40)

* Class **D and E** are not divided into **networks and hosts**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5066a552-9dd7-4ed8-9852-e5275c672d3a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd728f90-c1a5-4213-ba33-af37daeae33c)

* Range of **classes**.
* For Class **D and E**, there is no **network ID or host ID**. That's why they are **not defined** 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bd30887-b6d3-400f-96a4-4d054d08dd0d)

* Questions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/416d80c2-46ca-4539-abf6-5a029a9414c2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34ed167d-b6b9-41aa-a499-7ccaceaa1195)

## Casting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90c2b1b5-d07e-47b6-bd91-e94e7420bfa1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca6db24b-0f3c-4c2c-b95c-904d062dbe99)

* Unicasting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f1ebb9f-22e1-437c-b46f-16eaf8d7e034)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13e280b8-7ae3-43d2-ad1a-5cc63b56374d)

* No.

## Subnet and type of casting-II (3) [30th June 2023]

## Casting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb375d43-3c83-46ce-bd9e-0e0d059d132e)

* Multicast not in **syllabus**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7408fbf5-b822-4bc0-91ba-9d9f972db594)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f26d2a1-262e-4707-979b-6cee0be0f7f5)

* Unicasting.
* SA -> Source Address -> 11.1.2.3
* DA -> Destination Address -> 20.1.2.3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c6356fd-46c7-4673-824e-bf7f5f4ea78b)

* Yes.

## Broadcasting

> Sending one packet to all of the other hosts in the network is called as **limited broadcasting**.

* Limited Broadcast Address(LBA) -> 255.255.255.255 -> All 1's.
* DA -> Destination Address -> 255.255.255.255

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8a8ccfa-05df-498f-ac2d-2435db283c33)

* 255.255.255.255 -> All 1's -> It is **Limited Broadcast Address(LBA)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27561a78-93e3-4cf0-8583-0f9a68992441)

* It is called as **limited broadcast** because we are limiting it to a specific/particular network.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b2a8bcd-9821-4fdc-893a-5700a420d0c5)

* Destination address has to be **All 1's** then it is called as **limited broadcasting address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29bbe14c-b875-4744-b111-6044b06f9084)

* Limited broadcasting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9595e08-6c30-4793-81a3-e0e34b0a35ee)

> The network is divided into two parts, **network ID part** and **Host ID part**. We put **0's** in the **Host ID part** and a **valid no** in the **network ID part**.

* Then also it is called as **network ID** even though some part of it is **network**.

The IP address is divided into two parts, **network ID part** and **Host ID part** but still we have **one more no**, called as **network ID**, which is nothing but **all zeroes(0)** in the **Host ID part**.

* 20.0.0.0 -> It represents the **network ID** of the **network '20'**. All zeroes in the **host ID part**.

* 128.1.0.0 -> It represents the **network ID** of the **network called '128.1.0.0'**. All zeroes in the **host ID part**.

* **All 1's** represent -> **limited broadcasting address**
* **All 0's in the host ID part** represents -> **Network ID** of a **network**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd4b3d54-e0d2-46ce-94d0-86689290bc14)

## Direct Broadcasting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00850fe7-98a9-4a92-90d6-5cc702ae7475)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f815388-8cfc-4a73-9480-8a7aa948e2b3)

* Direct Broadcasting
* 11111111 -> (2 ^ 8) -1 -> 255. 
* For every network there will be a **different limited broadcast address(LBA)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d390b12-4a7f-4df8-b8bd-2481d4c7fa89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35153797-07da-4365-8f79-ecfeba7a6c76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b49d01cd-c67d-4c61-99ad-81fac09e95a0)

* **limited broadcast address(LBA)**  is **same** for all of the networks, which is all **1's** -> 255.255.255.255
* Coming to **Directed broadcast address(DBA)**, it is going to vary from network to network.
* **Directed Broadcast Address(DBA)** -> All 1's in the **Host ID part**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80473259-4161-499a-9b03-ca1e8bfcc136)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45bc7f48-c4a6-4ae7-85b5-2385295386e8)

* **limited broadcast address(LBA)** 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24387ca9-ba80-4b12-9ccd-53877335a85f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/926736c8-6d80-4944-b686-c9875b6e7a82)

* Limited and Directed broadcasting **difference**.
* In a network if a host wants to send a message to all other hosts, then it is called as **limited broadcast address(LBA)**. For these the **address** is going to be **all 1's** which is **255.255.255.255**.

* If the broadcast is **limited** to a network then it is **limited broadcasting**.

* In a network if there is a host and it wants to send a message to all other hosts in a **different network**, this is called as **Directed broadcasting**.

* If the broadcast is **directed** to a network then it is **directed broadcasting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ead97e27-7cf9-412d-a964-b699eee0008c)

## Multicasting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc88fd33-05d4-4b2a-8194-a2f9e77fd914)

* Not All hosts but **some** hosts.
* **Class D** is dedicated for **multicasting**.
* There is no **network ID and host ID** id class **D**.
* There is no networks in **Class D**.
* 224.0.0.0 to 239.255.255.255 -> All these addresses are reserved for **multi-casting**.
* Total no. of IP addresses in **Class D** -> 2 ^ 28 [4 bits are fixed, 32 - 4 -> 28]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/720a9993-17e0-4604-9c03-a5f7e7dea590)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2acf7971-0754-4889-81b3-d7ed7acab446)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/927bc9b9-15c2-4442-a9a2-e166c6aa6d12)

* Disadvantage of **Class D**:-

* 2 ^ 28 networks present in **Class D** and all are used for **multi-casting** but the problem is in the **entire world**, **2 ^ 28 -> 256 Million**, we don't have **256 Million** groups. So **class D** is mostly **wasted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fec483c-fd8e-40ba-91c4-83836487e36b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52c1b4ac-9113-4fde-be7e-85e5ca7a589f)

* All castings in a **table** format.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3323cd14-4b4d-4e01-8e86-3d5a72919aaa)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c13fc92f-a987-496b-a677-a76c726afc1a)

* Sir why limited address is 255.255.255.255?

> In **limited broadcast address** it is **all 1's** which is 255.255.255.255, and there is **no reason** behind it. Why they have chosen, we don't know. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32602a31-f033-4df1-a4ee-4fd72b0d97ec)

* If IP address is **1.2.3.4**, what is the **network ID** of the network in which the IP address is present?

> It is **1.0.0.0**, it is because, **1.2.3.4** is a **Class A** network and network ID is **one** and Host ID is **2.3.4**. So, in the **host ID**, we are putting **zeroes**.

* If IP address is **1.2.3.4**, what is the **limited broadcast address** of the network, **1.0.0.0**?

> **255.255.255.255**.

* Directed broadcast address?

> We have to keep the **network ID** part **same** and in the **host ID** part we are going to put **all 1's*.

* 1.255.255.255

* IP address, **1.2.3.4** belongs to **class A**. **First no** denotes the **network ID** and **remaining nos**, denote the **host ID**.

> In order to get the **network ID** of the address, we have to put **all zeroes** in the **host ID** part.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22f7f4c9-8b3b-4611-893a-386ec1637147)

* As **10.12.20.60** belongs to **class A**, so the **first part** belongs to **network ID** and the **second part** belongs to **Host ID**.

* For any **network**, **limited broadcast address** is the **same** only, all **1's**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8388a06-6d2b-42fb-a4f6-ac44eb8689d8)

* As **130.1.2.3** belongs to **class B**, so the **first two bytes** belong to **network ID** part and rest belong to **host ID** part.

* Network ID -> 130.1.0.0
* Host ID -> 2.3 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90ba3d41-91a0-43c1-af7d-8124a26ff7a0)

* As **200.1.10.100** belongs to **class C**, so the **first three bytes** belong to **network ID** part and rest belong to **host ID** part.

* Network ID -> 200.1.10.0
* Host ID -> 100

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72bb912b-78c0-4f49-bbc3-e9e96f482469)

* As **250.0.1.2** belongs to **class E**, so the **whole part** of the address is **reserved**.

* **Class E** is **reserved**, it is not used.
* It is **reserved** for **military applications**.

* **Network ID, Limited broadcast address and directed broadcast address** is not applicable for **Class E**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57fae935-de5a-4dee-a0cd-dd89deeb3a3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbc7cac5-5b87-43b2-9c36-eaca17642605)

* **300.1.2.3** is **invalid** doesn't belong to any **class**. Max. no. we can have in **8 bits** is **255**. That's why **300** is not possible.
* Nothing is **valid** for it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/690f4320-6568-4487-827a-7474117ca697)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2104976f-6966-4c30-85da-4debb46bc95a)

* Table is **reversed**.
* Limited Broadcast and directed broadcast address are **reversed**. The columns are interchanged. Check the previous table for correct values.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84a05dc6-d928-481e-86e5-65ca8c3f6979)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f40def62-ae1f-4418-a9a3-f1789aad1899)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7258342b-db9d-44dd-9b65-7d374052c8d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2db6529-1cb1-4198-8f5a-2a0d8b4ed803)

* In IP address there is **two** parts, **network ID part and host ID part**.

* If we have **valid no** in the **network ID part** and all **0's** in the **host ID part**  then it is called as the **network ID** of a **network**.  

> For a **network** we are going to have a **network ID**.
> The **network ID part** and the **network ID of a network** are **different** things.

* If we have **valid no** in the **network ID part** and all **1's** in the **host ID part**  then it is called as the **Direct broadcast address(DBA)** of that particular **network**.  

* If we have all **1's** in the **network ID part** and all **1's** in the **host ID part**  then it is called as the **limited broadcast address(LBA)** of that particular **network**. 

* If we have **valid no** in the **network ID part** and **valid no** in the **host ID part**  then it is called as the **valid IP address** of a **host**.

## Subnetting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0adaf639-e606-41b3-950d-a2a40d76626d)

* If we have a **Class A** network which has **16 Million** hosts.

1) For a Network administrator, it is very difficult to manage **16 million** hosts.

* Management is very difficult.

2) Security.

* For these **two** reasons, we want to **divide** the network, into **many different networks**.

* Dividing a network into **many different networks** is called as **sub-netting**.

* Advantages of **sub-netting**:-

1) Management is easy
2) More security.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd2389b4-d91f-45e9-aabe-df1cb5c05a0a)

* Disadvantages of **sub-netting**:-

1) Earlier there was **three** steps to reach the **process**. Now, with **sub-netting**, we require **four** steps which are:-

A) Identify the Network
B) Identify the Subnet
C) Identify the Host
D) Identify the process

* Still it is not a very big **disadvantage**.
* The benefits outweighs the **disadvantages**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3927073e-25b7-4f04-aea3-360b19f54306)

* That's why we go for sub-netting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0077b655-712c-4c91-bf37-8caa3f2a4cbb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7dbbc5f9-f04b-4668-97b4-cf9459f2b4d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e16bec93-c2a5-441d-add5-fb7d79c40506)

> Total no. of IP addresses in **class A** is **2 ^ 31**. Class A is divided into **networks**, and in each network in **class A*, the no. of IP addresses are **2 ^ 24**.

> Class A starts with **0**, so remaining bits is **31 bits**. The total no. of IP address present in **class A** is **2 ^ 31**. It is divided into **two** parts, **8 bits** of **network ID** and **24 bits** of **host ID**. Out of the **8 bits**, **7 bits** are available as **0** is fixed in **class A**.  

> We are dividing the entire space of **2 ^ 31** IP addresses into **2 ^ 7** networks and the size of each network is **2 ^ 24**.

> Even if we take **2 ^ 31**, which is the **total no. of IP addresses** and we divide by **2 ^ 7** networks.

* **Size of each network** will be -> (2 ^ 31)/ (2 ^ 7) -> 2 ^ 24.  

* How many networks are there?

> **2 ^ 7**.

* So, **class A** has **2 ^ 7** networks and size of each network is **2 ^ 24**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1de5dc0-a27c-443a-a2fe-abaf8fd62737)

* **Class B** has totally **2 ^ 30** addresses. These **2 ^ 30** is divided into many networks, and the size of **each network** is **2 ^ 16**.
* Total no. of networks present in **class B** is **2 ^ 14**.
* 2 ^ 30 -> (2 * 16) * (2 * 14)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6df4e652-0171-4234-995b-6136a7577853)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1087a71-191d-4816-966a-7915c438a22d)

* **Class C** has totally **2 ^ 29** addresses. These **2 ^ 29** is divided into many networks, and the size of **each network** is **2 ^ 8**.
* Total no. of networks present in **class C** is **2 ^ 21**.
* 2 ^ 29 -> (2 * 8) * (2 * 21)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03f6024a-74a8-4767-a858-e08af766ea8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67cd9438-382f-4d87-90da-9273e0470007)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e180832d-e875-4b5e-a63f-2a301b3680ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21d6518f-c199-47e4-b3e1-b1f404bcbe9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fca4131-192d-4e3b-a306-442d0e0765f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3af56747-9bd3-46e2-b829-83016c5ca577)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3d5f431-8f1b-4b9f-a07c-b51765f89e35)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ba4ac49-ea5d-4210-94fb-3ca33217cb29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39a92ee3-e527-49db-9048-a28b7410b381)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ea9dea5-3bf6-4aa5-a88a-d7025ef211dd)

* Correct

## Subnetting problem solving (4) [2nd July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9957d13a-6020-4218-87ad-64510327187c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1022a82d-108d-4ec0-8d3f-8990a645e2a9)

* How many IP addresses are present in a network of type Class B?

> **2 ^ 16** is the answer and not **2 ^ 30**.

* How many IP addresses are possible in class C?

> **2 ^ 29**.

* How many IP addresses are possible in one network of class C?

> **2 ^ 8**.

* **Class D** is used for **multi-casting**.
* **Class E** is **reserved** for some organization(military).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6591dec3-77ad-4894-bb6f-4b67b2584f75)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2311811b-19a3-4338-9da5-ebfb81ab712f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d20de73c-bb06-4637-9327-6d910a98e39c)

* 200.1.2.0 -> Class C.
* We are writing the host ID in **binary**.
* We are choosing the first bit from host ID.
* In **subnetting** we always borrow bits from **host ID part**.
* Whenever we get a network we are not supposed to play with the **network ID**. We can play with **host ID** as much as we can.

* For the **one bit** we have taken from host ID, it can be either **1 or 0**.
* We are diving the address into **0 and 1** part.
* 200.1.2.0 and 200.1.2.1
* So in the **200.1.2.0** we got the range from **200.1.2.0 to 200.1.2.127**, which is from **0 to 127**.
* So in the **200.1.2.1**, we got the range from **200.1.2.128 to 200.1.2.255** which is from **128 to 255**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c28412c2-759c-4949-9a87-c24790207449)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cf69c0b-1b4a-402e-b2e5-e0c7f604a60a)

* We had IP addresses from **0 to 255** and we are dividing it into **two** ranges, which are from **0 to 127** and the other is from **128 to 255**.
* First IP address is equal to network ID(NID).
* Last IP address is equal to Directed broadcast address(DBA)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b018d33-5c05-431e-8c5b-22c8c48025ab)

* Before **subnetting**, in the actual network, what is the network ID?

> NID -> **200.1.2.0**
> DBA -> **200.1.2.255**.

* After **subnetting**, in the actual network, what is the network ID?

> NID of **200.1.2.0** which is **0 to 127** -> **200.1.2.0**
> DBA of **200.1.2.0** which is **0 to 127**  -> **200.1.2.127**.

> NID of **200.1.2.128** which is **128 to 255** -> **200.1.2.128**
> DBA of **200.1.2.128** which is **128 to 255** -> **200.1.2.255**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f1f5440-285c-4fc9-aa4d-74a99a804a79)

* Disadvantages:-

1) Now, **4** IP addresses are lost(NID, DBA), instead of **2**. In **subnetting**, more IP addresses are wasted.

> In the **original network before subnetting**, which was from **0 to 255**, only **2** IP addresses are wasted which are **NID, DBA**. So the IP addresses we are left with are **256 - 2 = 254**.

> In the **original network after subnetting**, which was from **0 to 255** and it was divided into **two** parts. So, **4** IP addresses are wasted which are **2 of NID and 2 of DBA**. So the IP addresses we are left with are **256 - 4 = 252**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bd5661d-fbbd-4499-a8a4-73beddce4736)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db2760f1-994f-4733-9473-d5577f9e3db8)

* If we **divide** the network into **4 parts**, then for **every network part**, we have to provide **one NID and one DBA**. So for **4 network parts**, we will have **2 * 4 -> 8** IP address being wasted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ab264df-edae-4062-9318-63575e77a255)

* If we **divide** the network into **8 parts**, then for **every network part**, we have to provide **one NID and one DBA**. So for **8 network parts**, we will have **2 * 8 -> 16** IP address being wasted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8277104f-21d1-4cf8-90c5-ab8faa8459bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb2e8dc2-672b-4840-9cad-e144f08184c8)

* How it is possible or how the things work?

> We can see that, **DBA** of the whole network is **200.1.2.255** and for one of the **subnets** within the **same network** has **DBA** of **200.1.2.255**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8dc6410-c048-4c4c-a4da-084850df5686)

* Depens on perspective.
* The roouters are connected through **links or interfaces**.
* From the outside the packet is coming inside and we are standing outsie of the network.
* The router can see that the packet came from **outside** and it has the address of **200.1.2.255**, as it has come from outside(outsiders don't know we have subnetting inside), so the packet will be sent to the **DBA of the whole network** which means **all hosts** within the network will receive the packet.
* The router can see that the packet came from **inside** and it has the address of **200.1.2.255**, as it has come from **inside**(insiders know we have subnetting inside), so the packet will be sent to the **DBA of the other subnet** which means **all hosts** within that **subnet** will receive the packet. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98bbea4c-2768-43f8-a4a6-abb10b19d098)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ea62b92-4d6f-4a5b-96f7-dabf041237c9)

* **Security** is being provided by the **code** inside the router.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe8a1984-4b85-4d41-afc6-7afd7c97cda9)

* Subnetting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/274c67a4-c4a0-4d8d-ba76-961c4d055543)

* Limited Broadcast Address -> 255.255.255.255

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a27b76f8-a99f-495d-9c5a-9af355a329ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd53c943-505e-4d3d-a0ca-1b2eca16bfbc)

* For any network, **LBA** is the **same** which is **255.255.255.255**.

* We are taking **2 bits** and with **2bits** we can have **4 combination**.
* As we have **4 combination**, so we are dividing the network into **4 parts**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2628150c-e197-4793-a00a-ad939fb0aaea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/680ba2d5-8615-4aec-9b93-b8dcdf22d4bf)

* For **00** combination we got **200.1.2.0 to 200.1.2.63** which is from **0 to 63**.
* For **01** combination we got **200.1.2.64 to 200.1.2.127** which is from **64 to 127**.
* For **10** combination we got **200.1.2.128 to 200.1.2.191** which is from **128 to 191**.
* For **11** combination we got **200.1.2.192 to 200.1.2.255** which is from **192 to 255**.

* Never ever touch the **network ID** part.
* If we want to make any **subnetting**, we have to play with **host ID** part.
* **Subnetting** is the process of borrowing bits from host ID part.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7fa0e1d-e931-47c0-b562-60875b630ebb)

* If we have nos from **0 to 255**.
* How many total nos are there?

> **256** total nos are there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09e05746-3645-410c-a458-d8f90e9adab8)

* We have **divided** the **256 nos** into **4 parts**. First **64**, then **next 64**, then **next 64** and so on.
* We have a **class C** network and we are dividing the network into **8 parts**.
* The nos are from **0 to 255** which is **256** and we are dividing by **8** as we are making **8 parts**. Som, **256/8 -> 32**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5e97c39-010b-4d5a-b655-7ffd66e965f6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71165915-7cae-4c31-ba7a-216d0435ea27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/593d30ba-a7fd-4945-ae1b-55be0e9c5b6b)

* We keep adding **31** everytime.
* 0 to 31 -> 32 to (31 + 32) = 32 to 63 -> 64 to (64 + 31) = 64 to 95 ....... so no.
* 260.1.2 -> Network ID
* 3 bits -> Subnet ID
* 2 ^ 3 -> 8
* 2 ^ 5 -> 32 -> Host ID.
* In the range, **0 to 31**, **0** is the **network ID** and **31** is the **DBA**.
* This is same for all of then **ranges**, first is the **network ID** and the second is the **DBA**.

## Subnet subnet mask and routing(5) [2nd July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e5b4584-c318-46a4-aa19-8a6379a3d866)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30ecfbcd-87e2-4133-a5b1-baeb683ce39b)

* **0, 64, 128, 192** are the **network ID**.
* **63, 127, 191, 255** are **DBA**.
* This is same for all of then **ranges**, first is the **network ID** and the second is the **DBA**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a06a8c0-5020-4f4b-97dc-7988fdb76df5)

* The external router is sending a packet with address of *200.1.2.20**. As **20** falls in the range of **0 to 63** so the packet is going to **a** interface.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26f05d69-595f-437d-ad98-4f202b8a4d41)

## Subnet Mask(SM)

* It is a **32 bit** number.
* It is going to contain **0's and 1's**.
* The **no. of 1's** is nothing but **network ID part plus(+) subnet ID part**.
* The **no. of 0's** is nothing but **Host ID part**.

* IP address -> 200.1.2.0
* It is from **class C**.
* Bits there for network ID part -> 24 bits.
* In order to divide the network into **4 subnets**, we require **2 bits -> 2 ^ 2= 4** for Subnet ID part.
* Subnet ID part -> 2 bits.
* Network ID part and Subnet ID part put together we have **24 + 2 -> 26 bits**.
* In a **subnet mark**, **no. of 1's** is **network ID part plus(+) subnet ID part**.
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ab0c8db-258d-43de-aeaa-469fd76a9e12)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/543078c4-2da6-43bd-9587-ae0ab6c69227)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2059c14d-2f65-4192-b68e-69a55601e314)

* This is the **subnet mark** for the above **subnetting**.
* Subnet mark of the above **subnetting** is **255.255.255.192**.

* We have an IP address, **200.1.2.130**, we want to find out what is the **network ID** of the network to which the IP address belongs?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d860492-819b-4934-a4f8-5d0b644d0af9)

> Convert the IP address into **binary format** and then do **bitwise AND**. After doing **bitwise AND**, convert into **decimal** numbers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f228ed1-20c0-49b3-bd67-72a82300ffba)

* Bitwise AND.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28ca0558-f8bb-43f6-b965-590a0d177958)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/338c4428-252f-444f-a0de-3303f7f3dcb5)

* If we have to send a packet to address **100.1.2.130**, we found out that it belongs to **interface 'c'** and in the range of **128 to 191**. 

* If we have any number and we do **bitwise ADD** with **255**, then we will get the **same number** back.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56381393-aa20-4580-9d2c-c7e4648f17fd)

* The **subnet mask** we are using is **255.255.255.192**.
* We have an IP address, **200.1.2.20**, we want to find out what is the **network ID** of the network to which the IP address belongs?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ac922b1-0a1b-420b-ac46-6f5eae2d47ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28d1d249-97cb-446a-8e9a-6894bbaaee0d)

* It means that the IP address **200.1.2.20**, belongs to the **200.1.2.0** network.
* We have an IP address, **200.1.2.68**, we want to find out what is the **network ID** of the network to which the IP address belongs?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f5aa958-02f3-465e-ab12-40f5ba888235)

* The IP address,**200.1.2.68** belongs to the **200.1.2.64** network.
* In the **subnet mask**, what is the no. of 0's present?

> **6** 0's.

* With **6 0's**, **2 ^ 6 -> 64** IP addresses are possible.
* In each network, **64** IP addresses are present.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b0aeae7-e20b-4a36-8710-f6c71c8baffb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/482b9e21-38f3-46d1-a6a7-cbf21e1806fb)

* Why subnet mask is used?

1)


* Whenever size of all the **networks** is the **same**, then we have **same subnet mask**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64747635-1d14-4f95-b1bd-da155384fe10)

* This concept is called as **FLSM**, which is **Fixed Length Subnet masking**.
* If the length of the subnet mask is the **same**, the **no. of 1's** in the subnet mask is **same**, we are going to call it as **Fixed Length Subnet masking**.
* Every **subnet** is also a **network** by itself.
* NID -> Network ID
* SM -> Subnet Mask
* Interface ->

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cd69c0f-5fcf-45fd-9ea5-a8de72d62c8a)

* Whenever the router(R1) get a packet like **below** then, the router is going to take the IP address 'X' and for every row it is going to take the subnet mask and it is going to do **bitwise ADD** between the **subnet mask(SM)** and the IP address 'X'. From the **bitwise ADD**, we are going to get the **network ID**.

* If the **network ID** matches with the **network ID** in the **table**, then the **router** is going to send the **packet** into that **interface**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99146fc9-83bc-4729-977b-7c1d7ca0b917)

* Packet example, sent to router.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d44915c-1a75-4a15-91dc-2ed9039cabfc)

* D -> DATA
* SA -> Source Address
* DA -> Destination Address.

* If we get a packet with destination IP address as **200.1.2.200**.

* **STEPS**:-

1) It is going to do **bitwise ADD** between the **subnet mask** and the IP address which is **200.1.2.200**.
2) We are going to get the **network ID**.
3) Now comparing the **network ID** we got from the **bitwise ADD** with the **network ID** on the table and which ever **network ID** matches, the **packet** will be send to that **inferface**.

* For **200.1.2.200**, we got **64** as the  **network ID** and so the packet was sent to **inferface 'b'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4d04a3e-abf5-4a8c-899c-0ee91837a57b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1ebd46c-2220-44f3-a5a8-c34e81f903be)

* VLSM -> Variable Length subnet mask -> Will see later.
* If we get a **packet** which doesn't match with any of the **networkd ID** then what should we do?

> There is something called as **default entry**.

* **Interface 'e'** says that if the packet is not for any of the networks then send the packet to the **outside(external router)** which is the **internet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02a9c78b-8df3-400a-98d6-7ba3d07ba637)

* What is the order in which router should follow in order to check for the matching?

> Generally, the router will choose the **first entry** then **second** then **third** and so on. Like this it will **check**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/181dec1b-22a4-48b9-8430-e5de85723003)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f51f3dd9-fee4-4cae-83d1-e1cc65b45bdd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/310e7512-a486-42c6-b95f-b046f221aaec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35f5251e-6d86-40df-a4aa-e6e163a5615b)

* Calculating the **subnet mask**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2179e27b-5c3c-4494-b3e7-19b3fa2b9237)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7737c1-ebb5-4abb-a624-78a7afc57948)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34f00bd0-edfa-4bac-951a-cc205c6faf2e)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bf5ff3e-d030-4dea-b38c-950989c47bd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dad00e7d-3a82-466c-976b-b2b493ec405a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0567db1-27d3-4664-ab19-ea0d2bff6db0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63f6fcf9-6df7-4717-bba3-6f3a56d4a0f8)

* According to the **subnet** mask, the machine **m** belongs to **100.10.5.0** network.
* According to the **subnet** mask, the machine **n** belongs to **100.10.5.4** network.
* According to the **subnet** mask, the machine **p** belongs to **100.10.5.4** network.

* We can see that machine **n and p** belong to the **same network/subnet**.
* Option **D** is **correct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4967d3c6-0b2d-4ed6-a7ae-c1fd9d3f0ff6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30fb072a-aaeb-462a-a799-2ab80fd21e94)

* Things provided by the **ISP**.
* Sender -> Machine (N)
* Receiver -> Machine(X)
* IP address of Machine (N) -> IPn.
* If the receiver **Machine(X)** is within the same network, then packet is directly sent to it.
* If the receiver **Machine(X)** is on a **different** network, then packet is sent to the **router** and the router then sends the packet to **Machine(X)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54651ae0-3472-447c-8a80-a948d17fb939)

* In case **NIDn and NIDx** are **equal** what can we say?

> It means that **both** the **hosts** are present in the **same network**, according to **machine(N)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46cfac2a-34b0-4813-a962-3fafd2b3be75)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9b405d0-c5e8-42ac-830f-a822f0f3a4cb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6d2afd4-a311-47f2-8e9a-78b422fa2dae)

* In case **NIDn and NIDx** are not **equal** what can we say?

> Then the **machine(N)** is going to send the packet to the **router**.

## Lan technologies (6) [3rd July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4db5573a-8b11-4abd-a09f-bd0a101ed742)

* Sometimes subnets are called as networks.
* Sometimes subnet masks(sm) are called as network masks.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa79ce4c-6f95-48b9-b6b6-9b19c1c4bad1)

* Subnet masking is very very helpful in case of a **router**.
* We know a **router** requires a **subnet mask**.
* Why does a **host** require a subnet mask?

> IP address of **sender 'A'** is IPa and that of **receiver** is IPb. **A** will take it's IP address(IPa) and it's own subnet mask(SMa) and then it is going to compute what is the **network ID** in which **A** is present according to **A**.

> If **A** has to send packet to **B**. It is going to take the IP address of **B**(IPb) and take the subnet mask of **A**(SMa). Machine **A** will not know the subnet mask of machine **B**. It is going to find out the **network ID** of **B** according to  host **A**.

* If **NIDaa = NIDba** then both the machines **A and B** are in the **same network** according to machine **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2242bf0-e399-4e62-8dfc-8f7a9939bfc0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be04b94c-ab20-4a06-8550-7acb1a600e6c)

> It means machine **B** is present within the **same network** as **A**, so the message/packet can be sent **directly**.

* If **NIDaa != NIDba** then both the machines **A and B** are present in **different networks** according to machine **A**. **A** is in one network and **B** is in some other network. In that case, message/packet is sent to the **default gateway**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1049ef20-bccf-4ad1-85b8-7759096ab6bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b056c57-422b-4e86-bdef-b94f2f82fe79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62564417-29ec-4d1d-9ee3-b758a2f8f368)

> Every host is provided with a subnet mask, the host doesn't know anything about the network. The host will only believe what it's subnet mask says.

> When the subnet mask was **255.255.255.128**, the network thought it was divided into **two** parts.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/146a9772-d7b9-44c6-b674-c8212d82eab3)

> When the subnet mask was changed to **255.255.255.192**, the network thought it was divided into **four** parts.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b210e050-b644-4f04-8f13-9ed754bbbbbc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74973fbd-5da6-4a01-bead-a113719d22d9)

* When the destination IP address is **200.1.2.65** and the subnet mask is **255.255.255.128** which means the sender IP address, **200.1.2.35** and the destination IP address which is **200.1.2.64** within the **same network** as the network is divided into **two** parts.

* When the destination IP address is **200.1.2.65** and the subnet mask is **255.255.255.192** which means the sender IP address, **200.1.2.35** and the destination IP address which is **200.1.2.64**. They are not within the **smae network**, so the **packet** from the sender IP address is send to the **router** and from there it goes to the **receiver's IP address**.

* So, network mask or subnet mask is just an **illusion**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1f4617a-a475-4d82-97b7-75fde0bbba19)

* subnet mask.
* Why they have used a subnet mask of **all 1's**?

>

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adee44ee-9629-4996-
b75c-069f980307a2)

* Close

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/974c8da7-a792-41bc-be9f-2b1f55433fb6)

* Close

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c43120dd-3b30-490b-b8be-5043af6aa41f)

* Correct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8eceea9-e230-4b83-a954-6e7c7b76c3c3)

* Correct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d32e7887-a3dd-4242-a76d-0aaf5f7cf184)

* Correct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6068dd13-a044-438b-a0d4-54c07059af6a)

* IPa != IPb, they will never **match**.
* Everytime host **A** thinks that every other IP address is in a different network and therefore the host **A** is forced to send the message/packet to the **router**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0d4b753-80d9-49df-9ce5-8002c3026448)

* [**IMPORTANT**]
* We can actually **force** a **host** to send a message/packet to the **router**, even though the **destination IP address** is present within the **same network**, so that at the **router**, we can do some **security** checks and forward it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1b65dc7-8445-498f-933e-39be53cd51e0)

* We want the messages/packets to first come to the **router** and then the **router** will send it back. What is the **network mask** should we give to every host for these to happen?

> **Network mask** should be **255.255.255.255**, all 1's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b49de33-8754-4176-9241-4098b0b35e62)

* From **1 to 126**, we don't want them to send messages directly to **128 to 254** range. THe network is not actually divided into subnets. We have to give an illusion that they cannot send it.
* What is the **subnet mask** should I use?

> **255.255.255.128**.

* The host will think that the network is divided into **two parts**, one is from **0 to 127** and another is from **128 to 255**.

> Even though they are not separated bu the **subnet mark** will give the **illusion** that the network is divided into **two** parts.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ce20a5e-5a85-4c43-8944-5516dfc14f89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e53f3103-3744-44f1-8f24-ac98302ad3a8)

* **Network 'A'** is divided into **4 parts**.
* **Network 'B'** is divided into **2 parts**.

* According to **A**, both the hosts are present in **different networks**.
* According to **B**, both the hosts are present in the **same network**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cc73d8e-9cfd-47bd-9b95-7a5dcc0bf141)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e6ff341-0700-400a-a7b5-9062c082f120)

* If **A** has to send a packet to **B**, what will it do?

> **A** will send the packet to the **router** and the router will forward the message to **B**. 

* If **B** has to send a packet to **A**, what will it do?

> As **B** things, **A and B** are in the **same network**, so **B** will **directly** send the packet to **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/473e20cc-fb3f-437f-a38f-cb79bc81342f)

* **A** does **bitwise AND** between **IPa and SMa** and we get **200.1.2.0** which is **Network ID of A, according to A**.
* **A** does **bitwise AND** between **IPb and SMa** and we get **200.1.2.64** which is **Network ID of B, according to A**.
* As we are in **A**, we have information about **A** only, we don't know the **subnet mask of 'B'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffe40442-5e03-450e-a857-ee1dcd7b9f05)

* According to **A**, both the hosts(A and B) are in **different networks**. 

* **B** does **bitwise AND** between **IPb and SMb** and we get **200.1.2.0** which is **Network ID of B, according to B**.
* **B** does **bitwise AND** between **IPa and SMb** and we get **200.1.2.0** which is **Network ID of A, according to B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3916c7b9-57e0-46c5-9826-9a8574cd40fd)

* According to **B**, both the hosts(A and B) are in the **same networks**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48d7bdde-ee4f-4a0d-bf7f-a7decad687a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15d0d53e-0c61-4650-8724-a5d86f098994)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5774c719-eafd-4d79-9438-9015ef75036a)

* We have **7 zeroes(0)**.
* We know, **no. of zeroes** is the **host ID** part.
* THe toatl no. of IP addresses in a network is -> 2 ^ 7.
* The no. of hosts -> (2 ^ 7) - 2
* How many subnets are there?

> 2 ^ 1 = 2. ['1' is the subnet ID, we calculated below]

* No. of 1's -> 8 + 8 + 8 + 1 -> 25.
* 25 = NID + SID
* It is given that it is a **class C** network.
* So, the **network ID** part of **class C** is **24**.
* 25 = 24 + SID -> SID = 1 bit
* If the **subnet mask** belongs to a network of **class C**, then the **no. of subnets** is **20**. 

* If the **network** is **class B**.
* We know that in **class B**, **NID** is **16**
* 25 = NID + SID
* 25 = 16 + SID
* SID = 9.

* How many subnets are there?

> 2 ^ 9 = 512.

* If the **network** is a **class A**.
* The **network ID** is **8**
* 25 = NID + SID -> 25 = 8 + SID -> SID = 17
* How many subnets are there?

> 2 ^ 17

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a9004ff-5e37-4487-b11c-9874fe42673e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97eebdad-f55f-48fb-9090-caf6f9cddbed)

## Subnet masking ip address routing(7) [3rd July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c96740dc-ff36-446f-bad7-8c73ae4f3ef5)

* Subnet Mask -> 255.0.0.0
* The no. of 0's is -> 8 * 3 -> 24
* No. of hosts possible is -> (2 ^ 24) - 2 
* If the subnet mask is applied to a network of **class A** then we are literally not doing any subnetting because we didn't borrow any bits from the **host ID part**.
* Subnets in Class A = 1 -> It means that no subnetting is done on the network.
* **Subnet Mask -> 255.0.0.0** cannot be a subnet mask of class **B and C** because we need **16 1's for class B** and **24 1's for class C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/247337f2-9875-4872-b11a-61401171b9f3)

* For **224**, the binary form is **11100000**.
* No. of hosts possible -> No. of 0's -> (2 ^ 5) - 2.
* Even though IP addresses possible are -> 2 ^ 5.
* If the subnet mask is applied to a **class A** network then,
* No, of subnets -> 8 + 8 + 3 -> 19 -> 2 ^ 19
* The first byte or 8 bits are taken in **class A**

* If the subnet mask is applied to a **class B** network then,
* No, of subnets -> 8 + 3 -> 11 -> 2 ^ 11
* The first two bytes or 16 bits are taken in **class B**

* If the subnet mask is applied to a **class C** network then,
* No, of subnets -> 3 -> 3 -> 2 ^ 3
* The first three bytes or 24 bits are taken in **class C**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc8663f5-2ea5-4721-b876-21c7e9a3e209)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdc09c5e-1996-4b60-aaa5-736c98729b03)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71d64b77-bbb8-455e-87c0-f8cb44b190d6)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdee2fd8-c6f7-4034-968e-27534d5d01ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a205c461-8b9d-4e08-96f5-9de084a95c19)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea6cb5fc-ceff-4e70-81e8-55820a8ea03e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff899cc7-fedf-4271-9c2a-bf3591d7a03a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30f46999-049f-4a0f-8022-6ded263b5886)

* Question
* As subnet mask of **A** is **128**, so the network is divided into **2 parts**.
* As subnet mask of **B** is **192**, so the network is divided into **4 parts**.
* According to **A**, both the hosts are in the **same network**.
* According to **B**, both the hosts are in **different networks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c223188-86ea-4f17-a3b2-d3771ead3fa4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/424006bf-5292-4791-835b-24b29e276d27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee8473a6-e6b8-4a33-badb-e65bc4a0edb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e7b5307-431b-449b-89a0-863976d831f6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bde28981-7f20-4b76-83bd-46847b4d39f6)

## Variable Length Subnetting(VLSM)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/189b3121-d285-4062-b6f2-87678ef69e26)

* Subnet masks -> 255.255.255.128 and  255.255.255.192
* Size of all the subnets are **same**. All of the networks will have the **same** subnet mask.
* This is called as **fixed length subnet masking**.
* We use **fixed length** because for all the networks, the no. of 1's in the subnet mask, the length of the 1's is **same**.
* If they ask, Length of subnet mask? It means how many 1's are there in the subnet mask?

> Length of subnet mask for **255.255.255.128** network is **25** for both the **networks**.

> Length of subnet mask for **255.255.255.192** network is **26** for all **4** networks.

* As the **length of the subnet mask** is **fixed** for all of the **networks**,

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fdf12ad-597e-4dc5-8ac0-61cafe40b603)

* 3 companies are asking for **128, 64 and 64** no. of IP addresses respectively.
* Into how many **subnets** we should divide the class into?

> **Into 3 subnets**.

* For **3 subnets**, how many **bits** we need?

> We need **2 bits**, as **2 ^ 2 = 4**.

> We have no way of getting **3**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1449a462-7574-473c-9764-7ef4e1f16b26)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5071839-9da5-41b0-a12b-b512486e089c)

* We are taking **1 bit** and dividing into **two** parts, one is starting with **0** and it ranges from **0 to 127** which is **128**. The address is **200.1.2.0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84814b3e-0bec-421c-a79d-9e778ed41734)

* On the part starting with **1**, we are dividing the next bit into **two** parts, one part is starting with **10** and it ranges from **128 to 191**. The address is **200.1.2.128**. 

* On the othaer part starting with **11** and it ranges from **192 to 255**. The address is **200.1.2.292**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b80c8414-a07a-4611-bfbd-8c2dd9b245fd)

* Subnet mask of **A** -> 255.255.255.128 [ 1 bit we used, so 10000000, which is 128]
* Length of subnet mask -> No. of 1's -> 8 * 3 + 1 -> 25.

* Subnet mask of **B** -> 255.255.255.192 [ 2 bit we used, so 11000000, which is 192]
* Length of subnet mask -> No. of 1's -> 8 * 3 + 2 -> 26.

* Subnet mask of **C** -> 255.255.255.192 [ 2 bit we used, so 11000000, which is 192]
* Length of subnet mask -> No. of 1's -> 8 * 3 + 2 -> 26.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb66ea90-dea6-4768-9009-27f6da36063a)

* We can see that the **length of the subnet mask** is **variable**.
* This is called as **VLSM** which is **variable length subnet mask**.

* If length of **subnet mask increases** then, **network size decreases**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dde26fb4-ad51-4c94-b4d2-2b64b0528827)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffb1cb9e-99ee-4384-9429-fcc436242ab2)

* Subnet mask actually contains **1's**.

> As the **length** of subnet mask **increases**, the no. of **1's** also **increases**. As the no. of **1's** are **increases**, so the **no. of 0's** are **decreasing**.

* No. of 0's is nothing but no. of IP addresses in the subnet.

> As the **no. of 0's** are **decreasing**, we can say that **size of network** is **decreasing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cfa990cb-4dd9-4733-b5d6-604835bda872)

* If the **subnet mark** of network **A** is **equal** to the **subnet mark** of network **B** then we can say that the **size** of the **networks** is the **same**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f3d677d-d729-4040-93d6-27a8dc065666)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1135765f-55aa-4231-b32d-75a03a952225)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f3fec42-c927-455e-9e3a-6df304a7ce60)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab955a72-48c3-42f3-84ef-c33a445f0412)

* **0** is the **network ID** and **127** is the **DBA(Directed)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdc102e5-2f19-47a7-91cc-8dbc3cfbdf3c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b02dc77b-4744-4174-a2c7-07fd0b177f7a)

* Length of subnet mask -> NID to SID -> 24 + 2 -> 26.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c38affdd-066d-4ec9-ae3d-77cd4138a887)

* As the **legnth of subnet mask** is **smaller** than **A and B**, that's why the **network 'C'** is **bigger**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/266c365d-c1ed-4b3d-8193-aa871a2ea5d0)

* We have to do it in **both ways** to get the **correct** answer.
* Taking **two bits** first or taking **1 bit** first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23a1b31e-0844-4960-a147-5115a3c3006d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4a28133-1e8a-4d97-9a9d-743175e9464c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e886044-140c-40b4-ac25-6046236e3511)

* 0-63,64-95,96-111,112-127,128-255

## Computer networks classless inter domain routing and problem solving(8) [4th July 2023]

* Network ID or subnet ID of network **A** -> 0
* Directed Broadcast Address(DBA) -> 63
* It is **same** for the others as well. First is the **Network ID or subnet ID** of the network and the second is the **Directed Broadcast Address(DBA)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76e54826-32f6-4156-b8b1-52bb49ceb35b)

* Length of subnet mask of Network **A** -> NID + SID -> 24 + 2 -> 26 [200.1.2 is used which is **8 * 3 -> 24**]
* Subnet Mask -> 255.255.255.192 [192 -> 2 ^ 7 + 2 ^ 6 -> 11000000]

* Length of subnet mask of Network **B** -> NID + SID -> 24 + 3 -> 27
* Subnet Mask -> 255.255.255.224 [224 -> 2 ^ 7 + 2 ^ 6 + 2 ^ 5 -> 11100000]

* Length of subnet mask of Network **C** -> NID + SID -> 24 + 4 -> 28
* Subnet Mask -> 255.255.255.240 [240 -> 2 ^ 7 + 2 ^ 6 + 2 ^ 5 + 2 ^ 4 -> 11110000]

* Length of subnet mask of Network **D** -> NID + SID -> 24 + 4 -> 28
* Subnet Mask -> 255.255.255.240 [240 -> 2 ^ 7 + 2 ^ 6 + 2 ^ 5 + 2 ^ 4 -> 11110000]
* Same as **C**

* Length of subnet mask of Network **E** -> NID + SID -> 24 + 1 -> 25
* Subnet Mask -> 255.255.255.128 [128 -> 2 ^ 7 -> 10000000]


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0903c9f0-71fe-447a-889d-d97be42db86d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89f5c54d-6cee-46f2-afb5-31251a318c6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49596591-124f-49b0-bcb7-581806a741c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dedd676-8536-46ce-8824-010688be0c5f)

* Sizes of network **C and D** are **same**. Whenever two networks have the **same** size, they will have **same** subnet mask.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe7359f4-90e6-442b-9ec9-820b4d3b4312)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb650996-98a6-4eb5-b510-a03a63b4c8a1)

* THe network with the least **subnet length**, the bigger the network is.
* THe network with the highest **subnet length**, the smaller the network is.
* As the **subnet mask size increases**, the **network size decreases**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8328e2bd-9e22-425d-b449-68ade588b15b)

* Length of the Submet mask of **Network 'A'** -> 128
* Size of the network -> NID + SID -> 8 + 1 -> 9. [10-> 10000000 -> 8 bits]
* Host ID part -> 32 - 9 -> 23
* No. of IP addresses we get -> (2 ^ 23) -2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5606574f-3b01-4c32-843c-405d8b740a32)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ba6ae15-2e42-4739-b102-88ce5618b0c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bbc8bc9-f7cc-43ae-8682-d18fc8c0f815)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6d88766-76f7-4339-8503-12ab3ffec623)

* For **Network B**
* Starting address is **10.10000000.0.0** which is **10.128.0.0**
* Ending address is **10.10111111.255.255**which is **10.191.255.255**
* Size of the network -> NID + SID -> 8 + 2 -> 10. [10-> 10000000 -> 8 bits]
* Host ID part -> 32 - 10 -> 22
* No. of IP addresses we get -> (2 ^ 22) -2


* For **Network C**
* Starting address is **10.11000000.0.0** which is **10.192.0.0**
* Ending address is **10.11111111.255.255**which is **10.255.255.255**
* Size of the network -> NID + SID -> 8 + 2 -> 10. [10-> 10000000 -> 8 bits]
* Host ID part -> 32 - 10 -> 22
* No. of IP addresses we get -> (2 ^ 22) -2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9df4e72a-14a8-4522-a853-853fbbf56659)

* What is the size of a network in **Class A** and not the network **A**?

> **2 ^ 24**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27ce9ad4-da9a-40f3-8d4f-fb42a6ddf7c2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9102ad7a-e6b2-42b0-a5fa-1e69833b0f40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0169b98-7276-4438-b85b-21017528efd6)

* 00 -> 0 to 63 [00000000 to 00111111]
* 01 -> 64 to 127 [01000000 to 01111111
* 1 -> 128 to 255 [10000000 to 11111111]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e6efcc1-ce33-42b8-8dcd-89dd6ad67eee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86ff15b6-4ab2-4b29-978e-d2cc96155ecb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec4df4c7-6c75-43ad-9567-5c677bdf8092)

* Trick [47mins]

* A -> 0 -> 0 - 127
* B -> 10 -> 128 - 191
* C ->  110 -> 192 - 223
* D ->  1110 -> 224 - 239
* E ->  1111 -> 240 - 255

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af7f8f33-559d-47bc-b463-1e241732a825)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0868ef23-3855-4e45-a2ee-83c7f7126599)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a9a188f-feb7-48d5-b6fd-906464e1d8aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56488687-17c7-473e-a885-2812b54db45b)

* What is the length of the **subnet mask**?

> **A** -> 8 + 1 -> 9 [10-> 10000000 -> 8 bits]

> **B** -> 8 + 2 -> 10

> **C** -> 8 + 3 -> 11

> **D** -> 8 + 4 -> 12

> **E** -> 8 + 4 -> 12

* What is the size of the entire network? 

> **32 - (length of the subnet mask of the network)** -> **Host ID part**

* A -> 32 - 9 -> 23
* Total no. of IP addresses -> 2 ^ 23

* B -> 32 - 10 -> 22
* Total no. of IP addresses -> 2 ^ 22

* C -> 32 - 11 -> 21
* Total no. of IP addresses -> 2 ^ 21

* D -> 32 - 12 -> 20
* Total no. of IP addresses -> 2 ^ 20

* D -> 32 - 12 -> 20
* Total no. of IP addresses -> 2 ^ 20

* Size of the entire network -> 2 ^ 20 + 2 ^ 20 + 2 ^ 21 + 2 ^ 22 + 2 ^ 23 -> 2^ 21 + 2 ^ 21 + 2 ^ 22 + 2 ^ 23 -> 2 ^ 22 + 2 ^ 22 + 2 ^ 23 -> 2 ^ 23 + 2 ^ 23 -> **2 ^ 24**

* Size of the entire network -> **2 ^ 24**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7bdcc35-ddac-42c7-9268-fa6a99faf1a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbd7cbe6-34e2-46ca-8f83-9f2188c0ea81)

## Computer networks arpanet and problem solving(9) [4th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65792071-1765-4a59-9f96-9bb7efb34fb1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30f9cae9-fa08-4969-8982-3f0943c4b948)

* If we know the **subnet mask** and the **class** of the network then we can find out the **no. of subnets**.
* If only **subnet mask** is given then, we can know the **no. of hosts** in the **subnet**.

* How many IP addresses are present in the subnet mask **255.255.255.192**?

> **No. of 0's** present.

* 192 -> 11000000 -> 6 0's present
* So **no. of IP address** present -> 2 ^ 6.

* If the network is of **class A** then how many subnets are possible? 

> **No. of 1's = NID + SID**

> NID for **class A** = 8

> No. of 1's = 8 * 3 + 2 = 26

* No. of 1's = NID + SID -> 26 = 8 + SID -> SID = 18 bits
* So, the **no. of subnets** possible is -> 2 ^ 18

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a844d7f-132b-47c4-b373-4ef4a69e9d6d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a55bbb3b-b6d6-4b46-83f9-c55c332eeb42)

* Question [**IMPORTANT**]
* No. of subnets:-
* 1's = NID + SID
* No. of 1's -> 8 * 3 + 1 -> 25
* NID for **class C** -> 24
* 1's = NID + SID -> 25 = 24 + SID -> SID = 1
* No. of subnets -> 2 ^ 1 -> **2** [Answer **1**]
* No. of IP addresses -> No. of 0's
* 128 -> 10000000
* No. of 0's -> 7
* No. of IP addresses -> 2 ^ 7
* No. of hosts -> (No. of IP addresses) - 2
* No. of hosts in each subnet -> ((2 ^ 7) - 2) [Answer **2**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ef6dd93-aa17-4c18-aef4-020c87e83c4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee9c2163-7db2-413c-bf63-0e03b7cb39c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66db7b3c-0143-476a-a956-46b5a5b2447b)

* Question
* [**IMPORTANT**]

* Class B
* No. of IP addresses -> No. of 0's
* No. of 1's -> 8 * 2 + 5 -> 21
* No. of 0's -> 32 - 21 -> 11 [Can find no. of 0's using this way as well]
* 248 -> 11111000.00000000
* No. of 0's -> 3 + 8 -> 11.
* No. of IP addresses -> 2 ^ 11
* No. of hosts per subnet -> (2 ^ 11) - 2 -> (2 * 1024) - 2 -> 2048 - 2 -> **2046**.
* As it was **class B** and we had **zeroes** after **248**, we have to add those zeroes as well to find the **no. of IP addresses**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b9b1379-7cd6-4dc0-af9a-341940e9adb4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e872c11-cb73-489c-973c-3cf547595ba7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e89eff82-04cb-4365-bfa4-ee309124bf29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb8f789c-7605-4f42-921c-64c099b36210)

* The range wont be continuous
* Theoritically it is possible but practically we will not do that.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/353472ac-d8b9-4571-857d-c3097c11a55b)

* The subnet mask is -> **255.255.255.15**
* How many hosts per network are possible?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6cede44-33ec-48f0-8fc0-af58db8f27ce)

* Question

* 15 -> 00001111
* No. of 0's -> 4
* No. of IP addresses -> 2 ^ 4
* No. of hosts per network -> (2 ^ 4) - 2 -> **14**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5caa420-ce97-4b48-9d13-507338b2316a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c0b880a-4fa0-44f7-84e5-ab53d6151dc1)

* Size of network in **class A** -> 2 ^ 24
* Size of network in **class B** -> 2 ^ 16
* Size of network in **class C** -> 2 ^ 8

* If I need **100 IP** addresses then I need a **class C** network.
* We bought one network of **class C**.
* How many IP addresses we will get in a network of **class C**?

* No. of IP address -> (2 ^ 8) - 1 -> 255
* We need **100** IP addresses and we got **255** which means **255 - 100 -> 155** IP addresses are **wasted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0cc599b-fccf-46a2-b6c3-08e09d5d107f)

* Class -> A, B, C, D, E
* Called as **classful classification**.
* It is not **flexible**.
* So, we went for **classless**.
* Practically, we don't have any classes.
* **Classless** classification is called as **CIDR(Classless Inter-Domain Routing)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d1be0e5-955a-4f78-a34c-39c6702facf3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37d096a1-07c1-4490-9b33-74b087570dff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71d6f228-9d2b-4979-b2ec-f8749fc73640)

* We are **dynamically** cutting the cake.
* Previously the cake was already cut.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c62001a6-7223-4bd0-936b-ca385983ae48)

* We are going to make the **blocks** as per **demand**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a8113d8-6394-49e0-a0be-c597735b7127)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67b50ba5-2185-4b31-acf0-5bb24955ecb7)

* Previously we were able to tell the **class** of the network and the **size of the network** by looking at the first part of the network.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4c2daab-d667-42af-99b6-214bffe7f762)

* That is not possible in **CIDR**.  
* We need to give a **slash(/)** after the network and a no after the slash to tell the **network ID(NID) or block ID** of the network.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ba21a17-678c-4ef9-8677-2aac8e35b1a3)

* The **/20** clearly says that the **network ID(NID) or block ID** of the network is **20 bits**.
* Host ID -> 32 - 20 -> **12 bits** -> (Total no. of bits(32)) - (Network ID(NID) or block ID in bits)
* So, the **size of the block** -> (2 ^ 12) -> 4K or 4000 (approx)
* **CIDR** representation -> a.b.c.d/n
* **a,b,c and d** are dotted decimal representation of an **IP** address.
* **/n** is the **network ID part(NID) or subnet ID part(SID)** of the network which is **n bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be9b9bf9-e8eb-4e00-a695-0b0f49f11a1e)

* What is the **range** of the block?

> As **20 bits** are for the **network ID** part. Therefore in order to get the **range**, we should not touch the **first 20 bits**. We should playt with the last **32 - 20 -> 12** bits.

> **20th bits** is presnt in the **3rd octet**.

* Don't touch the **network ID** part.
* Remaining are **host ID part**, using them we can find the **range** of the block.
* For the **starting range** put **all 0's**, then we will get **10.1.0.0**
* For the **ending range** put **all 1's**, then we will get **10.1.15.255** [15 -> 00001111, 255 -> 11111111]
* **Range of the block** ->  **10.1.0.0** to **10.1.15.255**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e75f2405-cb98-4bd5-8846-fd12b713bdc9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73dc48ef-9c1a-4426-8343-561f9ed4009a)

* The IP address, **10.1.0.0** is now the **block ID** or the **network ID** of the network.
* Even though it is a **block**, it is also a **network**.
* Even though it is a **subnet**, it is also a **network**.

* The IP address, **10.1.15.255** is the **directed broadcast address(DBA)** of the **network or block or subnet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1323f962-2f94-4735-a1ff-85493f11b605)

* Given an IP address followed by a **/n**, which is **IP/n** we are able to say the **size of the network** and also the **range** of the network.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d724aa8c-959c-4154-9a5b-76d5130ec16e)

* If any **random no** from the **block** is given to us, the **/n** no is given to me. We can actually **derive** the entire block.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a7d4cdc-8144-4995-ac2f-827d3019d119)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec5bfb3f-dc20-416d-a0b8-4af0c769ecee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2771dfe-70b0-4bca-b04b-c574195b954c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1a23ffa-c614-47b2-af72-5a4f4beee287)

* IP address -> 20.12.1.2/12
* NID -> 12 bits
* host ID -> 32 - 12 -> 20 bits
* We have to start from the **13th bit**.
* 12 -> 8 + 4
* 12th bit is in **2nd octet**
* 20.0000 0000.00000000.00000000
* Initial Address -> 20.0.0.0
* FInal Address-> 20.0000 1111.11111111.11111111 -> 20.15.255.255
* Range is from **20.0.0.0** to **20.15.255.255**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f54ab89f-754b-455f-9eb0-b559f4273906)

* Block or network ID(BID) -> **20.0.0.0**
* DBA -> **20.15.255.255**
* Size of the block -> Host ID -> 2 ^ 20.
* No. of hosts -> (2 ^ 20) - 2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e39967d2-bd5d-4a5d-820e-87ea5e2874b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c28dd56e-146c-4ec8-93a5-839226b5112e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e87b9cee-bc91-4475-8e0d-b771334331fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27d4d82d-f812-482a-8133-d06dfbdd1d2f)

* What should be the value of **n** such that, block size is **2 ^ 10**?

> Size of Block -> 2 ^ (HID) -> 2 ^ 10 [Given]

> HID -> 10 bits

> NID = 32 - 10 -> NID = 22 bits

* So, the value of **n** -> 22 bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd51e49d-ddf5-4113-8654-a617ece11e3b)

* What should be the value of **n** such that, block size is **2 ^ 2**?

> Size of block -> 2 ^(HID) -> 2 ^ 2

> HID -> 2

> NID = 32 - 2 -> NID = 30 bits

* So, the value of **n** -> 30 bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b5bd514-5da4-46ff-9a55-f4959d2f2beb)

* Tell all of the **four** IP addresses in the block?

* 30 -> 8 + 8 + 8 + 6 -> 4th Octet.
* NID -> 30
* host ID -> 32 - 30 -> 2
* So, the host IDs can be **00, 01, 10, 11**.
* 4 IP addresses -> 10.1.2.0/30, 10.1.2.1/30, 10.1.2.2/30, 10.1.2.3/30
* Block ID -> 10.1.2.0/30
* DBA -> 10.1.2.3/30
* So, only **two** IP addresses can be **used** as **host IDs**.
* So, only **two hosts** are possible.

> That is why the **max no. for 'n'** we can have is **30 or /30**.
> We can go for **31 or 32** because, if we use **/31**, then we will get **two** IP addresses, and those **two** will be used as **BID and DBA**, no IP addresses left for **hosts**.
> There is no point in buying **two** IP addresses. We will not be able to use **either of them**.

> If we go with **/32** we will get **1** IP address which is also **meaningless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f6da3d5-81c1-40b9-a181-bddea0d8a25e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ce6409d-6ce0-42f9-9721-91aaf18b3a47)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af88850d-480f-4bb0-8bda-f31dd730e608)

* It is called a **block** because it has certain **no. of IP addresses** in it or inside it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56b37dbd-b0d4-426b-9758-cc241df673aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fed825de-f413-4deb-9b64-4c402857cc11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b16a44d2-aed6-4e14-b6f6-0480bb3ec666)

## Rules of CIDR blocks

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3a5d5d2-6164-4892-b32a-408bdd11270f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04e6ad24-2f37-4022-99d0-08cb30293d58)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/404e7047-d9df-4e84-902c-ac6234e482b6)

## computer-networks-rules-of-creating-a-cidr-block-subnetting-and-vlsm-in-cidr(10) [4th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37e4fd99-c7ea-48b8-8dd4-b7005b9d05aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfd1eb2b-bdc5-44ea-9baf-09178142eec9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80ec04f3-0a8f-4880-9463-6d63019429d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d165b4dc-d303-4320-ad8e-44338cb7b08a)

* Remainder -> 1 -> 1
* Quotient -> 7 -> 111 [4 + 2 + 1]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59c54cd9-6426-4e45-a741-486534db209c)

* Remainder -> 3 -> 11 [2 + 1]
* Quotient -> 3 -> 11 [2 + 1]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61a33cd5-56e5-4f9f-a55b-8c386dd3d1cd)

* Remainder -> 7 -> 111 [4 + 2 + 1]
* Quotient -> 1 -> 1 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a76a20a-f888-4f4d-9216-9fcad913f3fb)

* Remainder -> 15 -> 1111 [8 + 4 + 2 + 1]
* Quotient -> 0 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdec460a-c430-4dbc-bf2a-10aaa2fd6cab)

* If we have **n** bits and we divide it with **2 ^ k** then the **least significant 'k' significant** is going to be the **remainder** and the **most significant (n - k) bits** are going to be the **quotient**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a05084dc-db3d-403b-98a3-42ad5db17eb6)

* **LSB(Least significant significant)** -> remainders
* **MSB(Most significant significant)** -> quotient

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edb3103a-233b-4213-ab56-2daf54df3676)

* The size of the block should always be in **powers of 2**, which is **2 ^ n**. In that case, we can **divide**, 32 bits of the IP address into **two** parts, one is going to have **network ID or block ID** and another one is going to have **host ID**.

* The size of the block is always in **2 ^ n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da12570d-e07b-4491-9259-9602ae8c3d06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/831b75c4-589f-4752-b9b6-65c3efc0fcc5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5be2266-7877-49cb-8593-79a5e51e8847)

* The size of the block is **2 ^ K**. What is the **remainder** when we divide the no with **2 ^ K**. **Remainder** is the **LSB** 'k' bits. The entire part has to be **all 0's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97803737-fc85-4221-94f4-8d524aa3931f)

* We always want the **first IP address** to be the **block ID**.
* We know that the **block or network ID** should always have **all 0's** in the **host ID** part.
* That is why the **first IP address** of the block must be evenly divisible by the size of the block.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94f24574-4d6d-4e65-b971-723eb43473fd)

* **Evenly divisible** means **remainder** should be **zero** which is **rem =0**, if we divide the **first IP address** of the block with the **size of the block**.
* If **2 ^ k** is the **size of the block**, then **2 ^ k** should divide the no **evenly**.
* If we have a block of **2 ^ k**, we are going to divide the entire IP address into **two** parts. One part is going to have **k bits** at the **host ID** part and the other part is going to have **(n - k)** bits in the **block ID** part.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ff84783-b2ed-4064-a3da-cd601ea34bdb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acf141a7-ccfb-454f-827d-049035994bab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e630716f-1f52-4154-9288-ee9a4ea3f7db)

* How can be say it is **valid block** or not?

> By satisfying the **rules**.

1) All the IP addresses are **contiguous** [Rule 1 -> **Satisfied**]

* Size of block = 47 - 32 + 1 -> 15 + 1 -> 16 -> 2 ^ 4
2) BLock size is in **power of  2**. [Rule 2 -> **Satisfied**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e471b8e8-5f59-4958-a7a7-acb62bdae6e0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6ca6e06-dd36-40d0-ac8c-908164484e40)

* The no, **100.1.2.32 -> 100.1.2.00100000** and it should be **divisible** by the **size of the block** which **2 ^ 4 -> 16**.
* If we take the **2 ^ 4** and divide the **32 bit** no, what is the remainder?

 > The **LSB 4 bits** are **all 0's**, therefore the **first IP address** is **divisible** by the **size of the block** which is **2 ^4**,

* Therefore, we can say that **100.1.2.32** is a **valid block**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57afd699-3c23-47a9-ba20-09292d298165)

* What is the **CIDR** representation of the block? 

> **100.1.2.32/28**

* **/28** because the **size of the block** is **2 ^ 4**, which is **4 bits** for **host ID**.So the **network ID** is **32 - 4 -> 28**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dccde2de-448b-43d1-94b0-699826b4b642)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ba78038-fd85-4cae-ba2b-d0f16ad441f7)

* We can actually have any no from the **block** and still this no will represent the **block** because from this no, we will be able to **derive the entire block**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9cc4a23-00e7-452f-bc94-55296c75a462)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f9d29a3-2647-4ab3-b2c7-a3fd57057087)

* **/28** is the **network ID**. So, we cannot touch it.
* We have to use the rest, which is **32 - 18 -> 4** which is the **host ID**.
* If we are given a **IP/n**, slash no, we would be able to generate the **entire block**. 
* In order to represent a **block**, we can use any IP address from the **block**. It need not be the **first IP** address.
* The **first IP address** is going be the **block or network ID(BID)**.
* The **last IP address** is going to be the **DBA**.
* The remaining IP address are used for the **hosts**.
* No. of hosts -> (Total no. of IP addresses) - 2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a60b3fd-c605-4f8f-ad02-69f6bf2a4dfb)

* 100.1.2.40/28 -> 100.1.2.00101000 -> -> 100.1.2.0010 1000
* We can only use the **last 4 bits**, which is **1000**.
* The **first address** is **0000** which is **100.1.2.00100000 -> 100.1.2.32**
* The **last address** is **1111** which is **100.1.2.00101111 -> 100.1.2.(32 + 15) -> 100.1.2.47**.
* **100.1.2.32** which is the **first address** is the **Block or network ID**.
* **100.1.2.47** which is the **last address** is the **DBA**.
* No. of hosts is -> (2 ^ 4) - 2 -> 16 - 2 -> 14.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cccdc739-ad65-41f8-bd35-1ea74598914b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/577295c6-e233-453d-a026-503a51ca84fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cc9ec13-1d14-43e1-8336-a6d0a73654da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa95a65c-5846-4881-807b-17e201519aa0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b50c791f-5c27-4630-ab85-f0ea5cf8144b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92a74f3c-38fe-45fc-a3f2-c3a3532e975b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d21fce2-2f93-4b93-b1d7-27427d904906)

* Question.

1) From **64 to 127**, the **block** is **contiguous**.

* Size of Block -> 127 - 64 + 1 -> 64 -> 2 ^ 6 -> 2 ^ n
* Size of Block -> Host ID -> 6

2) Size of block is in the **power of 2**.

* First IP address which is **150.10.20.64** should be **divisible** by **size of block** which **2 ^ 6**. 

3)As it is completely **divisible** an we got **remainder** which is **000000**.

* Network ID -> 32 - 6 -> 26
* CIDR representation -> 150.10.20.64/26

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7075dd4c-29ae-49bc-8a97-36a1a6e69b65)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6973889-72f6-495c-b764-2611b26e9e1b)

* We can take any **IP address** from the **block** and put **/26** at the end of it. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7239565f-ab9f-4e82-9e18-9857b9130402)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08a462cc-37cf-438a-8620-6e2c6f16764e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/900f66ff-f795-4638-9758-52992200ec92)

* Question.
* CIDR -> 20.10.30.35/27
* Network ID -> 27
* Host ID -> 32 - 27 -> 5
* Size of the block -> 2 ^ 5 -> 32 -> 100000

* **First IP address of the block*** should be **divisible** by the **size of the block**.
* 27 -> 8 * 3 + 3
* 20.10.30.35 -> 20.10.30.00100011 -> 20.10.30.001 00011
* 20.10.30.00100000 -> 20.10.30.32 is completely **divisible** by **size of the block**.
* First IP address is **20.10.30.32**
* Last IP address is **20.10.30.(32 + 32 - 1) -> 20.10.30.63**
* The **range** is **20.10.30.32** to **20.10.30.63**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4983137-4667-4a19-86fc-18d8477336f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bbffed8-36a2-43d1-9e3b-e5c4666de3a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d4afdcc-aeb0-4978-9cfc-51d9a5143a70)

* Question.

* Network ID -> 20
* Host ID -> 32 - 20 -> 12
* Size of the block -> 2 ^ 12
* 100.1.0000 0010.00100011
* **First IP address** -> 100.1.0000 0000.00000000 -> 100.1.0.0 -> **Block or Network ID**
* **Second IP address** -> 100.1.0000 1111.11111111 -> 100.1.15.255 -> **DBA**
* The range of the **block** is **100.1.0.0** to **100.1.15.255**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b3b159d-3234-44f0-a2a9-f6c7bf576615)

* To check if the **block** is **valid or not**, we have to **satisfy** the **3 rules**.
* Size of the block is **2 ^ 12** which is a **power of 2**.
* The **first IP address** is **divisible** by the **size of the block** as we are getting **all 0's in the last 12 bits**.
 
* So the **block** from **100.1.0.0** to **100.1.15.255** is a **valid** block.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43c00ca7-58eb-4d65-8bcd-e413ccd94c3c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/081eb315-91af-40f1-89d8-d298c76b116a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97b643f4-80ac-4d54-b4b4-d103cd60eee1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7636762d-4f92-4816-b7b8-eceaa6e3e676)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81e6894d-9cfd-41cb-8d9c-c30238fe3e1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ba8a4e2-b393-429a-be5e-e1fdfa56d347)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9f3afa6-78ec-4f5b-b2f1-a76da9929932)

* We don't have **classes** this is **classless** as **/n** is there.
* Network ID -> 25
* Host ID -> 32 - 25 -> 7 bits.
* The range of the **block** is from **20.30,40.0** to **20.30.40.127**
* Size of the block is **127 - 0 + 1 -> 128**.
* Each half will get **128/2 -> 64**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57556b39-ee26-4f23-b991-f7db6d4a8e5c)

* The range of the **first part** is from **20.30,40.0** to ***20.30,40.63/26**.
* The range of the **second part** is from **20.30,40.64** to ***20.30,40.127/26**.
* **/26** because earlier we have **/25** and we added **1 bit** as the **subnet ID(SID)** which is **25 + 1 -> 26**
* That's why we are doing **/26**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/588377d3-8c8e-449c-85bf-65dced96b67d)

* [**IMPORTANT**]

## computer-networks-problem-solving-on-vlsm-in-cidr (11) [6th July 2023]

* We have to divide a network which is **128** into **small networks** of size **32**.
* Size of **each network** is **2 ^ 5 -> 32**.
* So, **Host ID** is **5 bits**.
* Network ID -> 32 - 5 -> 27
* So, we have to write **/27** at the end of all the **ranges**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e78e6c15-d120-48f9-a7b2-0f01f4897e55)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9af92a0-95ad-4e16-91d4-1de96ed64f35)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d61bffed-bf5e-4861-a09c-650a1f021965)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddc3f4b1-218e-4032-860e-ed9a8aa4173f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a7e123b-86ee-4a21-9e29-afa8416d9a5f)

* What is the subnet mask of the network?

> **/25** which is **255.255.255.10000000 -> 255.255.255.128**.

* It is also called as **network mask/subnet mask**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcb065d3-2abc-46fb-89c7-b210aedfcab6)

* We have already taken **25 bits** from the **network ID** part, and we have taken **1 bit** for **subnet ID part**. So we will put **25 + 1 -> 26**, which is **/26** at the end of the address.

* Address -> 20.30.40.00______.

* What is the subnet mask of the network?

> **/26** which is **255.255.255.11000000 -> 255.255.255.192**.

* What is the network ID?

> **20.30.40.00______ -> 20.30.40.00000000/26 -> 20.30.40.0/26**.
> Taking the **starting address** of the network.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b197367e-372b-4f48-992a-4e8b469ef84d)

* Address -> 20.30.40.010_____.

* What is the subnet mask of the network?

> **/27** which is **255.255.255.11100000 -> 255.255.255.224**.

* What is the network ID?

> **20.30.40.010_____ -> 20.30.40.01000000/27 -> 20.30.40.0/64**.
> Taking the **starting address** of the network.

* Address -> 20.30.40.011_____.

* What is the subnet mask of the network?

> **/27** which is **255.255.255.11100000 -> 255.255.255.224**.

* What is the network ID?

> **20.30.40.011_____ -> 20.30.40.01100000/27 -> 20.30.40.0/96**. [64 + 32]
> Taking the **starting address** of the network.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78512ef3-2f33-4f55-9596-f32b93764279)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33cf82b9-2c53-489b-8ba8-b563efe162ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fe00b8a-5802-4d32-bd32-0bef67c7e576)

* Find the ranges? 

* 0 to 127 -> 128/2 -> 64
* 64/2 -> 32
* Parts -> 32, 32, 64
* A -> 32
* B -> 32
* C -> 64
* Address for **A** -> 20.30.40.0 00_____
* Network ID -> 20.30.40.0 0000000 to 20.30.40.0 0011111 -> 20.30.40.0 to 20.30.40.31
* Subnet ID -> 2 bit -> 00
* Total -> 25 + 2 -> 27
* Subnet Mask -> 255.255.255.11100000 -> 255.255.255.224/27

* Address for **B** -> 20.30.40.0 01_____
* Network ID -> 20.30.40.0 0100000 to 20.30.40.0 0111111 -> 20.30.40.32 to 20.30.40.63
* Subnet ID -> 2 bit -> 01
* Total -> 25 + 2 -> 27
* Subnet Mask -> 255.255.255.11100000 -> 255.255.255.224/27

* Address for **C** -> 20.30.40.0 1______
* Network ID -> 20.30.40.0 1000000 to 20.30.40.0 1111111 -> 20.30.40.64 to 20.30.40.127
* Subnet ID -> 1 bit -> 1
* Total -> 25 + 1 -> 26
* Subnet Mask -> 255.255.255.11000000 -> 255.255.255.192/27

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c38f4ae-8123-405c-8dc0-47ac0983dc51)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93b8bd41-8f60-41b1-b6d0-842ddbb1103a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e487ecc-cb6d-4607-932e-a58e2980cf71)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b73313a-59ed-4504-b5c3-5d1155dd77a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4484eba6-5f87-4660-885c-2a68096ddbb6)

* **/12** is the network ID.
* Rest is **host ID**.
* It from **0 to 15**, so we have **16 networks** of size **256 * 256**.
* As we want **two** networks, we are dividing the original network which is **(16 * 256 * 256) / 2** which gives **8 * 256 * 256** sized networks.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/359659b2-7943-46c5-beb1-e4a259f64ad2)

* The range is for the first part is from **10.0.0.0** to **10.7.255.255**
* The range is for the second part is from **10.8.0.0** to **10.15.255.255**
* Network ID was **12 bits**.
* **1 bit** is used for **subnet ID**.
* So **12 + 1 -> 13**, which is **/13**.
* The range is for the first part is from **10.0.0.0/13** to **10.7.255.255/13**
* The range is for the second part is from **10.8.0.0/13** to **10.15.255.255/13**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3568f82a-caf2-4122-9aee-d85d87d84a03)

* 4 parts
* 10.10.10.10/12
* We have **16 networks** and size is **256 * 256**.
* We need **4 networks**, so **(16 * 256 * 256) / 4 -> 4 * 256 * 256**.
* Network ID = 12 bits
* Subnet ID -> 2 bits -> 2 ^ 2 -> 4
* So it is **12 + 2 -> 14** which is **/14**.
* The range is for the first part is from **10.0.0.0/14** to **10.3.255.255/14**
* The range is for the second part is from **10.4.0.0/14** to **10.7.255.255/14**
* The range is for the third part is from **10.8.0.0/14** to **10.11.255.255/14**
* The range is for the fourth part is from **10.12.0.0/14** to **10.15.255.255/14**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5538b0ea-36f0-42d3-85bc-890550576f52)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7eee21aa-0304-4618-93d6-0b9644ef35c2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00066e45-154a-4cf5-b9c7-2e6a8fd5b057)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dd31c85-5df7-445d-8989-dfba07bed960)
![Alt text](image-1.png)

* Question
* Find the **range**?

* Address -> 10.10.10.10/12
* Network ID -> 12
* 10.000 0000.00000000.00000000/12 -> 10.0000 1010.0.0
* 10.10.10.10 -> 10.0000 1010.10.10 -> 10.0000 0000.0.0 to 10.0000 1111.255.255 -> 10.0.0.0 to 10.15.255.255
* Total -> 0 + 15 + 1 -> 16
* We want **3** parts.
* First half is **0 to 7** and the other half is **8 to 15**.
* We are dividing the **second half** which is **8 to 15** into **two** parts as we require **3** parts in **total**.
* We have **15 - 8 + 1 -> 7 + 1 -> 8**.
* So, **8/2 -> 4**.
* So the **second part** is from **8 to 11** and the **third part** is from **12 to 15**.

* First part -> **10.0.0.0 to 10.7.255.255**.
* Second part -> **10.8.0.0 to 10.11.255.255**.
* Third part -> **10.12.0.0 to 10.15.255.255**.
* We have two **different** subnet ID.
* For the **first part**, we used only **1 bit**, so it is **12 + 1 -> 13**
which is **/13**.
* For the **second and third parts**, we used **2 bits**, so it is **12 + 2 -> 14**, which is **/14**
* But we have **3 parts** only.
* So, **12 + 2 -> 14** which is **/14**.

* First part -> **10.0.0.0/13 to 10.7.255.255/13**.
* Second part -> **10.8.0.0/14 to 10.11.255.255/14**.
* Third part -> **10.12.0.0/14 to 10.15.255.255/14**.

![Alt text](image-2.png)

* VLSM

![Alt text](image-3.png)
![Alt text](image-4.png)

* Question.

* Address -> 10.10.10.10/12
* We want 4 parts.
* We have from **10.0.0.0 to 10.15.255.255**.
* We have **0 + 15 + 1 -> 16**.
* We divide into **two** parts.
* **First part** is from **0 to 7** and the other part is from **8 to 15**.
* The **other part** is divided into **two** more parts.
* Length is **15 - 8 + 1 -> 8**.
* So, **8/2 -> 4**.
* So the **second** part is from **8 to 11** and the other part is from **12 to 15**.
* The **other part** is divided into **two** more parts.
* Length **15-12 + 1 -> 4**
* So, **4/2 -> 2**
* So the **third** part is from **12 to 13** and the **fourth part** is from **14 to 15**.

* Subnet ID for **first part** -> 1 bit -> 12 + 1 -> 13 -> **/13**.
* Subnet ID for **second part** -> 2 bits -> 12 + 2 -> 14 -> **/14**.
* Subnet ID for **third part** -> 3 bit -> 12 + 3 -> 15 -> **/15**.
* Subnet ID for **fourth part** -> 3 bit -> 12 + 3 -> 15 -> **/15**.

* First part -> **10.0.0.0/13 to 10.7.255.255/13**.
* Second part -> **10.8.0.0/14 to 10.11.255.255/14**.
* Third part -> **10.12.0.0/14 to 10.13.255.255/15**.
* Third part -> **10.14.0.0/14 to 10.15.255.255/15**.

![Alt text](image-5.png)
![Alt text](image-6.png)
![Alt text](image-7.png)
![Alt text](image-8.png)
![Alt text](image-9.png)

## Routing_with_anno (12) [6th July 2023]

## Supernetting/Aggregation

* Aggregation -> Sum or Addition
* Supernetting -> We are trying to add or we are trying to sum up all of the networks and make it into a **single network**.

![Alt text](image-10.png)

* Sum or add all of the networks(N1, N2, N3 and N4) and call it as one big network and we can have one **network ID** for all of them(N1, N2, N3 and N4). This process is called as **aggregating or supernetting**.

![Alt text](image-11.png)

* Can we add any **4** networks?

> We cannot do it with all networks it is **not possible**.

* There are some rules:-
* Rules of Aggregation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dcd1d2d-1108-4180-8e5e-4f783739402d)

* Similar to the rules of **CIDR**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/767b0736-dd09-411a-a775-17dbe6052ea1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f2a1f1e-2b32-4a5a-9ea9-1a73f7fe2636)

* Rule **1** is satisfied. They are **continuous**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5611c106-50a8-40c4-939a-417fd8fe2b9e)

* Block Size -> 4 * 256 -> (2 ^ 2) * (2 ^ 8) -> 2 ^ 10.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c3475d4-4030-4ee7-96d6-be6737e8fedd)

* We have to take the **network ID** of the **first network** which is the **first address** of the **frist network**.
* It should be **divisible** by **2 ^ 10**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c39492ec-21ba-4bea-bca9-d6379885a4c1)

* We have combined **A,B, C and D** network to form a new network.
* What is the **network ID** of the **new network**?

> The **network ID or the block ID** of a **block** is the **first IP address**, which is **200.1.0.0**.

* THe block size is **2 ^ 10** which means the *host ID** is **10**.
* Network ID -> 32 - 10 -> 22.
* So the **network mask** -> **/22**.
* **network ID or the block ID** -> 200.1.0.0/22
* Supernet ID, Network ID, new block ID -> 200.1.0.0.
* Network mask, supernet mask -> **/22**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ee16dfe-7212-4704-942e-d2bd13ecd903)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc2f77f3-bacb-493a-a8b3-6977aedaae2e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd1a44f0-f7ce-43a6-a3a6-526b44af4c5e)

* Why supernet masking is used?

> To simplyfy the routing table we use subnetting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6569a2b7-31df-4e8b-8016-db8fc04f3638)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9f4431b-05da-488c-8b32-fa9f58c8bbc4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d56749f7-1659-4dcd-8dd8-d0a949cfdd43)

* When we are doing **subnetting**, what is happening to network mask?

> **Increasing**.

* In **subnetting**, we are dividing the network into **smaller networks**. Hence, the **size of the network** is **decreasing**. It means that **no. of hosts** are **decreasing**. So, the **host ID** is also **decreasing**. As, **host ID** is **decreasing**, so the **no. of 0's** are also **decreasing**,which means that **no. of 1's** are **increasing**. Hence, **network mask** is **increasing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f99fce3-0c29-4cf0-8105-fb2d81dd32f4)

* In **supernetting**, we have many networks, and we are actually combining them. Therefore, the **size of the network** is **increasing**. It measn that the **no. of hosts** are  **increasing**. So, the **host ID** is also **increasing**. As, **host ID** is **increasing**, so the **no. of 0's** are also **increasing**. So, the **no. of 1's** are **decreasing**. Hence, the size of the **network mask** is **decreasing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dde15326-ef1b-46c6-bf53-f8121c372ba4)

* While doing **subnetting**, we are **borrowing bits** from **host ID(HID)**.
* While doing **supernetting**, we are **borrowing bits** from **network ID(NID)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d56cbe8-e149-4db7-a337-3c58d9f9b81b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62a42bd0-2176-4d30-bb4d-d89005360eb6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e57e4e95-040c-40fb-8504-b2f002f7c055)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45d1cdef-2d49-46b4-8aa2-146fa910a77b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/589fc6ad-9508-460c-814b-d9ec8002d663)

* Instead of **4** entries, we now have only **one entry**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb7042d0-d204-43e4-81a6-ab5ea042367e)

* Size of each network -> 2 ^ 16.
* Total size -> 4 * (2 ^ 16) -> 2 ^ 18.
* 2 ^ 18 -> Host ID -> 18
* Network ID -> 32 - 18 -> 14
* Network ID -> 10.0.0.0/14

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d2e65d0-b9c2-4f15-8bfc-82738f097839)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb2b8818-0c39-4c63-8a5c-efc679ba08d1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c78028a-4f15-4393-9d6b-8b376dba07cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18bcbbdb-aa82-4bd0-a3a5-8eeda2af45fd)

* [**IMPORTANT**]

1) First generate the **ranges** of the addresses, to check if they are **continuous** or not.

> We are having **/24** so we have **first 24** bit as **network ID**, so after that generate the **range**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6bc85c3-5247-4f76-9f28-5137bc69670c)

* Rule **1** satisfied.

2) Check if the **total size** of the network is in **power of 2** or not, which is **2 ^ K**.

* Each network size is **2 ^ 8**.
* We are getting **(2 ^ 8) * 4 -> 2 ^ 10**.
* Rule **2** satisfied.

3) **First address of the first network** should be **divisible** by the **network size** which is **2 ^ 10**.

> We should get **10 0's** at the end of the **first address of the first network** then only that **address** is **divisible** by the **network size** which is **2 ^ 10**.

* We are not getting **10 0's** at the end so **first address of the first network** is not **evenly divisible** by the **network size** which is **2 ^ 10**.
* Rule **3** not satisfied.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dea564f-58df-459c-bd18-6839de0fe71e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45953847-41b7-4a94-aee9-249df4873aa9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b5a983b-2f09-4ca0-aea3-fdb4c3b7600e)

* As, Rule **3** not satisfied, so **aggregation** failed.

## Computer-networks-network-address-translation-ip-address-flow-control-and-transmission-delay (13) [8th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce06a0c8-08ed-40ec-9e5d-90c2656ba7df)

* **Yes**, **supernetting or aggregation** can be applied on **IP addresses** also, they need not to be **networks**.
* What is the supernet mask?

* Hosts ->  2 ^ 6
* Host ID(HID) -> 6 bits
* Network ID(NID) -> 32 - 6 -> 26

> **supernet mask** -> **20.10.100.0/26**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb24ef0d-1e45-4d82-8c51-b6fa7d3072ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/049890c1-9577-46a0-87a1-a6d3aad9dc8b)

* Basically Subnet, supernet, block, network everthing is the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1308ee79-1780-45cd-b78a-ea992b121e66)

* Continuos -> **Yes**
* Size in power of 2 -> **No**

> THe Size of the network is **32 - 0 + 1 -> 33**, which is not a **power of 2**. 

* So, this network cannot be a **supernet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89e1a143-17d1-4345-a214-5ea06eca1abd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b108ada-5b95-4e2f-bfd7-c8332d70679f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46ffe116-a13c-4e57-96d5-3ea7cd028dd1)

* **Blocks** are not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69caa18a-c738-439c-863a-9a40da06d8e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b21d1779-ac81-4a22-a269-2bf69469370b)

## Private addressing or Network Address Translation(NAT)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f2bed89-6e47-4e19-a7bb-2b402d4af5e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53b167f7-e1ff-4018-9a71-f48d61908b8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9173394-f811-4d8b-825f-7662112aa181)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc4ece84-a2e9-4e97-ac9c-bb254024f3a3)

* **Class A** -> 2 ^ (24)
* **Class B** -> 16 ^ (2 ^ 16) -> 2 ^ (20)
* **Class C** -> (2 ^ 8) * (2 * 8) -> 2 ^ 16.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/314095bd-3f2e-49c5-b0ab-ea954933ea7d)

* Taking an IP address and changing it is nothing but **Network Address Translation(NAT)**.
* Network address because IP address is also called as **network address**.
* **Network Address Translation(NAT)** is nothing but **changing the IP address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bee8efa6-49dc-41da-9419-ccc8947b1899)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18af2804-42c2-4d1e-9790-5b13fcc2f129)

* The **disadvantage** of these is that, the **entire process** is going to be **slower**.
* The **entire process** is **time taking** which is a **disadvantage**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12a6b700-2ff6-499e-9494-9f00ddf6ef1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00f74a32-7f7e-4278-9576-e9d8033846aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/890d1089-1191-4eb4-b4a9-84e755cf6f2f)

* **No public IP address** can be **same** for **two networks**.

## Flow Control

### Delays in Computer Network

1) Transmission Delay(Tt)

* The host is having a **packet**, now the **time taken** by the host to transfer the entire packet onto the wire is called as **transmission delay** of the **packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/016f2142-0c93-48ef-a7aa-cad9697086e8)

* The **transmission delay** is for a **data packet** and not for the **host**.
* We are trying to **transfer** the data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e70139ee-23e5-4253-8f08-0d99a1b489f1)

* What is the **bandwidth** of the link?

> **1bps**

* **1bps** means that in **1 sec** we can put **1 bit** on the link.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd85e697-baa1-434c-a91f-4f7b93623a54)

* The bandwidth is **1bps** and we have **10 bits** as the packet size. How long will it take to send the packet?

> 

* L -> Length of the packet
* B -> Bandwidth
* Tt -> Transmission Delay
* Tt = L / B secs [**IMPORTANT**]
* **L and B** must have the **same units** so that we get the **correct answer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/873614ce-7a6f-4f10-b4dd-7e008e5c18be)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebb8b713-e8ba-40a4-b5b9-9563397ecaf4)

* L = 1000 bits
* BW or B = 1 kbps -> (1 * 1000) bps -> 1000 bps. [1 kbps -> 1000 bps]
* Tt = L / B -> 1000 / 1000 -> 1 secs

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/683c1928-696e-493b-b9ec-8d8c17ba4415)

* If in **Bandwidth** then:-

* Derived from **speed** and it is in **decimal number* system so **base 10** is used.  

1) K -> 1000
2) m -> 10 ^ 6
3) G -> 10 ^ 9

* If in **Data** then:-

* Derived from **bits** and it is in **binary number* system so **base 2** is used.  

1) K -> 1024
2) m -> 1024 * 1024
3) G -> 1024 * 1024 * 1024


* L = 1 kb -> 1 * 1024 -> 1024 bits
* BW or B = 1 kbps -> (1 * 1000) bps -> 1000 bps. [1 kbps -> 1000 bps]
* Tt = L / B -> 1024 / 1000 -> 1.024 secs

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d82a2a1-efec-48f5-a08d-09eba41bc66e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9267fed1-1b18-4e30-907f-74d31d5f2166)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a42302e-e1f1-40e8-8672-c10ef63d4602)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d020e31-74df-49bf-ae1e-3a6c4951875e)

## Computer-networks-transmission-delay-propagation-delay-queuing-delay-processing-delay-and-flow-control-method (14) [8th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f9d72c9-f32c-40ac-8151-b1ddc255ffce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be100dbe-2bb2-4c00-8e31-d2680879bb78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcb54bfa-d85f-4102-a4bd-0e87ba5a4171)


## Propagation Delay

* Time taken for one bit to travel from sender to receiver end of the link is called as **propagation delay**.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70a0364a-46b9-486a-99ad-0a49350bbf3c)

* Propagation Delay **depends** on:-

1) Distance of the link(d)

* Propagation Delay(Tp) = (Distance of the link(d)) / Velocity(V)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6eec0d29-90d7-4f35-bb01-2d3eb9be21ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/734f07a7-fbcd-4c39-b010-db281d11f5d4)

* d = 2.1 Km -> 2.1 * 1000 -> 2100 m
* v = 2.1 * 10 ^ 8 m/s -> 21 * 10  * 7 m/s
* Propagation Delay(Tp) = d / v -> 2100 / (21 * (10 ^ 7)) -> 10 ^ (-5) secs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/247b8f59-3113-4d61-b7a6-6c56389f9b96)

* 1 Micro sec -> 10 ^ (-6) secs
* 1 mili sec -> 10 ^ (-3) secs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/541658a3-c5d9-45b7-8e24-3b361fb13ff7)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afedc54a-ea26-46c6-833c-74f8ff4ff73d)

* Queuing Delay.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d728ce56-57c1-4dbb-b241-15061788dcdb)

* Processing delay.

* **Queuing and Processing delay** they **depend** on the **speed of the processor** at the **destination**. Therefore, it is not easy to compute **Queuing and Processing delay** times.

* So, **Queuing and Processing delay** time sa re generally considered as **zero(0)** unless they are **given**.
* In most of the cases, they will not be given.
* We don't worry about  **Queuing and Processing delay**.
* We worry about what the **Transition delay(Tt) and propagation delay(Tp)** are.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e08e99ad-e6ac-422c-b29c-3bdc6cf86df0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15cc0807-873d-4b5c-a06b-b404cf21e78b)

## Flow Control Methods

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32c7989b-3609-48c0-a08e-75bbb8429e9d)

* Flow Control -> A fast sender should not overload the receiver. Stopping a **fast sender** so that the **receiver** can actually process the **packets**.
* Basic **Flow Control** is **Stop and Wait**.
* Every receiver will have it's own speed right.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/567cda18-d05e-462a-9ca9-4141f8d91d46)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fe6eff6-252d-41a6-8fcc-6edad27afd08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4e2db60-2a49-4944-9254-45f293008e2a)

* **Stop and Wait** -> The name itself says that the **sender** should send **one packet** and it should **stop** and it should **wait**.
* **Wait** for what?

> **Wait** for the **receiver** to send the **acknowledgement** that the **receiver** has received the **previous packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca77bfbb-7487-444e-9694-30ace280c773)

* The **sender** should always **send** the **packets** at a **rate** or at a **speed** in which the **receiver** can receive those **packets**.
* This is why **flow control** is required.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/052c2bfb-038f-47cf-9cac-c78cc10592b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/356f784d-4643-43a1-9c42-dbf6b1df1360)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c51aef1a-c60a-4800-9560-91342ad99811)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2969a8d1-2bba-432e-b928-56f61821d1ac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2586e321-61aa-4b8d-98ee-feff7a5bd1e1)

* Every **receiver** has to do **flow control**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d7f395f-313a-4657-ad87-393d00739a92)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbbcdba5-8b16-4d72-b436-c8f39470e75d)

* We are **not interested** in the time at which the **first bit** reaches the **receiver**. We are interested in the **time** at which the **last bit** reaches the **receiver**.

* That's is why we see that the **entire packet** is **transmitted** and we see that the **last bit** travels to the other side.
* That is why it is **(Tt + Tp)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d742ce04-b6ef-4cfd-ae61-99eec156cb23)

* What happens on the **other side**?

> We are going to have **Queing delay(Tq) and processsing delay(Tpro)**.

* We will consider them as **zero(0)** because they will not be given in the question.
* If given then we will consider them otherwise we will not consider them. They are **not important**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57c9aecf-e449-4053-ad41-6748f19098f7)

> **Sender** is sending the **data packet** and the **receiver** has received it. Then, the **receiver** has to send the **acknowledgement**  and for the **acknowledgement** packet also there will be **transmission delay**. For the **acknowledgement** packet also there will be **propagation delay**.

* Therefore for the **acknowledgement** packet also we have **transmission and propagation delay**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4336834-5b8d-4964-85c1-a9a9cb481a9a)

* Generally, the **length of the data packet(L_Data)** will be **much more or very high** compared to the **length of acknowledgement packet**.

* Therefore the **transmission delay** for the **packet(Tt)** is actually ***very high** compared to the **transmission delay** of the **acknowledgement** packet(T_ack).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9049f0b3-158e-48c8-a646-996fc486cf49)


* **Transmission delay(Tt)** depends on the **size of the data**.
* **Propagation delay(Tp)** doesn't depend on the **size of the data**. It is just the **last bit**.

* It is either a **bit** in the data or a bit in the **acknowledgement packet***, both are travelling with the **same** speed. 
* The **last bit** which is the **Propagation delay(Tp)** present in the **data packet** or the **acknowledgement packet**, they are **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/243468f4-141d-406e-b806-43e920be5b40)

* **Transmission delay(Tt)** of the **data packet** is **much greater** than the **Transmission delay(Tt)** of the **acknowledgement packet**.

* It is because generally the **acknowledgement packet** is **smaller**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab301a6a-9fe3-4e5a-9aeb-3879b02b4917)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9846e70-61f4-4458-bb92-5930ee84d1ee)

* **Propagation delay** is going to be **same** for **anything**.
* **Total Time taken** in order to transfer **one packet** and get back the **acknowledgement** is:-

* **Total Time taken** -> Tt + Tp + Tp -> **(Tt + 2 * Tp)** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e806b42-58f9-48a5-987a-95caa89c9fb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29e9e5bf-4b2e-4179-b086-f7a14d49f51f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d45e6b9-e81e-4c38-bdd8-c52300090788)

* [**IMPORTANT**]

### Efficiency

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4665a0f4-f5e4-46e2-a7f4-9d14bb6ae1b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0a823b8-f1a0-498b-a66e-5fca45bb53fb)

* Efficiency(n) = 1 /(1 + 2 * a) [**IMPORTANT**]
* a = Tp / Tt. [**IMPORTANT**]

  ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/735f7343-9f7e-464f-8e02-2b3cf12f5290)

* **Effective bandwidth, throughput, bandwidth utilization**, all of them are **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbc5ae54-c9dc-463d-accb-4b28c4853f82)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/993dad75-5b53-4309-9e8b-310bb1f90234)

* We know, a = Tp / Tt.
* We know, Efficiency(n) = 1 /(1 + 2 * a)
* We are dividing **(Tt/(Tt + 2Tp)) * B** by **Tt**.
* We got **(1/ (1 + 2 * a)) * B**. [a = Tp / Tt]
* We got **n * B**. [Efficiency(n) = 1 /(1 + 2 * a)]
* So, **Throughput OR Effective bandwidth OR Bandwidth utilization** is **Efficiency(n) * Bandwidth(B)**.

* **Throughput OR Effective bandwidth OR Bandwidth utilization** -> **Efficiency(n) * Bandwidth(B)** -> **n * B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/daa6fb2a-c651-49a2-950e-7c895f12d1ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98542220-4bfe-4e71-a9c1-49971439c3e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4b5eab5-f559-47b0-bf6c-54c582bc8a4e)

* [**IMPORTANT**]
* This is the **standard formula** we are going to use in all of the **protocols**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f39e214-a003-4879-af3e-fe13d24e6737)

* Summary [**IMPORTANT**]
* **Tt and Tp, throughput** are **standard formula**.
* **Efficiency(n)** formula is only **applicable** for **stop and wait**.
* For other **protocols**, the **value** is going to **change**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/779dcca8-6bd3-402e-b0af-6be3f1113c6d)

* **Round Trip Time(RTT)** -> What is the **time taken** for a **bit** to go from **one end to another end** and comeback from the **other end to the original end**.

* **Round Trip Time(RTT)** -> 2 * Tp -> 2 * (Propagation delay).
* In **Round Trip Time(RTT)**, we consider only **Propagation delay(Tp)** and not about **Tt**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/698956c8-5c0f-4d90-acb6-b5e9d3e95310)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8045dd55-98bf-480f-ac73-0fa3a8f6e4b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/279f4f24-0293-4dab-9139-d7a2e76d7ee2)

* **Round Trip Time(RTT)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb2e42f8-aa96-4eda-a4e8-b7194ca1e9d8)

## Application protocol (15) [8th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6aab98dd-ae2f-4d36-968b-3ca0f661fd4d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/043e8900-198a-4398-82ef-6d463eed7b5c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37e19233-1b19-4211-bd28-5633eb292859)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3b1e10f-d7df-41a9-a417-4ce7916b9ef1)

* If efficiency has to be **50% atleast** then **Tt and Tp** will be in the ratio of **Tt >= (2 * Tp)** for **stop and wait**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cdfa35c-95af-4281-9e86-6e82bdabfe90)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e772a0e-ad86-49ac-b699-c6c7d6050b76)

* If **efficiency** has to be **50% atleast**, then what is the **min. packet size**?

> **L >= 2 * Tp * B** [Tt = L/B]

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f4aa688-1277-4514-9cde-3ece918c7feb)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfdd1ee2-5e44-44ce-a0a5-3781103afc58)

* L = ?
* L >= B * 2 * Tp
* L = (4 * 10 ^ 6) * 2 * (1 * 10 ^(-3))
* L = 8 * (10 ^ 3) = 8000 bits.
* L = 8000/8 -> 1000 bytes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c17f86a9-ffab-42ad-9070-c26944aa1d6d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0dd74ec-d835-4b67-9d82-ac42c7f768df)

* 8 MB -> Mega Bytes
* 8 Mb -> Mega bites.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3974b0a-3819-4ec1-98e2-f3f81c330e7a)

* V -> Velocity -> Constant.
* B -> Bandwidth.
* d -> Distance
* L -> Length of the packet.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/002f5500-75a9-47e4-bb7f-e73d04ebf2b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/365f3db6-704a-485d-b469-1ec8619fbd66)

* **Stop and Wait** is **more suitable for LANs**. It is **less suitable for WANs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4feccb89-15b3-4550-aab8-7605bfc0ee58)

* **Stop and Wait** is **efficient** for **big packets**. It is **less efficient** for **small packets**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a507a91-457a-4928-971a-dac6072efca1)

### Problems with Stop and Wait.

#### 1) Data Packet lost problem

* Similar to **deadlock** in **OS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eeab9f93-922a-4757-a128-03c6998291d4)

* We are going to add a **Timeout Timer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a061d8d5-a73e-44af-b981-3732af9583f7)

* When we don't get the **reply**, we **transmit** the **data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f91df07d-a5ad-4c30-bf80-f1296793e186)

* What should be the size of the **timeout timer**?

> **Timeout timer(T0)** should be **atleast size** of **T0 >= (2 * Tp)**.

* If it is **less than (2 * Tp)** then even before the **acknowledgement** has arrived, the **timeout time** will occur and unnecessarily we transmit the data even though the **data** is **already received**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/776d346d-48c5-4bb8-9621-7eb0c7f79215)

* If **Timeout timer(T0)** is **too small**, then we would have **unnecessary retransmission** of the **data**.
* If **Timeout timer(T0)** is **too large**, then we would have **less efficiency or efficient** in sending  the **data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5a4458b-8d2b-41fa-9d42-33d2b550bd11)

#### 2) Acknowledgement lost problem

* Retransmission will happen.
* We will wait for **timeout time**.
* After **timeout time** has happened, then we are going to send the **same data**.
* From the **sender** side, **same** data is **transmitted**.
* From the **receiver's** side, it will think that it is **new data**.
* It is now called as **duplicate packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7dfd9ca1-2d64-4c97-a515-4064d71e40d1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a50ec912-40d5-489c-83cc-09fd606739d7)

* When **Acknowledgement** is lost, we might end up in a situation called as **duplicate packet**.
* How we can solve the **duplicate packet** problem?

> **Sequence Numbers**.

* To Timer -> Timeout Timer.
* Even though a packet is sent and the **acknowledgement** is **lost**. Again, the **same packet** is being sent, the packet will be discarded by the **receiver** but still **acknowledgement** will be **sent**.

* So, **acknowledgement** must be **sent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52b1939f-f2e3-4955-be19-0b14635c9cee)

> As a **sender**, if we don't get the **acknowledgement**, we don't know whether the **data** is **lost** or the **acknowledgement** is **lost**. What is the safest thing, the **sender** can do? The best thing to assume is that the  **data is lost**.

* **Data is lost** and we retransmit the **data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5afa1d2-f3d6-4b41-93d1-63557513590d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a411e22-0ae4-49e8-950f-c760c4cbcbe5)

## TCP (16) [8th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35489012-3fa6-4c9b-939d-acf815a60e26)

* We are adding **sequence no** to the **data packet**.
* Where will be the **sequence no** stored?

> **In the packet itself**.

> The **data packet** is going to have **data** and **header**. Inside **header** there is going to be some field,     which is called as **sequence numbers**.

*  **Sequence number** is a **binary number**.
* AS the **numbers** increase, the **seq number** field also **increases**.
* **Seq number** size increases, the **header** size **increases**.
* So, overall **data packet size** will **increase**, if we keep on **increasing** the **seq number**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df31e557-dc5b-4206-8053-d4b795b222fc)

* Do we need so many nos?

> **Sender** is going to sent **one packet** at a time. So, **sender** has to **save** one packet at a time.

* This is called  as **buffer/window**.
* Whenever a sender sends the data, it is suppose to save the data in it's **buffer**, till the **acknowledgement** comes back. Once the **acknowledgement** comes back, it can actually free up the **buffer** and it can store the **next packet** being transmitted.

* In **Stop and wait**, anytime there will be **only one packet** outstanding, which is **outstanding = 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a46d915-de70-40f4-9485-077313f8372a)

* Since, it is **stop and wait**, we are always going to send **one packet** and we are always going to **receive one packet**.
* The packet which is to be **transmitted** is going to be stored in the **sender window**.
* The packet which is **receive** by the **receiver** is going to be stored in the **receiver window**.
* Once we get the **acknowledgement**, the sender will take the **next packet** and once the **packet** is taken for **processing**, the **receiver window** is going to wait for the **next package**.
* So that there is **no confusion**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42f2c3dd-3e40-43bf-b63c-26be3d21b4b7)

* To distinguish between the **next and previous** packet, we just need **two nos(0 and 1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad8bd11e-277c-4051-b5e7-aed191ac0507)

* If we need **two sequencce nos**, then how many **bits** we require in the **sequence no** field?

> **1 bit** -> 2 ^ 1 -> 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9666b7b3-868c-4361-b3c3-f2883c55dc98)

#### 3) Acknowledgement Delayed

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f265423-d772-42a4-8a0e-c83a028c1222)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4eba2d0-12ab-4e0a-a893-3e84b1640983)

* What will **sender** think?

> **Sender** will think that **data packet 2** has been **received** by the **receiver** and the **acknowledgement** packet has been sent by the **receiver**.

* THis is called as **Missing Packet problem**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad5494a3-d7c7-4ec7-a8b3-1ee1bcbcd63b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/903abc01-ae4f-48fa-892b-2add9072284f)

* Solution -> Give **sequence nos** to **acknowledment packages** as well.
* **Acknowledment no** in all the **protocols** will always say **what is expected next**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dae354a-603a-414a-8c6a-84cc20381506)

* We are expecting **packet 1** next.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bacd0b32-fdf8-475f-bad6-d68cfde15bab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b5b0880-9b06-4e89-923f-ca66753717f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c47c6f7e-84d6-492d-9d78-871905c33f77)

* If we sent **Data packet 0** and we got **Acknowledment no. 1(A1)** means that **receiver** is **expecting** **data packet 1**.
* If we sent **Data packet 1** and we got **Acknowledment no. 1(A0)** means that **receiver** is **expecting** **data packet 0(D0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d812d4c-3c40-4ba9-bfcf-52b4ee9a5bb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5e924da-9198-4594-98fe-9abebb4d7585)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1dbb79f-1b3c-4cd7-bd7f-b47b9847ac90)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b370b853-e290-46dc-9eed-973390a71345)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b90f3ea6-c016-4b2b-bbdd-6db1896fa7a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f9aa44e-3d89-42c8-a605-e68c112e2bd4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57ddbe19-af2c-4b42-b657-1ffd8886037d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e156987d-b27f-4593-8d0e-0d17e408a4a1)

* **Infintie GP**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32cc4165-fc41-4c1c-a433-a17bffee468d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e58ec0f2-5a81-491e-a593-7dc5ba59fe3b)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86c799ee-80d4-4360-82e2-d4cef77445f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a976511e-c032-4134-83af-0199737a0ae5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a8ffc4c-8c05-4b96-b1f9-0c4b099b838c)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cd1bef4-f41c-4456-b72c-0e70c7f3f0aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/484eb443-9c80-450c-a03f-ba4260349bc4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c72ba9b-f605-4a0a-b899-31b9535cfa92)

* Total Time -> Tt + Tp + Tta + Tp
* Efficiency -> Td / (Total Time).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a754ba0c-185c-4237-a0d9-b5169d4788ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f6bf0c0-0f82-4775-8be1-4db47be84bf6)

* Throughput -> (Anything) / sec [Anything per sec]
* Here **Throughput** means -> bits / sec [Bits per sec]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7d39b24-cb82-4706-a2b4-b4910731f5d7)

* Throughput -> **efficiency(n) * Bandwidth(B)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ad4ebee-d54e-4a31-b1c1-7013db010142)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d6fb5ba-7177-498b-bc5a-0091bfec88ea)

## Hardware-and-various-devices-used-in-networking (17) [9th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03290471-9cef-4bcd-bf5b-d13e3dca5e25)

* We call a link or channel as **pipe** also.
* Bandwidth = 1bps
* It means that we can put **1 bit** in the **pipe** in **1 sec**.
* Tp(propagation delay) = 10 secs.
* For the **first bit** to reach the other side, it will take **10secs**.
* By the time **first bit** moves to the **next place**, we can put the **second bit**.
* Therefore, in **10 secs** we can actually put **10 bits**.
* The **pipe** itself is holding **10 bits**.
* When someone is **holding** something we can call it as **capacity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b53d85e-fd73-41e8-88c8-a1026afeb888)

* So, the **capacity** here is **10 bits**.
* Capacity = Bandwidth(B) * Propagation delay(Tp).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3af61adb-ad9b-47d6-a527-aff4fac805c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d5e654f-58e1-466d-939a-44b5b5db5d16)

* **Half Duplex** -> It means that **at anytime**, we can only send the **data** in **one direction** only.
* **Full Duplex** -> It means that **at anytime**, we can send the **data** in **both the direction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/181f65c4-01dc-4175-a6f6-c4862384f6bc)

* When the **capacity is high** then it is called as **thick pipe**.
* When the **capacity is low** then it is called as **thin pipe**.
* If we have to **increase the capacity**, we can **increase the bandwidth**.
* If we **increase the bandwidth**, the **capacity** is going to **increase**.
* B = 10 bps 
* It means that we can put **10 bits** in **1 sec**.
* If we **increase the propagation delay(Tp)**, the **capacity** is going to **increase**.
* If we **increase the propagation delay(Tp)** is nothing but **increasing the length**.
* We can thing of **bandwidth** as the **area of the cross-section**.
* Capacity of pipe = (Area of cross-section) * length

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be47b622-9103-471e-bb3f-69b4f17b91cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87673799-44cf-4a34-b118-be36262dfdf8)

* If the **capacity of the link** is **high** then **efficiency decreases**.
* If the **capacity of the link** is **low** then **efficiency increases**.
* So, in **stop and wait**, when the **capacity is very high** and we are using it for **1 packet** and all of the remaining space in the the **pipe** is not used then the **efficiency is low**.
* So, in **stop and wait**, when the **capacity is small** and we are putting exactly **1 packet** and we are filling the **capacity** of the **pipe** then the **efficiency is high**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/257e0615-4c25-4914-9c91-dcd9cc04fd2e)

* In order to **increase** the **efficiency**, we are going for something called as **pipelining**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f7fe9be-90d5-493a-b470-6dcced899d35)

> **Pipelining** is nothing but in a **transmission delay(Tt)** we are sending **1 packet**. In **Tt secs, we are sending **1 packet**. It implies that in **1 sec**, we are sending **1 / Tt** packets.

* In **stop and wait**, we are sending **1 packet** but **1 + 2 * a** packets can be sent.
* Why don't we send **1 + 2 * a** packets?

> This is called as **pipelining**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edd3d644-e68a-4479-942d-ad44e95abe8e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a550723-3c25-484e-a803-df22944b1988)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99765791-a41a-4a2c-b810-829c5552364d)

* **Pipelining** is a theoritical concept. It is implemented in **CN** in **two** ways:-

1) GBN.
2) SR.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d731c449-ca66-4ffc-9e28-f6f79c1f358f)

* Efficiency  -> 25%.
* Filling the **pipe** is nothing but **Pipelining**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89df9ff0-1102-4869-b572-a0b424c684f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fd57d2c-9edc-487b-a3da-303e7e7e6a9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/357711a3-c86f-4044-826b-2b859284f0cb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b7fa2f6-1e3a-4017-afdf-1d3cf4396a7e)

* Acknowledgement of packet 1 came.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3873d55b-b793-4540-bfc8-9bafd6282fb9)

* Acknowledgement of packet 2 came.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53fc70e6-4559-4660-8381-693761915b2b)

* Acknowledgement of packet 3 came.
* In **theory**, it looks like the **window** is **sliding**.
* That's why **pipelining** is called as **sliding window protocol(SWP)**.
* In **practice**, there is **no concept** of **sliding window protocol(SWP)**.
* It is implemented as a **linked list**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c759bf59-1b38-40e8-88f9-b0626188c515)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/531fcded-9cb3-4999-b8d3-1933ba9a69a4)

* **Stop and Wait** is a **sliding window protocol(SWP)** where the **sliding window(SW) = 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93523199-067e-43e6-b944-c0d615a11176)

* Sender Windows(SW) = Receiver Windows(RW) = 1 packet.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dde2af3e-e47b-4d6f-b7d2-d1e580847d59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be2c1136-8f56-4420-a9cf-ec4c479c1b10)

* If the **sender window** is having certain no. of packets which are **outstanding**.
* Can we use **same no** with the **window again**? [Can two packets in the window, have the same no?]

> **No**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59a7d1ed-dd9f-463e-9ac3-24b83ca2f460)

* The **sender** has got the **acknowledgement** that the **packet 0 is lost**. The **receiver** has **received** **0, 1, 2 and 0** packets no problem.
* At the **sender side**, when it gets the message **packet 0 is lost**, **sender** is **confused** which **0 is lost**, first or the last **0**. **Sender** should retransmit the **first or the last '0'**.
* It will not be able to **understand**.
* That is why, always in the **sender window size**, all the nos, should be **distinct/unique**.
* Therefore, if we have a **windows size of 4**, then we should have atleast **4 distinct numbers**.
* We are talking about **sliding window protocol**. It is a **theoritical concept**. We are talking aboout the **sender side**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a23c0af6-2119-4509-902a-30d2a3e9580b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6331cd77-1978-4a37-8f1c-f80c179046ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3b36f49-1288-486c-9fab-23076c8921e8)

* So, we should have **atleast 4 sequence numbers** here.
* In **stop and wait**, we have **Sender window(SW) = 1**, **Receiver window(RW) = 1**. We need **2 sequences**, as we are sending **1 bit** at a time. So we require only **1 bit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc29c6f2-d2a4-4e0c-9d9f-38d609d76925)

* In pipelining, the window size is **1 + 2 * a**. We are sending **1 + 2 * a** packets.
* So the **sender window size(SW) is **1 + 2 * a**, or the **sliding window size** is **1 + 2 * a**.
* Therefore, we need **1 + 2 * a** numbers.
* So, if we need **1 + 2 * a** sequence of numbers then how many **bits** needed/required?

> **No. of bits** -> Ceil(log(1 + 2 * a) base 2) [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209cbf1f-1cbf-4b50-8fae-1efdcd45282c)

* In order to have **10 sequence of numbers**, we need **4 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b993679d-77b9-4218-b7db-fbe4df82da9d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d575853-7527-4f67-beba-bf7a56fa7c41)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59ff24c9-5e04-4900-9a91-8b34df7f7408)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7515f4ee-6cd9-4495-863d-07325643a505)

* We are talking about **sliding window protocol(SWP)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/743870cb-9e31-4f32-b20c-45c1b29731ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03787735-7ee2-496c-a937-26651c8af1c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4a74f59-dcad-406f-8e8a-aaa63802ccc9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/185cb4c8-4d07-4135-bdbd-03d33ddc0678)

> According to the sliding window protocol, we are able to send **100 packets** but we have only **6 bits** in the **sequence no** fields. What happens?

* How many packets we can transmit in the window?

> We are fill till **63** but after that we don't have the **sequence nos**. The **sequence nos** is already **fixed**. We have only **six(6) bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a911f45-c331-414b-84f5-b3141b0677da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d793b7a1-47c3-4e06-965c-ce19abc2a0d7)

* What is the **efficiency**?

> **64%**.

> We could sent **100** but we are able to send **64** so, the **efficiency** is **64/100 -> 64%**. As we don't have the **sequence nos**.

* Sender window size(WS) -> min(1 + 2 * a, 2 ^ n) [n -> No. of bits in the Sequence No. field]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9d38fbd-f62f-450d-b939-3a6c01c71b9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf9b940e-35c4-4bbf-8f3d-c2ba42ae7c1a)

* Sequence no -> 10 bits -> 2 ^ 10 -> 1024.
* Sequence no possible -> 2 ^ 10 -> 1024.
* We have **100** packets and we can put **100** packets in the pipeline.
* So, the Sender window size(WS) = min(1 + 2 * a, 2 ^ n)
* Sender window size(WS) = min(1 + 2 * a, 2 ^ n) -> min(100, 2 ^ 10) -> min(100, 1024) -> 100.
* Sender window size(WS) = 100.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5dabbe8b-eb9c-4a20-93e7-645bd5dbc522)

* So, in a **sliding window protocol**, the Sender window size(WS) is **min** of **1 + 2 * a** and **2 ^ n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6624d647-ce1d-4663-b0c0-33385b36a148)

## Problem-on-ip-addressing (18) [9th July 2023]

* **Stop and Wait** is kind of a **sliding window protocol** where **sender window = 1** and **receiver window = 1**.
* What is asked in **sliding window protocol**?

> **Sender windows size**, **efficiency**, **throughput**, **sequence nos**, **no. of bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e93b1f06-5fdf-45cf-9a3b-ffcb2d8f4223)

## Go Back N(GBN)

* One of the implementations of **sliding window protocol**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1423799-fabc-4b70-8e24-d987b3ab64f4)

* **sliding window protocol** -> Theoretical
* Go Back N(GBN) -> Practical -> Actually used in **CN**.
* **sliding window protocol**:-

1) **Sender windows size**
2) **Receiver windows size**
3) Sequence No

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94a1b434-d612-4c0e-9a38-7108874397e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2805278c-3799-4078-affb-16b9d00e9d34)

* **N** in **GBN** represents **sender window size**.
* **GB10** means that the **sender window size** is **10**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66c14c2a-a9d4-4578-bd01-e2789bba9e7e)

* Efficiency in **GBN** -> (sender window size(Ws)) / (1 + 2 * a)
* **Sender window size** in **GBN** is the **N**. [Point 1]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0003ec61-4ff0-4bfb-b3e4-aa7fa1a704a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fc424d0-edb6-4124-b876-5d83873b5417)

* Receiver Window Size is **1** [Point 2]
* In **GBN**, the **receiver window size is always '1'** and **sender window size is always 'greate than 1'**.
* If **receiver and sender window size both are  '1'** then it is **stop and wait**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98542f12-a492-4dcb-bcf7-7c92b3ff988b)

* Receiver window size is **1**.
* Therefore the **receiver** will always receive **in-order** packet.
* It expect the **packets** in **order**.
* It will discard all of the out of order packets.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbbd65b7-76b9-4a06-856c-6f76846d8e17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c849bb2-1eab-4308-81f4-610da54d7f31)

* **Packet 0** will also be **discarded**.
* Sender will not receive **acknowledgement for packet 1**.
* When a sender gets a timeout for a packet, the sender understands. Sender understand that the **packet is lost** and maybe all of the later packets are discarded.
* Therefore, it will **retransmit** all of the outstanding packets. Which means it is **going back 'N'**.
* That's why it is called as **GBN**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f285748-555b-4c5d-86d5-ae95a98dda60)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94edab2c-e317-4ba2-82ac-90c3bfb5d989)

* **GBN** is designed in such a way that if **one packet is lost** then the **entire window** is **re-transmitted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63368980-796c-4da8-a857-64c846f7a5bb)

* From the **lost packet** we are going back **N**. This is **wrong**.
* From the **last packet**, we are going back **N**. This is **correct**.
* Receiver will never receive **out of order** packets.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90f5d8a5-70e4-4dbd-8f99-c137396331bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bcc8f51-9b74-4a0b-90e2-404c20a1e585)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f64f027e-8f0d-4404-9989-1fc475cee004)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7d72195-0923-48d0-81d8-be22e2c6114e)

* If we do it with **stop and wait** instead of **GB4**, we will get **11** transmissions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/770b10fe-130d-4022-a67c-02cdfe0c0efa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55e2c1c3-d8fe-4f52-95b0-fc9d8b8f3d7a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ac6f026-89a5-47cd-b02a-13a847d02e6a)

* **Stop and wait** is **better** here as it has **less re-transmissions**.
* But in terms of **efficiency**, **GBN** is **4 times** more **efficient** than **Stop and wait**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76647b9a-e802-4578-91f8-216a629c06b7)

* GB3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4544b1e7-dfb5-45fe-a36f-0e893b688634)

* No. of **re-transmissions** in **GB3** for the **previous question** is **15 - 10 = 5**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c5dab9e-694d-4c42-83f8-34087c58465b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1275571d-851a-448a-8a3c-34fd05186b36)

* For **GN5**, we got **21** total transmissions, **re-transmissions** were **21-10 = 11**.
* We can see that as we **increase** the **windows size**, we can **increase the efficiency** and the **no. of re-transmissions** are also **increasing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a15e956b-7733-43b5-8ec9-1d27a7f5865b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3dba38ba-9287-41b0-aecc-b3ab62373b85)

## Types of Acknowledgements in **general**:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/474b1a7e-e602-4b14-b582-81948901244a)

1) Cumulative
2) Independent

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d80fc02e-4c74-4986-b282-b0f08997ca91)

* **GBN** uses **Cumulative Acknowledgement**.
* Why **Cumulative Acknowledgement** in **GBN**?

> We are forced to use **Cumulative Acknowledgement** in **GBN** because of the way it is **designed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4eba5237-645c-45bf-a9da-ed7463cfb724)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90294c69-2172-4b7b-b066-a30c6d3153ba)

## Doubt-clearing-session (19) [10th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e446a7c4-2f6d-4137-a809-06716a62059e)

* Why **Cumulative Acknowledgement** in **GBN**?

> Because **GBN** is accepting **in-order** packets.

* If we get the **acknowledgement no 3** means that **packet no 2** has been received and accepted. When we are sure that **packet no 2** has been received and accepted, so we can be very sure that **pacet 0 and 1** are also received and accepted.
* It means that if **acknowledgement no 3** is received then **packets 0, 1 and 2** are received and accepted.
* If **packets 0 or 1** were lost then as **receiver** only accepts **in-order** packets, it would have **discarded** packet no 2. 
* If we receive one packet and we receive the acknowledgement for that packet, it means that all of the previous packets have all been received. Otherwise we will not receive the **current package**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/daffa550-fed3-4fb0-a738-e243d6c53364)

* One acknowledgement for a packet is going to act as the acknowledgement for the **previous packets** as well.
* For **many packets**, we send **one acknowledgement**. Then it is called as **cumulative acknowledgement**.
* How many is many?

> 

* It is not like we are going to receive the whole/entire window at one time, we are going to receive one packet at one time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93aec008-d496-448c-944f-199fcf02e2ef)

* What is acknowledgement timer?

> When we receive **packet 0**, we are going to start a **timer** called as **Acknowledgement timer**. We are not going to send the **acknowledgement for packet 0**, we are goint to **wait** till the **Acknowledgement timer** is over. At the  end of the **Acknowledgement timer**, we are going to **retransmit** the **acknowledgement no 4**.

> When the **packet 4** comes, we will start another **Acknowledgement timer**.

* Timeout Timer > Acknowledgement timer
* Timeout Timer >= 2 * Tp + Acknowledgement timer [Tp -> Propagation Delay]

> By having the **Acknowledgement timer**, we are not worried about the **no. of packets**. We are just worried about the **Acknowledgement timer**. We will wait for a specific amount of time and it doesn't matter how many packets we receive during that time.

> For all of the packets we receive during that time, we will send **one acknowledgement packet**. It is called as **Cumulative Acknowledgement**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7b9a42a-cb33-4124-b953-36989c367f6b)

* What happens if **acknowledgement time** is **very large**?

> There will be unnecessary **timeouts** and there will be unnecessary **re-transmissions**.

* What happens if **acknowledgement time** is **too small**?

> For **every packet** we will be sending **one acknowledgement**.

> It will reduce to the concept of **independent acknowledgements**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3acad53b-270f-47a1-b1ba-cf2d9c9a7cf0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf17d0fa-3c5f-4e9e-8c97-64dbb9ea6de6)

* Points of **GBN**:- [**IMPORTANT**]

1) Sender Window size(Ws) of **GBN** is **N**, Ws = N.
2) Receiver Window size(Wr) of **GBN** is **1**, Wr = 1.
3) **GBN** uses **cummulative acknowledgement**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00b9307e-a6bc-49e8-89b8-dde249826f33)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0724a4b-bf9a-4f41-aefe-e95a5982560e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46dd03a4-bf4b-474b-a061-ca50f0a37683)

* Ws = N and Sequence No = N
* We are going to have **duplicate packets** problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77d10c3b-ff1b-41a8-b0ce-b7e4e296b02e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b25ffb8b-17d0-45d0-9381-4aa84efc104a)

* Sequence nos should be **greater** but even **one no** is going to be **sufficient**.
* **Available Sequence Nos(ASM)** >= Ws + Wr.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12b0afae-8611-493e-89f7-6abf417a1c54)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5e6e692-b527-48f8-8eac-0e3cde338900)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6206701-4a4a-418d-9029-05e23480d7bb)

* They will give **sender window size(Ws) and receiver window size(Wr)** and ask for the **sequence nos**.
* They can give **sequence nos** and ask for **sender window size(Ws) and receiver window size(Wr)**.
* They can say the sequence no fields has **'k' bits** and ask for **sender window size(Ws) and receiver window size(Wr)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09c56b8a-ee3f-4613-8384-00d01facf90e)

* **GBN** is over.

## Selective Repeat(SR) protocol

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecb171b3-383a-4130-b8a6-d33278638192)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f70bc2f4-d900-49c0-a5ab-70e96869fd32)

1) Sender Window Size(Ws)  > 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/416280f7-7d58-41cf-ab34-735eff581753)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7852381d-ca61-4112-80cf-097fdff0730a)

2) Sender Window Size(Ws) is **equal** to **receiver window size(Wr)**, Ws = Wr.

* Unlike **GBN**, **receiver** accepts **out of order** packets as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f08ed5e-ce6e-4270-ae9e-0100ead1a5f6)

* In **selective repeat** protocol, it will only **re-transmit** packets that are **lost**.
* That is why it is called as **selective repeat** protocol.
* We are **selectively selecting** a packet and sending them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b9cf1f4-37e4-4343-8984-04ecc95f44d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f75062d-7254-445e-859f-9592c15cff9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/235cb394-440b-4ad1-b093-3a3a73e56a88)

* 1 2 3 4 5 5 6 7 8 9 9 10
* Total transmissions is **12**.
* **Re-transmissions** is **2**.
* **SR** protocol is **same** as **Stop and wait** protocol in terms of **Re-transmissions**.
* **SR** protocol is **same** as **GBN** protocol in terms of **efficiency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6fb85b6-db24-4dc6-ace8-8415c5be21ff)

## Problems-on-sliding-window-protocol (20) [11 July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bebd8d1b-ece3-4db6-9580-5ef5181c86f0)

* **Sender window size(Ws)** doesn't matter because whatever is the **window size**, we are always transmitting **only one packet** at a time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b38f324-34d7-4b50-b6c2-2b2da7e3124c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f1c1e70-e167-4214-b987-9affc41fd367)

* **SR** is faster than **GBN** because in **GBN** when a **packet** is **corrupted**, the **packet** will be **discarded silently**. Only after the **timeout timer**, the **packet** will be **re-transmitted**.

* In **SR** protocol, when a packet is **transmitted** and if it is **corrupted**, then **immediately** a **negative acknowledge** is sent. Therefore, the **receiver** will understand the **packet** is **corrupted** and it will **re-transmit** the **same packet** without waiting for the **timeout timer**. Therefore, it is **faster**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ece2e624-bc32-4214-a4c5-3ec5dae8d4d1)

* **Cummulative acknowledgement** is **better** than **independent acknowledgements**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/593c5f5f-ea01-49bc-83a2-a8559abaae0d)

* **SR** should go with **Cummulative or independent acknowledgements**?

> We should go with **independent acknowledgements**.

* In **SR**, one acknowledgement is for **one packet** only. It does not talk about **previous packets**. Previous packets might be **lost**.
* That why we use **independent acknowledgements** for **SR**.
* **SR** uses **negative acknowledgements** when the **packet** is **corrupted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf433e00-a3cb-4dbb-b45b-f447dc0457d2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93f8f4fe-b653-4ab8-9bb1-4aa486836cec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ebda79a-ea41-43fd-a1b3-55fd0b3be2a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3455cdc6-2b0c-4c7f-89e8-f1f39e8dbc21)

* [**IMPORTANT**]
* Summary.

* In order to implement **SR**, we need **'N' size buffer at the sender** and **'N' size buffer at the receiver**.
* Therefore, the **memory requirement** is **more** in **SR** compared to **GBN**.
* In **GBN**, the **memory requirement** is **N + 1**.

* Sender Window size and Receiver Window size should be **less than equal to** the **Available Sequence Nos(ASN)**, in whichever protocol we are talking about.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/327f53af-f260-4a8c-9d98-faf5264efe8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b50528c-90a8-4e3f-b1b3-9fcff4cd9148)

* Stop and Wait -> Ws + Wr <= ASN
*                  1 + 1       2
*                  N + 1       N + 1
*                  N + N       2 * N

* In **sliding windows protocol**, which is a **theoritical concept**, where we only talk about **sender window size(Ws)**. Based on the **sender window size(Ws)**, we are going to talk about **Available Sequence Nos(ASN)**.
* In **sliding windows protocol**, which is a **theoritical concept**, we generally don't worry about the **receiver window size(Wr)**.

* When it comes to **practical** side we have to worry about the ***errors**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2efc785f-d1c4-4d2d-bd74-9f9b6678456d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1c19436-e8ea-46de-8d73-bba84b577618)

* In case of **memory**, **GBN** is **better**.
* In case of **sequence nos**, **GBN** is **better**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a423f2db-f0e4-4f5c-a9e2-0ba076f939fe)

* In case of **re-transmissions**, **SR** is **better**.
* **No. of re-transmissions** is **high** in **GBN**.
* As the **No. of re-transmissions** is **high** in **GBN** so the **bandwidth requirement** would be **high** as well compared to **SR**.
* So, **GBN's** **bandwidth requirement** is **higher** than **SR**.
* In case of **bandwidth requirement**, **SR** is **better**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e203d7b-1c99-46b2-a096-68d9cb0c3bff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74f6dcde-b09c-4d7b-b1a3-d41baedeea27)

* yes.
* **Searching logic** has to be applied to the **sender** side when doing **re-transmissions**.
* **Sorting logic** has to be applied to the **receiver** side as we are accepting **out-order** transmissions.
* **Searching and Sorting** logics are very bad in **linked list**.
* We need **Searching and Sorting** logics in **SR**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/719e9c1f-0056-47c4-baac-94f93e010602)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e891a8e-0693-4b15-807e-6c9e5e3769c0)

* **No searching and sorting** required in **GBN**.
* **GBN** is very **simple**.
* So, **GBN** takes **less CPU**.
* **GBN** takes **high bandwidth**.
* If **CPU is less powerful** and the **bandwidth is high** then with which protocol should be use or go for/with?

> **GBN**.

* If **CPU is powerful** and the **bandwidth is moderate** then with which protocol should be use or go for/with?

> **SR**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7953ca0a-999e-48a6-a1d2-d36a74b2b5d2)

* In **SR**, we use **negative acknowledgements(NAK)** for **corrupted packets**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58a1b0ab-db47-4b13-b4e0-8bd6cb65c45b)

* In case of **acknowledgements**, **SR** is **better**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dca02525-7b1a-4531-ab36-4c95b844f2f0)

* Depending on the situation, either **SR or GBN** is **better**.
* **Efficienty** is **not better** in **stop and wait**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/592537f5-434b-4fb5-8894-0781af2f393b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69b8be2c-c757-4433-a854-11fb535f1ec4)

* Generally, in the **wireless connections**, the **error rate** is **high** and in **wired connections**, the **error rate** is **low**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/695a7251-5ade-4a41-84ef-a1a1a2f040f5)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40c13fb3-e3dc-4e21-8339-b31fd71260ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b054407-4092-44fb-87fd-44e92d2a726a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3421ba79-4d51-468c-b60f-83d1aa8438b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dd1de31-afd3-479e-a56a-582b386ac18a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02af2854-9a9f-4821-90e4-36cbf1626e4b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44732450-8570-49c6-a5da-8b9332f1e51b)

* Question
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc0eb351-3d1e-4e3c-8380-c0aad73e3e03)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4997786-8329-440e-92b4-b729c349b699)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59aa1b6d-c1d6-4d7e-9f8d-b90ef4acdf05)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92dd22d5-49fb-4490-9376-353fefeb9177)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31580a5c-654f-4253-8949-e2177484b9d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6023dc02-6071-4e4f-bc82-bad29040d012)

* Question.

## Problems-on-lan-technologies (21) [12th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d242fb74-aca9-4019-9baa-0ab18310c2c6)

* When a **wireless communication** is given and the **speed** is not given, then we have to take **speed = 3 * (10 ^ 8) m/s**.
* When a **wired communication(optic fibre)** is given and the **speed** is not given, then we have to take **speed = 2.1 * (10 ^ 8) m/s OR 2 * (10 ^ 8) m/s**.

* **Channel utilization** is another name for **efficiency**, Channel utilization = Efficiency.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ec6ad46-0853-48ba-8fb3-29c8b0b8822b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32a68517-6ac4-445f-aea6-3d90d6d12270)

* **a** is a **ratio**, it is simply just a number. It doesn't have **any units**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57771000-5f70-45f6-b57a-b9ee2173d692)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3dd93e92-612d-401c-a0a5-66f3d7dbfe53)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/892477d1-8351-4853-b86e-866f596e7eb0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6404bee4-0b9f-4cf0-8e9d-6e30033f463a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f866858-5b7b-4257-8994-799cd25ea8ce)

* 3 bits are **not sufficient**, we are going for **4 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/279967a0-8d3e-4af6-938c-fecd9ea75307)

* When **propogation delay** is given directly, we don't have to do **anything** else.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25c6881f-9cfc-4e45-a72d-bc35778180d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d156a5b-eef5-4433-b47a-4bae2fbdcd99)

* **Flow Control** is all about stopping a **fast sender** from sending **too many** packets to the **receiver**.
* When we are computing **1 + 2 * a**. In **a** only, **Tp** is used. 
* If **round trip time(RTT)** is give then we have to **divide RTT by 2** and we will get the **Tp**.
* We have to use the **Tp** in **a**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f47cf585-1855-4b7c-b4e3-af5c6fd73056)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c4ebd5d-e562-4401-bedf-49dcc0ce1fa4)

* Yes. But that is **wrong**.
* **RTT** time is the time taken by a **bit** to go from **one end to another end and come back**.
* **RTT** should not include **Transmission delay**.
* **RTT** and **Transmission delay** have nothing to do with each other.
* **RTT** is a **constant number**, it does not change.
* **Transmission delay** is **not constant**, it changes from **packet to packet**.
* **RTT** should not change depending on the **size of the packet**.
* **RTT** is actually dependent on the **length of the network/link**, which is generally a **constant**.
* If we include **Transmission delay**, it means that **RTT** is changing **everytime** with the **size of the packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdae8810-d161-4787-afd5-4e318aba676e)

## Access Control

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/434eca29-dc55-4442-b1fe-daffb6725d02)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfb83539-b0ac-493b-ba5e-74fd13e1bcb2)

* When **sender and receiver** are **connected**, they are either connected using **Point to Point Links** or they are connected using **Broadcast links**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48f3bdb9-a013-4a95-8f26-777036436f17)

* **Point to Point Links**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ec7f0ad-4c43-48da-b1d0-27d75023b70e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3ac1a14-0ac8-4402-9244-e4bf2bf287ac)

* **Broadcast links**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86f3ac29-dc69-423c-9690-92b8a1db59e7)

* When all of them are sharing the **common channel** then there is a **problem**.
* The **problem** is that **collisions** can happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a113a3c4-d813-4e87-9ae5-d5cb0f19ee85)

* Access Control -> We have a channel and we have to see that the access to this channel is given to a station and at that time, all of the other stations should stop communicating, otherwise there is **collision**. 

> All of the **methods** are called as **access control** methods.

* Flow Control -> We are stopping a sender from sending too many packets to the receiver.

> All of the **methods** are called as **flow control** methods.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/566c4c96-7fd4-40a5-bdc4-fbeca0fd8093)

* **Acces control** is generally required in **broadcast links**, when many stations are connected.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7ee40ac-00d8-47d7-8ee8-f20046752e82)

* Broadcast Link and broadcast are **different** things.

## Access Cotrol Methods

## Time Division Multiplexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c93b94b-d7ac-4a35-aace-669dee64c83e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9650e194-736e-443c-8a62-b1569af20813)

* If **everyone** wants to **send data** in **every slot** then that is fine.
* If **some stations** does not have **any data** and they if they are given a **slot** and other are having data and they are not able to send it. Then that's a **problem**.
* The **problem** is **progress**.
* **Progress** -> A particular station has **no data** to send but it is still stopping some other station which has **data to send**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ab162fa-edeb-4221-88d1-e09c8c2963da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d94057c-9c94-431c-917c-c77847153197)

> We are going to have **time** and we are dividing it into **many slots**. We are giving **each slot** to **one station**. If the **station** wants to transmit then it is **fine**. If the **station** doesn't want to transmit then we are wasting **one slot**.

* How much should be the duration of each slot?

>

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9465c7b-d092-4369-9f31-b4e14c706451)

## tcpip-problems (22) [12th July 2023]

* We are going to give **each slot** to **one station** in a **round robin** manner.
* Everyone will get a chance in this way.
* There is a **problem** in this **method**.
* The **slots** are **alloted statically** and **not dynamically**.
* The **slots** are also **fixed**.
* If **one of the stations** doesn't want to **transmit** data or don't have the data. Then that **entire slot** is wasted. That's the **problem**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/854663f0-6f49-45dc-ad4e-e5449c5b7c67)

* In terms of **OS**, the problem is called as **progress**. We are having **no progress** here.

* How long should be the **time slot**? OR What should be the length of the **time slot**?

> We have to thing about the **worst case**.

* T_slot = Tt + Tp.

* Tt -> Time taken to transmit the data.
* Tp -> Time Taken to propagate the bit from one end of the channel to another end of the channel.
* Each **Tt** is **same** for all the stations?

> We cannot say that. That depends on the **size of the data**.

> We have to assume that **all the stations** have the **same amount of data**.

> We come up with the **worst case size**. We are coming up with the **max size of the packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d4a4e1d-983d-44aa-a75d-318a642bf770)

* yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e34f04e-b519-4073-9238-2fe3d5efd20f)

> The **sender** wants to send a **very big packet**, which is **64KB** but there is a **limit** of **4KB**. So, we have to **divide** the packet into **64/4 -> 16** packets.

> We cannot send all of the **divided** packets at the **same** time.

> Even though **16 packets** will be sent, the packets will be sent when the **station** get a **chance to sent it** in the **round robin manner**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c0f7041-55ea-4852-97f6-801e7bcb238b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fff1754a-4d2c-4ea9-9652-39dad62d70b9)

> If the packet size is **4KB** but the data we have is **1KB**, then no problem. Anything less than **4KB** can be transmitted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c24c35c-f9eb-4a2e-8658-5b3ffe4ff99d)

* Time Division Multiplexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e0f87ff-3e86-403f-8a68-92e3d64206c6)

* It is a **simple solution** without **any collisions**.
* When **many stations** don't have **data**, then **time slot** goes wasted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aef683da-53ac-4dad-8a0d-bf2a24244a8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a553f6e-1e3c-4e4e-848c-f162f9eba61b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/413d7374-9a20-4fb9-ad85-c9904f6c5e4b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c19ba144-adba-4618-85d8-fa12dc4ac7b5)

* Efficiency formula

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb33f49f-cf1b-497f-83c5-a1127288a4d4)

* Tt = L_max / B 
* Tp= d_max / v.

* Anything that **repeats** is a **cycle**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1aba7401-ad45-442a-af7c-d810fea77ec5)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4300e02e-255c-4ca6-9dcb-aa3007e45976)

* Effective Bandwidth/ Bandwidth Utilization / Throughput = Efficiency(N) * Bandwidth(Bw)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6352f83-d136-49fb-8f3a-59456058aad4)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8856506f-6f73-457a-b3c2-e2bcac77357f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89689801-c853-4936-b6e6-44a6505c0c0f)

* Question.
* We are using **bandwidth** for **half** of the time.
* We are using **half** of the time for **transmitting** and **half** of the time for **propagating**.
* The **2mbps** bandwidth has to be **shared** among **N** stations and **each station** need **2kbps**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff252c7e-5fba-4882-9086-a12de7c21aaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78cc225d-ddb3-4fa2-a26c-b45a491b1d09)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b807132-8055-435f-85c5-ba4cc4fe253c)

## 2) Polling

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a637288e-be36-47e1-8e33-b0c968bafa82)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dff83018-3412-4b89-98d4-744fbbc10109)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ce98dc6-4ad8-491d-930e-5c94e465701e)

* Yes.
* The part is repeating again and again. That's why it is called as a **cycle**.
* T_poll -> Polling factor or Polling Time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7c17eaf-4364-41e3-a404-5fe783e0b3a2)

* Efficiency(n) = Tt / (Tt + Tp + T_poll). [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfa5cb0b-0e47-421e-846b-41182ed7d64a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/730cb9fd-e21f-4048-bd7f-99014292bfa7)

* Advantages and disadvantages.
* Few stations might starve for sending the data as it is not in **round robin manner**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57dfad64-5f72-4459-9957-28a2e349be9e)

## doubt-clearing-session () [12th July 2023

## CSMA/CD

* One of the accesss control methods.
* It is used in **ethernet**.
* **Ethernet** is **LAN**.
* So, **ethernet** is a network.
* In **ethernet**, **CSMA/CD** is used.
* In the exam somtimes they will use **CSMA/CD** or they will use **ethernet**. Both are actually the **same**, when it comes to problems.
* They are used **interchangebly** in questions, don't get confused. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99fdab15-da22-4e97-ad24-b3365a8813e7)

* Why is it called **multiple access**?

> Many stations are accessing the channel. Many stations are connected to the same channel.

> Multiple access is also called as **broadcast link**.

* The station will not be able to sense the entire carrier. It can only sense the point at which it is connected.
* When the **collision** happens, the **collision signal** comes back and so the stations should also detect the **collision**. That is why it is called as **collision detection**.
* Once the station detects the collision, it will understand that the **packet is lost** and it will **re-transmit**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e8ac896-6da7-4a78-a742-c0f9be97eb89)

* There is **no acknowledgement** in most of **LANs**. That's why we need **collision detection**.
* It is the responsibility of the **sender** to find out that the **packet is lost** in the **transmission**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53610c6b-c0c7-4107-bbdc-7922e8a639bd)

* Carrier sensing(CS) is misleading we are not sensing the **whole carrier** we are sensing only at that **point**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb14ce8a-5dfd-49bf-b93c-7292ab4c7406)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/860bd7f3-d555-46e6-80b5-c2ce6257c1dd)

> Collision has occured and the collision signal will come back. If **A** has to understand that it's packet is lost then it should understand that it got the collision signal.

> **A** has already transmitted the data and **A** is done with the **transmission**. Now, **A** does not see the **carrier**.

> Any station(A) will keep sensing the carrier, when it wants to **send** the data or if it is **sending** the data.

* Any station(A) will keep sensing the carrier or looking at the channel, when it is **transmitting** the data.
* Any station(A) will not look at the channel/carrier, when it is **not transmitting** the data.
* So, even though the collision signal is back **A** will not look at the collision signal because it's transmission is over and there is a chance that even if **A** looks at the collision signal, it might think that the collision signal is off someone else. The collision signal is from some other collision and it is not it's own data.
* How are we going to solve the problem?

> We don't have **any acknowledgements**. Any station can see the collision signal.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ed0f173-60c1-4d1b-bc4e-5931b61b9a72)

* If there is a collision then the station should receive the collision signal while transmitting the data itself, then the station will be very sure that it's **packet is lost/corrupted/collided**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3232cf23-977f-4ad4-ba56-753583a0532b)

* There is a collision and the collision signal goes back to **A or B**, while they are still **transmitting** the data. If they are getting the collision signal back then they(A or B) can say that they **packets are lost**. They can stop the **transmission** and **re-transmit** the packets later.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07608ae4-6e69-4ee9-9a12-f2b712d572e5)

* When the stations(A and B) are **transmitting** the data and during that time they receive **collision signal** then they are **sure** that their **packets are lost** in the **collision**. 
* So, they should always send **big packets** in this protocol.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05eb055a-7beb-4a92-ae68-4529747ae4cb)

* Yes.
* If they send the complete packet and then **collision signal** comes then the **stations** are not able to **sense** the carrier and hence not able to detect the **collision signal**.
* Even if they see/detect the **collision signal**, there is **no proof** that it is **their packet that is lost in the collision**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd34cb0b-3c52-4ea7-809f-03ebf3d9298b)

* We need **big packets**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0882a2da-57e6-4c83-9fed-34c9f59e4b37)

* If we send **small packets** then by the time collision happens and the **collision signal** reaches the **stations(A and B)**, the stations are done with their **transmission** and they will not be looking at their **carrier**.
* Even if they detect the **collision signal**, the **collision signal** doesn't say which packets are collided, so the stations won't know if it was their packets or someone else's packets. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ef35833-a564-44f1-ab4b-be1dc81e9b9b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31196eba-ba0e-46e8-bb31-1eae9d5509aa)

* We should send **big packets**. We need **big packets**.
* By the **time**, **collision signal** comes back the stations should still be **transmitting** the data.

* How big should be the packets?

* The **transmission time(Tt)** time taken to transmit the packages.
* Tt >= (Collision return time)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96789021-c23c-445f-adf1-80228208d56b)

* At what time there would be **collision**?

> **9:30**. The **first bit** from the packets of **station(A and B)** have reached the **middle**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9fdce8c-3958-4613-b582-63e726874bf8)

* At what time would **A and B** see the **collision signal**?

> **10:00**. Stations, **A and B** detect the **collision signal** at **10:00**. The **collision signal** is back.

* If we start at **9:00** clock then we are able to **see/detect** the **collision signal** at **10:00** clock.

* What should be the **transmission delay**?

> **1hr**. It is nothing but **propagation delay**.

* So, **transmission delay(Tt)** shuld be **atleast greater than equal** to **propagation delay(Tp)**, which is **Tt >= Tp**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5099efbf-9776-42f4-9d9c-7042cb5bfd2d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e41208b0-3191-4769-8385-36b9d7301127)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7532d48b-3f48-441f-b2dd-296a0cb01d11)

* This is a **average case**.
* Collision is happening at the **extreme end**.
* **A** started at **9:00**.
* **Almost at 10:00** which is **9:59:59**, **A** first bit almost reaches **B**.
* At exactly **10:00**, **B** started.
* So, **Collision** happened.
* At what time **collision signal** will come back to **A**?

> **11:00**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2ad83cf-c37d-4e6e-85bb-c74bdae5343a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/959888c8-137c-4144-bd7a-7c5162f1fff2)

* **Transmission delay(Tt)** is **2hrs** here.
* Tp = 1hr.
* So, **Tt >= (2 * Tp)**. [Tp -> Propagation Delay]
* [**IMPORTANT**]
* What is the **min. packet length**?

> **L_min >= 2 * Tp * B**. [**IMPORTANT**]

* L_min / B >= 2 * Tp
* L_min >= 2 * Tp * B

* The **min. packet length** in **CSMS/CD** is **L_min** from the **above formula**.
* L_min -> **min. packet length**
* B -> Bandwidth

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/544ee3f2-d4a5-4a28-8c62-b2cfb91fa155)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b1bdbc5-279a-4f9a-9562-8b23c9fb80f1)

* **L_max** -> **Max. packet length**
* Later when we see **ethernet**.

* Tp = 1ms, B= 1mbps
* L_min = 2 * Tp * B -> 2 * 1 * 10 ^ (-3) * 10 ^ (6) -> 2 * 10 ^ (3) -> 2000 bits

* Tp = 10ms, B= 1Bbps
* L_min = 2 * Tp * B -> 2 * 10 ^ (-3) * 1 * 10 ^ (9) -> 2 * 10 ^ (6) bits

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3e03779-12c2-488d-b7bb-f4a60468c1fa)

* Questions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3599cf6-f5a4-42fc-a945-ac3cf868879a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9cd7d3e-e9be-458b-ad33-4cc2fc48b77f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88f2660e-cf6e-4630-a64d-0c0a42667c5e)

* Sometimes, **propagation delay(Tp)** is not given, we have to find it.
* Tp = D/V.
* D -> Distance
* V -> propagation velocity

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6c96b48-e108-4219-a8d8-a3a9a5a77504)

* Jam Signal.
* There is a **small exception**, it need not be only **transmitting stations**, any station that detects a **collision** can release the **jam signal**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b56d757-f822-46b2-bf28-9a7a145e3e5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd35858d-b7d3-4bfd-9e8c-b25f806cf80d)

* The collision will keep on **happening**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3770c0b-3ac7-493e-b56a-6677e3663df5)

* Yes.
* Solution -> We are going to pick **random numbers** and we are going to play with the random numbers.
* That is **Back Off** algorithm.
* We pick a **random numbers** and wait.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc61075b-b570-404c-b91e-396fc762e691)

## network-security (24) [14th July 2023]

* So after te **collision**, if both the channels are transmitting the data again and again without waiting then the **collision** is going to happen again and again. 
* Solution -> Both the stations are going to wait for a **random amount of time**.
* This **time** is called as **back off time**.
* **Back off time** is when we are not transmitting any data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f427d9c-bf8b-4573-bc16-0bd102ea3e12)

## Back-off Time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8638f755-9dc7-4232-bfcc-c5cce270f3b3)

* WT -> Waiting Time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df9695c8-4a75-4f47-97e4-e6577a5d15b1)

* **B** can **transmit** without any problem.
* **T_slot** is **configurable** and it can be set according to the **network**.
* Everyone can have their own time slots.

> If **A** is sending **packet 1** and **B** is sending **packet 1** and both of them collided. What is the **collision no** for **packet 1 of A**? It is **n = 1** What is the **collision no** for **packet 1 of B**? It is **n = 1**

> Once we decide the **collision no** we are going to choose a **number** between **0 to ((2 ^ n) - 1)**, in the case of **A** we got the range from **0 to 1** as **n =1**. For **B** we got the range from **0 to 1** as **n =1**.

> We got **4** combinations possible.

* If **(1,0)** is choosen what is means?
* It means that **A's** waiting time is **1 * T_slot -> T_slot**, which means **A** is going to **wait**.
* It means that **B's** waiting time is **0 * T_slot -> 0**, which means **B** is **not going to wait** and **B** can **transmit**.
* So, here, **B** won the race.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f66fac6-f6ea-462c-8abb-50772c420b54)

* (0,0) -> Collision again
* (0,1) -> **A** won
* (1,0) -> **B* won
* (1,1) -> Collision again

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee460357-cf08-4d5c-a930-fdb9b254cc47)

* After the first collision, what is the **probability** of the second collision?

> Out of **4** cases we have **2** cases of **collision**. So, **probability** is **2/4 -> 1/2**.

* After the first collision, what is the **probability** of **A's winning**?

> Out of **4** cases we have **1** cases of **A's winning**. So, **probability** is **1/4**.

* After the first collision, what is the **probability** of **B's winning**?

> Out of **4** cases we have **1** cases of **B's winning**. So, **probability** is **1/4**.

* This are **conditional probability**. This is the **second probability** after what happened in the **frist probability**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bf0049d-a63c-4717-92b7-54a1311a734e)

* Let assume, **A has won**, which is **(0,1)**.
* As **A** has won the race, so it as has transmitted **packet 1** and **A** is ready with **packet 2** and **station B** has **packet 1** only.
* As **A** has transmitted **packet 1**, so **B** can now **transmit** it's **packet 1** but that's not the **case**.
* There is a change that **station B** will **starve** as there is **no bounded waiting** here.

* **A and B** stations, started **transmitting**. There is **collision** now.
* What is the **collision no** for **packet 2** of **station A**?

> **Packet 2** has just come and it is **colliding** for the **first time**, so it is **n = 1**.

* **n** -> **Collision no**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d0e1c51-864b-46ce-85e0-d43e9e1c4eca)

* What is the **collision no** for **packet 1** of **station B**?

> **n =2**, as it is the **2nd time** collision for the packet.

* We are talking about the **collision no** of a **packet** and not the **station**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f73fbeea-b0f2-4e3a-88df-6f2f7d0a9789)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea7da264-f208-43e3-a342-8c36cee2ef61)

* P(Collision(C)) -> 2/8 -> 1/4 -> 25%
* P(A) -> 5/8 -> 62.5%
* P(B) -> 1/8 -> 12.5%

* So let's say, **A has won**. So, **A** has **transmitted** it's **packet 2**.
* No **priority** is given to **station B** and it's **packet 1**.

* What is the **collision no** for **packet 3 of A**?

> **n = 1**, as t is a **new packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98c6d0f3-4aea-44f5-b17f-4d23518d1a96)

* What is the **collision no** for **packet 1 of B**?

> **n = 3**, as t is a **new packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f38fdf83-a722-44c3-b550-cbe225288e67)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0400a536-532a-461d-b767-91949357d671)

* **Back off** algorithm can be applied to **two stations** only.
* 100 -> 50 -> 25 -> 12
* The probability is **exponentially** decreasing.
* That's why it is called as **Binary exponential back off** algorithm .

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35261d32-1e62-498a-b827-b00a91968976)

* The probability of **A and B** winning are the **same** but **A** wins the **collision** for the **frist time** then the probability of **A** winning the **next collision** is **increased**. If **A** has won again then the the probability of **A** winning the **next collision** is also **increased** again.

* It means that as the **station A** wins each time, the probablity of it's wining is actually **increasing**.
* This leads to something called as **capture effect**.
* In the **above example**, it means that the **station A** has captured the **link** which means there is a **monopoly** here.
* So, **station A**, keeps on **winning**, as the probability of winning keeps on **increasing**.
* So, there is **starvation for 'B'**.
* **B** will try for some number of times and it will give up.
* If **B** keeps on trying, **B** will keep on loosing.
* It is better for **B** to give up completely and **restart** later to have **collision number(n) equal to '1'**, which is **n = 1**.
* If the **collision number(n)** **increases** a lot upto **n = 10**, then it's **probability** is going to **decrease** a lot.
* So, **B** will **restart** from **collision number(n) equal to '1'**, which is **n = 1**. So, it will go for **few number of collision** and it will again **start or restart** from **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8983ab9b-75a6-4a9a-942c-97935354bf82)

* The **above example** is that after the **collision**, **A has won** then **A has won** and **A has won**.
* Try the **other examples**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe6ed173-b912-4071-894e-5f6f9e9eeea0)

* We are talking about **collision no** of a **packet** and not the **station**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f236c79-6a81-4441-8ae2-86530d3b2d20)

* [**IMPORTANT**]
* Initially when we start, the **collision number** is **n = 0**. For the **first packet** there is **no collision**, so **n = 0**. 

* **Inter Frame Gap** -> Between **two** packets, so gap is maintained. If we don't give the **gap** then the **two** packets will be merged and considered as **one packet** only.
* **Collision No** for the **packet**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f8ca657-6452-4320-87b4-4841ea8eb65f)

* Entire process of **CSMA/CD** procedure.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f05593a-d4f7-4de7-b8c2-96a897a2d04c)

* Efficiency of **CSMA/CD** -> (Useful Time) / (Cycle Time)
* There are **some collision**, but we don't know the **no. of collisions**. Let's say **C** collisions.
* Whenever there is a **collisions**, what is the amount of time wasted?

> Roughly, **2 * Tp**. **2 * Tp** is the **time wasted** in **each collision**.

* There is **no gurantee** that everytime there will be **same no. of collisions**. There can be **any no. of collisions**.
* Useful Time -> Tt
* Once we find the value of **C** we can find the **efficiency**.
* **C** -> Average no. of collisions that might happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5879654-0dbb-4bed-9a08-d16bdf805aa4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f98f21e-02ba-4d84-a9e7-e41dadbbd2dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7b496b9-c3cb-4f9a-b64b-1607150c3ce6)

* **C** = (No. of Contention Slots) / (Collision slots)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b942596-ddcd-4326-ad81-f4e60a6e4b24)

## Probabilistic Analysis

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e3006e1-401b-4115-b602-250254d896cb)

## ipv6-wifi-doubt-clearing-session (25) [14th July 2023]

* We are taking **average no. of collisions** as **C**.
* Efficiency = (Useful) / (Cycle) -> Tt / (C * 2 * Tp + Tt + Tp).
* We have to find the value of **C**.
* It is **Binary algorithm**.
* So, the algo is assuming that **2 stations** collide.
* If **3 stations** collide then also **no-problem**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a9f6ffd-fc18-4d08-8c85-52870a5d5431)

* We have to find the value of **C**.
* We are going to do **probabilistic analysis**.
* We are talking about an **average number**. We are not talking about the **exact number**.
* Every station wants to transmit data with **probability(p)** assuming that there are **n** stations.
* What is the **probability(p)** of success?

> **Only one** station transmits the data and **(n-1)** stations does not transmit the data.

* For the **one station** to transmit the data, the probability is **p**.
* For the **remaining(n-1) stations**, the probability is **(1 - p) ^ (n - 1)**
* The **one station** can be among many of the **n** stations, so we are **Choosing** using **NC1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95af2352-539a-460b-9821-4e950818472e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f7df7ca-5cad-4854-8170-aa3b2e7c05a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb3960b0-ec7f-41c8-a42e-7e130a11b351)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74107f12-be3e-4b7a-8b81-ea877237050b)

* All of the **assumption** so that we can say that on ***average** this is the case.
* **Average Case**. 
* **Limit n tends to infinity** means that they are **sufficiently large no. of stations**. We do not have **infinite** no. of stations.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bde7763d-f6e0-4e66-a444-38215113874e)

* The probablity of successful transmission is **1 / e**.

### Poisson distribution 

* The probability of getting a **Head(H)** is **p**.
* How many times should we flip the coin, to get **first head** and **p** is the probability of getting a **Head(H)**?

> On **average**, we have top flip the coin, **1/ p** times before we get the **first Head(H)**.

> On **average** how many **Tails(T)** are we getting before the **Head(H)**.

> According to **poisson distribution**, it is **1/p**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/910aa398-9487-4704-9fe1-73fc51517278)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cec98836-8549-4b31-9d7e-ad6ae7ad898b)

* Probability of successful transmission(P_succ) -> 1/e
* How many times should I try before I get the **first success**?

> (1 / (1/e) -> **e** times.

* We have to try for **e**times before we get the **frist success**.
* All of the **e** times or tries are nothing but **failures**, which means **collision** have happened.
* All the **e**times or **e** tries are nothing but **collisions**.
* After **e** tries we are getting **successful transmission**. All **e** tries are **collisions**.
* It is an **average number**.
* It is going to happen when there are **sufficiently** large no. of stations.
* We don't worry about **probability(p)** we have eliminated it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5172063-e8f7-4960-bb1e-ee95ee78efc3)

* Irrespective of **probability(p)**, if there are **sufficiently** large no. of stations, then we are going to have **e** collisions before there is a **successful transmission**.

* What is the value of **C**?

> It is **e**, which is **C = e**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dad964b-cbe5-4b16-8f65-bace6cbfc061)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a78e451-c756-436d-a8d9-a426a3383997)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/859a8bdb-bc9a-4eb3-817c-831b70a4e753)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a3d8816-9fa4-40bb-b84c-e2caf47a6e66)

* If **success** is **transmitting** then **failure** is **collision**.
* We are saying that there are **e** no. of failures which means **e** no. of collisions.
* Therefore, **no. of collisions(C) = e**, which is **C = e**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e21a447-52d6-48e5-aca9-6d0a04e1f0c3)

* In **efficiency**, we can substitite the value of **C = e**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7225e505-c3fb-45cb-868a-7019acf2a90a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/007d082e-6277-4221-a24e-526c2297e159)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6c31d2f-2ee9-4862-84c3-472b9c1f50ad)

* Putting, **C = e**, which gives **efficiency**.
* n = Tt / (2.71 * 2 * Tp + Tp + Tt).
* **Efficiency** of **ethernet**:-
* n = 1 / (1 + 6.44 * (d/v) * (B/L)) [**IMPORTANT**]

* Whenever we buy the **channel/cable**, the **velocity(V) and Bandwidth(B)** are **fixed**.
* We can play with **distance(d) and length of the packet(L)**.
* If we **increase distance(d)**, then **efficiency(n) decreases**.
* So, we can say the **CSMA/CD** are good for **LANs** but it is not good for **WANs**.
* If the **length of the channel** is **very long** then **CSMA/CD** is not going to give **great efficiency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40e1d510-50e7-42a5-a2ce-523eeb04726c)

* **CSMA/CD** is used in **ethernet** which is a **LAN** technology.
* So, *CSMA/CD** is used in **LANs**.
* **CSMA/CD** is a **access control method**.
* **Ethernet** is a **network**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2028d73-5b2e-4b35-91e4-e1d2c6b19ed7)

* If we **increase the length of the packet(L)** then the **efficiency(n) increases**.
* If the **length of the package** is high then the **transmission delay(Tt)** will be high, even for the **same**, price, which is **no. of collisions**.
* We are going to get **same no. of collisions** but we can carry a lot of data. 
* So whenever we **increase** the **length of the packet** in the **ethernet**, the **efficiency increases** because if we **increase** the **length of the packet** then **transmission delay(Tt)** is going to **increase**. That's why **efficiency increases**.
* Therefore, we have to **increase** the **length of the packet** in order to **increase the efficiency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cee673e1-178d-4d38-b87d-dc8af7be76ea)

* On many networks there is a **limit** to the size of the packets.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98898216-c163-4122-aa96-dfe5f323a158)

* Even though **efficiency increases** with the **increase** in the **length of the packet**, but we should not do it beyond a **certain limit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e7ddf68-7510-4b9f-8f1e-8fd05e367953)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a903fb5-1998-4842-964a-43f5c669ed25)

* CSMA/CD

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90df36ec-975e-4335-ba1c-720d276453cf)

* **CSMA/CD** is just **collision detection(CD)**, it is not **collision prevention(CP)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e94eb4c-08ce-4af9-ae36-2c6baa680698)

## Part-I Completed
# Part-II

* Link -> https://unacademy.com/course/computer-networks-part-2/TVTQZZ6R

## access-control-part-v (26) [18th July 20230]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15698d02-680d-4846-b605-cf9ff8e8b194)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c33c081b-99b4-44d1-b01b-2200c12278de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e285a52d-2e67-4779-a488-b8ddc0024c0c)

* Aloha is used in **wireless** communications.
* Even **wireless** networks are also broadcast channels.
* **Access control(AC)** is required only for **broadcast** channels.
* When two signals are transmitted with the **same** frequency then **collision** will happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7184e00d-ba36-45cd-9642-d66410e56ac8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2aace3e-4eae-4f7d-9e02-1df508c51809)

* Types of Aloha:-

1) Pure Aloha
2) Slotted Aloha.

### Pure Aloha

* There is **no carrier sensing(CS)**.
* There is **no collision detection(CD)** in **aloha**, so we have to use **acknowledgements**.
* We transmit the data, we wait and if we get the **acknowledgement** then **transmission** is **successful**.
* If we haven't got the **acknowledgement** then it means that the **transmission** is **unsuccessful**
* How many times should be try sending the packet?

> There is a **maximum** limit. It will try for **max** times and if it sees that **everytime** it is getting involved in **collision** then it has to **abort** which is **temporarly suspend the transmission** and try after sometime. It should not **retry** immediately.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69837e25-714a-4599-b1c6-3b8c4594b21e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0585906-1f5e-433a-b167-0ea3274b6946)

* Waiting for some random amount of time
* ome random amount of time -> Back off time.
* Back off strategy is similart to what we saw in **CSMA/CD**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed62793d-c088-4c55-a2ec-154ed7676e1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66a214bc-7798-4ee6-921f-26fff2ba850d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1035e684-18e0-498b-b2a3-2fe1bb5970b0)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f737435d-7725-49b5-95cd-e080d6a248c2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28d81a92-a645-43a8-9d7a-413c108ba7b7)

* Back off time is **randomly** selected.
* Duplicate data/packets are handeled by **flow control(FC)**. It is not the responsibility of **access control**.
* Aloha -> Access control(AC)
* SR -> Flow control(FC).

* With **aloha** as the **Access control(AC)**, we will use **SR** as the **Flow control(FC)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67ae30bb-d6ff-48aa-bf00-086c0fd064f4)

* Increment back off -> We are counting how many times the packet have been lost.
* If the packets is lost for **too many times**, then we will **abort**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/518b759a-93e5-491b-b2e6-1c8f48d18719)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f24af891-dd03-4b3e-aff7-156a593419df)

* Efficiency formula.
* G -> No. of stations willing to transmit data in one transmission time(Tt).
* Vulnerable Time(VT)
* Propagation delay(Tp) is not considered in **aloha** as **aloha** is **wireless** and **Tp** is **much less** in **wireless**.

> If we have started transmitting a packet, there are **two** ways collision can happen. **One collision** may happen if someone transmits the data, after we transmit. There is a **collision**.

> Someone was already transmitting the data, and we started transmitting, then we will have **collision**.

* Why are we transmitting when someone else is transmitting?

> Because we cannot do **carrier sensing(CS)** here. In **aloha**, it says that we can transmit the **data anytime**.

* If we are staring a transmission at some point, the **Tt** time after it and **Tt** time before it. During the **entire time**, we have to be the **only one** transmitting the data.
* If anyone starts transmitting the data, either before **Tt** time or during the **Tt** time then there will be **collision**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc6c9d74-e977-49f7-9d08-6107458b4711)

* This time is called as **vulnerable time(VT)**.
* Vulnerable time(VT) -> 2 * Tt
* VT = 2 * Tt.
* It is close to **Tt**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a8b1e61-0f51-46e3-b032-4dbd1049fc62)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee4224bf-3309-435c-ba52-9f6c05fe1823)

* Because of **2 * Tt** in **vulnerable time**, we are getting the **-2** in the **efficiency of pure aloha**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbc96a69-314b-48a6-bdf2-c102c4877f29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c451370c-3af0-4d9b-8695-ac563b208b8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ef57124-57d6-42d4-a519-98ca1ecec55d)

* **One(1) station** is transmitting in **2 * Tt** time.
* If **One(1) station** transmits in **2 * Tt** time then there will be **no collisions**.
* If **Two(2) stations** transmits in **2 * Tt** time then there will be **collisions**.
* If **One(1) station** transmits in **2 * Tt** time then there will be **no collisions**. So, **efficiency** will be **max**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ba0032f-0d69-44c5-a1df-eac56a5c3ece)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c7338cd-5b68-44c0-a15e-c5451450e998)

* **Max. efficiency** of **Pure Aloha**.

### Slotted Aloha

* In general, the **time slots** are **Tt** but they can be **configured**.
* If **any station** wants to send the data, then they can only send the **data** at the **start/beginning** of the **time slot** only. They cannot send the data, randomly.
* In **pure aloha**, stations can send the **data at anytime**.
* In **slotted aloha**, stations can only send the **data** at the **start/beginning** of the **time slot** only
* If the slot is from **10 to 11**. The station wants to send the data but it missed the time slot of **10** then it has to wait till **11** to be able to send the data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d885b16-1648-42dd-94cc-62b2e94f3679)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbfb11b1-cc2b-41bd-abe0-a1e71fc3a74e)

* In a slot, anyone can transmit.
* **Previous slot** packet, will not collide with the **next lsot** packet.
* Vulnerable Time(VT) -> 1 * Tt -> Tt [Slotted Aloha]
* VT -> Tt.
* Vulnerable Time(VT) -> 2 * Tt  [Pure Aloha]
* VT -> 2 * Tt.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75ee102e-e469-422f-8fe6-605d1bebaf37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7036a542-e63a-4063-8c20-6e6551bd0d87)

* Efficiency of **Slotted Aloha**.

* In **one(1) transmission delay(Tt)**, if the **no. of stations** which are sending the packet/data is **one**, then we get the **max efficiency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af11f88d-7810-418e-8628-41bb062e874c)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1dd1a25-dd69-4d31-a5fb-069621a17d48)

* **Max Efficiency** of **Slotted Aloha**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6547bf47-1d51-4886-bee3-bb6a99b94242)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/157a7c88-9650-496f-95ec-19fb6d06f189)

* **Pure Aloha** has **no slots**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19bcd606-f3f8-441d-b153-46b643c9f691)

* Summary of **Alohas**.
* Practice questions given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d17e47c-27b2-4b2c-8005-fe89a85bbbce)

## error-control-crc-checksum-part-i (27) [18th July 2023]

* Single bit errors.
* Error Control -> We want to see if a packet is corrupted or not.
* No **error control** method is **efficient**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b29c3f6-c874-4051-9206-dc615a616233)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed62461a-c2d8-4b09-b80b-5e375892536c)

## Error Handling Methods

1) Error Detection -> We have an **error** and we don't know where it is. It is **error detection**.
2) Error Correction.

* Error Detection -> What we have to do?

> We have to discard the packet and ask again.

> We have a packet and we got the packet. We have seen that there is an error. Depending on the protocol that is being used, **two** things that will be done.

1) Some protocols will **discard** the packet **silently**. It will not do anything, it will simply **discard** the packet. On the other side there is **timeout timer**. After the **timeout timer**, as we haven't got the acknowledgement then the receive will think that the packet is lost and the receive will again **retransmit**.

* Called as packet dropping or discarding packets silently.

2) A sender has sent a packet to the receiver. The receiver has received the packet but it is corrupted. The receiver will send a **negative acknowledgement(NAK)**. The sender is going to retransmit the packet.

* The **process 2** is generally **faster**.

* **Negative acknowledgement(NAK)** -> It means that the receiver has received the packet but it is corrupted. Send the packet again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36810d76-d924-4c91-9f8b-9d4b4cd9d13f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d0f7102-900d-4bb0-8701-a19153fe99f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df0d5533-5622-48e5-8915-cb509e757ece)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e9bb6ad-6ba8-4ab5-b570-9c105487b940)

* In both the **proceses**, the question will ask for **time**.
* Transmission delay(Tt) is **negligible**.
* TTt -> Timeout timer 
* If a packet is corrupted, then when will the receive receive the packet, in case there are no Negative acknowledgements(NAK)?

> **Tp * TTt** -> 10 + 20 -> 30ms

> We have to compute the time from the beginning of the transmission of the first packet. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a101ed6e-b15d-4375-8436-d10c7e65cd4c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65f3ddf4-3a61-4e59-a588-b2e54feb63f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74af0919-9347-4fa4-aeeb-f1e1d55b9a57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fc139be-4f94-4fbb-b92e-29dfbe9f33b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99da70e1-c335-4fa6-b80a-04015752fc85)

* Tt for a packet maybe given.
* If given then we have to use it.
* If not, then **Tt = 0**.
* If **acknowledgement size** is given, then we have to **use it**.
* If **acknowledgement size** is not given, then it is **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f298b76c-39e1-41be-8351-52da400dd9d0)

* In all of the **flow control** methods, we have used **acknowledgement size** as **zero(0)**. 
* In Gate questions, they will ask you gy giving **acknowledgement time**. Then, the **cycle time** will change.
* **Cycle time** is nothing but the **total time** will actually be including the **transmission delay(Tt)** of the *acknowledgement** also. [**IMPORTANT**]

* In **wireless** connections, we will asssume that **Propagation delay(Tp)** is **zero(0)**.
* If **Propagation delay(Tp)** is given, then we have to use it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dbbf89c-a9db-49b5-bbb8-2c7ed2a507de)

## Error Detection

### Data + Data 

* **Data + Data** -> When we send **two** data. When both the **data** disagree then we don't know which one is right.
* We don't know which data is right.
* We will discard both the data and ask for a **re-transmission(RT)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95d594c0-1ad8-4109-9507-c6e10943dff3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba7685ed-9693-4ea1-9f28-f7e14cf4e969)

* **Data + Data** -> It is **efficient**.
* The disadvantage is that **internet, bandwidth, router, links, gateways** are going to **increase**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa2bc4cd-f0f4-48da-87da-fd6e5d006c7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3d42a1d-bc03-4820-b7f7-7fcbdbebe269)

* No method is **100% guranteed**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a2ab4e7-b0d7-4db4-bb99-15d29f6e7411)

## Single Parity Check

* If we have **single bit** then it is called as **single parity check**.
* If we have **odd** no. of **1's** then the **parity bit** is **1**.
* If we have **even** no. of **1's** then the **parity bit** is **0**.
* This is **even parity**.
* It means while transmitting that we are making always the no. of **1's** as **even**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49bb50d0-95b8-4201-a1be-a94c19d0ddb6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e79d3e72-b7af-4a17-86f2-471f9f6cfff4)

* The **advantage** is that, if we have **even 1's** then after **transmission** we get **odd 1's** we know that there is an **error**.

* We are trying to make the **no. of 1's as even**. If due to an **error** during the transmission, the **no. of 1's** becomes **odd**, we know there is an **error**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51e3faeb-6125-464c-aa80-d024d4489bb4)

* It is not **100%** efficient.
* **One(1) bit** error is that either the **0 bit** becomes **1 bit** or the **1 bit** becomes **0 bit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b522d232-d34a-4fd8-aa2e-6aee209c4a25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd8ddde9-fa04-4e68-973b-029313e29812)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fda22d2-3100-474a-8e00-2bd132524629)

* If there is **one(1) bit** error we are able to **check/detect** it. We are able to detect it as we know we have sent **even no. of 1's** but after transmission we get **odd no. of 1's**.
* If there are **two bits** that are **changed** then we would not be able to **check/detect** the error. As it is back to **even no. of 1's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24dc2512-28d5-43de-8ccc-8ce3e71d5705)

* It is not able to detect **even no. of bit** corrution, like **2, 4, 6 bits**.
* It is able to detect **odd no. of bit** corrution, like **1, 3, 5 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36181c25-e28f-4eaf-b753-3c05f1c68d6d)

* Not a very efficient method.
* It is a very simle method.
* Parity Check -> Error detection method.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a63107ff-cafa-46f4-bb1b-28dcb8c43a33)

## Cyclic Redundancy Check

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45e6ad14-777f-4eb8-b7bc-68dd1853232c)

* We are going to use **bitwise Exclusive OR**. Also called as **modulo2sum**.
* If we are adding **two bits**, then we have to add them and we have to **divide the addition by 2**. We have to tell the **remainder**. This is **bitwise Exclusive OR**. 
* Exclusive OR of **1 , 1** -> 1 + 1 -> 2 -> 2/2 -> Remainder is **0** -> 0
* Exclusive OR of **1 , 1** -> 0.

* Exclusive OR of **1 , 0** -> 1 + 0 -> 1 -> 1/2 -> Remainder is **1** -> 1
* Exclusive OR of **1 , 0** -> 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc1f1a19-796e-4b20-982c-3a97a613c78e)

* CRC generator -> 4 bits.
* CRC -> 3 bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bddc940-18e3-4db7-86b7-9b9c94f7f734)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3ea93e8-98b7-4f01-a9cd-4c60919b7e34)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0542e936-ca9b-44d2-9d0e-b5c649831715)

* Always start from the **leading one(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209f5cd6-e87c-4138-9f0a-87045760edce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f748dc0b-1cde-4609-8cd0-041ffc1c4a9e)

* WHen should stop it?

> When the **length of the remaining bits** starting from the **leading 1** is **less than** the length of the **generator(1101)** no, which is **4** bits here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed3deba8-3f13-4e72-b856-40943781bac1)

* Less than **4 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9c1d948-84ff-404b-a981-96a1cf5de9eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85ed18ba-0fcd-4960-a1e6-bd786d74224e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bf4c4b0-90e4-47ca-8d9c-8a6f154d30ce)

* This is the **sender side**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3112b6b-ee7c-413f-9239-d60b2dfba177)

* The sender has taken the **data and CRC generator or CRCG** and generated the **CRC**.
* Now the **Data  + CRC** is **transmitted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f9713de-b59b-4a4c-ad26-5d7874c21c0c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f809a67e-6f58-48c1-bca5-ef77d99c7dd8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3adac6ae-9420-411e-84e4-fb6370227752)

* Why **3** bits?

> Because **CRCG** is **4 bits**.

* We are taking the **data and the CRCG or CRC generator** and we are generating the **CRC**. Now, we are appending the generated **CRC** to the **data**, which is **Data  + CRC** and it is now **transmitted** to the receiver.

* Receiver will take the data and use the **same CRCG or CRC generator**. Receiver knows about the **CRCG or CRC generator** prior to the communication.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bac31e6-1b5e-4c07-b1d6-f5666c0002f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10b14f45-d650-4731-bd69-d9d013d49e63)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7087e32e-c37e-4cb1-8e55-ea8b5555ca54)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22a08e79-b43f-4a45-a8c5-081469f47588)

* So there are **standard** CRC generators.
* Now, the receiver will take the **data** and the **CRCG or CRC generator** and it will check if the **data** is corrupted or not based on the **CRC**. It has computed that it should get the same CRC.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0ab3123-0b8d-4ae1-a996-a9afbde01f1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/becabcbc-0962-4743-a317-f0d6400690af)

* Rem -> Remainder
* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00d05d4a-1af8-42bd-a150-6768885d2366)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33bfd1fe-b96e-4618-8c35-550a76aefca9)

* If the data is not corrupted, then we will get the **CRC** as **all 0's** which means the **data** is not **corrupted**.

* **CRCG or CRC generator** is the **same**.
* This is the **receiver's side**.
* If any of the bits which are being transmitted are corrupted then we are not going to see **all 0's** in the **CRC**. We are going to see some other numbers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af89a200-2013-4f87-8e1a-
1f1e31f7fc04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccf7cbaa-4828-4c66-a93b-ebcf41facda3)

* CRC generator can be given as a **function** as well.
* CRCG -> X ^ 3 + X + 1.
* Solve like **below** to get the **CRCG bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46721924-8468-4275-87ab-27ad7ec684dc)

* [**IMPORTANT**]
* To check if the **CRC** we got is write or wrong?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/791056a7-2139-4793-8fc4-0238e9fd6530)

* In space of the **all 0's** at teh end of the data, replace them with the **CRC** bits**. Now do the same **exclusive OR** and check if we get **000** as the **remainder** or not.
* If we get **all 0's** then the **CRC** is **correct** otherwise the **CRC** is **not correct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86fe6d35-a3c4-47e8-8c44-4792aad9568f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76f29299-2622-460b-ba25-1e6d76090e63)

* If we get **all 0's** then the **CRC** is **correct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/359667e3-71d0-4559-9a42-765f6cd7c477)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76fb642e-cff0-40d5-9594-e480e4a1a3b1)

## error-control-crc-checksum-part-ii (28) [18th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1267bd77-d410-4dd6-9280-25e87b415aa6)

* The **parity bit** has **two possibilities**, it can be either **1 or 0**.
* With **8 bits**, we have **2 ^ 8** possibilities.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e6ca449-72c7-4bc7-af3b-69c784627b07)

* Half of them are mapped to **zero(0)** and half of them are mapped to **one(1)**.
* If we are sending data though the **first half** which is mapped to **zero(0)** and the data get **corrupted** and it gets converted into some other data which also has the **same parity(0)** then we are not able to detect the **error/corruption**.
* As long as many data are getting mapped to the **same** error control bits, we will not be able to detect the **errors**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ea22471-85f6-41fb-ba77-47bef7e89ccb)

> For **every 8 its**, we are having **one parity bit**. With **8 bits**, **2 ^ 8** data items are possible. We have either parity bit of **0 or 1** which means **half of them** are getting **parity it 0** and half of them are getting **parity bit 1**. So, **128** data times might be having parity bit as **0**, therefore, if we are sending **one of these 128** data items, if we are transmatting **one of the data items**, then there is a chance that the corruption might occur in such a way that **one of these 128** data items gets converted into **one of them 128** data items, which will have the **same parity** bit of **0**. 

> Therefore the **error probaility** will be **high**, when we have more such no. of data sets which have the **same** error control bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89603288-3240-4d56-9e8d-4593d98c1f69)

* There is a chance that the **data** might get corruted as well as the **parity bit** might get corrupted in just a way that it agrees with the data. It cannot catch or **detect** it.
* The probability is **less** but it is still probable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d41a357-e91e-498e-85af-a19c30dd10f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6cf561d-66d1-4306-bbc7-c2748fcee247)

* CRCG or generator -> 4 Bits.
* CRC -> 3 bits.
* With **3 bits**, we can have **2 ^ 3 -> 8** different combinations of CRC possible.
* With **8 bits**, we can have **2 ^ 8 -> 256** combinations of data items are possible. The data possible is from **0 to 255**.

* 257/8 -> 32 -> 2 ^ 5. 
* The data is classified into **5 classes** in such a way that **32** data points will get **1 CRC** right.
* ** 256** combinations of data items are possible and **8** CRCs are available.
* So, for every **32** data items, there will be **only one CRC**.
* So, it is a **many to one** mapping.
* Many data items are mapped to **one CRC**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3659790a-819d-49c2-9ecc-000630d6c78d)

* Many data items are have the same **CRC**.
* For **one CRC** there are **32 data items** that are mapped to it(one CRC).
* This is the problem in **error control methods**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f244cec0-4ec9-4528-96bb-62ef4f785a4f)

* If **D0** data items gets **corrupted** and it is is converted into another data item **D1** which is present in the **same** 32 data points of the **same 1 CRC**. There is no problem, the data is **correct**. It is not possible to detect the **error/corruption**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f5230b4-08d6-4642-bc9c-221f13a2ea7a)

* If the transmitted data gets converted into someone other data due corruption and that **new data** is present in the **same** group and the **CRC** says it is **correct**. We are not able to detect the **corruption**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de0db21b-c75a-4a4a-a342-e106cce2d927)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acb614d9-8e77-4ff3-8087-ca925d40ecce)

* Solutions for fixing the above problem.
* Make the **error control bits** also **8 bits**.
* There will be **256** combinations of data and the **error control** combinations is also **256**.
* The roblem is that there should be gurantee that for **every data combination**, the **error control** combination should be **unique**. It means that **two data combinations** should not have the **same error control bits**.
* All of the **data combination** should have **error control** combinations which are **unique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/718c4f53-3653-4151-afd4-f8592c2438f1)

* We need an **intelligent function** which will have **one to one** mapping. 
* There should be **no many to one** mapping. we should have **one to one** mapping. 
* How can we gurantee that first? We also don't want to waste a lot of time computing? 

> The function should be **simple** and it should do **one to one** mapping.

* We are sorted then because if **one data** get corrupted then we are able to **detect/catch** it because **ever data combination** has a **unique error control bit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/216b99be-2544-406b-bd6e-822d9b473b7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0d446e4-18d0-4235-bcdf-70988c6870c0)

* We are going towards **Data + Data** method, which is we are sending the data and along with the data we are sending one more copy of the data. We are sending the data **two** times. This will ensure **one to one** mapping.
* For every data, the **error control** is going to be data, which is **unique**. So, it is going to be **one to one** mapping.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7621de0e-2ad6-4f59-94c5-7b670b251b07)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39029934-ba6b-4055-a5ce-1ec0563d3581)

* If the data get corrupted and it converted into another data then the **error control data** will be different compared to the **corrupted data**, so we will be able to detect it.
* Disadvantage -> A lot of wastage of resources.
* The resources will be doubled.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ef78f89-2f9e-416a-954c-479472d9e3a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3f091a7-6059-413a-ac21-5714bb13bbf4)

* We are not **100%** sure that the errors will be detected.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a21025b-3f13-4ada-b270-09fa4cca9462)

* If we use **Data + Data**, it is not **100%** safe.
* Types of error:-
* Bit error -> Only one bit is corrupted.
* Burst error -> A sequence of bits gets corrupted.
* Even though **Data + Data** is the **best** we still don't use it.
* For a **large data**, we have a **very small** error control method.
* We use this because even though it has **many to one** mapping, the probability that the **error** will change the **message** into the **same message** in the group or to a **different message** in a **same group** is **very low/less**.
* We generally don't worry about it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2317f416-eb64-423a-a26b-166b8d993b40)

* Out of the **256** combinations of data, not all of them are **meaningful** to the **receiver**.
* Most of the errors will be detected and even if some of the errors are **not detected or undetected**, they will be **harmless** because someone is not doing it intentionally. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6e1afe9-5337-49bc-97d9-5c878ac8aa9a)

* In all of **CN** we are going to use **CRC and checksum(CS)** even though they are **not very efficient**. We are happy with them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48032576-ca26-4ca6-b810-3b46315b4966)

## Checksum

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/596faa68-aaeb-4822-9908-e178307fa6fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb43b0dd-6fce-4a3c-84dc-df9f4ee9abc5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7f0c93d-0dc0-4e80-a5f8-dce8043c038a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cef546b1-813d-49e8-ade3-e72a49954915)

* The entire data is **divided** into **8 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/704fb410-9e47-40a1-bbae-6da62ec8be86)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90be65fc-25ea-49d8-904b-19c7b1c20dbd)

* By adding all of the **numbers**, we got **75**.
* If the **sum is 75** then we are going to represent **-75** as the **checksum**, which is nothing but **1's comlement**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fb58b32-0500-4a5e-a4e7-ef41d4a420bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/640a6807-120d-4241-8511-892ee91b46fb)

* We are going to take the **Data(D) and the Checksum(CS)** and we are going to **transmit** it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9aac41dd-0156-4602-afbd-caa7b147d1ad)

* We are **adding** the **checksum(CS)** to the **data** and sending it to the receiver.
* The **checksum(CS)** is **negative** of the **sum of data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92a57d25-ac39-43fa-8c77-b4364084a1c1)

* Overflow -> 
* If we **add two 8 bits** numbers, what would be the **result**?  

> It would be as big as **9 bits**, it will not be more than **9 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87be06af-3b1a-48d8-9517-6f54fc1131b0)

* The **checksum(CS)** would be **8 bits** but we can clearly see that adding **two 8 bits** nos, give a **9 bit number**. So, there is **overflow** in the **CS** slot.
* The **solution** is called as **wrap around**.
* Whatever **carry** we are getting, we adding it to the **sum/result**.
* This is **wrap around carry**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a056116a-c18a-4ad6-b5d1-e81418acfbac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4fb4c65-2cd5-49f6-bfdf-fd1a9de8a115)

* Addition is a simple operation comared to **exclusive OR**.
* At the sender side, we have taken data and to the data we have added **checksum** and now we have transmitted it to the receiver.
* What happens at the receiver's end? What should the receiver be doing?

> Receiver is also doing the **same** thing. It has the **checksum**. It should get **0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b55624a-bdb1-4691-9a59-5f9379d3074f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af028ef6-11ef-48b2-a130-d3f073c0a395)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8718e31f-8e2d-424d-a5d4-11b92f51f2f2)

* We want to compute the **checksum**, but already the **checksum** field is already present and something has to be kept at the **checksum** field before we can compute the checksum.
* So, the **initial value** of **checksum** is always **zero(0)**.
* It does not affect the result.
* Therefore in the **computation** of **checksum**, many times the **checksum field** is used even if we don't know the **actual checksum value**. We are going to put **all 0's** and compute the **checksum value**.
* After **computation** of the **checksum value**, we are going to **replace** the **all 0's** with **-75** as **checksum value is 75**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3888f82b-ce54-45f7-b32e-39d82686c5b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0172ba04-1e90-49d8-80a2-41a2666561fe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a96ba85c-62d4-4304-9b1b-c8e5ee7e2fe7)

* CRC questions.
* Answer -> Corrupted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cd57363-bf51-4e7a-bdfa-910f70889079)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00f235d4-a292-4dbc-855e-c171a9631c5f)

## osi-layers-part-i-and-doubt-clearing-session (29) [19th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2015cff-5cc5-4f10-8a3a-24421b9a1481)

* CRC -> Mainly used in Hardware. It is computed in the **hardware(NIC)**.
* CheckSum(CS) -> Mainly used in Software. 
* NIC -> Network Interface Card.
* CRC is simply **exclusive OR**, so the circuit required to implement it is present in **NIC**.
* Where ever **CRC** is used, it is always a part of the **tailer**. **Tailer** means it is present at the **end** of the packet.
* **CRC** is always present at the **end** of the packet because **NIC** is going to compute the **CRC** while the packet is being **transmitted**. The **CRC** is going to be appended at the end of the **data**.

* Network layer and transport layer is completely **software**.
* Network layer and transport layer usually compute the **checksum(CS)**.
* **Checksum(CS)** is calculated when the packet is with the **sender** only.
* So, **checksum(CS)** is usually used in the **header**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/075d264a-8f30-4af7-9844-f54074d289b8)

## OSI Layers

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/781e323f-1ab3-41ed-bd5c-22f81ceac1e8)

* IPC -> Inter Process Communication.
* If two processes are in the **same host(computer)** and they want to **communicate** then we call it as **IPC**.
* If both of the processes are in the **same host(computer)** then the **OS** is going to provide us with **many facilities** so that they can **communicate** with each other.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc49c8b0-f489-46a5-ae63-6e8cd2783a96)

* When the two processes are in two **different hosts(computer)** and they are too far away and they are just connected through **network**, then we have a **very big problem**. Who will provide the required assistance?

> We need **special hardware and special software**. They should give us an illusion that both the processes are present in the **same host**. It should look like the **IPC** communication.

> The user doesn't have to do anything extra in order to take care of the **network**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c9a4630-d8cd-4dc9-a560-d15d1693fc35)

* This type of simplification needs a lot of support from **hardware and software**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57442fa1-82a9-47d3-ba93-b78719569400)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9664f3f1-af77-4365-a5e3-fb959ecb593d)

* Software -> Functions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80114542-d2c2-44ed-9031-112ace8b08ce)

* Mandatory -> Definitely needed.
* Optional -> Not necessarily needed. Completely user's responsibility.

* If they are not provided:-
* Error Control -> When data get corrupted we are not able to catch it.
* Flow Control -> Receiver gets flooded.
* Access Control -> There will be a lot of collisions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5203ea57-299f-4f90-be27-b8304e82427f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81c03ecf-8151-46dc-bbd9-76877cc515b5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00cd11c9-05e2-4c7d-bcb0-64f3821b2ac4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7615182b-cf27-40f2-83db-67f837068586)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/858f5413-c068-4f20-bb1c-2114d47b9119)

## ISO-OSI Model

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65797b63-b40d-452a-a603-529d1cfc928f)

* Totally we have nearly **70** functions including both **mandatory and optional** functions.
* We have to divide the work of the **70** functions or functionalities and assign the work to different people. So, it would be easy for the people to implement and test it.
* We will divide the work of the **70** functions into **small small** groups and we will implement them separately. This is called as **divide and conquor**.
* This is why we are going for **layering**. **Layering** will help in **divide and conquor**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d050db1c-6d9d-455b-b553-e3da6d6b0bfe)

* Encapsulation -> We will try to put all the **functions** which are **closely related** in a tight group as well as all the **variables** together.
* Layering helps in **Encapsulation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/143998b6-267f-4c31-b093-e612c6a32ad8)

* Abstraction -> We are going to have some functionalities implemented and someone else is going to have the functionalities implemented and the people who implemented the functionalities need not see the **inner details/inner workings** of the **functionalities** which are implemented by others as long as they are working together fine.

* We do not need to get into the details of how the functions are implemented. All we need is the name of the function.
* Abstraction -> We don't need the **details**, we just need the **name**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/946baa18-cfd4-4dbb-b165-e8daabfa3547)

* Testing -> It is also simple in layering.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fbdcc78-c538-4cab-8339-7acba04e45e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd2a877-4378-42fb-8a08-f872838a3603)

* All of the **70** functions/functionalities that are to be **implemented**. So, all of the **functionalities** are 
**distributed** among the **layers**. All the functionalities are assigned to the **layers**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e8cce4e-216c-4db4-a167-a33bf81ab684)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14d4cc06-d2aa-4bba-ada4-787ba3db1c09)

* Layers. [**IMPORTANT**]

## Physical Layer

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c827d8b5-4795-4581-9c3f-1b25b762a41e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/897c7dd6-1298-41dc-bb50-b7d43b847ec4)

* **Physical Layer** -> Not for **CSE** students. It is for **ECE** students. They learn in-depth.
* **Physical Layer(PL) and data linked layer(DLL)**, **Physical Layer** only have **hardware** and **no software**. The  **data linked layer(DLL)** has both **hardware and software**. 
* From the **network layer** up, the layers are **software** layers. 
* Network Layer -> Mainly for **Routing**.
* Transport layer -> Has a lot of **ports**, thick layer.
* **Application, Presentation, Session layers** are for **user's interaction** or are meant for the **users**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a158c94-07d5-494a-81a3-5cee821f6afb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/621892c2-5f5a-4e96-82c4-f7a7a65e56a6)

* **Physical Layer(PL) and data linked layer(DLL)**, layers mainly deal with **hardwares**.
* That's why we don't go much into the details of **Physical Layer(PL) and data linked layer(DLL)** layers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dfbec16-a3ab-44b2-ac48-fd9806f6c1e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18360193-80db-4844-a310-3647adcd41a2)

* Physical link is **wireless** connection.
* Physical link need not always be a **wire**.

* **0 and 1** will be converted into **light** by the **physical layer** for **optic fibre**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a67e97fc-fb04-4050-b557-afd06075d954)

* The **decoding** and **decoding** is done by the **physical layer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2ab29da-79c0-4a60-a939-9aedf9ea3e7e)

* **Simplex** -> Data can travel only in **one direction** [TV, radio].
* **Half Duplex** -> We can **send/transmit the data** and we can **receive the data** but not at the **same time**. [Wacky Tacky].
* **Full Duplex** -> We can **send/transmit the data** on **both the sides** at the **same time**. 

* All of **these(above)** is taken care by the **physical layer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d6d260a-c12e-447b-8779-a2525bc7a300)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cd57900-ec6f-46fa-8312-e208497f1187)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a754e6a-888b-4d69-88b1-038cfc543376)

## osi-layers-part-ii(30) [19th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3d30fd7-094c-4f20-9eaa-4a65769126db)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f98ba16-0625-4691-a7bc-62236e779c02)

* If not mentioned in the question then take it as **Full Duplex(FD)**.
* Topology -> It is the way in which we connect the systems.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85e9e362-6e9c-41a2-b080-77b07340601c)

* Topology
* There are **4** stations and all of them have to be connected by **Point to Point** topology links. How many cables are required?

> **6** cables are required.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a64ab2e-8127-42e3-8059-47d765b11d87)

* Between two stations, there should be a **dedicated** link.
* Everyone will get a **dedicated** bandwidth. We don't have to share the bandwidth.
* There will be **no collisions**.
* Communication will be fast.
* If we have **n** stations then how many cables required?

> **nC2** as it is a **complete graph**. We are trying to make it a complete graph.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4db8386c-51a3-42d3-a7c3-6518f5684ff4)

* There are **100 stations** already. We want to add **one more** station. How many cables should we be adding?

> It is **very difficult**.

* It is **very difficult** to **add, delete** and manage a station.
* The cost of the network is very **high**.
* It is not very popularly and not very commonly used. It is used only for some **dedicated** use case.
* **Point to Point** is not a **broadcast** channel. It is a **unique** channel.
* Everyone will have their own **dedicated** lines.

### Bus

* There is **only one** wire. 
* We can **add, delete** a system without disturing anything.
* Simple to install, easy to manage. Everything is fine.
* What is the **disadvantage**?

> Traffic problem or collision. **Collision** is the problem.

* We have to do the **access control**. It is a **broadcast** channel.
* If we are sending data, not just the **destination**, everyone can see it.
* **Bus** is a **topology** which is used in a **LAN** network.
* In a **LAN** generally all the parties are trusted.
* We generally don't use **encryption**.
* **Bus** is the most widly used **topology** in the world.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fba8202c-b0db-4317-abbc-bf9c0a0105d0)

### Ring

* It is nothing but a **circle**. The data can generally travel in **one direction**. We can send the data in both the direction, no problem. 
* In general it travels in **one direction**, so that there is **no collision**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4087db8-e6e6-48c9-90c9-5dc20476628f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a503a4fa-324b-4d83-853e-6ade0456cc1e)

### Star

* There is a **central hub** and we are connecting to that **central hub**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dc5021c-945a-46c6-8267-e563bd30e5dd)

### Tree

* It is kind of a **hybrid**. It is a **combination** of a **bus and a star**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/080af790-f1fc-4af4-8315-716bfab72718)

* Tree.

### Mesh

* It is a combination of **point to point** link. It is an extension of *point to point** link.

### Hyrid

* No one will use it.
* It is a theory. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08282f93-c4e5-4d30-8db8-02e2600beb40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15118b24-03c0-42df-8eff-66ef381c7143)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6223b180-4ccf-4bd0-86fd-c4a94b96c71e)

## Encoding

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78a18c95-d2b2-45ea-bed1-aec798be426c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/493b14e4-4488-4160-bb8d-52d60e2cacd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9d0afbc-8d7b-4690-8de5-84444fa7027e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af6bbfce-6d43-45e4-8e37-3313e501fda6)

## Data Link Layer(DLL)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22a12fec-0e01-437a-8f21-5442472cff49)

* Main resposibilities of Data Link Layer(DLL).
* **Error Control** used in **DLL** -> CRC
* It is because **DLL** has mainly **hardware** and for **CRC** we need **exclusive OR** and it can be done using **hardware**.
* **Flow Control** used in **DLL** -> GBN(Go Back N)
* **DLL** only deals with **one link**. Most of the cases it is a **wired** network. So, **error rate** is **less** and **bandwidth** is **more**.
* As we are talking about **one wire**, so **out of order** packets are not possible.
* **Access control** menthod depends on the **type of LAN**.
* **Ethernet** uses **CSMA?CD**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b7e34e5-96c7-4f55-a158-e4e15c0a956c)

* IP addresses are **logical** addresses.

## Framing

* If the data is **big**, we are going to divide the data into **small pieces** and to every small piece we have to attach the **header**. 
* We always need the **header**.
* Most important Things that need to e present in the header -> Destination,

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a13b99b4-3606-4c88-af5a-447191180e20)

* It is a **broadcast** channel so **everyone** sees it but only **C** was ment to see it.
* So, **every station** should atleast look at the **starting of the frame**. If the **destination address** is not it's **own address** then the **station** should **discard it** and should not **receive it**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f5e01f6-28d1-48dd-ad0d-184dd961bda3)

* So, **every station** should be **continuously** be looking at the **network** then only the **stations** will understand that a packet has started or not.
* If a packet has started then the stations will look at the **destination address** and see if it's their **own address**, if not then they will not **receive it and discard it**. If it's own address then only it will **receive it**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a2380c6-07cf-41a5-9c5e-97bd3241dbc0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0920470-2fb0-4408-aac6-4ba74a856621)

* What is the **problem**?

> Most unless and stupidest method. Why should be continuosly looking at the line.

* SFD -> Start Frame Delimiter.
* In **DLL**, the packets are called as **frames**.
* We are going to have a **pattern** which is not going to match with the patterns of the data.
* Usually the **SFD** is **1010101010101010101010101010..11**.
* No data is going to have such a big run of **1's and 0's**.
* The **Regular expression(RE)** is converted tino **finite automata(FA)** and then the **finite automata** is converted into **sequential circuit(SC)**.
* **sequential circuit(SC)** -> It is a **pattern** recognizer(PR).

> Finally we have a **hardware device**, so all the stations will have **NIC** and in the **NIC** we are going to have the **pattern** recognizer(PR). Whenever a packet is going on, whenver the **pattern** recognizer(PR) sees the starting of the packet, it will alert the station by saying that a **packet has started**. Just wait and see if the packet is for that station.

> If the packet is for that station then **take it**, otherwise just **discard it** depending on the **destination address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93139f9d-d20b-4ac2-8ed9-a2d2ab1ca85e)

* Every packet is going to have a **fixed pattern** before it. The **pattern** changes from **nnetwork to network**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a64c587-ae0a-4994-a98b-e9e23d07be53)

* So, **no station** has to continuously look at the **link**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c97f5e9-69fc-484e-992e-2f8c6fe97b8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abd242d9-c166-42bc-af57-84528fc9a2ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f2f211d-f355-4215-9bc9-0f319b344f92)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b764557-fe7a-4c5d-8df0-488308ee727e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdaac551-e097-417c-b5d3-fe10cc695927)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bc28c11-b50a-42e7-9e9c-d0edc2d8d138)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0948e8ed-b32a-46f8-9dc2-0bfd2ca38126)

## ethernet-and-switching-types-part-i(31) [21st July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0829190a-4384-4668-bfb3-8fb283585863)

### Manchesta Encoding

* Z -> Signal is **1** for the first half of the clock duration and then it falls down to **0** for the **second half** of the clock duration.

* (Inverted Z) -> Signal is **0** for the first half of the clock duration and then it raises up to **1** for the **second half** of the clock duration.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0cdeeaf-1e21-433f-834a-913ca54d2d15)

* How does the wave look like in manchesta?

> **Below**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1cb0f818-c8ae-4511-9c27-813cc58b057f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22a2eabd-a5a9-4770-a81d-c81ce8c23ad1)

* Manchesta encoding of the numbers.

### Differential Manchesta Encoding

* Instead of seeing the entire clock, we just see the **beginning**.
* Edge -> Either we start from **1 to 0** or we start from **0 to 1**.
* If it **starts with a edge** then it is **zero(0)**.
* If it doesn't **starts with an edge** then it is **one(1)**.
* So, now we have **two different** representation of **0 and 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cebc611-afaf-4073-88b0-82ceb613c609)

* Initially **1** should not have **any edge**. We can go with either representation of **1**. So, we can have **two different** waves.
* We have to check the **options** of the question, with what pattern they have started the wave.
* With what pattern they start with, the entire wave/pattern is going to look **different**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03121033-f9da-438a-90d0-28fc7a75d323)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa05eca4-2f65-492c-b75f-77322b216806)

* Any **Edge** will come, which we don't want. So we cannot use this representation for the **second '1'**.
* We should not have any **edge**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f26b0b1-7f85-463b-8eae-826838f65fb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbfd0cd2-5c66-44a6-8013-66d67f5c6c24)

* There should be **no edge** at the beginning of the **clock**. As there is **no edge**, so it is **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a0b5ab7-d9b6-449c-a7aa-fa34e6fea3f4)

* As there is an **edge** in **0**. So we have to jump from **0 to 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7edfea74-9a49-45b8-ae74-f26028aea3fa)

* **0** so we need an **edge** from **0 to 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22a39938-3080-4568-a087-656730db73d6)

* As there is **no edge** fro **1**, so we are using the **second representation** of **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7058b2b-5822-4f97-b7b6-e911c14efd4b)

* As there is **no edge** fro **1**, so we are using the **first representation** of **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43600258-5c83-4df8-847d-f6b42c566367)

* We will get **different** image, if we start with **different** representation at the starting.
* In order to send **1 bit**, the signal is **changing** two(2) times.
* The changes in the signal are called as **baud**.
* If we have to send **1 bit**, we have to send **2 signals**.
* For **10 bits**, we need **20 signals**.
* For **K bits**, we need **2K** signals.
* For **K bps(bits per second)**, we need **2K baud** per second.
* Therefore, **Baud rate** -> **2 bps(bits per second)**. [**IMPORTANT**]
* Baud -> 4 letters
* Bit -> 3 letters
* **Baud rate** -> **2 bps(bits per second)** -> **4 letters = 2 * (3 letters)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cda61af8-695f-4de2-8958-ba294a5e00c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6da1c22b-c27d-4fc3-948f-37d73c8d9ddb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c4c4614-0138-4728-9cc3-a94910a11b40)

* In **both** of them, for sending **1 bits**, we are sending **2 signals**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fb8a5fa-f39a-4226-999f-909b3979a82c)

* **Data Linked Layer(DLL)** is divided into **two** parts.
* One part is **Logical Link Control(LLC)**. It's main work is maintaining **flow control**. It uses support from/of **MAC**.
* Other part is called as **Medium access control(MAC)**. It's main work is maintaining **physical addressing(PA), access control(AC) and framing**.
* Mac Addresses.
* Both **LLC and MAC** have their own **Error control(EC)** methods.
* Both deal with **Error control(EC)** also but their main work is **listed above**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a40ac4c-8776-4b42-9eda-9959c040f3b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/651a38b3-0d37-4d4c-a8d2-d5e18e17ab8c)

## Framing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54238754-1881-412c-9a02-e427267c8e8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/999ef29d-73f8-4f01-9f8a-84ed7a1bf98c)

* **SFD** acts like a **wake up** call.
* Everyone can sleep until they see **SFD**. Once they see **SFD** they can actually start reading the packet.
* We are going to take the pattern which is a **regular expression(RE)**, we are going to convert the **regular expression(RE)** into **Automata**. From the automata, we are going to design the **sequential circuit(SC)**. The **sequential circuit(SC)** is going to be place in the **NIC**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89b32e32-0e3b-4224-9e85-48ea30375d90)

* Have a **fixed length** for all the packets?

> When we have to send the data **greater** than the **fixed length** then there is a **problem**.

> When the **data** is of **less size/length** then we have to do **padding**. It is a wastage of space. These wastage of space is going to leads to **internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90f23bf7-06f9-456c-b85c-f83a7b9c6c71)

* Have **variable length** for all the packets?

> If we have **variable length** packets, then we cannot say the **size** of the packets.

1) We can include a **length field** in the header which is going to tell the **length** of the  packet. Then we can read those many bits/bytes of data.

2) We can have a **end delimited**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38713b5b-3c15-4126-ad78-c6eb31714008)

* Because of the **end delimited**, we are able to know that we have reached the end of the packet.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24ca87eb-2208-40d2-b7db-d4ef60d4237a)

* Both the methods are used in **different LANS**.
* **Ethernet** has the **length field**.
* **Token ring** has the **end delimited**. [Not in Syllabus]
* They are **many LANs** in the world which are using **both**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5acb4db-7af3-42fd-849f-7037e90a0193)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecbba55d-9a17-4b4a-aa90-b1580b972a7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d371e750-1133-4eb2-8870-02ff29c13d82)

* Framing.
* Theory.
* Stuffing -> Adding.
* **CRC** is present at the **end** of the packet.
* Computing **CRC** is not a simple thing.
* We  have **1GB** of data and **16 bit CRC**.
* For **1GB**, we have to take every **16 bits** and we have to apply the **exclusive OR**.
* The computation is going to be **every high**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/754a3ab8-8ab6-4ca4-8859-a44c204036a4)

* In **framing**, we can have **two** solutions..
* **Fixed length** -> We don't know what length packets we will be sending.
* **Variable length** -> It is very popular. With **variable length** packet, we should also send the length of the packet. 

> We can have a **length field** at the beginning of the packet, the **header**. The **length** field should be present at the **header** then only the receiver will understand how many bits to read.

* Therefore, **length** field should be present at the beginning of the header.

* We are going to have **end delimited(ED)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e84f484f-c4ba-4b28-944e-d3e3ed1a594b)

* We are going to choose a **pattern** which is not going to **interfer** with the patterns of the data.
* We are assuming that **$** is a symbol, which will never be a part of the data. Therefore we are going to use **$** in-order to represent the **end delimiter(ED)**. [Just an asymption]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1336d2e4-a899-4fb1-88c9-8b9d8072b31b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fd9e1a7-bb5d-4d0f-a172-06797c512872)

* End of the frame delimiter or end delimiter(ED).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65569791-0989-416c-b8f4-1af9c41916a0)

* Whatever **pattern** we have on the **end delimiter**, we should not have that **pattern** in the **data**.
* The **end delimiter pattern** should not match with the **pattern** in the **data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5023086f-d09c-46b0-8e60-ede146d8eb66)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75917e8b-5f2a-4c03-9db8-8d560694502f)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2e5165b-6069-4fe1-ae54-d82d357b6b25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fc668eb-b405-4bc1-b8e9-3723839901c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76f69c13-3b42-45bd-a189-80741d52c623)

* SFD -> Beginning of the packet.
* ED -> End of the packet.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c759ae5c-57ce-4cfb-864d-3fc4a30288cd)

* What can we do?

> Why sending the data, the **sender** whenever it sees there is a match in the data. It has to a **append** a new character before it. The **appending** of a new character is called as **character stuffing**. We can choose **any character***.

* We are **adiing** a character.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f54238b2-b8f5-43c1-9a66-3b882b3208ad)

* On the **receiver**'s side, whenever it sees a **NULL(\0)** followed by a **$** then the **receiver** understand that the **NULL(\0)** is added by the **sender** and the **receiver** removes it and then reads it. This is not the **end** of the frame.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cddbc70-49e3-425d-ab6a-640f24c879e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6778943-c8f5-4fe2-91e1-4ad69cfba6e0)

* We can take anything, we just took **\0** as an example. There is **no standard** here.

## switching-types-part-ii(32) [21st July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd68d61e-f9e2-4e31-8d5b-474745ffe533)

* Class was for 12mins.
* Some issue with pen.

## switching-types-part-iii-and-doubt-clearing-session(33) [21st July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/152f3769-15d1-400f-bf3b-8f20a0ef1ee7)

* SFD -> Start Frame Delimiter.
* In order to find out the **length of the frame**, there are **two** methods:-

1) Length field in the **header**. Used in **ethernet**.
2) End Delimiter in the packet. Used in **token ring**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bc9ef42-a45a-4ad4-85c3-669373b41902)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78847fe2-dee9-45c0-8f0a-b7c579ef755f)

* SFD -> Starting
* ED -> Ending.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f18b54d1-f1c4-4833-887b-c6e47cc12f5f)

* If we put **NULL(\0)** character before the **$**, then the **receiver** will understand that there is a **$** that is present in the data but it is **not the ending '$'**. It is part of the **data** that's why user has added the **NULL(\0)** before the **$**.
* This is called as **character stuffing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f565cd50-9512-4034-af2d-1e47492f57df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/860a3741-f7f8-4a01-a0c9-951d24552b5f)

* There could be a **problem**, if the **NULL(\0)** character gets **corrupted**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab6398eb-7469-4839-99b0-c01d2cb4e700)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bfdc154-2e3e-4a06-bc0e-f4bcdd9b31ca)

* Another problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50e08aa5-5685-4b7e-a343-08fe4be6001b)

* Problem.
* If in the **data** only there is a pattern of **\0$** is present and we haven't added the **\0** before the **$**. That is a **problem**.
* The **receiver** will blame that we have **added** the **\0** before the **$** even though the **sender** has not **added** it(**\0**).
* The **receiver** will remove the **\0**, which is a part of the data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c17987f7-0eeb-4201-8a24-99540bd4b12f)

* We have to solve the problem, whenever the **above case**, arises we are going to put an **\0** character for an **\0** character and for **every $** we are going to put an **\0** character.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd14a334-d548-43ae-b3cf-d2befe015419)

* This is how **character stuffing** works.
* For **$** we are going to put an **\0** character. The **receiver** is going to **remove** the **\0**. That is why either there is a **$ or \0 character** we are always going to **add** a **\0** character. 
* So, whenever the **receiver** sees the **first \0** character, it is going to **remove/delete** it.
* The **remaining** part is going to be **read** as **data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/255e80ff-9b25-44a4-bfac-e9ad55237a23)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbaa7926-99d9-40a7-bb32-d7db1cf3e4d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faca3b75-370f-413c-bf6b-37f8d0d1ee3b)

* Yes.
* This method of **character stuffing** is clearly **in-efficient**.
* If **NULL(\0)** is in the **data** then there is a problem, otherwise there is **no problem**.
* Because of the **disadvantages above**, we don't use it anymore.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdcaf0a3-41f2-41f5-8848-67c8cd130423)

* Adding character, **the size is increasing**. Therefore, it was used long back.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f4d870a-d4ae-4a0e-afc4-41c3f2d3718a)

## Bit Stuffing

* Binary Pattern -> Followed in bits, 0 and 1.
* When we have **01111**, zero followed by **4** ones. It is the **end of the frame**.
* Pattern -> 01111

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a4bcc39-c712-4c31-87fd-ef0ed70e0c7a)

* The pattern can be easily present in the data.
* When the **receiver** receives the **pattern(01111)** in the data, then the **receiver** stops reading the **data** from that point onwards.
* Even if there is a **very little** probability of happening then also if there is a **probability** of happening then that thing will happen.
* If there is a **probability** of something going wrong, then that something will definitely go wrong.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b499838-0e7a-4d75-a403-88e26342516c)

* Solution -> **Break the pattern**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb1bb7eb-bfce-455e-a892-b8cf77b10561)

* Yes, that is the **goal**.
* Adding a **zero(0)** after the **first, second and third** one(1). All **three** are perfectly valid. BUt we will go with the **last one**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0f57dfd-389f-4529-bd22-4228964e0988)

* Whenever in the **data**, we have the **pattern**, which is matching with the **end delimited**, we are going to do **bit stuffing**. After **bit stuffing** is done, the data is transferred/sent to the **receiver**.
* The **receiver** is going to see **011101**.

> The rule is whenever there is a **0** followed by **3 1's** and followed by a **0** then the **receiver** will understand that the **first zero(0)** from the **right side** is actually **added** by the **sender** to break the pattern.

> So, the rule at the **receiver's** side is, whenever there is a **0** followed by **3 1's** and followed by a **0**, we **delete/remove** the **zero(0)**. This might be a**added** by the **sender** in order to break the pattern.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26826bbf-795c-4af5-87c3-56761ee048b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81591e75-5b50-4638-afb4-10b9e088dbf6)

* Problem.
* What if the **data** is **0** followed by **3 1's** and followed by a **0**?

> We didn't **stuff** it. We didn't do anything with the **data**. The **data** itself is this.

* We are sending the data and the **receiver** receives it.

> Whenever there a **zero(0)** followed by **3 1's**. Whenever we see a **zero(0)** after it. We have to **remove it**.

* So, the receiver will remove it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e994d94-f424-4e77-94da-49ac70531499)

* It is not added, it is part of the data but the receiver is removing it.
* Even though it is off no higher priority, we still have to **solve it8*.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da78540f-2ee6-4ba2-9230-00449a54b859)

* In the **sender side** if there is **0** followed by **3 1's**. We are going to **append** a **zero(0)** after **3 1's**.
* In the **receiver's side**, whenever it receives the data, **0** followed by **3 1's** and a **zero(0)**. **Receiver** is going to **remove** the **zero(0)** from the **right side** saying that the **seender** has added it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/175764dd-a09b-453b-a587-4ded4d6bec8a)

* The **problem** is when the **sender** has not **added** anything, the **data** itself is like this. Whenever the **sender** is sending the data, then the **receiver** will **remove** the **zero(0) bit** from the **right side** of the **data** blaming that the **sender** has **added** it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8557de6e-bbbf-4699-aa5c-9f0e7d68a858)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6a3c063-12c0-45bb-b82d-c637d4ec7693)

* We(Sender) are being blamed for something we(Sender) didn't do.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f6920dc-45c7-4937-90c8-80c75d1a7763)

* Receiver is anyways going to **delete one zero(0)**, which is after **3 1's**. If anyways the **receiver** is going to **delete** it then we **better** add another **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88b43afc-88e5-4553-aa38-69588062ad1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34a83b65-2404-45a9-9935-f232275cc60f)

* The earlier rule was that whenever **0** followed by **3 1's** was there we are going to put a **0** after the **3 1's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f4b33d9-6214-45be-af53-ec28b23bebb6)

* Now, the rule is at the **sender** side has changed.
* Whenever **0** followed by **3 1's**, even if there is a **0** after the **3 1's**, we are going to **add a '0'** after the **3 1's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3ded1a0-b96b-48fa-a512-5fcb7bfe68c6)

* Whenever there is a **zero(0)** followed by **3 1's**, we are going to **add a '0'** irrespective of the **next bit**, even if the next bit is a **zero(0)**. We don't care, **zero(0)** followed by **3 1's**, we are adding a **0** after those **3 1's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d5dc0e0-7136-4388-801f-1cfa052fc4d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/875b257b-5452-4033-92ea-d7da4dad6010)

* On the **receiver's** side, whenever we see a **0** after **one '0'** followed by **3 1's**, we are going to **remove/delete** the **zero(0)** from the **right side**. 
* The condition is that the **ED** is in a **sepcific pattern** which is **01111**, zero(0) followed by **4 1's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/831c1be4-4471-4bfc-a8c9-0122135085d2)

* Whenever we see **0** followed by **3 1's**, we **add a '0'** irrespective of what bits comes next.
* We don't care.
* Doesn't matter if the **data** is matching with the **pattern**, just add the **0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40b76eec-0e55-49a5-9f3a-26fd1a81d159)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3f3539d-d4e5-4cb0-ad6a-cd5a31159935)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a47031a2-0341-4c98-a1b7-f81aea57ab8e)

* Why are we adding the **zero(0)** after **3 1's** and not after **1 or 2 1's**?

> Explained in the **below image**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a6f8525-553c-4424-adbf-a4c2b7106084)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21b27de7-dd7a-4cca-96b6-e15f2ac2d8af)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/056885f2-b99e-4c95-821f-e0ed4d79d8f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24bdb60b-068c-43f9-a046-88b20da0702b)

* After every **01**, we are going to **add '0'**.
* **01** is every in the packet, it is **very common**.
* Packet size will be **very big**, as for **2 bits**, we are using **3 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55bf7f9d-802e-45cd-9e04-58c08fcc2c8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac1e0188-968a-4ae7-93ad-197912916b2c)

* Question
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c570a84-4574-412e-92df-11fc326d3b9d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce6bd292-4fb3-437d-9d57-087ee6201f34)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70fb76de-7d8e-4f9b-9c2e-66edf5f69052)

* Question.
* 1 after every 1000
* 1 after 3 zeros

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/497c0e76-cbbb-43a9-8e7e-4c66a7ff78dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed37f338-39f8-4038-a82d-fe041648c426)

* We are breaking the **pattern** after the **longest bit**.
* Delimiter(DL) can be anything, it is generally, **01** followed by **all 1's**, **OR**, **1** followed by **all 0's**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b1f5d30-bb35-4c56-bfa7-be7b6ac263cd)

* In the exam, they are going to clarify which **Delimiter(DL)** they are using.
* Sometimes, they are going to say in what way they are going ti **break the pattern**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ac043e7-5ef3-4c86-99f4-f38c153be7b4)

* **End Delimited(ED)** is a combination of **1's and 0's**.
* **Bit stuffing** is **very popular**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d06f142f-a938-40ab-89f5-f5d174a0dc6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56afe4e0-3917-4ed8-b17a-44a5d54a9275)

## ipv4 (34) [21st July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b48b322-a2eb-4c24-b21d-d28da8c6d745)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cc55b87-eaf3-428c-99e5-2980f8b1a758)

## Network Layer

* Network Layer -> **L3** layer.
* We are following the **bottom-up** approach.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f51df386-9206-46db-80df-a5fac6c36172)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9cff70a-7fb0-4ce5-a592-a6e2367cacb0)

* Size is not fixed but there is a limitation on the **amount of data** we can send.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87f56ac9-662e-493c-9c24-8ce4e7c4b3c9)

* Functions of **Network Layer**.
* Some other **responsibilities** are there which are not so important:-

1) Congestion Control -> Also done by **network layer**. **IP** doesn't deal with **congestion control**. **TCP** deals with it.
2) Fragmentation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd356faa-c813-4c96-9ee0-4ec62cf2c138)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83885ae9-3240-46fc-9b70-518223553af9)

* **IP** completely ignores **congestion control**.
* If asked for **functions of network layer**, then mark **congestion control**.
* If asked for **functions of IP**, then do not mark **congestion control**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2eeb182-5ee1-4950-a82a-5f3067531994)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed61c320-603d-4f8b-b682-39b62c1fb8a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d81700a2-0c86-4012-a81f-97a055a80eea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f081b707-c574-4280-82d2-1a45bcf1ba63)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7a56736-955f-4366-a632-c7882870cbb7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57f64d10-6080-490d-bcb5-3bd73f447f66)

* If we have a **host** and there are **many processes** in the host.
* Generally **communication** happens between the **processes** and not the **computers**.
* We have to go from **one router to another router** only.
* One Jump -> Hop-Hop.
* The **Hop-Hop** communication is taken care by the **DLL** layer.
* **Host to Host** is taken care by the **network layer**.
* **IP address** is handled by the **network layer**.
* **End to End** delivery is taken care by the **Transport layer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af90740a-ee61-44dc-b123-909988667786)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67a153ad-0694-4d3a-b021-501b9eb2961a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b8eb8d3-6e5e-4ae4-8244-3f48c7168e54)









































### Misplaced Images


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62e3bd2e-4498-4c70-8565-62c2f8fa0bc8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5cfada5-4035-4541-bed0-9dc30980ed72)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/872195d4-3921-41f3-94dc-7b2819922cab)
