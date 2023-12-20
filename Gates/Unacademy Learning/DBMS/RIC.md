# DBMS


# Revision

* Link -> https://www.youtube.com/watch?v=8w2PgLhd6-Y

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f44dbbb-e9f7-4624-b310-bab991b149c4)

* Keywords, columnames and tablenames -> Not case sensitive.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03629afd-2d12-48f7-a7b0-947eecbfe475)

* Table row's values -> Case sensitive.
* To **distinguish** multiple queries then we need to use **semi-colon**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c13676c6-830d-4f7f-941e-db4bd988ce4e)

* select command.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21777905-dee7-4f06-b620-1f392648310c)

* **from** keyword is run **first** which selects the table we want and then the **select** keyword runs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34ab8d2c-b187-4a9e-bded-b9f054332aea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e7112b1-e0ec-4f4d-992a-83f72d5313c0)

* Selecting multiple columns.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28ec315d-662f-4afc-9a25-7aea3e4f3baf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b62ae4a6-cf32-4b80-9710-8812f94c9bf6)

* **distinct** keywords.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d988bca3-44e4-40da-afc9-af46404fbf61)

* We will see the **combination of country and Postalcode** which are **two columns**.
* The combination of rows which we will get will be **distinct/unique**. That's why both rows will be taken. To see the **distincts combinedly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/730d7495-a0d7-4b66-a7f1-6b6596377de5)

* To write the **conditions** using the **where** clause.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cdf61d8-16f9-4379-b245-c72e00b37429)

* Sequence of running the clauses [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec0a1726-4ddb-403b-be4f-171746621a3a)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ff551c7-a393-4842-bbe9-996cc77f97f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7d02725-6658-4844-bee7-4fe36e8e2f81)

* Different operators we can use in **where** clause.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/558288c2-bbe5-4c70-ac03-eb958ad45932)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03bda8fe-abee-4fc7-bea9-5f13aa8dc12d)

* Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9367731-a228-44f1-b52d-699f3dedb4e8)

* Question.
* Query:-
* select * from OrderDetails where Quantity >= 10;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39185187-478c-4a1a-869c-baa7cb852bae)

* Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c302992-978b-4881-9a9e-0c10925d6cb4)

* Logical operators.
* There is no **short circuit** in **DBMS** that only happens in **C-language**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83631dfd-f868-4279-a3df-4f23f73c2ec4)

* We have to write the **logical operators** in **words**, we cannot write them in **symbols** format we write in **C-language**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abe1295d-61f6-43c9-a818-89e1a5b8e4fc)

* It is not possible that a customer will have both **India and USA** as their **country**. So the query will return **zero(0) rows**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/021d994f-be74-4962-8a0c-faefac462000)

* Between operator.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b346b20a-cb76-430c-876c-949fd7bc7a86)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49435fe7-66b8-4e70-8d7e-fd688cc12ad6)

* Question
* select * from orderdetails where quantity not between 10 and 20. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea5c377d-b7c4-4715-b6ea-7f6fd39172b5)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e30d2fe0-6d80-49e9-9575-9da2affcb91d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db380c61-c114-436c-ae5c-9c6715b9b018)

* NULL values. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8964f7c3-e05b-4c5f-9c56-174712ada6e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29abd7ae-0dc9-4e13-a0eb-5d73dfc7c673)

* To get the data where there is **no data** at all then we have to use **IS NULL**.
* **NULL** represents no any value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/261e2676-cb94-4afd-8f8e-b0b0e8ef7480)

* When we want **NOT NULL** values, which means the values which are **not null**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a6b2095-4a0a-4de9-84f7-882531ac0052)

* Aggregrate Functions.
* min(), max(), avg() etc.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69c0ec1c-a1fa-499a-8fa4-1be0d18b9904)

* Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ed3dcb5-ed4e-48df-8219-c4ad1b4753e9)

* Example.
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e1d9c03-c93d-4b4b-b750-1485788afd31)

* Aliasing.
* When we are doing **aliasing** we don't have to write **as** always. Even if we don't write **as** and write the **alias** after the **columnname** the **aliasing** will happen and **aliasing** will happen if we write **as** in between the **columnname and the aliased columnname**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51419708-fb86-415a-b93d-d31cd50201a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc8b689a-ab36-4c61-beef-d8bcee672513)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd2a90d1-e761-4a24-b7b8-bcba2276e44c)

* Example.
* For the **count()** all of the **not null values** will be **counted** in that particular column. If there is any **NULL** value in that particular column then they will be **ommited/missed**.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0947a11d-9511-4c68-b624-de24aa9a3095)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3818cf0e-5525-4608-b964-af1e99749133)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f3c39cf-dfe1-4ca1-82a4-7d4896a3959c)

* [**IMPORTANT**]
* If a whole **row** is **NULL** then also it doesn't matter. [**IMPORTANT**]
* If we are talking about **columns** then we will talk about **NULL or not NULL** values. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8156a23a-6260-45c3-a517-22dce2ea38cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a59d7fe3-7fa4-44b7-ac24-de7a00c49067)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dec1843-9b5e-49a0-83a4-1515de57be9b)

* Limit.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/411d2372-1ad6-462d-a318-efe712668d8f)

* Example
* **Limit command** will run at the end only after the **select** command.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a416339-151e-447d-8211-697feb95a61f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89003ed1-a34e-4ca7-9f82-d01bfa7c2b96)

* SQL Joins.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b165981-39d7-4a30-9454-3e74dd9b19a0)

* Total no. of rows will be **6**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ec0d9b6-23e0-4d7b-8bc0-87257fb1558b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2119e9ec-b499-474b-9715-a8868d9ca8a7)

* Cartesian Product.
* rows-> r1 * r2. [**IMPORTANT**]
* Columns -> c1 + c2. [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc9e3766-44b1-4a0a-baee-35b5e35f3439)

* There should be atleast **one common column** for the **Inner join, left join, right join, full join**, for them to be **run/executed** properly to get the **desired result**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17054464-a88d-4556-92fa-1adb34192159)

* Yes. [**IMPORTANT**]
* The name of the **common column** might be **different** but the **values** present in the **common column** must be the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e23540d-9556-4edf-9dd8-9b0e0ae4589b)

* Schema.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56d23e1d-b2a9-444e-842a-fa36849f6319)

* Inner join.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7241428d-4973-4017-85d8-67b2f02e6bf0)

* Inner Join -> Natural Join [Just different names for the same thing]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f09daf90-1a5a-4b1d-8b48-25bf3f88b781)

* [**IMPORTANT**]
* In **left join** the rows which were in **inner join** that will come and the **columns** which didn't come in **inner join** and are in the **left side table** will come in **left join**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a727946f-1d1e-48ab-aeee-4a07c9047500)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba50dcd3-d8c4-4261-bbb3-8f8a7b1498c0)

* Left join. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27d17bcb-c54f-46ed-ad1c-90968036bee7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1843c1e-48be-4f6e-82cb-9249c69c25c5)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed50a5d6-0ead-4727-b446-4f30f177d1a7)

* Right Join.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33044d4d-60f4-4a98-b8c7-420affb884a9)

* Full Join.
* It is the combination of **inner, left and right** join but it is not **natural or catesian product**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/118cd4cb-d2a3-48f3-aa61-046725fd5876)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3230d378-d958-4722-9e85-f223258306bb)

* Self Join.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a3f6b3b-900e-477a-80bc-d7d18ed710fe)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf626919-9481-4ab3-9d34-cf3b07ca90b8)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fec16f6d-15b7-4ae5-9f73-2c04417a29e4)

* Question.
* It is **cross product**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8aba5f02-2dbd-4623-b268-b202b56ef3e5)

* Option **D**. [**IMPORTANT**]

# PYQ

* Playlist -> https://www.youtube.com/playlist?list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa

## 1 (1999 - 2003)

* Link -> https://www.youtube.com/watch?v=8gOwfWoe_y4&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e43c2381-6d8e-4a05-84fa-d71724ef4da6)

* Question.
* Attrbutes -> Column Name.
* Relation -> Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e360223-6fde-4f07-ac32-38a8ca75d568)

* option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba5bbd69-2b0e-4c87-b80c-6eff2e70f247)

* Question
* select Employee-name from EMP, DEPT where EMP.Dept-no = DEPT.Dept-no and Location = 'Calcutta' and Salary > 50000;
* select Dept-no, count(Employee-no) from EMP where Salary > 100000 group by Dept-no. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db12d8c5-f388-4c7f-ad70-dfc222df49eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2e03db5-b7b2-4677-94a1-8c339257178c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a69c4b66-8f36-43e9-b32e-bbefe0ab6f04)

* Question.
* If we do **cross product** between **r and s** then if **s** is **non-empty** then only we will get **records** otherwise **s** is **empty**.
* If **s** is **empty** then the **cross product** between **r and s** will result in **no records**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/633591de-38e3-4052-a513-f851a9460186)

* Option **A**. [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58490c40-1db1-47c8-b26e-9210e6e7f366)

* Question.
* All of the comparison which are done with the **null value** are **false** whether the comparison is **=, >, <** etc.
* We assumed that **x** is **null**.
* A -> false, false
* B -> false, false
* C -> false, True

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/491fce7e-dbc3-48e1-8017-70e4e8c09a65)

* Option **C**. [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56210db1-30a8-4c3a-951e-059a54dc6fa0)

* Question.[**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08d39fab-8090-4baf-92ac-10500e3f3b89)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08effab8-61ce-4864-8f76-c8e471779961)

* Option **C**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8283994a-fe23-472f-ba62-424168492086)

* Question.
* select regno from examinee where (select avg(score) from exainee) [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa0cb93e-b373-4d7c-8db9-c988d521447e)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7866b38d-66cd-47cc-aace-3100661c59e0)

* Question.
* select centr_code from appears, examinee where appears.regno = examinee.regno and score > 80. [Correct]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc9de6e0-8514-4a06-a2cb-e0542519636b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9890f359-d2ae-4739-9b83-a666ea809bca)

* Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baf10324-5eeb-469b-852c-dcf22bacec5d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a08f674-6465-4b5a-a060-5294eff3723a)

* Option **C**. [**IMPORTANT**]

## 2 (2006-2010)

* Link -> https://www.youtube.com/watch?v=O4eHu5Ij9_0&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=5

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a471c3c7-18bd-4141-8268-a7f37626ec75)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7455f02-0337-4e0c-b6fa-0dda7357092e)

* Question.
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/804086e1-8957-470e-ab91-8a47dc3f4644)

* Question. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19a68033-ee4b-4866-b509-5246a64f48c4)

* Taking an **example** to solve the **question**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/581042a1-0c70-4d65-a233-cb73eb35f7dd)

* Query 3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fc50e81-c7fb-4dcd-96d2-f2b117fb932f)

* If within **exists** there is a **sub-query** written and within the **sub-query** there is **co-relation**.
* Co-related sub-query. 
* For every row of the outer query, the inner row will run completely once.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b3d7bf2-7b77-4890-8e9c-71a1be22b41b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a914f0dd-41e5-477c-8045-6a39bcd374ba)

* Option **B** [**VERY IMPORTANT**]
* Link -> https://gateoverflow.in/1846/gate-cse-2006-question-68

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/995269e3-c598-47c2-b641-12be7603ce02)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e0a8189-8ab9-4eb9-8de5-1dc16ecda1c1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83429c91-a626-4bd4-a484-d858016dcffa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e48b57b-a9fe-4750-b2e9-5d68e42f0f76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89701089-faa7-4504-8b36-3b9250d55c96)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7b63fab-9563-45cf-a2b8-e02d9fc2801f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dd1be5c-ff08-43b5-8683-cdcd8416a8b8)

* Question
* There is no **co-relation** which means that the **inner query** will run first and then the **outer query** will run based on the **inner query** result/output.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/428ef8e2-4ff3-4e56-b7c8-5bf73c90ff3d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6f184e7-b24a-46d0-afc0-1cebf883432c)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d23b755-3698-45c8-bebd-eb9262e12c1f)

* Question. [**IMPORTANT**]
* Anyone ->
* Any one -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68f3d972-e93b-4b9a-885d-f0a90b90b2bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04f44303-9b24-4604-bf7b-a2fbe32474a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a0ed542-5bce-450c-b20a-f8a992b9c4fc)

* Example to show why option **A**.
* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c24d404c-3d2b-4124-b6c5-7eca9228594d)

* Question. [**IMPORTANT**]
* There is a **syntax error** in the above query.
* If we have done **group by** on an **column** then that column should be in the **select comman**. This is expected by the **SQL engine** followed for the **GATE Exam**. [NOTE] [**VERY IMPORTANT**]
* We have written **Group By school-id** but **school-id** is not there in the **select comman** we have **sch-name and count(*)** in the **select comman** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a6b9c2e-9715-493d-b5d0-c3b4dd150f10)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/148fdd95-d351-46b4-a82e-9c8601efcb05)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9a61ec4-23f0-4949-9b83-c6afeb9d285c)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c40bda30-8b0d-4452-bbb6-957ce87be8ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd3a792a-bfce-4e79-8ac2-acb60cb6c42a)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d49ebd19-af4a-4eb2-a1ad-65112ec5f3a6)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9db016dd-f8cd-438c-85c7-770bbbc899e6)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34eb7aaf-7ade-45a6-a62a-93238b6f6352)

* Question.
* Take an **example** and solve it accordingly.
* **student** information in the **enrolled** table will be **repeated/not unique** and **course** information will be **repeated/not unique** that's why **student, course** combination is the **primary key** of **enrolled**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d062794f-50a7-4a24-9af8-845642fdbbdc)

* enrolled table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7dfeee0-115b-4f32-9338-e28ed161f87b)

* Paid table.
* We have made the tables in accordance with the **primary keys** of those particular tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aefe5811-43c5-4dcc-8b17-1dd8799dc5ae)

* Query 3 output.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fc50e81-c7fb-4dcd-96d2-f2b117fb932f)

* Query 4 -> Co-related sub-query.
* If within **exists** there is a **sub-query** written and within the **sub-query** there is **co-relation**.
* Co-related sub-query. 
* For every row of the outer query, the inner row will run completely once.
* Link -> https://gateoverflow.in/1846/gate-cse-2006-question-68

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/995269e3-c598-47c2-b641-12be7603ce02)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e0a8189-8ab9-4eb9-8de5-1dc16ecda1c1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83429c91-a626-4bd4-a484-d858016dcffa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e48b57b-a9fe-4750-b2e9-5d68e42f0f76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89701089-faa7-4504-8b36-3b9250d55c96)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/622a4b04-1f9b-4285-b22a-14bb78c9b6a4)

* Option **B** [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7b63fab-9563-45cf-a2b8-e02d9fc2801f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dd1be5c-ff08-43b5-8683-cdcd8416a8b8)

* Question
* There is no **co-relation** which means that the **inner query** will run first and then the **outer query** will run based on the **inner query** result/output.
* All of the above are **done earlier**. Check above in (2).

## 3 (2004-2006)

* Link -> https://www.youtube.com/watch?v=UTXZRcBaxaY&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/618715a0-a032-42c7-bb7b-b083340587e3)

* Question.
* We can see that **having** clause is being put after **group by** clause which means that on every group the **having** clause condition is placed.
* From the **inner query** we are getting the **avg salary** of all the employees in the company and we are **comparing** with the **outer query** which is the **avg salary** of **Male(M)** employees of a **particular department**.
* We want the **avg salary** of **Male(M)** employees of a **particular department** which are **more** than the **avg salary** of employees of the company, then we want the **names of those departments**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa1631a8-7d8b-4f1a-8356-14bce2a15dc9)

* Option **D**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eda5cbe9-5248-4309-8ca3-3d54926b2059)

* Question.
* Cross or Cartesian  product.
* r1 -> student -> 3 rows. [2 rows inserted in the student table]
* r2 -> department -> 2 rows. [3 rows inserted in the department table]
* c1 -> student -> 3 columns. [No. of columns in the table]
* c2 -> department -> 2 columns.
* rows -> r1 * r2 -> 3 * 2 -> 6
* Columns -> c1 + c2 -> 3 + 2 -> 5 [No. of columns in each table]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2e74e04-d306-456c-a820-e3378e4ffb97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42295235-a40e-4434-abdf-29e9b176094e)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/486a7d36-0f44-47c4-99b2-7ab64cadc1da)

* Question.
* NULL -> It means that we do not have any value in that place. **No value present**. [**VERY IMPORTANT**]
* So **roll no '4'** doesn't have **any marks**. It is **not zero(0)**.
* If we do **NULL + something** we will get **NULL** only.
* If we replace **NULL** then only some other value can come. [**IMPORTANT**]
* **avg()** is an **aggregrator** function so it will **ommit/ignore** the **NULL values**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db0ce39d-6b71-4e5c-87e1-ec064a2a8981)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a860966-f216-4b1b-bce4-5858c7578c22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/818500cf-76b9-4663-957e-b434b00af49e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ddf6a39-3753-4b43-a9bb-ae89e5e71ebe)

* In **roll no '4'** there is **no value** so we cannot consider it and **divide by 4** to get the **avg**. That's why we are ** dividing by 3**.
* **NULL** represents **no value present**. [**VERY IMPORTANT**]
* Option **C**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e441b8ba-922a-4701-9e12-00cb47a2b43a)

* Question.
* If we want then we can set **foreign key(fk)** as **null**. So **query i** is **passed**. 
* **Primary key(pk)** main constraint is **not NULL and unique**. We cannot make **primary key** as **null**. So **query ii** is **failed**.
* Only **foreign key(fk)** can be **null** if we set it up like that. **Primary key(pk)** cannot be **null** ever.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91a6c3ff-9f49-4bab-9115-6c0a29df4a1e)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8211cc1-2c96-456a-bd73-b9ec23aa9969)

* Question.
* Take an **example** easier to **solve**.
* This is **co-relation**.
* **count(*)** represents the **position/order** in-terms of the **price of the book**, how much expensive it is **compared** to the others.
* If **count(*) = 1** means that it is the **2nd most expensive book**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/066ab372-3270-434f-aa29-4c4e3aca82e1)

* These **5 books** are the highest/expensive priced books.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a964d4ec-f0a1-4b24-b500-5aff4d2e156f)

* Option **D**. [0 to 4 i.e 5 most expensive books] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1abe3db6-7373-4c5e-9349-f461b0c76669)

* Question.
* It is a **co-related** query.
* not unique -> It means it is present **more than once**. Minimum of atleast 2 times present. [**VERY IMPORTANT**]
* Unique -> It means that it is present **only one**. Supplies only one item. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05c7e940-ccd7-4d9e-be86-7a5403f20d69)

* Option **D**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce8ab8d0-97bc-46b2-987b-80b566be91b7)

* Question.
* We can't tell for sure that **statement 1 and 5** are **100%** correct they look **correct**.
* Statement **4** is **100%** correct.
* option **C** has **statement 4** in its **answer**.
* option **C** [Answer] [**VERY IMPORTANT**]

## 4 (2011 - 2014)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e72c00a9-5501-46ba-ad3f-69afb3788bf7)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fda7c246-b82b-4d85-8bb6-ee2f773ed177)

* logic
* X = 7
* y = (2 ^ x) - 1 -> 128 - 1 -> 127

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6284c75-d7d6-4fc7-8db2-c30c99718653)

* option **A** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f76ec1e0-981e-4a8e-bbd3-f5d255f109ce)

* Question.
* Natural Join -> Common column -> Bank_manager. [This is not cross product]
* Ramest Sunderajan -> 2 Rows
* Ramgopal -> 1 row
* Suresh Sunderajan -> 2 rows
* 2 + 1 + 2 -> 5 rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dbdf47f-9cf2-46c0-ad87-1dbfbd23e78d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22c30192-7293-4c99-afcc-0bcb4dd19cc1)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e7bafcc-ff5c-42ff-8742-11dfcbd738a4)

* Question.
* **Having** clause is used after **group by** clause only. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a557344a-961f-497f-afa8-58a234cd3813)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/566f9035-7cf2-4f0c-9ba1-fc83f6a68f35)

* Question.
* Inner query returns **nothing** as there is **no 'Arun'** name in **B** table.
* **Age greater than All** will always be **True** for the **outer query**.
* So all of the rows of table **A** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4849daca-3658-4b73-9508-c09cf0a9145d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/551c8356-b651-4dac-b2c3-d1d55aa31330)

* If inner query returns **nothing** then **greater than All** will **always be True** for **every record**. [**IMPORTANT**]
* Option **B**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e930abaa-f37a-4a89-81fc-212efcc80b2b)

* Question
* Check Assetion -> Put constrains such that the **row** becomes a **primary key** or the row behaves like a **primary key**.
* S1 -> False.
* **a** is the **foreign key** of table **S** and it is referencing to table **R** which has **two columns(a and b)** as the combined **primary key**. This is **not possible**. [**IMPORTANT**]
* Primary key of **R** table is **not a single value/column**. * Primary key of **R** table is the combination of two columns.
* This is **not possible**.
* It should have been that **two columns** from table **S** were the **foreign keys** which would be referencing to table **R** then that would have been possible. [YES] [**IMPORTANT**]
* S2 -> False

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cd72185-33f4-41de-a32d-d088328b9a3a)

* If the **primary key** is of **two columns** then the **foreign key** also should have been of **two columns** as well. [**VERY IMPORTANT**]
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f7e3174-44d0-43ec-9fb1-65b9320e6a2d)

* Question. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a14534b7-668a-407c-adcd-0144cded46e1)

* Could be **equal** as well.
* Option **B**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a714d2d-5438-4163-8193-29b14326f6ab)

* Question.
* Take **example table** and solve.
* In **natural join** which is option **A**, we may get **more tuples** as compared to **in** clause given in the question. More results will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b029b960-877f-4cc1-9148-ab509c5fafc9)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b024f4a9-beef-4e57-a5bd-149e0605fa2e)

* Question
* It is a **co-related** query.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b993ffb-7df7-437e-ba87-de72ec7bef29)

* Example taken to solve the question.
* Not exists -> Whatever the **inner query** is giving as **output** that shouldn't **exist** then the **not exists** condition return **true**.
* If an **employee** has customers who has ratings of **not Good** then that **employee is not selected**. [**IMPORTANT**]
* The **employee** are **selected** who have customers and their ratings are **Good only**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aeaba33d-df85-45db-8d84-cc7d41170dce)

* Option **D**. [**VERY IMPORTANT**]

## 5 (2015-2018)


























