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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52c1b4ac-9113-4fde-be7e-85e5ca7a589f)

* All castings in a **table** format.




















































