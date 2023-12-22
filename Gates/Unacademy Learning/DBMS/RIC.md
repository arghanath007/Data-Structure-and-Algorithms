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

* Link -> https://www.youtube.com/watch?v=2S7J-0Klxi4&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/923a46fd-1e39-4ea8-9f18-909ba5c36b9a)

* Question. [Trick Question] [**IMPORTANT**]
* There are only **two student names** which are **Raj and Rohit** and as we are doing **Group By of student names** so we will have **only two groups** which are of **Raj and Rohit**. [Trick]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b0204a1-e6ab-4f04-bace-d78ff9e242b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acdf1fb6-740d-4bcc-8b1d-34846c9b6ee5)

* Answer -> 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6c76bf5-5322-4b42-a3ab-008f1c999edd)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/053769e0-5665-4456-a520-afb7c5060cca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af899e04-8b1e-4a39-8337-89eb82f9c176)

* Option **A**.

## 6 (2016-2019)

* Link -> https://www.youtube.com/watch?v=XaVVE_n-AWM&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=7

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/297b05ee-2c6f-4d4d-b0b4-53ad15e1bcfd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3963f09-ab41-4f48-a85d-a43b2201a537)

* Question.
* **With** clause -> There is a **query** and solve the **query**. The **result** of the query is copied to the **temporay table** which is **total** here. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/494e78ed-18a2-45ec-8559-2170adc4021c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b177431-14cf-4df1-9712-2ddb1ab8122e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95cb5f09-f088-4f17-8e78-aeae6b598cdf)

* Link -> https://gateoverflow.in/39604/gate-cse-2016-set-2-question-52

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9697ffb-f905-464a-8c86-d9e5c0cb90f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b74b8785-0ea0-453a-bda3-3494608472c9)

* Answer -> 2  [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1d5cd52-f6ab-4c89-b0be-630cac25bb3f)

* Question [**VERY IMPORTANT**]
* **from** clause will run first, so we will run the **where** clause. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/453a5a17-230c-4463-af7f-23944049dcfe)

* EC -> temporary table.
* **DeptName and Num** are the column names of the temporary table which is **EC**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a2a6487-d3d3-43c8-9312-f25620213fcb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/318f0769-190f-43dc-abad-6c7d7094d7be)

* Answer -> 2.6 [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02cbb41f-948f-45c5-8976-0116cf703614)

* Question.
* Greater than Any -> (> Any) -> min(of all the values) -> 10

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a043587b-cc19-402c-908a-ff71f7cbbe8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24e5cf14-e7ad-4f40-8d86-85fcdcb05b91)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17b17402-3762-4f20-a52a-49543e456702)

* 1st condition of the where clause didn't return any tuples.
* 2nd condition of the where clause returned **7 tuples**.
* Answer -> 7  [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28265f4b-2f66-478d-af82-6985a959b35b)

* Question
* Full Outer Join -> It keeps the combination of **inner, left, right** outputs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a5a695d-e443-4551-a6d6-5213a385a23e)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c3e05b9-3154-4b5f-a4a2-943ade1fbd53)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1ef3c45-42bd-41b2-82ce-caa40bbf49a3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27610d9d-4019-4866-b3e1-a4def2471cc3)

* Answer -> 5 

## 7 (2020-2022)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cf8be99-b1f5-4f45-a243-6feaa85b3b2f)

* Question.
* We are comparing the **inner query** output which is **225** individually with the **costs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fed728ee-ba85-46fb-9a33-f37f098a220a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95a50ddd-5981-494e-9073-a4a41b6b7475)

* Answer -> 4 ['1' S2 row and '3' S3 rows] [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91eb3046-35c1-4290-b5f2-1db90bd13cb4)

* Question.
* There is **no co-relation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84c1253a-84fb-47f3-af15-083b8e9e3c12)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47a42623-37cc-40b9-b350-61f6d2043fc9)

* Question. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b77a5abe-3705-4029-9f57-913d8e110c2e)

* Not Exist [**IMPORTANT**]
* In **inner query** the meaning of **except** is **set difference**. [**IMPORTANT**]
* This is a **co-relation**.
* Set difference -> A - B -> From the first set remove the elements of the second set. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45fe7cb2-a772-480b-853e-0b26d20d75a6)

* S01 -> Empty -> not exist(Empty) -> True.
* S02 -> Not Empty -> not exist(Not Empty) -> False.
* S03 -> Not Empty -> not exist(Not Empty) -> False.
* S04 -> Empty -> not exist(Empty) -> True.
* S05 -> Not Empty -> not exist(Not Empty) -> False.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31940f13-fe72-494f-8d18-f7f7d035ee41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7cfbcc5-0675-43c6-95cf-1abbb35196ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85700fb6-1151-450a-a277-e4e6ac913600)

* Answer -> 2 [**VERY IMPORTANT**]

## 8 (2004 - 2023)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ba78477-2d96-4517-832e-854b1078214f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e0ccd79-67a3-49c8-9b87-3e31e790800a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36bac557-b50c-437c-ad98-7cb04135fbaf)

* ER modelling [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/120e281c-9936-4cbd-8b55-a1c199d31844)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b2e01ff-7f70-491a-81cc-3a2398542aa5)

* Option **B** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/843fc037-266d-4ff3-850b-d59bdf577be6)

* Question.
* R1 -> 1 to many -> 2 tables -> 1 table for E1 and 1 table for E2 and R1 goes to E2 as **E2** is **many**.
* R2 -> many to many -> 3 tables -> 1 table for E1 and 1 table for E2 and 1 table for R1.
* So total of **3 table** we have which are **1 table for E1 and 1 table for E2 and 1 table for R1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ebb77b7-017d-4c18-b1e9-d3d340a1792d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f2ca755-6355-430e-85ab-3a083830bacc)

* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a1d6202-50a7-43c3-93a2-5f8fe6429cbf)

* Question.
* The relationship establishment.
* Combination of both the **tables** are needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4b8df7c-985a-4a4d-8e7d-01eeb0c933c7)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/207f7b8a-7e3b-4319-b797-d13500fc41e2)

* Question.
* N -> Double box -> Weak entity set -> There is **no key**. [**IMPORTANT**]
* R2 -> Weak relationship set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7d1ba87-fa72-4932-90ea-77b13bc507bf)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63c8197d-67fc-4c38-a7c8-c7ac65e47a55)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90f7e83d-e47e-430e-adda-224afec947a0)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caaec89e-1c85-4d8a-8f68-66a044ae5ac6)

* Question
* E1 to E2 -> many to many relationship [m:n relationship]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a49804f7-3636-4814-91fc-2adf4b057a3e)

* Answer -> 4 [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/914ac139-e7da-4010-b2f2-3bfdd6ef7171)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e03c07f-5c54-45ef-a98c-6be533d34cc4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39a9d5a7-7780-4aa7-b17e-f1d319d626f7)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/738a5aca-b5ce-42b3-9490-4eb285f13400)

* Question.
* Cardinality -> No. of entities.
* Atmost one -> **Zero(0)** is also possible. Minimum is **zero(0)**.
* But we would **ignore** the **atmost one** case which is option **D** because we have **total participation** mentioned in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b85b10f-20bc-4cd5-af10-c7f3cb234c77)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/580827a0-0f0c-46a2-9e19-fa6d0d0a63cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6b1c502-5231-428b-afb8-93ddb88d6646)

* Option **A**. [**IMPORTANT**]

## 9 (1990-2002)

* Link -> https://www.youtube.com/watch?v=XuUh2rv1cTQ&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=10

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d359ccd1-10cc-48d0-ba53-c1bfc3e25cf5)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/879e01c0-5854-49f9-8c8b-8a56eed4ff04)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb92007c-8dc6-4f18-a4fb-044db0452922)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1c77152-cc74-489b-9b4e-c40cbfbe7ab1)

* Option **A, B and D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02b71419-8804-4090-858c-21923cca3344)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2caa5bfe-2e3b-40a2-8012-e859f999bb48)

* If the **decomposition** is **FD preserving** and **lossless** as well then it is **decomposed** to **3NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e45fa23f-5f8a-46d4-abce-9c5d36e75ef2)

* Option **D**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4784866f-fd7a-4b52-a59d-71b9a971dffd)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82f752ca-6280-4368-b88f-231854477b29)

* We should check if **EC** can be a **candidate key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bec15e7-34ee-4bfd-8ed8-9f579b7fd38b)

* We checked which **attributes** are not present on the **right hand side**. We have to involve those **attributes** in the key itself because we cannot derive them from **other attributes**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2c22377-4eee-47c9-aab4-bc34fc37ada0)

* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/689575f3-dfb3-4833-b844-1945da6c073a)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1baac8b0-6013-402a-8b40-b069c21a4efd)

* We didn't get more than **1 value** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57679420-be56-4495-9903-dc24d1a6e711)

* Multiples values of **Y** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9977295f-bdff-40d4-9bd8-ddf8aef4f9f8)

* We have to see that we are getting **unique values** for the **same combination** of numbers. [**IMPORTANT**]
* option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2b36d70-aca8-4afe-acb5-bc64e70f405d)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faa1be77-a206-4fb7-9dc2-9bd19814c29d)

* There is no **common attribute** in R1, R2 which is (R1 intersection R2 equals to phi) hence the decomposition is **lossy** decomposition. [**IMPORTANT**] 
* Option **C** [**VERY IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dcd5c7b-aa39-42d5-9cc7-7be7a2ee26ad)

* Question
* There is only one FD in option **D**. Prime attribute is **A**, non-prime attributes are **BCD**. Prime attribute is **single** which means it is **not a composite key** then there will be **no partial dependency**, so it is in **2NF**. For **3NF**, we need **transitive dependency** but there is only one FD, so it is in **3NF**. The key is on the **left hand side** of the FDs so it is in **BCNF**. It is alone in **BCNF** so no decomposition is possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0081baf-68d3-4fef-a100-68fff847ad14)

* In option **C**, we will get the **over-lapping** key concept. On the right hand side, we are getting the **prime attribute(A)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddeaa8b4-3ce3-4dc5-a62f-7e4fbad10067)

* Because of the **above reason**, option **C** is **not dependency preserving and not lossless join**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d7a978d-a422-46fc-89ff-7fbeee72d81e)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/244317e5-214b-4852-8a08-82ca702e5d79)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5879a63-c835-41a5-a1df-930717e426d4)

* Option **A**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/878b680e-2ed5-4b74-acb2-ad529253d575)

* Question.
* It is an **MCQ** question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b70d13c1-bcc4-416d-98c7-2786d46851ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24bde10b-a17b-447f-8e3b-50d963d37162)

* Option **C** [MCQ] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33682f50-e760-42c3-a02a-8e3c21f6dfcf)

* Option **B, C**. [MSQ]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c228417-811f-45f7-bb75-274475e353b0)

* Question.
* One is in **BCNF** which means it is already in **3NF**, so we will check who satisfies **BCNF** definition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41d1c5d7-750a-4079-9814-862268500a69)

* Option **A and B** will not 100% give us the **gurantee** which one is **BCNF** and which is **3NF**.
* Sometimes **BCNF** give **dependency preservation and lossless presevation** as the **answer** and sometimes it **doesn't**. We will not be **100% sure/guranteed**.
* Option **C**. [**IMPORTANT**]

## 10 (2004-2006)

* Link -> https://www.youtube.com/watch?v=CJB1GqEQbcE&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=11

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ac4dec3-968f-40cc-a7b9-e9b262903f1c)

* Question.
* **4NF** is now not in **syllabus**.
* We have **two candidate keys**.
* **Prime to prime** there is **no partial dependency**.
* There is **no partial dependency** so it is in **2NF**.
* There is **no transitive dependency** so it is in **3NF**.
* Definition of **BCNF** is that on the **LHS** side we should have **prime attributes** only and nothing else.
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/666cad0f-0f6d-4be9-9dbd-610732e4ac10)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1250e3e4-ff56-4170-9ada-0f929273e8fb)

* Option **B** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9d3a1f8-0f42-4163-9b25-2573877587b7)

* Question.
* Assumption that **empcode** is the **key**.
* In terms of **FD**, we can derive anything from the **key**.
* From **empcode**, we can derive every other thing.
* There is no problem of **partial dependency**. So it is in **2NF** at minimum.
* From **empcode** we can generate **pincode**, **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a62528c3-a5eb-41af-a7d1-3f97a2a0a6b8)

* Because of **transitive depedency** the possibility of **3NF** is **gone/removed/violated**.
* It will stay in **2NF** only and cannot go to **3NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfb4ffff-3059-4ef7-96f3-1ad98a55d47a)

* It is given **empcode** as **unique** but it is not necessary that we would consider **empcode** as the **key**. We have also assumed that **empcode** is **not NULL** also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08169354-152c-4275-987e-f586f0131252)

* It is a bit ambigious as it is an **old question**. Questions are explaine properly now.
* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6c54f0e-5a50-4c6f-87a3-a3c0de4946c7)

* Question.
* Solve it using **closure properties**.
* Find the **closure** of the **LHS** and check it with the **RHS**, if they are what we want.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc6fe18e-6a9f-405e-b560-c8b68054c1e5)

* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41eb443a-a022-490b-96b1-4a31e8dea170)

* Question.
* In option **D**, if **three attributes** come then we cannot take **gurantee** that where the keys will be. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a03ef6ed-92a6-4060-a3ad-94929c3271fe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f697404-d221-4904-86c9-a50f1b7ab444)

* Till **3NF** there will never be **lossy decomposition**. Never. **lossless and dependency preserving** will come only.  [**IMPORTANT**]
* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5577f71-1d5c-41a7-afaf-ceb493853166)

* Question.
* To find the **candidate keys** we have to play a **trick** and find out which **attributes** are not there on the **RHS**. **E and H** are not there on **RHS**. [**IMPORTANT**]
* Option **A and B** are elimiated instantly because the keys do not have **E and H** and we need to have **E and H** that's why.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e375390f-6acf-4a2a-b28b-c2c5034284b1)

* We can use **another trick** here which is we got **AEH** as one of the **keys**, we could try to find if we can get **A, E, H or a combination of the three attributes** from the **other attributes** then those attributes can be **keys** as well. [**IMPORTANT**]
* **E and H** cannot be derived from **other attributes** which we say **above**.
* We can see that **D -> A**, so **DEH** should also be a **key**. Let's find it.
* **AEH** is both in option **C and D**.
* **DEH** is only in option **D**.
* No need to **check any more**.
* We can see that **BC -> D** ad **E -> C** and **E** is already there in the **key** so replace **D** with **B** and we get **BEH** which should also be a **key**. Let's find it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5177f2e5-d2ef-480d-b43f-8adb2ee6c063)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a64ee40-6a72-4d05-962e-c3164dc41b62)

* Option **D**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9e9dd37-cba2-496c-9dba-ac8d52e78703)

* Question.
* Candidate key -> F1F2
* A part of the key which is **F1** is deriving a **non-prime** attribute which is **F3**.
* A part of the key which is **F2** is also deriving a **non-prime** attribute which is **F4**.
* So it is not in **2NF**. [Because of partial dependency]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57dd9ba0-cebd-4f1d-9458-dff64857303d)

* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80f01401-670b-4bde-bba5-70f8493eaefe)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01e31024-0b57-4a6a-9743-14ec6567867c)

* Common attribute is **A**.
* **r1 * r2** result is not the **same** as the output of **R**. They are not the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a33326c-bb51-4d60-8e53-265a9caa4730)

* option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbe45392-c94d-469a-83bb-112f7befedd5)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4a0092e-af26-48a7-baa2-1a45e5970405)

* Option **C** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e09601d-c350-4015-b36b-e3975185904f)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caae3c64-7e12-40e8-97c5-831bfb2deefa)

* option **C** is **super key**.
* Option **B**.

## 11 (2007-2013)

* Link -> https://www.youtube.com/watch?v=O2bdXFCbl28&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=11

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b266d1c-3bab-4b3d-ba94-78694bbba9f9)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c44dee4-83d9-40d0-91a8-96abdd41c21e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87604bcd-5dab-4835-a6a9-d71007830a36)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67be5b10-2297-4e25-b424-b0e1e12e2cde)

* Question
* No partial depedency so **2NF**.
* As there is only one **FD** in **Collection** so it is in **3NF**.
* The key is on the **LHS** which it is so it is in **BCNF**.
* In **Book** we have **two keys** which are **combination of Author-title** and **Catalog-no**.
* No partial depedency so **2NF**.
* **Price** column is **transitively** dependent on the **prime keys**.
* **Price** is a **non-prime** attribute.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b40e212f-2695-4024-a2f8-43b881e66ade)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e910fe7a-6c59-4a1b-b1a9-88a22473e802)

* Option **C**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73d29fc2-1a59-427f-ab39-c966e654a1ec)

* Question.
* Between **R1 and R2** we have a common attribute **A**. Common attribute must be a **key** of one of the tables for **lossless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef98ada4-41b3-4776-a62b-18b008729fdc)

* Between **R12 and R3** we have a common attribute **B**. As **B** is key on one of the tables so it is **lossless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb944332-742d-4210-a780-e59f3345cebc)

* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f72fd38-6c87-4792-b242-6a2c42021717)

* Question
* Prime attribute -> AB
* **B** is a part of the prime attribute and it is deriving a **non-prime** attribute **G**.
* So it is **partial dependency**.
* It is not in **2NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/020dacad-3123-4f6a-a9f6-393cbc865289)

* Option **D**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0623c200-643b-439d-aab6-1da11a9484c9)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63603a79-0e95-4382-a50b-45063ad6c52a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d210c415-eda8-4f97-897e-906f1ffbf3b6)

* It means that in all of the FDs, the LHS will be the **key**. This is the property of **BCNF**.
* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14fed8c8-8e34-43e4-bfaf-b4e8a81a06c2)

* Question
* Tuples -> Different rows
* Natural Join -> On the common column we have to put the **equal to** operator.
* Common attribute/column is **B**.
* **B** is a **key** of one of the tables which is the **R** table.
* So from the **R** table we will get **200 unique values of 'B'**.
* In the **S** table we don't know if **B** will be a **key** or not.
* So **max** tuples we will get is **100**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8cffcda-5139-4e54-b6db-0b8e9a48d9ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e60b5cf8-0ebd-4baf-a156-2c26e6bb1117)

* Option **A**. [**IMPORTANT**]
* If **min** would have been asked then we would have said **zero(0)**. We would have said that there is **no common value** between the **B columns** of **R and S** table. So **no tuples** would have come in the **natural join** of **R and S** table. [**IMPORTANT**]
* If the **key** of **R** table was not given then we would have said **2000** tuples. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cfdd583-e3fd-4535-bc1f-9356444cdf9e)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f4b17ba-bcd4-4c6f-95db-66f6b7c05049)

* Using **BankAccount_Num** we cannot uniquely identify students.
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/661edd01-e6ea-4641-962c-97d17d86ca33)

* Question
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1714e4f9-9be5-4253-812e-4ec3fff15a48)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1b18dbc-9aaa-43f0-9dc1-436a5bb8d9c1)

* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e2d4e9b-5e33-40b7-addb-f0489af335ce)

* Question
* Solved below.

## 12 (2014-2017)

* Link -> https://www.youtube.com/watch?v=O6SrmI-FQpM&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=13

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d1f8062-4a01-4280-80cc-4b45992afd1c)

* Question
* Atomic Values -> Single valued attributes.
* We have **4 candidate keys**.
* For **2NF**, we have to check **partial depedency** and for that we have to see if any **non-prime attributes** are dependent on **(DA, DE, DF, DB)**.
* We can see that the **non-prime** attributes are **C,G,H**.
* We can see **non-prime attribute 'F'** is partially dependent on a part of a key(DF) which is **F**. So there is **partial dependency**.
* So it is not in **2NF**.
* We have to find all of the **candidate keys** so that we can find the **prime and non-prime** attributes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/051f2ab1-936a-44dd-bdb6-37885a3dd4cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1211bc01-d48f-489e-846b-97143e6ce9ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f591ec7-d314-400c-808b-e8cf912e6d46)

* Option **A**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91b196f8-04c6-4e6a-b841-0e190f451b44)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f6b37e0-e117-4fe6-b802-a54b75654ce2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e47805ae-5a56-44f6-8613-031a03aaed26)

* Option **B**. [MCQ]
* Option **B and C**. [MSQ] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56e44f9e-3a54-4108-9b33-766afce4b2c6)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7c44a33-d398-4b8d-96b9-4cea4f4a8508)

* Answer -> 8.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf42ce53-30db-4ebe-8e22-7061dd1b3d92)

* Question.
* x -> Any value that is not 19.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2178046e-f133-4042-a530-be63ec89d467)

* Answer -> 19.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/196107aa-b87f-4d31-b736-a55717a93b91)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41f908f8-8a25-4c0f-9745-d87e03a0d19d)

* option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76f83194-123c-402b-8443-cd34ad5f089d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0f0cc55-5eb1-4b54-a15d-e0e971b6f42b)

* Option **A**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e973d74b-580a-476a-ad6c-7acfd3153a3a)

* Question. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c2f1bb2-e0ab-4695-9bc9-3fce0a1fb708)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0575d3e-778e-4084-ba92-406a6e0b3c4b)

* Full Natural Outer Join -> It is not cartesian product. It is **natural join** only.
* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fe79127-12bc-41c2-9a13-587854af4ed4)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11ec61c5-06d4-4ed9-a633-23fc0cc7b335)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19934892-df50-4005-9983-8d9c367f7fb1)

* Trivial functional dependency -> Right hand side is a **subset** of the left hand side. [**IMPORTANT**]
* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06f62438-a182-40fc-818c-a5388632cad6)

* Question.
* Whoever becomes the **super key** that has to have **XY** within it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e86f4a01-d3d2-427a-9675-d4e324523d11)

* Option **B**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7926f999-a3af-49ae-ab23-32fb373a6ec3)

* Question.
* Irreducible equivalent -> Cannot be further reduced.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fec180d0-e3e1-4dec-a583-a0f4a5b2bc3d)

* Option **A**. [**IMPORTANT**]

## 13 (2018-2023)

* Link -> https://www.youtube.com/watch?v=3-L40MliI50&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=13

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/107845f9-dca7-460e-8e82-18757e16502f)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f23e14a2-c886-46fe-9d22-23b9e8fac56c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d4e2d34-4841-47ef-8243-703eccfb281a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6386ecac-c5a1-4395-90c6-85c582358b2e)

* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65f725e2-3ed4-4ed7-b873-193600d4fdb4)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e2ce0d9-58c9-4b37-b024-f0b7130c7ac2)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49c56d33-59be-475f-abef-eee4f3f61066)

* Question.
* If there is a dependency from **non-prime to non-prime** then it is not in **3NF**. 3NF is violeted. [Option **B**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02afe0b0-fd97-43f4-9729-169d36722fe0)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e554c35-edde-4b32-9e04-c41f06cee8bb)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cc105f1-9ecf-4ac4-8ce5-d8d4a123c418)

* We have a whole row now which means that we can **derive** all of the attributes of **R1**. It means that we can **derive** all of the attributes of **R**. So it is **lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd5ccb97-138b-4682-ad84-8f45d079e24e)

* For any particular row, we didn't get all of the attributes.
* If in decomposition if we have **more than two tables** then the **above method** is very easy to use and very understandable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/106fadb6-6458-4529-8f46-293d874fc020)

* option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00cc1911-cd32-4de6-bfd9-c52779251a5f)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/081e03f4-7312-4995-bedb-18723e5272d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8feb1ae-a245-4603-b40f-47efe22e455e)

* **mgRId** is the **foreign key** which is referring to the **primary key(EmpId)** of the **same table**. 
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c442b02-12cd-4b43-808f-1c213936131a)

* Question.
* Just find the **closure** of the **LHS**. We will easily solve the **question**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6c0f16c-8f9f-4282-8834-ef2c1fdbc2dd)

* Options **A, C and D**. [MSQ]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e4dca7d-9205-4ce7-b254-f6cb94af7380)

* Question.
* If all attributes of a relation are **prime attributes** then the relation is in **3NF**. [True] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c624cf9e-a75b-4184-a202-729f32c7c5e5)

* Option **A**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc8a03a6-ee1d-443b-bb2e-a517fb243ec7)

* Question.
* Find the **candidate/primary keys** and then find the **combinations** with the other attributes.
* **A and B** are the **candidate/primary keys** and **C, D and E** are the **non-prime attributes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40c5bc76-e76d-419a-8483-fed3b768aef2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddde5169-a095-4aa4-969a-deca456d4751)

* Answer -> 2 ^ 3 -> 8. [C,D,E -> 3] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63b9bdc7-f23b-4f5f-ab4f-537b9bed7554)

* Question
* Degree/arity -> No. of attributes/columns. [**IMPORTANT**]
* Cardinality -> No. of tuples/rows/records. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2a8066b-194a-4884-8c4d-c08610a5e1db)

* Option **A**.

# PYQ

## 2021

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e902a7ae-530f-4e34-b3a2-ab1b0c507422)

* Link -> https://gateoverflow.in/357439/gate-cse-2021-set-1-question-13 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d482da41-dc44-46df-8b87-28ced379fbbd)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5aa2476-b034-494a-8e68-5970ab664b49)

* Link -> https://gateoverflow.in/357428/gate-cse-2021-set-1-question-23

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21df41bb-2fd3-48f5-9820-800b718c4290)

* Answer -> 205 OR 820. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1d8458c-c509-4a81-96d8-61cf2d07450f)

* Link -> https://gateoverflow.in/357424/gate-cse-2021-set-1-question-27

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/342ed9e6-2431-47e5-ae71-f5b4b1d9a7d8)

* Option **C**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7e627ff-a3c7-4a05-89e8-17ee109e245e)

* Link -> https://gateoverflow.in/357419/gate-cse-2021-set-1-question-32

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c5e3eda-6e2f-4634-a6ce-7d0d81b9c122)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05f1214f-1e95-44b8-9020-a459e1492c77)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b40eb8de-4a3b-4b2b-beb6-2dbcbdc3a683)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/764dca3d-8e4f-4f3c-9cb2-3ea5dc881b77)

* Option **B** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7c64489-5e69-4498-9374-f8a9f524a6e8)

* Question.
* Link -> https://gateoverflow.in/357418/gate-cse-2021-set-1-question-33
* Link -> https://www.youtube.com/watch?v=3-L40MliI50&list=PLQWaMUgfBFZfrrhCxmGixhb8KBddocPsa&index=14 [40mins]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b14aff4-d876-4a02-abfd-d8292ce52b6c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58e7fdea-7efd-4fe0-9059-ed9d335c5b40)

* We are just putting the attributes which are given to us from **R1 to R4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7d85724-8145-430f-9865-14e250b3f3fb)

* Now we will look at the **FDs**.
* Among the four of them(R1 to R4) we have to divide the **FDs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41f72d8c-fcc6-4e58-913e-5b3d240b49ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/872cf215-545f-4c87-98e2-16b7a5188440)

* For, **P -> X**, whenever there is **P** in a row, we are putting **Circle** for **X**.
* For, **Y -> ZW**, whenever there is **Y** in a row, we are putting **Circle** for **Z and W**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b33a372-237a-4a0e-88c7-2a8668dca72d)

* For, **Q -> Y**, whenever there is **Q** in a row, we are putting **Circle** for **Y**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec63187d-ecfc-481f-8bdb-454279d875ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/474728fc-074a-4a0e-894b-22fab4a1cb63)

* As we got **Y** in **R1** that's why we put **Circle** for **Z and W** in **R1** row.
* We are checking if we can cover a **full row**. If we can cover a **full row** then the decomposition is a **lossless** decomposition. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b06ffd1-1f6d-419c-8eac-be9ec068bd71)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edafa89d-2b89-4482-9f71-18e47b44edd7)

* We got two **FDs** for **D2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9be3cb5-10e4-46c2-93d2-ed8f62af3c4f)

* For **Q -> Y**, wherever there is **Q**, we are putting **circle** for **Y** in that row.
* For **Y -> ZW**, wherever there is **Y**, we are putting **circle** for **Z and W** in that row.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34b6f63d-f256-46a6-8d19-dd74ebc27560)

* As there are no more **FDs**, so we will not get **T and X**.
* As we are not able to fill a **whole row**, so the decomposition is **lossy decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11db2ffb-b7ef-494f-9186-b2f6a992d1c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5d00083-ed58-4fd5-a0c0-3458013ae80c)

* Option **A**. [**VERY IMPORTANT**]
* If we have **more than one table** in decomposition then the **above method** is **easier and understandable** to use.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69f06cca-37c4-45dd-a461-9425bf5337a6)

* Link -> https://gateoverflow.in/357534/gate-cse-2021-set-2-question-6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46e8e65b-7acf-4e91-9622-5ba40f4c3147)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/881eb765-27ff-4127-a14f-b1624335f70b)

* Link -> https://gateoverflow.in/357519/gate-cse-2021-set-2-question-21

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52ece7f3-c409-4676-9cb1-b72243a4bf48)

* Answer -> 698.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f154b80-d934-4960-8294-94d01116cfc7)

* Link -> https://gateoverflow.in/357509/gate-cse-2021-set-2-question-31

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5192df3c-d6ce-4720-9ff0-20e31dc9de61)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd7716ce-533e-4373-9f2c-767be089fb78)

* Question.
* Link -> https://gateoverflow.in/357508/gate-cse-2021-set-2-question-32

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dd52b90-ea30-4a33-9d83-2cd9b49b7a71)

* There is a **diry read** because **W(X)** is performed in **T1** and then **R(X)** is performed in **T(3)** after the **W(X)** is performed.
* Option **B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f40b2c92-f9d6-4f68-afa9-aab428855e10)

* Link -> https://gateoverflow.in/357500/gate-cse-2021-set-2-question-40

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7974c8d0-08f2-49b6-888d-51390d1ace3b)

* Option **A, C and D**. [**IMPORTANT**]

## 2022

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b7047b5-1e02-4faf-8642-e6b004f2d48b)

* Link -> https://gateoverflow.in/371932/gate-cse-2022-question-4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7eff1eb4-f034-47c5-8c4a-58aad6ef8c9d)

* Option **A**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a86219bb-9c61-42b9-a54e-0f4196c77061)

* Link -> https://gateoverflow.in/371921/gate-cse-2022-question-15

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5b5a6ba-9a32-4612-817e-90ab65eb01ee)

* Option **A and B**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e370d65-939a-42e2-b163-6d4abeb53cbf)

* Link -> https://gateoverflow.in/371915/gate-cse-2022-question-21

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5a18445-9e16-478f-86f2-95db9103c523)

* Answer -> 8.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63fa0e05-5934-4331-ad26-b4ce7fd9b764)

* Link -> https://gateoverflow.in/371907/gate-cse-2022-question-29

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/581a5512-7cdb-4df9-965b-87f3c5849ec4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94115819-92bc-4289-a97f-1ea4a52a9dc2)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ba992e-5bb3-40f6-ac78-42fa2713372d)

* Question.
* Link -> https://gateoverflow.in/371890/gate-cse-2022-question-46

![image](https://gateoverflow.in/?qa=blob&qa_blobid=5747314665531169248)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccea93fd-4335-4d94-b897-8ae2035cf37f)
![image](https://gateoverflow.in/?qa=blob&qa_blobid=3306154045518037619)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ce72ec4-f72b-4797-9040-28ab2c794460)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b29a653b-894c-4f29-b132-c67093486adf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71f67f4b-950c-44a2-979f-8e812a906b64)

* Answer -> 2

## 2023 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/743c8b69-2f4d-4848-8f8f-025554a57b18)

* Link -> https://gateoverflow.in/399306/gate-cse-2023-question-6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ca56f87-a998-4cbe-9726-1d693a1586d1)

* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/869f65cb-1b54-4918-beb7-7283559b48f1)

* Link -> https://gateoverflow.in/399260/gate-cse-2023-question-51

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e63c58cc-f96b-4341-baca-d2635be9b34d)

* Answer -> 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/645349c5-60bc-48f8-822a-e5cb6ef4c1d1)

* Link -> https://gateoverflow.in/399259/gate-cse-2023-question-52

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb1f5892-bdf3-448a-9e9f-d9ac9de080a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49da9ec3-cafa-41c4-a290-089a452348b7)
![image](https://gateoverflow.in/?qa=blob&qa_blobid=5724532638357271697)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcd70fd8-9e4a-4a4a-8a5b-b0fc8a6df614)

* Answer -> 6 Blocks. [**VERY IMPORTANT**]















