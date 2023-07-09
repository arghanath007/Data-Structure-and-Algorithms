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
























### Misplaced Images


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62e3bd2e-4498-4c70-8565-62c2f8fa0bc8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5cfada5-4035-4541-bed0-9dc30980ed72)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/872195d4-3921-41f3-94dc-7b2819922cab)
