## ER diagram to relational model conversion (14) [5th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/588dd203-485a-4ad0-a68a-9ece355a61b5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eed3c7dc-f9ce-490c-a076-bff8cea4bbaf)

* We are doing **union**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c73b4dc0-8574-43aa-9ed1-7ea126be12a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8d45486-2e80-4acd-9f64-70df4dacb6c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88feacb7-f567-4879-ba25-bdda608157f7)

* Question
* AB+ -> A, B, D, F, E, C, G
* GB+ -> G, B, A, D, F, E, C
* AC+ -> A, C, B, D, F, E, G
* GC+
* AE+ -> A, E, C, B, D, F, G
* GE+
* These are the **6** keys.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eeffda2c-2860-47b4-a541-9036e6e42765)

* AD+ -> A, D, E, G [Not possible, incomplete]
* AB+ -> A, B, C, D, E, G
* AC+ -> A, C, B, D, E, G
* BC+ -> B, C, A, D, E, G

* These **three** are the **keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/892e9ee3-bba3-4ea0-b0e5-39954d9ef2be)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f888410-7b86-4558-b279-2a0e27a31333)

* E+ -> C
* BC -> B, C, D, A,
* AEG+ -> A, E, G, C, B, D
* DEG+
* BEG+
* So, **three** keys are coming.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17f9d2da-dbec-4857-bd60-9972950d61e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a9537c8-cf65-464b-83db-1837abf42098)

* **BCEG** not needed as we can get **C** from **E**
* So, **BEG** will work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f1fb6b7-3687-47ac-8420-1d67c59a4d0e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a046663-cb01-4856-aa61-767bd1048894)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e4110dc-5244-4a6b-aba1-a7b4bb5333ad)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9af51c66-3578-4af1-87c0-327e131e8d73)

* Example.
* On the right side is the **minimal set**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44f81a58-2617-41b1-9300-97b85dee6bc5)

* Minimal Set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ba430c1-2bd3-4263-b73c-04bab8e42b1b)

* Exactly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abad736e-9e5d-44f4-aaa2-224e5bd551b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28e59cb4-2352-4166-a1c1-a69632d54612)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f731738-a949-43f1-bdee-aed14b627d9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f5ac4bc-60da-45b6-b4b6-ff99562ddfd8)

## Normalization

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efe4639d-ebf1-46b1-b0a6-18f37f5d3e7d)

* Definition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc223766-5044-4d3c-88ae-922bdc1dfc1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47f11410-0553-4e15-ad2d-45c1375ceed0)

* Normalizing the table **R** and decomposing table **R** into **R1** and **R2** table.
* If we didn't allow **NULL** value in **P-Id, P_Name and P_Price**. They should be **Not NULL**.
* There is an **anomaly** due to **insertion** into the table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1be49c55-6e11-4286-a89e-60dd1fc684f5)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b5d4868-cd20-4958-ae24-63d3ce1f5fb7)

* Insert anomaly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af1b0614-eff6-482e-9b74-216c8d77cecb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7deefb3d-ffb2-414c-9c30-bb8939525add)

* It is called as **insert anomaly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e8388c1-8264-4dc9-b878-e646beb655d4)

* **Update anomaly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edeada7d-bf5f-4c43-b309-965c03043f8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9919299e-9524-4d9e-b7d2-35b09a01821f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/165c767e-58ed-4139-96a7-bb5f22bbcd95)

*  Assuming product jeans price has been changed to 2500.
*  Rencho purchased shirt in 2200 but now my DB shows in 2500.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3cc0cf5-90a5-4084-b56f-974176eb40a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6a0307f-8d0c-417d-a751-b76d2d3752f5)

* Delete product jeans
* Deletion Anomaly
* Customer with id **c3** also deleted.
* To **remove** the above anomalies we use **normalization**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/577524d5-c6f5-421b-b396-ceccf29ffd4f)

* Normalization.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09345e6c-4be5-40c7-9639-f54711df384a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62da465b-a205-460f-a479-6fd0fe2ae547)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01f2c9ec-7398-4887-88b3-1f3edd3605ad)

* GATE syllabus till **BCNF**. [**VERY IMPORTANT**]
* NFs -> 1NF, 2NF, 3NF, BCNF.
* For the relation to be in **1NF** -> Remove Repeating Groups.
* For the relation to be in **2NF** -> Remove Partial Dependency.
* For the relation to be in **3NF** -> Remove Transitive Dependency.
* For the relation to be in **BCNF** -> Remove overlapping Candidate key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f81fd385-26f3-477b-a364-c563fc59afab)

* Till **BCNF** is **needed**.
* Remove multi-valued attributes.

## 1NF

* A relation R is said to be in 1NF if there is no any multi-valued attribute in R.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/941e56d7-e86f-4a0c-bf74-5e3e3bbaef14)

* Phono is **multivalued** attribute
* Eliminate **multivalued** attribute

1) Increase rows.
2) Increase columns.
3) Decompose relation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fdf3be4-c0c1-40f9-96ad-3cc540f5c6ca)

### 1. Increase rows.

* Problems:-

1) **Rno** column is no longer a primary key
2) Too mcuh of redundent information.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e370bad9-09c3-4468-ba04-fff1764719ca)

### 2. Increase columns.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9b43b63-a0ca-401a-9e53-921fc0734e02)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b5cce74-ac2e-46be-be42-5cccb1e9bb39)

* This works perfectly fine.

* Problems:-

* Wastage of space if multiple NULL values in phno 2.
* Wastage may increase if one row has 3 phone umbers.

### 3. Decompose relation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/306aebdb-3839-4653-b0e1-bb808e4a4434)

* We removed the **Rno** column.
* Keep multi-valued attribute along with **primary key** of table in another table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be5a0f96-8b51-4ce4-95e4-bbb40f6d619f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a41c3bef-ee74-476d-bfe5-80cea2e3a499)

* This is also a **good solution**.

## 2NF

* If we have to normalize the DB table in **2NF** form, then they should be **normalized** in **1NF** form.
* If we have to perform **2NF** form then the DB table should in **1NF** form already.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6407752d-e1f7-43ad-96b1-7f68a4fdbee0)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9a2d474-266f-4951-b632-9b0a5aa13de6)

* No any non-prime or attribute.
* There is **no any** non-prime attributes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1db0ee96-7874-4566-82c1-b440d22cf8b7)

* Partial Dependency.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acb597d3-ef1a-495b-a5ea-6058a9ddd8e6)

* Prime and non-prime attribute.
* if key is a **composite** key and from the **sub-part**. If the **sub-part** derives some **non-prime** attribute.
* This is called as **Partial Dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7cb85b7-18c5-40c9-9c13-7b039a6cb904)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee49af49-9e99-45e9-ab13-574b1fe0dd23)

* If **A** is a **composite** row then **no. of possibilities of partial dependency**..

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab55e37c-5475-4125-8a7b-6769d7eac41e)

* Ofcourse.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33d74be4-f1b6-4ad7-93a6-2d72faf2444d)

* Example
* Candidate Key is **AB**.
* Prime attribute -> A, B
* Non-prime attribute -> C, D
* If **table's data** is not given, then we can assume that the **table** is in **1NF** form.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4860d8c8-0ce3-493c-a251-b93d53678a8b)

* For the table to be in **2NF** form, there are **two** conditions:-

1) Table should be in **1NF**.
2) No partial dependency. 

* **A or B** alone can derive any **non-prime** dependency?

> **Yes**, **B** derives **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07cb7034-8aef-4891-8540-725aa7cbc389)

* It is a **partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/610d3b48-e781-4006-8811-5dcc987a41dc)

* Example.
* Given relation **R** is not in **2NF**.
* We have to get it to **2NF**.
* To get the relation in **2NF**, we have to **decompose** the relation.
* To bring **R** in 2NF, decompose **R** into **two** relations such that we remove **partially dependent** attribute from **R** and keep it in another relation. [**IMPORTANT**]
* We have to keep the **partially dependent** attribute with whom it is **dependent** on. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c09717b-19f4-4305-9ee4-fd9c7afde711)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee277bb6-654f-4392-91c5-2eab4ccddd9c)

* Not with the **key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17833227-5d03-495c-8dec-ff53cb65e81a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72dc1d8b-9609-438d-ac21-151d22f25dbe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27c07db1-c6d9-4d67-a4a3-25a7f8710c55)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e10a702-41d5-45e5-8e36-4593310b5343)

* Key in **R1** table is **AB**.
* Key in **R2** table is **B**.
* So, there is **no partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a04eb922-f8da-4ff7-bd22-bed298e4a8b7)

* Both **R1 and R2** are in **2NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27cab1ab-20f5-4c31-a3d5-5ad4aa9204fc)

* Will see later.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec0e8c74-b6ef-471e-914f-75dd5b62fafc)

* Very important.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d180b7eb-b5a9-4a7d-b5a9-93d093000e0b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca7d0fd5-6180-4ca9-959d-1a673a47bdfb)

* Partial dependency

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf00fc77-358c-4ded-8b72-d71f4965e8c7)

* Question.
* Candidate Key -> AB
* Prime attributes -> A, B
* Non-prime attributes -> C, D, E
* We have **two partial dependencies**.
* A -> D and B -> E
* We have to keep **each partial dependency** in separate tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4667cdfc-d8c9-499f-8fae-4adf724e88ca)

* Solution [**IMPORTANT**]
* Now, **R, R1 and R2** are in **2NF**, **partial dependencies** are removed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bcb90d3-0d33-44d2-8537-31699eeeb8c1)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/035c330c-b837-4fd8-bf3f-b8a5093bdeec)

* Option **C and D**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5888d5e8-d273-4f0c-a83e-031ef39daa60)

## Questions on relational modeling fd normalization (15) [7th July 2023]

* Normalization -> To Remove **redundancy**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a2b7b8e-69a5-4963-ac8d-6c03334bcd7e)

* **AB** is a **candidate key**.
* **A and B** are **prime attributes** and **C** is **non-prime** attribute.
* **B -> C** is **possible**.
* **C -> B** is **not possible**.
* We have a **partial dependency**, as **AB** is a **candidate key** and **B -> C** is **possible**.
* So, the **partial dependency** is **B -> C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7180af91-8f02-43bd-8bba-3e0455458d1b)

* In the **R2** table, why write the **same values** multiple times, write it **once**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba903be7-8d69-49e9-a0c2-e54ef7ddc745)

* Reduced or reducing **redundancy** of **partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91f53274-0199-4442-b299-8546348dae72)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/155e4210-f420-41e7-8e1d-568adc2dc1e2)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45b49d67-c574-4bce-b856-1bfa1188e1cd)

* **D -> E** is the **partial dependency** because **D** is a **prime attribute** and **E** is a **non-prime attribute**.
* **AB -> C** is the **partial dependency** because **A and B** are **prime attributes** and **C** is a **non-prime attribute**.

* Steps to get **2NF**, Method(Decompose into 2NF):- [**VERY IMPORTANT**]

1) Find the **Candidate Key**.
2) Find the **prime and non-prime attributes**.
3) Check if **individual values** from the **Candidate Key** have **dependency** on **non-prime attributes**.
4) If so, then they are **partial dependencies**.

* As we found that **AB -> C** is causing **partial dependency**, so remove **C** from **R** table.
* Keep **C** in a **separate** table with it's **dependency** which is **AB**, which is **R2** table.

* As we found that **D -> C** is causing **partial dependency**, so remove **E** from **R** table.
* Keep **E** in a **separate** table with it's **dependency** which is **D**, which is **R3** table.
* Don't remove the **dependencies**, which are **AB and D** from the **original table(R)**.
* Only remove **C and E** from the **original table(R)**.

* R1(A, B, D) -> No Need of **FDs** as **ABD** together is making a **key**. No sense of **deriving** a fourth attribute.
* R2(A,B, E)
* R3(D -> E)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a87b06c1-0aca-46d7-af61-026984f8597f)

* For every **partial dependency** we will create a **separate table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f3358e8-dbfa-4caa-9354-a5b8688ce4a2)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a203d0a4-8d6e-4ee3-b706-533a7d35181b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a13e2aee-1021-4cd5-9fec-c2ecda2f4be3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05b1c9b9-65f4-45c3-97bf-6069f5856779)

* In **2NF**. [Solution]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f754768-7b97-43cf-b397-70245ba798f0)

## 3NF

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a07132b-11c5-49a8-8650-da0bd312d796)

* **No**. Not dependent on the **key**, it is dependent on **A**, which is not the **key**.
* Transitively dependent:- [**IMPORTANT**]
* Key -> Non-prime_1
* Non-prime_1 -> Non-prime_2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1552441-9541-4195-b3c1-c5ac2cd5a2ae)

* **Transitively dependent**.
* Candidate key -> AB
* Prime -> A, B
* Non-prime -> C, D
* Check for 2NF -> No partial dependency -> **2NF satisfied** -> It is in **2NF**..

* AB -> C [Key -> non-prime_1]
* C -> D [non-prime_1 -> non-prime_2]
* So, AB -> D [Transitively dependent]
* **D** is **Transitively dependent** on the **key(AB)**.
* So, **3NF** not satisfied.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22cb98d5-1b63-4f84-aee1-19d955c23b55)

* **D** is **transitively dependent** so **D** is the **issue/problem**.
* If **D** is the **issue/problem**, then **remove 'D'**.
* Keep **D** in a **separate table** with **C**.
* We will do **decomposition** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dad465e2-985f-4bc9-823e-829de43da488)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20de97a7-a8bf-47da-8e7e-1be9010b98c8)

* Decompose **R** into **2 relations**.
* Whoever is **Transitively dependent** with **D** here, we will remove that from the **original table**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e6da6ce-4f9d-44a0-891c-5d8722f5b5ff)

* Yes rule of **3NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ce197a9-46d9-47bb-95a2-fca4bc51cafe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b0eb1d2-da37-4408-9d36-04c54d25fcbd)

* To whom **D** is **directly dependent** on, that should go with **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46503d93-b39a-4f77-9056-070275df4bdb)

* If **D** is transitively dependent on **key** then, **remove 'D'** from the **original table** and keep it in **another table** along with the **attribute** with which **D** is **directly dependent**.
* Don't remove **C** from the **original table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8983e6ab-5b5f-4f99-8d05-86a3fa524b49)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b60a18c0-2ea5-4d8c-a0d2-4264734f7e37)

* There is **transitive dependency** as **A** is the **key**.
* A -> C
* C -> D
* A -> D
* **D** is **transitive dependency** on **A**.
* So **3NF** not **satisfied**.
* We have to **decompose** the **R3** table into more tables to satisfy **3NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89dc63df-d77d-4817-b16a-9a95757d0e88)

* Question.
* If the **candidate key** is a **single column key** then there is **no partial dependency**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f6eeeb0-c4ff-4dcd-b879-0bc22a04921f)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/887979fd-6753-43ad-afe1-fb1b0b233901)

* Question.
* **C -> D** is a **partial dependency** as **C** is a **prime attribute** and **D** is a **non-prime attribute**. So not in **2NF**, we have to do **decomposition** of **R** to get it into **2NF form**.
* **AC -> B** is a **partial dependency** as **A and C** are **prime attributes** and **B** is a **non-prime attribute**. So not in **2NF**, we have to do **decomposition** of **R** to get it into **2NF form**.
* We got **R, R2 and R3** which are in **2NF**.
* Now to check for **3NF**.
* There is **transitive dependency** in **R3** which is **C -> E**. So we have to do decomposition of **R3** to get **3NF** form.
* **E** is **transitively dependency** on key **C**.
* We got **R31 and R32** tables, now they are in **3NF** form.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf451d38-b572-43f7-8b54-082d15a5d136)

* The final tables are -> R, R2, R31, R32.
* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac6ea0c4-36e6-4902-91d3-9ea4b9655c79)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e39151ba-aace-4c01-9cde-6324e800fa06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2a9b53b-2e27-4107-9d08-0c6ed6e5417a)

* Solution [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b961ef3f-324e-423b-9f12-7eebcf79e9f8)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/273c8c50-80f9-482b-9062-b3db9d3871db)

* np -> Non-prime to Non-prime

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7ff8fb8-b0a7-4012-82ef-d12ab80c8a33)

* So, there will be **transitive dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7118a50-9e9f-46ab-bb47-aa9a7cc7d60e)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27c95ccc-45e6-47fe-aede-25ea330acfad)

* Question. [**IMPORTANT**]
* 3NF.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdf1a88a-6c9c-43f6-9a0a-9c9fcc079c0f)

* Then also **3NF** is adequate.

## BCNF

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/728498aa-4381-46f0-9fe5-637c7794f42f)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb9048e1-a00b-47f4-917b-e4611c4a1c6b)

* Example.
* Candidate Keys -> AB and AD.
* No any partial or transitive dependency. Hence already in **3NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3883e08e-ff2b-4308-8b0d-0879463f8e8d)

* In the **FDs** or **functional dependency**, the **LHS** should be a **key** for it to be in **BCNF**. [**IMPORTANT**]
* Not in **BCNF**.
* The solution is to do **decomposition**.
* Remove **B** from the original table.
* Put **B** in another table with **D**.
* Do not remove **D** from original table.
* Remove **B** from the original table and keep it in another table with **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19d81cd2-70e0-48fa-95ee-a53276e7fff5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96fe50c6-b0e8-45ba-a3ea-16936b6cf1ce)

* Solution [**IMPORTANT**]
* There is some **data loss** as earlier the **FD** was **AB -> CD** in the original(R) table but in **R1** table it is **A -> CD**. 
* This **decomposition** is called as **lossy decomposition**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5b0d861-50a8-4b68-a6dd-89d53e8b6fcb)

* The **original FD**, **AB -> CD**, is not **preserved**. It is now **A -> CD**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30831bd6-4836-4af6-836d-3ce8ce6dfc71)

* **BCNF** can create problems. There is **no any solution** for this.
* When we do **decomposition** till **3NF**, everything is **fine**. **No data loss**, no **FDs** are lost as well.
* When we go to **BCNF**, there is a **possibility/chance** that **FD** is **not preserved** or the **decomposition** that happened, causes **data loss**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/372ecc2a-6768-4f9b-b3c2-d7ba8cf40d81)

* Upto 3NF decomposition -> Definitely **lossless and dependency preserving** -> **Compulsory**.
* BCNF decomposition -> Not necessarily -> **lossless and dependency preserving** -> **possibility/chance**.

* BCNF **always provides** lossless and dependency preserving decomposition?

> **False**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66bcb98a-d8d5-408c-80b3-5dc0757a484e)

* BCNF **may provide** lossless and dependency preserving decomposition?

> **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de84b500-0ba5-4fed-9179-7a097b478c5d)

* Question.
* Keys -> ABY, BCY, ACY
* **AB -> C** is **partial dependency** because **AB** is a part of the **key** and **C** is a **non-prime** attribute. So it is **not in 2NF**. 
* Option **A**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7072851f-f177-4119-a6c9-52636017057b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5916ba7c-da64-42d0-967f-e3254f13691d)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ade4bd9-93af-448a-b178-d80fe577d7dd)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a3ff8f5-8483-402f-91ae-89b40bb2d82b)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9bb1dfe-1d89-439d-a078-5155447af4d3)

* Solution.
* Option **A**.
* Partial Dependency are there -> A -> C and B -> D.
* So it is not in **2NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16854bc4-ddc8-4cd7-bbd4-cbef2647d07b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7792e435-df29-4dfc-ba9c-55c9ab01dfdb)

* Decomposition to remove the **partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5d5e35-5d15-4abb-8ae9-29ef934f0291)

* Question. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72b845ff-90b1-4188-a98d-e8bc3f9954f2)

* It is already in **3NF** because all of the attributes of **R** are the **prime attributes**. So **no partial or transitive dependencies**.

## My Work

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e207028-2a6a-4a9f-b9a2-f6d1a430bdc0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b993ef4-5809-4c37-93f8-8f68bdb4e7ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62efd41a-1125-4281-a9c6-c439595289a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9be6958b-211a-4e7d-89d2-a5ab4c9ad008)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/497c97b8-2325-4094-95bc-a96a7c6e704c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/382515b9-177b-49da-8628-407fb9e00b9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30a7411c-cb70-4bc3-9b3e-172a8835448e)

## Doubt clearing session(16) [7th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c07ca70-51bb-4b21-8841-be24e27fc5e6)

* Relation is already in **3NF**.
* Also in **BCNF** because for each **FD**, the **LHS** is a **key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32327a14-fa63-4b9e-981b-887cd8552037)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1359acff-3862-4dd2-a691-214613b6801c)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc78a731-4271-40b3-8ce9-0a7cf0122983)

* Solution
* Answer -> **a, b, c**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2ddf8c7-601a-48d3-9136-5831b80f1332)

* BCNF [**IMPORTANT**] [Answer]
* A -> B
* No partial or transitive dependencies -> 3NF.
* LHS is a **key**. So **BCNF**.
* Same for **B -> A, AB -> AB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cedb3ef2-ec2c-4639-ba87-6f11d50af119)

* We said that if more than **2 attributes** are given then it is not possible to find **relation** without **FDs**.
* If **2 attributes** are there then it is possible without **FDs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bca28b2-7618-4e6c-aae3-2ebcb9c8f0d1)

* Question.
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be7e6f58-7a75-4784-9d07-8d07a352ed8d)

* For **partial dependency**, all of the **above problems** happen.
* To remove them we apply **normalization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd1a6d1f-28ed-4e60-81fb-8e880c757396)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e39d97f-c316-492c-8f0f-3aa0357c4078)

* **Inconsistency** comes because of **redundancy**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72b15f97-ba23-47df-9a95-b379d1374a01)

* Yes.

## Lossy VS Lossless Decomposition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ce16a85-cd68-4179-a0de-1eb15f552412)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c70cf1ef-6705-4d77-89a6-03d70cc2776b)

* We will do **inner join** and the **common column** is **sname**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d9ce057-c399-4bc8-aa21-a35b522bee7f)

* select * from student_details S inner join s_department d on S.sname = d.sname;
* We will get **4 columns** and **4 rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42656f5-550a-485c-931b-3fdf219326cd)

* If we want the **department** of **roll 12 vishvadeep**, then the **query engine** will be **confused** as we have **two roll 12 vishvadeep**, one of them has **CSE** as their **department** and the other has **AI** as their **department**.

* We didn't get the **correct** information, we wanted.
* This is **lossy decomposition**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de45ed1f-0460-4265-a27a-0629faeb2fad)

* It will be **lossy decomposition** when we do **inner join** on the **decomposition tables** and after doing **inner join** the **result set** that we will get. If the **result set** is **not equal** to the **original table** then it is **lossy decomposition**.

* If the **result set** is **same to same** as the **original table** then it is **lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa0f5d16-2335-4ae8-a5ed-1a984a57a278)

* We don't know which is the **original data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7525bbd-27a6-4280-9f97-2f02b1385707)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f3a4e3c-54c6-46f0-94d9-b039f2d2c7bc)

* Lossy Join Decomposition
* The join is **inner join**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ad342e9-25d2-430d-ab17-3e4fe6f4ce32)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03e2ce19-3f1a-450f-9bb1-8b85be934dfa)

* Lossless Join Decomposition

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d22f539d-5e8b-484f-a35b-6cf4c4045b79)

* Example.
* select * from student_details S, S_department d where S.rno = d.rno

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5aeeda57-e490-4a69-b387-df6a160a94a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74f0cf3d-5f28-4048-8165-7c99f2d18c3f)

* Inner Join
* R becomes a **subset** of the **result set** -> Lossy decomposition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c80c6734-61b0-4504-b897-d5894f4e1cb9)

* Question. [**IMPORTANT**]
* **Y** is the **common table**.
* We will get **lossy decomposition** because **5** is there **two** times in **Y** column. We will get more columns than there was in the **original table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b151eec-b111-4676-9fe8-17a3d7d18fe3)

* Good **observation**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44dfb87c-d483-456e-831c-dfae331be83b)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfa81e50-7a5e-4179-afbf-e43a0482b5ea)

* Question. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6eabe81-5bb9-4215-af52-685d4a6f7b21)

* If the **common column(Rno)** is the **key** in **both the tables** then it should be **lossless**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2db03374-5b3a-47ed-b8a6-fb7397e8c648)

* If the **common column(Sname)** is **not a key** in **both the tables** then it will be **lossy**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df65349e-dbe1-4a01-a61a-ad4e972dec12)

* We are doing **intersection** between the **attributes** of **R1 and R2 table**.
* If the **common attribute(D)** we got is a **candidate key** in anyone of **R1 or R2** then it is a **Lossless decomposition**.
* **D** is **key** in **R2** hence it is **Lossless decomposition**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c55948d-82d1-4d88-bfa8-c9b58e9c024a)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd5b940-9e3d-4405-8c19-285999d358e4)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/407cb8cc-b6dc-4312-963c-4f38688cc0df)

* **R1 intersection R2**, between **R1(A, B, C) and R2(A, D, E)**. So, we have **A** as the **common attribute**.
* Is **A** a key in **R1 or R2**?
* As it is a key in **R1** table, so **yes** it is **lossless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9bd1890-4ec5-4521-9b96-170a3a71c119)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d44b68c-7c8b-47b9-bed7-bcd44f5822ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e0ee71f-dae5-4d0f-8aff-b9c7a37e04f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c81a715-f0e2-4cd6-8c33-3d937c8b8e09)

* Lossy. [**IMPORTANT**] [Solution]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffc82bad-577f-4fd5-a006-967977305d90)

* Question.

* Common between **R1 and R2** is **B, C**. **Two Attributes**.
* If we have **more than one common attribute** then we have to write condition on all of the attributes.
* We have to write **join condition** on all of the **attributes**.
* We have to do **AND**.
* R1's FDs, A -> BC, BC -> A
* R2's FDs, B -> CD
* R1's key -> A, BC
* R2's Key -> B
* As **BC** is a **key** in **R1**, so it is **lossless**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17594bf9-e2d9-429f-8f29-4ab6f79205df)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b27734f-9e4b-42ee-8214-d8641839a3e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0a13dcc-64ce-4ed9-b2ed-1b445154cafd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15c09d24-91d7-45b5-9449-7986e2f7d974)

* lossless
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3b32c45-5629-49ec-92d7-9fbdb55baeb3)

* If **B** was alone then also **lossless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/173f2c4d-7605-4758-a257-0027f7d7f77e)

* Question.
* If we do **inner join** of **three tables** then we have to write **two join conditions**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/199df87d-94d6-4deb-a468-cf9e35d9e250)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bd3431d-ee01-4607-ad8d-222c1df9eee4)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dec44e16-23c2-44e7-9f36-0b525303ab8e)

* Combine **two-two** tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81b176f7-7838-490c-b2c3-c3785b2eabab)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4aaea5b-d661-4136-8f5a-e56b66123a4b)

* Lossless.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17d70ebf-468c-4a1f-ba14-79fde58f7b2f)

* Question.
* There is **no common attribute** between **R1 and R2**.
* So, **lossy**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/588f3710-3fd6-4c57-bdf4-9e89638c35d3)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c0921ba-4707-47c5-9dd8-1852906ff530)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/854a6023-e176-4027-a019-305af983a84d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1547083e-60f6-472d-80cb-e4796f39bcda)

* **x -> y** is the **partial dependency**, we **remove** it from the **original table**.
* **y** was **dependent** on **x**.
* **x** also goes to the **new table** with **y** and **x** becomes the **key** of that **table**.
* **x** is also present in the **original table** also.
* So, **x** is common in the **new as well as the original table** and **x** is **key** in **one of the tables**.
* That's why **2NF and 3NF** always gives **lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a7477c0-0640-4260-94d1-6295869d53ff)

* Solution.

> First we will check **common attributes**, then we will check if among them we have any **keys** or not. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fed8730-5e8a-4544-9306-0c5f563d5d40)

* **C** was the key in **R1**.
* **AB** was the key in **R2**.
* Common was **A**.
* **A** was not a key in **R1 and R2**.
* So, **Lossy** then.
* Doesn't matter with **prime attributes**. [**IMPORTANT**]

## Dependency Preserving Decomposition

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a2d5626-abbd-4e6c-bbea-8a9abc2c729a)

* Definition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42c7c1e-5808-4d8a-b10d-1fa30b9efee2)

* Question. [Example 1]
* Dependency Preserving.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4237fea-c83d-4857-9d55-0deb20a766f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/279a7355-3336-4b5f-a94e-a8d81190c37b)

* **Not Dependency Preserving Decomposition**. [Example] [Question] [**IMPORTANT**]
* From the **union** of the **FDs** of **R1 and R2**, we couldn't get **D -> A** from the **question**. So it is a **not Dependency Preserving Decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3be8b4df-019e-4a0c-ab72-bda7cf46f729)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da7c32db-9e10-4887-ba77-05bfbd3882e8)

* [Example] [Question] [**IMPORTANT**]
* **Not Dependency Preserving Decomposition**.
* From the **union** of the **FDs** of **R1 and R2**, we couldn't get **D -> C** from the **question**. So it is a **not Dependency Preserving Decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0577fc14-865a-4367-98bf-e9d800722172)

* [Example] [Question] [**IMPORTANT**]
* **Dependency Preserving Decomposition**.
* From the **union** of the **FDs** of **R1 and R2**, we are getting all of the **FDs** from the **question**. So it is a **Dependency Preserving Decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dadf594b-b12d-42e1-a9b1-bc279f780000)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3edc9e38-44ee-4a5e-a06b-24084730d754)

* As there is **no common** between the **R1 and R2**, so it is a **lossy decomposition**.
* It is **dependency preserving** because we are getting all of the **FDs** from the question after we do **union** of the **FDs** from **R1 and R2**. 
* **Dependency preserving and Lossy decomposition** -> **Dependency preserving and not lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf9099cd-287a-4ccf-ab7e-ed1ce6b75f87)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84e7a534-adba-4c6a-86dd-10f0b8e3ee23)

* Question
* Option **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e67a6961-916f-4033-8f66-d49d925c58a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ba5b0de-94b8-4eac-a7dd-e63d790d65ba)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b90e1d14-a4cb-4edb-8804-5998e7d2dc8f)

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82062142-d550-41ea-b536-aef2926e41de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04bb2515-685c-4302-9357-3b159a843702)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae9ba7ef-86de-461a-99ae-2953c8c6ee67)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52bec4c6-30a8-428f-8771-3b2f0bfd95a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7629e8f-8a94-40ac-8331-6003161d058e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35d0cd07-e62e-46dd-aa4e-e4f4b45268e8)

## relational-algebra-part-i (17) [11 July 2023]

## ER Diagram to relational model

* 1 Entity Set -> 1 Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfaaed53-daee-480d-98de-94606d231f81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f7b4b84-e9de-4ea1-a10c-210f8bef74f8)

* Many to Many Relationship.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb969a0c-b02c-422b-9a76-7eca9b0fee1a)

* Using **both Eid and Cid** together we can make a **composite key** for the **Teachers table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4de5671-30c4-4bb9-af7a-452c87f903ba)

* Teaches.Eid -> Foreign Key referring to **Educators.Eid**
* Teaches.Cid -> Foreign Key referring to **Courses.Cid**
* **No partial dependency** present in **Educators, Courses and Teachers** tables.
* So, all the **three** tables will be in **2NF**.
* **No transitive dependency** present in **Educators, Courses and Teachers** tables.
* So, all the **three** tables will be in **3NF**.
* Keys are in **LHS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2379b0f8-47f5-465c-9a5b-595daa1c9040)

* All **3 relations** are in **BCNF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34641d9d-0c69-4c49-b93a-65c00eb7bc53)

* Option 2 -> Keep relationship information along with an entity set
* Relationship towards Educators -> 2 tables. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23e2b79d-f61b-480c-bca5-c348852e4960)

* **Primary Key** in **Educators** table is **Eid Cid**, combination of both.
* We will get **partial dependencies** because **Eid** alone can derive **non-prime** attributes **Ename and ESalary**.
* If we do **decomposition** here to remove the **partial dependencies**, we will get a table with **Eid, Ename and ESalary** and another table with **Eid, Cid and Since** which is **same** as the earlier(option **1**) one we created.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28876d6e-02d0-4113-8e2b-9a9697b62351)

* Option 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/732d4d78-c118-49b2-97c1-ee4d20b823ae)

* Option **3**. [Mistakenly written option 2]
* Problems:-

1) Partial Dependency
2) Cid -> Cname, Cfee 

* The above one is a **many to many** relationship , so the ***option '1'** is the **correct answer**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96fdb2e5-b66e-486d-bea0-2b687b38bf3e)

* **Many to many** relationship [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f195887d-bb48-4b5c-a278-0896a7446bf8)

* We have to keep **one student's information** only **once**.
* **One to many** relationship [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12459bdc-c944-4208-8673-02876a1971c0)

* **Sid** is the **primary key** in **students** table.
* **Eid** is the **primary key** in **Educators** table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b43e68a1-2b2a-413d-967e-f001b8594d95)

* **Eid** is not **primary key** and **too much redundancy**. 
* That's why we can't keep the **relationship** in the **one side** which is the **educator** table. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3efd3c6-7424-4de1-ae1f-1eb512ebf6b0)

* So we will go towards **many**, which is **students** table. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9974363e-ace1-4502-b8de-9d24bcbbf29a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70e2fac1-ff6d-404e-a8cb-26ba5f38683f)

* There is **no point** of creating **three** tables when we can get the work done in **two** tables. [**IMPORTANT**]
* **Best Solution** -> Take relationship information towards many side entity set. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bc1c752-2bb7-46d5-9a5d-735a0b4af887)

* FDs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55350ab5-32ad-4a8f-8ac0-957cd9b0ed88)

* **Sid** is the **primary key** in **student and Guides** tables.
* So, we can keep them **together** and make **2 tables** instead of **3 tables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/344d7abb-6354-4152-9ad5-412e8faa28c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b85e1457-4155-4be5-b707-8308add369af)

* **Sid** is **primary key**. So it is  better to keep it in same table.
* **One to Many** and **Many to one** is **same thing**. [**IMPORTANT**]

### One to One Relationship

* It will be in **2 tables** only.
* **3 tables** scenario comes when there is **Many** relationship. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51952847-bf16-4012-8e94-99d6ff0c223e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a482b754-b0c9-4d42-847c-7eaee77bdebd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffd9d3b7-4158-47a3-bc57-09a061025d41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/643add7e-a490-4ce4-aa23-3aa5b86baaac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82a85115-70bf-4b16-84ef-9077ba151294)

* Whichever side we will have **total participation**, we will keep the **relationship details** on that side only.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d276bd94-103f-4a72-b97e-0e51be1036a7)

* **Option 2** is better because **license** table has total participation in **relationship**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bf8e840-4a2a-4af9-b2a1-820eaf79d493)

* Keep **two tables** and set **guide_eid** as **Not NULL**.
* So **student** table will be **total participation**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42ad1521-3119-4bcc-9bc7-61c0f27ac416)

* There cannot be any **department** without any managers.
* **Department** table has **total participation**. That's why we are keeping the **relationship** which is **manages** in the **Department** table and also it is a **One to Many** relationship so the **relationship** which is **manages** needs to be in the **Many side** which is the **department** side. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31fdee3c-60ec-4d5c-ae05-3944d26a102f)

* Many TO Many -> 3 tables. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6b79876-7d1a-41e9-8781-38c33d23240a)

* How to control participation in many to many?

> **HW**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a8c7721-16c3-427b-9336-0829ae75d4d6)

* If there is **overlapping** then it makes sense to go for **3 tables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57326c7c-0af5-46af-bf80-5cc26dc3a0af)

* Relationship.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47a6807f-32e2-45b7-b75c-f8df4001a6c0)

* Overlapping
* Dis-joint.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e845a884-0d71-4e64-8de2-5d83d0ee97f4)

* There can be **multiple dependents**.
* The key can be a **summation** of all the attributes, **Eid Dname and Dbod** which is the **key**.
* **Eid** cannot be the **primary key** in **departments table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3175b95f-8a2f-4482-8e5e-98017f211fe2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83966abd-346d-471a-9656-961e7ac49643)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38e1d08d-fcdf-46cf-a9fb-cec9fd9864d2)

## Relational Algebra

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/907e3137-701a-4858-b932-c587e8bf8686)

* SQL -> Non-procedural query language
* Relational Algebra -> Procedural query language

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a1e1ef6-882f-43a6-9a51-561a7495a973)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d597c546-d3e4-4ebd-8349-e6446dfc2949)

* Basic Operators. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c8e4910-551a-4201-ad95-450b8e526dcf)

* We will get all of the **rows and the columns**.
* Which **columns** we want?

> We want all of the **columns**. 

* We have to use **project** here.
* Without **project**, data will not be **fetched**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa929a82-9f45-482b-864b-fd74dd73432d)

* We will get all of the **rows and the columns**. We will get the **whole** table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/749b0d21-c57b-408d-aeab-173544efcb85)

### Select

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9f89f31-9215-4ddd-a897-58fb44b15e42)

* Syntax.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/212f145b-47e2-42f5-bbbf-5d79f4a0dd2f)

* Example
* sigma(rating > 8) (sailors)
* Sigma -> For Filtering rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bb1a122-194a-4236-9e8b-42cf56c2c8c4)

* Find all sailors who have rating greater than 8 but age less than 25.
* '^' -> AND symbol [**IMPORTANT**]
* 'V' -> OR symbol [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6adcd251-6d35-4de1-a4db-0394350f53d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93019435-b79f-456d-9b70-ddd180c2c742)

* Example [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b5e4075-4074-44ee-8e3d-85be7993a398)

* Comparison operators. [**IMPORTANT**]
* The **select** operation is **commutative**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6303554-7229-4110-b366-46a07d717baf)

* Example
* We are **filtering** out the rows based on **conditions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/022e7c34-2d0d-44bb-a65c-387598e0a391)

### Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9de2545-864e-4111-bcd0-136475c3bd75)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55357f53-d456-4bac-b9d0-10af83507af1)

* Question
* Link -> https://gateoverflow.in/743/gate-cse-2001-question-2-25
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb0e42f0-ce97-4a11-8d3f-60b46b85f304)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92de1b1e-dda8-43f7-8a55-d0128ca40af1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73dd16fa-5411-4e63-add9-c6c397e746ad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5bd3142-100b-4e7c-8c57-9349e554a0eb)

* To get **BCNF** or satisfy **BCNF**.

## relational-algebra-part-II (18) [14th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08e8f898-0dbf-4fd7-98be-16787281f2fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9465eb9b-4003-4a4b-9afb-e39d392b5646)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2778077-240b-48d3-be92-34665a2a3519)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/636ef0ce-fc79-49a2-923b-9a5531deeefb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/654aa1cd-fcd5-47d8-b65c-49365d643d0c)

* **select** filters rows based on the condition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5e37c7e-e83c-4b8c-a013-9452f9e9280e)

* **Same** as **where clause** in **SQL**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81dd181a-207c-4c27-97ea-ca4ce6a4b9a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1b03e55-fc99-469f-a529-01cdcf690e0d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7246fba-0ecc-4871-bc3b-23bb08a6e362)

* **select** is **commutative**.
* **^** -> AND.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63f2919a-bd9a-4315-b71c-03810965c360)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/924309b3-a793-48b5-8767-b85d7a18d945)

* Find all products with prices between **15 and 30**.
* (Sigma) price >= 15 ^ price <= 30 (Products)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a650117-4b7e-471b-842e-16660f688437)

* Example.

## Project

* It is like **select clause** of SQL.
* It **eliminates** duplicate from tuples/rows. It takes only **distinct** values from tuples/rows.
* We do **project** at the **last/end**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f07c4ae-4e1f-4a1e-967a-956536066a96)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05ff3842-b965-4fad-84eb-cae2afa00d71)

* pie cname (customers)
* We will get **distinct customer names**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d401f6b-746b-4939-a067-45c1e60ab483)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0de83ae-97a0-4654-93c7-0643a0bc6a33)

* The **project** operation results in a set of **distinct tuple** as the project operation removes duplicate tuples.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3afeaf74-9081-40e7-86ab-c6c5aec6e5ed)

* pie Ename, Salary (Employee) [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2ae8910-9770-4b95-8a7a-35e3e465e920)

* pie Salary (Employee) [Example] [**IMPORTANT**]
* We are getting **distinct salary** which are **3** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca65d8fe-d874-42f3-994c-8551ea6f5bac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65a4aaa7-ecba-4044-9d88-38bb5aee56e6)

* pie A, B (R) [Example] [**IMPORTANT**]
* We got **combination** of the **distinct values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a383973-aca4-4cfc-b9c2-9f5f485f1be5)

* **Sequence** of **execution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12b05b65-1eb0-4de3-aa6e-4c3de8e152c0)

* Yes, fetching the records.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67dd15ea-f87c-46ca-9b9c-746835d8bc71)

* pie Ename (sigma Dno = 2 ^ salary > 17000 (Employee)) [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7809c449-9343-4c4d-8f3d-4dfb06375dd3)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/048488a4-3a57-47db-8ea2-bbeccb9584e0)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5bded8e-3a39-4441-8c41-479326d0ab52)

* Fetch name and dno of all male employees who are having salary less than 30000. [Example] [**IMPORTANT**]
* pie ename, dno (sigma salary < 30000 ^ sex = 'M' (Employee)) 

## Set Operations

1) union
2) Intersection
3) Set-difference

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/197612ed-7da1-4978-9828-ec83de9eb7ae)

* If we want to use a **set-operator** then we have to keep **two** things in mind:- [**IMPORTANT**]

1) No. of columns must be **same**.
2) Data Types in the corresponding columns must be **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0ef63f1-d246-4fd0-92c7-ee884ae5ca0b)

* No. of columns and data types of corresponding columns must be **same**.
* If the **condition** are met then **any set operation** will work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b1f2178-0704-4d4c-a0a2-32e98116fba5)

* Operations is performed on **tuples/rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ce46eb-51d3-48be-bbf0-91e464eba41a)

* Example.
* The **whole tuple** needs to be **duplicate** otherwise we will write the **tuple** in the **union**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e64a619-c10c-4dff-8660-3496886cd57c)

* We got the **distinct name** from **E1 union E2**. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d598f68b-86c4-4007-a9a4-99b131e28808)

* We got the **distinct age** from **E1 union E2**. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25221163-e788-4560-92ee-a85da4bd2e86)

* **Relational Algebra(RA)** doesn't remove them automatically but **project** removes them automatically. There is a **difference**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac519b62-886d-4118-bfe1-0543ac77d7ec)

* Question. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54c5458c-5d4e-415f-9377-35999f9864ee)

* (pie sname (sigma dob = '27-10-1988' (Students))) U (pie ename (sigma salary > 15000 (employees)))

### Intersection

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76758c9b-0046-46f2-b175-5e0650b85c4f)

* Intersection -> Common Only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8b8291f-bf0b-47ac-b5a8-7e0a91f25cd5)

* Example

### set-difference

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a33be5f8-6730-43e7-a123-ecb30a8078b6)

* E1 - E2 -> All those tuples of **E1** which are not present in **E2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e570fa1-3ebd-4820-bf12-cfb3f2762c55)

* E2 - E1 -> All those tuples of **E2** which are not present in **E1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/673266d9-9ec3-4242-ad4b-f6eee5df494b)

* **Union and intersection** are commutative and associative. [**IMPORTANT**]
* **Set-difference** is not applicable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9393eb1b-3191-4404-8154-b9275767d792)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27b92e0a-b368-41c6-855c-dea0e7d100c9)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/864e01d7-7cf2-4eb6-b242-6cbc9d536bf4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cbc7512-595f-4a0c-9241-f3f04229c184)

* **Yes**, they are **equivalent**. [Example] [Question] [**IMPORTANT**]
* **Project** is **distributive** over **union**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0325e796-b2d4-4f7a-a827-325de0faca66)

* **Project** is **not distributive** over **intersection**. [Example] [Question] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/078c0313-ab73-4ce3-9c8a-324dd72c0659)

* Both are **not equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e72b2d64-590a-45b0-ad3e-a7827f2bd3e4)

* Question.
* (pie eno, ename, dno (sigma gender = 'M' ^ salary > 20000 (Employee))) U (pie eno, ename, dno (sigma gender = 'F' ^ salary > 25000 (Employee)))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82fa8f90-0895-4427-934d-e817413f6649)

* Solution. [**IMPORTANT**]

## Cartesian Product(Cross product)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd4d0522-4669-4577-87f3-6f483514a6c0)

* Cartesian Product(Cross product) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc317b2a-3fdb-4dc0-80f8-3763bdcca7f4)

* Cartesian Product(Cross product)  -> pie A = D (R X S) [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67149430-829d-4e14-8460-4e0645bb4e3d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/094ceb7c-af16-4109-81f7-705bd04b9801)

* Solution. [**IMPORTANT**]

## Joins.

* When we join **two tables** and we filtered out the result based on the condition.
* This is called as **condition or conditional join**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/667e5df9-e8e7-41d7-bddd-7d95c1e71073)

* Joins

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69ecdf5a-0fde-425f-be2d-fa7800ebfabe)

* In **conditional join**, the join condition would be **>=, >, <=, <**.
* There will be **no equal too(=)** condition. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f1c96bd-0eaa-4491-bbcb-bb91590c58d5)

* In **Equi join**, we are going to use **=** operator.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af322074-3221-4e29-bc36-1b7b5d898822)

* Equi Join.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a63a919b-da49-4a20-bc50-f36b48979458)

* We will get **two** rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e35a6c14-dc43-4dd9-af94-834830e4a185)

* In **cross product** form.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e97fb0da-8574-4b37-860d-b6349f644293)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da86550f-2d7b-4d98-9704-370d47306ceb)

* Example of **Equi Join**.
* We will get **101, 103 and two times 104**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ee7ad5d-6b5f-4cf9-a605-5c642760c075)

* In **natural join**, we don't have to write any conditions. 
* We will write it directly.
* There will be **one common column**, the **column name** would be **same** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d20067ad-9945-4186-9628-4fe2303a7b1d)

* The **Rollno** is the **common column** here.
* The condition will be automatically applied on them(common column).
* The **common column** name should be **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7ab5b99-f170-4bef-a481-2fd7f4152fe6)

* If the **common column** name is not the **same** then we have to **explicitly** write it. Like above. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7dd5ec53-0b90-43c0-842a-8f3100660e4a)

* **Implicitly equi join** is used for all **common columns**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e738f533-2b94-4478-9bb1-b64f7133e946)

* There are **two** common columns, **A and B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64dac596-4d87-408d-a912-f121d99cef71)

* Attribute/column name which is the **common column** does not have the **same name**.
* Then, we have to **explicitly** write the **condition**.
* Otherwise, we can write like **natural join**, no conditions needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28c086be-44d7-4a21-8c24-9e20234a6cff)

* Question. [**IMPORTANT**]
* pie cname(sigma shippedid = 3 (Customers natural join(damru) orders))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2fefbe7-c9ae-4ae1-aec9-c059167f41b5)

* The **common column** which is **cid** has the **same** name.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68c6b02e-d101-4f0f-a92e-9c8573f34534)

* Solution.

## relational-algebra-part-iii (19) [16th July 2023]

### Summary of Joins

* **Conditional Join** -> <, > [Cannot be equal to(=)]
* **Equi Join** -> =
* **Natural Join** -> No condition. [The tables have the common column with the same name on both the tables]
* In **natural join**, automatically the **common column** join condition is there. We don't have to write it. 
* In **equi join**, we have to write the **common column** join condition. The **name** of the **common column** is **different**.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dbe7c99-a915-4686-b6b5-ed379308b086)

* Question.
* pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Blue' (Cars (Cross join) Drives (Cross join) Drivers))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7985e12-b4e9-4e9f-b6da-ba52c281fbef)

* One Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f9d355c-29b5-4e84-a769-02b8aae70dd6)

* Another Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2065b931-710b-4b5c-bc4c-c7f575d34d97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c535634-47fe-4609-a855-7955a042f03b)

* Question.
* pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ (ccolor = 'Blue' V ccolor = 'Black') (Drivers X Cars X Drives))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16f4ddbb-7dd8-42b0-a95d-5787ecd3e9bb)

* Union.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7492af-fd4c-4066-a0b2-ee872a3a590c)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d7fa7fb-f61e-46b8-8d93-1c9782b89b53)

* Question.
* pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Blue' ^ ccolor = 'Black' (Drivers X Cars X Drives))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0659fd5c-78fa-4ad5-a08c-cc8472fe03f7)

* (pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Blue' (Drivers X Cars X Drives))) (Intersection(U)) pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Black' (Drivers X Cars X Drives))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/245e7125-4bf5-4c30-a221-7b9da59e0a0a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10032de9-4ab2-4838-bec5-1f95f449d2e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad9d0103-cb23-406a-93bc-b965f740c8d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a42e0d4c-5aa7-472c-9d83-b105e2bd780d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5692a80-cb2f-4fd1-9f71-69c5d9f9f21d)

* Question.
* (pie drivers.did, dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ (ccolor = 'Green' V ccolor = 'Red') ^  (Drivers X Cars X Drives)) - (pie drivers.did, dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Green' (Drivers X Cars X Drives))) intersection pie drivers.did, dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ (ccolor = 'red')

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/517a3b63-40a7-4029-9090-d7dac2d26fd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fac53007-9a7d-4827-965e-f5b75204c289)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db038dcf-d935-4075-b4c5-6332f9eefe11)

* **Left Outer Join** -> We get all values(rows) of the **left table**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01867e8a-3f17-4fe9-a507-e3c1b4b9814d)

* **Right Outer Join** -> We get all values(rows) of the **right table**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db548a54-c492-4121-9fcf-d0b2c8d2702c)

* **Full Outer ** -> Extra records of both the tables will come that do not participate in natural join. [**IMPORTANT**]

## Rename Operator

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a229353-8019-4b6e-8ed8-90ba2c2d4080)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bdfe9c0-1da7-4009-b21e-a84085e10489)

* Syntax.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dfe051e-9351-4a9b-923a-788c0277c0a5)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51189ac5-024e-4c58-972c-95881b797586)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81f99207-bf0c-4294-a70b-7a63223e100b)

* When we want to **rename** the names of the columns as well as the **table** name. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0176612c-17fe-45fd-ac3b-766c831de768)

* When we want to **rename** the names of the columns only, we are aliasing the table as well but we are not giving a name to the table.
* New instance of **student table** is created. We haven't given a name to the table, we have just renamed the column names. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fe652a7-724c-464d-9bdd-84573defda7b)

* When we want to **rename** the names of a **specific column**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dcbc7fc-d71d-4c59-a386-c1987a8ed15b)

* Both.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/238ce0e7-30c9-46cb-9912-1daa05534584)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cc3e8c9-3b59-4e0a-9b88-d9efab3c1c60)

* Sequential renaming.
* If we don't want to rename all of the **columns** then we have to put **arrows(->)** for the column renaming. Otherwise it will not work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/861cfb03-5618-44fd-88fd-15f19777a557)

* All [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65435d53-000f-4636-8784-f3211e79546e)

* Question.
* It is conditional join.
* (name of all female students) - (name of all female students who have scored equal or lesser than any male student) -> name of all female students who have scored more marks than all male students.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bae51f82-48bd-4910-bdb3-b036f52a814d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b124aea-3b4b-4b57-9a91-4d1bbc99df9a)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e50a2476-62ca-48e1-b291-faddbbbca7d1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/859f5fe9-6fce-459d-94af-1358b4a5cdf7)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50e8e46b-6f79-459e-86a6-08385835bd19)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa18e0bb-3af2-42ef-984d-d453ad9cab79)

* It is conditional join.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15e1b59b-c048-4904-86bc-8c4549d0f2a1)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39136a2d-b519-4291-bc8c-dc19adfa8ad6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e49bf3b0-a292-40d7-b39d-9ba880a6c506)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ba7c951-41d0-4e89-a930-385197089487)

* We got the **female sid** who have not enrolled into a **particular course**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7daaf537-7a4a-4ac5-a0a6-c8229175ad4a)

* The **cid** of **c1, c3 and c4** are the courses where some students have enrolled.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95c6cab0-8ef8-46b9-9663-4532a38d7349)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a9992ed-c932-42d0-8c23-18a08872ae52)

* we will get **those courses** where not all of the female students have enrolled but some of them have enrolled.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49aa39ce-da5e-43d9-8882-9ac207df5698)

* Option **B**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d87fabe9-f692-4034-96bb-75b4c3e73caf)

* [**IMPORTANT**]

### Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5b327ca-36f3-41dc-9b91-1fae868ae180)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35225449-86ad-4d30-a3fd-468487c371e0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/552d8104-aae0-4832-99a2-3086c0c5e76b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c591d722-3a59-4345-bfb4-8ee614d177b1)

## doubt-clearing-session (20) [17th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b4086eb-69dc-40de-ae49-491cbd02d350)

* Questions.

1) sigma country = 'Germany' V country = 'UK' (customers)

* As we want all of the customers('*' in SQL), so we don't have to write **project(pie)** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7d95318-219f-46f7-b1c8-0140b6371367)

2) pie cname, address, postalcode, country (sigma contactname = 'Yang Wang' (customers))
3) sigma customerid <=19 (customers)
4) sigma country != 'Germany' ^ country != 'UK' ^ country != 'USA' (customers)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d53aa4c-43b8-4206-973f-bb1511a1190d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fdcc788-a137-4b65-8415-dc515e8f12d9)

* Solutions [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ee76b12-ffcd-42b2-a9ce-a7cf601b2ce8)

* Set-difference. [Another way]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/053db361-e0c0-418a-8771-5563c4ce0760)

* Question.

1) sigma supplierid = 1 V supplierid = 2 V supplierid = 3 (products)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b2ad916-21b5-469b-adf5-8fa443d59042)

2) pie productname (sigma price >= 5 ^ price <= 25 (products))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7334037-740d-468b-86fe-9734a8056e73)

* As range is mentioned, so, it will be **inclusive** only. [**IMPORTANT**]

3) pie supplierID (sigma category = 2 (products)).

* If supplier details needed, then use suppliers relations. We have to do **join** then.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f06d4091-1f6c-4e9d-9d5e-63e19ed53cd3)

* Solutions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1771f832-cced-48f9-a13f-11e779a26271)

* We are writing **pie suppliername, address, city(project)** because we only want the **supplier details**. If we don't write **pie(project)**, then we will get the details of **products** as well which we don't want.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56df551e-e3b1-4c2d-8719-67068d18c18d)

4) sigma supplierid = 2 ^ price > 30 (products)
5) sigma price > 50 ^ supplierid != 6 (products)
6) sigma price < 30 ^ supplierid != 2 ^ supplierid != 6 (products)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/524c97f3-331f-4696-9e1c-19d70ea4e10f)

* Solutions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94b28cc9-63d3-4a88-b0d2-8de984c4e58c)

* Questions.

## Division Operator

* R1 / R2.
* R1 -> Numerator
* R2 -> Denominator.
* **R2** should be **smaller** for good/smooth division.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6390583d-554d-42c4-b6be-762bbf4a1af1)

* It will work. [**IMPORTANT**] [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1ae5604-9937-4b0d-968b-2fbf935e64e1)

* It will work. [**IMPORTANT**] [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb31d33b-429b-40c2-bec8-2a84ffa71bc5)

* It will not work. Since we want **R2 attributes** to be **subset** of **R1 attributes** and **D** is not in **R1**.
* R1 / R2 
* The result is the attributes that are not in **R2** but are in **R1**.
* Should be **R1 - R2**, mistake fix it. Check **below**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a0b24bb-6cde-4ad8-9424-81639615726f)

* Example. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9be66525-0c30-47bf-99f4-7f77d489555e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91a89c1a-9457-467f-a0c7-68e03dc792b8)

* Example. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57c92636-c7d5-472e-b269-ae109d751528)

* Definition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cef5b77-18a5-498b-9ba6-f311c863eb15)

* Example [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5ffca06-39cf-490d-bd26-82b786803c7e)

* Example [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96d3bf6e-aa55-489d-83b1-2e49f371c129)

* Single value of **B column** associated with **A1 and A4** from the **R2** table's **A column**. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0b8488f-a241-4d5a-821f-2b1f10bd8862)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28b36384-5609-4bff-9379-dd3b4b260e01)

* Example [**IMPORTANT**]
* **Division** operator is **for all**.
* After the **division** we will get **pid** but which **pid** we will get. The **pid** that are associated with every **prodid**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25fc24b0-7b42-480d-90c6-93ab5b936e1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f97a244-0885-4e46-9439-5b5ace6a84b6)

* We want that **pid** which is in-front of all the **prodid**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ef2d40e-413b-48d0-86d5-f0cf16b65db9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8a6a9fc-7c88-4b3f-b96d-af7d73778dc8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b645c9bb-3260-4082-a6ee-ef6a1900e002)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa72f6a3-2a71-48a2-915c-3d2bca93f882)

* Division is possible.
* Result set -> StudentName.
* Those **student names** will come that are associated with **CA,CB and CC**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e79d065e-cedb-4383-b85e-ac20bcb90fe3)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba987728-0bda-4dc4-b8d1-f7bab263c4b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb6e3de4-09dd-43a2-ac90-0ff36a07da26)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0c32046-1855-4aca-a01b-7994d0a1a572)

* Yes.
* CarID and Date should be **same** value with the **Cid**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ebeb2f6-6e01-4b63-a077-3311527f5d41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3e2339c-3ea5-4900-952b-6c5957950462)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5492a93a-26d8-474c-8ade-ff4751fbf834)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d55baa3-4178-4bac-991a-4ad60b0922c9)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd149c8c-d4b3-469e-a50a-41e86af2d300)

* Women enrolled in a course question.

### Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43522458-a7b6-4baf-9b9c-658c82e1ff2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c551c2d4-847d-48a0-986e-d9c2ef9458fe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66a82715-dba9-4d8f-b25d-c03aeb317ea6)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ceae00b-1262-4e09-b86e-a90316b3e262)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bc71aaf-082a-49f8-b9b7-ab9d4af51435)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc10e1b0-2496-4b08-a761-fe976bf3c163)

* The condition would be **True** for one row only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/743e696e-56fd-47d5-b4e7-2b0a7242a241)

* Same Only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73904c6e-516c-48fc-9147-d9120ac2823f)

* Will work.

## trc-drc (21) [17th July 2023]