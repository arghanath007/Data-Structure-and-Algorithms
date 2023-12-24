## sql part-III (7) [26th June 2023]

* In a single table, two columns cannot have exact same name.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3e90137-a6f0-43c3-8ea0-71fecbebf1ea)

* Access column using **dot(.)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2181310c-72b1-4215-a825-a4891318e39c)

* select student.name from student;
* select student.name, student.address from student;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6b52fcb-ddad-4ec8-8a48-5cc63a834a1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fd0efc9-9ba0-4016-997e-6c67cd71bed7)

* Why is **where** used?

> For **filtering rows** or **filter** out some rows.

> We are writing the **condition** so that we can **filter** out some rows which we need, to get the **specific rows**.

* **= NULL** -> We are comparing with the string NULL or "NULL".
* We have to write **is NULL** to compare with **NULL**, nothing value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b954858e-5b56-4c31-a574-cf2e61c1cd0b)

* **= NULL** and **is NULL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38ffa0f9-30c8-46a7-82a0-a208ae4be6c1)

* **Not NULL** sql query.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90759a6a-3485-4605-9cfd-fec7519303bd)

* Is the table possible or not?

> **NO**, the table is not possible.
> As **Xyz** and **XYz** are both same as there is **no case sensitivity**. We also know that **same name columns** are also not possible.

* Column name, table name, keyword are **not case sensitive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92310db2-abd4-4ce7-8c25-33491b166f07)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85803a18-d054-4c9e-82d2-5d3c08f39b46)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6fd5537-775b-4be7-a368-210e2c32c814)

## Limit

* Used to limit number of fetched records from a huge database table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ad472c8-4f89-4d36-8168-7b4d3e7ab752)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19328153-6ce8-458a-a429-a9e75c69d4f7)

* select * from customers limit 5;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/160fdf98-b185-4821-be40-4d0e3510a928)

* Fetch **4 records** after starting 5 records
* limit x,y
* leaves starting **x**  no. of records and fetches next **y** records.
* select * from customers limit 5, 4 [x -> 5, y -> 4]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba53f861-cdae-40ac-a0f0-e52620bca1ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a29f11da-5420-4e0d-90a9-5b09c04c2401)

* select * from demo limit 8, 12;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec746e8e-ce00-4880-a458-4d14f7dd8332)

* select * from demo limit 5, 10;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f08ffd5-a142-4990-8e2b-a4e5f62ba2bd)

## Aggregate Functions

* Performs a calculation on multiple values and returns a single value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25771cbc-c026-4248-a23e-69811a05b980)

### min()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7e6f985-aa8b-4d56-992d-73913227abae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12c7a821-33b4-4203-8c19-99aa4a57bf31)

* SELECT min(price) FROM Products;

### max()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6134877-8681-4d48-823d-620c973fe6fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f18ab52c-6b17-4dc1-a4ff-31c12f12dda5)

* SELECT max(price) FROM Products;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c5561e9-5ec8-430c-a576-3d8646290afc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79d5aac0-f29b-4706-920a-e8c63960733c)

### sum()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97ed8828-fa67-49ce-b167-09e1790e27ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03395c6b-a2e5-49bb-9d22-793837703519)

## avg()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94ee2a8f-af17-44ef-b724-94d1981ac203)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ab3a686-3d02-479e-9924-9f212b3f8473)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14315cca-4bfb-4463-83d3-a55a7891b626)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9f70e56-e15f-4e18-9bd1-7d975fdb7f36)

* SELECT min(customername) FROM Customers;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/793ac12a-4a28-4269-b951-e0d604e57a25)

* Arrangement

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed2e525f-ae32-4e7c-bf12-2fa2fc65c9aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d8e25f1-ad6a-4e28-b6bf-e7c4127d9530)

* **min() and max()** -> Works both on char data and numbers. For char data it returns the first or last record according to **lexicographic order**.
* Lexicographic -> Alphabetical order.

* **avg() and sum()** -> Will work only on numbers. Returns zero(0) for others.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98a88697-0f5a-4a60-8d73-38a764aa2b43)

### Count()

* SELECT count(price) from products

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e649bdd-efb0-4d5b-b62a-6e7aee5cfb62)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72cd5392-b652-41b4-ae7f-9feb66b33148)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/844e830e-837a-49c3-9885-712e8fb6593e)

* Return how many customers are from USA?

> select(customerID) from customers country= 'USA'.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2eb2a7fc-398e-4abe-8535-7bd9aa076411)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c24bca67-2d6f-45cf-8d44-c7908265e62e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6a192ba-78ba-4296-90b1-6b66c0c2363f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b970ecbb-9ed4-4409-8ad8-292eae527f80)

* Example
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23de4729-be9f-498b-b180-0bc9e5c23055)

* Average -> Summation/Count -> (5 + 7 + 7 + 7)/4 -> 26/4 -> 6.5.
* We will not count the **NULL** as there is nothing over there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3bab3bf-748e-4994-b891-dfddbe88ce4c)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/153b4984-ae12-4646-b112-27ef5f969eb4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f84a40a8-8240-4be7-9dbf-118b3dc00f17)

* Select count(*) from itemmaster [**IMPORTANT**]

> **8 rows** will come. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5122d88-747f-4cc9-bdea-dadad74a9ec1)

* Aggregate functions return a **number**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdd1a52c-22ca-4c53-807f-c049494b81c0)

* count(*) will look at **no. of rows** that's why it will be **8 rows**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e20939b4-45f7-406a-ac04-cb9362c496a3)

* Yes.
* As **itemp** is a **column** it will count the **not NULL** values**. [**IMPORTANT**]
* As **itemmaster** is the **table name** so it will count the **no. of rows** in the table. [**IMPORTANT**]
* create table itemmaster(item int, itemp int)
* **Creating table**
* insert into itemmaster values(1,2)
* **Inserting values into the table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c0f6080-56db-4589-922c-4e37cb35a30c)

* Creating table and inserting rows into the table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdb90b81-9f51-4fcc-9a7c-02d8ebe0665d)

* Output.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c51cfd5-5a0c-4fab-9997-55e5aadf6a58)

* NULL means **nothing**.
* As it is **nothing**, so no need to include it when counting average. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04c98ed6-5ef4-40f1-868e-c0f63fcdd01b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f3686df-e148-41cd-b486-1e0c6d02677b)

* For sum we will take the score of students who have scores and ignore the **NULL** rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6795585-8d94-4977-9096-7e8b58eb8315)

* Question
* select * from customers where country = 'USA' or country = 'Germany' or country = 'UK'; 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dca618b9-f9d4-4212-9904-ca7197a49a97)

## IN operator

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d15cdab0-4795-46bf-b23c-32c6bb295dba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54fc79bd-c71b-45b2-b3aa-ba857bcb16c8)

* select * from customers where country in ('USA', 'Germany', 'UK')
* select * from customers where country in ('USA', 'UK', 'France')

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c13be76-b610-4304-88f1-1085d62aeb5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e7990d7-a27e-4eaa-bd22-ed0997647aeb)

* List of all customers which are not from **Mexico or Sweden**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7290955-9ef7-4227-a3e4-07cbd6d206c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fffba6f3-a2f5-4ccc-ac58-441646e96ed2)

* select * from customers where country not in ('Mexico', 'Sweden')
* **Not** is in the **full condition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bd49890-1acc-4368-b75b-c1e0ca118e52)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64e7564e-0aac-4de0-a9b0-45d54acf520f)

* Sign change

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34648a95-1a08-414c-b40a-2cb7f7269127)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87d58641-b957-454f-a3c9-77ad8bc67321)

* select * from customers where country != 'Mexico' and country != 'Sweden';
* select * from demo where name <> 'Created by' AND name <> 'SQL Online' AND name != 'Twitter'
* select * from demo where name != 'Created by' AND name != 'SQL Online' AND name != 'Twitter'
* Different way of writing the above query.
* != -> <>
* Both give same output.
* Link -> https://blog.sqlauthority.com/2013/07/08/sql-difference-between-and-operator-used-for-not-equal-to-operation/

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf7939b3-3aec-40da-8f02-460afa19e5b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a8488b3-32c9-45c4-a4a7-d2d00ebd2846)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a535a7c-0267-4104-a744-dfba35b323bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44a0e837-c8bf-46bd-b737-06fd003f09f6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02d81a72-e6c2-4b4a-a5cc-641bb7443eec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e027efe-2e70-4211-9437-a89144618781)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b3d8459-e431-4f49-a8e7-fc9ca90a5a1b)

* Both give the **same output**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd7402ab-6a7e-4f52-9292-5b702d2d7d6f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cc91892-358a-4a29-a842-f6fe70c6d9e8)

* Subqueries

## Alias

* Used to give a temporary name to a table, or a column in a table.
* No spaces allowed

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0585fd8-32f5-424c-bb94-a299ea3985a3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/769c0204-8335-4192-a00e-1587b08b6e66)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0dbc3f3-4d3f-4f82-b01b-7325915cb2ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c446d5ee-2326-44a7-976d-12ea454ebeb6)

* Alias should be unique.
* select * from customers as cust
* select * from customers cust

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddab2b00-9c1a-400b-bad2-e248a027d653)

* select cust.customerid ID from customers cust.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/613db393-bbb6-4e0c-9744-ce395341b813)

* select avg(price) from products
* select avg(price) as Average from products

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37c3f97e-2ab3-477d-8dd1-84501b5d722a)

* No spaces allowed in **Alias**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc768781-aeb3-4f94-b1a3-c991eeaa07e7)

* If we give **keywords** in **single or double quotes** then they work as aliases. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b62ae5e-bba2-4048-8e09-1b12a0dc2d81)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbd8592d-ebfc-443c-a5c4-1a945abc56eb)

* Alias examples, where can we use alias and where we cannot.

## Query Summary

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24d7cae2-5ccd-4011-badb-d103fd5bcb63)

* from -> where -> select [**VERY IMPORTANT**]
* This is the **running sequence** of the commands.
* Limit runs at the end.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/805ad8b4-08b3-4b91-b851-22f8f9ad7682)

## SQL Joins

* Needed to retrieve records from more than one table collectively.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea690ee3-e864-4bea-a405-6989d761a81f)

## Types of Join

* Inner join -> Also called as **natural join**.
* Left Join
* Right Join
* Full Join
* Self Join
* Cartesian Product

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0e94386-ccdf-40c0-94a0-e212c8720481)

## Cartesian Product

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49c2eade-104f-4363-afcf-39f6ee88982a)

* Cartesian Product will return the product of each row from one table to all of the other rows in the different table.
* When we do **joins**, how many columns we have?

> Left side table  + right side table combination is the **no. of columns**.

* So it is **3 + 3 -> 6** columns in the **cartesian product** of the **above tables**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/628f410c-8434-46e0-8465-ae522353b099)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7152caec-7a5e-4ba4-a35f-f87ed3c2dd77)

* It return combination of each row of student table .

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe40c317-1f63-4071-a408-eb1d86706e3b)

* No. of rows -> 4 * 3 -> 12.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd14dc8f-af8f-4ae5-b6e2-f268c78b4661)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d926bd79-6582-4c70-93da-522c7f221634)

* Cartesian Product between **customers and employees** table.
* select customers.customername, employees.EmployeeID  from customers, employees 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/335315aa-7913-4165-a675-e54639416e38)

* select customers.customername as CustomerName, employees.EmployeeID  from customers, employees

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c608afb6-9bab-47ea-8fd0-2614b47d4c05)

* Cartesian Product is **costly operation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41ca0082-6711-4af6-bced-d071258c5eca)

## Doubt clearing session sql queries(8) [28th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/684a9c4a-0b52-4993-b780-7292feb29c84)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ade1732b-37b9-4b4d-8d6a-827c2a0e2a35)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1943e8ab-339a-4d55-a1f0-d85edc55237b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5878c6a9-850a-473e-ba0f-3751650b42d9)

* Table design refinement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/daf935ab-8ba3-4885-af22-f49bf07fc04e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6229d434-03db-45fb-826e-e8205720cdef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22adf47c-a1c6-4c72-967f-f6711b49029d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9fff723-ba8a-4097-b1fb-c938a818825a)

* Independence -> We can store the data anywhere.
* Flexibility
* Data Integrity

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/690b2553-5a28-430b-ba6d-a5bf3b1f0e27)

* Tuples -> Rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/250a38c7-7707-4b3e-96b7-c475aa9c20d5)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ea94500-1dd4-43ed-8cef-6fc88bc28fd0)

* Table

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a68627f-b045-4122-9ed3-69098ff2856c)

* Question.
1) select * from customers where country IN ("Germany', 'Berlin');
2) select customername, address, city, postalcode, country where contactname ='Yang Wang';
3) select * from customers where customerID <= 19;
4) select * from customers where country NOT IN ('Germany, 'UK', "USA');

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0163990e-9232-43b4-8d36-61af8a861bd7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56284f5b-6bfb-4260-9b84-31e1e33ac8b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/732c698f-cdf3-446a-9cd4-564c23b82fda)

* We don't know if the table is **sorted or ordered** using **customerID** or not, it is better to write **customerID <= 19**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e38e4b01-9b50-41b3-9246-c2f1df314979)

* Yes, limit could be wrong there as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55f87089-80ab-43bc-8188-e3b9b399df29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c94d946-2322-4fcf-8201-9a7d4161ea5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c863fe1-f1c2-4853-b38c-6c33b8ebc157)

* Yes. All rows will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89e3785f-6b9e-49e4-b57d-d0cf0b9a7040)

* Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ef2446f-bb8d-42b0-b5d2-1ecc5658cc47)

1) select * from products where supplierid IN (1, 2, 3);
2) select productname from products where price between 5 and 25;
3) select supplierid from products where categoryid = 2;
4) select * from products where supplierid = 2 and price > 30;
5) select * from products where price > 50 and supplierid != 6;
6) select * from products where price < 30 and supplierid not in (2, 6);

**OR**

select * from products where price < 30 and supplierid != 2 and supplierid != 6;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5f94ca2-4444-472a-a2cd-3fe50089586b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02028df2-30a9-4c90-8ad0-d81d8f74dbfb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0213b735-ce40-4a7d-b52e-73e8564e660c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dae0f30-12b2-4c16-b57a-bc3ac49af27a)

* Solutions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5785d4da-44dd-4884-9b41-9aefb44f3f13)

* Types of SQL Joins.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3955cb5f-b7fa-447b-b25a-082fc8bc2390)

* Cartesian product.

## Inner Join

* We need **one** common column for **inner join** to work.
* Inner Join -> It will give those records that are in the left table and are matching with the column records of the right table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f6e05ed-78fc-4614-a464-298a78d41440)

* Table.
* Query Syntax of **Inner Join**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/783f9aab-151a-4673-afa1-8aafbb8a5b4d)

* select * from table 1 Inner Join table2 on table1.column = table2.column
* select * from table1, table2 where table1.column = table2.column

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5543eee1-4f03-4459-a940-6164567e57b7)

* Output

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7cf8ea2-9e97-4686-ac29-13485dfb4b2b)

* select * from student inner join library on student.rno = library.rno
* select * from student, library where student.rno = library.rno
* SELECT * FROM products inner join suppliers on products.supplierid = suppliers.supplierid;
* select * from products, suppliers where suppliers.supplierid = products.supplierid;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eccc9e58-ce13-46cd-b656-d4b13e65671d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78e9c1a1-cc8b-400b-b12c-8964557e95b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/169486b3-9ca3-44b1-a1d1-9a0e71e8ecf4)

* Cartesian Product -> Cross Product

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6cd093e-5a00-4e47-9e43-e3985905b730)

* select * from T1 inner join T2 on T1.A = T2.A
* select * from table 1 Inner Join table2 on table1.column = table2.column [Syntax] [One Way]
* select * from student, library where student.rno = library.rno [Syntax] [Another Way]

* **Syntaxes** of **Inner Join**.
* [**IMPORTANT**]

## Left Join/ Left Outer Join

* Left Join/ Left Outer Join -> Entire rows of left table and the matching rows from the right table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/547ddfc3-bf20-44a9-8285-3605addbcce0)

* select * from student left join library on student.rno = library.rno [Syntax] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5a6edda-7537-4c84-84a8-7f61a131a63d)

* Result set

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13f093f7-18ce-4971-a9ca-2720ac052d8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75b36336-2c3f-4af7-b840-d701efeff73d)

* Not necessary
* Min. no. of rows in result = no. of rows in left table. [**IMPORTANT**]

* In the left table we have **4** rows and **3 rows** in the right table. How many max rows we will have after **left outer join**? [**IMPORTANT**]

> We will have **12** rows max.

> All **4 + 3 -> 7** rows from the two tables are all identical then **4 * 3 -> 12**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b4ce997-56b6-477f-a31d-3609d39ae92b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41a04455-141e-43f3-a0fc-7eb6d1edb5f4)

* Example.
* If all the values are **distinct**?

> The no. of rows will be  -> No. of rows in left table

* Min. no. of rows in result = no. of rows in left table

* It is **true** when common column has unique values in both tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06c5317f-b5ac-441c-b4c2-b9bda502ff94)

## Right Join / Right Outer Join

* Right Join / Right Outer Join -> All rows of right table and only matching rows from left table. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e82fb62d-8e6d-4d68-aefb-9970c1b8185a)

* select * from student right join library on student.rno = library.rno [Syntax] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42d8644d-e1cd-4471-9b25-1bfaff75fa07)

* Resultant set

* **Left and Right outer** join are **complement** to each other. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14f2ca0d-51e7-4688-9ee4-e1fc624a46f8)

* Lib -> Library table
* ROJ -> Right Outer Join
* Stud -> Student table.
* LOJ -> Left Outer Join
* Yes. [**IMPORTANT**]

## Full Join/ Full outer join

* **Full Join/ Full outer join** -> We taking all the rows from left and right table and, whatever matching data from left table has with right table we will write it and if it is not there we will write **NULL**. We will take the matching data from right table which are matching with left table and if not there we will write **NULL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38d6e7f1-8bf3-48b3-bb8c-7d7b8f1111e6)

* select * from student full outer join library on student.rno = library.rno [Syntax] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b02061e-d61b-4449-8faf-5c42d32f194f)

* Output from the **above query**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11a1c06d-6722-410b-a1a0-24ddf7088414)

* **Inner Join** -> Only the matching data we will get from the left and right tables from the **common column** between the two tables.

> We can say that **Inner join** is a subset of **left and right** joins.

* Left Join
* Right Join
* Full join -> It is the **superset** of **left and right** join.
* **Left and Right** join are **subset** of **Full join**.
* So **inner join** is also a **subset** of **Full join**.
* They are **subsets** and not proper subsets.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc33d274-c6d9-4f1a-9c18-0ad211a77e86)

1) Result set of inner join -> (subset) -> Result of left outer join
2) Result set of inner join -> (subset) -> Result of right outer join
3) Result set of right join -> (subset) -> Result of full join
4) Result set of left join -> (subset) -> Result of full join
5) Result set of inner join -> (subset) -> Result of full join

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e269146f-b0c6-45f5-b7e2-be0b5edf84a2)

* Question
* Option **D**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43486471-8f89-45a9-a204-8ba6745a25ca)

* Answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a70e037-d758-4135-8a67-24348aa3d824)

* **Cross product** is the **superset** of all of the **joins**.
* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a212c449-b350-4f9b-9e50-323afb61abcf)

* Question
* Option **D**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39ef5f32-2482-48ce-b274-5257648cddf1)

* Answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d36ced0-06fd-42be-a04d-3ab5287303be)

* Finding the **no. of rows and columns** from the **Cartesian Product**. [Formula] [**IMPORTANT**]
* Cartesian Product.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd8b653e-8ac5-4309-a0da-b27893ca35d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/881ce19e-caf8-4ee1-8091-608609e8fd34)

* Yes.

## SQL part-IV (9) [29th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0af94783-4409-48bb-ac7f-46f589b93a42)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76c59ce4-4b4c-481c-9b55-91d38b9ba4b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a417778-44a7-4e9a-93b3-13d6efa90a35)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/339029e1-2f1c-4834-84f1-c3b05f7ccd57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/715f2426-0e28-4449-942e-aa58a6917697)

* Combination of **Left Outer Join(LOJ) and Right Outer Join(ROJ)** is **Full Outer Join(FOJ)**. [**IMPORTANT**]
* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ba49c0d-113e-4953-9bde-1f58d9a3b2b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e93a91f-7b5d-4297-9219-6c9aa752b566)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d274f37-9acd-40df-b0ce-405fb8a7a39d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2676943c-b345-43dc-a4e2-5defad2bb066)

* select customername from customers inner join orders on customers.customerid = orders.customerid

* select customername from customers, orders where customers.customerid = orders.customerid

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6469faf9-7f6d-4b44-b6f0-59525027fd98)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da3a22eb-a612-4ab6-b2ef-b46bbdb19973)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43f24558-1d97-47af-8405-3f1411cb36f7)

* select distinct(customers.customerid), customername from customers, orders where customers.customerid = orders.customerid

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ffc3940-1eb9-4837-a448-50a8cbceaa8d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/982f51b2-cbd6-4c5b-9c02-227c8201b274)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a43d7f3-e0f2-4e57-b620-27542a2bd73f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cef2ffc8-6419-4077-b5c0-d2b2bbedf576)

* select orderid from orders inner join employees on orders.employeeid = employees.employeeid where firstname= 'nancy'
* select orderid from orders, employees where orders.employeeid = employees.employeeid and firstname= 'nancy'

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c82a3a23-ec42-42c5-93e5-4b42f6f6448f)

* Join will be on the **filtered** data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b2d4420-f6fa-414e-b522-3a593f5d780c)

* Ordering. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d3e3147-9425-40bd-88f0-31ee7003e605)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/303499b2-7383-42eb-bdb8-31a38d615739)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cbb3b5a-7c9e-46e8-9374-d66a663caf64)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5b924ca-8472-4d14-b994-ee188bfb9404)

* select dname from drivers inner join driver on drivers.did = drives.did; 
* select distinct(dname) from drivers, driver where drivers.did = drives.did; 

* We want those drivers, that are both in **drivers and drives** table. That's why we did **inner join**.
* select drivers.did, dname from drivers, drives where drivers.did = drives.did; 
* We want to know the **name of the drivers** who have **driven atleast once** in a race. [Question]
* select distinct(dname) from drivers, drives where drivers.did = drives.did and racedate is not NULL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b76b8254-dd77-4380-99ed-4f2fd38bd0da)

* Find name of all those students who have enrolled for atleast one course?
* select student.sid, sname from student, enrolled where student.sid = enrolled.sid; 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe2561e5-c172-49bf-9bed-05dc3908199f)

* Find name of all those students who have enrolled for course with id=5.
* select distict student.sid, sname from student, enrolled where student.sid= enrolled.sid and courseid = 5;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bae1c147-0dfe-48b2-9008-55d9170a1c56)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bfdce2b-a9e1-406e-b5fd-41962e7579c1)

* find name of all those students who have enrolled for atleast one course during 2022.
* select distinct student.sid, sname from student, enrolled where student.sid = enrolled.sid and duration = 2022;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19d8f11b-43e6-4f2f-ab31-49c76bec01ca)

* Left Join
* list out all student information and if they enrolled for any courses then those information also.
* select * from student left join enrolled on student.sid = enrolled.sid;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2c0298f-2b44-4966-96be-8e2eb9fbef6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb95c81e-cf64-45ed-8485-b2fec0e3b464)

* find name of all students who have enrolled for course 'DBMS'.
* select distinct student.sid, student.sname from student, course, enrolled where student.sid = enrolled.sid and course.courseid = enrolled.courseid and coursename = 'DBMS'; 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2688ae71-e46f-4fc5-a6db-8537b2861943)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86347681-4621-4b71-9d16-754c5eb6d3fd)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f4de693-ddab-436a-8277-2ad06d0efca0)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7040b31-908d-4918-ae93-798e3ae231fe)

* Another way of writing the **query**.

## Self Join

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fb1506b-78e6-4e83-a087-8fbce02c9ae1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27ce8c66-af25-4a97-bbc7-251ffa7485bd)

* Yes, Point.
* This is not going to give us the **output** we wanted.
* select name from employee where eno = managerid -> **Wrong**.
* Find name of all such employees who are managers also.
* We need to make a copy of the **table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25e32981-6ba5-46dd-8c50-9d90c8f558a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28d695f0-945a-4427-b73e-32333e682f0b)

* If we have to do joining then we will do **joining** with the **same table**.  
* But we don't have **two** tables.
* We have to join the table with **itself** only. It is called as **self join**.
* If we have to join the table with **itself** then we will have to do **aliasing**. It is **compulsory**.
* We have to assume they are **two different** tables and then do **aliasing**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a397491-2eca-4c5e-9cf3-c6f9051a3110)

* Find name of all such employees who are managers also.
* select distinct E1.name from employee E1, employee E2 where E1.Eno = E2.ManagerID

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82515022-4eb1-4735-ba84-edd345f2a684)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6822cc53-f7dc-4344-8379-0575e5f00931)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33805d8e-5ac4-4f7a-a8e2-9ad38a0abcc2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e097efbf-20db-40ce-8741-d5c69f19e224)

* Find name of all employees who are having managers?
* select distinct ename from employee where managerid is not NULL. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4ea76a9-d712-42ec-bf4a-a5bee5e6a7e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/128bc20e-4f19-4f4e-b66c-5fbb431d489c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8547ba7d-3719-427e-bde6-23eef34dff5b)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0764acbe-3a98-45ca-a326-3a92205f694d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d78fed66-3c21-43bc-ad91-0196d904dfc9)

* Matched with **NULL**. If **matched** with **NULL** then **return**, otherwise **no return**.

## Relational db design functional dependency(10) [30th June 2023]

## Group By clause

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/640a6a43-2847-4203-ae82-d6a26bc49f69)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ca60d2e-c297-42be-8c7e-4de608ddfaf5)

* Used in collaboration with the select statement to arrange identical data into groups.
* Select information in **groups**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82372002-5352-4ff0-9c52-1ef84904e3fe)

* It will give all **rows and columns**. All records of the **student** table will be given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04f1c611-6519-4034-8ef1-3906de4456ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8d95687-43cb-4b32-89c5-c7d3d350ee04)

* Select * from demo group by name;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5706804-3e1c-463d-9384-871cf68ed7f2)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e9f5c7b-0076-4c86-bee6-a1ea9408408d)

* For all of the **unique values** of **dob** column, we are creating **separate** groups for them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cec7a11e-26e4-4168-8cb3-14cb90328bbc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cff86ee-b790-45b6-8c31-109ba28362e7)

* select * from customers group by country;
* For **each country** there is a **separate group** for it thanks to the **group by** clause.
* select country, count(customersID) from customers group by country;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33f02425-de2e-4934-bed7-7b8cee2a1088)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86315cdb-34b1-42a3-a3c7-33f97d02a0bf)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d986bc2a-4c75-45f5-8b04-a0203ecce4e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b4c26c7-5d3a-45ac-a7b7-7cc55cf57c25)

* Yes. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2f91a29-09ee-442b-9197-137769d833c8)

* 4 rows are selected. [**IMPORTANT**]
* select * from student group by Rno;

> **5 rows(1,2,3,4,5)** will come.

* select * from student group by name;

> **3 rows(A, C, D)** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/583a9a9a-ab0e-4789-bae6-33c26fd1cdaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86a77073-a0a6-4e5b-add2-bb2c48035a4c)

* Automatically **distinct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6dec18a-0a00-47e0-a800-0d361cf0964e)

* Syntax.
* From -> Where -> Group by -> select.
* Sequence [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a30d75f1-037c-4483-9766-3a1fd66da8d9)

* Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a140c79d-a4bf-4206-899f-e68560b98fe9)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48131301-1ddd-42c7-aa3e-1500930e85df)

* select categoryid, sum(price) from products group by categoryid;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76790cde-db3c-46af-a5ff-038a29e0ee0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a32c5316-43c2-4742-9fe2-f2a1ea07092e)

* The column on which **group by** clause is performed/done, that must be included in select. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb98ed73-6594-4b51-9f7e-e347e07806c7)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edfe86a3-df35-4f37-8c56-095757a31f06)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4331270d-251c-4ef6-aea7-32d2762b00f1)

* select categoryid, min(price) from products where price > 20 group by categoryid; [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0e65b7a-3e95-4b3f-9313-f8f8b4269758)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f65cf106-144c-4404-896d-df8c2c85657b)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/300aec39-70e9-422f-bfa1-0df464f4ac96)

* select categoryid, sum(price) from products where sum(price) > 200 group by categoryid; [**Wrong query**]

* We are putting the condition after the **group by** clause but **where clause** runs before **group by** clause. We need a new clause here, which is **Having** clause.

## Having clause

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65ddb9fd-f58f-4cda-9c9f-2dc7aaf4ba5e)

* Having clause [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11394bbd-ab0c-4d47-84fb-6ca328058562)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38ac4cfe-46a6-4466-8d06-777daeda4c6b)

* select categoryid, sum(price) from products group by categoryid having sum(price) > 200. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45993b89-a7f1-4432-b91d-e9bd93cdf62b)

* **Where clause** gives the **condition** in which the rows are **filtered**, and on those **filtered** rows which matches the **where** condition, on them the **group by** clause runs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73998ef5-f875-4b4c-92ab-4758d262c1fb)

* Having clause **sequence**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69bda08b-622d-4d80-9a7d-63c7fa3f3f2e)

* Where VS Having clause **difference**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d86f711-5d82-477f-bcb9-aa67d167da60)

* Yes, **having** cannot be written alone without **group by** clause.

## Order By

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f77d326-31c5-4f65-a958-e4d6778499aa)

* select * from customers order by country;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc77a500-e82b-41e0-aafc-83c1158f7654)

* select * from customers order by country desc.
* select * from customers order by country, postalcode desc.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab2140f7-c14c-4e2b-a630-debb27a231b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06d33b8c-2c03-45ca-acf2-b40b2370e5fe)

* Default ordering is **ascending** order.
* Order by doesn't make any changes to the table.
* Ordering the fetched data.
* Order by runs after **select** clause.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d9dfa3c-5bdd-45ac-b54a-f16e36648c11)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c1b8faf-a7c5-4bb0-a578-e85dd476fef1)

* The **order by** keyword is used to sort the result-set in **ascending or descending order**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a6fd757-a7e7-405e-bd7d-fa75f32b3e2a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dbef429-e4a4-41c2-ba30-b805ba3cc637)

* If two **country** names are **same/equal** then those rows are **sorted** using **postal code**, otherwise we are doing the sorting with **country** only. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c55d2fd1-ed13-49a6-8e54-9b01b6dbbfc9)

* From -> Where -> group by -> having -> select -> order by [**IMPORTANT**]
* select categoryid, sum(price) from products group by categoryid having sum(price) > 200 order by sum(price) desc
* select categoryid, sum(price) from products group by categoryid having sum(price) > 200 order by sum(price)

## Subquery

* Query in a Query

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84a62c27-64f0-42d3-8981-44ba8443e004)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55585763-4005-4674-ac11-11e48780e258)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/293da9a3-b941-4daa-8b44-ce33a5468e46)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5a3bee4-6a4f-45d8-99dc-a3180442a7b6)

* Subqueries can be within **select, where and from**.

1) Single row subquery -> returns single row of one column(One value)
2) Multiple row subquery -> returns multiple rows of a column(Multiple values)
3) Corelated subquery

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7beb0fca-119a-447d-bb09-733f1e116400)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/665ce8cb-9154-44ae-858e-3ac4f4b3d3e0)

## Single row subquery

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8cfe20a-3093-4a54-8fb1-27d61f41a653)

* .......... where (Inner query)

1) Run Inner Query -> Return it's result
2) Run outer query using result

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8e64619-135a-4fa1-8d76-f204be799fe5)

* select customername from customers where country='USA'

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cd92b00-60b9-49d7-98ac-b5f88cbce174)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6de69511-a602-4fd9-88fc-d0ee0ec63565)

* If countryname was directly not given, and we had to find the country name and for that we had to write a query.This is **subquery**.

* Fetch the name of all customers which are from same country of customer name 'The Cracker Box' [Question]

* select customername from customers where country = (select country from customers where customename = 'The Cracker Box') [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/204f6499-2338-4e3e-8e74-9452c5083aca)

* Self Join.
* Why not **self join** and why **subquery**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c6d32f7-7403-4954-ba3f-5032e64df8a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60f15616-c2a4-4aae-88e6-0d1cd5458066)

* Find all such products which are having price less than price of product name 'Tofu'.  [Question]
* select * from products where price < (select price from products where productname = 'Tofu) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9f031ac-c6fd-49a1-b174-d9497725b3cd)

* Multiple row subquery.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55935455-4752-4901-9dcd-5c77c575613b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ef9e163-4560-485c-95fa-942ddafed5ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/819c3158-2b02-4d54-8c32-8a732b32668d)

* Highest product price -> max(price)
* Find the product with second highest price. [Question]
* select max(price) from product where price < (select max(price) from products) [Answer]

* (select max(price) from products) -> max(price) [Inner Query]
* select max(price) from product where price < -> Except **max(price)** we will get the rest rows -> Out of those rows we will select the **max(price)**. Which is the **second highest price**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ff828d1-d78d-4b5b-811b-b58cb3c63f06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afd5963e-1ecf-44d0-b265-f5e4229be672)

* Same Price products.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dcf15d9-8a16-438d-8837-01e448246ba6)

* Multiple ways possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/334d5d6e-254b-42f9-ba93-50199daef758)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0838a04-37aa-4007-a078-66516c0a00bd)

* Find the product with third highest price. [Question]

* select max(price) from product where price < (select max(price) from product where price < (select max(price) from products)) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04b5a652-9099-47ec-8b71-e0f8ab07645b)

## Multiple Row Subquery

* returns multiple rows of a column
* Inner query returns multiple values. So, **equal to(=), greater than (>), etc** they don't work.
* We have to use some **keywords** like **In, any, all, exist**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dc58168-371b-4a7f-8a3a-387d97afa74c)

* Multiple Row Subquery

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0d6c930-7d16-4487-8c8a-afe186633618)

* Table.

### Multiple row subquery

* We have to use **keywords** here.
* **=, <, >** don't work in **Multiple row subquery**.

### Keywords

1) In
2) Any
3) All
4) Exist

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fc31231-520c-4aa0-8743-3a50833bd3d4)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf1470d7-3b73-41c0-9cbe-186ee5ca5c8b)

* Find all customers that are from the same countries as the suppliers. [Question]

* select * from customers where country IN (select distinct country from supplier) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a7ef7f2-33af-40c6-836a-a68667cc6dab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0a9bebf-fcdd-4ff4-a48f-a4e82969305d)

* **=** is for comparison of **one value** but here we have **multiple country names**.
* So, **=** will not work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c344903a-3f43-4168-a6b6-202dd605cc1a)

* Will talk about it later.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ff15c09-f567-4e7d-b4cf-4b8f9aeb4b78)

* As we are getting **multiple rows** as a **result set** from the **inner  query**, we cannot use **=, <,>**, we have to use the **IN** keyword.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa1d90d3-2f7c-482b-bc14-676a32ea7adb)

* In -> multiple OR. [In keyword] [**IMPORTANT**]
* Find all customers, that are from those countries where there is not any suppliers  [Question]
* select * from customers where country NOT IN (select country from suppliers) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf162619-a48b-4c0f-8344-9c08beadb9cd)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c549fc44-6887-4d06-9dd4-dd2a49c84ce5)

* Find all customers, who have placed more than 2 orders. [Question]
* select * from customers where customerID IN (select customerID from orders group by (customerID) having count(orderID) > 2) [Answer] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c38d8443-7c56-4518-8732-b8876d630714)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc9be321-a568-445d-8c16-40c45c3c20e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0dabff2-d187-486f-94ea-1665eb1a9350)

* Question [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc148722-a263-48e3-a7ed-073cadabf12f)

* select * from customers where customerid IN (select customerid from orders group by customerid having count(customerid) > 2)
* select * from customers where customerid IN (select customerid from orders group by customerid having count(orderid) > 2)

* We can do this subquery using **inner join** as well but **inner join or joins** in general they are quite **costly operations**. That's why using **subquery** is better.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/041b508c-a0e5-4ef8-9299-52d04a4ed308)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faf9c7c2-ca6b-4b5e-9b78-5b8d4e6d5b69)

* Yes.
* It is not always that **subqueries** are **always better** but in the above example, **yes** subquery was better there than **join**.
* Subquery can be better sometimes.
* **Query optimization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fc71b58-38a6-476c-85fb-952ba12b56a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fca109b-2439-4746-b748-ad75d4993623)

* **IN** operator can only has **Equal to** comparision.
* If we have to **lesser than, greater than** then **IN** operator will not work.
* We have to use **Any/All** operator.

## Any Operator

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74f794c2-24fd-4e43-b58f-58b42f04678b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53d83a83-e8ff-48ef-907e-949a78b1a77d)

* Operators used with **ANY** keyword -> =, <>, !=, >=, >, <, <=.
* Any means **anyone**.
* Any -> **OR** operation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e112d68f-355d-4c75-b49a-abc03343481e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cf7b058-32a1-4af7-925c-9e38aef97131)

* Greater than **any** of those values in the **brackets**.
* **= any** will work **same** as **IN** keyword.
* If condition is **True** for one value also then result is **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5a25e3e-67fb-4ab6-982a-7a79fed1c575)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/451d4b40-8ff9-4254-9107-c0baf352f898)

* Find the productname of all those products which have their orders quantity larger than 50. [Question]
* select productname from products where productid = any (select productid from orderdetails where quantity > 50) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aefe5971-9c79-437f-9594-72f84a7eea45)

* Find the productname of all those products which have their productIDs less than any of the product having orders quantity equal to 1 [Question]
* select productname from products where productid < any (select productid from orderdetails where quantity = 1) [Answer] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19526bcf-3bd1-402f-9398-f22e4b56924e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/625294fd-e811-4e91-a48b-a727bf396fa3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c60e070e-8bb5-4468-9732-84bc8fd3a809)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b65f4626-7dc2-4dcf-b1e0-e997e9b0c9ae)

* Another way of writing the query.
* select productname from products where productid < (select max(productid) from orderdetails where quantity = 1) [Example]
* We will directly get **one value** which is the **max(productid)** and we don't have to use the **any** keyword here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf9b2b2b-7a56-455b-a197-ae5d8be81b1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/921e3549-6a97-4d07-b122-0b874ee3b10e)

* If it was **> any**, then we would have used the **min()**, **min(productid)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73b97dc3-ac77-40a5-a342-afd2fc6a5484)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5b5116-dd42-4d7d-9d60-d25bab0b0ffb)

* Subquery Summary [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7db5cbbd-75b4-43a3-9194-4b71d4d982af)

## All subquery

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c05f6436-72e9-400c-9a3e-277830e5c657)

* Any -> Anyone one value.
* All -> Comparing with everyone
* All -> **AND** operation.
* Operators used with **All** keyword -> =, <>, !=, >=, >, <, <=.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2afa32d7-f106-41bd-85d9-991f4547be0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e92ce53-d31d-42b3-9f08-167898edf549)

* Find the productname of all those products which have their productsids less than all of the product have orders quantiy equal to 1.
* select productname from products where productid < all (select productid from orderdetails where quantity = 1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83089c3e-d23d-4329-a6b3-68a48059e1bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/534f1c5b-0049-431a-9c59-778c81cf1928)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59d066e8-6a9c-48f6-9681-9ff5cb50d964)

* Sub-query **ALL** summary.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76c544ef-8475-4a32-86c0-136a1c655f3d)

* **! All** -> Behaves like **Not In**.

* Finds all employees whose salaries are greater than the salary of all the employees in the sales department with departmentID is 2. [Question]
* select * from employee where salary > All (select salary from employee where departmentid = 2) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ab4fe48-69d8-4e2b-ae3a-5b65e8f882e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e107ebcd-9f3c-40ab-9251-00b64d395ca2)

* select * from employee where salary < any (select salary from employee where departmentid = 2)
* select * from employee where salary < ANY (select salary from employee where department=2)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c00a955f-ab42-4fdd-bb83-387abe6e8e9e)

## Exists subquery

* Checking if the **result set** returned by the **inner query** is present or not.
* If **Yes**, then we will get the result from the outer query.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4a40ca8-d969-4524-bb07-884bde7cac6c)

* select * from customers where customerID = 1 -> Returns all the details of customers where id is '1' -> Returns 1 tuple/row.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4555b19a-719f-4b30-b5fc-4dc75c0ab7a9)

* We are checking if **result** coming from **inner query** or not.
* **Existence** of output there in the **inner query**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfe0f8b3-b1d4-4dbf-9fe7-84cb685bfa9e)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c85fd42b-5ff7-4464-a3ac-35ee7d0c898f)

* select * from orders where exists (select NULL)
* (select NULL) -> It selects **NULL** as the **only one value**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d25d7efd-a74e-45c9-aaa4-04ef96684f27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5381dbf-cc77-43dc-bccf-dff7426fa415)

* In the **result set**, we are getting **NULL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3548c0b-846d-4df6-b2fc-acd29ace65e3)

## Co-related subquery

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02103d69-08e6-405b-9daf-8009f230d4c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3bdef26-fdda-4ae3-8e24-e63e0340a9ee)

* For each row of outer query, either inner query runs again and again. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/183a6c4f-3575-49b7-b662-b4eef36aafda)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13adcd92-1116-4126-bca9-261216d48689)

* Yes, we are taking the **courseid** as well.
* select Rno, name from student S where exist (select * from enrolled E where S.ro = E.rno);
* With **corelated subqueries** we are doing a type of **inner join** in the above question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac2e11e9-1ff9-42fa-867c-9e67aad9b16e)

* write a query to select all such customers record which have atleast one order placed.  [Question]
* select * from customers C where exists (select * from order O where C.customerID = O.customerID) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50eae800-2be3-4e31-996c-d44129905c38)

* select distinct C.* from customers C LEFT JOIN orders O ON C.customerID = O.customerID; [Question]
* select distinct C.* from customers C, order O where O.customerID = C.customerID; [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed907a93-6830-452a-8ff9-32602f434e25)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/943533f9-182c-4717-accd-1320ba4cde13)

* (customers.*) -> Prints the columns only from the **customer's table**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5900813d-78c0-4896-819b-78d2516715b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36a19d5a-88f6-4493-9ab9-b8334c9d1442)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e832d52-047d-4b89-b99d-366894bb5644)

* select distinct C.* from customers C, orders O  where O.customerID = C.customerID;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b728555f-091e-4f9c-8da2-b0b3e9c3f578)

* select distinct C.* from customers C LEFT JOIN orders O ON C.customerID = O.customerID;

## Doubt clearing session (12) [3rd July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/018ce811-22f5-4f20-accc-d41b0fa423ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b37170c8-da14-4ae2-a542-74250e46cd2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed54ef66-35e3-48a8-bb62-af85e200d25e)

1) select customername from customers where country = (select country from customers where customername = 'Around the Horn')
2) select postalcode, count (*) Counter from customers group by postalcode.
3) select country, max(Counter) from (select country, count(*) Counter from customers group by country);
4) select country from customers group by country having count(*) = 1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd184fd1-82ca-43d3-979f-d9f094c1218e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d294d412-2641-4a11-87d5-91a6facf451c)

* Subquery's result set became a **table** for the **outer query**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d469e85-29ff-43a6-a5e9-4b9aafca6fa9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff2ecfc5-9f1c-4bbf-ad67-aa4abd1e99a7)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10ec4755-cf0a-46cc-942d-37df88a1ccc6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/432ab264-4df2-412a-91eb-140f9e5e6a2d)

* Tables.

1) select * from product where price = (select price from products where productname = 'Aniseed Syrup')
2) select suppliername from suppliers where supplierid IN (select supplierid from products where price > 20)
3) select * fom products where productname != 'Tofu' and categoryid = (select categoryid from products where productname = 'Tofu')

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be157da9-6934-4eb2-be73-7beccb62a6d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f65c63cd-a9a8-429d-bf33-c5550bdde6f6)

## Set Operators

* Set operators are used to combine results from two or more select statements
* SQL rule -> Both the **result sets** from the **select statements**, **no. of columns** should be **equal**.
* **Set operators** doesn't change the **columns**.
* Same no. of columns as in left or right select statement.
* **Set operators** is happening on the **data**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ec225bf-dfc9-4418-ba5a-487fa45a8efb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e696e936-5b4c-4195-908e-0453719e1e66)

* Set Operators -> Union, Union All, Intersect, Minus Or Except
* In **union**, duplicates are **eliminated**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3b6eeb9-991c-46b2-955f-4cc99adaa294)

* Example
* We have done **union** of the **rows**.
* (select city from customers) UNION (select country from suppliers)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c16ff70f-42bb-4327-a274-cabfc42f70a2)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15f14fb9-5dfb-47f5-80f6-6cf87dab865a)

* select 'customer', country from customers
* select 'customer' as type, country from customers
* (select 'customer' as type, city from customers) UNION (select 'supplier', city from suppliers).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b49ea912-619f-4d71-a442-a5988a4cbb59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a562f6c-b2ef-41d5-aa59-3982c8452e13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1567e2b9-0866-4b27-a07d-4ebddbc35e05)

* UNION -> Eliminates duplicates
* Union All -> Duplicates are not eliminated. Shows all **tuples**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51d952f2-c20e-44b6-98b5-1b7615c879e3)

* Intersection -> Common
* Intersect -> Gives common tuples.
* Minus or Except -> It gives **set difference**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50d6205f-d7d7-45b3-8dd8-2d0146c03aa8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e09edda-4ef3-40a4-bd05-f9b2a33694ad)

* select * from T1 except select * from T2 -> We will get those rows from T1 which are not in T2.
* select * from T2 except select * from T1 -> We will get those rows from T2 which are not in T1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed3120af-4396-4a07-9d6e-7a9463433201)

* Find out those cities where we don't have customers but only suppliers. [**IMPORTANT**]
* select city from suppliers EXCEPT select city from customers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0234fb2-778f-4fa0-afb2-9d5a5565c0cb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74ac1073-ef67-479f-a8d2-f8345dc3d1d9)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bbc1e3e-0f95-478a-a11d-6bedefc212a9)

* Create Table

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33066896-8463-46f1-87d6-20ea7a1dbb2a)

* From another table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07aaa49b-e306-4f72-86bf-9d9d02451167)

* Constraints

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d7245a9-2678-44c6-94e7-3e13d2fc3c70)

* No value i.e NULL, it is fine
* If it is **value** then it should be **unique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3c80c80-3c30-47b7-807b-f6cfb0d875be)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/847b80d3-4241-4b96-9e69-66683a5619fc)

* Primary Key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9ef641b-befa-4925-841a-0563857680f8)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3026a348-5c34-4911-90d4-3d9a8fb9734c)

* Foreign Key

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbc8d888-f02d-4135-a16b-f22deef99b44)

* Wrong question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b90013f3-9844-4efa-b1a4-f6f30003ad57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/396e6b37-d314-4d9d-bfe3-e8ed718ca32c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb50e9b2-9500-4644-bf72-1bf35efeb014)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c1e8cad-06cd-49c0-a10f-438c7363053d)

* Yes, with **IN** keyword.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4752d2c5-f9a1-4a09-99ff-cca8bf6d1692)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2d3ab3d-eef2-47bc-9a9b-f0ef6a1824d9)

* Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76ebffe9-20a0-408d-80e7-79fbf25d94b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b2c5f2c-0e58-48f2-9c89-6f8ed0bebcae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a2929f6-c01a-4a45-982f-1cf01b112605)

## Normalization part-II (13) [4th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d164105e-7175-43e9-a207-b76451df6c48)

* Completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cebdf2d3-1fd7-4164-96f7-e3438c853e67)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47b4cc73-b02b-4d5f-b859-1e952ca11b57)

* Relational Model

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bef48ce-ec62-4611-b735-a083a04c98b9)

* Relation -> Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4003ac6-60db-4b73-a57c-aeac998b6ea6)

* Attributes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56e92fad-f0a4-45c5-9d82-7b500b8e0611)

* Tuple

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9803c7d-22c8-48a6-831a-dc5543dce250)

* Relation example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6423d2f5-7ef8-4eaf-bb85-665f931dfc0a)

* DB Schema

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6032d5dc-c5a9-4b83-87bc-f118b21397a2)

* DB Instance

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c524c38-1ba6-4a04-b43a-841f1ff36425)

* Domain -> Datatype.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdf31b8d-e4e6-4bbf-957c-639f7766fb05)

* Domain Constraint

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcc935ae-1dd1-4d46-9f0e-8ec79d53cb01)

* Degree or Arity

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f68678a6-fd4c-4a46-8f4a-38219a1634ce)

* Cardinality

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/923b24d9-9db0-430e-9a85-e54bc4ed1755)

* Functional Dependency

## Functional Dependency

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00f483ec-f0f6-46c6-804c-6b32f72bfff3)

* If we have **one value of 'A'** then give **one value of 'B'** and not **two values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bfb7a3e-dd01-4be4-a81f-caf17c99e30c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7305a393-37af-4092-aace-503937195746)

* For **a1** value of **A** column we are getting **two different values** of **B** column which are **b1 and b3**. So **a1** is giving **not unique** values.
* So, **A -> B** does not **hold**.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0f7f758-0b8f-4de9-80bd-ae176635d325)

* Another Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdd74fcf-8645-4ded-ac1c-4a035cf340f1)

* For **a1** value of **A** column we are getting **unique value** of **B** column which is **b1**. So **a1** is giving **unique** value.
* For **a2** value of **A** column we are getting **unique value** of **B** column which is **b2**. So **a2** is giving **unique** value.
* So, **A -> B** does **hold**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/373fdd53-074e-4faf-bd08-2717503545c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f82732b-10bd-4f91-9dbe-b2775b951c0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5153e525-7212-422b-b033-fa0abba0710a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c63aa487-e921-4392-9561-2580d9efbc1a)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfa88491-8aa2-4d75-9191-14359be408da)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e77c773e-aa5e-4d67-ac22-14efaafb3d22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8535f50c-777f-4bad-84ed-49e6f6fe3380)

* A -> B -> doesn't Hold
* B -> C -> Holds
* C -> A -> doesn't Hold
* C -> B -> doesn't Hold
* A -> C -> doesn't Hold
* AB -> C -> Holds
* Ac -> B -> Holds

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/137e406d-e00d-4283-9a50-c29727975a8e)

* Example [**IMPORTANT**]

## Closure of n Attribute

* What all attributes we can derive from given attribute.
* Closure of attribute **A**(A+) -> {A}
* No dependency is given which can be derived from **A**.
* Closure of attribute **B**(B+) -> {B, C}
* Closure of attribute **C**(C+) -> {C}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd8d081e-95d0-40c2-8561-65b0c3cf0e47)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86b3c17b-76ce-491c-a80a-529faa6551f5)

* A+ -> {A, B}
* B+ -> {B}
* C+ -> {C, D}
* D+ -> {D}.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d19e3a9b-9358-4103-8f5b-c4d58e9ea4f6)

* A+ -> {A, B}
* B+ -> {B}
* C+ -> {C, D, A, B}
* D+ -> {D, A, B}.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/692d87df-94a5-4c80-8e20-590b7ca79ba5)

* Example [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72b62baf-6e21-48b8-946c-ea55b4560a88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cf3d4f1-8a03-4032-82ec-86a3382405bb)

* Trivial Functional Dependency

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3d38d3f-269e-4fe0-8239-5d9990098c23)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16e82022-4222-45fa-9c64-4c2d578e7071)

* Rules.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43a39db3-fadd-4d5b-aaa9-e514e9e793d1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8395abe-fc85-4f09-adbf-83224f49a6d4)

* Reflexivity Rule
* If **A to B** holds then **AC to BC** will also hold. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70473b11-f847-44a6-8faf-d02c52e0af80)

* Augmentation Rule.
* If **E -> F** holds then **ABE to ABF** alos holds.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e295f0f-24ca-4ff2-82f2-6de5b48b8bd5)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2705a23b-a494-42c0-97ac-5e08c0c43180)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27f83c71-60ef-4395-908a-d3eb920409ee)

* Transitivity Rule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bef4ff8-00e9-4170-94d7-60faf2980088)

* Addition Rule.

## Closure of a set of functional dependencies

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c919e31c-305a-4419-95ad-7e16dd063b3a)

* In **F+**, we will use **transitivity rule** and we will get **A -> B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d6ac792-120c-49c3-ae1e-6ca0a3ac2fba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c062825c-060c-435d-aeb2-2d56f2154d28)

* We have to **find** more **dependencies**.
* Pseudo transitivity Rules.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9b46635-5be0-42bc-bb35-f22db2fd2ebe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2888af25-977f-4938-b898-b01d7ae12e6d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48457103-7d58-4557-ae70-af5d38a8213f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed62104e-2000-4003-998a-a38c908505e4)

* Question, Find **FD+**.
* FD+ -> {A -> B, B -> C, AB -> D, A -> C, A -> D}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0cf66a9-40fc-405c-a373-d52a400ef39e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e53e3e5-dd2d-4428-bd11-5249c1cd11c7)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bb295b9-f05f-4f32-ae71-7d1be28b84ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5832f1be-8442-4ad8-b9c8-1ff869c840ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5186916a-ea9d-4b50-9da4-03b693aae4b8)

* Question
* [**IMPORTANT**]
* Do it using **closures** better.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ecd7ea7-f61d-4ef2-bee7-a48759e9024a)

* Example
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92b834a6-8bba-4bae-bd5d-52193eba5c63)

* Question
* FD+ ={AC -> XY, A -> C, BY -> XY, AY -> XY, A -> XY}
* If **A -> B** holds then **AC -> BC** also holds.
* If **AC -> BC** holds then **A -> B** also holds that is **not True or false**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a4f1a23-735a-4915-9a0e-6ea025aaae59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/976e8964-640e-4d19-9bd3-d997ba4eaf5d)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc631168-42d6-4f8d-af8e-962df77437be)

## Finding keys using FDs

* Keys -> Candidate keys.
* **Minimal super key** is **candidate key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce6480fe-4022-4b2c-9829-7858c5e73d48)

* If **ABC** is a **candidate key**, then **ABCD** cannot be a **candidate key**.
* If **ABC** is a **candidate key** then we cannot attach attributes to **ABC** to make **candidate keys**. We will not **check them**.
* **ADB** could be a **candidate key** as it is **different** from **ABC**. They are not **proper subsets** of eah other.
* Key -> Uniquely identify **one single row**.
* If **A** is a key then we can find **B, C and D**.
* From **A** we can derive **B, C and D**, which is **A -> BCD**. Directly or indirectly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/345255c2-8fa8-47bd-85a8-fa08b9678fba)

* In closure of **A**(A+) -> {A, B, C, D}
* If we find all of the attributes in closure of **A**(A+) then only we can say that **A** is a **key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c564af8d-88f2-436f-a6a3-b43929d3bc59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9086d51-d2ff-458e-bbaa-cb612ddcf619)

* Question
* In closure of **A**(A+), we found all of the **attributes** within it, so **A** is a **candidate key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ed2d633-61c0-483f-8d4d-2c334d8bd399)

* When we are finding **keys**, we will check on the **right hand side**, what we don't have. Whatever is not there, that will be coming in the **key**. [**TRICK**] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/361adc6b-6292-4ab8-8c04-21fe1c59c473)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/871ba4e6-66eb-4dac-87e6-a551de0cee4b)

* Example.
* Candidate Key -> A

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddee556e-b0ca-4601-87d7-03992e6aa384)

* A+ -> A, B, C, D
* B+ -> B, C, D, A
* C+ -> C, D, A, B
* D+ -> D, A, B, C.
* All of them have **all of the attributes** in their **closures**.
* So, **A, B, C and D** are **candidate key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8a1d599-9977-49cd-8955-2c50d87e75fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1609e260-a207-4391-9cdf-5246a8f2d281)

* Question 
* Find Keys
* B+ -> B, D,
* A+ -> A
* C+ -> C, E
* D+ -> D
* AB+ -> A, B, C, D, E, F
* CD+ -> C, D, E, F.
* Only **one** of them have **all of the attributes** in their **closures**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31bed794-6fc7-4a73-9895-d70733c1e7e0)

* So, **AB ** is the **candidate keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a50e026-3fdb-4881-a64b-7d622dab6d91)

* Question
* Find Keys

* Attributes not in the **right hand side** -> A
* A+ -> A
* AB+ -> A, B, D, C, F, E
* **B** can be replaced in **AB+**, which is **C**
* AC+ -> A, C, B, D, F, E
* **C** can be replaced in **AC+**, which is **D**
* AD+ -> A, D, C, F, B, E

* Only **three(AB, AC, AD)** of them have **all of the attributes** in their **closures**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0536b8c6-e464-4819-a887-828767e4cd87)

* So, **AB, AC, AD** are the **candidate keys**.
* We have to check if the values can be derives from other values or not **like above**. [**IMPORTANT**]

## ER diagram to relational model conversion (14) [5th July 2023]