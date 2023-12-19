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























