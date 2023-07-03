![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62e3bd2e-4498-4c70-8565-62c2f8fa0bc8)# Computer Network

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













