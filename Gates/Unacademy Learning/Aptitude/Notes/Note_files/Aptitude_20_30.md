## Doubt clearing session (20) [18th June 2023] [26th Feb 2024]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/394be26e-fce2-483d-9c8b-8805cf56eeca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4499395-733b-4d35-9bc5-b1776b002bfa)

* D2 > D1 [Example] [Question] [**VERY IMPORTANT**]
* The outcome of the **2nd dice(D2)** must always be **greater** than the **1st dice(D1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/750ee2c7-7d00-4c28-9275-78d4f4c9c923)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c108ca83-b222-426c-9d9a-ee6a78ef9efa)

* Question. [**VERY IMPORTANT**] [Not able to solve it]
* In case of **dice** there is **arrangements**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5796afb-dd6a-4bec-93d9-c521a50bd37c)

* P(Exactly one 6)
* 6' -> Not 6.
* P(One 6) -> 1/6
* P(Not 6) -> 5/6
* **3!** for the **3 numbers** we have and **2!** because **2 numbers** were repeated. [Example] [Question] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c1c5b36-7f75-422a-af8f-fa50448cb34c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/241f6596-55b0-47b0-a4ff-4f83b8b22d84)

* Question [Example] [**VERY IMPORTANT**] 
* P(333'3'3) -> (1/6) ^ 2 * (5/6) ^ 3 * 5!/(3! * 2!)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af8ed3ce-6db0-4815-9f1f-7b9c6b89d701)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3873b97c-1206-4990-87f3-29b74b73f5a3)

* Question [Example] [**VERY IMPORTANT**] 
* P(666'6') -> (1/6) ^ 2 * (5/6) ^ 2 * (4!/ (2! * 2!))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/156a7754-ce5a-4689-a830-953689c11a16)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4711d13f-0890-4f25-b0c9-94498998d1dd)

* Question [Example] [**VERY IMPORTANT**] 
* P(HHHT) -> (1/2) ^ 3 * 1/2 * (4!/ 3!)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/727b722c-5d10-4752-b739-848b12273f97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd6c0bd7-b9d4-4be0-aa68-96cb0901111f)

* Example. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb054756-9ac4-4487-a9ee-1256c14155cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10d7d99b-81ea-4d13-8337-245768b27b8b)

* Question [Example] [**VERY IMPORTANT**] 
* P(11111') + P(11111) -> 1/6 ^ 4 * 5/6 * 5!/4! + 1/6 ^ 5 * 5!/5!.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4583aaa6-5c5d-406e-b91d-05b11cb9ae8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3223897-2ece-4c88-96ae-ff92f1402f06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d43b183c-3ca0-4914-ab90-fbe73769233e)

* P(5th Head) -> P(HHHHHTT) -> 1/2 ^ 4 * 1/2 ^ 2 * 6!/ (4! * 2!) * 1/2
* Solution. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b7c5699-e560-4380-8e15-deab28d97268)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/beb7198a-e082-4d2d-802c-50bd56e48d52)

* P(4th Head at 10th Toss) -> P(HHHTTTTTTH) -> 1/2 ^ 3 * 1/2 ^ 6 * 9!/ (3! * 6!) * 1/2
* Solution [Example] [**VERY IMPORTANT**]
* Practice the above questions again. They are **Very Important**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1af2d05-8a51-4a6f-bcd7-bb2a316342fd)

* Example. [**IMPORTANT**]
* For the range of **1 <= N <= 30** and with the **30/3 = 10**, we will get **3/6/9/12/15/18/21/24/27/30**. 
* For the range of **11 <= N <= 30**, we have to **exclude** those nos which are **less than 11 and divisible by '3'** which are **3, 6 and 9**. As, **30/3 = 10** but **3** nos are **excluded** so it is **10-3 -> 7** and we will get **12/15/18/21/24/27/30**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1b8f6a7-32c9-4b0a-8416-504ec9d715df)

* How many **2 digit** nos are there?

> 90.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8edf8ead-cd2b-4f1f-82b5-f314f3cd6182)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/feb9b8b6-06db-4466-826a-5ff7417822e6)

* Question [**VERY IMPORTANT**]
* Sample Space -> 90. [Not 100, because we are talking about 2-digit numbers]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/feb5fd4e-7145-453c-8b50-6c14b7121c96)

* Option **D**. [**VERY IMPORTANT**]
* Practice is **again**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/931d5677-0df1-47cd-a310-5bc2bf15d8d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e98dcf8-f56d-4ee8-bc00-d33a732f61e5)

* Playing Cards. [Numbers] [Formula] [**IMPORTANT**]
* Face/Picture cards -> Jack/King/Queen -> 3
* Honour Cards -> Ace/Jack/King/Queen -> 4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b38c9480-846f-4322-82df-a7006240df25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce02bafe-481a-4c4d-be77-7185e1e2a407)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31bff30a-808c-45b5-bccc-c37c39dfbb78)

* 3 cards -> One by One / One after another / Successively.
* With replacements
* Without replacements.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d92947ab-d83a-4069-b59f-c88d83acece8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6676f48-9260-4cf8-9de1-bf57aa937fbb)

* Ace -> 4
* P(Both Ace) -> 4C2/52C2 
* P(Successon with repeatation) -> 4C1/52C1 * 4C1/52C1
* P(Successon without repeatation) -> 4C1/52C1 * 3C1/51C1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7b6d456-8077-45ad-88cd-d8cce0840321)

* Solution. [**VERY IMPORTANT**]

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Permutation and Combination

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0eee310c-c595-4d11-bc70-4361aa80b6cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46b5b119-600f-4076-a1f4-df7981881875)

* Hunderth place > Tenth place > Unit place

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/755da662-1092-4bcd-ba08-dc309fac2a54)

* Wrong.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd8edce3-c4f7-405f-9ea9-267388f84699)

* What we do in maths.

## Double inequality

* If we need **double inequality** then always attack the **question** from the **middle**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4518319f-bc7d-4df4-83e8-4d7bf0a351e8)

> The basic philosophy is there was a **inequality** between the **tenth and unit's** place, so we solved it  and once we are sorted with it, we moved to the **hundredth** place. Then we solved the **inequality** between the **hundredth and tenth** place.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b78b5bbf-c380-48e0-a1a6-84dae5a0673c)

* Total **no. of cases** would be -> **10**.
* We have **two/double inequalities** that needs to be satisfied. That's why it is taking some time to solve.
* If we need **double inequality** then always attack the **question** from the **middle**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/029ba592-d33a-40f6-a043-1b668134846f)

* **STEPS**:-

1) Find the range first.
2) Fill the **middle(tenth place here)**
3) Now fill the **left and right places** with the rest values.

* When we are  doing the **middle** first, the **double inequalities** are taken care off at the **same time** or simultaneously.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36191d87-5200-474c-8873-e050bf2ebf7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6357f33-2fe0-406d-a24f-c51f9ee362d3)

> When we are putting **3** in the **middle(tenth place)**, the **left and right** side places have the **same or consecutive value** which is **2**, then **mirroring** is happening in the other **two** cases.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f861dd96-3eaf-4aa6-90b0-c6c6e25e9929)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8639ece-0081-4f25-bdba-96c8d2cdcc5e)

* Another example.

> In the **4** value in the **middle(tenth place)**, we are getting **same or consecutive values** which is **3**. So, we will get **mirroring** values.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05d64d62-23c9-43d9-a055-dd664a438206)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66875b03-7d7c-412b-9095-8f61be38abdd)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e583c51e-a510-49ca-9c35-62318eea9cdf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1e9d41a-9b24-4e5b-ad4a-08b002c8653c)

* Consecutive nos here are **5 and 4**, so **mirroring** happened.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a2f85ed-caf1-4d14-8eb3-d1a08421f9a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3afe7ff4-5ba7-48b9-8ab6-65c469421c17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4be8077e-d595-4542-ae3c-7f96de83fc59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/024afb86-142f-47f2-bed1-49968054c361)

* Total cases -> 27.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f09d2c6c-3d9f-4877-a7d4-cef849a0f9a1)

* Out of the **27** cases, we don't want those 3-digit nos, where to the **immediate right** of **2** there is a **1** or where **1** is on the **immediate right** of **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ea05317-7cdf-4782-930a-51a3cbe4f532)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5406b3dc-8090-40d2-9a6b-edab6ebded34)

* Cases, where **1** is on the **immediate right** of **2** which is **3 + 3 -> 6**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/192701df-e9e7-4226-bef5-1fb9007d617d)

* Out of the **27** cases, We don't want those 3-digit nos where **1** is on the **immediate right** of **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9381ea7-f90a-48cb-b7e8-51d72ff46f15)

* Using **1/2/3**, how many **3-digit** nos can be formed?

> **27**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/070fcdcf-6e75-4883-8b2f-9849e710b3df)

* Total -> 27
* Not required -> 3 + 3 -> 6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5b3e367-2487-4aef-a31a-7b0ed28076c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c0a7dfa-459d-408d-ad87-5191655afd97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14a09533-a123-486a-8e13-42ed2de78cde)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46ccca01-4b61-4552-b108-0538af16bd0c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20017954-e4f3-4dcd-9d95-b878619f3f04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28f76f3a-04f2-49da-9e12-8ce6b1ca8e98)

* The person can take either **1 step or 2 steps**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ea1be04-9120-457d-a451-2f099be828a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c24e2283-858f-4daf-a084-d540b9cebf32)

* **No. of ways**.
* Double Step -> D.
* Single Step -> S.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddd583cb-b242-407b-9021-92fde8b8ce7a)

* **DD** -> 2!/2! -> 01

> As two double steps so **2!** and **D** letter is repeated **twice** so **divided by 2!**.

* **DSS** -> 3!/2! -> 03

> As one double steps and two single steps which is **3!** and **S** letter is repeated **twice** so **divided by 2!**.

* **SSSS** -> 4!/4! -> 01

> As four single steps which is **4!** and **S** letter is repeated **four** times so **divided by 4!**.

* Total no. of ways -> 1 + 3 + 1 -> **5 ways**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/027b8b5d-fda3-4be7-91b4-c3a7b2df0c97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b04f8dfa-37e2-4bc6-b84a-db266e7c0f26)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d6a85ed-18b8-4ed2-9e28-ab3a14911389)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1802844e-7046-42cc-89d5-d14d51296039)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0beacd96-66b6-45fa-955c-ceb02f521088)

* How many **4-letter** words can be formed from the letters of the above word?
* We are only **dividing by 2!** and sometimes by **2! * 2!** and sometimes **no division** because we are making a **4-letter** word and depending on the **letters** the **divisor of 2!** is coming.

> **HW**.

## Verbal reasoning part-III (21) [18th June 2023] [28th Feb 2024]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57325072-c288-4bfc-ba2e-07ffc9482fdf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77b4699c-719d-449f-8a9c-75730f280ed9)

* NPL -> Non Performing Loan.
* NPA -> Non Performing Asset.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a1ddbe6-28e5-4c90-8daa-e4ce96776b10)

* Prime and Sub-prime lending.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56cfae7d-e3d5-4931-91a7-86d2023023a0)

* Consumerism.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e549aae1-3061-4a31-92f0-c3ba532b3984)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d7f4d1d-df9d-4af9-9147-de4bdd20cc42)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f4d65df-542b-4801-bdd8-a7209b177a2a)

* Option **A**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/563d35fc-53e4-4bc6-9009-aee7d65418b3)

* South Asia -> MBBS PAINful -> Maldives Bangladesh Bhutan Sri-Lanka Pakistan Afghanisthan India Nepal.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bbc4077-4ca4-4091-a0c4-07c71050375e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f02fd72-7a26-4520-95dd-69975e08a7dd)

* Geopolitics.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88b81d78-8e79-49d8-8810-dafdfda2ce92)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f0dc84f-56ad-4274-a314-916d76c4413c)

* Growth. [**VERY IMPORTANT**]
* Recession.
* Depression -> Great Depression of 1929
* Recovery.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e24fce1f-c50a-443b-8598-eab906fc309c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fda6a5e-fa6a-4488-8f51-479f543edd8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a9a787d-40a2-4820-92e6-a35eb9faf572)

* Question. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92f2be9d-4857-4953-b6f1-cb24cd5d346e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/879ac534-91aa-4088-9a1d-74bdab153dac)

* Option **B**.
* Lementing -> Grief/Grievance/Remorse/Regret.
* However -> 180 degree word.
* Optimistic -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28834ec2-ced9-41c0-b87a-b0a5189343d5)

* Repentance.
* **Contrite** -> feeling or expressing sorrow or remorse for sins or offenses.
* **Penitence** -> feeling of deep regret for past conduct, usually for some misdeed

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5bf2890-f241-4a35-9b4d-e1d7ece45f43)

* Option **B**.
* loose -> Not fastened, restrained, or contained
* louse -> Lice

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50975722-d284-4bf2-9210-0202d396b525)

* Its/It's
* Ravi's notebook. [This is correct]
* In case of **human beings**, **'s** means **posession**. On the **contrary**, **'s** means ** it is**.
* It's my birthday. [Example]
* It's raining. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/271345ce-52b7-43a1-a7e2-9f9d6c51e947)

* My dog is such an idiot that it has broken its leg. [Dog's leg]
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a47ae84a-361f-4815-9293-c00c5ca6deeb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08b990dd-f672-4002-8b73-b94b320c9314)

* Is it True?

> We check the credibility of the statement. Truthfulness of something. Credibility.

* Is it Real?

> We are checking the existance of something. Physical Existance.

* Cred -> Credibility/authenticity -> Incrediable India. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e553c330-870d-42f7-a41b-4d4f9588488a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ed3ae57-f322-4e85-8c97-82eb1d3ef04c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a00dd5ba-c4d3-4772-9e08-294155f77535)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce6e5d33-2159-4bc3-91ef-d41715850be1)

* Clock.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a9c2b1d-c77e-4bf6-9ea2-47cdf8f6a91d)

* 11:00 -> 1:00

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96192dee-f995-4f8c-afd3-a9efd82b3d7b)

* 10:00 -> 2:00

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a71f1ee9-318c-4c7f-b90b-43c331e294b3)

* Trick.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8579f2d-be64-45cd-bbf4-10d5307d74af)

* 10:30 -> 1:30.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca6ef89d-6ccf-48b1-9a5c-21b2f2a00f11)

* 11:30 -> 12:30.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce97add3-4cac-4098-83d1-a8f387174432)

* 9:30 -> 2:30.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a31f9034-b311-4745-a101-31b172cfb029)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e647b3a8-d55b-4d6a-a69d-15238e037856)

* Option **D**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61f527b4-4be9-484f-9381-8f3bd21705a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/509cf289-f254-4141-8128-344508e3d46e)

* Option **C**. [**VERY IMPORTANT**]

------------------------------------------------------------------------------------------------------------------------------------------------------------------
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d80211a1-a2e3-4ea1-8efa-43c31158b5a5)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7a040ff-3b3b-4f77-9303-68cedfef804e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbf2d437-4a87-448d-b72b-a6a296d8ecb6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/395d1b55-f2a1-4806-b8f8-6a0867d073be)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03121011-cc31-4e56-bb99-c412d272b4f5)

* Image -> Visual Reasoning -> Spatial Aptitude [Since 2021]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21f2f5e4-b37e-450c-bcc0-4f5d56ec04c7)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c9aa3bd-9c84-4926-89ef-a71c1107bc97)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8f7eed0-3409-44bc-b6b4-7fc43010d034)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87b60af0-7f4b-4a99-9f6b-b7a91545696d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/233a963c-d5a5-44ce-83eb-31bdc4a18e94)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85909867-22a6-47ab-86ad-277a105ab905)

* When **Argha** sees outside of the window, it is **weather**.
* **Weather** for an **extended duration of time** is **climate**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ca401cb-c06b-4c95-9715-79144a1e6bd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10de448b-1380-4144-a08f-165d65449611)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18375c92-ba29-4509-8e0d-f97bbf1f0965)

* Discussion on **How to prevent climate change**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1eba182-49e9-4949-893b-e052036eeda0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ec67676-7cb3-47cc-aa3d-86289f61c3ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d1e7810-9c94-4bdb-be1e-caf524f7457a)

* Depends -> Could be positive or negative. It could be either.
* In the paragraph it is writeen **contradictory**. So, **'D' option** incorrect.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fde57a6a-ac33-4034-bd77-574fc4f38fbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0af0f9a5-213e-4b46-90d0-4ca8f24d5050)

* Tik-Tak-Toe

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f86fb92-b131-489a-9b19-672ce7fe6a5b)

* Question. **Sudoku**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71386e8b-aeb4-4551-b33b-4f11af4ee0d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2b23ea1-8d30-432b-aeb2-d10d54ab52ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e96b554-37d8-44be-aa19-a3f981769b0b)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd04867b-1cc9-47e3-a908-328d9fb0558a)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fec96972-c761-47f4-aedd-265ff4caf202)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfaef779-d41c-4374-b070-a4cf4271a88a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0b87fc5-489a-42b7-8661-0a6867011a2a)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e435561-5891-4d2d-98f7-0677f6f14ed5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/472e40bb-e67f-47e2-a04b-d538cae87534)

* Question
* Option **C**.

* Policies:-

* Fiscal Policy -> Policies that are a part of the mandate of the **Finance Minister** -> **Growth, less debt, Inclusion**.
* Monetary Policy -> Monetary Policy Committee -> RBI -> **Control inflation, Exchange rate**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db6f787b-e4fe-4ace-af2f-31dea60be33d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b8c8edc-4f64-4208-9049-45622033f3b0)

* Fiscal Policy -> Disciplinary actions.
* Fiscal -> Discipline

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a162086a-0e86-43db-9ab5-a418d568501d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0639469-cb45-4b71-bbd3-6f18d57f9233)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/176e8407-c50e-45c5-8f13-ae7b879d6b7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f20b537-932b-486d-bf2e-89d394c1490b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/663ef650-eda2-42f8-a24e-caba9031e7b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d31c1cef-3b74-4d94-a61c-331db023d036)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fbe3f33-20f6-436d-8f9f-61c4ba9e20a6)

## Verbal reasoning part-IV (22) [18th June 2023] [28th Feb 2024]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88cf978b-1b8d-48e9-9f42-7e444a4d21b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0179deab-6500-4b4f-a976-7e8ea425c5f4)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85740f4c-144a-46f7-8900-e75c0826c961)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3b4ad0d-909e-4cad-806e-dcf3b3d51535)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44f7dec2-c14f-4077-80b8-5b4b80efd808)

* Option **C**. [**VERY IMPORTANT**]
* Look at the **units**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a85dd977-4b16-40a5-8eca-60369cb1fb9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abbe6cf9-8af7-4d42-96fd-d12e68f39602)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83efe762-388d-4364-b43d-c97b3066f81a)

* Option **A**. [**VERY IMPORTANT**]
* Always -> Very very strong statement/word. Very tough word to justify. [**IMPORTANT**]
* Must -> We Must/ought/should/ do this. It is an **opinion**. We are not concerned with your opinion. We are concerned with **CID(Con**. [**IMPORTANT**]
* Origin -> Very very strong statement/word. But other options are **rejected**, so this is the **best option**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3258c6f8-92a2-4513-9c65-8c17e85e341a)

* If nothing is mentioned then make sure they are facing towards the **center of the circle**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9aa0bb22-4270-4302-b9ac-b0ae6d4c9240)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b64f754-4c5b-4f48-b384-a39573d6d5f1)

* **B** is sitting **opposite** to **vatsal(V)**.
* **A** is sitting to the **left** of **vatsal(V)** .
* Adjacent
* Beside.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f94e4d4b-5a43-43be-84a1-5c513cdf9f1f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bae90b2-65fb-493c-af5c-1ac969c16c77)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5783130-fa50-4065-8363-da713325d303)

* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d74a77b-d287-4989-b375-3370655f6b48)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b67168e-ede7-4067-9332-2f35acae0dac)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6066b2c3-c6f3-4db7-a876-de2e05c0eae7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f26bc7d6-0179-4cef-a178-7c22ac4c961e)

* [**VERY IMPORTANT**]
* Late ->  
* Letter -> Formal letter -> Chitti
* Later -> Badh meh -> For time.
* Latter -> Position -> Former or latter.
* Latest -> Latest news.
* Last -> Position -> The last one.
* Late -> Later -> Latest.
* Late -> Latter -> Last.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65c80993-0b93-4ecb-9ce9-ebbe04a16a1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45edf3d0-07b7-4413-99c2-2f4ca10ac936)

* Alone -> solitary -> Being without anyone or anything -> Akala
* Lonely -> Akala pan -> Feeling of alone -> Dejected by the awareness of being alone

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4aef8260-105e-43ef-b7ac-cf6a82bf4e64)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2668d11-466e-4122-b58d-d661acba99c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25fd768e-7da7-4ca3-b3be-a4f6f9e9b1ca)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/420aba19-a770-4bf6-86e6-a61568d18d47)

* **It** is used for **3** different things. [**VERY VERY IMPORTANT**]

1) Non-living things.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e143c4a5-beb5-4a06-86a7-6fc99b2b7947)

2) When the **gender** is not specified. Neuter gender, **TRUE**.
3) Temporary Subject(TS) 

* It is raining. [Example]
* It is 9 O'clock. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/847d841c-e59e-4100-859e-0e620bb372a9)

* Uninterested -> Not interested, No interest at all. [**IMPORTANT**]
* Disinterested -> Hatred. I hate that. [**IMPORTANT**]
* Impeccable -> pristine/spotless/flawless. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4572b8b7-4d58-40eb-a89a-a1c11d198ee3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76491afa-4e5b-4469-9df5-a20c6bbf7c63)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d89de29c-5975-4326-b169-4509df9dd16c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/986a4b3e-7752-47b5-b3b9-4c653536b109)

* Option **B** is not a **wrong answer** but option **D** is a much better **answer**.
* Minimalism

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb1ebb05-2325-40b6-8025-7478a25a20e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e6190b7-c286-4d03-a62c-a8ed78ae312b)

* Yes.

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Syllogism

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd98ac3a-ec07-4667-ab37-29623c47f41e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8afa7638-b1e8-4259-b80b-c4067f58e59b)

* Quite
* Quiet

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6229460a-70bf-40cb-9c3b-bd25b6d8c1a7)

* Bahubali was a **great movie** -> CID(Conclusion, Inference, Deduction).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c6b5960-e3c3-407a-b76f-3a82120c0f45)

* Premise
* Reasons -> Premise
* Bahubali was a **great movie** -> Conclusion -> Outcome 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45fb1e31-3e4d-453d-8b8c-1e6de3a633db)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/475c7746-d7bd-457b-a323-9429fa24349d)

* Argument(A) = Premise(P) + Conclusion(C).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e86bb7d-fe49-46d7-a0f4-b843efd7eea0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67849338-c3e5-4a89-9558-9f8787fca1ee)

* **Argument** comprises of **Premise, followed by outcome**.

## Reasoning

* Two Types:-

1) Unique conclusion -> Single outcome -> Deductive reasoning
2) Doubt with the outcome -> Inductive reasoning.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81215fce-1f5e-483b-94a1-f5573632d2de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e931bdf1-e20c-486e-8eff-e915e9cbc6d9)

* A -> Person -> White circle
* Engineer(E) -> Blue Circle
* Smart(S) -> Orange circle.

> The person(A) is a **variables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0f52716-2fcb-4938-94e5-acacfd5b4c45)

* The person is an **engineer**. The set **A** has many elements and all those elements should be present in **engineer(E)** set.

> The set **A** shouldn't have any elements that are not common in the **engineer(E)** set.

> There cannot be any element which is not **common** between the **the person(A)** set and **engineer(E)** set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/214dde69-dc27-4a74-81a7-318e9e5eeb8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6126e8ea-0a75-4484-9ea5-874629089ae0)

* The elements present in the **engineer(E)** set should be present in the **smart(S)** set as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4d1d34d-29c7-4cef-8807-69ad5e90bda6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/848c3558-e651-4d46-9057-63ec75a0359f)

* Syllogism must have **unique solutions**. That's why we called it **logical necessity(LN)**.
* Syllogism is all about **unique solution** -> Atleast an **unique solution**.
* Syllogism is based on **two** words:-

1) Atleast
2) Unique solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abb91f8e-24c8-43c2-8e02-6590dc287246)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c19ea5c-0e4b-4f87-9090-34f45f677560)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d99d2995-4447-4169-b201-ff6ea16228ef)

## Inductive reasoning

* Reasoning where there is **no unique solution**. It is called as **logical possibility(LP)**.
* This reasoning is called as **logical possibility**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54f53274-1a75-4868-a223-a559e14469b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03b8930a-03ca-4a1d-afcd-a8f3ff414078)

* **NOTES**:-

1) The person(A)/Engineer/Smart -> They are **variables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef823f97-0960-4a4c-9321-fc728be35d1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cbd22d3-37ad-4cfd-93c4-07626b289023)

* Abbas are an Engineer.

2) Subject Verb Agreement(SVA) -> Singular subject singular verb. Pural subject pural verb.

> If **Subject Verb Agreement(SVA)** is not given, then also it is fine.

* Abbas is smart.

3) Do not assume anything external in a given **premise**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93637578-8118-4e5e-acc4-c20af39579dd)

4) Always go for **logical necessity(LN)**, which is **unique solutions**.

> Syllogism main point is **unique solutions**. Always look for **unique solutions**.

> As we are finding **unique solutions**, that's why we are finding the **atleast case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4e82920-5ad2-476f-8821-e1b28c2e76a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a491cb5-9b36-44e1-90f4-ec3be1f00a12)

5) **Logical possibility(LP) + maybe** -> **logical necessity(LN)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34e84a7a-4ec8-4e72-8e5c-62eb9e027246)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ee47268-4f3d-42d3-a8f8-3dbce96753f5)

* Yes.
* Something which can be verified is **Truth**.
* Sun rises in the East -> **Truth**.
* Sun rises in the West -> **Truth**.
* Sun rises in the North -> **Truth**.
* Sun rises in the South -> **Truth**.

* We always look for **logical truthfulness** and not **factual truthfulness**. [**IMPORTANT**]
* We talk about **logical truth**.
* It should be **logical true**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e973b38-5deb-4826-ba5d-ba8a8b5b189a)

1) Premise/Conclusion -> Argument
2) Deductive reasoning <-> Inductive reasoning
3) Logical necessity, Logical Possibility
4) Unique Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/060afcb5-e8ed-4934-9c19-b8d4bd448fe1)

## Premise

1) All **X** is/are **Y**.

* **X** is/are **Y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27348e43-22cf-4b2e-8475-e6d771fffcb3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3308398a-3b93-4959-a278-a9e23256ba69)

* Every element of **X** is an element of **Y**.
* There is no element in **X** that is not **Y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ed39036-e4e9-449b-b308-7ea51355bf22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f12f07e6-adce-4c62-8dda-e80cb14b1c28)

* X = Y = {1,2,3,4,5}
* It is an **extreme case**.
* Syllogism is all about **unique solution**. We want **unique solution**, that is why we **constantly** look for **atleast case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e8a3a2d-9ab1-4bc7-a8c5-817927bb1045)

2) No **X** is/are **Y** -> **Disjoint set**.

> There is no element in **X** that is **Y**. Nothing is **common**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f587d0a1-ce6d-4f6e-a1df-682dc23e717f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e285082-5da5-4089-a8f7-599fe15713e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d02e08bf-9f82-4291-b072-8a2886ad9b67)

3) **Some** is/are **Y**

* Some -> Atleast one.
* Atleast one element of **X** is common with **Y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c66a0035-9848-4003-8c60-969efacbd5cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f4fcf1d-8a0b-4edc-968b-6edf651b0fad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c44f3823-4d26-4b47-84b5-5221adde3a6d)

* Make the questions from the sense of **countable** then we get a better understanding.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b551cd1-6a2c-41e2-b5f6-7950fc9ffc98)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/344ad9f1-a129-4547-9d83-8cec4c1c77bb)

* **Some** becomes **All**.
* Some  -> All.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f2507c9-be99-4191-b2f7-03e5a3dd7db2)

* Either between two elements **some elements(Atleast one)** are **common** or **nothing** is **common**.
* Some/All <-> None
* Some's exact **complementory** is **None/No**.
* All's exact **complementory** is **None/No**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac4ebdb5-00f7-4ede-b6cc-e15d71c383e0)

* Sometimes in **competitive exams**, instead of **some**, they prefer to give **all**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaf63337-878c-443e-9daf-008098b45b78)

* If **some** is given, then **some** is the **best choice**. If not then go for **all**.

* **Premise**:-

1) All **X** is/are **Y**.

* Every element of **X** is an element of **Y**.
* There is no element in **X** that is not **Y**.

2) No/None **X** is/are **Y**.

* There is no element in **X** that is **Y**. Nothing is **common**.

3) Some -> Atleast one

* Atleast one element of **X** is common with **Y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/457f768d-bda9-48de-bdef-c43ba37b744a)

* [**IMPORTANT**]

4) Some **X** is/are not **Y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9965763-4a0c-418f-9edc-12d2394bb3cd)

* The **premise** is based on **6** in the **X** set.
* It means that **X** has **one element** which is not common with **Y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97646ac0-0b69-4602-96b7-e422b8919d91)

* Some  -> All [Some becomes All]
* Some Not -> None [Some not becomes None]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70f28384-77cf-494c-a4bb-2d1132a9f29f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd3d4546-dc0d-4f15-87b7-250451f3d3fe)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fbb42b9-2f80-4da8-84fd-18b73e0d3c25)

* Question
* Always go for **atleast** because in **Syllogism** we want **unique solutions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bb7f1a7-0403-46ec-901d-e79263b9e16e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7128332b-795e-4fd7-81d2-6e1eb62901c5)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f617e9b9-4d4c-4d99-8ff7-426352a64c6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c68e178d-1e5f-44f6-afdd-95d0624f17fa)

* [**IMPORTANT**] patterns for exams.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c791e52f-d385-4122-b89f-7de852e615ff)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f42bedca-dfd4-4304-9569-73bc0ce07723)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3fd46d0-2fff-4b2b-ba10-f12dcf499995)

* **option B** case.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfbe62fc-f432-42cc-9711-d61500c19dd0)

* Question
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/168fb87b-5f1d-42eb-8b10-c3a7f8c1a468)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d750ac5e-cd35-4722-9ba7-c9d452089ff9)

* Question
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a5449e4-8eac-4e93-9665-0face56a7f60)

* Always go for the **atleast one**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc9da950-be64-463f-ae07-47bb4e9240c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9b632bd-57c4-40c9-8649-beeae43f07bf)

* Nothing is common between **A and B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/505396c9-5cc4-43de-8e7b-2d455a423525)

* **Statements**:-

* No **A** is **B**.
* Some **C** are **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a06dd2b-0d94-466c-8f82-6025639475b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7b5a380-ada9-46ce-9a77-0933ed141c3f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c20c7cc9-785e-414e-a068-70a07449a3f1)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9453265d-a2b4-4b0d-9a1b-d1a179cd3753)

* Option **C**.

## Verbal reasoning part-V (23) [19th June 2023] [28th Feb 2024]

## Syllogism

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59a64463-dc5f-4312-aeb6-f543a3744958)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c00b5206-8412-4b05-a3e2-2ca1e5114250)

* Argument(A) -> Premise(P) + Conclusion(C)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcdb4b73-701f-406f-b3c4-945ec8e97bef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10ccf1ca-09f3-469d-8446-a3d68a2a51c7)

* All X is y
* All Y are Z.
* [Therefore] X is z.
* **Unique conclusion/solution** -> Single Solution -> This type of reasoning is called as **deductive reasoning**. We would refer it as **LN(Logical necessity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06458951-379b-4cb9-909d-5412aa5daa0b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd1acb03-bb65-4574-9e45-3e5ed738670b)

* This is why we try to find the **Atleast** case to get the **unique solution**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9483ce46-70f3-4234-a765-3094ab07b5d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b584731-eefe-4664-9bf8-765df9abb1de)

* Inductive Reasoning(IR) -> Logical possibility(LP) -> When we have **doubt/dilemma/discrepency**.
* Deductive Reasoning(DR) -> Unique solution -> logical Necessity(LN).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c619b10f-57fa-429d-a9da-5d4a04184652)

* **NOTES** [**VERY IMPORTANT**]
* A = P + C
*  R -> DR -> Unique -> LN
*  R -> IR -> LP.
*  When solving **sylogism** questions always go for **LN**. Only in the case of absence of **LN** which is **unique solution** then only go for **LP**.
*  maybe + LP = LN. [NOTE] [**VERY IMPORTANT**]
*  **Kumar, beautiful, boy**, they are just mere **variables**, do not take them to the **heart**. They are just **variables**.
*  If **grammatical errors** are there then also it is **not a problem**. [NOTE]
*  If Subject Verb agreement is not given then also it is **fine**.
*  We are not concerned with **factual truthfulness** we are concerned about **logical truthfulness**. [NOTE] [**VERY IMPORTANT**]
*  Do not assume anything **external** in a given **premise**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ab2d25b-5554-464c-8143-c838a38285e4)

* Whenever in dilemma **quantify** it. [**IMPORTANT**]
* **Every element** of **x** is element of **y**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e0092bb-30ab-45a4-a9a4-f0e15305ad7c)

* **x** is a subset of **y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3fcadf1-3a10-461a-89f1-018a8eac0d37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2f944bf-7618-4705-a916-339ab8abb91d)

* Extreme case.
* Sylogism is all about **unique solution**. That is why to get a **unique solution** we always prefer **atleast case**. This is something that is regardless of any case/situation is **always true**. That is why in **sylogism** we prefer/draw the **atleast case**. [**IMPORTANT**]
* Basic idea is to get the **unique solution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51638d0c-cd1d-459a-bde2-7e071cb0fda8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea402ec3-a99d-427a-9c42-ddf45f88520d)

* Not even a single element of **x** is an element of **y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0d676a2-8434-4aa7-b0f3-deeb1cad21f4)

* I ate some mangoes. [countables]
* I ate some rice. [uncountables]
* **Some** can be used with **countables as well as uncountables**.
* When we **quantify** something it is easier to understand.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39a165ee-b23e-4ce6-90bc-ecf481060b8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4a8f01e-d184-4bbc-82fd-dc39bb9d1090)

* Atleast one element of **x** is an element of **y**.
* Some -> Atleast one.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7951b0b-43bc-4a87-93da-b445bed0aaf3)

* **Maximum** will be that **all** of **x** is/are **y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/981520c5-5726-4c71-9049-2895d27e0008)

* **Some** eventually/gradually becomes **All**.
* **Some** leads to **All**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2030cd7-8b68-48ef-a1bb-83dd158f6367)

* Extreme cases.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/361e5600-a117-4c9b-9792-2c0a69fb746d)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da420231-1c19-4fb5-adba-8deb53ca7d7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d02d49fd-ffd3-45f1-8cb6-cc5c9a063b39)

* Atleast one element of **x** is not element of **y**.
* **Maximum** case is that **x and y** are **disjoint sets**.
* **Minimum** case is that **one element** is not common between **x and y**.
* **Maximum** case is that there is **nothing common** between **x and y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07bbf9d4-ecf9-49c5-a951-4da349368f98)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7db7e3ad-8002-4f12-8de3-5760e6bf07ae)

* Syllogism -> Unique Solution.
* Premise:- [**IMPORTANT**]

1) Some -> All
2) Some not -> None

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15f95460-57fc-4648-a30d-c6b28cb78f8f)

* Two different kinds of **syllogism** which are **very important**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4062458c-df15-4ae7-9e8c-b9e3384898ed)

* All **A** is **B**.
* All **B** is **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f9f5b3b-7119-4818-9c21-cfe098e317bd)

* All **A** are **B** and some **B** is **C**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35233835-2d4b-47dd-a3ca-a0a8ae0573a3)

* All **A** are **B** and some **A** are **C**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d07897ec-71f2-4d93-95ac-1f294ba2f55e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e47d1406-5d7e-4023-845d-85c4046d0ecc)

* Option **D**.
* We always go for **unique solution** that's why we check **atleast** condition. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d78fad8-7ca3-4de3-ba44-5e9c216b0386)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff0d123e-3366-47fc-b618-00bb2a0ad37c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5dae271a-bc94-409e-b532-36d2d471976a)

* Option **D**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/761ac698-81b2-4332-8a16-0640b4548c76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3effb9d3-3e54-4957-b151-c8eaa1043add)

* Option **C**. [**VERY IMPORTANT**]
* We don't have enough evidence to comment to any of the conclusions.

------------------------------------------------------------------------------------------------------------------------------------------------------------------
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f5bc259-772c-4f87-b0c8-2a4e46ce7a70)

## Logical Connectives/Connectors

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/036a0caf-333d-4a0a-9acd-8794bb9c7719)

* The statement might be **factually incorrect** but we are not concerned.
* We are not concerned about the fact in which **direction the sun or the moon rises**. 
* We are not concerned with the **factual truthfullness** of a statement.
* What we are concerned about is **logical truthfullness**.
* **factual truthfullness** -> **logical truthfullness**.
* Whether the part of the statemenet, **the moon rises in the south**, depends upon, **the sun reises in the west**, statement or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96fd3009-d9a3-4e31-abd8-605aceda3678)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cee3b8dd-4308-41dd-b771-39ee7939c7b5)

### Simple Statements/Sentences

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3067e4b9-5818-4330-82ce-d8b9391bb6a2)

> When we connect the **simple statements/sentences**, they are called as **compound statements**. 

> The thing which is used to **connect** the **simple statements/sentences** are called as **connectors/logical connector**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14988ba2-26e2-4822-a8f8-a5206cd49b21)

### Compound Statements/Sentences

* If the sun rises in the west, then the moon rises in the south -> **Compound statements**.

* If then -> **connectors/logical connector**.
* sun rises in the west -> the moon rises in the south -> Simple statements.

* Either or -> **connectors/logical connector**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f21d87a3-80fa-44c8-a373-7ca47d588891)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62eafe4b-6b67-418d-9a8e-a5bd31fc8253)

* Logical Truthfulness
* Simple Statements
* Two or more Simple Statements -> compound statement.

### Connectors/Connectives

1) Either-or [or]
2) If, then

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f236373d-ae73-47ea-8cc0-f85acbf8febc)

### 1. Either-or [or]

* Either **P** or **Q**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c14fd98-e9a5-4d66-bcb2-7859674922d0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f06a88af-aa01-476a-bc9c-c91e15f2622a)

* Truth Table of **OR** operator.

> For the **compound statement** to be **True**, **atleast one** of the statements must be **True**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42df5b86-4e40-4c1d-839e-4dede20123b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b66f9702-9174-4333-9672-6ab88f3bb8dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/893042ac-ab2c-4194-9282-a23af9c0d00e)

> The compound statement **ruptures/fails**, when both **p and q** statements are **false**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ece66b6b-35c6-47f3-8778-d0525a9d7260)

* **p** is true or -> Dead
* **q** is true or -> Alive
* **p** and **q** are true -> Dead and alive

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f2a61e9-feba-4312-9cd8-63825944b559)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd50c66a-a717-46d3-9a36-05d3f3bc9b62)

> For the compound statement to be **True**, **p** has to be **True** or **q** has to be **True** or **p and q** both statements are **True**.

> Either **p** or **q** and we have been told that **p** is **True**.

* P -> True
* P' -> False
* Q -> True
* Q' -> False

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/575d0ba1-7677-4717-8bac-b3b9f18d41b3)

* We want **unique solution**.

1) If **p** is **True** then **q** can be **True or not True** for the compound statement to be **True**.

* We have solution here but **no unique solution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e71d07f9-2f25-4004-ae55-7ccac0462abb)

2) Either **p or q** and we have been told that **p** is **not True** then **q** must be **True** for what?, for the **compound statement** to be **True**.

* We have **unique solution** here which is **q** must be **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a08da74-feeb-46ef-b983-ced4a4897158)

3) Either **p or q** and we have been told that **q** is **True**.

* **p** can be **either True or False**. 
* So, solution is there but **no unique solution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a012d75d-2e42-4bf6-b389-cf11c9cc9f94)

4) Either **p or q** and we have been told that **q** is **Not True** which means **p** must be **True** so that the **compound statement** is **True**.

* We have **unique solution** here which is **p** is **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7283eda9-d1ad-41a6-ab79-4a5315181f02)

## Summary

1) Either **p** or **q** -> **p** or **q**.
2) **p** is **not True**(p') -> **q**.
3) **q** is **not True**(q') -> **p**.
4) We are talking about **unique solutions** here as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe1da223-e226-42e5-919d-db02073f8190)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8b3c2fb-e5f7-4e2d-8523-9c9f775db656)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70ecc49d-f2e5-4121-aeb2-d4283c7c3a24)

* Question.
* When **p** is **True** then **no unique solution** possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f3de373-e132-4917-9455-f297aa25d4a1)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a16772a-e674-4c6a-a2ba-1bdeedc5bf17)

* Question.
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e954519-e974-4aaf-a327-e7f42801694e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87c8c412-e884-4745-a85f-b6008577f13e)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8270292-aaec-409d-9266-14c5c7f28864)

* Option **A**.

### If, then

* If **p** then **Q**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8205fd72-04be-4529-ab5f-df60804c56a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b77b856c-5caa-41e0-9880-77d2f51a0420)

* Whenever it rains, I wear the raincoat.
* **If it doesn't rain** -> Beyond the scope -> Kuch keh nahi sakte

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14ed72d9-50c7-426d-9ab3-9ab966e6055b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43d847dd-584c-48e0-9692-8c161edfe4b5)

* p -> raining
* q -> Wearing raincoat

1) p(raining) -> q(raincoat)

* Unique solution available which is **I wear raincoat(q)**.

2) p'(Not raining) 

* q -> **I wear raincoat(q)**
* q' -> **I do not wear raincoat(q)**

* Solution available but **no unique solution** available.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/411e2789-a332-4800-ac63-feac524f7348)

3) q(wear raincoat) 

* p -> Raining
* p' -> Not raining

* Solution available but **no unique solution** available.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ad6ee72-a75b-4c50-84ad-695c48ea473e)

4) q'(Not wearing raincoat) -> p'(Not raining)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cde46402-ff52-42db-856f-7c8514608ae5)

## Summary

* If **p** then **q**.

1) p -> q
2) q' -> p'

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2667bb8-f31e-4ec8-8626-698501abfc67)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acacbb9b-8e08-477d-9224-e6eca8efb2eb)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91f1d9e9-f240-47fe-9792-813078228a34)

* If **p** then **q**. 
* Sequence is **important**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db094d2d-fabe-4cb1-8b9c-9652325c3d51)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64cd1990-fd84-427d-abc1-ddeb74cf51a9)

* Whichever statement is **attached** with **if** that statement is **p** and the other statement is **q**.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/334950b6-57ef-4096-98d7-89304e55d927)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5654d61b-f17f-4d83-819b-06cc3d53f1b6)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aeae5a97-3f07-4057-8a6e-b36c7f614de6)

* Sequence important.
* Outcome is the **same**.
* Brother of **if** is **whenever/when**.

### **Whenever/when**

* Brother of **if** is **whenever/when**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58b27105-37da-4624-b344-560d7c68bf37)

* Whenever **p**, then **q**.
* **q**, whenever **p**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41e2ba30-3932-43eb-aa69-a5c24f7387b3)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49696c4c-46e2-4847-ab02-9e1fe316964b)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4145f423-eec4-47a2-88f1-20992266d3be)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1496fab-27f8-4f79-9a28-c8a042eae5d6)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0977e9d6-9825-4cfd-91b3-0561c24112c8)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d219e871-38dc-4b14-a1e2-a87bb9b37944)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5fa4917-2069-4b89-892c-b33ca4464ad0)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ec2d94c-fd4a-4bd2-81d0-cedbe17c4800)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc81bbe4-ab04-4b93-b057-fd7b655a4019)

* Option **D**.

* **NOTES**:- [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8218d54-5922-491e-b16c-d646cb66cd40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f634ceb7-5be0-44f2-aa58-b51097489f63)

* Either **p** or **q**
* **p** or **q**
* p, otherwise q
* unless p, q
* q, unless p

* p' -> q
* q' -> p  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/477af446-aff2-4b2e-8266-d6748681c9bc)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a9d4f07-c353-407f-91a9-90c7bf87dcad)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b014e5d8-dfa8-4e48-90ec-e5805a3166d6)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f300e9f-38d9-4391-8e60-6b54965539ac)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15e6a759-ea9a-47f7-981a-4b2975df2e64)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd67825e-9faa-47ff-9bfc-f69ea0f24924)

* Option **D**.

* **NOTE**:-

* **AND** gate.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5ca05dc-916e-45a4-bec9-bf3f0cdcee5c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86204b4d-e49f-464c-8de5-d661fa680367)

* When both **p and q** are **true** then only the **compound statement** is **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c4b43f2-c88a-4624-8239-7cfd213654e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd31da0d-3d06-4652-81f0-9fcbbc5c622e)

* De-morgan's law.
* (p or q)' = p' and q'.
* (p and q)' = p' or q'.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7607001f-921a-46f9-addd-e5c2ae74370d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30e1c4eb-1bb3-4fda-9682-aa5a2f13b7a7)

* Question.
* If, then.
* Within **q** there are more statements.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ce3cd79-df94-45e8-a289-ac029d2f4219)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a2fea88-a718-4275-9b6f-d639e26e5e48)

* For the compound statement to be **True** in **either, or**, **p' -> q** and **q' -> p**.
* **q1' -> q2** and **q2' -> q1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c68cffa3-6e65-44ea-8bd4-6366756027d1)

* As we got **q2' -> q1** which means **q** is **True**. So **p -> q** which is a unique solution for **if, then**. So, **option 'A'** is correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/940667b7-2569-455b-acbb-f7e1ba5522b4)

* There is only **one way** where the **compound statement** ruptures, when both the statements are **false**.
* The **AND** point of de-morgan's.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b903ceda-93f6-47f5-aa6d-00e8abf83660)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6379dcee-8f5d-4f23-9bb1-e576f684fd51)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a377a5f-6a13-4ffb-9f78-5d2375948f7a)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d721d3b-3cb3-49de-9df1-3a50368072f3)

* [**IMPORTANT**]
* Unique solution -> Logical Necessity (LN)
* No unique solution -> Logical possibility(LP)
* If anyone of them(not unique solutions) are given, thne they are **LP**.
* Option **A** -> Logical possibility(LP) as it given **no unique solution**.
* Option **B and D** gives **unique solutions** that's why they are Logical Necessity (LN)**.
* **If, then** -> **p -> q** and **q' -> p'**.
* Option **C** is **correct** answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d48a899b-e0f1-49bf-97ec-959f8ff32d9e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c36013f1-b133-4b5c-8e40-189dde63651c)

* **NOTE**:-

* If **p** then **q**
* p -> q
* q' -> q'

* Whenever we see the word **only** with **If, then**, then do **180 degree** of the **unique solution** outcome cases.
* Only if **p**, then **q**.
* q -> p
* p' -> q'

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/762dd714-fa9f-4305-8839-791033bba91d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a44bdee0-cf48-4468-abbc-e56f26c5f2d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8383dfc8-df04-474d-8b62-7818027f1359)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6500c6d-63ca-41a6-9eb8-bd642bb4f00b)

* Option **C**.

## Permutation combination probability part-VIII (24) [19th June 2023] [29th Feb 2024]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79cff770-87a2-468d-a90d-c9c5300bf5bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5cc0f58d-ccf6-4e2f-bdc7-bf1d5faadb5c)

* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d82c0fef-f8ed-43b2-a8b7-94da590fa07d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92f9cfd2-5c99-4d15-9360-c8f92a87e670)

* Option **B**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f1f6a73-be6a-477c-9200-a47bbeebec50)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/881a5d74-030b-47db-abb2-1ca33ffe1b1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee8b9268-8e98-4399-966c-13c848864b7e)

* P(H) -> Probability of husband getting selected.
* P(H') -> Probability of husband not getting selected.
* P(W) -> Probability of wife getting selected.
* P(W') -> Probability of wife not getting selected.
* P(H') -> 1 - P(H) -> 1 - 1/7 -> 6/7
* P(W') -> 1 - P(W) -> 1 - 1/5 -> 4/5
* P(H') * P(W') -> 6/7 * 4/5 -> 24/35 [Answer]
* Option **C**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43e86fa6-043b-4c80-8b60-a698f659a1ad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5068f389-88fa-4a60-a94b-a0eb704857a5)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f9c9940-1696-4eb5-94f2-5f1e0194f46a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd4e17fa-a721-4c29-bda9-eca3adc57b41)

* Option **B**.
* 1 - ((1 - 1/7) * (1 - 1/4) * (1 - 1/6) * (1 - 1/8) * (1 - 1/5) * (1 - 1/3))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87f65c39-a9e6-4723-b285-1dacc4c74d8e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6562c0e8-ae28-4ebc-ab13-a9b1c4fb360e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c87a24d-913c-413d-9885-616e0fe3aa42)

* Instead of finding probability for **EE, EO, OE**, we directly find probability of **OO** and substract it from **1**.
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fab40995-7154-4eb8-a8a4-18360c46fdc2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/476c8b89-8a0e-42ab-9112-ec241f2cf2c1)

* Option **B**. [**VERY IMPORTANT**]
* We are removing the **ace of spades** that why we are reducing the **ace count** from **4 to 3** and the **no. of spades** from **13 to 12**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26ac3b2e-fce0-4cd0-be88-13c3b3cf8085)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f9d69f0-40dc-4096-91ff-b7c624f7f4b1)

* Option **B**. [**VERY IMPORTANT**]
* Not prime -> 4,6,8,9,10,12
* Ways -> 3 + 5 + 5 + 4 + 3 + 1 -> 21
* P -> 21/36 -> 7/12

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b680c2b-bcaa-4e41-a2d0-e57581b93d3c)

* Questions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8ae3af4-93f4-46d2-b8dc-5aac9a542bd5)

* oligopoly -> market form in which a market or industry is dominated by a small number of sellers
* Presupposes -> To believe or suppose in advance.
* Mandate -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecc929dc-1b56-450e-86cd-64b66055fd65)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37ab7589-23ff-4902-81bf-a7f41ce17b0f)

* Questions.
* Cred -> authenticity
* Credentials
* Offset -> An agent, element, or thing that balances, counteracts, or compensates for something else

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe51c6c8-d1a8-4c67-812f-e8670ccbb596)

* Most -> Superlative degree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af004148-3a23-4c8d-acb7-6b45c0d74fa1)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6ee0f8a-9038-441e-988b-9b2eee28459f)

* Done already.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6c98cb2-7475-4cea-8115-31a545ee6df4)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3145fcf9-291e-4ee3-8fa4-4e45e4d76eec)

* So < R
* S > A
* S < R [Statement **1**]
* S > So [Statement **2**]
* Statement **2** doesn't give a **unique solution**. The **eldest son** could be either **Riaz or shiv**.
* We are not concerned with the **exact arrangement**. We are only concerned with the **eldest**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6138e212-8f90-4999-93b2-e7aeb48c8e10)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c67f3fbb-8a61-4a30-ab5c-3e36737bf314)

* Option **A**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04038ebe-9a51-4c32-bf2a-4c09c2ab4c75)

* G > R
* G > L
* L > S
* M > G
* 2, 4
* Must be True -> Unique Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e49c26c8-52d0-4789-9c78-b7e5e0a60826)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf048ee8-69be-4ee1-b1d2-ec840056d852)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd9d7cc3-8eb0-490e-95ed-d2c583113fd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d221b8de-caaa-45fe-9d5b-36ce2689312e)

* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7067242a-65cf-4475-94d8-b1099dc715ef)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45c7340a-99b9-4cfd-a3e5-24b658469e85)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c26c44e2-d000-48f5-9cb0-9d1db9884596)

* Option **D**.
* Not enough information.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de272ffa-2352-4368-b7e7-032ac648b6de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b90de00-a1db-4a4c-be6d-0892f310c3a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8a9d02d-e8e1-44c5-8d79-cc2b2a95ef29)

* Option **C**. [**VERY IMPORTANT**]
* P and Q -> Sit together
* R and T -> Sit together

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/929f89cd-0926-4282-9b1f-1d51e152e7a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec2d44ef-5d2b-4bbe-991e-8e3edcb009ff)

* Option **B**. [**VERY IMPORTANT**]
* Impress -> Impressed -> Appearance/semblance.
* Repress -> To hold back or prevent by an act of volition
* volition -> The act of making a conscious choice or decision.
* Compress -> To press together
* Suppress -> To put an end to forcibly; subdue.

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Permutation and combination

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60054bde-725b-48be-bb97-961457f6ee97)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abed697f-982d-4b4f-ac09-80e5f239aa1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ceafc8c4-e7ac-405b-9ee7-fbfe52cd21a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7057f2c-a37c-483f-b6ba-abee3f3fdc3a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7d84ed1-eaf8-440b-8493-8dcff99848db)

* **Q** is **fixed** out.
* No. of ways -> **7**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aea98ff3-b973-4027-8ef3-5d8fb1f50e65)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94da6896-3d08-4090-883c-2cf62b666832)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba4b802a-35ab-4138-8ab4-127a49f8dbc7)

* Answer -> 90 + 90 + 100 -> 280.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fed5d85b-11cc-435d-ae63-55b28f54b804)

* We have **5 boys**, **n=5**.
* We are arranging the **5 boys** in a straight line -> Linear Arrangement.
* We are arranging the **5 boys** together -> Circular Arrangement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c28e8d7-df30-4100-8db3-22d5acdaec56)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdb5e79d-c9cf-4ad8-8163-650b26e3917f)

> The condition is that out of the **7 husbands**, we have to select **two** husbands but **same** husband-wife pair should not be on the **same** set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebff1c3d-119b-425b-ab48-775bbe681094)

* Selecting **two** husbands out of **7 husbands** -> 7C2.
* Let's say we selected **H1 and H5** so, **W1 and W5** cannot come.
* Let's select the **Wifes** now. We can select **2** out of the remaining **5** -> 5C2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fcfb976-5844-4c2d-974b-e9906e218f2c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffc43577-b303-4616-afdf-78ae804e34bb)

* Let's say **W3 and W7** are selected.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f941f5bd-477b-4ab6-b25e-645870a3d76d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89f92997-4cb9-47a6-84bc-2cbbcc5af631)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b0d73c5-1424-4332-9239-770efbdbf6ed)

* There could be arrangements between either the **husbands or wifes** which is **H1** can play with either **W1 or W5**. So, we have to do **2!** multiplication to either **husbands or wives** not both. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbb97a7b-a4e1-4df0-8bb8-1b098e4cbebd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f91d04fe-e6b6-421e-a6c9-5064000c6855)

* Option **D** correct. All the above.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1fd1a56-5fd1-47fa-9e6e-c927e40d1094)

* 5 are **Hindi medium** and **5** are **English medium** students.
* No condition and arranged in **straight line** with **linear arrangement** -> n! -> 10!
* No condition and arranged in **circle** with **circular arrangement** -> (n-1)! -> 9!

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14d15fe5-9551-4c93-81f5-f73f373051b8)

* No two **hindi medium** students must sit together -> Pseudo gap

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1f5a689-4b89-403a-8471-dac65e75405a)

* 5! -> English Students
* 6C5 -> Hindi students
* 5! -> Hindi Student's arrangements.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5182112-38d8-47d9-9fb2-7653af2582ce)

* If there is **one transaction** between two different people and for **n** different people we will use **nC2**. 
* If there is **two transaction** between two different people and for **n** different people we will use **2 * nC2**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47fc9e8d-f453-40f9-b3de-a3ab790e7af3)

## Geometry

* Whether it is a **side** or a **diagonal** it is **straight line**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ea1839d-cd53-4881-b2f0-55b6b01c96ff)

* As many **sides** that many **vertices**.
* If **n** sides then **n** no. of **vertices**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb35f44e-b97e-4cd2-ad5a-fbf5313f1d92)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/356748a0-e700-4461-bd1f-4dddcb27a034)

* Total no. of **straight lines(S/L)** -> Sides + Diagonals.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/144360fe-09ac-407f-8f93-8b818ac8e605)

* **NOTES**:-

* Min. no. of points required to draw a **straight line** -> 02
* Min. no. of points required to draw a **triangle** -> 03

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edd318aa-2228-4643-9a27-7b6b9a431722)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/874e2057-f0ed-4e24-9d54-0283b8cd0e5c)

* If **n** sides then **n** vertices.
* n = sides = vertices.
* Out of the **n** sides, we have **selected** 2 **vertices/points** which is **nC2**.
* **Total no. of diagonals** -> (Total no. of straight lines(S/L)) -  (No. of sides) ->  nC2 - n.
* **Total no. of points/vertices** we have is **n**.
* **Total no. of straight lines(S/L)** -> nC2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/250c1e08-8edc-4333-83f7-a4defb1aeb09)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eecf6fe3-8fc9-4d2e-8af0-ab4725a67826)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18570619-82b0-4095-8ad9-271eb2c404d9)

### Straight Line

* Min. of **2** points/vertices required to draw a **straight line**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d36de65-0758-458a-84f7-2d0c5d512189)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8ded1ce-0ef1-47af-afad-9dcbc8dbbc8e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6495e23d-3f95-4106-a7d9-4edf20b05949)

* In the **middle case**, the points can be created from either taking both the points from **A** which is **AA** or taking one from **A** and one from **B** which is **AB**  and the last is taking both the points from **B** which is **BB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8681c42-e73c-45ff-9012-bdd942930cc2)

* **AA** -> 6C2
* **AB** -> 6C1 * 4C1 
* **BB** -> 4C2
* Total -> AA + AB + BB -> 6C2 + 6C1 * 4C1 + 4C2 -> 15 + 24 + 6 -> 45.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/875f7a5d-0ca7-48f5-ae94-a2a46b4a1547)

* **Co-linear** -> 3 or more points/vertices are said to be **co-linear** if they come in the **same line**.
* **3 or more** because **2 points/vertices** are required to make a **straight line**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23f767ac-9508-4037-86f2-adf4065f767a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b33f2eb4-e16e-4a42-9818-c33dfda5a726)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1be0bffd-7ece-42cc-87b5-5c0fb4914ce7)

* **7, 8, 9 and 10** are **Co-linear**.
* All the four points, **7, 8, 9 and 10**, gives a **single straight line**.
* So for **BB** as there is only one **single straight line**, so it's contribution is **1** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6384837a-a4d4-4c6b-ac45-80f3da921ff6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5272cad-1555-4d2b-9188-cc6aebf13d83)

* **Total no. of straight lines** -> (Total no. of points and select any two points(pointsC2)) - ((colinearC2) + 1).
* **Total no. of straight lines** -> (totalC2 - colinearC2) + 1.
* The formula and finding it directly give the **same answer** only.
* **10C2 - 4C2 + 1 -> 40**.
* **TotalC2 - ColinearC2 + 1 -> nC2 - BB + 1 -> 10C2 - 4C2 + 1 -> 40**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a0c8a5b-33d7-4dda-8055-a84f476c18d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e91676da-3741-433d-a9f0-f6f4e64a3042)

* We have **20** points/vertices. Tell total no. of **straight lines(S/L)** -> 20C2.
* Now, we **20** points/vertices but **5** are co-linear -> 20C2 - 5C2 + 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/270a8325-7313-44d4-9a89-b9bcdbaa64e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2125b094-02c4-41f9-a8ac-436e19543ea7)

* We have **100** points/vertices -> 100C2.
* We have **100** points/vertices but **10** are co-linear -> 100C2 - 10C2 + 1.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc74b6fb-05c7-4850-998b-1ec392ebe7fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/793eb23b-90ff-45eb-baa5-907994be12af)

### Triangle

* If we remove **straight line** and talk about **triangle** only.

* Triangle -> **nC3**
* **3** is important for **Triangle**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7aeb57e-643f-40bd-85c3-32af957f8b46)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5786833-f236-4ae7-8d94-bd29fc461b16)

* Three points/vertices from **A** -> AAA -> 6C3 -> 20
* Two points/vertices from **A** and one from **B** -> AAB -> 6C2 * 4C1 -> 15 * 4 -> 60
* Two points/vertices from **B** and one from **A** -> ABB -> 6C1 * 4C2 -> 6 * 6 -> 36
* Three points/vertices from **B** -> BBB -> 4C3 -> 4
* Total -> 20 + 60 + 36 + 4 -> 120.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1e9489c-fec8-453a-8bcb-e9137ea47ad9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7064e56e-af64-4ec1-b91f-4775ef199dc9)

* In the **last case**, we cannot take all of the **three** points from **B** as in **B** we have **4 points/vertices** which are **co-prime** numbers. As **BBB** is not contributing anything. So we got, **116**.

* Three points/vertices from **A** -> AAA -> 6C3 -> 20
* Two points/vertices from **A** and one from **B** -> AAB -> 6C2 * 4C1 -> 15 * 4 -> 60
* Two points/vertices from **B** and one from **A** -> ABB -> 6C1 * 4C2 -> 6 * 6 -> 36
* Three points/vertices from **B** -> BBB -> 0
* Total -> 20 + 60 + 36 + 0 -> 116.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9c60281-50ff-498d-90f3-72c81a97e61a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d56ab22d-8d55-41d2-a4cc-5261a020722c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0deb8d68-a3e5-46f3-9371-c0d8e5920fd7)

* So it is **nC3 - BBB -> 10C3 - 4C3 -> 120 - 4 -> 116**.
* It is **same** as the **above formula**.
* **Total No. of triangles** -> totalC3 - colinearC3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/764343c1-8759-4f51-b480-5a2e9aba48d1)

* Question 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b5f1d7a-4222-40c3-b258-a3da3b31c5ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42b4947-de55-4d03-a9ea-ceee19c4f504)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60e459f0-d698-47bf-8d92-ba87415161eb)

## Summary [**IMPORTANT**]

* Straight Lines -> nC2
* Triangle -> nC3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8141085b-c06c-436a-854a-83e779617aeb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd0a3b77-3a4b-4202-9cfe-dd93a5d2b38f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b816bf9f-b6a0-462a-9931-341592c23d62)

* Question.
* How many **triangles** we will get?

> **1045** triangles.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c8d3eea-8b3e-467d-843e-adc6c612a77c)

* We need **3** points for the **triangle**.
* As all of the points are **co-linear** so **PPP and QQQ** will not work and will contribute **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41c13a6e-dc6e-4672-897d-513864a41366)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb4ebb80-63f9-4c57-98a5-8bf3ce896d0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ca0188e-44e5-4cbf-b50f-e202523c0389)

* Total -> (10 + 11)C3 -> 21C3
* Not required -> PPP + QQQ -> 10C3 + 11C3 
* We want -> Total - Not required -> 21C3 - (10C3 + 11C3) -> 1045.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99c5f10e-a4d8-414d-a975-f68b8d970613)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6c09102-96b0-4b6e-b4bc-f4a978b5150b)

## Doubt clearing session (25) [19th June 2023] [29th Feb 2024]

* 5C2 -> It means that we have drawn the two balls at the **same time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b0e1876-9a39-46d6-ba48-c385746a9049)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5566b3a3-d175-4a7a-a6fa-cd2197e9113d)

* P(Both Red)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d4a733f-04b4-4cc1-ba32-7d7597103b0e)

* Selecting balls **one by one**.
* **one by one** -> ek ek kar ke uthaege
* WR -> Without replacement 
* R -> Replacement. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa0883c7-40c0-47e6-970c-9ea1915b2163)

* 10C3. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f55a9dfa-5537-40f4-8211-54dbaab29826)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42f71688-4dd7-4e1d-92a4-aa4547ef2a75)

* One by One.
* P(RRR) [Example]
* P(WWW)
* P(RRW)
* We are considering the **R and W** as normal english letters. That why in **P(RRW)**, we are doing **3!/2!** because we have **3 letters** and the letter **R** is repeated **2 times**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd6f7240-5498-40e0-8500-f75f97c98426)

* P(2nd ball drawn is a red colored ball)
* First ball can have **2** possibilities, either it can be **red or white**.
* We have to take both of the **possibilities** of the First ball. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02ee256b-65cc-43df-afcd-d1f1a6680531)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/925f4117-4e3c-4578-b522-6b30830d3d23)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/829170af-eed5-4db8-b455-3ae72efc07fa)

* **2nd ball** is fixed that's why there is **no arrangement** here.
* Solution. [**VERY IMPORTANT**]

### Conditional Probability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55e6b5e7-77fb-480e-bbab-e8561a67a0c3)

* P(A/B) -> Probability of occurance of **A** when **B** already occured.
* P(B/A) -> Probability of occurance of **B** when **A** already occured.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8421a2e6-1cc9-4f34-928b-701027ddea90)

* If the events are **independent**. There is **no relationship** between the events. [**IMPORTANT**]
* Independent Event.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed768b7d-1d3f-4896-b062-d99d70f83c91)

* P(A intersection B) -> P(A) * P(B).
* P(B intersection A) -> P(A) * P(B).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd027d3e-fa01-4769-a543-0f90a2be4403)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34bdcc90-138d-4071-bb26-644220a7f92d)

* P(Atleast One head) -> 3/4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5becc5e7-03ba-4b82-9d2e-be0f6e3ede21)

* We have **3 * 4 -> 12** picture cards.
* P(1 Picture card) -> 12C1 / 52C1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/182f71cf-1376-4efa-a96b-6fa761c45f9b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d16ec88-84e5-4039-b927-f23107201767)

* P(Sum of 2-dice) -> P(Sum < 9) -> 26/36

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af745d42-3ebe-4fc6-babb-b138bbc24a50)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9fe2d84-80c5-40a1-90d4-b7c14cfa7948)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de2c74b1-bb2f-49f4-8680-ea17165a8455)

* RRa' + R'Ra -> 1/6 * 7/8 + 5/6 * 1/8 -> 7/48 + 5/48 -> 12/48 -> 1/4
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe3e528f-5ebf-44a6-af88-e59263380828)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb76743d-ce48-4e1a-8eb6-66e98b03cfd0)

* Option **A**. [**VERY IMPORTANT**] [Example]
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48356fe3-edd3-4121-93c8-9e488017339f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27c84a83-50f0-462c-8995-c89ee56d0f4e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/deaa2927-bf94-406b-987f-36cc21fb0255)

* Formula [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b41a5788-c195-4e83-ad6d-2f36dd33dd57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35f62d41-b540-402c-98c2-ad4aeaa4ec6c)

* A'B'C' -> 0.5 * (1 - 0.2) * (1 - 0.3) -> 0.5 * 0.8 * 0.7 -> 0.28
* If only one doctor is successful then the operation is **successful**.
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f8b3a9e-9fdb-4540-b59d-1d33bd54ab49)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a14ee7a-a9db-42de-a1ec-bb31bb0cda52)

* Independents Events [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b1ba9df-4758-4a4d-ad90-6e1ece527609)

* Example. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f599728-76c8-4033-ac99-01ecbbefa2e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/662e3db5-f1e3-4371-9561-9c8c228ae86a)

* Option **C**. [**VERY IMPORTANT**]
* P(Atleast one meets design specification Criteria) -> 1 - None -> 1 - A'B'C' -> 1 - [0.2 * 0.3 * 0.5] -> 0.97. [**IMPORTANT**]

* There are **equal** no. of **men(M) and women(W)** in the group.
* E -> Employeed.
* UE -> Unemployeed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b41a5f6e-df94-4aba-bd99-f368205266db)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef47fadd-f210-436d-bef3-9d3182714f95)

* P(The person is employeed) -> 0.5 * 0.8 + 0.5 * 0.2 -> 0.50

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59c429aa-3783-4739-851a-ceec6a3649f2)

* It is found that **2%** of the produce coming from **M1** is defective.
* It is found that **3%** of the produce coming from **M2** is defective.
* If a randomly drawn component from the combined slot of **M1 and M2** is found to be **defective** then it has been asked, what is the probability it is from **M2**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c57be37b-b4d5-48c4-9f46-b0863d630461)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b458b1be-05d1-4510-8c16-4873c4bdf1e0)

* P(Defective coming from M2)
* P(M2/D) [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee5abd71-ad3e-4e32-9d6f-74d5dfab85ac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd61bc24-9d87-493c-acba-1b9c6e104c22)

* Option **B**. [**VERY IMPORTANT**]

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Permutation and Combination

* Only **one** exchange between two people -> **nC2**.
* **Tne** exchange between two people -> **2 * (nC2)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c640dfa3-a790-4c8f-8fa0-34156145e002)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/658bfb7a-01e9-48e4-a687-7ec1d0e629d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66fecd20-30ad-4c22-9d26-64e815ed24e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/132e3af6-d3be-4274-b09c-2ba48a5a3dd3)

* **NOTE**:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce898746-7434-46d9-933d-802cde854c9b)

* AB and CD are **parallel**.
* AD and BC are **parallel**.
* When two lines are parallel and equal -> parallelogram.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3e3b2cd-5b79-4f39-87dc-28653a24bba9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16262da5-d2b2-4423-a115-46adeb6e2c4c)

* Parallelogram 's Kid -> Rectangle
* Parallelogram 's Kid -> Square.
* Parallelogram 's Kid -> Rhombus.
* Parallelogram 's Kid -> KITE.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3ffd1ae-12a3-41e5-99ae-0a5fccb4bd79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67bb7a3a-414f-474c-8391-2e243bc15d59)

* Chess Board
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49ccb78f-c11e-44bf-a0e7-5b3a8aacafcd)

1) Squares(1 X 1) -> 8 ^ 2 -> 8 * 8
2) Squares(2 X 2) -> 7 ^ 2 -> 7 * 7
3) Squares(3 X 3) -> 6 ^ 2 -> 6 * 6

* Total no. of **squares** in a chess board -> 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + 4 ^ 2 + 5 ^ 2 + 6 ^ 2 + 7 ^ 2 + 8 ^ 2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49f33a68-7744-4e49-ad2e-ad3de6f40ae9)

* Sum of **squares** of an **n** natural no ->  1/6 * (n * (n + 1)) * (2 * n + 1) = 1/6 * 8 * 9 * 17 = 204 [n=8]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4c6b77b-c54b-4ef1-8368-d52651e59d1b)

* Probability of getting **1 X 1** square in a chess board -> (8 ^ 2)/204 -> 64/204
* Probability of getting **2 X 2** square in a chess board -> (7 ^ 2)/204 -> 49/204
* Probability of getting **6 X 6** square in a chess board -> (3 ^ 2)/204 -> 9/204
* Probability of getting **3 X 3** square in a chess board -> (3 ^ 2)/204 -> ((3 X 3) value) / (Sum of **squares** of an **n** natural no) -> (3 ^ 6)/204 -> 26/204.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d85fa5df-f5df-4a6b-9299-bc796715424b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/246a8f9d-c448-4d52-9884-f57cd5a7bc3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d59463d-5ccc-4e8f-863c-21304429bd9b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5cd9e6fa-aa78-4884-a56d-ef73e7498ab8)

* Grid
* Rectangular Grid.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70ea9584-968c-4fa2-a247-17655c4820dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09a6929e-5309-4d93-aed3-a3d0cef437e5)

* How a rectangle is formed?

> (Horizontal)C2 * (Vertical)C2.

* Horizontal(H)
* Vertical(V)
* **HC2 * VC2**.


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3e39a3e-4380-4a4d-8b9d-96338bc135c3)

> We will talk about **Horizontal and Vertical**, when the lines are **90 degrees**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13484bff-1fe3-4aad-8e38-109a6b6fae60)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94a376ee-c7dd-41cb-9c22-db5bc20f1265)

* We have **1-9** horizontal and vertical lines.
* So, the **no. of rectangles** are -> 9C2 * 9C2 -> 1296.

* **All squares** are **rectangles**.
* **All rectangles** are **squares**, not necessarily.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af5b0dab-6b08-4431-a91d-157774aaaeeb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a004bb3-c94a-4b94-812c-53a742885395)

* Square is a special case of rectangle.
* Does that mean that **1296** actually include that **204** squares?

> **YES**.

* When we say **1296** rectangles are there, it means that it actually includes the **204** squares as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82dbaa55-7a16-4712-8ac9-3032a3910b1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74844e92-f719-4d8f-a4ef-188664f075a3)

* Find no. of rectangles?
* Vertical lines(V) -> 20
* Horizontal Lines(H) -> 10

* No. of rectangles -> HC2 * VC2 -> 10C2 * 20C2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/422dbbfd-f1f6-4d5c-b967-bc2c99173590)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe63e49e-88bc-4fea-b946-3f5352a7f485)

* **No. of rectangles** question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7a1f76a-9b0e-4eb1-a327-d11601763d8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a3679eb-b7e1-4aed-a282-af2821c3d883)

* **m** parallel lines and **n** parallel lines
* No. of **parallelogram** -> mC2 * nC2 

> **Select two** horizontal lines and **two** vertical lines.

* Total no. of rectangles asked for the **above** question?

> **Cannot be determined(CBD)**. As, we don't know if the lines are making **90 degree** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74732aa4-5970-495d-97fb-b98833d3204b)

* (Horizontal)C2 and (Vertical)C2.
* Whenever we right **Horizontal and Vertical**, the lines would be **90** degree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db30ff43-8162-411f-8d27-56ad0ef7c32f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3987a180-baee-40de-857c-d15c591a6d08)

* No. of **parallelogram** -> mC2 * nC2 -> 50C2 * 40C2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8eb7fd42-bcc5-4bbf-9e39-a961228c17a4)

* Question
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd475587-766b-4bf7-96fe-283d61c3270e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8838a935-4cd7-4f68-b965-1c0951a92816)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f702d52a-2fae-4eb1-a224-2fd8c145b0c8)

* If there is exactly **one** handshake between two people, that means **total no. of handshake** between **three** people, will be **nC2 -> 3C2 -> 3**. 
* **3C2** signifies **one** handshake between two people.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8455fb82-f984-4d0b-8ef6-a2af4663cd19)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b023b957-6b9a-40c9-a112-c45a55a235e3)

* If there is exactly **one** handshake between two people, that means **total no. of handshake** between **five** people, will be **nC2 -> 5C2 -> 10**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e088011-1319-4ea0-86e9-bec4a28a8f34)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f755d198-32b6-46c9-a710-a5233f5bd068)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3473d4a-da63-410e-8cde-69660a2b6c23)

* Put **n ^ 2** for **two consecutive nos**, **two consecutive even nos**, **two consecutive odd nos**.
* Put **n ^ 3** for **two consecutive nos**, **two consecutive even nos**, **two consecutive odd nos**.
* Don't put **equals** just find approximated answer. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/014d2c45-fb9c-4e97-b143-ecd7ed1e0753)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af3d53e0-02c6-4d7f-ac7b-8b0a26d5c429)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1f7e5c5-c881-4aaa-bdb9-1a3fb3af56ab)

* **TRICK**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/692406f8-0569-4b63-91d9-06a1c9f7d792)

* Closest square.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c65b9e6a-714c-4051-bdc8-32e54fe2538b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45f93037-8b4c-4e1e-b110-45a9d475297c)

* Question.
* Answer -> **TRUE**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a7b5d3b-3078-4591-9898-efe4b05d9d09)

* This is valid for **tournaments** as well.
* Considering that there is **one match** between **two teams**.
* There are **three** teams such that there is **exactly one match** between two teams -> **nC2 -> 3C2 -> 3**.
* There are **five** teams such that there is **exactly one match** between two teams -> **nC2 -> 5C2 -> 10**.
* We don't know how many teams are there but **total no. of matches** is **66** -> nC2 = 66.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/597e9fe5-38bb-4172-bcf8-7f95e144bd64)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58a57554-025d-475c-8c8c-ee1a711b8d5b)

* Hand-shakes
* Tournaments
* Gift-exchange
* Theses all can be done with the **above** concept.

* **CK** gave gift to **kanhaiya** and **kanhaiya** gave **return** gift to **CK**.
* So, between **two** people, there is **two** gift exchanges.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a92253a3-d0a0-497f-b0db-3bbf5772394f)

* **One gift exchange** between **two people** -> nC2
* **Two gift exchange** between **two people** -> 2 * nC2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65573dae-3055-47bd-b78d-3cef0d838473)

* **Three gift exchange** between **two people** -> 3 * nC2
* **Thirty(30) gift exchange** between **two people** -> 30 * nC2
* **'n' gift exchange** between **two people** -> n * nC2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fed7cadd-4f92-4333-923e-ddfe91453df2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc4d3365-cd76-4c0c-aa96-9c024a91e628)

* What is important?

> The count or no. of **transaction/transactions** between **two** people. It could be **one single transaction** or more than one **one single transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6e526c7-c160-4ae0-9efa-cf8530e2fa46)

* In the way that **Divya and saima** had exchanges their **greeting cards** with **each other**. Total **no. of cards exchanged** is **some no., let's say 50**, such that **every student has given a card to every other student**.

* This is a clear case of **2 * nC2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02e7124a-b56b-4e00-b614-3ca655a7ef4b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ee29319-25ff-4eb2-9e42-2c886d895f48)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/534e988a-32c8-4458-a24b-244977d7506e)

* We have to see if there is **one gift exchange** or **two gift exchange**. That will determine if it will be only **nC2** or **2 * nC2** or something else.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ae0bcb4-cf17-459d-bc4d-67852ddab840)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/171ce301-6fec-4dcf-b269-83c68d2113f2)

* option **B**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4814383-c99b-448e-9be5-a66e23c66909)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65f4a5b3-b0e1-4b4f-b1be-e2ef385323c1)

* League.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbe3893b-9021-485e-9671-c6ada0c81df0)

* If **DELHI** was the word. Instead of **MATHEMATICS**, the word is **DELHI**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c66ace6-004d-4015-b9a6-d447c8c9f378)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05cb2c74-fe9e-4096-bb6f-d032d7f427b4)

* Form a **4** letter word using the letters of the word **MATHEMATICS**.
* Major concern is **repetition**.
* We can have **3 cases**.

1) **No repetition** -> (5 + 3)/C4 * 4! -> 8C4 * 4!.
* **8 letters** -> H, E, I, C, S, M, A, T (4 letters) -> 8C4
* **5 letters** with are not repeated in **mathematics** word -> H, E, I, C, S 
* **3 letters** with are repeated in **mathematics** word -> M, A, T
* Arrangement is **4!**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4eaa0e04-465e-4c24-9fee-484967f731e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b391a75-ace8-4e50-bcd3-26b44c1a83ca)

2) When **1-pair** is **repeated** -> 3C1 * 7C2 * (4!/2!)

* One of the **repeated letters** will be repeated in the word.
* **7 letters** with are not repeated in **mathematics** word(Two letters) -> H, E, I, C, S, A, T -> 7C2
* **Out of the 3-pairs** one pair is selected(two letters) -> **3C1** -> Represents **one out of the three repetition letter pair cases**.
* Arrangement is **4!**, as **repetiton of one pair** that's why divide by **2!**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f411e62c-4166-42f4-8228-03c84db82ee0)

3) When **both pairs** are repeated -> 3C2 * (4! / (2! * 2!)).

* **Out of the 3-pairs** two pair is selected(four letters) -> **3C2** -> Represents **two out of the three repetition letter pair cases**.
* Arrangement is **4!**, as **repetiton of two pair** that's why divide by **2! * 2!**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7621e8a-9789-4d22-ae91-4836b70259f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9114d9e0-365a-4627-bf38-95de389a3467)

* We are doing **5C4 * 4!** because **5** letters do not repeat in **MATHEMATICS** and we want **4 letter** word so it is **5C4** and the **4!** is for the **4 letter** arrangement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40a4a7f9-4282-4657-bf31-f041562b789b)

* Question
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83060b52-b882-4ae4-a770-5d85068af0f1)

* Question
* Option **E**.

* A < D
* D < W
* A < D < W
* A < W **OR** W > A

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d065b212-d08d-45d9-b0bd-88538c210393)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b0205d5-3744-4726-adfa-156e1d950a14)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4508cf5-a17c-4e2e-bd56-5b9d6733de1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5296daca-c3c0-4bb1-bd6f-9e200df618fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a604d7b7-140a-46d1-be80-9a814784ac04)

* Option **C**.

## Permutation combination probability part-VII (26) [20th June 2023] [2nd March 2024]

* Days in a leap year -> 366 days.
* If nothing is mentioned then it is **exactly** case. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3eeca240-55f2-46ab-a718-7ed2658fcb7b)

* 366/7 -> 52 weeks and 2 days remaining.
* These remaining 2 days can be **any** of them -> M/T, T/W, W/Th, Th/F, F/S, S/Su, Su/M -> Any of these **combinations** are possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dff49001-d91e-430c-8ee7-16c6a1c776bd)

* P(53 sundays) -> Exactly 53 sundays -> S/Su, SU/M -> 2/7. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c921a39-7ead-4d94-9cf0-cacb276eff40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0b6a036-c752-42e3-8dcd-834a13bef3cc)

* P(53 Sundays and 53 Mondays) -> Su/M -> 1/7 [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f5a3429-5909-4c81-ac1c-a9514b1c8955)

* P(53 Sundays and 53 Tuesdays) -> S/Su, SU/M and M/T, T/W -> Nothing common, no overlap -> 0. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8556510d-60d5-487b-9037-72773d7c5b8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/844caf2a-b206-4512-ae3e-b076c21ee443)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8e7f5ec-e69c-4f99-ae91-1f4068415ea7)

* P(52 sundays) -> M/T, T/W, W/Th, Th/F, F/S -> 5/7 [**VERY IMPORTANT**]
* We have to reject **S/Su, Su/M** because they have **53 sundays** and we want **exactly 52 sundays**. [**IMPORTANT**]
* P(Atleast 52 sundays) -> M/T, T/W, W/Th, Th/F, F/S and S/Su, Su/M -> 5/7 + 2/7 -> 7/7 -> 1 [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3eb13730-89cb-4662-bebf-a8fe8153140a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ead61c41-3a2c-4566-9d44-56469b2fb361)

* P(52 sundays and 53 mondays) -> M/T, T/W, W/Th, Th/F, F/S and M/T, Su/M -> 1/7
* P(52 sundays and 53 tuesdays) -> M/T, T/W, W/Th, Th/F, F/S and M/T, T/W -> 2/7

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f226f86-990b-4860-a316-ff861d95ab3a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f8bc5ed-f9e8-439c-80ec-b10919e64b57)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8633a8eb-a2aa-417a-a265-337e5e061daf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce2db2d2-1570-43a6-aa47-01623d72d1a3)

* P(2 Same color socks) -> (3C2 + 4C2 + 3C2) / 10C2
* Option **D**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fedd0bc1-3fdd-4e38-bda0-8741d317fc42)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1fdef4e-17fb-420a-b0d7-43040148c3f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/891c64b6-f0bc-4537-a885-96e62a02c959)

* P(DD) -> 3C1/10C1 * 2C1/9C1 * 2!/2! [**IMPORTANT**]
* P(D'D') -> 7C1/10C1 * 6C1/9C1 * 2!/2!
* P(DD') -> 3C1/10C1 * 7C1/9C1 * 2!

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1703119e-5a84-484f-9ef5-355839410ecd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cb62e41-7e3e-448b-92bf-1b4789505a3e)

* Repeatation -> 4^3 -> 64
* No repeatation -> 4 * 3 * 2 -> 24

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abcd244c-6ca8-4974-bfb9-b9786bad150c)

* Divisibility rule of **4** -> Check the **last 2 digits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a529cc85-5b2a-44b8-9746-7c28c3757729)

* Multiplication of **4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff9bf067-b9e9-425c-8fc9-2634b0f19a2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0880a986-25b7-4d4a-9f07-a04a3f38f9ba)

* Zero(Z), Not Zero(NZ).
* We have **25 cases**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/277b0008-9ed0-491f-a171-0ae12c9d7bb4)
 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb66adb2-1023-4903-b477-fee054f6486d)

* With repeatation.
* P(Divisible by 4) -> 4 * 4/ 4 ^ 3 -> 16/64 -> 1/4 [**VERY IMPORTANT**]
* Last 2 digits -> 12, 24, 32, 44 -> 4 cases.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/971ebef0-8391-491a-91d0-3acb30c5780e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d71a0ad4-c122-40a4-9fd7-d1cabdb49114)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08de296e-2cc9-44be-a481-e1447f0ed9ce)

* Without repeatation.
* P(Divisible by 4) -> 2 * 3/ 24 -> 6/24 -> 1/4 [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4983854-bc29-4a0b-897a-00934eefe509)

* P(5-digit no) -> 5 * 4 * 3 * 2 * 1 -> 5! -> 120
* P(divisible by 4) -> 12, 24, 32, 52 -> 4 cases
* P(5-digit no and divisible by 4) ->  3 * 2 * 1 * 4/120 -> 24/120 -> 1/5

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffc9cd75-7988-453b-8d76-da803d11375c)

* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c752179d-625e-48b8-bc59-fe8e44b81938)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87f4c47e-5b4b-4b0d-89e5-a8336b8cefac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0eba646f-9bbb-41fb-a7db-7b686a441f8e)

* Hundreth place is **independent**.
* Inequality is between **unit and tenth** place.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb743e1c-8f5a-48d9-b733-8f04353e48ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26f37c82-12ab-4fe4-b7f1-f0538f2f0ccf)

* probability.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cafcd3b-b1a1-43a8-b870-5d4e041fb6e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7327c75-cf3e-4c53-ac40-e4250b8007f1)

* P(Tenth place greater than unit place) -> 1/2 [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/996455e6-c80a-40c8-bf9d-17bce7d2511a)

* On an average of **5yrs** there is a floor.
* Roughly between two **consecutive floods** there is a gap of **5yrs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc91f73b-65d4-4a18-b003-6f2d3ab37af5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b76035cb-ae9f-4711-9a42-be85462c82e8)

* 0.04 -> 4/100 -> 1/25 -> 25yrs.
* Average.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b502177-489f-49d3-abe4-4ff83ff0b706)

* Independent Event.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb1b7a96-b52a-4b68-a682-981512e06e08)

* The **4-gates** operate independently. [**IMPORTANT**]
* P(F) -> Failure of each gate -> 0.2
* They are **independent events**.
* Gate-1 has failed and given that find the probability that Gate-2 and Gate-3 will fail -> P((G2 intersection G3)/G1) -> P(G1) * P(G2) * P(G3)/ P(G1) -> P(G2) * P(G3) -> 0.2 * 0.2 -> 0.04. [Answer] [Solution] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/438a89ed-77ff-4764-bb24-be781f21c8ac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5072438f-a182-45d1-b0df-a862359214ca)

* if the coin is tossed one more time then find the probability of getting a head(H).
* They are **independent events**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e97d0360-7667-4b14-9f99-5446fea64c20)

* A ball is drawn at random and it's  **color** is noted. When the ball is placed back at the **urn**, not only the ball is kept and we are keeping another ball of the **same color** to the urn.
* Originally there were **12 balls**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d024f690-881b-421a-9f4f-92f0573dea29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd2aadb0-396e-4b61-841d-9467c39579b2)

* P(Red color ball in the 2nd draw) -> RR + GR -> 5/12 * 6/13 + 7/12 * 5/13

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e773d6d9-c6c4-4e30-86ec-c37457de38f1)

* P(3-thermistors are defective) -> Exactly 3-thermistors are defective
* 10 thermistors are randomly picked and 3 are defective. [**IMPORTANT**]

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Permutation and combination

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c604aa3-3dd0-4668-b636-19f844982512)

* We have 3-digits, **1/2/3**.
* How many **different** 3-digit nos. can be formed.
* At the **unit place**, we are getting **twice or two times**, **1/2/3** nos.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba744914-340f-4ff6-adc0-80833b50557b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/975ecd93-3c99-42c0-852b-3241e019d2b4)

* In all of the **three** columns which are **unit, tenth and hundred** place, we are getting **twice or two times**, **1/2/3** nos.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7919d78f-07ad-4ef7-bba7-91f6c0f1fcdc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc6488c2-71a7-4827-acb7-6306729a21ed)

* 34 -> 3 * (10 ^ 1) + 4 * (10 ^ 0)
* **3 and 4** are called as **face value**.
* **(10 ^ 0) and **10 ^ 1** are called as ** place value**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6055386a-1bfe-43d0-b2b8-8e370aebf6dd)

* Sum  -> 2 * (1 + 2 + 3) -> 2 * 6 -> 12
* Sum is **same** for **unit, tenth and hundred** place.
* How we will find the **difference**?
* Hundredth place sum -> 1200
* Tenth place sum -> 120
* Unit place sum -> 12

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8038f17-c92b-46c1-888f-260bd8c3f5f1)

* Total  -> 1200 + 120 + 12 -> 1332.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9fc48c0-6687-4c84-81f2-02e47a24f944)

* Using the digits **1/2** how many different two digit nos can be formed?

> **12 and 21**.

> The sum is **12  + 21 -> 33**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94cb9db8-7736-4169-b985-28135b7a5105)

* Using the digits **1/2/3** how many different **three** digit nos can be formed?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b83df04b-836f-4348-b6d1-4879b933975c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c8d894c-9e4e-40b1-8e44-dc426fb22fd8)

> We are getting **2 * (1 + 2 + 3)** which is the **sum** at the **unit, tenth and hundred** place. That's why we are **multiplying** the **sum** with **10 ^ 2, 10 ^ 1 and 10 ^ 0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79834241-73ea-48f8-8138-f66c7ab053fa)

* For **n** different thing arrangement is **n!**.
* For **3** different thing arrangement is **3!**.
* Every no(1/2/3) is coming in the **vertical columns** is **3!**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa163014-af2f-48fc-8411-ab3d38ba75ed)

* Using the digits(1/2/3/4), how many **4-digits** nos?
* The **no. of different 4-digit** nos, tsum of all of them.

* Every no, will come how many times in each vertical column?

> **n!**

* For **4-digit** number -> 4!/4.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db872a27-2299-4f95-9a87-18b72658cd9e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4ac6df9-f099-437c-bb9d-201b86255485)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec9b8838-2fbe-408b-a014-d9c43d99a107)

* [n!/n * (1 +2+3+4+....+n) * (10 ^ (n-1) + 10 ^ (n-2) + ..... + 10 ^ 1 + 10 ^ 0)]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c61b856a-73ed-4a70-b998-0957b099dcbe)

* **n!/n** -> How many times, every no is coming in every vertical column?
* For **3-digit** no, **3!/3**.
* For **5-digit** no, **5!/5**.

* **[n!/n * (1 +2+3+4+....+n)]** -> Every vertical column's digit sum.
* **(10 ^ (n-1) + 10 ^ (n-2) + ..... + 10 ^ 1 + 10 ^ 0)** -> Every vertical column's place value's sum. 

* Using the digits **1/2/3/4**, the sum of all the **4-digit** nos that can be formed using these digits(1/2/3/4) exactly **once**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90b4c16a-de34-4012-ac1d-846712bd2ccc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11d44b03-6abc-4721-ad79-edb430e8b8e1)

* **6-digit's** sum.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2d4b156-b144-4f8b-9c6f-3bd22100069e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40bd12f8-b7e8-4b54-ac1f-18ab9e16d142)

* Average -> **sum/n**
* sum -> Total no. of cases here.

* **5-digit nos**:-

1) **1/2/3/4/5** -> (5!/5) * (1 + 2 + 3 + 4 + 5) * (11111).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e3709d2-a71b-4e45-9231-2773f5b73e6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25710082-366f-42e1-a50a-999111ee0701)

2) **1/4/5/8/9** -> (5!/5) * (1 + 4 + 5 + 8 + 9) * (11111).
3) **1/2/2/3/4** -> (5!/(5 * 2!)) * (1 + 2 + 2 + 3 + 4) * (11111).

> **Dividing** by **2!** because we have a  **repetition** of **2 twice**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dc548df-35c4-462e-9b06-29d9a1f78443)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8b61738-4097-431f-a276-79c57059e030)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/754523e5-92c1-47c6-8549-1cf8c852a614)

4) **1/1/3/3/3** -> (5!/(5 * 2! * 3!)) * (1 + 1 + 3 + 3 + 3) * (11111).

> **Dividing** by **2! * 3!** because we have a  **repetition** of **1 twice and 3 came thrice or three times**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f49bdd6b-f0cb-43ea-9b54-f3876878cfb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dcdfaa9-88a0-4151-ab20-5462fb35f7f5)

* Question.
* Option **B**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c65ce17-351c-4683-b5a4-d004918a3036)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cae42901-ded8-4e88-b17c-3635d6b7549b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ccf544f-6af0-4c8d-b66f-d72890f7f6b6)

* If **zero(0)** is given and we have to find **5-digit** nos.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c4e9245-9516-4a6a-805d-aea5aaa4e16e)

* **0/1/2/3/4** -> **5-digit sum** -> (Find normal 5-digit no as if no zero is there) - (4-digit sum)
* 0/1/2/3/4 -> 5-digit sum -> (5!/5 * (1 + 2 + 3 + 4 + 5) * (11111)) - (4!/4 * (1 + 2 + 3 + 4) * (1111)) 
* Every case where **zero(0)** has come **first** which is as good as **4-digit** numbers. So, we will find the **5-digit no** sum and **substract** the **4-digit sum** from the **5-digit** sum. Then we will get the **answer**.

* If **zero(0)** comes first in a **5-digit no** then that no is as good as **4-digit no**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ec2a262-7cbd-47f6-b5fe-2e50c5676118)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d82142f2-4f3a-440c-8ebd-368c5599694f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89dd4824-e749-4317-8936-6955a584d3f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61cb0974-732b-4bf6-8310-ff00c9de1b4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb529b11-aa58-482c-85d0-800004a43347)

* Finding **ranks**.
* **STEPS**:-

1) Alphabetical order -> ANT
2) Total Cases -> 3! -> 06
3) Distribution of total cases -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e15b5fd-7a84-4d59-8e62-ee8da4b8dafa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4968e2fb-14d5-4f00-a5c2-3f6383fcfbee)

* Distribution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0308858c-368b-4bab-b41a-e434c5e489fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abad19e2-b6d9-4f89-a24b-1bd11fef3930)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70c1effa-ee7b-4d71-a761-28748571202d)

* Word -> PEAK

1) Alphabetical order -> PEAK -> AEKP
2) Total Cases -> 4! -> 24
3) Distribution -> 4 * 06 -> 24.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f839ee6e-eef1-453e-b951-300da15ab3d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cb69823-6c47-4780-8e9f-5104cddef4df)

* Distribution

* **NOTE**:-

* **2! and 3!** are **awesome** numbers.
* 2! -> 2
* 3! -> 6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dddaebad-908a-46f9-a8c1-6b4e31b2c95f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8dc55e3-c699-4296-922e-b0c44436b20c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc211782-acd9-47e3-a197-91f3e928b67a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75d4156e-aa83-4b6a-92b5-1bd35af3b063)

* Rank finding.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4db20f86-d80a-40c0-a410-ccd163cc43d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef77a463-4b82-4267-bc0b-797a9cad6565)

* Word -> FROM

1) Alphabetical order -> FROM -> FMOR
2) Total case -> 4! -> 24
3) Distribution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98089042-3100-43f7-aa89-e994a6d5f657)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a79ef16d-9491-4179-88a2-cea8862111f7)

* Find the **4th word** -> FORM
* FM -> OR -> FMOR -> 1
* FM -> RO -> FMRO -> 2
* FO -> MR -> FOMR -> 3
* FO -> RM -> FORM -> 4 -> 4th Word [**ANSWER**]
* We are finding the **rank/position** of the **word** using **permutations** by looking at the **distribution** of the **letters**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81a7026d-a0c9-4621-bd79-6d9630684f13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efcfca68-4b56-48ad-a52b-808ff7d349ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1607632-bb5e-4815-a79e-785df10b7c8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13530950-1a5f-4fae-8fb8-5fff926c6fb1)

* 3rd word -> AKEP
* 10th word -> EKPA
* 12th word -> EPKA

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b8b7154-faa9-4f97-bca1-911aabcab034)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f74325b-3f9d-4319-9a13-d82ce7f3fbb5)

* 15th word -> KEAP.
* 14th word -> KAPE

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ce21daa-9aa2-434a-ac92-195f3a0e8a1b)

* 20th word -> PAKE

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edc7c263-3138-442d-9679-a3a082b16cd7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90c8a748-3e0e-4073-86b2-b1dbf12960e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82e955e2-67d9-4fc4-a684-cb22de874f25)

* 18th and 20th word.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaa0e6b4-2a0b-49cc-80bb-d8d6b69aaf5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/796594bc-87bd-403d-8cea-4f116ffd5bb8)

* **TRICK**.
* Word -> Gold

1) Alphabatical order -> DGLO
2) Total cases -> 4! -> 24
3) 5th word -> **DOGL**

* DGLO
* DGOL
* DLGO
* DLOG
* **DOGL** -> 5th word.

* All of the things can be down using the **Alphabatical order**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/986bf337-154e-4f94-9de6-4e6709a75ad9)

* 10th word -> 6 + 4 (II place) -> G -> **GLOD**

* GDLO -> 7
* GDOL -> 8
* GLDO -> 9
* **GLOD** -> 10 -> 10th word

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9338370-8476-43a3-a03d-5c4d8129af47)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af0d1a9e-75ff-445d-96b8-dacd0f8d13f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db8b53a1-d8dd-4a9d-9b3d-9005a8ddf817)

* ARET.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bab617f3-8322-46f0-b04f-c2392bd6ffb9)

* REAT

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71004b12-3a0e-455a-b50d-ca326d2214ff)

* Word -> DELHI
* Cases -> 5! -> 120
* Distribution = 5 * 4! = 5 * 24 = 120.
* So for each **word** now, instead of **6** permutations which we saw **earlier** now we have **24** permutations.
* DE -> We  have **3 letters** left which is **HIL**, so arrangement of **3 letters** is **3! = 6**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91deedaa-e2a5-4732-80e8-5996f340cbf5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb18b2df-71ca-4bea-ad30-abaabcd8af3a)

* 15th word -> DIHEL

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0381f7e-14a4-4d01-92dc-5e65e26a2487)

* 30th word -> EDLIH

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44f26eae-6f3c-429f-b0e1-56848dde95b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70723120-d1bd-4007-a82e-6373a7af1f4d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72334b5e-db73-41c9-a272-15937815bce9)

* 50th Word - > HDELI

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8016e8d-b236-4ab3-8d46-710608a51913)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16640ccc-fa80-4d92-85cc-508caaa5ed3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58abc333-d0d1-4a54-9e02-0ef4978657cf)

* 75th word -> IDHEL
* 100th word -> LDHIE 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef6281bb-85fd-459e-a307-e5bb6a190a15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/331d61a6-3137-472a-b2cf-d2d0cdac889e)

* Word -> AGAIN

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efc9c4ab-f004-43dc-8a19-dbfb0de3c312)

* A -> AGIN -> 4! -> 24
* A -> 0
* G -> AAIN -> 4!/2! -> 24/2 -> 12.
* I -> AAGN -> 4!/2! -> 24/2 -> 12.
* N -> AAGI -> 4!/2! -> 24/2 -> 12.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0f9bcc2-d358-4569-bb6a-4262efba62e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b50c938d-ee6b-4d81-a401-2ba302f15956)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8527a141-7dbe-45ff-981b-c92eaf6966b1)

* 50th word -> NAAIG

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8b97dd6-9d40-402a-8bf3-58d06d9b25a3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de7bd48a-93e0-4090-9579-1a4e36977dc4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/426d24f9-0f87-4ee2-ae20-bd0ae6509d58)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2afab96c-b4f5-40dd-9e87-a96914509b96)

* 50th word -> REFOF. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8394cc5e-34b4-492d-8db7-dcfcf701a9ea)

## Doubt-clearing-session (27) [20th June 2023] [2nd March 2024]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/615b07b1-a42d-48a1-9947-ede670fbc623)

* Total students -> 100.
* n(M) -> People able to clear **mathematics** paper -> 60.
* N(M') -> People who are not able to clear **mathematics** paper -> 100 - 60 -> 40.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c25e1c4f-be5d-4dc2-a9dd-c4108d7c8c5a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91ddbbfd-7320-4703-aa11-7ca7c6690e0c)

* Mathematics(M), English(E)
* **a** represents the total no. of people who could only clear **mathematics** paper -> ME'.
* **b** represents the total no. of people who could only clear **english** paper -> M'E.
* **x** represents the total no. of people who could clear both **english and mathematics** paper -> ME.
* **n** represents the total no. of people who could clear neither **english nor mathematics** paper -> M'E'.
* Total = 100

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba5fa1b5-a66f-4f9d-a8f2-f671a8bb1ff6)

* Total -> a + b + x + n
* x = 20.
* n(M) -> 60
* n(E) -> 30
* n(a) -> 60 - 20 -> 40.
* n(b) -> 30 - 20 -> 10.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/200ea0aa-fa35-4b94-81b1-856a8e3446c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11e90118-ed27-4ea6-b7d7-042c00463926)

* n -> No. of students who couldn't clear neither **english nor mathematics** paper:-
* 100 - (a + b + x + n) -> 100 - (40 + 10 + 20 + 30) -> 100 - 70 -> 30.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bd7d5e2-d988-46d0-8728-fc613378f46f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c21adda2-dc52-41dc-81f3-0efd2b9a5c51)

* Total nos divisible by 2 -> 100/2 -> 50.
* Total nos divisible by 3 -> 100/3 -> 33.
* LCM(2,3) -> 6
* x -> 2,3 -> LCM(2,3) -> 6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70fca58d-bd55-45b4-995e-8df487e28e27)

* x -> 100/6 -> 16
* a -> 50 - 16 -> 34
* b -> 33 - 16 -> 17

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/681a7bf0-91e1-4572-8d0a-5af4ecbeb407)

* n -> 2'3 -> 100 - (16 + 34 + 17) -> 100 - 67 -> 33

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c894fe8-11c4-4656-b0b3-3009c5507db8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b26e6ca4-2f94-41ed-9f65-89f27a192c20)

* NOTE.
* Taking care of the **lower limit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d32d54b-2dc4-46d7-bb9f-0db213d3b29d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa1a555f-e86e-4598-834e-efd5ec593c40)

* Question.
* Total -> 100
* Divisibility rule of **4** is last 2 digits.
* Nos divisible by 4 -> 100/4 -> 25 
* Nos divisible by 5 -> 100/5 -> 20
* Nos divisible by **4 and 5** -> LCM(4,5) -> 20 -> 100/20 -> 5
* x = 5
* a = 25 - 5 = 20
* b = 20 - 5 = 15
* n = Total - (a+b+x) -> 100 - 40 -> 60
* n = 60.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/475ddd1d-12ce-4518-b944-3209805dbd34)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c441580-96cf-4a69-a2a2-f29c178c9268)

* Answers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c8fd605-b24c-4f77-ba23-8f2c0bc4f7dd)

* Leap year, Century leap year.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3b7c892-3c5a-47f4-b2e3-ad378d174ab8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a52ce73-4f25-481d-9b3b-daa7b4fcb040)

* NLY or OY
* LY
* LY
* LY
* LY
* Leap year(LY), Ordinary Year(OY). 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45ff891e-16a6-4a34-a05b-0796d49ee4df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95a9874b-c858-4adb-8e3c-a2a3065f3a31)

* LY
* OY
* LY
* LY
* LY
* LY

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88fab862-1862-49e9-aa09-eacefd002dfb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70ffea48-7a3a-48bc-9600-c14288061ae7)

* There can be a **max. gap** of **8yrs** between **2 leap years(LY)**. [NOTE] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ae77da7-d028-4764-b370-9e4b2c0b51d2)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c3c8675-33c9-4873-9f86-19a740d866d7)

* Encircling the **odd numbers**.
* Odd(O), Even(E)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b43bbae-aac7-4242-b822-6bb70a15b822)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0d64fdd-71bb-4fc3-920e-9c645e72336a)

* n -> Count of numbers.
* We have written **conservative** multiples of **3**.
* Half of the nos are **even** and half of the nos are **odd**.
* If it starts with **odd** then it finishes with **odd**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76f16830-0824-486d-a362-1ddd10043b6e)

* We have **3** odd and **2** even.
* If we have written **consecutive nos** and if it starts with an **odd** no and finishes with an **even** no then divide it into **two parts** half-half.
* If we have written **consecutive nos** and if it starts with an **even** no and finishes with an **odd** no then divide it into **two parts** half-half.
* If we have written **consecutive nos** and if it starts with an **odd** no and finishes with an **odd** no or if it starts with an **even** no and finishes with an **even** no then the **odd** is **(n + 1)/2** and the **even** is **(n-1)/2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47875a80-4e9a-436d-8b2d-0ce092e8617d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/387cbc8f-7224-47f2-b1d7-59d6c8283c71)

* Out of **33**, **17** are **odd** and **16** are **even**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d62c2842-a12d-4cd1-a132-0f13356683c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66bd0904-b4d1-471b-9b3b-3a74be42a17a)

* **20** is an **even outcome** so **half** is **even** and **half** is **odd**.
* **66** is an **even outcome** so **half** is **even** and **half** is **odd**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7412c5d1-7075-4d12-8678-e5a4e0b2a98b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b93b0535-16d5-4bb6-a3a9-83405bfc68de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1614b02-f6a5-44b5-9024-7b6a4ee1ba75)

* Question. [**VERY IMPORTANT**]
* n(RB) -> 13 + 44 + 7 + 12 -> 76
* only RB -> 13
* n(PS) -> 15 + 44 + 7 + 17 -> 83
* n(WTV) -> 7 + 12 + 17 + 19 -> 55

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bb818c8-d2f2-446d-97f4-4a44dfb2f314)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/329139a9-cf08-408a-a157-2e37cc11fd44)

* Question. [**VERY VERY IMPORTANT**] [Practice Again]

* n(RB or PS) -> 13 + 44 + 7 + 12 + 15 + 17 -> 108 [All except 19]
* n(RB and PS) -> 44 + 7 -> 51 [Intersection between the two]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1680bba8-0f19-4eef-ac62-47c396b0620c)

* n(RB or PS but not WTV) -> 13 + 44 + 7 + 12 + 15 + 17 - (17 + 7 + 12) -> 13 + 44 + 15 -> 72 [Reject the numbers from **watch TV(WTV)**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/320da8e8-473b-4ad2-9638-7acf644f5546)

* n(RB and PS but not WTV) -> 44 + 7 - 7 -> 44 [Reject the numbers from **watch TV(WTV)**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d82abd53-b144-4ece-bca3-cd03a269bacd)

* Question. [**VERY VERY IMPORTANT**] [Practice Again]
* n(S and So but not D or HP) -> 1 + 8 + 30 + 8 - (8 + 30) -> 1 + 8 -> 9
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43deb1f6-96f8-4c58-958a-c2c4558318c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c29b90e-1093-41ed-8f92-1a93c5f681ce)

* Samsung -> 12 + 1 + 8 + 8 + 30
* Samsung and Song -> 1 + 8 + 30 + 8

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57392add-1ba1-4dc4-9823-a46fd2107a1b)

* Not Dell or HP -> 8 + 30 -> 38

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/376bed79-ad1d-433d-8a28-574a80ba726f)

* 8.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/868eed43-5602-4a8d-a84e-e369483b454b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1670f5fd-84c5-4d13-b27e-27d7e3742bf0)

* 8
* Option **B**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b551913b-0ceb-472b-99df-99fa2b4b9a40)

* Question. [**VERY IMPORTANT**]
* Total -> 1000
* n(C) -> 300
* n(F) -> 600
* n(C intersecton F) -> 50 [x]
* C -> 300 - 50 -> 250
* F > 600 - 50 -> 550
* Play neither -> Total - (C + F + x) -> 1000 - 850 -> 150

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acbeaabb-30af-43cc-ba69-88d2a39d99b1)

* Option **A**. [**VERY IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/063e5795-50dc-4383-83bb-05c25159e684)

* n(C) -> 35
* n(T) -> 40
* n(C intersection T) -> 10 [x]
* C -> 35 - 10 -> 25
* T -> 40 - 10 -> 30
* drinks neither -> Total - (C + T + x) -> 100 - 65 -> 35

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f8c26d9-55bf-4327-a246-732e6b71eadb)

* Option **A**. [**VERY IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b75810ff-eddd-40a0-bc33-155497147be5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e7e172f-a2d3-43cf-a073-b71f82c0ba59)

* Negation. [Formula] [Example] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e49ab9b-14f7-4339-8496-272743bc5dde)

* Doubt.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd300ee2-35af-4002-9d82-3fcc2a945fa0)

* LY and OY [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/787496ce-ca5c-46e4-991f-3f2176c7ee29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe3934a0-93aa-453e-82ef-28af256de7fe)

* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29bbb27f-f6d1-4a50-810b-c394d9e4714a)

* HW
* First Odd Term -> 1
* Last Odd Term -> 99
* n = (99 -1)/2 + 1 -> 50
* Odd Sum -> n/2 * (a + l) ->  50/2 * (1 + 100) -> 2525
* n = (200 - 150)/2 + 1 -> 26
* Even Sum -> 26/2 * (200 + 150) -> 4550
* Odd_sum/Even_sum -> 2525/4550 -> 0.554945054945055
* Option **C**. [**VERY IMPORTANT**]

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Quiz- 4 Discussion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cf9dfbe-5f86-4317-94ff-7c348e700a34)

* PLDR(EAE) -> 5! * (3!/2!)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4075416a-b21f-41b4-b7b7-2223206f710f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f122a0cf-3a5a-462a-a440-ef2f15a41dff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eee8bc6-0143-40cd-afbf-97ee8fd8b275)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01d17540-4d1e-48c4-9d3c-6f28a9983977)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86030bf1-057e-4a6c-84a3-9dc1b7eeaf27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18a3cc17-6bbe-4740-95b7-ce7fc2f66455)

* 50th -> NEFTO
* 100th -> TENOF

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/763a19a7-0414-4adc-8f77-866409d83112)

* Finding the **rank** of the word **SAHIL**.

1) Arrange the letters in **ascending order**.
2) Find the first letter **S**. It is at 96th position.
3) Do it same as when finding the **50th, 100th** rank.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e1ad439-3332-43cc-85fd-cdc202c423f9)

* Find the **rank** of **OFMR**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/394b1eb0-e968-49a2-ab97-58e11d80a4bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd420349-5d9d-459f-a96b-286f7c038657)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdeac6a2-8618-45ad-98b6-5fac48b42917)

* **MOTHER**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17b9585e-489d-4d6d-b2c3-4d30fcd42a08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e1a9ef8-57f1-429a-bb23-8d064f2e66e2)

* Option **B** -> 144.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97c543f1-d9e9-45f2-beaf-f85e1249a18a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33f9f1c7-a5fc-4ced-bbe6-e01d0d2a8e90)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b608e2e-7f4e-4a95-b28f-802ed3d1d575)

* Explanation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8135631-057f-4117-9cd8-896ae4523678)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f9bfeee-b914-40a8-ba66-9bf2eec6bca1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd9dcc28-3dae-4a30-9cdb-4f797d94d479)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f736e0ea-cd4c-414d-a0b3-67ad8522e201)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6521d1c9-7def-48d4-a9d8-d85695a3d5b2)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83ba52cc-3158-43b0-8f8d-d1389c146fc1)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7a59fa1-d23b-46c8-a306-478a4274f354)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8608b849-7f0a-4957-9f8c-7528fa3b246d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b93924e1-8333-44d0-9e1b-05b867b9a16e)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d32e9256-3b43-43cd-ab1d-2365676f50cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c39dbf93-da26-4372-b8e5-5a59a8f5d676)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87448458-06c4-4b06-a02c-576809473e1e)

* **5!** is for **5 letter** permutation and arrangement.
* **8C3 * 3! * 5C2 * 2!** is when they have said that the **vowels** are in **odd place** or the **constants** are in the **even place** something along those lines, then we could have written thatn.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31e50d79-bd97-4159-b064-bf238434ad46)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0152894c-9718-4ec3-a702-41c1dff87549)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b19eb9b-6971-4bb9-b4eb-82b0acac77c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c90776cb-bce7-49ad-a401-2fce0fea6628)

* Option **D**or **11** is not the **correct** answer. Check below. **Option 'C'** is the **correct** answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0e1f3c7-ebb8-424a-8f39-8291ae4a27cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7806d55b-6037-4def-aef4-0be9b39f67ab)

* Option **C** correct answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2fc79c6-43ff-4b93-a613-fa9af72c02f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1942f3d9-194b-4bad-8d7e-809568bb2e28)

* **TRICK**:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/526618f6-b360-4c8b-94a8-79c12e285960)

* **r** -> No. of variables
* **n** -> Power.
* **Formula** -> (n + (r-1))C(r-1)
* (a + b) ^ 2
* (a + b) ^ 3
* (a + b) ^ 7
* (a + b + c) ^ 2
* (a + b + c) ^ 50

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9193d4fb-902d-449f-b3e3-c8f8d0699dd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8b0dd04-e82c-4c5e-b560-b82d10ed6463)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a01ac526-eb20-4e94-94c5-a2caa24b8f94)

* **(a + b) ^ 7** -> (n + (r-1))C(r-1) -> (7 + 2 - 1)C(2-1) -> 8C1 -> **8**.
* n = 7, r = 2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bbdcdca-3626-4c85-bcd4-9b211d8fc577)

* No. of terms in ((a + b + c +d) ^ 10)?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdff50c2-819b-45e7-9b8d-2d2fd3733b06)

* Question.

> **(n + (r-1))C(r-1) -> (10 + 4 -1)C(4 - 1) -> 13C3 -> 286**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6505dc75-a881-4441-b191-fd4aa1b5a99a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/704b3c20-7912-4350-9717-7cc599f028c9)

* Algebra. [**IMPORTANT**]
* Main importance/important thing of **algebra** is **inequality**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba8409ec-2fc0-449d-ab93-3cdac9c3205f)

* What is the **min** value of **X and Y**?

> **X = Y = 0**, as **X >=0 and Y >= 0**.

* X + Y = 4.

> From **4** take out the **min. values of X and Y** from **4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b73668d-39bd-4d9b-b2a7-ecfbf74b1ac4)

> Use the **(n + (r-1))C(r-1)** to get the **answer**.

* Here, **n** is the value on the **right side** of the equation.
* **r** is the **no. of variables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b64f8d9-136e-4ad1-8836-c1c9035c76b7)

* When **X > 0 and Y > 0**. **Min value of X an Y** is **X = 1 and Y = 1**.
* Now, we will **substract**, the **min. value of X and Y** from **4**. So, the equation is **X + y = 4 - 1 - 1**.
* **X + Y = 2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c559b28d-135d-4568-a332-d7b6769fff91)

* We are finding **no. of solution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/760e9837-a86b-4750-926d-b20b0b8c6913)

* For **X >=0, Y >=0, Z>=0**, the **min values of X= Y = Z = 0**. So the **new equation** is **X + Y +z = 10**.
* New expression -> **X + Y + Z = 10**.
* We got **no. of solutions** as **66**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7449f33-dd27-4d3a-b044-c5401e78adf9)

* For **X >=0, Y >0, Z>0**, the **min values of X=0, Y = Z = 1**. So the **new equation** is **X + Y +z = 10 - 1 - 1**.
* New expression -> **X + Y + Z = 8**.
* We got **no. of solutions** as **45**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35cc06a0-c8ed-4d5d-b80e-3dbd9b24302b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aee245ad-cf04-42fc-89fc-12679d80846c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e22ee495-6f43-4b4c-bbc3-16ee0de6a72f)

* For **X >0, Y > 1, Z > 2**, the **min values of X = 1, Y = 2, Z = 3**. So the **new equation** is **X + Y +z = 10 - 1 - 2 - 3** -> **X + Y + Z = 10 - 6**.
* New expression -> **X + Y + Z = 4**.
* We got **no. of solutions** as **15**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39adb0bf-a74a-4e44-a30d-19c2a214a7e7)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dd38441-4d27-4a36-b6c4-cfcf076677a5)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b370691c-5bc4-4d8b-9259-7f02bc2a4431)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16b1f1a0-6406-4a45-b4e5-3c2f43c1052e)

* No. of terms.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f378112-6b58-497d-bb6c-9faa3a9e950b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d5a34eb-1ef5-4843-8927-9b85367dd06a)

* Repeated words.
* IAAMS.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb31943f-3d01-4a9e-a360-bf85bc89f0bb)

* Critical Reasoning.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3eb6f304-4351-4d3f-ba0e-43b015006b3c)

## Verbal ability part-II (28) [20th June 2023] [2nd March 2024]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00121a1e-de65-4215-822a-ef8ce2af8d6a)

* Blood Relation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54da649b-ed06-4520-930f-8c9712eb94eb)

* Necessarily False
* True, except -> False [**IMPORTANT**]
* False, except -> True [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efeb8ccb-ebd1-4224-a602-a5177a674d41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/505574b5-05f0-42cb-b254-bbfdc0b52007)

* Option **B**.
* option **B** is the only option which is **not possible**. Other options are could be **possible**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b9867d7-f98a-423d-87bc-79e84c4d4505)

* Voracious reader -> Avid Reader -> Person who reads a lot.
* Vor/Vour -> Heavy eater. [**IMPORTANT**]
* Carn -> flesh
* Herbivorous -> One who eats herbs
* Carnivorous -> One who eats flesh
* Omnivorous -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc06fe8b-734d-4990-a2f9-1131fe7f7cc7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16eaca9e-e13f-4c7c-b6ce-f7578e6f309d)

* Voracious
* Veracious -> Someone who always speaks the Truth -> Honest/Truthful.
* Mendacious Men -> Someone who always speaks a lie.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58da252a-7b4d-4632-a660-e8312d43b5c3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1d82cfb-5550-451c-883c-71f33f91b7af)

* Words related to **men** like **men/man/male** are always **negative words**.
* malnutrition

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/463ead71-075f-4fcf-afdd-d1001fde8aaa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c642317-bf22-4924-a554-a2ed34c92ff2)

* Option **B**.
* insatiable -> Something that cannot be satisfied.
* indiscriminately -> Not making or based on careful distinctions; unselective
* precocious -> Someone who gains maturity early in their life.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/916dbe6c-10ea-4775-adbd-18f23e5bf0ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58455741-1e87-476d-a8dd-1545e0058975)

* Beside -> At the side of; Next to.
* Besides -> In addition; also -> Moreover -> Other than.
* Currant -> Grape
* Current -> Electricity

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f36b4032-5260-47ae-a8f8-d8d2fa484028)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d3524d3-fae2-4b3f-8800-3419dd1b7a73)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0199d94f-4f76-4e90-a932-b59b45266b33)

* Option **A**.
* Option **A** matches the **requirements/conditions** given in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3d5c93f-6104-4560-9071-3eb5fde5ac75)

* Som/Somno -> Sleeping/Sleepy.
* Insomnia
* Somnambulist -> Sleep walkers.
* Somnolent

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/266f652d-005a-4b2b-9556-0afcf6559d7d)

* Beside -> Next -> Adjacent.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/257bc8c1-639a-42e6-8d78-fc22556930d0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93e71c77-952f-43fa-b06f-6c451b2d1c74)

* PQSR, RQSP, RQPS, PQRS, QPSR, QRSP,  
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c47bf0b-7040-4fb7-9d53-52499313bf91)

* Building the **different cases**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fac51eaf-20ab-4174-b6d8-f52adef4fb51)

* Solution. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/524ea533-ed1e-42d2-b550-1ad58df59365)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0a3819e-17b9-4c1f-8af4-dbb7f6809cca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd1da20-a4a5-4122-b590-24d4f4c0a3e6)

* Go for **atleast** wala case.
* Option **C**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec7e32e1-3da7-4db7-af5d-02e97c6659b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d96fb3d-520d-424b-97ee-39030c6ac034)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8a93a89-75fe-4ba0-b888-1282fb98eb70)

* Option **A**. [**VERY IMPORTANT**]
* We do not have enough evidence to comment on the relationship between the **professor and engineer**.
* Conclusion II -> Out of scope.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cfef8f9-d85f-4df2-8b2f-b7fbec477331)

* Done earlier.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/076c1c17-24ce-4c9a-8411-ce4efb99f34a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99a5eaca-53d1-4863-8b23-3eef5b34bd35)

* Option **C**.
* However -> 180 degree word.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa4d6277-db0c-47fd-be32-518b55c2d5f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffb243d9-55cf-473e-bfb7-876093931c78)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9350f18c-1621-43f2-9049-dc0a6ab44666)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88ba7e97-6bd4-4992-b321-42013ba50d0f)

* Option **D**. [**IMPORTANT**]
* Every/All/Each -> Same meaning. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d20f72ed-1189-440f-a73c-c82705bc7ba4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bedd189-cbf5-4532-b1bf-982e2d8382fb)

* Background

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdfe62c7-33cd-4604-8324-71410555a7e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37677e86-44e7-4c69-ac74-4c91c8dad93b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ca61122-d2d7-4ebc-808a-6ecd9f421480)

* Option **C**. [**VERY IMPORTANT**]
* lev -> Upar uth jana -> elevator/levitate/alleviate.
* latter

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4baa983c-b5e1-46a0-9ea2-2c0e0e2ad1da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38c7699a-03d4-43c2-93c1-10ff53e9b0fb)

* Doubt.

------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Verbal Ability

1) Verbal Ability -> Vocabulary
2) Verbal Reasoning -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a356b4df-95bb-4a86-aacb-677adda78572)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcb2a503-0b89-4f44-8947-ba5942a77de5)

## Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb303bfc-13b9-425f-b96f-fef6feab2989)

* Question
* **Mock/Deride/Jeer** -> Ridicule someone

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ed48cb9-37c0-464f-8797-65b3acffa4df)

* Ridiculous -> Adjective
* **ous** -> The word becomes an adjective.
* Absurd
* Praise -> Tarif karna
* Phony
* Euphony ->
* **Eu** -> positive word.
* Cacophony
* Euphoria -> Extreme happiness
* Eulogy -> Praise

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e8f2b7a-5cfe-499d-819d-0600f831872e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d633886d-530e-4193-84fe-a0d0120dce74)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/665111fd-e258-44c3-af73-dd1ea9ca2121)

* Summit ->
* Peak/pinacle/Apex/Summit/Acme
* Peek ->
* Epitomy -> 
* Epitome ->
* Apogee

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e82f241-aa1e-4546-9563-afcf19c677b5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d4a27d9-720e-4109-a08c-d3488f2eef54)

* Opposite words:-
* Nadir ->
* Abyss -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4eb3c9a-7599-4e1b-bfa2-2efd336279f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/175f4b69-6e02-411c-98a0-a38ec2935ac7)

* Question.
* Option **B**.
* **Closest** -> [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50770236-f9bf-4a1c-92b7-633d40e272d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63dcb6a9-a70e-446b-937d-8c952c011f00)

* Question
* Option **B**.
* **Thorough** -> Up to date.
* **Meticulous** -> Precise/Perfect/Diligent/Precision.
* **Tenacious** -> Hardworking.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81a64138-aa57-4be8-92a0-dcb36e23fd41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56676591-761e-4e26-b7e9-e432f60a52fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/487e1292-3bc3-4062-872d-397794b4b193)

* **Beside** -> Next
* **Besides** -> Except/Excluding.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa2dd7c0-66b3-46da-88f1-53e756c83ba2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf63a72a-6020-4c08-aa97-c5a461ccffcc)

* Question.
* Option **D**.
* **Many** -> Used for **countable** things.
* **Much** -> Used for **uncountable** things.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bd73c10-daea-41f7-8b5b-87e9470865b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/092248ab-5941-4ef4-ab81-79611c2b2d37)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7472d573-c794-42da-b5ff-e3e02dbb28bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57dbce92-b2b9-4d77-9ba2-ab3cc28204fc)

* **[IMPORTANT**]
* Both are **correct**. Both are **plural**
* People -> One nationality.
* Peoples -> Different/Multiple nationalities.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96e4c5cd-c2b1-434c-a31f-9523ad9865fe)

* **Sleeping postures**.

* **Prone**
* **Supine**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6bd3978-9d1e-40aa-99eb-d0d3b7c80ba8)

* Question
* Option **D**.
* Prone
* Prune

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6423b51b-a46d-416d-b9b7-d3035d028df5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57e81ac3-90d6-4371-ba16-8f87313a2249)

* Option **D**.

## **180 degree words**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc078e9c-fc5d-44e9-94df-1b972be3d912)

* Though
* Although
* However
* Inspite of
* But
* Despite
* Yet

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a395b99-2bc9-4d2d-a998-0fab5355f188)

* Question
* Option **A**.
* Although
* Hardly
* Bereft -> Void of ideas -> Bereft of ideas.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a33dfb2c-0faa-4f75-aab5-0d7f8a107d0a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/535deaa8-40d0-40cd-a33b-1a5d15f52008)

## Analogies [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc622b3c-c545-420e-86ac-58098bb72d76)

* Analogies

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a8783aa-83ba-457a-bb15-688a20f41b0d)

* Question
* Option **B**.
* Option **C and D** are wrong because **children** asked in the question, so, we need to find **categories**.
* Gyne/Gyna -> Related to **females**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f63f4e6c-69f0-40ad-b215-cf53efd9e400)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbf8f460-6fcc-47ca-858a-17ac110e3773)

* Misogamy -> Hatred to marriage.
* Miso/Mis -> Related to **Hatred**.
* Misogyny -> Hatred to women.
* Misandry -> Hatred to men.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6815e80-81fc-469f-8a69-58802b75538e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f065bd1-e8c4-4ad1-8dcf-a155787611a6)

* Ortho -> Related to **BONE**.
* No. of bones in Adult -> 206.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65d65bcf-e666-4289-8aec-664d65d1c147)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b29c7930-d7d4-4026-8f27-ccf7fcfd1dcd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49b9e1a3-a46e-43da-8947-b5cec0e4da83)

* Question.
* Option **C**.
* 1,2,3,4,5 ... -> Cardinal numbers.
* Ordinals -> Position.
* Exhilarating -> Jaw dropping.
* Superb.
* Medium.
* Mediocre.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d11851f4-0c3e-403e-879c-b9e30a08de48)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41c385ab-d6ec-4f12-88d6-887632bea5e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9204f2ed-8308-4e69-99a2-fd11fec32446)

* Compliment -> 'i' means praise -> Tarif
* Complement -> Perfectly Matches

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/835d3bb4-73a5-4a49-a346-6dd4441456ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e513f5a-89df-4fa4-9e4e-8327b4ed6242)

* Question
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/350bf355-2755-49cf-b7fa-3ad78982d513)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0be47625-703f-4b74-bea7-2c9507a57806)

* Desert -> Ragistan -> Dry place -> Deserted piece of land -> Sahara 
* Dessert -> The dessert was too sweet -> Sweet.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f980b7ef-89e1-4d04-a809-1173f3124ace)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb88c444-ff6a-4fe4-b3e7-ebb65c847ca5)

* Insure -> Insurance
* Ensure -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f00ce06-5e07-4cc4-8e6d-dd5b7e250d8d)

* Question
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5068e03-a753-4f66-a4ba-956bc3a8b1e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e28b211-bae6-4f04-8e3b-648caaf406b3)

* Question
* Option **A**.
* Etiquette

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91bfdcf8-aaf1-4dc5-a90e-47098fcd9413)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/276a43c9-3613-44ad-be45-7bd5cb3f67d6)

* Question
* Option **A**.

* Pandemic
* Pan -> Spreads in the Whole world -> Universal.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acf39f54-429d-485b-b51c-be89ce38315f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3910bf3c-6070-43a4-89c3-49c15c137ba6)

* Question
* Option **A**
* **Turned a deaf ear**
* Twisted -> Fabrication
* Appreciated
* Returned
* Ignored

## Verbal ability part-I (29) [21st June 2023] [3rd March 2024]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/101001b7-a1ce-404f-9f0e-d367bb49ef06)

* Option **C**. [**IMPORTANT**]
* mock -> 
* deride ->
* Ridicule -> 
* praise ->
* jeer -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64ee0f27-6101-433d-9df6-ba9641b76a9b)

* Censor -> Censorship -> Censor board -> A person authorized to examine books, films, or other material and to remove or suppress what is considered morally, politically, or otherwise objectionable.
* Censure -> An expression of strong disapproval or harsh criticism -> To critize.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/130aade2-1792-4d3c-b8c0-1419b6c35caf)

* The -> God
* Theist -> Believes in god. [**IMPORTANT**]
* Atheist -> Does not believe in god.
* Agnostic -> They want to believe in god with conditions applied.
* Blasphemy -> Contemptuous or profane speech or action concerning God or a sacred entity.
* God -> Ultimate being.
* god -> Sachine tendulkar is the god of cricket.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35097c7e-cf7e-49bb-b9e8-3f7b35d500ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f806519-3d00-411c-b682-318b9b736f2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e33720ac-8c97-4306-9fce-f3b97799f360)

* Epiphany -> Self enlightement -> Self reliazation.
* Nirvana -> A state in which the mind, enlightened as to the illusory nature of the self, transcends all suffering and attains peace.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83dd2a1a-9afd-4b37-834b-05dfa15784ab)

* Option **A**. [**VERY IMPORTANT**]
* Inexplicable -> Something which is beyond explaination.
* Incomprehensible -> Difficult or impossible to understand or comprehend; unintelligible.
* Indelible -> Impossible to remove, erase, or wash away; permanent -> Something which/that cannot be erased.
* inextricable -> So intricate or entangled as to make escape impossible -> We cannot separate them.
* Infallible -> Something who cannot make mistake -> Incapable of erring.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4f56e62-5eee-4cf8-8edc-7db3f7954705)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8cdffd0-68c0-463e-90f8-cf3ffdd7f86a)

* Intermnable

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6e68163-bdb4-4152-94a4-33c03ebbe4f7)

* Melange -> Mixture.
* camaraderie -> Goodwill and lighthearted rapport between or among friends; comradeship -> Spirit of friendship. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/398018d1-ffcf-451e-90be-4c7521eb7aff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7de0c5ce-b012-4645-a1a2-dc739040a991)

* Option **A**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8095539-0333-4641-9636-ce1168427560)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56f3dee3-4c33-48f7-87de-3c2baf0e17c9)

* Frugal
* Parsimonious
* Prudent
* extravagant -> Exceeding reasonable bounds: synonym: excessive.
* Spendthrift -> Spending more amount of money.
* Exorbitant ->
* Prodigal ->
* prodigy -> 
* Tenacious ->
* Determined ->
* Resolute
* Spartan
* Meander -> To move aimlessly and idly without fixed direction: synonym: wander.
* serpentine -> Of or resembling a serpent, as in form or movement; sinuous.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b162dc9-a804-48de-bf7b-ce0a4b071fdb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3813851-d6df-436c-9fad-0ab680fba50e)

* Option **D**.
* Wanderer ->
* Drifter -> One that drifts, especially a person who moves aimlessly from place to place or from job to job.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/268dbea2-18e5-41b0-bd2c-9618da6156a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b79e0e90-af08-4a25-874a-103d4bad1dd2)

* Underlined word -> Thorough
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec703b62-be1c-4902-9dff-5c9c1895ddaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29075b0d-0165-4991-abbf-a16aaaf37fd7)

* Naive -> Inexperience.
* Novice
* Virtuoso
* Naif
* Devaluation -> 
* Deprication -> Depends on the image of the country.
* Appreciated -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e4c8f12-1174-4434-abad-e4fd7c187a5e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e058a2e1-ee85-4457-b121-910a8dc412b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7cd8622-2aff-4460-a117-4ad7dacbc022)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0463d5d8-50d3-40c3-833f-7ab889819393)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d77ce48-1d31-4516-936a-a669f476affb)

* Option **D**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c93f7a9f-bf82-49ba-9088-617d17c6d080)

* Stairs -> a contiguous set of steps connecting two floors
* Stares -> To look directly, fixedly, or vacantly, often with a wide-eyed gaze. synonym: gaze.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2354e7b8-c982-41d9-aa08-d678826da2b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb1f407e-c795-4154-8477-628d7312d58f)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa29d807-cf2f-4f77-a076-2229bcedcad0)

* 180 degree words. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61da15e8-5bc5-4d2d-b39b-2372568882c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a80aafc7-b8c9-4af9-a096-eb4a1e9337d6)

* Option **B**.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddcbd74d-9ef9-444b-8d18-323fedcaff65)

* Complement -> Complementing each other -> Something that completes, makes up a whole, or brings to perfection.
* Compliment -> I love compliment -> An expression of praise, admiration, or congratulation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/feb00ada-ab06-47b7-b7d5-044085714139)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d484aef5-5eba-492a-ac07-0d16cfc2ed8f)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81758d4c-371d-4d9f-94f6-459a3888d150)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/776af833-bac1-4da2-abff-eb07c5fb4d1b)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81c5ca65-83ba-487d-9b9f-d782cae2ad57)

* If you never ate then you feel **enervate**. [**IMPORTANT**]
* Enervate -> To weaken or destroy the strength or vitality of.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acb83f7b-cca6-436b-874d-a0d5cccf1700)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/621d0ea5-d5cc-41ec-aded-4dd50b8986b2)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b7f2367-9c6f-4300-b9d2-c2424f9b1f8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c5603ba-9bb9-4b61-8023-38f490dce795)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4addde3a-13c1-4fd0-b4da-dbd996edcc57)

* Miso -> Hatred
* Gamy -> Marriage
* Misogamy -> Who hate to get married.
* Misogyny -> Those who hate women.
* gyny -> Women
* Misandry -> Those who hate men.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a976c5d-bec1-4916-8651-e40f48e12a4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c3e3384-3441-494f-9f60-62869d8bcfba)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/862e32fb-1866-4dc1-aa3c-15c527107ba9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c488441-2020-40fe-9a9c-d15610e82ac8)

* Option **D**.
* Weary -> Wear and tear.
* Wary -> Cautious

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a798b61-43a5-4c6d-b146-bd53d2e82e1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53e91702-ce80-47bf-b226-98176a10fff2)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31ec31a5-619e-4823-be12-c039d7fc32cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dbfbe67-7007-4076-a220-92d512d6e78e)

* Option **C**. [**IMPORTANT**]
* Personnel ->
* Personal ->



















