## doubt-clearing-session (28) [2nd Aug 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87d6db56-d265-450c-ac7b-939cdb306024)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62aaf118-364f-406b-a431-ca6a39edbeb6)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c50f282-55ce-4e08-9a47-57f566bddeb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/342c8696-7e91-4a11-aed9-a48145fcb8bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a907505-420d-4d76-811e-85ec3ba3ac50)

* Not view serializable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40608341-752f-419b-a244-55131284379e)

## Timestamp

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78e4bb53-e50a-40c1-9068-250d3e8591b8)

* Timestamp -> Arrival Time -> DOB.
* The time when a **transaction** arrives for running/execution.
* TS(T1) -> Timestamp of T1 transaction.
* TS(T2) -> Timestamp of T2 transaction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e585075-35ae-460a-b85f-fd16e4c690e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eb374ec-b9b0-417c-a595-426262ab68c0)

* Who came earlier?

> Whoever's **arrival time** is **smaller** that came **earlier**. So, here **T1** came **earlier** than **T2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/218fe49b-d342-46c1-be8c-c17e1cd33fc8)

* Came Earlier -> Old
* Came Late/Later -> Young.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b7b0222-635e-42e6-a9e8-217e73e2d1cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e34024b-6878-4e42-9cd5-5b8241b83fa4)

* So, **T1** is **older** and **T2** is **younger**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/151d7ece-b33f-4243-b4c3-97e49b90ea7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3455caad-9676-449c-89ba-0bf2f71684f2)

* Deadlock Prevention

### Wait and Die

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0046f29e-743d-4446-b22a-858478849e03)

* They are not **shared locks**.
* **Tj** has taken the **X** item. It is already **acquired**.
* **Ti**, **tries to acquire** the **X** item.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e7171b3-75c0-4118-9b75-56cf13da3f94)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45cc287e-0a01-467d-9c84-8d365ca54e12)

* Now, we have to check their **timestamps**, who is **younger and older** among **T1 and Tj**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43d337db-b5e0-4838-8ffb-754028afe2dc)

* It means that if a **lock** is already acquired by a **younger transaction** then we are giving permission to the **older transaction** to **wait** but if a **lock** is already acquired by an **older transaction** then we are not making the **younger transaction wait**, we are **aborting** the **younger transaction**.

* The **advantage** is that a **younger transaction** will **never wait** for an **older transaction** and there will be **no circles**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ebc3c95-d92a-4f32-b49e-6df4d7baa956)

* Because of **circular wait**, **deadlock** will happen.
* We are **preventing circular wait** here(Wait_Die).
* **Wait_Die** -> Older transaction **waits** and the younder transaction **dies**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e230485b-e6c8-47ef-b39d-f2d9b9f8c6e2)

* The **timstamps** of **two transactions** will **never ever** be the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b15c320f-5731-4f79-bdb5-4bb78748cf3f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcaf23db-4909-480a-a34f-09161ac3f724)

* **Ti** which is an **older transaction** as the **timestamp(TS) of Ti** is **smaller** than **Tj**, hence **Ti** can **wait**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc2744f8-ae27-400b-b80c-519f159e9533)

* **Ti** which is a **younger transaction** as the **timestamp(TS) of Ti** is **greater/bigger** than **Tj**, hence **Ti** is **aborted** and restarted with the **same timestamp(TS)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a30058bd-2c63-4897-a7c2-ab6f67314cbf)

### Wait and Wound

* It is just the opposite of **Wait and Die**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f595bdb-d647-400b-afd2-9474728aaa86)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86e83234-5878-4607-9cc9-d190430fe527)

* Yes.
* Younger -> Wait
* Older -> Wound.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e47220af-d32c-4b8a-9232-2fb5dcf428f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78bcfa6a-e38c-4fe8-8b20-2166bf0807b6)

* Ti -> Older
* Tj -> Younger
* Tj has the **lock** and **older** wants to acquire the **lock**.
* We will **abort Tj** as it is a **younger transaction** which has the **lock** and **Ti** which is the **older transaction** will **acquire the 'lock'**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3caa5e9e-2f6d-4b3a-8d9a-2f0186a154bd)

* Ti -> Younger
* Tj -> Older
* Tj has the **lock** and the **younger transaction** wants to acquire the **lock**.
* So, **Ti** being the **younger transaction** has to **wait** for the **older transaction** which is **Tj**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/829ee23a-836c-42cf-9f10-af323dc80721)

* In **wait and die**, a **younger transaction** has taken a **lock** and a **older transaction** is **waiting** for the **younger transaction** to release the lock. So, at a given time the **younger transaction** has released the **lock** but the **lock** was not immediately given to the **older transaction** someother **younger transaction** got the **lock**. The **older transaction** will again **wait**. The **younger transaction** relased the **lock** and another **younger transaction** got the **lock** instead of the **older transaction**.

* The **older transaction** will keep on **waiting**.
* There maybe **starvation** for **older transactions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a73b91b3-8839-4788-8550-6724aaecca3b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41df842f-f428-418c-91af-fd8ca558c2d5)

* There maybe **starvation** for **older transactions** in **Wait_Die**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e83a5162-33d7-4aa7-a28f-e70727f76835)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6349c71f-5a00-4ae8-9286-c4478c044246)

* There is **no starvation** for **older transactions** but **younger transactions** may **starve** if **older transactions** keep taking **locks** for **indefinite time** in **wait-wound**.

* After a **definite** amount of time, the **older transactions** will release their **locks** and the **younger transaction** will definitely be able to take the **locks**.
* The  **older transactions** will eventually **terminate**. So, there is **no sense** of **starvation**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bf43272-ac03-4540-a4c1-c9d5647dc0fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cef48147-33a9-4c6d-b3ec-e7023c26d5f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8bcb99c-7807-4649-b398-833eaaffefba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91a3749d-de82-4592-935e-358767660ce4)

* Question.
* T1 is older than T2

* T2 -> Acquired the lock.
* T1 -> Requests for lock.
* W -> T1 Aborted(Die)
* X -> T1 Waits
* Y -> T1 Waits
* Z -> T2 Aborted(Wound)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67538294-b371-4a03-b909-d91c30de6626)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb6a9c31-b619-426d-906c-6afc8bcc70f2)

* Question.
* T1 -> Younger
* T2 -> Older
* Option **A**, **Wait and Wound**, example.
* **Transaction** ends in **definite time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e573f51e-d547-466b-8d14-c44a79e80408)

* Transaction if not killed will eventually terminate and timely termiante. So there is **no chance** of **starvation**.
* After a **definite** time, the **younger transaction** will get the **lock**, guranteed.
* So, it is **deadlock free and starvation free**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dd61f4a-b823-4bfc-8a4b-f3b3fb5185c1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e674b1f-f365-4e0b-a720-18bb3613903e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e83a5162-33d7-4aa7-a28f-e70727f76835)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6349c71f-5a00-4ae8-9286-c4478c044246)

* There is **no starvation** for **older transactions** but **younger transactions** may **starve** if **older transactions** keep taking **locks** for **indefinite time** in **wait-wound**.

* After a **definite** amount of time, the **older transactions** will release their **locks** and the **younger transaction** will definitely be able to take the **locks**.
* The  **older transactions** will eventually **terminate**. So, there is **no sense** of **starvation**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ed49a9d-c9ed-4d38-902d-b84cae033248)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b32095c-77ac-4b71-b75b-c089bac8e89f)

* Timestamp based algorithms for **concurrency control**.
* Initially **read and write** timestamps are **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1f1651e-b154-4872-bff3-ef8b06c36fb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2ce4072-1495-4dc1-b455-0867ca6fd8e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de7219da-996c-4029-a769-bd0da4f143bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85ede271-b80e-479b-ae9e-cfa21054bc5e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88fac306-46c8-4cdb-a865-759155f236bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40ba0956-dacb-47af-b32f-fb7c233e1409)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d147218e-e1ea-46c7-b2da-422bd2136194)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0efab24c-673b-4dfa-88e3-ef6f144aea8d)

* Yes.
* R_TS(X) -> Youngest transaction who read X.
* W_TS(X) -> Youngest transaction who write X.
* TS(T1) = 1 
* TS(T2) = 2
* So, **T1** is **older** and **T2** is **younger**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f58195ef-0da7-4821-93a7-e0c25a1c7a97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5515cd2-a76f-4c9f-9c16-7dcd355950a1)

* Basic Timestamp algorithm.
* In whichever sequence the transactions arrive in that sequence/order only they(all transaction) should follow to run. If there is a confict in the sequence then the **Basic Timestamp algorithm** will reject that sequence. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f1a26da-23fa-470f-83c4-6ee272e6d387)

* There is **no conflict** in **read-read** operations but in **read-write, write-read and write-write** there is **conflict**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60989431-75d1-4f6d-8445-e9afd526cc5a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a806eae4-68bf-4c26-840f-592738805a6e)

* TS(T1) = 1
* TS(T2) = 2.
* **T1** is **older** and **T2** is **younger**.
* First **old** then **young** which is **T1** then **T2**.
* T1 -> T2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ccabeea-703c-4d94-ab5f-bd89bcce8f02)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7901d441-ad5e-45e3-b23d-0bb43cbaae57)

* There is **conflict** between **read-write** and **write-write**. So, we will not allow.
* We will not allow **conflicting statements** in the **opposite sequence(T2 -> T1)**.
* This not allowed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c6ddb8f-5140-4898-9337-b49f306685bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90ae6ba9-6d4a-40da-9093-8faeeb061baf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93dffc33-872c-4d1e-88bd-9bd562820945)

* After the **young transaction's** read or write, we will not allow the **old transaction's write** operation.
* For **every statement**, the **algorithm runs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bd93d00-c127-4ca3-9f34-823730f37dbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f0bb49c-57f9-4fbb-91bd-5600727df7d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4df3779d-21d6-42a4-b4dd-8fd1d9d61678)

* If a **younger transaction** has done **read or write** operation then the current transaction's **write** operation is **rejected and aborted** and the current transaction is **rollbacked**.
* So the **write** operation of **T1** transaction is **aborted** and the whole **T1** transaction is **aborted** and **rollbacked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f477f13e-a33c-41c8-9b4d-cb6aeca22c29)

* If the **T1** transaction is **aborted** and **rollbacked** then the **T1** transaction will **restart** with a **younger/young timestamp**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cffc3459-f107-4888-8fc5-4e82dfb1480a)

* If either of the **two condition** are true then we will **execute** the **write operation** of **T2** transaction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f0892cc-d8f3-4541-907a-a1b16e64ad05)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccf98fd6-727b-411b-92b9-2b3ac574aa26)

* The **youngest transaction** that has **written on X**, it is **T2** transaction. So, we have to update the value of **W_TS(X)** which will be **W_TS(X) = 2** now. Who has **written** that transaction's timestamp(T2 = 2) will come to **W_TS(X)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3dc98387-cda8-48db-ad6f-64a9aef10b23)

* As the **write** operation is allowed so the **young transaction** has got the permission to **write**. So, we have to set the current transaction's timestap who has performed **write** operation in **W_TS(X)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8126803e-a584-45d0-9112-41154285a061)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c67add70-0f5e-4347-8d3f-2216820aeb11)

* We are simply **checking** that if someone has to perform **write** operation then is it **allowed or not**. Before the **write** operation, someone else has done **read or write** operation then the **write** operation is **not allowed**.

* If before the **write** operation an **older transaction or the same transaction** has done the **read or write** operation then the **write** operation is **allowed**
* If before the **write** operation an **younger transaction** has done the **read or write** operation then the **write** operation is **not allowed**
* **Younger transaction** should not do the **read or write** operations before the **write** operation.
* If a **Younger transaction** does then we **abort** the **write** operation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f63eb0ab-e870-4f8f-8b7d-446625b04cf3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5511f231-a081-43da-b5c0-7959db8d74e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48ba19f2-1cbe-4ddc-81e5-d11f09c391df)

* **R(X)** operation of **T1** transaction is **rejected** and the **T1** transaction is **rollbacked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31e6ddef-63ac-4e45-b745-7c2f3b550d3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85fbd9af-d819-4fd6-bf2b-93d6a858cd17)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/860ec550-2e0f-425b-8c99-67a4629d312a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0954d77c-b2f2-4f6c-917f-d2c3e56be22b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d8e7a7b-4710-4cac-b40f-98ab7e64f16c)

* R_TS(X) = max(R_TS(X), TS(T)).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c81f374a-2426-4a78-a025-de8b8df28525)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc3d0128-9ca2-4042-86a6-96609bf18377)

* Ultimately we have to **check** after the **younger transaction's operation** we have to stop the **older transaction's operation** otherwise we will get **conflict**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e33684a8-d388-4dec-9ac4-0093c245960f)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cf7d17b-a013-4f0c-b99c-c19a002fa2b7)

* **No conflict** in **read-read** operation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62222f63-737b-4213-b70c-7a50eed0effd)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/384e8207-ba1e-4498-86c2-d0439e8fdb17)

* Maximum wala point:-
* **R_TS(X)**, we will not update **read's timestamp** with the **current transaction's timestamp** always.
* On **W_TS(X)**, we will always update **write's timestamp** with the **current ttransaction's timestamp** because we will never allow the **young transaction** to perform **write operation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/414513bb-ccb1-4336-9010-b38af0934145)

* Read operation timestamp.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/353b1240-a220-44a0-8784-d2ae39412eb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/833c41c6-208a-4773-b4c7-f2b822ef328c)

* All statements are allowed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c3728aa-67bb-4e8d-9f4e-122a774a8c27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d945af13-3ba2-4bf6-979a-fc21cdf69b50)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35c0659f-71b6-49e4-972a-d490975b4e7f)

* **Read-Read** meh **no conflict**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d84e5c91-8f7e-446d-a024-3def3ec08c64)

* For the **W(X)** in **T1**, we will check the timestamps of both **read and write** operations.
* Any **young transaction** has done **read or write** operation before the **W(X)** in **T1**?

> **Yes** [Read timestamp].

* So we will reject **W(X)** operation and whatever **T1** operation has done **rollback** those operations as well.
* **T1** operation is **aborted and rolledback**.
* So, **T2 and T3** transactions are **completed** . **T1** is **aborted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8126c0d8-bb60-4b66-8aed-bb6ff0029a28)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cf56bb5-61d9-4948-9095-33a152e969c4)

* Question.
* **T2, T3 and T1** transactions are **aborted**.
* **T4** transaction is only **completed**.

* For **R(X)** in **T1**, **younger transaction** has **written** before it, so **abort**, **T1** transaction.
* **T2** transaction is **aborted** because a **younger transaction(T4)** has **read**  before **W(X)** in **T2**.
* **T3** transaction is **aborted** because a **younger transaction(T4)** has **read**  before **W(X)** in **T3**.
* **T4** transaction is **not aborted** because a **not younger transaction** has **read**  before **W(X)** in **T4**. Only **T4's**, **R(X)** has **read** which is within **T4** transaction only and **not a younger transaction**. So, **T4** transaction is **completed**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36dbdc1c-f1cc-4087-bf3a-2ce1e33217a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ae26a20-b868-4e18-8dc8-7dd5951e2c63)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01725695-4496-4562-a725-fb2064049897)

* Question.
* **T2 and T3** are **completed**
* **T1** is **aborted**.

* **T1** transaction is **aborted** because a **younger transaction(T2)** has **written** before **W(X)** in **T1**.
* Rollback -> T1 transaction never came.
* That's why we set **R_TS(X) = 0**.
* We will **reverse/undo** all of the **changes** made by **T1 transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/608e280f-2afb-4b1f-b44c-8751dd3ab2e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ff6865c-7606-47ac-a293-2f08ae585c07)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2bab48b-9b1a-43b9-ac34-d2c957e96100)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9398593e-c0da-47c5-9b40-d34dd770006d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a6d7a82-d2f1-41d1-b5a6-852ebf5c04db)

* We are getting the **final result** as **expected**.
* The middle **W(X)** in **T2 and T3** are getting overwritten by the **W(X)** in **T3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1907df38-291d-4cf1-acd4-8c5684195afb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8eb0b9eb-62f9-4574-8232-2090f8d39196)

* For a **serial sequence** of **T1 -> T2**, the **final value** of **X** must be the value writthn by **T2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b7d73f4-830a-4e58-abea-786a30714e6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a1965d5-8cba-434d-9c80-309d5da9e17a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d96d9c7-e7f5-438f-b5d2-9d7bc99c460f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab2e3226-f701-4d0c-a7ad-d7249d57e97e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcd4b423-eff1-4661-b7e9-bcdc1a8717ac)

* The **benefit** is that we don't have to **revert** the **T1** transaction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4235ff1-b5d2-4dd5-aa84-479c62d97538)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/399b2b61-b66d-4185-bc47-32c9dc7dc064)

* Allow the operation according to **Thomas Write Rule**.
* Skip -> Don't perform the **operation** and don't make any timestamp changes as well because of the **operation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7402cd18-a849-4726-b3ac-7c7b5c1a4075)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86735722-099e-4c25-8244-b1a36c5103e0)

* We got the **final value** as **expected**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02af2dda-ceab-4d5f-a136-e7e3f5bee05d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ee48a42-0b35-442a-b9aa-14f36d59b8a6)

* No, it is for **write-write** operations comparision only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88d29c89-e519-440b-9a17-2cc41bb6db59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/451e676e-27f1-4134-8f7b-cc22c472f282)

## file-organization-and-indexing-part-i (29) [3rd Aug 2023]

* **Basic Timestamp algorithm** is also called as **Timestamp ordering** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86ded410-fd7f-41a5-bfda-2e34e79dddbb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/551806c4-1521-4251-9e6c-7b9ae380c219)

* It is because **W(X)** in **T2** has **written** earlier/before than the **W(X)** in **T1** and **T2** is a **younger transaction** compared to **T1**. That's why **T1** transaction is **aborted and rolledback**.
* **W(X)** in **T2** has **written** earlier/before the **W(X)** in **T1**.

## Thomas Write Rule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2dae4b1-e8d4-4ae5-9147-2629b8b9721b)

* Thomas Write Rule -> If a **young transaction** has written earlier and an old transaction has come to **write** then **basic timestamp algorithm** will **reject** it. **Old transaction** is not allowed to **write** after an **young transaction** has written earlier. **Thomas Write Rule** says that if there is a **write** in the **older transaction** then **allow** than **write** operation.

* If we write it in-order then first we will **read** then there is a **write** in **T1** and we will do another **write** which is in **T2**. The **final value** of **X** will be the **value** that was **written** by **W(X)** in **T2**. 

* **Skip/do not perform** the **write operation** in **T1** and tell that it is **done**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f34c0da-cf86-434f-aaa3-c1faedcdad43)

* Advantage -> We don't have to **rollback** the **T1** operation now. We also got what the **expected result** was.
* If a **younger transaction** had done **read** operation before the **write** operation in **T1**, then we had to **abort** **T1** operation, **thomas write rule** can't do anything.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50e0f091-87a7-47d2-8917-6bae118d5ee2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d3acb8d-ba46-4172-a6c9-106b93055c17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5804fb87-bc0e-47aa-a930-8180ca4e82cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d198e31d-9981-439c-8eaa-1843126636e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdd260aa-f926-4454-8d46-8261f335da98)

* According to **thomas write rule**.
* **T1** transaction is **aborted** because before the **W(X)** in **T1**, **younger transactions(T2, T3, T4)** have done **read/write** operations and the **older transaction** which is **T1** wants to do **write** operation which is **not allowed**.
* The **W(X)** in **T3** is **skipped** because first we checked if a **younger transaction** has done **read** opration than **T3** but there is **none**. So now we checked if a **younger transaction** has done **write** operation than **T3** and we found that **W(X)** in **T4** and **T4** is a **younger transaction** compard to **T3**. Because of **thomas write rule** the **W(X)** in **T3** is **skipped**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/396d7bca-a3b6-449a-b340-a8438ce369d1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1eba670-60f9-4c9b-8c4b-2e0e2fc367ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d91b8bbd-57e6-4b69-8ff5-b2777b55c14f)

* Yes.
* Anyways we are getting whatever the **written value**, the **T4** transaction has done at the **end**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d0e9454-4990-4e5f-9dc6-9a8cd9490ecb)

* The **basic timestamp algorithm** will run the process/transactions in such a way that the transactions which is **arriving first is run** then the next then the next and so no.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/998cb00d-ff55-42d3-8b30-7cfecdbe3109)

* Timestamp of T1 -> 1
* Timestamp of T2 -> 2
* Timestamp of T3 -> 3
* Timestamp of T4 -> 4
* First **T1** had arrived then **T2** then **T3** then **T4**.
* T1 -> T2 -> T3 -> T4
* In the **above order** only we have to run the **transactions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7555ef3b-a3e5-4727-a172-6aa452e6e965)

* Question.
* The **2nd W(X)** in **T2** is **skipped** because of the **W(X)** in **T3** which is a **younger transaction** and had **written** earlier then **T2**.
* The **2nd W(X)** in **T3** is **skipped** because of the **W(X)** in **T4** which is a **younger transaction** and had **written** earlier then **T3**.
* The schedule is **allowed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c803347f-e62e-463c-b331-f1928bd573c3)

* As there is **no waiting**, so there is **no deadlock** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fde7235-2589-4885-88e8-6ef79c96bdd7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34bcdefc-a045-4e36-aa58-99face7bb26a)

* Timestamp ordering algo:-

1) Serializability.
2) No deadlock.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/011c5edb-3ba8-4b0f-b575-3775ea485a9f)

* Starvation may happen but it depends, if a **restarted transaction gets a younger timestamp** then **Starvation** will not happn.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d5db3f0-4752-4d1e-8c01-c8debaf9dacf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24798275-5254-4a19-9dfe-9cf59ecf5185)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11a9ebb3-d760-4993-a7b5-4408858dd8da)

* Eliminates the possibility of **starvation**.
* Arrival time changes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/653f35ce-65bd-4189-b2fb-bb9a6d03d11f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4fb37c0-9f79-4eec-bd4b-e377b7f46bf4)

* Timestamp.
* All the **Timestamp schedules** are under **conflict serializability**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56d4ec38-e428-40b4-8c3a-13bb9efba733)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa1a2708-e82e-402f-ac19-c41dff8c4e58)

* Not conflict serializable.
* TS -> Timestamp.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcf3bd1a-3bf4-4381-beef-a15861269792)

* Full/complete/whole schedule allowed as it is.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68bfefbe-e357-4507-94c1-7ddf9f04ef8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b707f09-70ec-436e-a445-bea800309798)

* Yes. Good point.

## Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac8d5366-e38e-44e1-9f1e-440123e83845)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/149bd80c-83df-4011-908d-a1230973c0e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd02e18f-f7ac-4b63-9b1b-bae6d7007897)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7be45831-4121-41e2-aad1-b09716fc1dd4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b779171-f1a9-42b1-93f1-f6bc2bc96719)

## Memory Structure

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70c6ba54-c030-44d4-9f71-db7f9015a30e)

* RAM -> Main Memory -> Nano seconds(ns)
* Disk or SSD -> Secondary Memory -> Mili seconds(ms).
* **DB tool** run on **CPU**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d66d5290-f0d4-4023-8d7f-d4532c2411fd)

* Select * from table -> Many many records(rows) will come. Reading many many records(rows) from **secondary memory** and bringing them to **RAM** will take a lot of time.

* **Access time** of **secondary memory** is **more(greater)** than **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22731f8c-64e7-4d10-8c19-dd7ca123fe99)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6437b0ef-fb13-4d6f-aa08-e7ae23ab6742)

* Optimization.
* Query optimizer -> Runs query in such a way that **minimum time** taken to fetch records from disk.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2baef8d0-d14a-4726-ab45-f842fa8f9522)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b78034db-beef-4bbf-8cd2-be0ec726e9bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4f6e0d5-f31d-4ca2-ae1e-c78dcc5015c7)

* select ename from employees where dataofjoining > 2001 and salary > 50000.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7441fa05-6b6b-4faf-abdf-06de6e8954ca)

* First we **filtered out** the **table rows** with the **dataofjoining > 2001** condition. We will get **5000** rows. On those rows we used the **salary > 50000** condition and we did comparision on the **5000 and 100** and then we got **82** rows which match both the conditions.

* First we **filtered out** the **table rows** with the **salary > 50000** condition then we would have gotten only **100** rows. On these **100** rows, we would have run the **dataofjoining > 2001** condition and then we got **82** rows which match both the conditions.

* In the **second query run**, the **no. of rows** fetched in the **first time** is **significantly lower** than the **first query run**, which is from **5000 to 100 rows**. So we have to do some much **less comparisions** here. **Disk access** would have been **less** and **time for comparision** would have been **less** as well. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3298a211-2319-419c-9316-bf0fb35cde8b)

* Yes.
* When we **optimize the query** in such a way that it **runs** and it take **min. no. of comparisions** and **time to run entire query** will be **less**.
* That's why **SQL** is called as **non-procedural query language**. 
* We are just writing the **query** and we are not telling the **DB tool** how to **run the query**. 
* How the query has to be run -> It is the work of the **optimizer**.

## Disk Blocks and Record Storages

* **Block size** is from **512 bytes to 4 kilobytes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/431e3870-eaf0-45bd-9187-fed3d23a6505)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/347dcd1d-1e67-4f72-8bad-28a77bb41ae2)

* Whole table will come within a **single block**.
* Entire table stored in **one block** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd9cc36e-e10c-497c-a243-613efa29ae2e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7035677b-3bdf-4eb9-b1b8-69b2e1f959b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a984726-04f7-484b-9543-99d8cf619c03)

* 16 different blocks needed to stored the **single table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/967a8ac1-9ffc-41a5-87c4-7d2cc316725b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d77dfeb6-38f2-4ab0-a28e-a5b53f58812e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b186283-a4e9-44a5-8d83-d7c01e671d21)

* Nobody knows where the **employee** with **EID = 76** is **stored** in the table.
* We have to **check all of them** to find the **employee** with **EID = 76**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2449b04-26a0-4acb-9518-ceee29846f9c)

* With the **help of somebody** we can already know **where, which** record is **stored** then we can **directly** reach to that **record**. If not, then we have to do **linear search**.

* In the **regular cases**, search each record linearly to get the required record.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/337822b5-fa82-42ee-933b-be38dda3d729)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/542f010e-438d-42f3-88d6-fe8e144cfa19)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e287b00-d561-4a3c-8125-7059676b5a5c)

* Sorted with **employee ID(Eid)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/519c3755-d875-4b0e-8034-5ac0370ff012)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c344525e-f0bf-4e6a-b7c4-88bc299d40ec)

* In general, all blocks are accessed linearly.
* But if records are stored in sorted order of eid, then only till that block where eid becomes 90.

* This Chapter -> Physical level of database design.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e81dc26-5f5f-4769-8ecc-50573e0bd387)

* Condition -> Salary > 50000
* We **sorted** the **table** in the **basis of EID**.
* According to **salary**, will we get **sorted content**?

> **No**.

* Now again, we have to do **one by one** checking of **all the blocks** and their content.
* It is also a **big decision** that when we **store the data** in the **database**, storing the data in the **disk** in the **physical design**, it is **very important** to check on **who's basis** we should **order the table** so that **max. no. of queries** run in the **minimum time**.

* Who is **needed more** keep that in **ordered manner**.
* Who is **not needed** much keep that **randomly**. If we have to check, we will do it **linearly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f55492f-b6df-49d5-b2c0-4af3cbd7a9a3)

* **Physical storage** of DB table:-

1) Basis on which column the records must be ordered in disk so that maximum number of times. Queries can provide quick results. 
2) Can we reach to a specific record directly. It is done through **indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81457cb9-2122-4310-997e-2483eb248b7b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cbddd31-393b-4aba-a8e9-95e52078acfb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cf15965-aa48-4887-9ec6-968ab7380292)

## file-organization-and-indexing-part-ii(30) [4th Aug 2023]

## Spanned VS Unspanned File organization

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dfef642-3721-4146-950b-22c392f1d4ef)

* After putting/storing all of the **6 records**. We have filled **6 * 5 -> 30 bytes**. We are left with **32 - 30 -> 2 bytes**.
* How we will store the **7th record**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c9fa799-56ec-462e-abbd-f116af6adffe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ae14dfb-cd7e-48c4-9121-c6eebc52107e)

> We can start storing the **7th record** in the **remaining 2 bytes of  block '0'** and the **rest 3 bytes** in the **next block** which is **block 1**.

* If we keep a **record** in **two different blocks** like above because exactly fixed no. of records were not coming to **block '0'**. Some space was **left over**. We didn't want to **waste that left over** space. So we started storing the **7th record's 2 bytes** in **block 0** and the remaining **3 bytes** in **block 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd2a03c5-0bd4-425b-97f2-18acecdbe533)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41dc062e-5414-484f-92de-fb2e4eee2087)

* This is called as **Spanned file organization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cdf549c-370c-4b19-addd-99ec18ec1520)

* **Yes**, if we have to **access 1 record** then we need **two blocks**. As the **7th record** is stored in **two different blocks**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d82fc4c-46b0-4805-96b6-5b9c5b9ca90e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4f9a850-6058-4d23-b801-4e8bd911b7a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f69ff7a6-2e33-4737-b1eb-5d70efd722cb)

* Assuming table has **100** records. No. of blocks to store db table.
* Disk block size -> 32 bytes
* Record size -> 5 bytes
* Total size -> 100 records * 5 bytes -> 500 bytes
* No. of blocks -> Ceil(500/32) -> Ceil(15.6) -> 16 blocks.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71e93961-719b-441b-8bb7-cb0ea6151995)

* Spanned.
* In **OS language** it is called as **internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62cbc21d-739b-4f40-ab41-d8047447c5dc)

### Unspanned

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebd76425-72de-4f52-b76e-cc3957eee054)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5525ad0-3779-4c34-a3a9-a258443fb4ab)

* A record is stored completely in only one block always.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00f28d58-a677-4ca0-b942-291b1c2caef6)

* Ofcourse.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38d8d1ea-8604-4142-a281-6c62067adde0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2980e472-cd03-4f20-9768-d990dd8e1fa5)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/694317e6-d5cb-42eb-b825-74892ef99d2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf9dbf83-f054-4f3e-aeaa-5bc415a3067e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87315b37-7438-4236-9455-a84c83fa6a18)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9977f11-2542-4326-a72a-99a4ecb750a5)

* In **unspanned** we cannot keep **half record** some where else. The extra space which is **left**, that will not be  **used**. That's why we took **floor** value when finding the **no. of records per block**. We can keep **34** full/complete records.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ade601dc-036f-4d53-9916-3d9f06a492a2)

* No. of blocks.
* 14 complete blocks and **0.7 or 70%** of the **15th block**.
* So that's why we took **ceil** value when finding the **no. of blocks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bac6408f-7e01-4b45-abf8-a419ab44bfa0)

## Indexing

* Used to access records in **less time**.
* For **indexing**, we need **separate pages** for them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73637d33-dddd-43fe-9c3c-90fb5ecb33c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f15f330f-4cb8-46c6-8ee0-cb7106640070)

* Yes.
* To store the **indexes** we need **blocks** and these **blocks** are called as **index blocks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cc54688-294b-4462-869e-bc1a854ead96)

* Where we have kept the DB records/table rows, they are called as **data blocks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51f532a7-3383-40f0-a4c1-2c7d9ed482e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02bc110f-6d55-4e91-a89f-ff63c48a84c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ae32959-582d-4a8a-b19a-a3b593dd9c88)

* When the **DB table** is stored then in technical term, it is called as **Database file**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10409dad-92bf-4d60-8601-b56440e99a6a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03b2b281-d92a-4e72-bec2-87fb222d8c5a)

* When the **index** is stored then in technical term, it is called as **index file**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fa23878-e566-45af-af3a-b7f7759ca065)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/088cea85-e858-4fd5-8dd6-b13c4c02a35e)

* Indexing techniques.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c572c447-2e8f-4f96-b2e0-d4db3e3face2)

* Indexing techniques [Related to sequences].

1) Clustered Indexing
2) Non-Clustered Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9d73024-6a11-4b16-ae65-61f2e46c6703)

* In the sequence we have arranged the pages in the book, chapter 1 then chapter 2 then chapter 3 and so no. In that **same sequence** only we have done the **indexing**.
* In the sequence, we have arranged the **files**, in that **same sequence** we have arranged the **index**. This is called as **Clustered Indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7df4631-3adf-4913-9094-66fb74d01936)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80dcd517-764c-468b-a496-6789a265268b)

* Clustered Indexing -> Data order and index order are **same**.
* In what order we have arranged the data in the blocks?

> In the order of **Rno**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44507244-92ae-423e-b75c-0948823909a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b97c98e-34c9-4f8b-b718-50e7f99b3c4a)

* We will follow the **same sequence** in **indexing** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a19630b5-dbde-4184-a017-e2cff04bd386)

* Clustered indexing -> Storing the records in **DB file** and storing the **indexing** in **index file** and the **sequence of storing** in both **DB file and index file** is the **same** then it is an example of **Clustered indexing**.

* **Data and index** order are the **same**. Like in **books**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03bf300d-b0cf-4605-a39d-72c4b3fdd745)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fda38b7-7f18-4079-bfb0-a1c94a994c5d)

* Non-clustered Indexing -> Data order and index order are not the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/937df70b-861e-473c-8e36-d459e8669131)

* In the **sequence**, the **indexing** has been done in that **same sequence** the **data** in the **DB file** is **not stored/kept** and **vice-versa**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0351dd3c-36aa-40fa-aa40-b0a627b57614)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e24301bd-e5c5-4aa5-a7e2-2a22d8683470)

* There is a **difference** between the **sequence** of the **data stored** and the **sequence** of the **indexing**. That is called as **Non-clustered Indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e414778-3f90-4769-9bc2-731cb2edd2d5)

* Dense VS Sparse index.
* Dense -> Index record is for each database record
* Sparse -> Index record is for a few database records only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a52bbef3-d0fc-44a0-b4ac-20ab1bcfcdfe)

* Indexing techniques.

## Primary Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a63fcfc9-6fc7-4ffd-9bab-16ffbf4a8728)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68aca126-4fb5-49bb-842a-b43671b8cb08)

* We can do **indexing** on any of the c**columns**.
* If **primary key** is one column then **indexing** is done on **one column** values.
* If **primary key** is combination of two columns then **indexing** is done on **two column values**.
* **Indexing** has to be done on **primary key**.
* **Index and data** order must be the **same**.
* It is always **sparse index**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1693c7cc-6272-4e69-a48a-f4aaea71d262)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bbf4d18-c3d2-46b1-9187-498a7ca5f85e)

* Sparse Index.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce2a1715-801b-451a-be71-db71be4d62e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ff9c57d-7dfe-4346-8f64-addf529d7e68)

* Primary Indexing
* Indexing done on primary key or any super key.
* Data must be ordered on index which is **primary key**.
* It always sparse index.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6b9def0-a360-415e-b27f-ec4a97021f6e)

* Anchor records.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/926657fa-b457-4709-bc71-61eb27a7dfb6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/273aaf16-435a-4e41-8cee-6ea29a3a8a50)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94557e72-0e9a-47e6-a5fa-01b3ae8ad160)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae50c836-5104-42e6-8dbb-6820594db725)

* Question.
* How many blocks are accessed?

> **1 block access** for the **index block** and **1 block access** for **data block**.

* So, total **2 block access** are **required**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19916877-5cff-4f69-b10b-01596f953c9f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e3913d1-faa8-4f53-8c3f-32081bcf7f0d)

* Question.
* In the **index block** we accessed **2 blocks** and in the **data block** we accessed **1 block**.

* So, total **3 block access** are **required**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de6ab5b3-32f0-4ae9-b877-753fe198c997)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17e029f7-48eb-4bd1-824e-49eafd112f85)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55a86636-c056-4742-bac9-3089216f747b)

* We don't have to calculate the **no. of tuples(rows)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/145f2d6d-168c-44d6-8a98-73b472af6c8e)

* Yes. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b24bedc4-f587-44d5-9184-0a4257cb2acf)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9917106-7002-42c3-be23-a8e53b452158)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47d3e3b2-1366-4b69-b7de-54827beb022c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e714fcf6-0758-44fa-bd99-fefe6025d7d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5bda27b-2dc5-4b37-81f9-7c282542be55)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3faf044a-8b1f-448e-86d9-48a307eb5b61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b27eb0f9-f966-4291-bde1-3bfe091c3a87)

* **32 byte** record we got.
* If **database table** is stored in **4 blocks** then **indexing** will be of **4 records** as in **primary indexing** we know that we do **sparse indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5a24eeb-1905-4993-a960-781f6ded2622)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e73524e6-e5b5-4965-b04a-cd493a15ce8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22f503cb-0e48-430e-8dc6-9dc2a3568baf)

* No. of index records = No. of blocks to store DB file.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24621fbe-a7c4-4a15-897f-22c4b5ee52c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd14f0e5-56bf-4896-9b67-16cd0df5a92e)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e9fb1cc-c9ae-4371-ba05-9c62a5df81f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf0cbd71-a036-44ff-9a19-b2de775ded48)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/306a8b1c-c56b-42e4-bfa2-e46728f0bb6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/219d75af-defa-4ab7-9aca-c6be85927af2)

* Question.

* No. of DB recods per block = (Block size) / (DB record size)
* No. of blocks to store DB file = (DB file) / (No. of DB recods per block)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edef1a71-7348-4404-8e60-3bbceac149ad)

* Index record size = (Key size) + (block pointer size)
* No. of index recods per block = (Block size) / (index record size)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5c514e9-188a-4f50-8608-b4d04b5d9ebf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff7f3265-0f14-4984-8127-30cbe2a42b31)

* No. of blocks to store index file = (No. of blocks to store DB file) / (No. of index recods per block) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2627377e-a4c5-445a-86b6-09fede1cfef3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fd4e0c7-0c9f-490a-88f6-ea8f92c8ef24)

## file-organization-and-indexing-part-iii(31) [6th Aug 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a743db52-a7b2-4ffd-b910-0d1b8f7c1e45)

* No issue between **spanned and unspanned**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0918c16b-8b07-456c-8db4-9333b1f55470)

* If there is **free space** in every block then there will be difference between **spanned and unspanned**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64dabb86-9a5c-43c3-a420-25498c125dce)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/867a3625-dd2f-4c68-96c3-8b8bc4f60f6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b969fc7-df2e-4791-8a4b-3d0dbda8d483)

* Spanned.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25e32fe3-e08d-4619-af6d-839c13814249)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f345e5e1-56e3-4ece-9f6c-f4ee30b687c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8a6e786-ceab-40f7-b1d5-156d38ebd9e7)

* Unspanned.
* In the **index block** if we have to do **searching** then we have to do **binary search** instead of **linear search**. The **index and the data** are **ordered** only.
* No. of comparisions?

> For the  **108** blocks, **no. of comparisions = log 108 base2 -> 7**.

* With the access of **7** blocks, we can access the block, we want to access.
* We will **search** first in the **index**.
* Every **index** has a **block pointer** which is pointing to a **block**.
* We will do **searching** on the **index block** and after **searching** we will find out the **block** in which the **data** that we want is **located/stored**.
* We are doing **binary search** on the **index block** and the **no. of block** we have to access is **7** blocks. We accessed **7** blocks and the **job** is done.
* Out of the **108 blocks**, we have to access only **7 blocks** and the job is done.
* This is where we can **optimize the access time**.

* **Binary search time complexity** -> O(log n base 2) -> logn base 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51f8bd2e-91bf-4a91-81cf-907909096a63)

* **Index** is **metadata** not **overhead**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd301fde-325e-4f52-9b8c-c1c19d35ba03)

* Yes, **spanned** can also have **internal fragmentation** because the **last block** may not be **completely filled**.
* In **unspanned**, every block can have the possibility of **internal fragmentation**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6085463f-b491-4a25-ae4e-436dc7046652)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a46ef901-1571-4029-8acf-ae0db2f708cd)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e2515a3-af90-441e-9258-dde83e30996f)

* Clustering Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/122eaa75-629a-401e-99ce-ae896c3aefc5)

* Indexing is done for **each unique value of non-key field**.
* **Non-key field** means repeated values are possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7f2608c-34cc-40d1-9ce5-920bc56a39ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27404068-59b8-4d2a-8b4f-bebc9e3de298)

* This is **correct**.
* **Indexing** will not be for **every single record**, **NO**. For **every unique value**, we do **indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71787baf-66a4-496a-9ff5-bb2c6fdfa42d)

* We have to **store** the **starting blocks** of **every unique value**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5cd2dc14-f6e1-45ee-b42b-61648b68b4b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51d91f19-ce58-4e2b-8668-314e7f6c0f4c)

* Sparse Indexing.
* In **clustering indexing**, it can be **dense** as well as **sparse**.
* **Sparse** when -> When non-key field has duplicate values.
* **Dense** when -> When non-key field has all unique values.
* The indexing is done for each unique value of non-key field.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/742ff633-c464-4916-85cd-680e6fb13cac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/572e39d0-4278-442e-8c4e-2afb857975b5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3342737-e4cf-427f-93d7-dac4903855dc)

* We have to search the records in **sequence**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37b11b72-77d3-4c50-8759-f4c62adeb979)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbbf6b1a-3613-4338-87eb-86c81bd217e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af78affc-b545-4a76-b833-d97828465730)

* Question.
* **Clustering indexing** is not directly mentioned but the definition of **clustering indexing** is given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b8a7920-9cd4-4359-8e36-68702f8170b6)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5620763-71d9-4a98-b554-e9d7f55e57eb)

* In **primary indexing**, **the no. of records in index file** will be **no. of blocks to store the db file**.
* In **clustering indexing**, **the no. of records in index file** will be **no. of unique values**.
* This is the **only difference** everything is **same** in terms of solving the question.
* **Indexing kiski karni ha** woh dimag(brain) meh ah gaya toh, everything else is **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4409b623-1d68-4646-b39e-2a4297705868)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d76022f-9feb-4fa0-b52b-e2954aad557e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77e6b403-f325-416c-8860-99148382b3b8)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e4bca64-9444-4846-a299-d1966ea597b0)

* Spanned.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cba50c67-d265-4a0a-a681-801a3c9df6bd)

* Unspanned.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d1c8589-c4c3-40d8-ad59-945fc2a46602)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdeb5321-c9ca-4a0f-b4a1-03424fee398b)

* Secondary Key Indexing.
* As the data is **not ordered**, we will not know the **sequence** and for this reason we will have to do **dense index**.
* For **every record** we have to do **indexing**.
* Bi, Rj -> Block 'i' and in that record 'j'.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b68fc86-fa97-47e8-bf0f-9f755cd0ef79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209e5725-73d0-44e5-b280-74897f9cbc0f)

* **NULL** is also one of the **unique values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec5bd659-1c83-4c4a-b992-152f1bb91b73)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed7e25e6-a2f3-4a61-8a37-74ee239f60d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e804c697-20a8-481c-9ac6-9b2226a918e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/193c1cb5-9797-4cfa-9949-1d2d1b44b5f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69acf16c-a0d6-4161-b1ab-d47461a956b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cf9c1a7-6f60-4e69-a22b-9242b630e7b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d3b01f5-9ac9-4763-8f19-5bb9c80cedb3)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcb18ee9-ef81-4d92-8396-a8b83d347778)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92be72f9-5ce3-4497-9578-fc370c1a1e43)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21aaf1db-422a-4aa3-a4d9-84a248729029)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9367057e-b73c-472d-8e0c-5bf13049e092)

## doubt-clearing-session(32) [8th Aug 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3da23662-63a3-4bf3-8ebd-e360254e6c88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c0786e7-4b73-4773-b1a6-3dc55c03f79e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d424184d-3e30-4df4-88ef-23d3b0e8428f)

* Secondary non-key indexing.
* For **every unique value** there will be **indexing**.
* **B5** is index block for value **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce0379c0-a702-4fd4-a32f-e682a83d4b9e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed48251e-8940-4482-9794-96f3a1ead3b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85edb338-66a1-444d-8c4c-fdd36164c2bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e253e51-b7b2-4dff-8f6c-8d36d7e9e961)

* **Primary, clustered and secondary key** indexing are the **most important**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdcd2d77-074d-4611-8832-f422e81ad5e5)

* **First level** is **sparse** and the **next level** is **dense**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e822b27d-b1bf-42d0-a47b-3f532148fd52)

* Summary.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0e00564-a168-4a76-b3c8-92bee1e372c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f537e452-ec35-4b93-b66a-5bd3cbf1c32b)

* Question.
* HW.

## Multilevel indexing.

* Do **indexing** on the **index**.
* As they are **keys** so they will be **unique values**. **Indexes** are **unique** and on top of that they are in **sorted** order. 
* We will do **primary indexing** of the **index**.
* We can do **sparse indexing** of the **anchor records**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9345e5e8-1073-4416-ba84-ff19d9bb7d93)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43bad67f-480b-4c40-8103-f2c6352c59e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0dad144-55ed-4415-97d1-b5dd036efc0a)

* For **2 block access**, we will get the **index's record pointer**.
* **No. of levels** = **No. of blocks accessed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4abada70-06ec-4fb5-a0d3-7f0c00a973df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d6fab1c-e1aa-4681-9cdb-c136d9a3ef9d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6aad1dec-d191-45e8-9a56-ad2299ac70d4)

* Without **multilevel index**
* To search indexes, **no. of blocks** to be accessed = **log b base 2**.
* 'b' -> No. of blocks required to store indexes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b7b1b9e-cc67-4062-8324-25a45099f314)

* Ofcourse.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6af5f1cb-616c-4758-8b4f-e707bd7c6dc2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5be01310-b8e9-4e8c-872e-ada523f885d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74710775-46f5-4b61-a4fe-cb22543f67fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e9d918c-de57-4541-8662-1669974ccd97)

* **Note** -> One block access extra to access DB record.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0245214a-d5cf-40a8-9250-c11b25abbf5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84205fd4-4563-40e5-b5a0-a587d6d59b76)

* n-level multilevel indexing -> To access index(record pointer), nop. of blocks accessed = 'n'.
* **Note** -> One block access extra to access DB record.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baf7d1e9-b0b6-4a47-9f90-6fd9651b2f0a)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94ba7d07-984c-436c-a95b-3b50ed52bb9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ca58778-e5b0-4de0-a4c5-b6bd9b6ed679)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e76b9f78-5038-42e2-8cc2-817495409431)

* For **2-level indexing** we accessed **2 blocks** and we got the **record pointer**. We have to access the **record** as well. **Another block access** to get to the **record** we wanted to **access**. We wanted the **DB row**. For that we need **+1 block access**. That why **2 + 1 -> 3 block access**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eb0a558-dc8a-4be0-9c69-2877512f3154)

* Yes.

* If the **DB file** is **ordered** on the **non-key field** then **DB file** is **not ordered** on the **key field**.
* **Secondary indexing** is **dense**.
* The **no. of index records** needed is **16384 or 2 ^ 14** as the indexing is **dense**.
* As it is **unspanned**, so we have to see **block by block**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb70f048-90d7-4889-a87b-016fafdf7f13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d5bc353-04f0-470b-b544-64948e4f0ef2)

* For **every block** we need **one index**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f17f76b4-2eda-46f3-b458-4406ec9f7bd4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8046fb32-a69c-4639-a3ad-de612c07feaa)

* Option **C**.
* We are storing **index file** here and not the **DB file**. THat's why we ignored the **32 bytes** information given. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26b4a329-b9e6-4ba6-8b68-f979add848ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ce8f454-6a97-47b3-9ccd-e175b215aa09)

## B-Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72046352-fe07-433b-a66a-d5163c1e2d62)

* It is like **binary search tree**.

## Binary Search Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0abe676f-51a0-498a-9338-378a379f752e)

* We can do **searching** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fdea640-b1a5-4065-a994-410d6dd4f132)

* Left -> Smaller values
* Right -> Bigger values.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25adc40b-9be9-4973-a7e2-e08edb51b503)

* We have to do **indexing** in such a way that we have to take the help of **BST(Binary search tree)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2bdb40a-a9ff-4cd8-8f96-84f27ce03431)

* In **BST**, the **min time for searching** is **Log n**, if we have **n** nodes in the tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3d99c34-7dd0-416c-b10a-f0c5a6d8432b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a8c938d-f14f-44cd-9fcb-b920ef855855)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8468ba44-e921-47c8-b3f1-d5726c124f0d)

* As **no. of elements** in **BST increases** -> Tree grows **vertically** and it's height increases.
* Hence even for **searching** when **log n base 2** time required that too becomes **very large**.
* **Solution** -> Make a tree which can grow **horizontally and vertically** also.
* We have to make a tree where in **every node** we can keep **multiple keys(more than 1 key)**.
* The **advantage** is that when we insert an element or when we increase the no. of elements, then the tree will grow **horizontally and vertically** as well instead of **horizontally only** in **BST**.
* That is **B-Tree**.
* Binary Tree -> From **one node** we get **two pointers or children**.
* 3-ary tree -> Each node can have **3 children**.
* For **3-ary tree**, we have **3 children** we can have **2 keys**.
* For **binary tree**, we have **2 children** we can have **1 keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaad6934-7c03-4967-b473-4ceadb983170)

* We will grow the tree in every direction.
* **Height** will be not that much and for that **searching** will take **less no. of block access**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1de7ba82-ad52-4ad1-ab70-e61ae805833a)

* Atmost -> Maximum
* **Max** is **p** pointers and **keys** is **(p - 1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c4fe0ff-4b2c-4f78-ab92-8fe3a2818691)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec57f07b-5b69-40c0-b7f7-c0fad749547d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cea5c58-c31f-4f66-96a6-2b6f108a0347)

* Ceil value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2670736d-31bd-4cb3-9063-494347f73d17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e744311-b49e-46f2-91f1-524eb1def320)

* Keys -> Values.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/828ab576-7a30-416c-89ec-9face45f1907)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ab3f474-360a-45fe-ad25-3be6c8b6ed36)

* **Except root on any node**, we have to apply the **min and max** rule of **keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9daeff96-1f61-4db3-9969-c43911986db2)

* For later.
* Leaves -> Leaf nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/861024b9-bb40-4e6b-89ad-49a0ad89371e)

* Yes, **balanced tree** always.
* All **leaves** appear on the **same level**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd2031c-7ce5-4091-94ba-f03cd62f8df6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a2c3eda-bca0-4187-8b1b-6ed534ff3e17)

* Remember the **formula** [**IMPORTANT**]
* Why learning **B-Tree**?

> We want to keep the **indexing** in **B-Tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/590e6ac9-4cce-4013-b64f-285000ffdda5)

* **Every node** has **two pointers**. **One pointer** is of the **record** and the **other pointer** is for the **tree**.
* Rec pointer -> Record pointer.
* **Record** means the **row/tuple**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb37bdb4-6172-453f-b26c-890742038679)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b9c03e4-785c-4ccf-912e-37a3b1190eb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d90a0efb-c6a0-4dce-8f82-1eaa349f1ee9)

* We have kept **max of '4' keys**.
* We have to keep **'4' record pointers** for **4** keys.
* We have to keep **'5' tree pointers** for **4** keys.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79bb43db-f53a-470c-b423-b80c9a22ac13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0257cab-b114-47e9-a9e3-46a06ac5f58e)

* Insertion in **B-Tree**.
* **Insrtion** is always done on **leaf node**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1258618c-daea-4c77-963d-650e2dcd89e9)

* We can keep **2 keys** on a **single node**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6e34601-ecd0-4c2d-91f4-9bd75efdb27c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4a55019-f30e-4f69-bce3-7d456de4d091)

* We had to make **2 extra nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ad333a9-d44e-4326-bfb2-9d5ba55582c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9d2ca17-a70d-49db-81f6-4f0283d65545)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8b6ee68-9250-40f8-99fd-1120240fa754)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4bf45e3-44be-4de5-9650-26aaf783cd81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1ef7f84-c227-4ce7-9a16-d2a58a44661d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ced5fe58-8dd7-4a8e-89f5-c8f74faf5299)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b86ed91-4c4d-4273-8f68-0b8032b18003)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc0d907b-a538-4d39-a526-390f2d735d70)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96ef0610-abb2-4f2c-8fff-5902716aef37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2821a03-24f7-4932-96b5-55abe272c1fe)

* Question. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/247cb3fe-9cb4-488d-b377-6a25758574cf)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc81fee7-b927-477b-8775-f19ae5a02905)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07711a3b-486c-4d15-b409-d014ffad6ae9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee774fc6-1734-462f-9439-7d5e0aedf3ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cd2de39-41d8-4926-b5c0-faf31b7692ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7356208-0ba1-466e-90c4-d127a0877565)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57186270-3481-4a45-8d79-8561e5030541)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63e2e991-de44-4dba-a240-d862811b23c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c869377e-d89c-40a2-abf7-413cd25f10b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24446a65-85cb-4229-bd87-3814f7df8c5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2be4619-ed5d-4b7e-b712-f6fed9aafb85)

* Good point, we will see **tomorrow**.

## file-organization-and-indexing-part-iv (33) [8th Aug 2023]

* When the order is **even numbers like 4,6** then there is confusion. We don't know which element to send **above** during **node splitting**.
* We can have **two option**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee407388-e3bc-480f-8fb9-2fc33b1ba9ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35a49d1b-8dba-4dcb-864b-ad67f7d5826c)

* Right biasing
* Left biasing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/145ffff6-a90a-460b-9900-2750d31e06f3)

* Node split in **left or right biasing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25249038-a256-441f-8ca0-a5a0afb7e0a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69944abb-9ab8-4f70-9d2c-a6d8c007fdd8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccad411d-b7ee-432d-ab8c-812f684bbffc)

* Continue with **Left biasing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b91e316-629e-48c0-824f-eb0c30b0bfbd)

* Assume a B-Tree of **order-p**.
* 'p' -> even and p > 2.
* When during an insertion a node is splitted then the no. of kyes in 2 splitted nodes should be?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58e865a6-c323-4bde-8f59-6cceb5b526b9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b62bcd0-01b3-4142-a1fd-11dc06cf648e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b46c114-f49d-4223-8c0d-95e9fc4c50ae)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b163d6b3-331d-4a70-9de0-99dece254a58)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e77b3ecb-f53b-4284-8e01-5d96c560302d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6eabed80-b4e8-4050-9555-61892c3e95fa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60b0fa15-fe28-4e6f-a8ed-b8197acbe008)

* Will be mentioned in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea608bd7-4f5c-47fb-81d1-c5b180458c02)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d4dd441-0fd6-4b5f-9fc1-700e19072913)

* Question.
* Degree -> No. of children -> Pointer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01d89119-2542-4f4e-8f50-8062da3a12ac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97916b4b-ebf9-4d68-9b08-45d9cf175aae)

* We are not **concluding** yet.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86983d30-87db-4e69-94d1-1c2855319173)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba913c64-59c8-4b45-a30b-34257896b331)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/247dbfd4-58b7-4d57-9e73-9f8b5b59f77f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32b0a405-f23f-44db-af39-fc4a99932fc5)

* Option **B** is **correct** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4213cab1-e82b-4043-aab6-e52397bb05c8)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b82a31d-b780-4946-8381-758922833765)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02cc16d3-8cf3-4ad4-9f52-5d35b6b44150)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8165b584-73a5-4a74-82bd-14d795c7001c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05fa55b4-d620-44b5-bec8-a271ed6acde3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11d10a76-3e87-441d-b550-ba5c4e19390e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92bd30c5-76c7-4266-bf9d-8d5e0ab6e3c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b13c16b-2296-4831-b266-5852533c315a)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46aba782-2cbe-4747-ab3b-929365e94112)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01274e4f-4054-4398-815b-c2a305b52764)

* In general, it is **no. of nodes + 1**. As **maximum** no. of nodes are asked.
* No. of splits -> 4 [Above question]
* No. of splits in the question = No. of levels.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e4b7a81-20a4-4b99-8930-f644b2f651ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bde84aa7-241c-4aae-894f-a532b3913e36)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24e7bd4e-9e60-4a7b-a110-866c043de72f)

* Practical Imlementation of node on blocks.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c43f9d0-d1cd-47a5-b68f-92f468c53932)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8af0628-f6f5-430e-a30e-e575952e40a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3f6f877-e0e2-41d4-b530-dfc60afe5334)

* B8
* root(B8).
* Idea to store B-Tree on dissk -> Keep one node of tree on a block. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/439fac6d-20e2-4a8a-b878-18c922eaff99)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85bcaa15-658d-4beb-886d-ed08bc4f7ea3)

* Rec pointer -> Record pointer
* Tree pointers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b7f865c-c555-4d12-b44c-2f6fde65537c)

* Max keys -> (p - 1)
* Max tree pointers -> p
* Max record pointers -> (p - 1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1030350f-c627-433b-8579-0dabb444aa03)

* **One complete node's** size.
* We have to keep the **complete node** within **one block**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d754bab9-9983-4c22-ab6c-ec144c4c1d48)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/787210c7-e567-4e8e-bc94-f7fb8d901539)

* Tree pointer or block no or block pointer.
* We want to do **min. internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8818eae7-1f82-48bc-ac62-a7a15c8a5033)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f95792ed-2aee-4fb4-997b-697ab83822d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62725944-03f1-41ff-a59a-5c7deddeffc9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f27226d-1442-4ac3-a695-64e665ac11ad)

* yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/046bd498-bdf7-47c0-8375-862c3c4a3cd0)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e773300-9d57-4ef9-863c-da2427517b40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/500f1a5c-adfd-454f-96c9-3f1586b45605)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0521c7c6-285c-4e18-bcaf-233e891712fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b02ab42c-da0c-497f-8dc2-dd10c78feccc)

* Height of **B-Tree**.

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aea69e2c-efe3-43bd-b096-ecbc02a01a37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b27ba9b-83ad-4b50-bfc2-1419b689f6d1)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17385609-2ec1-4d4e-bc86-ca5f789b58a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccd0f3be-44b8-4b6c-9880-fb857fbe4cd7)

* Yes.

## file-organization-and-indexing-part-v (34) [8th Aug 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9549f968-703f-428c-83d1-29526a8ade9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c161ada-f31d-41f6-abd9-9047dbc2793a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2af5c344-8941-4f8d-9ae1-c86c76987ed6)

* select * from table where key = 20;
* To search into index, 2 blocks are accessed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88d04940-f042-4a06-96d6-fa0ca01897c8)

* To access a specific index, **max no. of blocks** accessed = **no. of levels** in **B-Tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1e1b7ca-48db-4282-950d-18eb01d22a31)

* **4 blocks** accessed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b92f08bd-e3a1-4335-9a90-5a078e908488)

* In given tree, select * from table where ke between 4 and 30.
* No. of blocks accessed -> **4** blocks.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad4bd090-370f-425d-a8a2-1a5af8e46f41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5937fdd-07cb-4452-8745-5fd88e970504)

* **Deletion** in B-Tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46368270-8d76-4c2b-a147-23ba9f842bf6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7caf2a04-ca4b-4e8f-9f38-9a00bb87b381)

* **No changes** after **deletion**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8da7384a-1ca5-44fd-a0d2-16b0e616869c)

* Question [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51a63fc4-7450-4a5e-8eaa-a010f7fd805e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c40ae4cf-b20d-4d32-8f0e-0613d45ccf9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f1117b3-4bcb-41c0-b97c-17e11a2a84ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f61f9306-a87b-4a9d-9901-eac76aaf181b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd2a8661-0505-4b82-a520-12dab7581d30)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fc8e11e-fee0-4bf8-89e5-ff95c57182ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afa9b3c4-5c60-40ea-b1c4-bec9c9ecb5cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65641ada-4016-4b0a-97f9-ee7d9186840f)

* No violation so **no changes** afterwards.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a2c0aed-3239-43cf-9b34-a4960151b2bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e47836a0-1352-496d-b890-87005ec85242)

* Because of **min. key violation** we cannot borrow.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8401386b-237a-456c-b01d-ff551bd3f905)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7e88476-cdd6-40d5-9639-d4ab9b9b5c32)

* Will be mentioned in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1adc57c5-76e6-4a90-9da8-c6422e94f8ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e22d572c-ba15-4f6c-b704-24a06874dd14)

* Inorder successor or predecessor will always be on **leaf node**.
* Will be mentioned in the question, whether we have to use **successor or predecessor**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c50a08fb-908c-4848-8f37-89539479e751)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc79746d-e9d6-43c3-b853-cc70d87cb578)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7d788ec-8d84-4773-9142-eac62ec025fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d570c463-3c49-4ca5-bf19-5cedfdc6292b)

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8efe61d8-6776-4ab3-9005-f5192a1a97dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75ff8e4a-a566-4c23-8e73-3e6f14aaee89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5bd6c3e-0541-4f1e-9123-c3db6c2a9f99)

* COA.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81cbd1b2-19c1-4721-870b-0d049a9ad7cb)

## file-organization-and-indexing-part-vi (35) [16th Aug 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06c21e34-dad1-4391-a32e-536f27cbc570)

* Insertion and deletion.
* Writing the **range query** there are problems. Accessing all of the values creates a problem.
* For that **reason**, the **efficiency** of the **B-Tree** is not that good.
* To support the **range queries**, the **B+ tree** had been introduced.
* **B+ tree** says that if we want to access things in the **range** then we can use **B+ tree**.
* In **B+ tree**, **all of the keys** are present in the **leaf node**.
* In **B tree**, some keys are present in the **internal node**, some keys are present at the **leaf node**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88ede23e-e7ec-4acf-b1f9-b8e6ac9afed4)

* All of the **leaf nodes** are connected through **linked list**, either singly or doubly linked list as per the **implementation**.
* At the end of the **leaf node** we will get the **address** of the **next leaf node**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4e1abbb-2e3f-421e-8e05-0d8c24aa479e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa280c26-16e5-4ac3-871a-7e947a9c8638)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96ea2326-8b31-428a-aea7-848698271a0b)

* **13** doesn't necessary need to be a record. It is just a **value**. It is just used for **searching**.
* **13** kept so that we can either go **right or left**. There is no compulsion that **13** needs to be a **record**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d224917f-aa22-49a9-a814-3e49fb4204a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb453e69-cbcf-471e-a595-6b986bd3324f)

* **13** -> Anchor key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83e482e6-200a-4aeb-8fb3-470ad256385d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57981d20-6a41-43df-9891-bd8b6308b7a2)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9aec6508-c4cc-499f-b675-a5ed418686e3)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/056e0748-2d7d-46da-9956-9201ddaa76f6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae287f65-72a0-4962-861d-ff0870a9ac59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a239a31-a569-4789-825d-105b03c802c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65ffac16-a2ab-4544-a630-ec4396f076e6)

* Example.
* We don't have to **search** everytime from **root**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f59e515-d402-4466-9fd7-59403d738d66)

* Order is **same**.
* We are doing **right biasing** here. **Left biasing** also possible.
* We have just copied **2's key** above. The **record pointer(RP)** didn't go above.
* **Record pointer(RP)** is with the **leaf node** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dbef045-eaee-4b84-a302-6245a9397868)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/807d9613-a844-4e1c-b52b-d2cc1d5d492e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/703800a7-d150-4724-8b26-d89dae6ff27a)

* The **node split** will happen just like in **B tree** when doing for the **internal nodes**.
* No need of copy.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6681f5cb-857c-4664-b96c-02942cf9d29b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df20ae0f-2851-4fd5-9db5-5b035e591a6a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb6a3117-a896-48f0-91cd-43f9e01c6b2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a10d3465-029f-4b0d-921a-1b85cd648cb5)

* All keys are present on **leaf nodes** and **internal nodes** contain only **anchor keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf23a523-d77e-4e08-a572-d79d0cd246de)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41a4b337-1d6f-426c-99f9-d2db0b7a3c9d)

* We can keey anything for **anchor keys**. We do not need copy of them.
* We are doing **right biasing** on these as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14a0adc6-f601-4343-9763-80418cebc41d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2724867b-9193-49bb-a831-16c4bd871b38)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d65a412d-e92b-4e19-8f7b-e55a602bb042)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92bad897-2899-4cfd-8df1-9e85e7cb7913)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9344bc5a-6b4c-46c8-acc7-e6bf91e5a640)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a662b8ba-1efd-40b5-b7ad-4144dfab2678)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f4a1585-2380-4b38-b9b9-f2747fc9999f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8edc33b3-d2ae-45f9-b12a-01c6d1520630)

* Question - aneves.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b823b798-e344-4e74-875f-80f8655a7c42)

* We have changed the anchor.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8d75366-fcc1-46f9-8358-aef47f5f7fba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a52c695-9800-4f5a-825b-e55d241a5f26)

* If we want to distribute the key to the **left side** then **10** will go to the **left side**.
* If we want to distribute the key to the **right side** then **21`** will go to the **right side**.
* It is the implementation detail than we want to distribute the key to the **left or right** side.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c240a1d1-a9e2-44ea-892f-16c10f5bcc15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75e88cdd-e73e-4c78-98ea-338b7cf77f8d)

* When we inserted the **8** element, we cannot distribute **9** to the **right** as it(right) is already full. We cannot take any further than the **nearest neighbour**.
* If not possible then we have to do **node splitting**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21560d35-f30f-4337-a83d-7ada282170ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ce48147-a98d-4a3a-8350-17dae5c34c4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/075700ba-ffe9-45ed-9652-51a043282b8b)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9db650ea-82b6-45e1-b0b7-15398547fdf5)

* We will access **5 nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fb564a2-6a36-4f89-b6e6-a067f9887684)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bba4d721-357c-4396-9f0b-2fd966d8f809)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/788211c4-b36c-4ed9-800c-e0f56da8ba18)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79db3df4-e009-4cd5-800c-2e0ef26c953a)

* Height of **B+ tree** can be more than that of **B-Tree** for a given no. of keys.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5af54244-c31d-4ed7-bb57-6b64459c6894)

* Yes, to store the duplicates in **B+ Tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fba3e75d-010f-4038-b814-8190c27ef6fc)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65c6dde5-b00c-4658-a721-01e373f1fa77)

* Question.
* We can get more **100 internal nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f9efef6-ccaf-4ca0-b4d1-0f1c157c0273)

* To access one record, the **max. no. of nodes** we need to access is **18**.
* It is **4** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39d10e0f-9df6-4c9a-b8de-20af3afa2c81)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f51f30b-5c77-4f62-831c-c64be9e855de)

* Deletion in **B+ tree** (Tomorrow).

## doubt-clearing-session (36) [17th Aug 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67becd17-4792-42e7-b7f0-35632edeebae)

* Insertion:-

1) Node split insertion
2) Using Key distribution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47b617e8-2f94-4f96-bf5c-51f478b9f264)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/829566d2-eda5-4e5b-94df-85dc6e68e660)

* If **key distribution** is not possible/does not happen then we have to do **node split insertion** only.

## Deletion in B+ Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8820e24-f5c7-4f7d-a448-d3c0f3049da6)

* If we delete a key then the **deetion** happens from the **leaf node** only. The keys are actually present in the **leaf nodes** only.
* Deletion is performed at the **leaf node** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a666143-d7bb-470e-97bb-de7317b14b14)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4eaebf17-c2af-4e07-98ea-f4221d70527e)

* Yes, no problem.
* Anchor keys is for going **left or right**. It is not necessary that the key will become the **anchor key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f7d1730-4ed9-4c6d-95be-7231c31fbe47)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fcac5ff-fdc3-4310-92a4-ee23ce761db0)

* Delete **15** next.
* It is not **necessary** to change the **anchor keys** as long as the **left keys** are **smaller** and the **right keys** are **greater** than the **anchor key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e7f47d6-e97c-48ac-bbad-e58406e2ad85)

* There is no violation of min. keys.
* There is **no problem**.
* No point in updating the **anchor**, it is waste of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44012be3-6bb9-410c-8b97-a5ee0c33d8fd)

* Example below.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cacc6f5-623b-46ce-8397-815c90287aec)

* Violation happened when trying to **delete '5'**. We have to see if the **immediate siblings(left or right)** have **extra keys**.
* We transferred **15**, which is **borrow '15'** from the **neighbour**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dffe3fa-b193-4243-9703-4198ad83977a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0883527b-8ad8-432c-b994-10e6f2988376)

* If **delete 12** happened then there will be **min. key violation**. Min. 2 should be there but there is **only one**.
* We looked at the **neighbours** to check if they have **extra keys** or not, which is keys more than **min. keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad3a6d35-418c-4315-ac47-4cf9d7edac59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91113e48-f1b7-4bfc-a3b9-1ffcbeca573a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c00d57e-fa84-4050-83e0-817d9592a260)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0aafc35-a547-40e5-af06-16d3b602d200)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea6a196b-3ce2-4c1e-995a-7fffa554ad70)

* Yes, they are all in the **same level** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c0bd505-6be3-4cc4-90c9-f9e1c2f683c4)

* Start

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82aa62ca-7bec-4f36-b982-36733bdb1792)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73d12efc-4811-49b3-987a-06536a78d94a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67aa53a6-0691-404f-8f78-dc07ce22fc11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61e922b2-959b-4aec-bc4b-ecc73bd62071)

* As **borrow** not possible. We have to do **merge of two nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/718b041c-94d5-49e4-b270-07c6137fdf13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac836d8b-e612-4ca0-920c-8aa28a69bbf4)

* **Merged**. We could have done the **merging** with the **right node** as well. Both are **fine**. Anyone works.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28caa2f8-7a0f-44c2-b0c6-64211ccb8a0b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a594eb87-098a-459c-8f47-0ae1bc8eed27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abbdaa3d-595a-49f9-a939-9977e3e632bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c24b3451-1b37-49d8-9a0f-4e4c114b0f1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/982a8136-0d76-4097-adce-8433c87fb5e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc1fe299-f428-40e3-ba1f-620a1059d1ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fc32c2c-422b-4e91-801f-00d709b79cde)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52955d88-2954-4559-86c1-96258a18a817)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d93f0e96-14eb-40b9-a653-58c28aa39d73)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6892183c-74bb-423d-be88-95bd99cb2cb3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63177b37-f965-4180-8800-55a5fe2f0d78)

* Root node can have min. of one(1) key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f50fb88-a2f3-46e0-88af-29bff2834856)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/666f1666-f58e-4c08-852f-736053d205c2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19d589b6-bd53-4f16-8e15-6acc5c0a9c5b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd14dc0a-8325-41c1-98b1-c02e7678cfef)

* We have to do **merging** for the anchor nodes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02184f20-7ca5-466c-bed0-ed82b28c8246)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e06f7af8-60a1-4fa3-b998-6bfd3c409a51)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81816433-fd88-4eba-a84b-31aa4552edc5)

* We have to follow a pattern always. First we will try **borrowing**. If **borrowing** is not possible then we will do **merge**. First borrowing we will do from the **left** if not possible from the **left** then we will go to the **right**. If borrow not possible from both the sides then we will do **merge**. In **merge** also, start from the **left** and if not possible in the **left** then go to the **right**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8718ef6a-94bb-418d-96e6-df1c0c9148a8)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03dcd216-a85b-46c2-9d26-a6b993a702cf)

* There is also violation at the **anchor node(20)**. We have to bring **36** from the **neighbour**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/654b38be-ae4f-4edc-a42b-f9cdfc132d1f)

* Like a **B tree** deletion for the **Anchor keys** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8c3d118-dc0c-40e0-9d73-3a5a8f53481b)

* **Rotation** will happen, **36** will go to the **top** and **30** will come to the **left side**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2cb5a32-3308-4d4f-acf5-b78b12371a2e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66439371-f68f-4c3b-b262-1d2bd7e556bd)

* If we do **merging** at the **internal nodes** then we will no **remove** the **anchor**. We will pull down the **anchor** or we will update the **anchor** for **merging** to happen.

* If we have **borrowed** from the neighbours of **internal nodes** then **borrow** will not happen directly. It will happen through **rotation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0094fdda-c539-4410-b58b-bffeafebc893)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3cbfea7-b2bf-4c97-a939-113c2500782c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86760c4d-b944-4450-bfb7-9a600c1ba7c2)

* B+ tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/118498de-cac7-4ff1-9362-129b724649fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c85bae2-f6d6-47f8-92cd-6fa51d0dba25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/027b912b-f38d-4738-9e86-fe78e45e5f69)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d188d4c-9904-4d90-a571-5384f06bacff)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3979629-80b0-4ad1-a40b-551ad997ce5c)

* Question.
* Non-leaf node -> Internal node.
* Tree pointer -> Block pointer

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6943439-3e5f-49ce-9028-07cc2365b72c)

* Order(p) -> 51
* Max. no. of keys -> p - 1 -> 51 - 1 -> 50 [Answer]. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1665cc9a-9695-460a-80a5-d3049f1c78f5)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4cadff2-8d94-4f5b-bf79-6d7ad0449a64)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4299c71-9806-4358-b30b-237d0ccc8386)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab10cdd6-49ba-4aca-a814-4cdef48ae671)

* Yes
* For **B Tree**, Option **A** as well.

8p -8 + 2p <= 512 [Non-leaf node]
10p <= 520
p <= 52

* Order -> 52 [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffb21860-1198-4dfb-9136-4c8eb0f2ff6f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e78b432b-fbcc-4dc1-b1d7-58fc07940efc)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9838aeb2-a27b-494f-8119-9cf3a0e12560)

* Good Point.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35cdfee4-81cc-43c8-a3b4-d9cec3dc9a3c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/099bf427-bb60-4f83-9322-494713fd00f1)

* Doubts.