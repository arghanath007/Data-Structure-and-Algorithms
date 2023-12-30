## trc-drc (21) [17th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3dc005e5-d8a9-4f33-906f-d00a444aacfe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37d90f25-832f-4678-ada0-74f0a862c05c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/469723ce-9656-441b-9452-ce8ca232cda2)

* RA -> Relational Calculus.
* Predicate Logic(P)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1cdb951-1c9f-4d45-9724-6daab170bfc0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c99539c0-5251-4c3a-b989-4d1accf309cb)

* Yes.
* Domain -> Concentration on Attributes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b584a890-e51b-4b86-adcc-0659d78f8192)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b6c9ccf-29b4-455c-afb6-5e6bca583faa)

* Relational Calculus.
* **Tuple Relational Calculus** -> Focused on tuples -> Bring those tuples by writing conditions.
* **Domain Relational** -> Focused on attributes -> Bring those attribute values which satisfy the conditions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf4f570f-3a39-4dfe-8a7c-4261acf525bb)

* Relational Algebra is procedural.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0e514e4-bd62-4f52-9a26-d3868e6e7796)

* tuple(t)
* t -> On the **left side** of the **bar** is the **tuples** we want to **select**.
* P(t) -> On the **right side** of the **bar** is the **conditions, from where** we will get the tuples. Conditions that are satisfied by the tuples. [Predicate]
* t -> tuple variable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94e48a0a-c66c-4462-bf7b-b6869b2c9547)

* {t | p(t)} -> fetch all tuples(t) which are satisfying the predicate, p(t). [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/507ee3a4-3b37-43e8-9b13-74c722dc3036)

* {t | t belongs to student} -> fetch all tuples(t) which belong to the table, student.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f097fe4e-3c9a-434f-85f2-f665628b8f8f)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2df1a328-17df-4245-ba18-6e9feff9e003)

* To get a **specific attribute/row** from a tuple. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/541da373-f097-4662-b128-9118799aa619)

* Example.
* We just want the **name** of the students from the student table.
* Attribute -> name.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86ccd9e6-7ff7-4703-82a1-20914d72dc4a)

* Yes, Full row is **tuple(t)** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e9b4be2-2569-43d3-886c-5a1746dd27e8)

* Example. [Another Way]
* t[name] OR t.name
* Both are **same** and correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/378b2e42-e2f3-4b5c-afef-b73b12817590)

* Separating multiple rows with commas(,). [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d85eb689-378b-40d1-88ac-441cfcf09a81)

* Comparing with **SQL** statements.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b62a4d9c-c1a8-4f8e-b38e-92087eb70a87)

* This is also **correct**. [Another Way]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebb3190d-cdbe-48f4-a3eb-cb49517229be)

* Example.
* {t | t belongs to Shopkeeper} -> Fetch all of the tuples from the shopkeeper table.
* {t | t belongs to Shopkeeper ^ t.rating  > 8} -> Fetch the tuples where the **rating  > 8**.
* ^ -> AND
* It is like **where** clause in SQL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaf428de-2dd6-4da5-96e2-833366cd42d7)

* Find firstname of all shopkeepers who are having rating between 7 to 10 [Question]
* {t.firstname | t belongs to Shopkeeper ^ t.rating >= 7 ^ t.rating <= 10} [Answer]

## Tuple Relational Calculus

* TRC(Tuple Relational Calculus) eliminates duplicate.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77eb0e29-b474-48b2-b80e-7d954eb9d202)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5cfe3b0-a084-4f51-a2f8-916fbc10b4c6)

* Both give the **same output** but the writing is in **different formats**.
* Select fname, Lname from students where gender= 'Male' and marks < 20.
* {t.fname, t.lname | t belongs to students ^ t.gender = 'Male' ^ t.makrs < 20}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b81db5db-2f71-4192-8ca5-102079109c8c)

* Find all such students whoo's marks are greater than 40.
* {t | t belongs to students ^ t.marks > 40}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf133a69-fe8c-4efa-ad7d-e6e0bb3239de)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e1847f4-b192-4387-8756-ae18daa54838)

* Empty set because there is no any attribute age in relation students.

## Quantifiers

* Existential -> There exists a tuple(t), which belongs to a relation and satisfies predicate(p).
* Universal -> All tuples(t) satisfy the predicate, P(t) then only we can bring the tuples, otherwise not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2b33b0e-5bbe-4050-9928-46f7dddf6d84)

* Quantifiers [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edae275f-ecd3-4dcb-a5f0-25ff626f6a73)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9beda293-7daf-405d-b2be-450071c02332)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/321d38ac-4c91-4518-afc6-a97d61172802)

* For **two table**. [Example] [**IMPORTANT**]
* {t | t belongs to students ^ t.Gender = 'Female' ^ there exists s {s belongs to Department ^ s.Dname = 'CS' ^ S.Dno = t.Dno}}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/837f7a72-1a90-4c82-988b-9aa786945228)

* Explanation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bbaa7c9-ab28-49b0-be82-c750cd40c665)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cd05c04-13a7-4789-a70d-2a66fea7ecf2)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18d608f2-7caf-4da7-a7cb-4d9b76364249)

* Answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68ab9f16-7ff3-4ec7-a3b0-ba77b7015677)

* Question.
* {t.Dname | t belongs to Department ^ there does not exist(~) S {S belongs to Students ^ S.Gender = 'Male' ^ S.Dno = t.Dno}}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9bc853a-de3a-4cf1-b087-d437d146aa18)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5fb8937-178b-4035-b3da-ce045fe69b3a)

* Symbols for AND, OR and NOT.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dea1f887-ec5d-439b-8c03-d130ead2ec95)

* NOT Symbols

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f1eceb3-df26-468b-88fe-55f7ab70330c)

* Another Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/638a79c4-7e6c-4bb6-9578-2db22686ef0a)

* Question.
* 3 tables.
* {t.cmodel | t belongs to Cars ^ there exists D {D belongs to Drives ^ D.cid = t.cid ^ there exists E {E belongs to Drivers ^ E.dname = 'Mitchell' ^ E.did = D.did}}} [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f00f1cd-6870-4856-9001-9683975b0138)

* Whichever is asked first in the question that table comes first.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0faf45e5-9fbc-41ac-8c3f-0b3eebab0d1b)

* In general, when we have to do **joins**, like above, then **there exists** is fine. It will work. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/089695a7-961f-40cf-b4c3-ceb37310c218)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b11a4a3-36b9-4af2-998c-9d30ae527f69)

* It is **non- procedural**. It is like a sequence of expressions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e150600-fc62-436e-a79f-9d31504ff496)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e856a8b-f90f-4e82-b9b0-6a1650df8b4d)

* Another Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23e071e0-1efb-41d2-86cb-4ae758cb1fd2)

* Question.
* {t.sname | t belongs to Student ^ there exists E {E belongs to Enrolled ^ E.rno = t.rno ^ E.duration= 2023 ^ there exists C {C belongs to Courses ^ C.cname = 'DBMS' ^ C.cno = E.cno}}}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d9d2d23-f77c-449e-adc9-989cd66cd6b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59c15282-9bec-4722-9212-759dccdfc22d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea18894c-9516-4c60-8a0f-0957d2faa631)

## Tuple Variable

* Bound -> Where we added **quantifiers**.
* Free -> No **quantifiers**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9415567-640c-4775-aa9f-a11cb0db1a9f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c00a0e13-68a6-4465-974b-cb7ac8f98182)

* Here, we have to write the **commonn table** first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47a58f6a-b8c9-4c4c-8d93-c7d9bf0de7bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df5e500b-0fa8-4100-b005-b14bfae74f79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53b92e7f-0769-40ae-b2f4-8cad07495499)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77ec15f6-2348-4175-9eb6-b78413bd6e28)

* There Exists -> The combination between the rows should match.
* For all -> There should be combination with all the rows on the right hand side, with the single row on the left side.

## Domain Relational Calculus

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be7f930a-c8fe-40ba-929f-4580485703e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/852edf4c-8219-4179-9f6f-dbf4dda1e8d3)

* {<r,f,l,m> | <r,f,l,m> belongs to Students}
* **First part/left side** of the **|** bar is what we want.
* **Second part/Right side** of the **|** bar is the **conditions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9693ae68-8a49-4e6f-a1b0-dd71f105c6cf)

* Similar to select * from students.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a997153-b8b4-4b30-ab89-bad9f6e29ae2)

* We just want the **first name** of all students.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/926845a2-1baf-48ca-9bd4-2975ae0b11bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14c3561a-325f-45ab-9899-048cc59b0ac9)

* We want the **first name** of those students who have **marks(m) greater than 90** 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9aba1e26-b156-4d1a-8dc8-31e3081b28df)

* The table name we have to write always. All of the columns names we wil also write.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6530bb64-65ff-498e-9836-8e15e3911c69)

* Yes.
* It shows the particular attribute.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04f7da53-7657-452f-bd48-d74849d1d083)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42fb5390-e0fd-4131-ae3d-f4b7247a4d02)

* Question.

* Name of all such drivers who are having rating > 8 and dob = '27-10-1988'
* {<dn> | <d, dn, r, dob> belongs to Drivers ^ <r> > 8 ^ <dob> = '27-10-1988'}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209c8b19-7ea8-4124-bf51-3a64de6e80c9)

* We can write the **variable names** same as the **column names**. Just remember to **maintain** the sequence of the columns in the table. They should come in **sequence**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72a13826-82dd-4b49-b625-669446bd38f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d77efc2-5204-485d-bba2-f3577424476f)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c426a7d-84bb-4c1e-84c3-8283d8952eee)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5020ee02-6713-4b76-abb8-a96a10191a44)

* If we have one/single value with **equal too condition**  then we can **replace** the **domain variable** with that **number/value**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/239c8103-9d6f-4468-8bdf-3c5c81b9144c)

* We can do this in **equal too operator** only. Doesn't work with **>, <** operators.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d81592c-1587-4fe6-95c5-60d0ce5143f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6468e2ef-dffc-4540-9225-e89ccdaa4a00)

* Question.
* {<rno, name> | <rno, name, lname, marks> belongs to students ^ <lname> = 'Kumar' ^ <marks> > 50}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec8d4260-d9be-4e51-b9be-6354c4cb09a7)

* Both are **same** and they work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0f84a4f-c6ce-4fc2-9eac-ed72a343e66b)

* Question.
* {<cid> | <accno, cid, amt> belongs to Accounts ^ <amt> > 50000}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b59072a9-69fb-468c-a01e-9e885418d424)

## transaction-concurrency-control-part-i(22) [25th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75adb8be-752e-4e49-8d74-0b5d9c6d29c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2542afe3-ac34-4f3e-84de-124c4a2c350d)

* Many to many participation contraint

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1713a586-d008-4e7b-8e36-fd8b40a7a66e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4a272a3-8dfd-4d54-a79d-f6721b1382f0)

* We cannot control the **participation contraint** in **many to many**.
* We can control the **participation contraint** in **one to many, many to one and one to one**.

## Transaction

* DB operations -> Read, Write, Update
* Sequence of **DB access operations** is called as **transactions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/253f5431-e332-4e2d-a85e-05b9baac234a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a17e2d6c-be23-489a-a10d-7adee29c97b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23cda37c-fdf1-4f24-a022-159af7db60f3)

* Transaction -> Sequence of **DB access operations**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83fbbe4e-a487-4de6-aea9-42e0fb4f41f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc57e29b-98af-4cf7-aa3a-2f92a75c5dd8)

## States of transactions

* Commit -> To save the state of the transactions.
* Rollback -> Revert the database state to that state where transaction has not even started. It will take us back to the **last commit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31fb0b25-9bcb-4d28-b835-95575205d078)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/514becc6-3ff5-4a56-ab13-e6ba62e0291e)

* As there was **rollback** at the end, so we **reverted back** to the **last commited value of 'x'** which is **5** that's why we got **x = 5**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfb6308d-1563-45dd-9299-d6bbe3173739)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0443318f-30eb-4334-90eb-37e00dd220d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ebf7528-2e79-4ff0-97fe-8fc23159f374)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/637a64ec-7045-4158-9a58-e9e93fe4e446)

* States of transactions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d13d15f-0bb4-48cb-b3d2-b48a3c442320)

* If a transaction has **failed** then it has to be **rollback**. It is not the job of the users to **rollback** the transaction. It is the job of **DBMS**.
* The **rollback** of the transaction is done by **DBMS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdd7a61c-a914-4b13-bea4-9c18937942f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f16c111a-cc58-479a-bc6f-e2df07eee297)

* If the **commit** was successful or the **transactions** were committed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0d4e4f4-5d04-44e1-bc7b-ab1cc99ee1e7)

## Schedule

* Collection of multiple concurrent transactions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be44ec5c-a42e-42af-82f5-644444865ed5)

## Concurrency

* Parallel -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f437bb4-6de3-42f3-8755-481617b9451d)

* Parallel work.

* Concurrency -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab3f88b-46ef-4e70-9ea3-034fc6fa6b5e)

* Concurrency work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcb305cc-f3c8-415b-ac6f-0f4d5bf73dd8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67aa6bdf-25d9-4b8d-975d-3bee752b6ec1)

* Parallel and concurrent run.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98e23125-0dab-40be-ad12-330b9c372028)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0d33718-10cd-457d-a806-c8a21568b00e)

## ACID property

* ACID -> Atomicity Consistency Isolution Durability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/716bc833-bb6a-4ff3-bf68-22a7a5b1ec84)

* Atomicity -> All or none. Either it will run fully or it will not run.
* Consistency -> Expected output/result from DB.
* Isolation -> The concurrent transactions should run in such a way that they provide final result same as they were running like one after another.
* Durability -> We should be able to see the results for a long period of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa889876-c4b6-4dd4-b439-5242c0009841)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64b09c7d-04e9-42ca-9a42-874b053a9082)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/858ff819-2eae-486c-9665-5847a6dacff5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f363df8-e1e6-4a7b-82be-8aafaec2a274)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91775214-bcb0-4694-a51a-07801a9494a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d63d75aa-3384-497c-8a39-3a513260a191)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f935571a-2e76-4761-a330-6a43a6c7da1b)

* Why Concurrency

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f288361-9ddd-4daa-b30f-4e8fa8cda159)

* Problems with concurrency

## Dirty Read or Temporary Update Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f31aaef6-d28b-4491-9ccd-08c8249ce7cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed93224b-27ff-4153-8bc5-6a9fa3256181)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dce38738-9a4a-44d5-bc5f-d8150c5832ff)

* Reading someone's dirty written value.

## Phantom Read Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4253d4e-0f66-40da-af00-8bb1d5bcba12)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a96a3174-89fb-49e7-a1a8-9f2bc583750c)

* Wanted to read again and the value was gone.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f445602-9a0c-4646-865a-dff7dcb9481a)

## Unrepeatable Read Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e5f7868-a2c7-4d47-855f-0067a062c25f)

* When **reading** two times, we got the **old value** once and we got the **new value** the next time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6760824c-992b-49ae-86a4-df87a0a4e0a6)

## Lost Update Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed7b0c8d-7fb9-477d-bbed-0e6902174be1)

* **X= 7** is **lost**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52cda366-a354-436f-8b42-34c4647a44b6)

## transaction-concurrency-control-part-ii (23) [27th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72ca1590-fbf8-4379-862b-07312f753aa3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ccc7537-f4d1-4635-86c8-7ce19ffc0b74)

* Some transaction **directly** writes and does nothing else, nor reading or updating anything then it is called as **blind write**.

## Good VS Bad schedule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0ae47c7-a652-445f-a88b-25db8a9d4fa1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0c9414d-ba51-4733-b93a-79856678c7bf)

* Good schedule -> Final result as expected.
* Bad schedule -> Final result not as expected.

## Serial VS Non-Serial Schedule

* Serial -> Sequential System.
* Serial -> First a whole transaction runs then another whole transaction runs. We are not talking about which transaction will run first. Anyone transaction's whole statements are completely run then another transaction's whole statements are completely run.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77882efb-5eeb-438d-8d18-d1bf047b1f68)

* Non-Serial Schedule -> Also called as **concurrent schedule**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea1486fb-1531-403e-ad52-0e11ca0d7615)

* They run in **interleaving** manner. There is no manner/way in which the scheduler runs, anyone of the statements can be run at anytime. We got no idea how the statements are run.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da78cfe3-4293-4cd3-b54f-70216ac1d5b2)

## Serializable Schedule

* It is a schedule which is **concurrent** but it's final result comes in the way of **serial schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f7e49ef-bf26-4d8f-9c63-bba5b02a5df4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44be51e1-3dac-41a9-ad33-8831d1d26946)

* A concurrent schedule which can provide final output as a serial schedule.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24ec8800-f183-4629-b058-8dc6ce920f2a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82cdeb8c-035a-4360-8b64-268d8a3e2742)

* Serial Schedule, **rune T1 then T2**.
* We are getting the **same output** as a **serial schedule**. So, it is working like a **serial schedule**.
* Serial Schedule, **rune T2 then T1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30fef9aa-c29d-4b2b-9f01-d5afdb55cfae)

* So, it is a **serializable schedule**.
* X= 5/10/20
* Y= 5/15
* Cocurrent schedule -> X=20, Y=15.

* X= 5/10/20
* Y= 5/15

* Serial Schedule, T1 then T2 -> X=20, Y=15.

* X= 5/10/15
* Y= 5/15

* Serial Schedule, T2 then T1 -> X=15, Y=15.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b0d7702-5653-4551-bce1-2415840298cd)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98cf1c92-bc03-468c-bb57-bd9663b9ad6d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b646caa-da52-4dd8-b6ee-e3b5d2bedd6e)

* T1 then T2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cf1204f-0779-4a19-b4ec-089eef80ddf3)

* T2 then T1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df3222bc-4b33-45e2-89e7-41d949c8bc83)

* It is **serializable schedule**.
* As the **concurrent schedule's output** is matching with **one of the serial schedule** outputs which is **T1 then T2**. That's why we can say that the **above** is a **serializable schedule**.

* If it(concurrent schedule) matches with **anyone of the serial schedule output** then it is a **serializable schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c2791eb-1865-4184-ab0f-d56f820484ee)

* Serializability -> Method to prove that a **concurrent schedule** is **serializable**.

* **Types**:-

1) Conflict Serializability
2) View Serializability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0760205-cf46-4e1f-adf5-d6169b116785)

## Conflict Serializability

* Find conflicts and then based on it prove that a given schedule is conflict serializable or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ce471c1-3cc4-40ff-be3b-e6f22dfe8c69)

### Conflict

* Two(2) database access statements are conflict statements if and only if all of the following conditions are satisfied.

1) Both statements should be in **2 different transactions**.
2) Both statements should access same data item.
3) One of them should be a **write operation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f271d67c-d3ff-49fb-bacc-b830d4351746)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a1f055b-deb8-4c31-8cde-425c426e647f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53d8493a-4329-40db-9948-9fb5e1d46753)

* There will be **no conflict** between **two read operations**, which is **Read to Read** operation.
* **Conflict** will be between **Read to Write**, **Write to Read** and **Write to Write**. [**IMPORTANT**]

* When **checking for conflicts**, we should be checking the **below/bottom** statements than the **above** statements compared to the **current statement**.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdeb39be-320d-4f81-845b-93537fcb4c54)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cec40dfa-7e1b-4d82-a8c8-4fa2a4c62ca6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/264cfabb-46d5-4bff-b8ba-57f0938f83fb)

* 2 conflicts we got.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8777db71-5bb1-4d31-b3ee-ded82cd7df32)

* 2 conflicts we got.
* R(X) -> W(X)
* R(Z) -> W(Z)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a45ce0b0-d05b-453c-906e-7e2e01c82c4c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8da619db-9b86-43b2-80be-0eaae5c8c132)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d777812d-bf27-4f5f-82c7-fcd6b478b50b)

## Conflict Equivalent Schedules

* **Different schedules** where we have **same type of conflicts** on the same data items, same sequence.
* **Two schedules** having **same conflicts** in the same order. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7996649e-24c1-495a-95fb-f6b8fdde4b4e)

* **S1 and S2** are **Conflict Equivalent Schedules**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddf25749-01e6-4015-ac03-747d4c1d3700)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f642104-3f40-40f3-beb3-6cab9573014b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83041ea2-3c93-41cb-84a3-63f3b7983844)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b08c685d-d736-4e98-88b4-e86b59ff0364)

* Not **Conflict Equivalent schedules**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2713486d-4a7f-4891-98b3-8c3e2975b447)

## Conflict Serializability

* Given schedule 'S' is conflict serializable if it is conflict equivalent to  S' .
* Where S' is a **serial schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a47b5b1-8028-489d-8e69-7182d6a9078f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1587f88-486e-499d-a1a1-70cdfbbd8212)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a947071-0b2d-4ce3-b6a7-060b0a95f4c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c2c14f3-14b3-48ca-98d3-256006ff229a)

* Conflicts.
* Precedence Graph -> Directed Graph.
* Vertices/nodes -> Transactions
* Edges -> Conflicts.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a140167d-831c-44cd-bba3-dc215b7ba60c)

* After drawing the **graph**, check if it has **cycles** or not.
* Cycle -> Started from an edge and followed vertices and was able to return to the starting edge. Then it is a **cycle**.
* If **cycle** present in graph -> Not cconlict serializable

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d7e411b-94f6-46e7-99e3-4fd49a173ff8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1879b915-1f6b-4370-86be-1709fa929bb9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68f803c1-d1e3-4390-9dc0-cc954eb05362)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37d7141d-94aa-4dea-a700-1319f915b7d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53f6492f-0bf3-4626-8ebd-b21c5d46d408)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fa71fdd-81f0-41e7-97cd-3b4dbaf2d3fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ef16b10-3669-4515-b34e-554908dd355c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/564462f1-4ad5-4735-b299-34804a46bf6e)

* As it is **conflict serializable**, we have to tell the **sequence** also.
* Sequence -> T1 -> T3 -> T2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4ac1d03-4d43-4527-a477-40cfc12e5a04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe79d274-3b06-45ba-8fa2-45a71e1ce83b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6f75b15-22c6-4bc0-a308-61efe239713a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4c7b89c-17cd-49dc-8f8c-e0918b23a99f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e941233-f0cb-4dde-aa8f-5347a47f04a6)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b8cf1b2-dd1d-4bd4-9349-267250b44a5f)

* R/W -> Read/ Write
* Number -> Transaction Number
* A, B, C -> Data Item

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dda7fb69-53bf-4644-b124-0ac6bb9abee6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b764bd9-7507-4e76-8090-f2e295197740)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d37bc5c6-f508-49dc-b8e5-8819086cd72c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08a9aff4-0899-4dde-96cf-9e2d2280ecd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/815aa2d7-3952-43e1-b234-a3e1b1609cbf)

* Wherever **commit** comes after that we don't have to check.
* No checking after commit for **conflict**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c76fd755-0023-4422-a1e7-96154a0bd112)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1405bdd4-53b2-4704-a0fb-15660c2cfabc)

* No Cycle, so conflict serializable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25d8e2d3-4458-4344-ba99-8a102011aeb0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82931b72-c86b-4f7f-8a7d-c97e7d7f3ad7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53d8493a-4329-40db-9948-9fb5e1d46753)

* There will be **no conflict** between **two read operations**, which is **Read to Read** operation.
* **Conflict** will be between **Read to Write**, **Write to Read** and **Write to Write**.

## doubt-clearing-session(24) [28th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41eb7dd6-adc4-4568-83dc-f5cd2bb27bbc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9c3bc02-7065-4193-b749-f82dc98b273f)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/764cec61-de73-48e4-9c4e-70a21bd130dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcf68806-4b53-4373-8ba8-db1593d87344)

* Answers. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a690929-c041-4a1a-8f53-f89c2cfc87ca)

* Doubt.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7951f58e-23e0-4d84-897c-4e779e662671)

* Doubt.

## View Serializability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5da40bec-7708-4e51-8510-17acde93c426)

* There are **many good schedules** which we couldn't identify with the help of **conflict serializability**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1994c6f3-39b5-41ac-8040-f0ff4d44dd7c)

### View Equivalence

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0886c0a4-7829-4afe-afbd-78e2ad2774ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30a8f50e-4e61-4c84-a833-15308ea5b7b9)

1) Who is reading first from database

> **T1** is reading the **X** value from **database**.

* **T2** is reading the **written value of 'X' by T1**. It is not reading the original value of **X** from database.
* Who is reading first from database?

> **T1**.

* Who is reading first from database? -> Who is directly reading the value of **X** from the database before any other **transaction** writes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41f5db02-07c8-4bd8-998a-6a568d642538)

* So according to the **first rule**, we will say that **T1 and T2** transactions have read first the value of **X** from the database. It is because **T2** has not used **W(X)** which means that the value of **X** has been **updated** from the original value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa6d303f-1146-48a9-9d14-6e43745a588f)

2) Who is reading from other

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b89170fd-3524-4084-871a-779f33d555fd)

* In this **T2** transaction is the one who is reading from **T1**.
* **T2** reads **X** from **T1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d41fe5d-82b1-4ecc-b694-9457205355a7)

* T1 reads **X** first
* T2 reads **X** from **T1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c549c69c-d55c-4497-bd1e-21ba6ceac8a8)

* Who is reading from from database? 

> T1 and T2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef8ef139-852e-40c0-8019-c9b31b88a1bd)

* Who is reading from other?

> **T3** is reading from **T1** as **T1** has last written to **X** before **T3** tried to read **X**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42798d00-d0ec-49e3-86cc-195fd3c04898)

3) Who is writing last

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51c48214-032a-4846-a383-1c1e54287176)

* **T1** has written last to **X**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24f293da-6226-48de-8e02-cdaf3b94881e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8904395d-f357-429e-a11e-f486fff78edb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77a20523-a1ef-4382-a93a-f89476314760)

* **View Equivalent** -> When both schedules S1, S2 are following same all 3 points for all data items(Above 3 points).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57ebd05b-df18-4e5b-9a7d-a673339dc43b)

* We have to check if they are **view equivalent** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d118a3d3-6eaf-4df5-b933-1bddc746fe84)

* S1:-

1) T1 reads X first from DB

* S2:-

1) T1 and T2 reads X first from DB

> As they are **not the same**. So it is **not view eqquivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/785823cd-6be4-494b-ba54-2996f2aac149)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42b16b71-a204-4b08-a9e9-1ae430c8f073)

* Yes.
* If anyone of the **3 conditions** are violated then it is **not view equivalent**.
* All of the **3 conditions** are to be **matched/satisfied** for it to be **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8abcdcf2-c131-4fd1-befa-a0e9fcb912a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44d9acfd-3d20-44be-9ddf-48d34260ad3a)

1) T2 and T3
2) T1
3) T2

* All of the **3 conditions** are to be **matched/satisfied**.
* So **S1 and S2** are **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/483e574a-4741-48e4-bf22-75c74ec2c4f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4419a35-701f-463c-8376-8ed0068e2c88)

1) T2 and T3
2) T1
3) T2

* All of the **3 conditions** are to be **matched/satisfied**.
* So **S1 and S3** are **view equivalent**.

1) T2 and T3
2) T1
3) T2

* All of the **3 conditions** are to be **matched/satisfied**.
* So **S2 and S3** are **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbf85b04-023a-42b8-b0e5-e2e230d0d47a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/217f8f9d-b407-4198-9992-3284560d7e87)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec660413-79a0-4c0b-a193-510900f70b1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a978a4a-5609-4499-8bbe-9e0a5e1ab65a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2d269be-a89b-4a97-9066-215320b6a9dc)

* Question.
* It is **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd8b7c97-3572-41f1-a815-aca1b62b2e43)

* Yes, we have to check **9 things**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3826def8-45db-4ffa-8fe1-16964d7a293f)

### View Serializability

* A schedule is called as view serializable if it is view equivalent to any serial schedule.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4025f720-38ec-4a64-b64f-2a42b5139706)

* We have to **try multiple times**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f0c3bf6-c926-418f-a4ba-c168cf181518)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10f71e16-2a74-4b65-b9dc-efed9ee2c04f)

* Question.
* **T1 and T3** cannot come after **T4**.
* **T2** should come after **T1**. **T2** has to come **immediately after T1** as there is **W(X)** at **T(3)**.
* Otherwise **T2** will read **X** from **T3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f282c05b-7faa-43fa-aab0-998225cf6a0b)

* We have to make a **serial schedule** of **T3, T1, T2 and T4** and check the **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cb75dfd-1f06-4ed1-a2c9-1422dd338e29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/655eb2f0-1bd2-4b52-8c0f-c49c94632992)

* Yes it is **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c2ce723-073d-446c-a98c-897632506485)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a14d8bc2-e645-47a1-a2fb-63f9009d3df9)

* It is **view serializable**.
* The **given schedule** should be **view equivalent** to **one of the serial schedules**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0f4df80-d46f-4ac2-818a-a31399181c85)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/547369f3-731b-4298-9649-369015bff64c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f554f767-7dcd-41d6-b056-c03b5d96cd2d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8461a487-9760-48a9-a6bc-0133f85125fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b1c8209-1b45-410d-b269-36fbea8a8755)

* We are not able to make a **serial schedule** to check **view equivalent**.
* So it is **not view serializable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cfb4b33-9456-4f64-88c3-74dd97ef5cbe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90979da0-d9be-421e-b763-f24e2f7ca27a)

* After **T3**, **T1** should run because in **Y** data point, **T1** writes last.
* **T2** should come after **T1** as **T2** writes last in **X** data point.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ec0b5c1-b03d-41f4-8d8d-d054c6d5d1fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40db690c-e6ac-4df8-8216-c8b61b439f3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c13a29f0-cac5-4ba5-9e0b-3e5127731158)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8d25e22-6284-4cb3-825c-a33c7881b767)

* HW.

## Role of abort or rollback

* If **abort or rollback** is written in a **transaction** then we will **not include** that **transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd7ab5bb-e9f2-409c-a8cd-9399c09f0ed4)

* Do not include **Transaction, T1** above.
* Do not incloude transactiosn which are having **abort or rollback**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7088d24e-3cc3-4292-b49b-0bd259702f40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f612c5bf-43b6-4d22-8b0a-37b3c4ba68eb)

* In the given example **T2 and T3** are **only checked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca677543-c689-4bd4-b799-fd7f1573c50c)

* Given schedule is **view serializable**.
* Sequence:-
* T2 -> T3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6482a34-eeb1-4616-a0da-f16e7de951bb)

* T3 -> T2 [Wrong]
* It is because **final/last write** is **T3** and not **T2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae140e5b-de68-4657-bdc9-30f6d90b320b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1b0789e-fff7-4d74-93d0-ab801a46bd4f)


### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cfdc6aa-28a1-4304-965c-279d4fb745f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce8d1dcf-1ae0-48d3-9318-d7e658718c7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/534bdc6f-754a-4bfe-a22c-6e4437a5251d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d81d485f-c122-40a0-8c39-3a048bd69e0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69a32ab8-8c7b-4463-974d-9b2d448a447f)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3265ba05-75c9-4146-8eae-e993869d999e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abc24338-1ad0-4214-90b9-0c1b9c79a218)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e81849c-497d-4398-96dc-5754eb87343d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75e9d123-1257-4b5a-bc89-4f320ee1ce00)

* 100 outside is **easier** than **200** outside.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5eae5f6d-bf2e-4483-bf1b-a44614df51b4)

* Better possibility.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a283a1a0-8820-428b-97b9-9f7c250e995b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/880cff2d-1b56-42f0-bb90-b2da0121b085)

## transaction-concurrency-control-part-iii(25) [29th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ec01d9b-0dfd-4c24-a086-d07d28ab4880)

* We have proved that a **given schedule** is **view serializable** then it is a **good schedule**.
* Not all **good schedule** are **view serializable**.
* All **good schedule** are **view serializable**?

> **NO**.

* All **view serializable** are **conflict serializable**?

> **NO**.

* All **conflict serializable** are **view serializable**?

> **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d57f4c81-693f-435e-bd9f-5f89f94401b5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcbd69a8-f46e-4dd6-ad7d-6dd8eab5ab88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/565b9cc2-496d-4961-8549-ef2cd7fa66ac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec46d2d4-0637-4f66-b01d-bab7a2e922ee)

* Not conflict serializable but not view serializable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0461e32-3ed4-495f-9fd9-99d30a8fb9e6)

* No. of nodes **equals to** the **no. of transactiosn**.
* **Runtime complexity** to **find the cycle** -> n + |E|.
* No. of nodes(n)
* No. of edges(E)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f5213c6-64fe-456c-b24c-e00bb92bafa6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6fbf052-922a-48b6-85c7-b85749557de9)

* Conflict Serializability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caf9c8d4-d14c-4d8e-8662-647be32317bf)

* View Serializability
* Time(K)
* * No. of nodes(n)
* **Runtime complexity** to **find the cycle** -> O(k * n!)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0b090ac-5528-4128-8852-935e264a2361)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8bb53c6-a5f6-47f3-855b-0cc9882078f2)

* NP hard problem.

## Recoverability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8359c8df-7b72-421d-863c-978d15ae9cd8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45f554a4-ae05-4719-9e82-508a0301beac)

* Recoverable Schedule -> When no any committed transactions should be rolled back.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d5b785b-7d70-4376-b638-cfa73de0fb5a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d0304f7-d8c2-44a2-86ba-4ba47e33cf06)

* Not recoverable schedule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af3019bb-ccea-45a6-9a8c-577cd79dbefd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4f81809-ccd9-42cb-b99d-396938c283ee)

* There is a **problem** that **database** will not allow.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf2dd7ac-1164-4adb-ad16-f525a7771f84)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3283bb66-28c1-4d73-8eb6-dd2ce05041d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4f890cf-aa85-46fb-af10-f86f014f0f9b)

* If **T1** failed just before **commit**.
* Not **recoverable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34ec7e16-0a32-4d33-a335-0ef9af240f31)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebb6af7e-e2db-4b2b-93e8-f98a0fbb38aa)

* If there is a possibility of **rolling back a committed** transaction, if **yes**, then it is **non-recoverable schedule**.

* It is **recoverable schedule** only when for any case/condition and for any transaction that fails then also we don't have to **rollback any committed** transactions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef9cb669-8a0b-426f-a490-fa5a1eb968fe)

* To make **recoverable schedule**, sequence of commits, should be same as sequence of reading dirty values.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75ec5526-d6d8-4b8e-9b0f-ec0ec3135b00)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b78debc-a8f0-4dff-a3c6-eca477df84fc)

* Recoverable schedule example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8979513e-240b-4545-ba69-3feb1ddf7d50)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b8ee324-f7de-4a84-93b1-864cfc9d30de)

* Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5c63686-2976-4553-adb9-ffa09e5b36cb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8418eb8-8350-407b-b4f1-77ee42f2e52b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67b2ef56-c5c4-4a18-8979-9e15928f3df1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73bc4806-e3e7-4586-b638-6a94051aff57)

* Types.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1b9fceb-c8c7-4522-b30d-2e345cdad6f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ef1b9ae-cdcf-4234-8f25-e1dfdc89556c)

* Cascading Recoverable Rollback
* If **T1** fails just before commit then **T1, T2 and T3** rolled back.
* If **T2** fails just before it's commit, then **T2 and T3** rolled back.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60c24442-c4ba-47c2-9240-2f96b0716d8e)

* Cascadeless Recoverable Rollback
* When a transaction fails only that transaction will be rolled-back.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cfc9156-52a4-41f2-b31a-284b1a84e9a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7dbe427b-9a4f-4b86-b26a-a7d1cc4c22a0)

* Exactly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a8b1334-a34d-4920-9168-6f515da06e93)

* Question.
* Not recoverable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b19cf594-df8e-49ee-829a-c71f88eb77d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41a9538d-d06e-4a7c-a02b-fb65dbf514e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2245843f-eecf-46be-8efe-cb4c7acac8f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73ec973c-810e-43e6-beef-2279b5c5e6dc)

* Question.
* Recoverable schedule.
* Rollback -> Ignore that transaction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/223e3f6c-9904-42e5-95d4-37d1714647fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99d4cf74-a660-4bac-a626-09762ebd2250)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cfc38ab0-8108-403f-b989-81c68d18d812)

* Question
* Cascadeless Recoverable schedule.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8aea5a17-c5e8-4e34-bf57-0dca068066e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f8df508-7e90-4628-a019-3dbf8368c3f5)

* Strict Recoverable Rollback -> The **second transaction** can **dirty read or write** only after the **commit** of the **first transaction**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bcbf96a-8b26-48af-8172-3409c6ee38e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85a58464-2d2c-482d-a4d1-2075899ab490)

* Dirty read and write can be done in another transaction only after commit of first transaction.
* Cascadeless recoverable is also included in **Strict Recoverable Rollback**.
* If it is a **Strict Recoverable schedule** then it is also a **Cascadeless recoverable schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/968ef928-4b8d-405c-8389-fd251ad56855)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8eda0bbe-f628-4aaf-9b02-98f7057d53fd)

* Recoverable schedules.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5853413e-3211-4043-81d4-13b3f78e0655)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34085acf-3875-4f13-b600-c8df5d40c3e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b174d3e5-b193-4fe2-9fd4-3b017b0eb816)

* Yes.
* Recoverability definition -> It is dependent on **dirty read**.
* **Dirty read** -> The upper/ before transaction has **written** and the **next transcation** has **read** the value before it could be **committed**.
* If we include **write on write** then it becomes **strict recoverable schedule**. We will not do **write on write, read on write and write on read**, until the upper transaction is committed.

* In **strict recoverable schedule** -> If the upper/ before transaction has **read** then the **next transcation** can only **read** and cannot **write**. If the upper/ before transaction has **written** then the **next transcation** cannot do either **read** or **write** unless it is **committed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c204cf26-9221-4f31-8ec6-be4cf600c7a5)

* The **conflict serializability** method we had cannot be used **practically** because for **practical** implementation we have to know the **future transaction statements** and the sequence of run of the transactions, which is **not possible**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18c44082-7026-4ed7-9652-8dfec8bfddef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f1bdb34-e292-43d4-a81c-81f4b21705aa)

* **Conflict and view serializability** is not implemented practically.

## Locking Protocols

### Lock

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58acd41e-5294-4467-ad18-2b76bc331c6d)

* Lock
* How many locks?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a3d3cf6-f4ec-4dfb-8e77-b141e799487b)

* Yes.
* We can put **locks** on **different data items** at the **same time**.
* One lock for **each data item**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91feb8c7-ace2-4bcb-b241-6a1d76c870d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d60f685-41e1-48e0-b07c-9128fdb06426)

* It depends on the **operation**.
* If it is **both read-read** then there is **no problem**.
* If on a **database item**, the **transaction** wants to do **only read** then it will take **shared lock**. If the **transaction** wants to do **write/read both** then it will take **exclusive lock**.
* There is **no problem** with **read operation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4de32b82-d89c-44ea-9325-653a19eae7e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aad16528-0465-4a10-acea-93b60d5dbe62)

* Shared Lock -> For only read operations
* Exclusive lock -> For read/write operations both.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d988cd5-0333-4d15-b785-a9f6f05d1866)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6ab92a8-9d74-4343-b901-69390ce7a2f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3aac6c7d-2f0c-425a-8758-b3985ddc11a3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32161434-9925-4856-99c9-04bd0ff3757f)

* Lock_Ex(X) -> It is allowed only when **T1** unlocks **X**.
* **Shared lock** doesn't have **write** permissions. **Shared lock** has to be **updated** to an **exclusive lock** for **write operations**.

* **0** -> Available, Lock not taken.
* **1** -> Not Available, Lock have been taken.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33c05a59-9397-4a09-8f23-0891d936c7cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec37dfa8-ea42-46ef-9990-2d70564523a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd612802-23fb-4984-9369-80985d9093c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9220dcc5-a2b2-4995-9f15-b71de6abd951)

* Lock: Busy waiting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0322e7ee-491c-43ee-bfce-1452efd2fbaf)

* **Busy waiting** for **exclusive lock** on **X**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34baeeaf-6356-48ca-b529-a2a6379983df)

* We **blocked** ourselves. When the **lock** is available, we will be informed and we can now take **lock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34e3588b-e0b8-4e0d-bbdd-6010f14e15ad)

### Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af2fad11-8b54-41a0-830d-e794c416cae7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86694ac9-fcaf-482b-8e7c-edda1a502651)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/337dac21-7ead-4414-a7fe-2efcf64ece8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68b1e9a1-1e7b-4655-8e0c-95c94565db83)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/752d6b5f-0306-440a-b16a-152dbddbc7d2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b7fa497-fa89-41a7-a2b8-932125888059)

## transaction-concurrency-control-part-iv(26) [30th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/544ca703-5558-4867-8c2d-7b980a60307e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8ee8ed8-9284-46ac-bf1b-792580ad4c59)

* We didn't get **exclusive lock** because there was already **shared lock** taken on **X** by **T1**.
* **T2** is in **busy waiting** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/811c733d-02ef-4743-afc7-4faee06c9ccd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/531292bc-a8f6-4dbd-abcf-540130c498ad)

* After the **shared lock** taken on **X** by **T1** was removed then the **exclusive lock** is taken on **X** by **T2**.
* Busy waiting -> The transaction will run continuously and it will try to acquire the **lock**. It will not be able to **acquire the lock** and it will keep trying again and again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d14e71fb-25c6-44da-99e8-5ae9fcbcbc21)

* The solution of **busy waiting** -> Whichever transaction wants to take a **lock** which is **not available** then the transaction is **blocked** and it falls under **blocked transactions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd2a0a85-eaa4-47cc-85ac-adf4cb8a7bb4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38468964-9f4f-49e4-aea4-2dce7fbc64b9)

* After sometime, **T1** has unlocked the lock taken on **X**. As soon as it(X) is available, **T2** transaction is **unblocked**. **T2** transaction has come back and the two statements of **T2** are run.
* **T2** transaction didn't do any **busy waiting**.
* **Advantage of removing busy waiting** -> The unnecessary usage of resources of DBMS has been **saved**.
* Time is **saved**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91ca9aef-b517-4255-bfc5-2966c06945e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d538b38d-38cf-4343-855a-5886b2b6392c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3150d46a-c596-4bd0-9796-9cde14130ea4)

* On the **same data item**, we can put **multiple shared locks**?

> **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4790672d-bf5f-4572-9abb-526e64f50a30)

* **W(X)** on **T2** tried to take **exclusive lock** on **X** but it shouldn't take because **T1** has already taken a **shared lock** on **X**.
* So, the **transaction, T2** is in **blocked state**.
* **T3** has **R(X)** and it tries to take **shared lock** on **X**. **T3** is successful in taking **shared lock** on **X** even though there is a **shared lock** already taken by **T1** on **X**.
* It is because **shared locks** can be taken on the **same data item**, multiple times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/658d4b49-3501-4ac5-be58-223e4068611e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7435c96c-6a03-43a0-9a0d-27fec87c8c81)

* **T1** has released it's **shared lock** on **X** and because of that **T3's shared lock on X** is also gone. Now, **T2** is **unblocked** and **T2** can take **exclusive lock** on **X** now.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65c9a98b-cd90-4ccf-a927-36574389a7f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13e29cfe-115c-413a-8744-43dea4af987c)

* So now, **T3** has **shared lock** on **X** and **T2** has **exclusive lock** on **X**.
* This is a **problem**.
* If **two shared locks** are taken on the **same data item** then **no. of unlocks** should be the **same** as the **no. of locks** taken. As in here, **two shared locks**, so **two unlocks** should be there before **T2** can take **exclusive lock** on **X**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e654e68d-f1b3-4f74-bdaa-bf51185a8631)

* When the **count = 0** then only the **lock** should be actually **unlocked**. After that only **T2** transaction should be **unlocked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf1105cc-2a40-4f25-9df5-45e43b1f4846)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7125b61-8136-4fe8-8fb2-9af0c5a37f56)

* Blocked transactions is unblocked only when **count** becomes **zero(0)** for **multiple shared locks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ce0935b-acfc-43b0-bd0e-15816d5ecd98)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a5be5ce-0774-403d-9bf4-b30ceff2fbd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d9e5428-8992-4925-92cf-024bd25ef946)

* Here, when a new transactions keep asking for shared locks on **X**, then **T2** may **starve**.
* There is a **solution** for **starvation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eaff4c4d-8682-4937-b4bf-ef954fb694f0)

* When **T4** tries to take **shared lock** on **X**, then there is a **condition check** that happens. If no any blocked transaction on **X** then allowed otherwise blocked.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ad046e0-f961-4cb1-9879-75fb82677f54)

* We are checking that there is any transactions that are in **blocked state** due to **exclusive locks** that are taken on **X**. If so then **shared lock** cannot be taken and the transaction trying to take **shared lock** will be **blocked** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87e98f09-8d40-4e6f-8ac2-c5afaf1b8001)

* If **T1** transaction has **unlocked** the **shared lock** taken on **X**. Then there are **two ways/cases** which can be taken. Either **one of the blocked transactions** will be **unlocked** in **FIFO order** or **all of the blocked** transactions are **unlocked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20fe630c-801b-4470-b114-4c5f2b379d34)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f410fb49-9d68-4d1b-8526-f2a3733e7772)

* Upgrade -> The **shared lock** taken **X** and now that **shared lock** has been **upgraded** to **exclusive locks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f89cf19-63ef-4309-9135-6644c3bace63)

* Downgrade.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3870a664-dfcd-46b0-802a-0f45ed14245b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c8af220-bd00-4a3b-884b-0b661c2451ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8283dc64-36e0-4ed5-85a1-43cbc1c90b74)

* Rules to **acquiring the lock**:-

### Locking protocols

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51b19253-5d92-4124-b008-f0d30216c7c5)

* 2-phase locking protocol(2PL)

1) Basic 2PL
2) Strict 2PL
3) Rigorous 2PL
4) Conservative 2PL

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f82f36a5-0539-41ab-95ef-e69fad894a1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bf87ed7-5873-4f8d-9d54-dcb26c3dcc34)

* Basic 2-phase locking protocol

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/200ca247-cfc7-4828-84e2-bda4d37d3d03)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3071972-178b-49f7-b446-0d69e2b7a918)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cdf18b8-4030-42d0-a971-4171f791aa50)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/801252dc-adc7-46ba-aa26-b94e7e7ef5b5)

* **Correct** according to **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61f4371d-1b8d-473a-8539-c8c5bf075155)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33390eb1-f746-47c6-a262-4af08e1d0e9d)

* **lock(z)** not allowed after **unlock**.
* We can take **locks** at anytime but after **unlock** we cannot take **any locks**. This is the **only condition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49f3a364-c9f9-4c6e-8cf4-dfe78a2bc0b1)

* **Correct** according to **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/679edca6-8b1f-41ad-bf44-3104d961ba70)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a990ca8-2343-413c-b4a8-f5d274bf7844)

* **Upgrade** happens within the **same transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0d4f80a-c831-4690-a4ec-80c26c18cf15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1979a7f-2749-4861-bb90-fc396918abeb)

* The **given schedule** didn't run as it is because of **basic 2PL**, the style of the run has been changed.
* So, we will say that the **given schedule** is not allowed under **2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8c4d829-e031-4a94-90a8-b30434b7eb97)

* Given schedule is not allowed ubder basic 2PL because it does not run same as given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac56739c-d471-49c7-86e5-8873cc9e42b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1493af6c-f27c-4f1d-b86f-f49cf13ffb88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2dff856-f1e2-47b0-9285-1dea585eae6a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/400effd1-36cd-4a70-890e-9e54d4e285c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3500d7c0-1897-493e-8cd6-7ba0a370b630)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19607c40-8a8a-4648-9fc3-81a36d9cc567)

* Every schedule which is allowed under basic 2PL, is conflict serializable also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fecdfb39-7e68-4ef6-9891-243a371fe3a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f5bf23c-e817-4a78-a4a4-7a28eb035451)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76a9eaee-e139-4652-a9b6-065f1483b7a3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0b53a5c-997e-4f0b-9532-4c5bb357494d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/625f071e-c843-41d6-a245-79bccde4a195)

* Not serializable.

## Basic 2 Phase Locking Protocol

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/279246e3-865c-428e-b0b2-83b86661f87c)

* Whenever needed **write 'lock** and once we have **written 'unlock'** then we cannot **write 'lock'** again.
* We will acquire all the locks at the start and when we start releasing the locks then we will only release the locks and nothing else, we cannot take anymore **locks** after an **unlock** is done.

* After **unlock**, we cannot take any **locks**. It is for **any data-item**.
* Take all of the **locks possible** at once and when we started **unlocking** then we will only do **unlocking**, no more taking **locks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6bc3935-47e5-4453-9fde-eee99fc96396)

* Once we start **unlocks**, we cannot do **any locks** on **any data-items**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d56e8aa1-a304-4bb1-8aa7-2af50ad326ee)

* This is why it is called as **2 phase locking protocol**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d139252-3b01-41b9-90c0-f9fe365a1acb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cae0086c-256c-4936-8f13-1258bc4e5341)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79c1525b-7a9e-4c34-8bbc-d8c232746e17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2b2d249-9325-4801-9195-1f666652f57e)

* If we did **unlock(X)** before **W(Y)** then also it would be **correct according to Basic 2PL** because we are not accessing **X** anymore after that. So no problem. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c712ebb4-d96e-4e96-b3ba-351c99d6a78a)

* **lock(Z)** is not allowed after **unlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ee226c3-bb5b-4b7c-9152-58f9312ababe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/422b4317-00d5-4cfa-9405-0bb4162c873d)

* This will work **no problem**. **T2** will run after **T1** has unlocked **X**.
* **T2** was put in **blocked state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98341497-322e-45c7-8e83-b8218176fe36)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91fe47db-2c5c-4eeb-99af-7da3c079d3ae)

* **Upgrade** happens within the **same transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b442ad2-c8c5-42cb-ae3f-bd523fef64d6)

* In the **given schedule**, when we applied **basic 2PL protocol**, the schedule didn't **run as it is**. It run like **below(Run actually like**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dad83f03-0f32-4a6e-962f-464a9f35e9bc)

* In the **given schedule**, it didn't **run as it is** because when we applied **basic 2PL protocol**, the style of it's run **is changed**, then we will say that the **given schedule** is not allowed under **basic 2PL protocol**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f81f80ea-67ff-466f-bf20-cc2089741cf8)

* Given schedule is not allowed under basic 2PL because it does not run same as given.
* The **sequence of run** was **changed** due to application of **basic 2PL protocol**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d45d276-90db-49d7-9af4-e5045084b7e0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/281c92f3-5ea8-4d35-a5ea-81ca25a600fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eff14e35-1bae-4b60-b252-9792bd29527a)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9c13ee2-34df-4508-9e2d-4c19dfc9f1a4)

* Not Allowed under **2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32c3099d-8ac1-4587-a514-a4c00987b6ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81b2c825-ffed-4c94-bbfe-d3f653c1e26a)

* In **one transaction**, we cannot take **lock** after an **unlock**. [**IMPORTANT**]
* But we can take **lock** in the **other transaction** though.
* We **unlock(X)** in **T1** and we did **lock_Ex(X)** which was in **T2** transaction. So we are taking **lock** after an **unlock(X)** but in a **different transaction(T2)**, so **no problem** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d8b2e2e-500c-4284-b33d-68d1e6b933a6)

* **Unlock** keh badh **lock** cannot happen in the **same/single transaction**. **Single transaction** will not do that.
* It is **possible** in **different transactions**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d58883a9-3767-4a80-ad7a-798f6aa81dc5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b112fba0-f3f2-44f9-bd72-32bb13c174d0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a19bfb78-f0af-4130-8a15-cff2b10fc250)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/913744fd-b5a6-45e0-b33a-c7d3a8891bc0)

* Allowed under **2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e521c63-bc6a-4eb7-a777-1c41cff278fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5450f5e5-db19-4222-b745-6b7d64e478c1)

* Every schedule which is allowed under **basic 2PL**, is **conflict serializable** also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad4c39dd-cfaf-4d21-9d93-25e4d3ba32bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44c085a6-d7cb-4b76-9019-6c86bf9f618c)

## transaction-concurrency-control-part-v (27) [1st Aug 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d14cb68c-ca84-4255-a623-ae941bda355d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d5b36f4-11bf-4fde-a955-a15505a69b43)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfbcc483-5789-4476-b8f9-47fe4cf4e82a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0267cf45-85c2-43eb-bee1-d13498705e17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a63ac1f-af46-423c-b4d3-b6745d9f5d76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c429e055-6808-4093-b785-5ea266827349)

* Won't be allowed under **Basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ae31491-7c8d-43e4-8c38-6d341fdd6d8c)

* Not allowed in **Basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb500419-7725-4dd5-b9fb-958b2f09c300)

* We will run **unlock(X) and unlock(Y)** at **10:15AM** so that we can do **lock(Y)** in **T3**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/030b18c2-9de7-48ea-8d0f-c0e60e3ef77c)

* Not allowed in **Basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d78ea22-6de6-4b9b-891d-0c78795d4007)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d1ccfa7-b8a4-4444-8e69-fb2be3e250ed)

* Won't be allowed under **basic 2PL**.
* **T1's released lock** can be used by **T2**, **YES**.
* **T2's released lock** can be used by **T3**, **YES**.
* **T3's released lock** can be used by **T1**, **NO**, it is not possible.
* It is because when **T3 releases it's lock**, then **T1** cannot take **lock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19989d43-aa7a-4fea-92c4-f7a12d68ebaf)

* Yes.
* The lock **T1** has taken on and **T2** wants to use that then after **T1's unlock**, **T2** can use it.
* After **T2's unlock***, **T3** can use it.
* **T3's released lock** cannot be used by **T1 and T2** because we cannot do **locking later** after **unlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11f29fdf-4f87-4201-8908-08b0470fd970)

* So there is **no chance of 'cycle'** when we apply **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69b35491-3c33-4b5d-9833-7c52f3c6d2fa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae88f4b4-f0a3-40d3-bae5-432169fdcd9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/231eb04b-ea3f-48e7-9180-326d12b81a78)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/538e1122-82f6-44f0-a550-dead04905ebf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f77667b6-b6a7-49df-a6d1-adde4729946d)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09135e9b-1c78-4d7f-ae74-193f38d66375)

* **lock(Z)** in **T3** is **not working** because there is already a **lock(Z)** in **T1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0295e2cf-3be2-4e45-b386-b6ce919764c8)

* We are talking about **conflicting locks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6145819-074a-4eb1-a0a2-0e8a0a86008e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2406ecc4-d31d-49ea-8cd7-e980dea177fe)

* There is **no cycle** of **conflict** and as there is **no cycle**, so it is **conflict serializable**.
* If allowed in **basic 2PL** then it is  **conflict serializable** as well. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bab06c38-97c5-48da-94d0-0cd479c34f28)

* Yes.
* We cannot implement **conflict serializability** practically.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3988416-34b7-4813-bf39-4bef57d9c9b8)

* Question
* Not allowed under **2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9802808-2240-4134-8b3e-368231fe1c8e)

* **Deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edd0fced-2820-4bc7-8eba-8d6cd6e38b11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/751e4dae-d62e-4bec-8021-f3da50d8d097)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccdb7dc6-22a6-4bc8-a309-b212fcb0d653)

* Starvation -> Indefinite waiting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b86cfc8-9d9e-4e4c-bc54-3b54878bb423)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4414b212-4e4d-47d6-b3a2-70cbaa73a777)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5619bc8b-2ece-4c74-be31-832eebbeb7b6)

* **Strict schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d64725d2-8467-4558-a925-62d57c53cf03)

* **Strict 2PL** says to follow **Strict schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/968cb692-a6f6-46ba-981a-920e7959cbd6)

* **Commit** is **important** here.
* If the **upper one** has done **write operation** then we will do **commit** of it and after that only the **lower one** can do **either read or write** operation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8afb425c-4592-46d3-aae7-f3a1f30cc339)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84a4d206-4c7a-4e88-a84a-cbf6ffcc3374)

* After **every write** operation, there should be a **commit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e56d23b6-d457-4458-b840-4b58e52afc65)

 * Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f624a352-d2bb-457c-98c7-b5249265bbb9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84752c85-76e3-481a-8564-d80de730c5f5)

* Strict 2PL.
* Exclusive lock should not be release until **commit**.
* At the **end of the transaction** when the **commit is do** then we will release the **exclusive lock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0d85e98-379b-4b03-9391-d9688e9b8a27)

* **Strict and basic** 2PL are **different**.
* **Before commit**, we cannot **unlock the exclusive lock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f548c1f3-d0fe-41d3-b0cd-bccf41509da7)

* We can **unlock**, **shared locks** anytime.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d302c97-8349-44f7-8236-1fa93f3ab39c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c4f88ef-d351-4cfe-a93b-2e76dc1244ca)

* Strict 2PL rules not broken.
* This is allowed under **Strict 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8af10561-cf12-4689-80e6-411ae7ad3ad3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29ec0cf5-1682-42d7-9b1d-d80e566bd750)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b7a1a64-15dd-4d0d-9239-a37d7e2b89e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87e3a9ba-e3f1-4d1c-be8a-7b22b9cc3cb0)

* Question.
* This is **not allowed** under **Strict 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5cdc52ae-5fb7-4f45-b4df-96b948bc0d24)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb188dae-b157-4f1e-a070-a82ee10c58a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f27a6db3-c198-4d20-9a5b-243bc9ca4922)

* So, **Strict 2PL** only allows **Strict schedules**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d494707c-9e83-4290-919f-e3d15283dd56)

* Question.
* This is **not allowed** under **Strict 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4192de78-e27c-4fec-b93d-6f245886cd7e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/305b957c-c9d8-4bed-9efa-422ccbbe87f7)

* Question.
* Wherever we want, we can **write commit** statement, here. 
* This is **not allowed** under **Strict 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d20e039d-ff74-45fb-bdc3-4313e16af440)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f27491c-c2cc-483c-8ac4-9dfe083198a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/866545dd-e007-472c-9103-6c30edd32700)

* We are getting **deadlock** here as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45b5cd31-5fda-41ef-bcab-236441582ce4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffdc5249-3454-408a-ae7d-0448ae04b00b)

* Commit happens at the **last/end**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75d71d2b-71d2-44a2-a9ce-359fd81084cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7e0697e-8099-4e67-8c82-61b79b24f049)

* We cannot write commit in the **middle**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d0fb515-c294-42be-a35a-0967b73d8bb0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1eb3b50d-4067-4852-9cbd-2ebffbf26fc3)

* Committed -> Finished/Terminated.
* Wapas bhejna ho to **new transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae6e10a9-5a3e-419d-90c4-2f366e811790)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2babf039-4e79-4c1d-a1f6-7c93e611ccd8)

* Rigorous 2PL
* Every lock(Shared and Exclusive) should be released after commit. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/059027f7-a3e2-433c-92e3-998f54f880f6)

* Yes, **Strict 2PL** had **shared problems**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb930adb-2852-44a1-ad0f-dd41865aad0d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d0de2dc-1804-43a2-87bf-7068968e4ddd)

* In **rigorous 2PL** we can also get **deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6b04c17-56ef-4652-86e2-e0cdcd094cb0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fccac95a-9a26-47ee-936d-6c675063b396)

* Question.
* Not allowed under **rigorous 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67e7d205-ac47-46a7-8c4e-bb37eef7401f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/344479f5-9c4a-4e42-af56-7f666712d92f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a443960-76df-4618-8c70-7911b0e9783a)

* Question.
* It is allowed under **basic 2PL**.
* There is **no relation** of **unlock and commit** in **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f05cb35-1566-41d2-a363-6c60a8a64d4c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c551a221-938d-4c11-a93d-754ac70175e3)

* Recoverability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc9aaf24-9e6c-4bcd-bb7c-eb6e71895db3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba3fcff7-c730-49ec-a21a-2d3c605ef840)

* We will have **Recoverability** problem.
* **Basic 2PL** which allows have to be **recoverable**, which is **not the case**.
* **Basic 2PL** does not ensure **Recoverability**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1f7b11a-0f97-4ec2-8828-5b7af0237120)

* **Strict and Rigorous 2PL** don't have **dirty read**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31c62e6b-b712-457e-8a20-86c753336a32)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0951024e-4124-4249-ae6e-4dc5871ab419)

2) Even if the schedule is **recoverable**, it does not mean that the schedule is **cascadeles**. **Cascading** can happen as there is **no trust(no bharosa)** of **commit**. We don't know where **commit** is done(no bharosa).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/377b426c-3f0d-4dc8-baa4-fc5165cd28a5)

* **Basic 2PL** allows **dirty read**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/724bcada-36c2-4d1f-8325-3423b9542a94)

* Allowed under **Basic 2PL**.
* It is **recoverable** but it is not ***cascadeless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/776e47fb-de73-4ba3-830c-18d633825517)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b9abf24-802e-4590-8aad-5f840a279756)

* It will be **cascaded recoverable**. **T1** transaction will take **T2** transaction with it as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9ded71e-545a-429a-85f3-e5fa80139204)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b0bfd5f-405b-4bd8-af01-93a6ef2d422a)

* If **T1** transaction **failed** then **T2** transaction is also **rolled back**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e5d7b1f-177c-470f-b102-28c98a257713)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ad7dba1-4d2b-4e0a-9c40-01c7ac21476e)

* **Basic 2PL** allows **non-recoverable** schedules also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef702ffe-dba2-41bd-8d3b-0697c6a2ee56)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a950985-6435-47dd-baca-d3f2af35a0e3)

3) It will be **cascadeless** because we are doing **commit** first then **unlock** and after that someother schedule accesses that **data-item**. **Cascading** cannot happen and on top of that it will be **recoverable** as well. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44ca78c2-7f86-4fdf-ba9b-d09bc41a6124)

* Yes, rec -> recoverable

4) All of them, **basic, strict and rigorous 2PL** may suffer from **deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d0dd1ff-af6b-4eaf-925c-d64886f62266)

* Conservative or static 2PL.
* Lock all the items before the transaction begins execution by predeclaring it's read-set and write-set.
* It will **declare** it's **read and write sets**.
* Read set will have the **shared locks**.
* Write set will have the **exclusive locks**.
* **After all of the locks** are given then only it will go forward.
* **unless all of the locks** are provided/available till then it will **wait**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5b8bc36-3ea9-4a2a-9eaf-2f2485bdab25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57e0e14d-0b95-4587-9f7f-5470e68af874)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e77ad05-7941-4e2f-98f9-f2b6b45d2ac4)

* **No deadlock** condition here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b081907-c9f4-452b-ae24-094d5b258f19)

* There will be **heavy starvation** situation here.
* **Hold and wait** situation should be avoided here.
* **Either hold all of the locks** or **wait for all of the locks**.
* It is an **advanced** version of **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01ee9afa-a130-4af7-91a3-e898fb98e2c0)

* 2PL.
* A schedule is allowed in **rigorous 2PL** then that schedule is allowed in **strict, basic 2PL and it is conflict serializable** as well.
* A schedule is allowed in **strict 2PL** then that schedule is allowed in **basic 2PL and it is conflict serializable** as well but we **don't know or not confirmed** if that schedule is **rigorous 2PL** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1eff254-6225-43f9-a4ca-a8f955890b64)

* Example of **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09b35270-562e-44fe-b721-5168dbd53d0d)

* Question.
* It is **not allowed** under **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c72b3537-e385-410d-9089-3135fb277876)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00cea820-e39b-4b04-895e-011f351f94b0)

* It is **conflict serializable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2c65db2-3ffd-4c2f-8230-b4f21dc70705)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97f1a4b0-55fd-4eac-8cf4-4fed42d4b416)

* Sequence.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c86cbf3-c96d-41e0-bc1c-aadfb41c7900)

## Timestamp

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/024b83a2-5cbe-4298-b02c-851214b80ddd)

* **DOB(Date Of Birth)** of the transaction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4364de15-e3cc-4378-8dc7-503eb391e114)

* At what time transaction started.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4a20765-9feb-485d-bf93-363260870c80)

* **1999** is **greater**.
* According to **birthday**, the **timestamp value** of the **older transaction** should be **bigger or smaller**?

> **smaller**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a483375-ead4-4ed0-8aa8-b1d7ac0bcab8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a191012a-641e-42e7-a9b0-8e42dc145830)

* Assume there are 2 transactions T1 and T2 and their ressperective timestamps TS(T1) and Ts(T2)
* TimeStamp(TS)
* So, **T1** is **older transaction** and **T2** is **younger transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32585ca6-0ea9-43b2-a88f-5af6c8eb823c)

* Deadlock Prevention.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f408c2d6-9d54-460e-a91a-15e3a757c387)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5fcec889-d95a-4a8c-9b2f-deed44229149)

## doubt-clearing-session (28) [2nd Aug 2023]
