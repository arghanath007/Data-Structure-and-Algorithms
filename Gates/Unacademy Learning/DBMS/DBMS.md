# DBMS

# Course Structure

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95355a84-08d3-4fff-a0df-23799807aac2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b389e5e-710f-4dcf-8de8-c19950d3dda3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5451e501-452f-465a-b056-67a3d211d41d)

# PYQ

* Part- 1 -> https://unacademy.com/class/sql-pyq-discussion-part-1/FIVDGXH3
* Part- 2 -> https://unacademy.com/class/sql-pyq-discussion-part-2/USA9WKOY
* Part- 3 -> https://unacademy.com/class/sql-pyq-discussion-part-3/9IHKNZVM
* Part- 4 -> https://unacademy.com/class/sql-pyq-discussion-part-4/EAQ4FZLP

# SQL Link

* Link -> https://www.w3schools.com/sql/trysql.asp?filename=trysql_asc
* Better one -> https://sqliteonline.com/

# Course Link

* Link -> https://unacademy.com/course/complete-course-on-database-management-system-247/OBHXIW40

## Introduction to dbms (1) [23rd June 2023]

## Data

* Anything which is special we want to remember.
* Data is needed.

## Database

> The **collection of data**, usually referred to as the database, contains information relevant to an enterprise.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/351ff58b-c0c5-44a6-924e-838eaefd6467)

## DBMS 

* Software tool
* Database + collection of programs to access Database.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79ab2595-c054-4abe-9285-e167a72e1939)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf9ff8e6-72ad-4bc4-94e4-2c7cbd92bc0c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/721e7443-450d-40ce-8643-40c3b8bd713f)

* If there is a **database** then the data is **very well organized**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5bcef80-e111-4dbd-9617-e8274659e73e)

* YES.
* We don't want the database to go away after we shut down the computer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/949b2e32-868e-41c7-80de-d0e87d19c2a3)

> A database-management system(DBMS) is a collection of interrelated data and a set of programs to access those data.

### Gola of DBMS

1) Providing a way to store and retrieve database information that is both convenient and efficient
2) Ensuring the safety of the information.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d7c3602-6181-429f-a37e-0343f9e410a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20996412-2e4e-48da-bcb2-cbe2eceec6bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/151b1be3-9729-4b3f-8d9e-9d2d4261dc8a)

* Reservation System
* Banking
* E-commerce websites

## Why DBMS?

* Before DBMS, data were stored in files.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6effadd5-0cc0-44fe-91c8-cdd7be255333)

* Disadvantage of file system:-

1) Data Redundacy and consistency -> No linking between the same data on two files.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ba0d51b-a3e9-4376-acbb-4971cb7c61d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df21d4e3-ee43-425a-8802-31f908797f7f)

* Yes.

2) Difficulty in accessing data

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87d5f0e4-c12c-436f-877f-14e2cc90916b)

3) Data Isolation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dadf4ea6-8b3b-484e-9860-09c11015ec99)

* Different formats of files are there and then accessing the data from the different files becomes difficult.

4) Integrity problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/130adcc1-8292-444a-98fa-c7f08ab12550)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39ed1fc5-6018-4d9f-a4a7-07dd4b9e24b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74a992ff-2fc1-4a67-be5e-4e15fb8193aa)

5) Atomicity Problem

* **Atomic operation** -> All or none

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cba9a14-9446-441d-8638-b6c783c55e2d)

6) Cocurrent-Access Anomalies

* Anomalies -> Problem.
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7cbcc12-6aff-4130-a427-6ae276c6fa83)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65d661aa-6d89-4b52-ad6e-ca91b2c618e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7381066-6a6f-47af-b401-7d186d35b8c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69bbe41c-ff0d-410d-9072-acddeddde203)

* Yes. Mutual Exclusion(ME) is there.

7) Security Problem

* In Files system -> Files are not secured.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/082502f3-67c1-44e7-b27c-18c138c13d9e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf8717dd-85a6-4267-a7dd-0a48ba9d6984)

## How Database or Data is stored?

* Database -> Collection of Tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1866ccaf-154c-40e4-88c4-59a78a7fbff4)

* Logical Level

## View of Data

1) **Physical Level** -> When the DBMS will store the database, where ever the database is stored is called as the **physical level**. The level where the database is actually stored in the disk.

2) **Logical Level** -> All of the tables, the details of the tables, the details of the items stored in the tables. Everything in front of my eyes. 

3) **View Level** -> The way it is filtered to be seen by the users on the website. Seen by the users. Part of **logical level**.

* How will see logical level?

> Not the **user**. The creator/maker of the database.

> Everything will be stored in the disk, but we don't know where it is **stored**. The tool(DBMS) only knows where the database is stored in the disk/memory.

* From the logical level can be see the physical level info?

> **NO**. In-between there is the DBMS tool.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bf2ab57-b9de-4823-bab7-22f96c0cf84b)

* Physical level is hidden from the **logical level**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02d36d85-cf1f-4d9c-b476-19df3ac1e583)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0e3ec59-8c86-4003-8422-589ac84d6999)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82f35c0c-1891-4e58-8a94-286394a7cb98)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c27128b9-8244-4c61-b55d-95d7ea332c43)

* Yes.
* From **view level**, **logical level** is **hidden**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe998986-9d51-4436-828f-90461de11ce4)

* Yes.

## DBMS designing and er modeling (2) [24th June 2023]

* Commit -> To make the changes permanent we use **commit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32b5fa4d-0950-4948-8551-3fbf6e293a5d)

* Rollback -> Revert back all of the changes and go back to the last state where the DB was saved/commited(before the changes were made).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a3d36d7-2c0f-4051-b638-7262090e7faa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cc69bd5-9927-49fe-bb5a-8148b5f9a075)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a8dd874-80fc-42d1-9a73-f71ca11fa60f)

* Rollback.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20893ac0-d9bb-49e1-9dd1-2d0513750c63)

* Different

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc415e8f-1885-4f6c-bbab-f01082df78dd)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/899b85c6-8216-4d86-bfd3-70feb84ee503)

* Atomicity happens on a complete transaction.

* We have created a file and we have not saved the file ourselves and there is no auto-save option as well. We have closed that file. What will happen?

> All the data is gone. This is called as **atomicity**.

*  Atomicity -> **Full commit** if we **saved** the file otherwise the data in the file is lost(zero(0)). It is fully **automatic**, we didn't do anything.

> We created a text file and one day's work is done. We have created a different copy of that file. Next day we created another copy of the file and started making changes on that file. We have saved all of the changes as well but we don't like the changes. We will take the previous copy as the original copy and delete the modified one.

> This is called as **rollback**. It has happened because of our decisions. 

* Atomicity -> Automatic rollback to the previous value, done by the DBMS tool.

> When the transactions stops in the **middle**, fails. It is called as **Atomicity**.

* Rollback -> We can rollback to a previous state when we wish like it until a commit is done.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40a6f59e-0436-4ec2-a611-2895ce00bd98)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f111e81e-7af3-4bb2-b102-42930dd299e4)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f206c37-01fd-4029-9212-2ec4df0aff9d)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77300cf5-5b04-4ee5-8616-10e62556bd62)

* Rollback -> The DB changes can be reverted to previously saved state.
* NULL -> It is a representation of no any value present.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb604e58-e69e-4647-8c21-ac0e65ecb854)

## Database Languages

1) Data-Definition Language(DDL) -> If we want to work on the design of the tables, the statements which we have to write for that, they will come in **Data-Definition Language(DDL)**

* **Working on DB design**.
* Creating, deletion tables, updating columns, name, deleting columns, adding new column

2) Data-Manipulation Langugae(DML) -> If we work on the data of the table, the data within the table, they come under **DML**.

* **Working on data**.
* Insert, update data, delete data, fetching data.

* If we are working on **data** then it is **DML**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45f4480d-77e0-484b-833b-05b53e7a8602)

* Working on the design of the table. So it is **DDL**.
* Making the table's design is **DDL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93fdbac2-177e-4df7-92c2-1d6cd186eae8)

* We want student's info whose **Rno** is greater than **10**?

> It is done using **DML**.

* Insertion of rows, deletion of rows, deleting data, fetching data -> Working on data -> **DML**.
* Table's name, column names, no. of columns, add new column, delete a column, delete whole table -> Working on table's design -> **DDL**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/484898cc-d0a9-4aad-b452-f103e1149d32)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/932ffcfc-fc00-4b8e-ac62-ad2ad6c77d84)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7d8568d-392b-4e7b-9a97-44b98c915c21)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/922677b2-720a-45b9-aa25-1b584195e5fe)

1) Procedural DMLs
2) Non-procedurals(Declarative) DMLs -> SQL

* SQL is **Non-Procedural** language.

## Database users and admins

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7520baf0-a81b-42a3-b442-100a0f8414e9)

1) Naive Users -> No idea that DB is there ->  Normal people
2) Appliocation programmers -> Writing Application -> Developing softwares.
3) Sophisticated users -> Use/write query to access DB.
4) Specialized users -> Developes query language or DBMS tool.
5) Database Administrator -> DBA -> Any DBMS highest level person which manages database. Databae's admin.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4aa4981-18ef-43d5-ac08-d686bb81c336)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0f0e61f-5f23-4a96-9f85-973379b234c2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db5d8ad3-bcf8-4ffc-b8e1-a166de73c6a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5082bf0-ea7a-44c1-aa61-b7713cd4bdc5)

## Data Model

* When we store the data in the **database**, the data is represented in which format. That is Data Model.
* How do you reperesent the data when we create the **database**?

> That is Data Model.

1) ER modelling -> Entity-Relationship Model
2) Relational Model 

## The Entity-Relationship Model

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b384b173-ff55-476c-a00e-5abf920a9b60)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06bb16de-5b7e-4c92-883f-417350a5abbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60ddf86c-461a-4cb7-a049-42d67b393aff)

* Entity -> Just one teacher's information
* Entity set -> Will become the table later on.

## Relational Model

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f45eb35e-9ccd-4244-b36d-1552eaba7b5b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2be9c48a-217f-44cc-aff1-a44978d3d7aa)

* DB based on relational model -> **RDBMS**
* ER Modelling is the basic way to start database design. ER Modelling is the first step to database design even if the database is for **Relational Model**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2718836b-2f34-4942-ab3f-a7023b6854ac)

## Database Design

1) Requirement Analysis
2) Conceptual Database Design -> ER- modeling
3) Schema Refinement -> ER to relational and refinement
4) Logical Database Design -> Use DB tool and make DB
5) Physical Database Design -> Decisions related to physical level of DB (Example -> Indexing)
6) Security Design -> Related to security.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/088f8770-8e1c-40ec-be25-12245a984d26)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72582021-49e1-4622-98c7-6e9e6c9cca0b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d3d047b-725f-4b49-b747-0d78444efe70)

## Er modeling part-II (3) [24th June 2023]

## Entity

* Object in the real world that is distinguishable from another object.

## Entity Set

* A **collection** of similar entities is called as entity set.

* 1 Teacher -> Entity
* Collection of all teachers -> Entity-set

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d12417e0-ada2-4419-8cac-0359d2cf8e84)

* An Entity set has multiple different entities.

## Attribute

* An **entity** is described using a set of attributes.
* To **describe** students/student(entity).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/013f8ada-445c-4624-8ca8-864492211864)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34587d37-622d-4dba-aff3-cd095098456a)

* Kind of yes.
* Every **entity** will have it's **attributes**. Ultimately the **attributes** will become **attributes** of the **entity set** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a027654-640d-432d-8c00-b3b9ff716792)


## Domain

* A unique set of values permitted for an attribute.
* The **permitted values** which can come to the **attribute** are called as **domains**.

## Relationship

* An association among two or more entities.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91c92e24-6905-4a21-ad45-09c81b71b779)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/306b86c1-0dcb-49e3-ae8b-6ae7f3b60611)

## Relationship set

* A set of similar relationships.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/558234e5-0e78-490f-a708-ad7064a5a8ea)

## Key 

* An attribute or set of attributes whose values can uniquely identify an entity in a set.
* More than **one attribute** can come into a **key**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37c22372-76c0-4415-bd8c-7abb91ede666)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/552dd74a-69d3-4e28-b4f5-59123d66d487)

* Name + fathername -> The combination is called as a **key**.

## Prime Attribute/Key attribute

* All attributes which are part of key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12e70815-fe5d-418f-9028-3906e65eb965)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acacafeb-a834-4f5a-8e28-9c4d155a635e)

* Rno, name, fathername -> **Prime Attribute**

* Is it compulsory that every entity set have keys?

> **No**. If needed then we will make it, not compulsory.

## ER diagram representation shapes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cac79fff-d255-48b6-85ac-e6e5917e3450)

1) Entity Set -> Square
2) Relationship set -> Diamond
3) Attributes -> Circle.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49c3e020-85df-4051-956e-848c25c6b32a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43e2acab-546b-4f82-a4e1-a69df97ae80c)

* Entity Set diagram.
* Entity Set -> Educator
* Attributes -> Eid, Ename, Edob, Esalary
* The Entity Set, Educator can have many educators. We don't know how many it has.

## Types of relationships

1) Unary -> Entities of only **one** entity set are involded in relationships. 
2) Binary -> Entities of only **two** entity set are involded in relationships. 
3) Ternary -> Entities of only **three** entity set are involded in relationships. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afae91b5-3b50-4054-b82a-674bc89695f2)

## Unary relationship

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f845a844-480e-41e4-88bd-f2d91b9f2ade)

* Professor reports to other professor.
* Relationship -> reports
* Senior
* Sub-ordinate professor reports to which professor?

> **Senior professor**.

> Professor is connected to another professor in some relationship but the professor information is written in one table only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1638b45-2f00-4b51-aed3-679a53519a85)

* One entity set and it creates **relationship** among the entities.

## Binary relationship

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b63c1a8a-5145-44f4-a660-a0d17c5716e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98236e67-cd2b-4eab-9077-69eb8680fc14)

* Educators teaches courses.
* Many educators are teaching many different courses.
* Teaches -> Relationship set.
* Educator set's entities are participating in the **teaches** relationships with courses.
* Which educator teaches which courses.
* **Direction** is not needed, we can understand directly.
* Some attributes are there that come after a relationship is formed. They are called as **relationship set attributes**.

* A educator is teaching a course, from which time the educator is teaching the course.
* The information is **since**.
* The information/attribute of **since** is only valid when the relationship, **Educator teachers a course**, is **made/shown**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a01488e5-b673-4709-8592-8c9af69b6ff7)

* Vishvadeep sir teaches **COA** since two thousand 11(2011).
* Vishvadeep sir teaches **C-programming** since two thousand 7(2007).
* The **since** attribute has come into **existance**, **when the relationship**, **Educator teachers a course**, is **made**.
* Any attribute which is a part of the **relationship set attribute** then they are called as **descriptive attribute**.

### Descriptive Attribut

* Attribute of relationship
* **Since** in above relationship **example**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22b5fc4f-12a6-4591-97f2-59a9d35479bd)

* There is no existance of **since** until the relationship between the **educator teaches courses**, shows.
* If relationship is there then only **since** will come otherwise not.

## Ternary Relationship

* Relationship Set -> Teaches
* 3 Entity sets are involved.
* Vishvadeep teaches COA in CSE department.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85b2a187-93e3-4756-bd32-04898afdec63)

* Vishvadeep teaches COA in ESE department since 2016.
* Vishvadeep teaches COA in Electrical department since 2018.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abd97474-4f14-414c-bb24-4f0c7c77e691)

* If **three** entity sets are involved then it is a **ternary relationship**.
* We can use **descriptive attributes** in **uninary relationship** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0b11b39-8fad-40a9-befb-abc62f5491d7)

* **Uninary relationship**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ab821cf-f40e-4ce9-8e6a-19b10dcf70f3)

* If we don't put **since** then we will not know from what time that educator is teaching that course.
* We want to store some information but we don't know if it will be educator's info or the courses's info. The information is there because of the **relationship**.

* Usually we read the ER diagram from **left to right** only.

## Mapping cardinality

* If two entity sets are in **relationship** then how many entities from the two entity sets are forming/showing one **relationship**.

1) One to One
2) One to Many
3) Many to One
4) Many to Many

## One-To-One

* One **cititzen** can **have** only one **driving license**.
* One **driving license** can **have** only one **cititzen**.
* Citizen having driving-license.
* One To One relationship.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11a261ab-1ce0-4ac4-a118-af963dce5a47)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dec328c-fd4e-4098-9989-ec5bcd2bdd6c)

* It is not necessary that all of the entities will participate in the **relationship**.

## One-To-Many

* One entity of **employee** can have **relationships** with **multiple entities** of **teams**. 
* One employee can manage one team.
* One emplyee can manage **more than one team**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df0a106b-c771-4eea-861d-2527c6b045da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a9a50bc-b1dd-41bf-9a55-2ab24ce969bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b89433c-ee2e-4b88-a1bc-0fc42db7d6ad)

* If one entity in the relationship is showing relationship of more than one on the right side then it is **One to Many** relationship.

* Towards the **one** side put an **arrow**. The other side is the **many**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/455264b6-24c4-42fb-913b-da8bdaf441b3)

* Another way to represent **One to Many**.

## Many-To-one

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff107233-f5a1-4df9-a14a-20d8e60a5002)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79367e1a-9d6e-40b7-a23c-d0beba8c97c0)

* Mirror/opposite of **One to Many**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69375a9d-27a2-4c07-b24f-7dd4595c07c1)

* No.

## Many to Many

* Multiple educator can teach one course
* One educator can teach multiple courses.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d5c9fc7-fe9a-46e7-a781-56bf141bf82d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fca2c30-c5c9-48c0-8db3-1e6d4652dcec)

* No.
* It is not necessary to show the **entity** but we will show the **entity set's relationship** that's it.

## Participation Constraints

* Specifies the presence of an entity when it is related to another entity in a relationship type.

1) Total participation -> All entities of an entity set are particiating in a relationship
2) Partial participation -> Not all entities are participating.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e31113b5-2d87-4a74-b635-62de8b358da0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a97bff3-328d-46aa-84c8-7dbab6e01449)

* Customer's particiation will be **partial** here.
* Credit card's particiation will be **total** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b7fb5d8-d8f2-4be0-988a-a8186ca389ae)

* Where there is **total particiation**, we will put **double lines** on that side. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbb14f66-0032-4c01-ad3e-625146227c06)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4803a7bd-9e6c-4f79-ae2e-55e5f48e326c)

* **Departments** participation will be **total particiation** as every department must have a manager.
* **Educator's** participation will be **partial particiation** as every educator will not manage a department, not necessarily.

## Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/541e6947-2a17-423e-885d-bf214bde6813)

* Question
* Option C.
* **Rent payment** is not soly on **Person** because it is dependent on what room the person has booked. It is not solely on the **Hotel room** as well because the **rent price** of the **hotel rooms** chance from person to person.
* So, **Rent payment** is an **description attribute** which is possible because of the **relationship** between the **Hotel room and Person**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/807cedbf-88c6-4f80-8594-5db0489d906d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fa2d5e5-a5f0-4b7d-82da-bf81eac2705d)

* Question.
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c66f9be5-2417-4597-9f6c-989553bd7935)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ea309ca-776d-4f27-992b-0a9cd1f1d889)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fb099db-b0fd-48d7-bea9-db2f14c0a8de)

* Drawing the **set diagram** will make the questions easier to solve.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2101be5b-6bb1-4a8e-a242-f14cda4d9086)

* AND more than one also there.

## Weak or Strong Entity

* A weak entity is an entity that cannot be uniquely identified by it's attributes alone.
* A weak entity set does not have **key**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bef6d83a-0c01-48b2-9933-1013b47f919b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcc2517a-b8ce-4abb-8e85-96007edb9c57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73948681-bbe6-4131-b24d-d7a6c60f6a6c)

* Weak entity set is marked with **double rectangular box** around it.
* Every **dependent** doesn't need to be given a **new ID**. It doesn't have it's own **ID**.
* Two weak entity set cannot make a **relationship**.
* One is a strong entity set and one is a weak entity set then the **relationship** is **weak**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e088de0-0ac4-4fa8-a788-c8c8e62c7a1e)

* **Weak relationship** -> Double Diamonds box.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be8e254f-10b4-4eff-a2be-911589c1681c)

* True.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6cfa3aa-e3c3-4ce6-9659-59c41539efaa)

* One Singer can sing many songs.
* In one song many singers possible
* So, **Many to Many** relationship.
* Songs has **total participation**, as songs cannot be created without singers.
* Singer has **total participation**, as singer has sung songs that's why he is a singer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e99b99d6-1990-4f96-8f01-45ab1af318f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cd0eb5c-259e-4aae-9bb9-22ab930ec04c)

* One customer can buy many products
* One product can be bought by many customers
* That's why **many to many**.
* Not necessary that all customers buys products, that's why **partial participation** in **customers** entity set.
* Not necessary that all products are bought by customers, that's why **partial participation** in **products** entity set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/214e3990-7572-42ed-b040-2ab58fcbb361)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddc281a1-41e7-474a-bfa5-99189e94f88d)

* Yes.

* One children can go to many schools, different times(Secondary from one school, higher secondary from another school)
* One School can have many children.
* So, **many to many** relationship.
* Not necessary that all children go to school, that's why **partial participation** in **children** entity set.
* It is necessary that all schools have children, that's why **total participation** in **school** entity set. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c5aa40a-6112-4686-a507-6529a227ed88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2f9ae8d-3e07-4f9c-9682-589c0dec027d)

* Examples.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fd7637a-e534-4e2a-a92b-1356d4adf351)

## Doubt clearing session relational modeling (4) [25th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e6a7437-bd47-4032-86b2-481930f59eda)

* Total and partial participation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/592c54ca-b7df-4618-aaf5-58cbc8a05a42)

* Strong and weak entity set.
* Weak entity set participation in a **relationship** will always be **total participation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0f2402d-d31b-48cf-9ff5-bed017c1869a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85e1499f-c2f2-4752-9726-0908aee22b4a)

* Yes.

## Weak or Strong Entity

* Dominant Entity -> Entity of strong entity set
* Subordinate Entity -> Entity of weak entity set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffbd310a-a91c-43fd-8086-edc04b3c23ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a455248-cb71-4fc6-b92a-33c1c7d96ce1)

* If one **entity** of **Employee enity set** which is **strong entity set** then it is called as **Dominant Entity**.
* If one **entity** of **dependents enity set** which is **weak entity set** then it is called as **Subordinate Entity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af7fa60b-aa85-4c9b-b96a-fb7663918ea5)

* Both the **Dominant and Subordinate** terms will come into **existance** when we are talking about the **above relationship** of **Employee and dependents** which is a relationship between a **strong entity set(Employee) and weak entity set(dependents).

* If we take one **entity** and not the whole set from the **strong entity set(Employee)** then it is called as **Dominant entity**.
* If we take one **entity** and not the whole set from the **weak entity set(Dependets)** then it is called as **subordinate entity**.

## Types of Attributes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e69b49c3-fb94-42a6-9993-a88026038068)

### Single VS multivalued attribute

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e78e3c79-980c-4aac-ad81-a969d9b528d0)

* More than **1** possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9800957-2c23-41f0-8d8a-50c9aeb6c8ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06b6fb20-2bb1-4255-8306-9c45ce15c247)

* Single Valued -> Single value possible for each entity(Rno, name, dob).
* Multi valued -> Multiple values possible for on entity(Phone no).

* To draw **Multi valued**, we need to put **double circle/ellipse** around the value in ER diagram.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa284105-aca8-4ed4-96f0-e31f2e341818)

## Simple VS Composite/Compound attribute

* Attributes we have that can be decomposed into more attributes then those attributes are called as **composite attributes**.
* Simple -> Single attribute cannot be decomposed into further attributes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea6a73a8-cfb5-4c43-91bd-c214c7ddf33f)

* Simple -> Cannot be decomposed
* Composite/Compound -> Can be decomposed into other attributes(fullname).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce23930e-36de-472c-9a15-25c530a1dbe3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c42a89e-23c4-482c-8f35-ae59e51d5429)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82f9b1a9-64a8-4b25-9781-080109c2388a)

* We have **4** attributes here, **Rno, fullname, dob, address**.
* **fullanme** is a **composite attribute** of **firstname, middlename, last name**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d72bc182-9a41-4f40-b9d3-3f9ff24bb076)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88e0f6bf-1b3f-4402-be5d-5ad7236975f7)

## Given VS Derived attributes

* Given -> Given in entity set
* Derived -> Derived from other attributes(age) -> Dotted lines.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2a6a25f-6f7b-4710-a7fc-676fb67df251)

* **Age** can be derived from **dob**.
* **Age** is not a direct part of the database. We are showing that **age** can be derived from different attributes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a1fb2cd-9fd6-4012-915f-b8762eb74a03)

## Prime VS Non-prime attributes

* Prime -> Part of key
* Non-prime -> Not part of key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76e95124-54c4-4cb3-8a01-36aadd939b67)

* To represent **prime attributes**, we will put an **underline** under the **prime attributes**. We have not said that theya are **keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78326356-f31d-4fb9-b849-d01854b4f68d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aefee754-8c28-4bf8-b391-dc67b76c035e)

* Rollno -> Prime attribute
* fullname -> Composite attribute
* Phoneno -> Multivalue attribute
* dob -> Normal attribute
* Age -> Derived attribute

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/893c4836-54f3-42ff-850c-e0edcd19dd5e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42dae6c-454c-4a52-96ed-0d5239b6d18d)

* No.

## Entended ER features

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5cfc8eb-82ac-4f5d-850a-14cbcb8bd21a)

1) Specialization -> Specializing the information of an entity set.
2) Generalization
3) Higher and lower level entity sets
4) Attribute inheritance
5) Aggregation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccfdc497-89aa-4fed-8fd2-735315a1b54b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cb0ee16-158e-4e1b-b3cd-194cdc9a7bf0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9ce0269-1641-45d1-81d3-36a55bd5b7fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92e16d2a-8369-428b-a65d-bad65ac32bfd)

* Vehicle is a **2-wheeler** and **4-wheeler** -> **Specialization**
* **2-wheeler** and **4-wheeler** are **vehicles** only -> **Generalization**.
* In one **entity set**, we are specializing two different **special categories**.
* When we are going towards **specilization**, we have to make the **special categories** when the **specialized entity sets** have some **special attributes**. 
* If there is no **special attributes** for the **specialized entity sets** then there is no point in creating the **special categories**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32751aad-ec36-4ed6-952e-ad33af9a5e14)

* Top to bottom is **specialization**
* Bottom to Top is **generalization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a0370f8-8ea8-4dfd-8ec0-0386c3620d8b)

1) Disjoint set -> Any entity is **mutual exclusively** going to either one of the **specialized entity sets**.

* One entity of higher-level entity set(**Vehicle**) is present in only one lower-level entity set(**2-wheeler** and **4-wheeler**).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0760679d-dac6-43d9-95ac-61caf3fb1427)

* Vehicle will be either **2-wheeler** or **4-wheeler**.

2) Overlapping -> Present in more than one.

* One entity of higher-level entity(Musician) set can be present in more than one lower-level entity sets(**singler** and **guitarist**).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92d318d9-3926-411d-a1ea-c6df6d1379e0)

* Musician can be **singler** and **guitarist** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e40012d-a6e2-4fda-8e03-1ad74cae8229)

* **Total Generalization or specialization** -> Each higher-level entity must belong to a lower-level entity set.
* **Partial Generalization or specialization** -> Some higher-level entity may not belong to any lower-level entity set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fe7fa46-be30-425e-8694-02921c481446)

## Attribute Inheritance

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dc427c9-efbe-4ced-a3eb-64669335a48c)

* Employee entity set -> 4 attributes -> Name, street, city, salary
* Customer entity set -> 4 attributes -> name, street, city, credit_rating.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/befa2fad-8320-427c-bf72-20cda94b4178)

* No.
* Inheritance is **top to bottom** only.

## Aggregation

* Relationships is shown betweeen **entity sets**.
* Relationships-set participating in relationship then aggregation is used.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cbab4bd-b2d8-4af2-8d47-c4f9f7709cc5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c94919a-f0b6-492d-bf0e-2194e0791b8b)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25684711-a3de-41a9-83b5-d70ff8414bd7)

* Wrong way.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19a01fbf-c886-48e8-b4d2-522e9ea16c33)

* Correct way.

* The manager is not **managing** individual job, employee or branch. **Manager** manages the already exisiting relationship.
* We want to show a relationship of a relationship with a different entity set is called as **Aggregation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/522c5427-e2eb-41e2-a6a0-42fdb18837a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53640606-1fdd-4d96-ab4e-78105e2c79e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6248ade-35ae-4c0b-add7-a64157131634)

## Keys and sql part-I (5) [25th June 2023]

## Relational Model

* The relational model uses a collection of tables to represent both data and the relationships among those data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a81b0cc-1bef-45fd-b2d0-1c95473e8147)

## Relation

* The main construct for representing data in the relational model is a relation, which is table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4c17a66-ab36-4b04-a13b-218838a91404)

* Relation -> Table.
* There is a relation **Student** which means that there is a **student** table.

## Attribute/Column/Filed

* Attributes are used to describe relations
* Columns of relations are attributes.
* Table Name -> Relation(student)
* Columns -> Attributes(Rno, name)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fe7a188-91ac-484f-87e0-dd5dc6991ae8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/727f7969-b1cb-4b0a-99d2-e963a36ebda8)

* Row
* 4 rows, so we have **4 tuples/records** within the relation.

## Tuple/Record

* A row in a relation.
* A row inside the table is called as **tuple**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a886321d-58d8-4bb8-8710-94d905011fbf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10cf6673-59ba-4309-bb67-7302acaca560)

## Relation example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b620ac3-a053-4be1-9641-b7c55b8bcaea)

* We have **7 rows**, so there are **7 tuples**.

## Degree or Arity

* Number of attributes in relation.
* Column -> Degree or Arity

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8002975d-0e0d-49f5-bbc6-47851b726a97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a25c9c8-9699-4dda-b874-a5780bec51be)

* What is the **degree/arity** of the relation?

> **3** as we have **3 columns** here.

## Cardinality

* No. of tuples in a relation.
* No. of rows or records.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de87732e-f717-4a31-807a-35c34fe6f305)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5fc8e098-1e8c-4ee5-a9c9-31f5e60e58b3)

* What is the **cardinality** of the relation?

> **7** as we have **7** rows.

## Database Schema

* Tool used.
* Logical Design of database.
* Table is not called as the schema.
* All of the **constraints** that we have put and all of the database construct used to construct the database. All of them combined is called as the **Database Schema**.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32c5cc5e-7f6f-40da-b715-26e5d51c9af3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b7c2f57-1882-4cfe-b1fe-d42a4325de72)

## Database Instance

* Snapshot of the data in the datbase at a given instant in time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddd10f06-0754-48bd-9aa9-5d3660a5d697)

* Snapshot of Database.
* It will change.

## Domain

* It is not a **constraint**.
* Domain means when some values comes **what type of value(int, varchar, char)** it will be. Kind of datatype.
* A unique set of values permitted for an attribute.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11bea98f-4fb8-488e-9f0d-2238f318673a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6deb0574-6bd0-4c49-8a3e-28c079fc9017)

* Exactly

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fa28fa0-7205-412a-9d58-8c5e43f8b304)

* Difference between **Domain** and **constraint**:-

* Domain -> What is the datatype of the value.
* Constraint -> Even if the datatype of the value is correct, then also the value is **rejected/not allowed**.

## Domain constraint

* Specifies an important condition that we want each instance of relation to satisfy.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bf6c53c-2964-4563-afa0-a0ce1243685e)

## Keys

* An attribute or set of attributes whose values can uniquely identify a tuple in a relation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b68da71-412e-49e1-87ba-706cda29fcad)

* For name **Neha**, we are getting **two rows**.
* **Name** column cannot singly identify all rows. So, **Name** column cannot be the **key** of **student** table.
* Key -> Rno, (name + fathername)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df210c59-299a-4156-b762-641346580c76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8d1775b-1b33-41ba-8d6f-936fbb6e450c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b489278-bef2-488d-857a-ab44cfb6d0f9)

* Yes.

## Types of Keys

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c27e0f5-8fab-4b3c-802a-1e4ae7eef6f6)

### Super Key

* All possible keys of a relation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1033b8ef-cda7-4394-8f52-7981c9bf41bc)

* All possible keys combination is making super keys.

### Candidate key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b03db404-fdc7-4793-a74b-50888728956d)

* Minimal super key
* A super key whose prope subset is not key
* Example -> rno, name + fname
* **name + fname** combination because the subset of them is **name and fname** and none of them are **keys** individually. That's why they are **candidate keys**.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04231714-a55a-4c3d-a488-7358b3194828)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1918acd1-d5a0-410d-9f99-9006ee28ec5a)

* If **ABC** is a **candidate key** then **A, B, C , AB, AC, BC** are not **keys**.
* **ABCD** is a **super key** but not **candidate key**.

#### Prime Attributes:-

* Attributes of candidate keys.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dddff33d-d35e-4c2a-af17-7d3c8d675c16)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf4f4f35-4600-43bf-8efd-1a4f41baa6e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f71fa7f1-85ee-4bd8-9fc3-7206d1d8da89)

* Question.
* Total no. of super keys which are not candidate keys?

> **7**, except **ACD**, all of them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/580a2093-9633-4964-b368-7d0d13ff1b35)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58b5eb87-31ca-495b-b75a-a4edf3bd7597)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c65f7e14-33d3-45a6-8499-5d6afe5b292e)

* ACDB -> Not a candidate key as **ACD** alone is a key. **ACDB** can be a **super key**, yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6956597d-e749-42f1-9282-e5e98546051d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7e4f22c-8301-4f54-8fa3-2fc636db8aa9)

* possible.

### Primary Key

* One table has only one **primary key**.
* Chosen candidate key for implementation.
* Example -> rno, name + fname
* Primary Key -> rno

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4e2bf72-3f17-4fc9-81e9-982a6699f507)

### Alternate key

* All other candidate keys apart from primary key
* Example -> name, fname

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd63e128-defe-4c53-a21a-165307be986a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfccd1cc-a670-4771-affc-0007e9d1b3dc)

### Foreign Key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24c0f66b-5bdf-490b-8cf2-fbf345473b39)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/744680ed-f871-4b25-8058-84130c2d788e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea30e54b-1045-4d6f-92a0-1c2f3b3ce254)

> The constraint put on the **Account.Branch_id** column is called as **Referencial Integrity constraint**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb927970-11e5-45f4-b214-1b024799faaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6de4c11-a832-4a15-b0ec-a64c1e527452)

* The value we are referring from should be a **primary key** of that table. **Compulsory**.
* The one who is referring the value is called as **foreign key**.
* Branch table -> Attribute which is **Branch_id** -> Primary Key.
* Account table -> Attribute which is **Branch_id** -> Foreign Key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7968e9c-a739-4501-8f5e-329079f44265)

* Ofcourse
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cde2110-e6d6-47d7-9d89-42241286a098)

* Not necessary but easier to remember if same name given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e38f589d-f3b8-4ef0-a687-2c04e0c4e87f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30c0d2f6-d738-4f0a-b701-786cdb01193c)

* Branch table is **parent** table.
* The **FOREIGN KEY** constraint prevents invalid data from being inserted into the foreign key column, because it has to be one of the values contained in the parent table.

### Referencial Integrity constraint

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8340c8cd-4938-416e-b14c-96c401fb472d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a739c618-7145-43e3-9d83-6ed4e94b5fe1)

### Referencial Integrity Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bb0a7f7-dea0-42a0-a411-022e6e4542ea)

* Publisher.PublisherID -> Primary Key.
* Book.PublisherID -> Foreign Key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14853a8f-8734-4700-8bb1-6063d454aaa7)

* Foreign Key may not be **unique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24e2d6c7-360e-4a85-ba9b-0f5c5976aaef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a05db006-b8bf-4bdf-bad3-53c34d743ee4)

* Integrity constraint is still maintained.
* Foreign Key can have **NULL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f89efb3-7e27-4d75-b7ee-c1e44960dd5a)

## Cascading effect

### On update cascade

* It says that foreign key value refers to which ever parent table value, if there is **updation** at tha parent table then at the **foreign key** updation will also happen.
* DBMS will do it **automatically**.
* If parent table value updated then automatically foreign key values are also updated accordingly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b87dadb2-cf5c-471f-8a21-f9b1e90ab50b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32f8e38e-0df6-4480-9bc1-e75d9ebbca2e)

### On delete cascade

* On delete cascade -> Careful implementation
* On delete No action -> Makes no sense.
* On delete set NULL -> Careful implementation -> Only foreign key set to **NULL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d701439-6d34-4704-bc65-a6ad0a63b172)

* More cascade options.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75f8221a-85b9-4bc5-8c7e-b1e58c346e77)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae7c3ba6-16a7-497c-b1fc-9c27def8c3bb)

* R1.A -> Primary Key
* R2.X -> Primary Key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6faf59b2-fa69-464c-b161-ae2f1ce8634f)

* Set of attributes.

## SQL part-II (6) [26th June 2023]

## Foreign Key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3413aa74-193b-4350-87e4-0beb2d5c7ace)

* On Update Cascade -> If we **update** the column **Branch.Bid** and the value of **B4** was updated to **B5** then the  column **Account.Bid** values which had **B4** will be updated to **B5**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/442c9283-e8af-4a89-aaac-6f606794a2bf)

### On Delete

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab57c81-6141-455f-bf3a-c2530cd29c19)

1) **Cascade** -> If we **delete** the **B3** rows in **Branch.Bid**, then the **B3** values present in **Account.Bid**, their whole/entire **row** entry will also be **deleted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44cb951b-2504-4f83-bed8-d51290342310)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c3bb9c6-ace0-4817-b1fc-f7ed85247226)

* Not only the value is deleted, the whole row is **deleted**.

2) **Set NULL** -> If we **delete** the **B1** row from the **Branch.Bid** then the values in **Accound.Bid**, their values will be set/updated to **NULL**. We will have **no value** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b796944a-e98d-4eb5-8d9d-ad9649f055ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37fb0613-02b0-4a2b-b6ea-1c63da334604)

> In **Account.Bid**, **NULL** values should be allowed otherwise **On Delete Set NULL** will not work.

3) **No action** -> If we **delete** the **B2** row from the **Branch.Bid** then there will be **no changes** to the values in the **Accound.Bid** column.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1e21971-001f-4f58-bf03-54c1883e2105)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb2ceda7-2717-4548-9f05-7707a3fb9c9a)

## SQL

* Structured Query Language
* Domain-specific language used in programming and designed for managing data held in a **RDBMS**.

* Operations in SQL:-
* Inserting data
* Retrieving data
* Updating data
* Deleting data
* and more ....

* How we will access ER diagram data?

> We do not store anything in **ER diagram**, it is just a **representation**. From **ER diagram**, we create a **table**, and we actually store that **table**.

* ER diagram -> Paper thing(Representation).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b09b75e7-7f2a-4fd8-8291-864f1f127fc6)

## SQL Datatypes

* CHAR(size) -> A **fixed** length string.
* VARCHAR(size) -> A **variable** length string.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96da883f-1eeb-48ad-963b-2bece0a7834b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f1940b9-5710-4968-b8f0-d62ea55de4e2)

* CHAR(10)
* VARCHAR(15)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/613ac500-6b56-46ff-8a82-4a15e4a5c5d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e336a8b-355e-4e74-80af-85a12046e769)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebdeb067-fb44-4175-9e55-31d90944d718)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9305d1c7-c031-4786-b23f-2493a0c31d99)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21cbe6fc-0dee-4c9e-85b4-67f8c19f877b)

* Integer/Int
* Float
* Varchar
* These **three** are mostly needed. 

## Case Sensitivity

* SQL is not **case sensitive**.
* Only **DB** values are **case sensitive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf74382a-91e6-4ebd-8cae-dcfe708fd1dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa2db9be-4843-462c-b166-bd295f826224)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23fdb997-e7bf-4cf4-9230-0365f2014d7b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6731e7e9-f49f-468e-8c67-9c3fa383a803)

* Semicolon Mandatory? -> **NO**.
* Run all queries together then after each query semicolon needed.

## Retrieving Data

### Select Command

* Used to retrieve data from one or more tables.
* **Syntax** -> Select * from tablename;
* '*' means we are selecting everything(data) from the **table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d91cb043-987b-4e3e-981a-c7edc4f3bcd7)

* select * from Customers;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a5e593b-e070-4109-a585-4ff30622514e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c688a2ea-7da7-4ab2-b4a7-916fc11f8457)

### Selected Column

* **Select** command is used for **column** filtering as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26344a3f-e456-4658-88a1-6a344827d6fc)

* select City from Customers -> All rows of column city.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ebb0d44-d3d9-4f04-9edb-950470e30052)

### Selecting multiple columns

* select City, Country from Customers

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/235f87b4-7ad6-437d-8eb5-7deb6fbd5229)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a098fa2-40a0-442b-aba5-bfd71169b593)

* select Country, City, CustomerName  from Customers

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95ad2701-cab5-429c-bc70-fa706079e7b0)

### Distinct keyword

* Need to be used with select, to fetch only unique values of designated columns(s)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42294627-48f1-4f01-9a50-d1b9df5f7cb1)

* select  Distinct(CustomerName) from Customers

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b86b4883-82ae-458f-9564-a154010f7571)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7f911de-2498-45d5-a5a4-2c92554e059c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d210733a-e726-49a7-9553-69a3dfc34d1f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/127770d1-af2d-401d-942c-343bd307df21)

* select distinct columnname from tablename
* slect distinct country from customers

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/727d7235-f82a-4e80-96a9-43be3acf52a5)

### Command with distinct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a459259d-5189-4591-a551-6b1cbd86a06e)

* select  distinct(Country), PostalCode from Customers

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21a6f69f-da4d-4fe5-8a49-3fd71371e331)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a296088-02b9-4a77-8cb9-ded7df0a0b29)

* Combination of **Country and Postalcode** are **unique** that are **selected**.
* distinct combinations

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48cde4c4-373d-4826-b8c5-830bf38325dd)

* If **combination is unique** then it will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6392f7d2-9eae-4c77-803d-a458519f1939)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20436b7e-9ac5-4300-8bc4-925cc36a84f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27f3a02c-5033-44d3-945c-aae250a7bed3)

* Error, not allowed.
* We cannot write **distinct** in one column and not in the other.
* If we write more than **one column** then **distinct** should be applied to all **columns**, or **none of the columns** should have **distinct**.
* We have to put **distinct** on all of the columns we want to retrieve or none of the columns should have **distinct** keyword.

### Command with distinct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68e77f7b-bee5-4656-a58f-28e1d4827b25)

* select distinct itemp from itemmaster;
* **3** distinct values -> 3 rows -> 2, 4 and NULL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2949f983-72c4-44fa-89ce-39d307ed8080)

* select distinct Rno from itemmaster;
* **4** distinct values -> 4 rows

## Where command

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec32c226-09e8-4e5f-8c89-5dbad2628b3b)

* Used with select, update, delete, insert commands
* Used to filter specific rows from table.
* Syntax -> select columns from tablename where condition;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/883a75cf-9657-4be9-9275-437f4dee783b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db727dee-5ea4-4d42-a57e-295128caba7e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2e39c31-f083-4675-9556-832b879ed322)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d89bb0ac-c765-48ee-8658-f82e497446dc)

* select * from customers where country = 'Germany';
* **Germany** is a database value, it is **case sensitive** unlike **SQL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7e73fb7-f963-425f-85c7-dbaf5402381b)

* This comes under DML.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8a550a0-07a0-4edb-bbb2-80d51edea75e)

* select * from customers where country = 'USA';

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c19a76f-5d0a-476d-80c4-f2a20b3dc4e1)

* select * from customers where customerid = 3;
* As **3** is **integer** so no need of **quotes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c9b4f80-f167-4c6f-8e92-e06feea7d959)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a31845ae-87b5-4ada-8804-f330e5e73efb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c69bbda2-ab9f-4f2d-93cd-1c11ab34f9f2)

* select customername from customers where customerid = 3;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb830eea-ed41-4e6e-97a0-42719e99dcce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9824ee6-05de-437a-882a-c06221339990)

* select city, country from customers where customerid = 3;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69ec605b-2948-4413-8b7e-00449a8c0f4c)

### operators with where

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/380afdaf-bfa9-4a9d-b3e7-42b7233ec34b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d36fd20-3da7-4895-9d5d-6e8b13344fab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e9435a1-665a-4e25-bb01-a94436c3c90f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98427d11-9456-4c95-963a-701b7ae4d2f6)

* Atleast 10 -> Min of 10 -> >= 10 -> Greater than equal to 10.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7712803b-5a25-43d4-8b60-91192c145c2c)

* select * from orderdetails where quantity >= 10

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d94a537-709d-4370-a794-128de6184a77)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77f28021-c724-4d96-8c60-98e8c62e51ec)

*  Greater than 15

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e014c575-7533-4645-94e0-69df4cf589df)

* select * from orderdetails where quantity <= 10

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdcbaad1-792e-4e21-b51e-ed46940e18f3)

* Less than equal to 10.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d32e888-a11d-4672-ae36-ae0a411e220e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8bb91b1-394e-43c6-9d81-b9396c7f5045)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86645205-64bb-435f-8ac9-42ca8d52c819)

* Less than 15

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdd02cb1-e6fe-4d8e-a639-02f7be414379)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/636465b1-b304-4f3e-8c7b-fd204c46f431)

* Not equals to 10.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfda6dd9-9548-4b00-9d11-eab35705384c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fe0d5e4-0f0b-46a4-b9a7-67ed081ccfce)

* select city,postal from suppliers where country <> 'USA:

## Logical Operators

1) AND -> True when conditiom 1 and condition both are true. 
2) OR -> True when either of the conditions are true.
3) NOT

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3483701-8fa8-48be-a49c-6a33addb93e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90ce5c6a-7fba-48de-bc1c-97d67735637c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2aa23fb4-291d-48c4-ae4c-44084b55e3d0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/349c4682-5a8b-4a11-b852-3b2102ad9828)

* Quantity is atleast **5** and atmost **30**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d1381fb-0221-489a-ad4a-e28f9e798263)

## Between keyword

* Between lowerbound(LB) and upperbound(UB).
* lowerbound(LB) and upperbound(UB) are **inclusive(included)**.
* Used to filter the records in the specific range.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd5efada-b218-4dc7-8f33-31a4eb39e290)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/428aa3bc-d628-45d2-8b9f-460405ff1b97)

* select * from orderdetails where Quantity between 5 and 30.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02658f80-c6e2-4c64-91bf-4f78928fdad0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c49df39-25b7-4c01-9275-63f92224b077)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/007dcd70-6d4c-4823-b824-7896d050505f)

* select * from orderdetails where quantity < 10 or quantity > 20

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33a1cc30-72bd-42ff-aba2-c15064d1c7d0)

* less than 10 or greater than 20.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36742bc6-9fe1-41cb-a902-6007619cf520)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1924cc0b-1896-452b-86d3-9cc371a553e0)

* Another way

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/900239d5-0fff-4333-8c94-13bd1511e885)

* same
* select * from orderdetails where quantity not between 10 and 20

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eea7a325-801d-4f24-bab6-d07ba1acb791)

## NULL in RDBMS

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f926665-a75c-4579-b0d9-0aeeda0d9a61)

* Will not work. **NULL** is representation of string and not **nothing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8df50b7d-6720-45d3-a520-c3833d8f95a2)

* We have to use the **is NULL** keyword here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e9e9492-cbb0-4e6d-b16a-789ba96286d0)

* Nothing because here in **=** operator, **NULL** is taken as a value.
* To compare **NULL** values, or to find where **NULL** are there, we have to use **is NULL** keyword.
* select * from itemmaster where itemp is NULL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e075c017-a2d9-4778-bd9a-cb97e3dd7dd1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bd42608-8a43-467e-b0da-f73c7a01e262)

* If we want **NOT NULL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d00b4c28-5713-4b86-a4f9-ad490b9d7553)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94d62414-9b3e-4aa8-9c8d-d2bb5377b5c1)

* Outputs from SQL query.

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38ffa0f9-30c8-46a7-82a0-a208ae4be6c1)
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
* select * from customers limit 5, 4

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ab3a686-3d02-479e-9924-9f212b3f8473)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14315cca-4bfb-4463-83d3-a55a7891b626)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9f70e56-e15f-4e18-9bd1-7d975fdb7f36)

* SELECT min(customername) FROM Customers;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/793ac12a-4a28-4269-b951-e0d604e57a25)

* Arrangement

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed2e525f-ae32-4e7c-bf12-2fa2fc65c9aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d8e25f1-ad6a-4e28-b6bf-e7c4127d9530)

* **min() and max()** -> Works both on char data and numbers. For char data it returns the first or last record according to **lexicographic order**.

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23de4729-be9f-498b-b180-0bc9e5c23055)

* Average -> Summation/Count -> (5 + 7 + 7 + 7)/4 -> 26/4 -> 6.5.
* We will not count the **NULL** as there is nothing over there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3bab3bf-748e-4994-b891-dfddbe88ce4c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/153b4984-ae12-4646-b112-27ef5f969eb4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f84a40a8-8240-4be7-9dbf-118b3dc00f17)

* Select count(*) from itemmaster

> **8 rows** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5122d88-747f-4cc9-bdea-dadad74a9ec1)

* Aggregate functions return a **number**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdd1a52c-22ca-4c53-807f-c049494b81c0)

* count(*) will look at **no. of rows** that's why it will be **8 rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e20939b4-45f7-406a-ac04-cb9362c496a3)

* Yes.
* create table itemmaster(item int, itemp int)
* **Creating table**
* insert into itemmaster values(1,2)
* **Inserting values into the table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c0f6080-56db-4589-922c-4e37cb35a30c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdb90b81-9f51-4fcc-9a7c-02d8ebe0665d)
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

* Subqueries

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cc91892-358a-4a29-a842-f6fe70c6d9e8)

## Alias

* Used to give a temporary name toa table, or a column in a table
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc768781-aeb3-4f94-b1a3-c991eeaa07e7)

* If we give **keywords** in **single or double quotes** then they work as aliases.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b62ae5e-bba2-4048-8e09-1b12a0dc2d81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbd8592d-ebfc-443c-a5c4-1a945abc56eb)

* Alias examples, where can we use alias and where we cannot.

## Query Summary

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24d7cae2-5ccd-4011-badb-d103fd5bcb63)

* from -> where -> select
* Limit runs at the end.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/805ad8b4-08b3-4b91-b851-22f8f9ad7682)

## SQL Joins

* Needed to retrieve records from more than one table collectively.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea690ee3-e864-4bea-a405-6989d761a81f)

## Types of Join

* Inner join -> As called as **natural join**.
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

> Left side table  + right side table combination is the **no. of columns*.

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ea94500-1dd4-43ed-8cef-6fc88bc28fd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a68627f-b045-4122-9ed3-69098ff2856c)

1) select * from customers where country IN ("Germany', 'Berlin');
2) select customername, address, city, postalcode, country where contactname ='Yang Wang';
3) select * from customers where customerID <= 19;
4) select * from customers where country NOT IN ('Germany, 'UK', "USA');

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0163990e-9232-43b4-8d36-61af8a861bd7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56284f5b-6bfb-4260-9b84-31e1e33ac8b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/732c698f-cdf3-446a-9cd4-564c23b82fda)

* We don't know if the table is sorted/ordered using customerID or not, it is bettter to write **customerID <= 19**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e38e4b01-9b50-41b3-9246-c2f1df314979)

* Yes, limit could be wrong there as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55f87089-80ab-43bc-8188-e3b9b399df29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c94d946-2322-4fcf-8201-9a7d4161ea5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c863fe1-f1c2-4853-b38c-6c33b8ebc157)

* Yes. All rows will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89e3785f-6b9e-49e4-b57d-d0cf0b9a7040)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ef2446f-bb8d-42b0-b5d2-1ecc5658cc47)

1) select * from products where supplierid IN (1, 2, 3);
2) select productname from products where price between 5 and 25;
3) select supplierid from products where categoryid = 2;
4) select * from products where supplierid =2 and price > 30;
5) select * from products where price > 50 and supplierid != 6;
6) select * from products where price < 30 and supplierid not in (2, 6);

**OR**

select * from products where price < 30 and supplierid != 2 and supplierid != 6;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5f94ca2-4444-472a-a2cd-3fe50089586b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02028df2-30a9-4c90-8ad0-d81d8f74dbfb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0213b735-ce40-4a7d-b52e-73e8564e660c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dae0f30-12b2-4c16-b57a-bc3ac49af27a)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5785d4da-44dd-4884-9b41-9aefb44f3f13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3955cb5f-b7fa-447b-b25a-082fc8bc2390)

* Cartesian product.

## Inner Join

* We need **one** common column for **inner join** to work.
* Inner Join -> It will give those records that are in the left table and are matching with the column records of the right table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f6e05ed-78fc-4614-a464-298a78d41440)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/783f9aab-151a-4673-afa1-8aafbb8a5b4d)

* select * from table 1 Inner Join table2 on table1.column = table2.column
* select * from table1, table2 where table1.column = table2.column

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5543eee1-4f03-4459-a940-6164567e57b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7cf8ea2-9e97-4686-ac29-13485dfb4b2b)

* select * from student inner join library on student.rno = library.rno
* SELECT * FROM products inner join suppliers on products.supplierid = suppliers.supplierid;
* select * from products, suppliers where suppliers.supplierid = products.supplierid;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eccc9e58-ce13-46cd-b656-d4b13e65671d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78e9c1a1-cc8b-400b-b12c-8964557e95b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/169486b3-9ca3-44b1-a1d1-9a0e71e8ecf4)

* Cartesian Product -> Cross Product

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6cd093e-5a00-4e47-9e43-e3985905b730)

* select * from T1 inner join T2 on T1.A = T2.A

## Left Join/ Left Outer Join

* Left Join/ Left Outer Join -> Entire rows of left table adnd matching rows of right table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/547ddfc3-bf20-44a9-8285-3605addbcce0)

* select * from student left join library on student.rno = library.rno

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5a6edda-7537-4c84-84a8-7f61a131a63d)

* Result set

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13f093f7-18ce-4971-a9ca-2720ac052d8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75b36336-2c3f-4af7-b840-d701efeff73d)

* Not necessary
* Min. no. of rows in result = no. of rows in left table.

* In the left table we have **4** rows and **3 rows** in the right table. How many max rows we will have after **left outer join**?

> We will have **12** rows max.

> All **4 + 3 -> 7** rows from the two tables are all identical then **4 * 3 -> 12**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b4ce997-56b6-477f-a31d-3609d39ae92b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41a04455-141e-43f3-a0fc-7eb6d1edb5f4)

* If all the values are **distinct**?

> The no. of rows will be  -> No. of rows in left table

* Min. no. of rows in result = no. of rows in left table

* It is **true** when common column has unique values in both tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06c5317f-b5ac-441c-b4c2-b9bda502ff94)

## Right Join / Right Outer Join

* Right Join / Right Outer Join -> All rows of right table and only matching rows from left table.

* select * from student right join library on student.rno = libbrary.rno

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e82fb62d-8e6d-4d68-aefb-9970c1b8185a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42d8644d-e1cd-4471-9b25-1bfaff75fa07)

* Resultant set

* Left and eight outer join are **complement** to each other. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14f2ca0d-51e7-4688-9ee4-e1fc624a46f8)

* Yes.

## Full Join/ Full outer join

* select * from student full outer join library on student.rno = library.rno

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38d6e7f1-8bf3-48b3-bb8c-7d7b8f1111e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b02061e-d61b-4449-8faf-5c42d32f194f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11a1c06d-6722-410b-a1a0-24ddf7088414)

* **Full Join/ Full outer join** -> We taking all the rows from left and right table and, whatever matching data left table has with right table we will write and if it is not there we will write **NULL**. We will take the matching data from right table which are matching with left table and if not there we will write **NULL**.

* Inner Join -> Only the matching data we will get from the left and right tables from the **common column** between the two tables.

> We can say that **Inner join** is a subset of **left and right** joins.

* Left Join
* Right Join
* Full join -> It is the **superset** of **left and right** join.

* They are **subsets** and not proper subsets.

1) Result set of inner join ->(subset) -> Result of left outer join
2) Result set of inner join ->(subset) -> Result of right outer join
3) Result set of right join ->(subset) -> Result of full join
4) Result set of left join ->(subset) -> Result of full join
5) Result set of inner join ->(subset) -> Result of full join

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc33d274-c6d9-4f1a-9c18-0ad211a77e86)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e269146f-b0c6-45f5-b7e2-be0b5edf84a2)

* Question
* Option **D**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43486471-8f89-45a9-a204-8ba6745a25ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a70e037-d758-4135-8a67-24348aa3d824)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a212c449-b350-4f9b-9e50-323afb61abcf)

* Question
* Option **D**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39ef5f32-2482-48ce-b274-5257648cddf1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d36ced0-06fd-42be-a04d-3ab5287303be)

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

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ba49c0d-113e-4953-9bde-1f58d9a3b2b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e93a91f-7b5d-4297-9219-6c9aa752b566)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d274f37-9acd-40df-b0ce-405fb8a7a39d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2676943c-b345-43dc-a4e2-5defad2bb066)

* select customername from customers inner join orders on customers.customerid = orders.customerid

* select customername from customers, orders where customers.customerid = orders.customerid

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6469faf9-7f6d-4b44-b6f0-59525027fd98)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da3a22eb-a612-4ab6-b2ef-b46bbdb19973)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43f24558-1d97-47af-8405-3f1411cb36f7)

* select distinct(customers.customerid), customername from customers, orders where customers.customerid = orders.customerid

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ffc3940-1eb9-4837-a448-50a8cbceaa8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/982f51b2-cbd6-4c5b-9c02-227c8201b274)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a43d7f3-e0f2-4e57-b620-27542a2bd73f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cef2ffc8-6419-4077-b5c0-d2b2bbedf576)

* select orderid from orders inner join employees on orders.employeeid = employees.employeeid where firstname= 'nancy'

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c82a3a23-ec42-42c5-93e5-4b42f6f6448f)

* Join will be on the **filtered** data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b2d4420-f6fa-414e-b522-3a593f5d780c)

* Ordering.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d3e3147-9425-40bd-88f0-31ee7003e605)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/303499b2-7383-42eb-bdb8-31a38d615739)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cbb3b5a-7c9e-46e8-9374-d66a663caf64)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5b924ca-8472-4d14-b994-ee188bfb9404)

* select dname from drivers inner join driver on drivers.did = drives.did; 
* select distinct(dname) from drivers, driver where drivers.did = drives.did; 

* We want those drivers, that are both in **drivers and drives** table. That's why we did **inner join**.
* select drivers.did, dname from drivers, driver where drivers.did = drives.did; 

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7040b31-908d-4918-ae93-798e3ae231fe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d92fdc00-72e6-4cac-b6a6-ff6d9e5d39d6)

## Self Join

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fb1506b-78e6-4e83-a087-8fbce02c9ae1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27ce8c66-af25-4a97-bbc7-251ffa7485bd)

* Point.
* select name from employee where eno = managerid -> **Wrong **.
* Find name of all such employees who are managers also.
* We need to make a copy of the **table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25e32981-6ba5-46dd-8c50-9d90c8f558a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28d695f0-945a-4427-b73e-32333e682f0b)

* If we have to do joining then we will do **joining** with the **same table**.  
* But we don't have **two** tables.
* We have to join the table with **itself** only. It is called as **self join**.
* If we have to do join the table with **itself** then we will have to do **aliasing**. It is **compulsory**.
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eed3d727-70bc-4e8c-8f5d-c1b5ccf41926)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa58dc4c-6a1f-43b7-9514-e223f8404736)
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e9f5c7b-0076-4c86-bee6-a1ea9408408d)

* For all of the **unique values** of **dob** column, we are creating **separate** groups for them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cec7a11e-26e4-4168-8cb3-14cb90328bbc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cff86ee-b790-45b6-8c31-109ba28362e7)

* select * from customers group by country;
* select country, count(customersID) from customers group by country;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33f02425-de2e-4934-bed7-7b8cee2a1088)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86315cdb-34b1-42a3-a3c7-33f97d02a0bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d986bc2a-4c75-45f5-8b04-a0203ecce4e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b4c26c7-5d3a-45ac-a7b7-7cc55cf57c25)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2f91a29-09ee-442b-9197-137769d833c8)

* 4 rows are selected.
* select * from student group by Rno;

> **5 rows(1,2,3,4,5)** will come.

* select * from student group by name;

> **3 rows(A, C, D)** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/583a9a9a-ab0e-4789-bae6-33c26fd1cdaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86a77073-a0a6-4e5b-add2-bb2c48035a4c)

* Automatically **distinct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6dec18a-0a00-47e0-a800-0d361cf0964e)

* Syntax.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a30d75f1-037c-4483-9766-3a1fd66da8d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a140c79d-a4bf-4206-899f-e68560b98fe9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48131301-1ddd-42c7-aa3e-1500930e85df)

* select categoryid, sum(price) from products group by categoryid;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76790cde-db3c-46af-a5ff-038a29e0ee0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a32c5316-43c2-4742-9fe2-f2a1ea07092e)

* The column on which group by is done, that must be included in select. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb98ed73-6594-4b51-9f7e-e347e07806c7)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edfe86a3-df35-4f37-8c56-095757a31f06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4331270d-251c-4ef6-aea7-32d2762b00f1)

* select categoryid, min(price) from products where price > 20 group by categoryid;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0e65b7a-3e95-4b3f-9313-f8f8b4269758)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f65cf106-144c-4404-896d-df8c2c85657b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/300aec39-70e9-422f-bfa1-0df464f4ac96)

* select categoryid, sum(price) from products where sum(price) > 200 group by categoryid; [**Wrong query**]

* We are putting the condition after the **group by** clause but **where clause** runs before **group by** clause. We need a new clause here, which is **Having** clause.

## Having clause

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65ddb9fd-f58f-4cda-9c9f-2dc7aaf4ba5e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11394bbd-ab0c-4d47-84fb-6ca328058562)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38ac4cfe-46a6-4466-8d06-777daeda4c6b)

* select categoryid, sum(price) from products group by categoryid having sum(price) > 200. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45993b89-a7f1-4432-b91d-e9bd93cdf62b)

* **Where clause** gives the **condition** in which the rows are **filtered**, and on those **filtered** rows which matches the **where** condition, on them the **group by** clause runs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73998ef5-f875-4b4c-92ab-4758d262c1fb)

* Having clause **sequence**.

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c1b8faf-a7c5-4bb0-a578-e85dd476fef1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a6fd757-a7e7-405e-bd7d-fa75f32b3e2a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dbef429-e4a4-41c2-ba30-b805ba3cc637)

* If two **country** names are **same/equal** then those rows are **sorted** using **postal code**, otherwise we are doing the sorting with **country** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c55d2fd1-ed13-49a6-8e54-9b01b6dbbfc9)

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

* If countryname was directly not given, and we had to find the country name and for that we had to write a query.
* This is **subquery**.

* Fetch the name of all customers which are from same country of customer name 'The Cracker Box'

* select customername from customers where country = (select country from customers where customename = 'The Cracker Box')

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/204f6499-2338-4e3e-8e74-9452c5083aca)

* Self Join.
* Why not **self join** and why **subquery**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c6d32f7-7403-4954-ba3f-5032e64df8a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60f15616-c2a4-4aae-88e6-0d1cd5458066)

* Find all such products which are having price less than price of product name 'Tofu'.
* select * from products where price < (select price from products where productname = 'Tofu)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9f031ac-c6fd-49a1-b174-d9497725b3cd)

* Multiple row subquery.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55935455-4752-4901-9dcd-5c77c575613b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ef9e163-4560-485c-95fa-942ddafed5ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/819c3158-2b02-4d54-8c32-8a732b32668d)

* Highest product price -> max(price)
* Find the product with second highest price.
* select max(price) from product where price < (select max(price) from products)

* (select max(price) from products) -> max(price)
* select max(price) from product where price -> Except **max(price)** we will get the rest rows -> Out of those rows we will select the **max(price)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ff828d1-d78d-4b5b-811b-b58cb3c63f06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afd5963e-1ecf-44d0-b265-f5e4229be672)

* Same Price products.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dcf15d9-8a16-438d-8837-01e448246ba6)

* Multiple ways possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/334d5d6e-254b-42f9-ba93-50199daef758)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0838a04-37aa-4007-a078-66516c0a00bd)

* Find the product with third highest price.

* select max(price) from product where price < (select max(price) from product where price < (select max(price) from products))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04b5a652-9099-47ec-8b71-e0f8ab07645b)

## Multiple Row Subquery

* returns multiple rows of a column
* Inner query returns multiple values. So, **equal to(=), greater than (>), etc** they don't work.
* We have to use some **keywords** like **In, any, all, exist**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dc58168-371b-4a7f-8a3a-387d97afa74c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0d6c930-7d16-4487-8c8a-afe186633618)

## Multiple row subquery

* We have to use **keywords** here.
* **=, <, >** don't work in **Multiple row subquery**.

### Keywords

1) In
2) Any
3) All
4) Exist

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fc31231-520c-4aa0-8743-3a50833bd3d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf1470d7-3b73-41c0-9cbe-186ee5ca5c8b)

* Find all customers that are from the same countries as the suppliers.

* select * from customers where country IN (select distinct country from supplier)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a7ef7f2-33af-40c6-836a-a68667cc6dab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0a9bebf-fcdd-4ff4-a48f-a4e82969305d)

* **=** is for comparision of **one value** but here we have **multiple copuntry names**.
* So, **=** will not work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c344903a-3f43-4168-a6b6-202dd605cc1a)

* Will talk about it later.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ff15c09-f567-4e7d-b4cf-4b8f9aeb4b78)

* As we are getting **multiple rows** as a **result set** from the **innere query**, we cannot use **=, <,>**, we have to use the **IN** keyword.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa1d90d3-2f7c-482b-bc14-676a32ea7adb)

* In -> multiple OR.
* Find all customers, that are from those countries where there is not any suppliers
* select * from customers where country NOT IN (select country from suppliers) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf162619-a48b-4c0f-8344-9c08beadb9cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c549fc44-6887-4d06-9dd4-dd2a49c84ce5)

* Find all customers, who have placed more than 2 orders.
* (select customereid from orders 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c38d8443-7c56-4518-8732-b8876d630714)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc9be321-a568-445d-8c16-40c45c3c20e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0dabff2-d187-486f-94ea-1665eb1a9350)
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

## Any Operator.

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

* Find the productname of all those products which have their orders quantity larger than 50.
* select productname from products where productid = any (select productid from orderdetails where quantity > 50)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aefe5971-9c79-437f-9594-72f84a7eea45)

* Find the productname of all those products which have their productIDs less than any of the product having orders quantity equal to 1
* select productname from products where productid < any (select productid from orderdetails where quantity = 1) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19526bcf-3bd1-402f-9398-f22e4b56924e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/625294fd-e811-4e91-a48b-a727bf396fa3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c60e070e-8bb5-4468-9732-84bc8fd3a809)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b65f4626-7dc2-4dcf-b1e0-e997e9b0c9ae)

* Another way of writing the query.
* select productname from products where productid < (select max(productid) from orderdetails where quantity = 1)
* We will directly get **one value** which is the **max(productid)** and we don't have to use the **any** keyword here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf9b2b2b-7a56-455b-a197-ae5d8be81b1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/921e3549-6a97-4d07-b122-0b874ee3b10e)

* If it was **> any**, then we ould have used the **min()**, **min(productid)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73b97dc3-ac77-40a5-a342-afd2fc6a5484)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5b5116-dd42-4d7d-9d60-d25bab0b0ffb)
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76c544ef-8475-4a32-86c0-136a1c655f3d)

* **! All** -> Behaves like **Not In**.

* Finds all employees whose salaries are greater than the salary of all the employees in the sales department with departmentID is 2.
* select * from employee where salary > All (select salary from employee where departmentid = 2)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ab4fe48-69d8-4e2b-ae3a-5b65e8f882e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e107ebcd-9f3c-40ab-9251-00b64d395ca2)

* select * from employee where salary < any (select salary from employee where departmentid = 2)
* select * from employee where salary < ANY (select salary from employee where department=2)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c00a955f-ab42-4fdd-bb83-387abe6e8e9e)

## Exists subquery

* Checking if the **result set** returned by the **inner query** is present or not.
* If **Yes**, then we will get the result from the outer query.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4a40ca8-d969-4524-bb07-884bde7cac6c)

* select * from customers where customerID = 1 -> All details of customers where id is '1' -> Returns 1 tuple/row.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4555b19a-719f-4b30-b5fc-4dc75c0ab7a9)

* We are checking if **result** coming from **inner query** or not.
* **Existance** of output there in the **inner query**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfe0f8b3-b1d4-4dbf-9fe7-84cb685bfa9e)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c85fd42b-5ff7-4464-a3ac-35ee7d0c898f)

* select * from orders where exists (select NULL)
* (select NULL) -> It selects **NULL** as the **only one value**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d25d7efd-a74e-45c9-aaa4-04ef96684f27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5381dbf-cc77-43dc-bccf-dff7426fa415)

* In the **result set**, we are getting **NULL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3548c0b-846d-4df6-b2fc-acd29ace65e3)

## Co-related subquery

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02103d69-08e6-405b-9daf-8009f230d4c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3bdef26-fdda-4ae3-8e24-e63e0340a9ee)

* For each row of outer query, either inner query runs again and again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f4d6211-97d4-4659-8a9d-8d0dd140726e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/183a6c4f-3575-49b7-b662-b4eef36aafda)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5acbed02-8030-411b-8cd5-4c58b74a8663)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13adcd92-1116-4126-bca9-261216d48689)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e261b03-da56-4ae0-96a7-02a4ac59d917)

* Yes, we are taking the **courseid** as well.
* select Rno, name from student S where exist (select * from enrolled E where S.ro = E.rno);
* With **corelated subqueries** we are doing a type of **inner join** in the above question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac2e11e9-1ff9-42fa-867c-9e67aad9b16e)

* write a query to select all such customers record which have atleast one order placed. 
* select * from customers C where exists (select * from order O where C.customerID = O.customerID)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50eae800-2be3-4e31-996c-d44129905c38)

* select distinct C.* from customers C LEFT JOIN orders O ON C.customerID = O.customerID;
* select distinct C.* from customers C, order O where O.customerID = C.customerID;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed907a93-6830-452a-8ff9-32602f434e25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/943533f9-182c-4717-accd-1320ba4cde13)

* (customers.*) -> Prints the columns only from the **customer's table**.

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
4) select country from customers group by country having count(customerid) = 1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd184fd1-82ca-43d3-979f-d9f094c1218e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d294d412-2641-4a11-87d5-91a6facf451c)

* Subquery's result set became a **table** for the **outer query**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d469e85-29ff-43a6-a5e9-4b9aafca6fa9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e5206e8-db30-44dd-b65e-243cc1599e83)
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

* In **union**, duplicates are **eliminated**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3b6eeb9-991c-46b2-955f-4cc99adaa294)

* We have done **union** of the **rows**.
* (select city from customers) UNION (select country from suppliers)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c16ff70f-42bb-4327-a274-cabfc42f70a2)
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

* Find out those cities where we don't have customers but only suppliers.
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

* No value i. e NULL, it is fine
* If it is **value** then it should be **unique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3c80c80-3c30-47b7-807b-f6cfb0d875be)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/847b80d3-4241-4b96-9e69-66683a5619fc)

* Primary Key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9ef641b-befa-4925-841a-0563857680f8)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3026a348-5c34-4911-90d4-3d9a8fb9734c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04e7d9c7-2e1c-4a38-b219-c2cc0d9bd293)

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
* So, **A -> B** does not **hold**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0f7f758-0b8f-4de9-80bd-ae176635d325)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdd74fcf-8645-4ded-ac1c-4a035cf340f1)

* For **a1** value of **A** column we are getting **unique value** of **B** column which is **b1**. So **a1** is giving **unique** value.
* For **a2** value of **A** column we are getting **unique value** of **B** column which is **b2**. So **a2** is giving **unique** value.
* So, **A -> B** does **hold**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/373fdd53-074e-4faf-bd08-2717503545c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f82732b-10bd-4f91-9dbe-b2775b951c0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5153e525-7212-422b-b033-fa0abba0710a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c63aa487-e921-4392-9561-2580d9efbc1a)
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2705a23b-a494-42c0-97ac-5e08c0c43180)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27f83c71-60ef-4395-908a-d3eb920409ee)

* Transitivity Rule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/117b93e1-178f-4c18-98da-595a5eee0339)
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bb295b9-f05f-4f32-ae71-7d1be28b84ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5832f1be-8442-4ad8-b9c8-1ff869c840ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5186916a-ea9d-4b50-9da4-03b693aae4b8)

* Question
* Option **B**.
* [**IMPORTANT**]
* Do it using **closures** better.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ecd7ea7-f61d-4ef2-bee7-a48759e9024a)

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/871ba4e6-66eb-4dac-87e6-a551de0cee4b)

* A+ -> A, B, C, D
* B+ -> B, C, D, A
* C+ -> C, D, A, B
* D+ -> D, A, B, C.

* All of them have **all of the attributes** in their **closures**.
* So, **A, B, C and D** are **candidate key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddee556e-b0ca-4601-87d7-03992e6aa384)
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
* So, **AB ** is the **candidate keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31bed794-6fc7-4a73-9895-d70733c1e7e0)
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

* Only **three** of them have **all of the attributes** in their **closures**.
* So, **AB, AC, AD** is the **candidate keys**.
* We have to check if the values can be derives from other values or not **like above**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0536b8c6-e464-4819-a887-828767e4cd87)

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e4110dc-5244-4a6b-aba1-a7b4bb5333ad)

* yEs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a046663-cb01-4856-aa61-767bd1048894)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9af51c66-3578-4af1-87c0-327e131e8d73)
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc223766-5044-4d3c-88ae-922bdc1dfc1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47f11410-0553-4e15-ad2d-45c1375ceed0)

* Normalizing the table **R** and decomposing table **R** into **R1 and **R2** table.
* If we didn't allow **NULL** value in **P-Id, P_Name and P_Price**. They should be **Not NULL**.
* There is an **anomoly** due to **insertion** into the table.

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

*  Assuming product jeans price has been chnaged to 2500.
*  Rencho purchased shirt in 2200 but now my DB shows in 2500.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3cc0cf5-90a5-4084-b56f-974176eb40a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6a0307f-8d0c-417d-a751-b76d2d3752f5)

* Delete product jeans
* Deletion Anomaly
* Customer with id **c3** also deleted.
* To **remove** the above anomalies we use **normalization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/577524d5-c6f5-421b-b396-ceccf29ffd4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09345e6c-4be5-40c7-9639-f54711df384a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62da465b-a205-460f-a479-6fd0fe2ae547)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01f2c9ec-7398-4887-88b3-1f3edd3605ad)

* GATE syllabus till **BCNF**.
* NFs -> 1NF, 2NF, 3NF, BCNF.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f81fd385-26f3-477b-a364-c563fc59afab)

* Till **BCNF** is **needed**.
* Remove multivalued attributes.

## 1NF

* A relation R is said to be in 1NF if there is no any multivalued attribute in R.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/941e56d7-e86f-4a0c-bf74-5e3e3bbaef14)

* Phono is **multivalued** attribute
* Eliminate **multivalued** attribute

1) Increase rows.
2) Increase columns.
3) Decompose relation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fdf3be4-c0c1-40f9-96ad-3cc540f5c6ca)

### 1) Increase rows.

* Problems:-

1) **Rno** column is no longer a primary key
2) Too mcuh of redundent information.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e370bad9-09c3-4468-ba04-fff1764719ca)

### 2) Increase columns.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9b43b63-a0ca-401a-9e53-921fc0734e02)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b5cce74-ac2e-46be-be42-5cccb1e9bb39)

* This works perfectly fine.

* Problems:-

* Wastage of space if multiple NULL values in phno 2.
* Wastage may increase if one row has 3 phone umbers.

### 3) Decompose relation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/306aebdb-3839-4653-b0e1-bb808e4a4434)

* We removed the **Rno** column.
* Keep multivalued attribute along with **primary key** of table in another table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be5a0f96-8b51-4ce4-95e4-bbb40f6d619f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a41c3bef-ee74-476d-bfe5-80cea2e3a499)

* This is also a **good solution**.

## 2NF

* If we have to normalize the DB table in **2NF** form, then they should be **normalized** in **1NF** form.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6407752d-e1f7-43ad-96b1-7f68a4fdbee0)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9a2d474-266f-4951-b632-9b0a5aa13de6)

* No any non- prime or attribute.
* There is **no any **, Non non-rprime attributes,

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1db0ee96-7874-4566-82c1-b440d22cf8b7)

* Partial Dependency.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acb597d3-ef1a-495b-a5ea-6058a9ddd8e6)

* Prime and non-prime attribute.
* if key is a **composite** key and from the **sub-part**. If the **sub-part** derives some **non-prime** attribute.
* This is calle as **Partial Dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7cb85b7-18c5-40c9-9c13-7b039a6cb904)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee49af49-9e99-45e9-ab13-574b1fe0dd23)

* If **A** is a **composite** row then **no. of poossibilities of partial dependency**..

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

* It is a **partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07cb7034-8aef-4891-8540-725aa7cbc389)

* Given relation **R** is not in **2NF**.
* We have to get it to **2NF**.
* To get the relation in **2NF**, we have to **decompose** the relation.
* To bring **R** in 2NF, decompose **R** into **two** relations such that we remove **partially dependent** attribute from **R** and keep it in another relation.

* We have to keep the **partially dependent** attribute with whom it is **dependent** on.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c09717b-19f4-4305-9ee4-fd9c7afde711)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/610d3b48-e781-4006-8811-5dcc987a41dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee277bb6-654f-4392-91c5-2eab4ccddd9c)

* Not with the **key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17833227-5d03-495c-8dec-ff53cb65e81a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72dc1d8b-9609-438d-ac21-151d22f25dbe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27c07db1-c6d9-4d67-a4a3-25a7f8710c55)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e10a702-41d5-45e5-8e36-4593310b5343)

* Key in **R1** tabel is **AB**.
* Key in **R2** table is **B**.
* So, there is **no partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28ddcd82-acfd-4835-838f-6d7f197dd2d1)
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

* Candidate Key -> AB
* Prime attributes -> A, B
* Non-prime attributes -> C, D, E
* We have **two partial dependencies**.
* A -> D and B -> E
* We have to keep **each partial dependency** in separate tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4667cdfc-d8c9-499f-8fae-4adf724e88ca)

* Now, **R, R1 and R2** are in **2NF**, **partial dependencies** are removed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b852a7a3-7f05-43fa-a3a3-0e082bbe0cbc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bcb90d3-0d33-44d2-8537-31699eeeb8c1)

* Question.
* Option **C and D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/035c330c-b837-4fd8-bf3f-b8a5093bdeec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5888d5e8-d273-4f0c-a83e-031ef39daa60)

## Questions on relational modeling fd normalization (15) [7th July 2023]

* Normalization -> To Remove **redundancy**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a2b7b8e-69a5-4963-ac8d-6c03334bcd7e)

* **AB** is a **candidate key**.
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

* Steps to get **2NF**, Method(Decompose into 2NF):-

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1126ebc-21f0-4de0-b804-210ba7b42059)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a87b06c1-0aca-46d7-af61-026984f8597f)

* For every **partial dependency** we will create a **separate table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f3358e8-dbfa-4caa-9354-a5b8688ce4a2)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a203d0a4-8d6e-4ee3-b706-533a7d35181b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a13e2aee-1021-4cd5-9fec-c2ecda2f4be3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05b1c9b9-65f4-45c3-97bf-6069f5856779)

* In **2NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f754768-7b97-43cf-b397-70245ba798f0)

## 3NF

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a07132b-11c5-49a8-8650-da0bd312d796)

* **No**. Not dependent on the **key**, it is dependent on **A**, whch is not the **key**.
* Transitively dependent
* Key -> Non-prime
* Non-prime -> Non-prime

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1552441-9541-4195-b3c1-c5ac2cd5a2ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3d5238b-9961-47a1-b871-3532ca059782)

* Candidate key -> AB
* Prime -> A, B
* Non-prime -> C, D
* Check for 2NF -> No partial dependency -> **2NF satisfied** -> It is in **2NF**..

* AB -> C [Key -> non-prime]
* C -> D [non-prime -> non-prime]
* So, AB -> D [Transitively dependent]
* **D** is **Transitively dependent** on the **key(AB)**.
* So, **3NF** not satisfied.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22cb98d5-1b63-4f84-aee1-19d955c23b55)

* **D** is **dependent**, **D** is the **issue/problem**.
* If **D** is the **issue/problem**, then **remove 'D'**.
* Keep **D** in a **separate table** with **C**.
* We will do **decomposition** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dad465e2-985f-4bc9-823e-829de43da488)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20de97a7-a8bf-47da-8e7e-1be9010b98c8)

* Decompose **R** into **2 relations**.
* Whoever is **Transitively dependent**, **D** here, we will remove that from the **original table**. [**IMPORTANT**]

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

* If the **candidate key** is a **single column key** then there is **no partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89dc63df-d77d-4817-b16a-9a95757d0e88)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f6eeeb0-c4ff-4dcd-b879-0bc22a04921f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/887979fd-6753-43ad-afe1-fb1b0b233901)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf451d38-b572-43f7-8b54-082d15a5d136)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac6ea0c4-36e6-4902-91d3-9ea4b9655c79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e39151ba-aace-4c01-9cde-6324e800fa06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b961ef3f-324e-423b-9f12-7eebcf79e9f8)

* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/273c8c50-80f9-482b-9062-b3db9d3871db)

* np -> Non-prime to Non-prime

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7ff8fb8-b0a7-4012-82ef-d12ab80c8a33)

* So, there will be **transitive dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7118a50-9e9f-46ab-bb47-aa9a7cc7d60e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27c95ccc-45e6-47fe-aede-25ea330acfad)

* [**IMPORTANT**]
* 3NF.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdf1a88a-6c9c-43f6-9a0a-9c9fcc079c0f)

* Then also **3NF** is adequate.

## BCNF

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/728498aa-4381-46f0-9fe5-637c7794f42f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb9048e1-a00b-47f4-917b-e4611c4a1c6b)

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3634723d-0722-484e-8fee-99f926645c8b)

* There is so **data loss** as earlier the **FD** was **AB -> CD** in the original(R) table but in **R1** table it is **A -> CD**. 
* This **decomposition** is called as **lossy decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5b0d861-50a8-4b68-a6dd-89d53e8b6fcb)

* The **original FD**, **AB -> CD**, is not **preserved**. It is now **A -> CD**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30831bd6-4836-4af6-836d-3ce8ce6dfc71)

* **BCNF** can create problems. There is **no any solution** for this.
* When we do **decomposition** till **3NF**, everything is **fine**. **No data loss**, no **FDs** are lost as well.
* When we go to **BCNF**, there is a **possibility/chance** that **FD** is **not preserved** or the **decomposition** that happened, causes **data loss**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/372ecc2a-6768-4f9b-b3c2-d7ba8cf40d81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a23a810e-20cd-4205-bb50-dd2aa2e687d7)

* Upto 3NF decomposition -> Definitely **lossless and dependency preserving** -> **Compulsory**.
* BCNF decomposition -> Not necessarily -> **lossless and dependency preserving** -> **possibility/chance**.

* BCNF **always provides** lossless and dependency preserving decomposition?

> **False**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66bcb98a-d8d5-408c-80b3-5dc0757a484e)

* BCNF **may provide** lossless and dependency preserving decomposition?

> **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de84b500-0ba5-4fed-9179-7a097b478c5d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7072851f-f177-4119-a6c9-52636017057b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5916ba7c-da64-42d0-967f-e3254f13691d)

* Solved in my copy.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a3ff8f5-8483-402f-91ae-89b40bb2d82b)

* Question
* Option **A**.
* Partial Dependency are there -> A -> C and B -> D.
* So it is not in **2NF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16854bc4-ddc8-4cd7-bbd4-cbef2647d07b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7792e435-df29-4dfc-ba9c-55c9ab01dfdb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5d5e35-5d15-4abb-8ae9-29ef934f0291)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e000ffd4-2123-4aee-bd37-9a5410240a5d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72b845ff-90b1-4188-a98d-e8bc3f9954f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dae27d31-0110-44c0-b596-e25df7836b80)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e207028-2a6a-4a9f-b9a2-f6d1a430bdc0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b993ef4-5809-4c37-93f8-8f68bdb4e7ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62efd41a-1125-4281-a9c6-c439595289a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9be6958b-211a-4e7d-89d2-a5ab4c9ad008)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/497c97b8-2325-4094-95bc-a96a7c6e704c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/382515b9-177b-49da-8628-407fb9e00b9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30a7411c-cb70-4bc3-9b3e-172a8835448e)

## Doubt clearing session(16) [7th July 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c07ca70-51bb-4b21-8841-be24e27fc5e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4378d5b-acb6-4e1c-8fe9-56b1ad5a3ded)

* Relation is already in **3NF**.
* Also in **BCNF** because for each **FD**, the **LHS** is a **key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32327a14-fa63-4b9e-981b-887cd8552037)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1359acff-3862-4dd2-a691-214613b6801c)

* Question.
* Answer -> **a, b, c**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc78a731-4271-40b3-8ce9-0a7cf0122983)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ef86a96-aad7-4713-9ca6-bddcbea3af78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2ddf8c7-601a-48d3-9136-5831b80f1332)

* BCNF
* [**IMPORTANT**]
* A -> B
* No partial or transative dependencies
* LHS is a **key**
* So **BCNF**.
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c70cf1ef-6705-4d77-89a6-03d70cc2776b)

* We will do **inner join** and the **common column** is **sname**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d9ce057-c399-4bc8-aa21-a35b522bee7f)

* select * from student_details S inner join s_department d on S.sname = d.sname;
* We will get **4 columns** and **4 rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42656f5-550a-485c-931b-3fdf219326cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b71f7f3-965b-46a7-9036-bc261e32455a)

* If we want the **department** of **roll 12 vishvadeep**, then the **query engine** will be **confused** as we have **two roll 12 vishvadeep**, one of them has **CSE** as their **department** and the other has **AI** as their **department**.

* We didn't get the **correct** information, we wanted.
* THis is **lossy decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de45ed1f-0460-4265-a27a-0629faeb2fad)

* It will be **lossy decomposition** when we do **inner join** on the **decomposition tables** and after doing **inner join** the **result set** that we will get. If the **result set** is **not equal** to the **original table** then it is **lossy decomposition**.

* If the **result set** is **same to same** as the **original table** then it is **lossles decomposition**.

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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e85712f1-8855-4bc0-bda6-027917bde58b)

* select * from student_details S, S_department d where S.rno = d.rno

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5aeeda57-e490-4a69-b387-df6a160a94a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74f0cf3d-5f28-4048-8165-7c99f2d18c3f)

* Inner Join
* R becomes a **subset** of the **result set** -> Lossy decomposition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c80c6734-61b0-4504-b897-d5894f4e1cb9)

* Question.
* **Y** is the **common table**.
* We will get **lossy decomposition** because **5** is there **two** times in **Y** column. We will get more columns than there was in the **original taable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b151eec-b111-4676-9fe8-17a3d7d18fe3)

* Good **observation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44dfb87c-d483-456e-831c-dfae331be83b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfa81e50-7a5e-4179-afbf-e43a0482b5ea)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6eabe81-5bb9-4215-af52-685d4a6f7b21)

* If the **common column(Rno)** is the **key** in **both the tables** then it should be**lossles**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2db03374-5b3a-47ed-b8a6-fb7397e8c648)

* If the **common column(Sname)** is **not a key** in **both the tables** then it will be**lossy**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df65349e-dbe1-4a01-a61a-ad4e972dec12)

* We are doing **intersection** between the **attributes** of **R1 and R2 table**.
* If the **common attribute(D)** we got is a **candidate key** in anyone of **R1 or R2** -> **Lossless decomposition**.
* **D** is **key** in **R2** hence it is **Lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c55948d-82d1-4d88-bfa8-c9b58e9c024a)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd5b940-9e3d-4405-8c19-285999d358e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/407cb8cc-b6dc-4312-963c-4f38688cc0df)

* **R1 intersection R2**, between **R1(A, B, C) and R2(A, D, E)**. So, we have **A** as the **common attribute**.
* Is **A** a key in **R1 or R2**?
* As it is **yes**, so it is **lossles**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9bd1890-4ec5-4521-9b96-170a3a71c119)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d44b68c-7c8b-47b9-bed7-bcd44f5822ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e0ee71f-dae5-4d0f-8aff-b9c7a37e04f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c81a715-f0e2-4cd6-8c33-3d937c8b8e09)

* Lossy.

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
* As **BC** is a **key** in **R1**, so it is **lossless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17594bf9-e2d9-429f-8f29-4ab6f79205df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b27734f-9e4b-42ee-8214-d8641839a3e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0a13dcc-64ce-4ed9-b2ed-1b445154cafd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15c09d24-91d7-45b5-9449-7986e2f7d974)

* lossless
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3b32c45-5629-49ec-92d7-9fbdb55baeb3)

* If **B** was alone then also **lossles**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/173f2c4d-7605-4758-a257-0027f7d7f77e)

* Question.
* If we do **inner join** of **three tables** then we have to write **two join conditions**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/199df87d-94d6-4deb-a468-cf9e35d9e250)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bd3431d-ee01-4607-ad8d-222c1df9eee4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dec44e16-23c2-44e7-9f36-0b525303ab8e)

* Combine **two-two** tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81b176f7-7838-490c-b2c3-c3785b2eabab)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4aaea5b-d661-4136-8f5a-e56b66123a4b)

* Lossless.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17d70ebf-468c-4a1f-ba14-79fde58f7b2f)

* Question.
* There is **no common attribute** between **R1 and R2**.
* So, **lossy**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/588f3710-3fd6-4c57-bdf4-9e89638c35d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c0921ba-4707-47c5-9dd8-1852906ff530)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/854a6023-e176-4027-a019-305af983a84d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1547083e-60f6-472d-80cb-e4796f39bcda)

* **y** is the **partial dependency**, we **remove** it from the **original table**.
* **y** was **dependent** on **x**.
* **x** also goes to the **new table** with **y** and **x** becomes the **key** of that **table**.
* **x** is also present in the **original table** also.
* So, **x** is common in the **new as well as the original table** and **x** is **key** in **one of the tables**.
* That's why **2NF and 3NF** always gives **lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a7477c0-0640-4260-94d1-6295869d53ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e2af48a-73f6-4ae9-9c6b-71c780e0f267)

> First we will check **common attributes**, then we will check if among them we have any **keys** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fed8730-5e8a-4544-9306-0c5f563d5d40)

* **C** was the key in **R1**.
* **AB** was the key in **R2**.
* Common was **A**.
* **A** was not a key in **R1 and R2**.
* So, **Lossy** then.
* Doesn't matter with **prime attributes**.

## Dependency Preserving Decomposition

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a2d5626-abbd-4e6c-bbea-8a9abc2c729a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42c7c1e-5808-4d8a-b10d-1fa30b9efee2)

* So, **Dependency Preserving Decomposition** example.
*From the **union** of the **FDs** of **R1 and R2**, we couldn't get **D -> A**. So it is a **not Dependency Preserving Decomposition** example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4237fea-c83d-4857-9d55-0deb20a766f9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/279a7355-3336-4b5f-a94e-a8d81190c37b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3be8b4df-019e-4a0c-ab72-bda7cf46f729)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da7c32db-9e10-4887-ba77-05bfbd3882e8)

* Not
* D -> C, lost

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0577fc14-865a-4367-98bf-e9d800722172)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dadf594b-b12d-42e1-a9b1-bc279f780000)

* Question.
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3edc9e38-44ee-4a5e-a06b-24084730d754)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf9099cd-287a-4ccf-ab7e-ed1ce6b75f87)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84e7a534-adba-4c6a-86dd-10f0b8e3ee23)

* Question
* Option **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e67a6961-916f-4033-8f66-d49d925c58a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ba5b0de-94b8-4eac-a7dd-e63d790d65ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e81e7c67-0b77-4c7f-bb43-5132a531e749)
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9e2191a-c922-47bd-a8ab-11672827ef6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb969a0c-b02c-422b-9a76-7eca9b0fee1a)

* Using **both Eid and Cid** together we can make a **composite key** for the **Teachers table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4de5671-30c4-4bb9-af7a-452c87f903ba)

* Teaches.Eid -> Foreign Key referring to **Educators.Eid**
* Teaches.Cid -> Foreign Key referring to **Courses.Cid**
* **No partial dependency** present in **Educators, Courses and Teachers** tables.
* So, all the **three** tables will be in **2NF**.
* **No transitive dependency** present in **Educators, Courses and Teachers** tables.
* So, all the **three** tables will be in **3NF**.
* All **3 relations** are in **BCNF**.
* Keys are in **LHS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2379b0f8-47f5-465c-9a5b-595daa1c9040)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34641d9d-0c69-4c49-b93a-65c00eb7bc53)

* Option 2 -> Keep relationship information along with an entity set
* Relationship towards Educators -> 2 tables. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be4b25d9-9580-4bfc-b68a-397f8b13a711)

* **Primary Key** in **Educators** table is **Eid Cid**, combination of both.
* We will get **partial dependencies** because **Eid** alone can derive **non-prime** attributes **Ename and ESalary**.
* If we do **decomposition** here to remove the **partial dependencies**, we will get a table with **Eid, Ename and ESalary** and another table with **Eid, Cid and Since** which is **same** as the earlier(option **1**) one we created.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23e2b79d-f61b-480c-bca5-c348852e4960)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28876d6e-02d0-4113-8e2b-9a9697b62351)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b28f668-0541-4886-92a0-7aa262c0815c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/732d4d78-c118-49b2-97c1-ee4d20b823ae)

* Problems:-

1) Partial Dependency
2) Cid -> Cname, Cfee 

* The above one is a **many to many** relationship , so the ***option '1'** is the **correct answer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96fdb2e5-b66e-486d-bea0-2b687b38bf3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f195887d-bb48-4b5c-a278-0896a7446bf8)

* We have to keep **one stuent's information** only **once**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12459bdc-c944-4208-8673-02876a1971c0)

* **Sid** is the **primary key** in **students** table.
* **Eid** is the **primary key** in **Educators** table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b43e68a1-2b2a-413d-967e-f001b8594d95)

* **Eid** is not **primary key** and **too much redundancy**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3efd3c6-7424-4de1-ae1f-1eb512ebf6b0)

* So we will go towards **many**, which is **students**..

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9974363e-ace1-4502-b8de-9d24bcbbf29a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70e2fac1-ff6d-404e-a8cb-26ba5f38683f)

* There is **no point** of creating **three** tables when we can get the work done in **two** tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bc1c752-2bb7-46d5-9a5d-735a0b4af887)

* FDs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55350ab5-32ad-4a8f-8ac0-957cd9b0ed88)

* **Sid** is the **primary key** in **student and Guides** tables.
* So, we can keep them **together** and make **2 tables** instead of **3 tables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/344d7abb-6354-4152-9ad5-412e8faa28c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b85e1457-4155-4be5-b707-8308add369af)

* **Sid** is **primary key**. So it is  better to keep it in same table.
* **One to Many** and **Many to one** is **same thing**.

### One to One Relationship

* It is will be in **2 tables** only.
* **3 tables** scenario comes when there is **Many** relationship.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51952847-bf16-4012-8e94-99d6ff0c223e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a482b754-b0c9-4d42-847c-7eaee77bdebd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffd9d3b7-4158-47a3-bc57-09a061025d41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/643add7e-a490-4ce4-aa23-3aa5b86baaac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82a85115-70bf-4b16-84ef-9077ba151294)

* Whichever side we will have **total participation**, we will keep the **relationship details** on that side only. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d276bd94-103f-4a72-b97e-0e51be1036a7)

* **Option 2** is better because license has total participation in **relationship**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bf8e840-4a2a-4af9-b2a1-820eaf79d493)

* Keep **two tables** and set **guide_eid** as **Not NULL**.
* So **student** table will be **total participation**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71953db9-c671-4b0e-bbdd-1688efc49a89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42ad1521-3119-4bcc-9bc7-61c0f27ac416)

* There cannot be any **department** without any managers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31fdee3c-60ec-4d5c-ae05-3944d26a102f)

* Many TO Many -> 3 tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6b79876-7d1a-41e9-8781-38c33d23240a)

* How to control participation in many to many?

> **HW**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a8c7721-16c3-427b-9336-0829ae75d4d6)


* If there is **overlapping** then it makes sense to go for **3 tables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57326c7c-0af5-46af-bf80-5cc26dc3a0af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47a6807f-32e2-45b7-b75c-f8df4001a6c0)

* Overlapping
* Dis-joint.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e845a884-0d71-4e64-8de2-5d83d0ee97f4)

* Thre can be **multiple dependents**.
* The key can be a **summation** of all the attributes, **Eid Dname and Dbod** which is the &&key**.
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c8e4910-551a-4201-ad95-450b8e526dcf)

* We will get all of the **rows and the columns**.
* Which **columns** we want?

> We want all of the **columns**. 

* We have to use **project** here.
* Without **project**, data will not be **fetched**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa929a82-9f45-482b-864b-fd74dd73432d)

* We will get all of the **rows and the columns**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/749b0d21-c57b-408d-aeab-173544efcb85)

### Select

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9f89f31-9215-4ddd-a897-58fb44b15e42)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/212f145b-47e2-42f5-bbbf-5d79f4a0dd2f)

* Example
* sigma(rating > 8) (sailors)
* Sigma -> Filtering rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bb1a122-194a-4236-9e8b-42cf56c2c8c4)

* Find all sailors who haverating greater than 8 but age less than 25.
* '^' -> AND symbol
* 'V' -> OR symbol

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6adcd251-6d35-4de1-a4db-0394350f53d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93019435-b79f-456d-9b70-ddd180c2c742)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b5e4075-4074-44ee-8e3d-85be7993a398)

* Comparison operators.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6303554-7229-4110-b366-46a07d717baf)
 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/022e7c34-2d0d-44bb-a65c-387598e0a391)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e43f0553-584d-4d65-a974-1ef4662a834f)

* We are **filtering** out the rows based on **conditions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdc64a40-389e-44db-8235-2f9d41786a36)

### Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9de2545-864e-4111-bcd0-136475c3bd75)
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

## Project

* It is like **select clause** of SQL.
* It **eliminates** duplicate from tuples/rows.
* It takes only **distinct** values from tuples/rows.
* We do **project** at the **last/end**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f07c4ae-4e1f-4a1e-967a-956536066a96)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05ff3842-b965-4fad-84eb-cae2afa00d71)

* pie cname (customers)
* We will get **distinct names**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d401f6b-746b-4939-a067-45c1e60ab483)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0de83ae-97a0-4654-93c7-0643a0bc6a33)

* The **project** operation results in a set of a distinct tuple as the project operation removes duplicate tuples.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3afeaf74-9081-40e7-86ab-c6c5aec6e5ed)

* pie Ename, Salary (Employee)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2ae8910-9770-4b95-8a7a-35e3e465e920)

* pie Salary (Employee)
* We are getting **distinct salary** which are **3** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca65d8fe-d874-42f3-994c-8551ea6f5bac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65a4aaa7-ecba-4044-9d88-38bb5aee56e6)

* pie A, B (R)
* We got **combination** of the **distinct values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a383973-aca4-4cfc-b9c2-9f5f485f1be5)

* **Sequence** of **execution**.
* pie Ename (sigma Dno = 2 ^ salary > 17000 (Employee))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12b05b65-1eb0-4de3-aa6e-4c3de8e152c0)

* Yes, fetching the records.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67dd15ea-f87c-46ca-9b9c-746835d8bc71)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7809c449-9343-4c4d-8f3d-4dfb06375dd3)

* Yes.
* Fetch name and dno of all male employees who are having salary less than 30000.
* pie ename, dno (sigma salary < 30000 ^ sex = 'M' (Employee))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/048488a4-3a57-47db-8ea2-bbeccb9584e0)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5bded8e-3a39-4441-8c41-479326d0ab52)

## Set Operations

1) union
2) Intersection
3) Set-difference

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/197612ed-7da1-4978-9828-ec83de9eb7ae)

* If we want to use a **set-operator** then we have to keep **two** things in mind:-

1) No. of columns must be **same**.
2) Data Types in the corresponding columns must be **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0ef63f1-d246-4fd0-92c7-ee884ae5ca0b)

* No. of columns and data types of corresponding columns must be **same**.
* If the **condition** are met then **any set operation** will work.
* Operations is performed on **tuples**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b1f2178-0704-4d4c-a0a2-32e98116fba5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ce46eb-51d3-48be-bbf0-91e464eba41a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/101736bd-e7e7-499b-97a9-1079f37dfd01)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f795ef2-e95d-4d2c-ba75-f2d6301b4e35)

* The **whole tuple** needs to be **duplicate** otherwise we will write the **tuple** in the **union**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e64a619-c10c-4dff-8660-3496886cd57c)

* We got the **distinct name** from **E1 union E2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d598f68b-86c4-4007-a9a4-99b131e28808)

* We got the **distinct age** from **E1 union E2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25221163-e788-4560-92ee-a85da4bd2e86)

* Relational Algebra(RA) doesn't remove them automatically but **project** removes them automatically.
* There is a **difference**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac519b62-886d-4118-bfe1-0543ac77d7ec)

* Question.
* (pie sname (sigma dob = '27-10-1988' (Students))) U (pie ename (sigma salary > 15000 (employees)))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54c5458c-5d4e-415f-9377-35999f9864ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbae307e-1fba-41c6-a3b3-736f1495f26a)

### Intersection

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76758c9b-0046-46f2-b175-5e0650b85c4f)

* Common Only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8b8291f-bf0b-47ac-b5a8-7e0a91f25cd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/830082f3-a6a1-40dc-be01-3a8f3f0067a7)

### set-difference

* All those tuples of **E1** which are not present in **E2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a33be5f8-6730-43e7-a123-ecb30a8078b6)

* E1 - E2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e570fa1-3ebd-4820-bf12-cfb3f2762c55)

* E2 - E1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/251fc17e-565f-434f-8ce6-f26592e0869c)

* Union and intersection are commutative and associative.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/673266d9-9ec3-4242-ad4b-f6eee5df494b)

* **Set-difference** is not applicable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9393eb1b-3191-4404-8154-b9275767d792)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27b92e0a-b368-41c6-855c-dea0e7d100c9)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/864e01d7-7cf2-4eb6-b242-6cbc9d536bf4)

* **Yes**, they are **equivalent**.
* **Project** is **distributive** over **union**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cbc7512-595f-4a0c-9241-f3f04229c184)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0325e796-b2d4-4f7a-a827-325de0faca66)

* **Project** is **not distributive** over **intersection**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/078c0313-ab73-4ce3-9c8a-324dd72c0659)

* Both are **not equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e72b2d64-590a-45b0-ad3e-a7827f2bd3e4)

* Question.
* (pie eno, ename, dno (sigma gender = 'M' ^ salary > 20000 (Employee))) U (pie eno, ename, dno (sigma gender = 'F' ^ salary > 25000 (Employee)))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82fa8f90-0895-4427-934d-e817413f6649)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e14ee10e-8c25-4c1b-bb50-378d1a5f6be9)

## Cartesian Product(Cross product)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd4d0522-4669-4577-87f3-6f483514a6c0)

* Cartesian Product(Cross product) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc317b2a-3fdb-4dc0-80f8-3763bdcca7f4)

* Cartesian Product(Cross product)  -> pie A = D (R X S)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67149430-829d-4e14-8460-4e0645bb4e3d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/094ceb7c-af16-4109-81f7-705bd04b9801)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f04425e-f3e6-4c8b-aeb7-9e29745651d2)

## Joins.

* When we join **two tables** and we filtered out the result based on the condition.
* This is called as **condition or conditional join**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/667e5df9-e8e7-41d7-bddd-7d95c1e71073)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69ecdf5a-0fde-425f-be2d-fa7800ebfabe)

* In **conditional join**, the join condition would be **>=, >, <=, <**.
* There will be **no equal too(=)** condition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f1c96bd-0eaa-4491-bbcb-bb91590c58d5)

* In **Equi join**, we are going to use **=** operator.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af322074-3221-4e29-bc36-1b7b5d898822)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a63a919b-da49-4a20-bc50-f36b48979458)

* We will get **two** rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e35a6c14-dc43-4dd9-af94-834830e4a185)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e97fb0da-8574-4b37-860d-b6349f644293)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da86550f-2d7b-4d98-9704-370d47306ceb)

* In **natural join**, we don't have to write any conditions. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ee7ad5d-6b5f-4cf9-a605-5c642760c075)

* We  will write it directly.
* There will be **one common column**, the **column name** would be **same** as well..

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb154919-e97f-4abb-bc26-ec42a1ba3e6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d20067ad-9945-4186-9628-4fe2303a7b1d)

* The **Rollno** is the **common column** here.
* The condition will be automatically applied on them(common column).
* The **common column** name should be **same**.
* If the **common column** name is not the **same** then we have to **explicitely** write it. Like below.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7ab5b99-f170-4bef-a481-2fd7f4152fe6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/980600a2-b4dd-465a-8ff8-4efdaf35d6bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/334e9490-82be-4e98-9762-816296a2a9f5)

* **Implicitely equi join** is used for all **common columns**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7dd5ec53-0b90-43c0-842a-8f3100660e4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e738f533-2b94-4478-9bb1-b64f7133e946)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39251b6e-8a78-4895-a387-dcf4e9ed31f3)

* There are **two** common columns, **A and B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64dac596-4d87-408d-a912-f121d99cef71)

* Attribute/column name which is the **common column** does not have the **same name**.
* Then, we have to **explicitely** write the **condition**.
* Otherwise, we can write like **bnatural join**, no conditions needed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28c086be-44d7-4a21-8c24-9e20234a6cff)

* Question.

* pie cname(sigma shipperid = 3 (Customers natural join(damru) orders))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2fefbe7-c9ae-4ae1-aec9-c059167f41b5)

* The **common column** which is **cid** has the **same** name.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74700f0b-0cf6-448d-9865-3991f7a8cb79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68c6b02e-d101-4f0f-a92e-9c8573f34534)

## relational-algebra-part-iii (19) [16th July 2023]

* Conditional Join -> <, >
* Equi Join -> =
* Natural Join -> No condition. [The tables have the common column with the same name on both tables]

* In **natural join**, automatically the **common column** join condition is there. We don't have to write it. 
* In **equi join**, we have to write the **common column** join condition. The **name** of the **common column** is **different**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dbe7c99-a915-4686-b6b5-ed379308b086)

* Question.
* pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Blue' (Cars (Cross join) Drives (Cross join) Drivers))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7985e12-b4e9-4e9f-b6da-ba52c281fbef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f9d355c-29b5-4e84-a769-02b8aae70dd6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2065b931-710b-4b5c-bc4c-c7f575d34d97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c535634-47fe-4609-a855-7955a042f03b)

* Question.
* pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ (ccolor = 'Blue' V ccolor = 'Black') (Drivers X Cars X Drives))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16f4ddbb-7dd8-42b0-a95d-5787ecd3e9bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7492af-fd4c-4066-a0b2-ee872a3a590c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcf8ccfd-3f55-4e21-9ce5-e6e4de986e26)
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
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db038dcf-d935-4075-b4c5-6332f9eefe11)

* Left Outer Join -> We get all values(rows) of the **left table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01867e8a-3f17-4fe9-a507-e3c1b4b9814d)

* Right Outer Join -> We get all values(rows) of the **right table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db548a54-c492-4121-9fcf-d0b2c8d2702c)

* Full Outer Join -> Extra records of both the tables will come that do not participate in natural join.

## Rename Operator

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a229353-8019-4b6e-8ed8-90ba2c2d4080)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bdfe9c0-1da7-4009-b21e-a84085e10489)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dfe051e-9351-4a9b-923a-788c0277c0a5)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51189ac5-024e-4c58-972c-95881b797586)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81f99207-bf0c-4294-a70b-7a63223e100b)

* When we want to **rename** the names of the columns as well as the **table** name.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94950f89-b4a0-4aaa-b209-910e6f3b5b25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0176612c-17fe-45fd-ac3b-766c831de768)

* When we want to **rename** the names of the columns only, we are aliasing the table as well but we are not giving a name to the table.
* New instance of **student table** is created. We haven't given a name to the table, we have just renamed the column names.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fe652a7-724c-464d-9bdd-84573defda7b)

* When we want to **rename** the names of a **specific column**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dcbc7fc-d71d-4c59-a386-c1987a8ed15b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/238ce0e7-30c9-46cb-9912-1daa05534584)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cc3e8c9-3b59-4e0a-9b88-d9efab3c1c60)

* Sequential renaming.
* If we don't want to rename all of the **columns** then we have to put **arrows(->)** for the column renaming.
* Otherwise it will not work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/861cfb03-5618-44fd-88fd-15f19777a557)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65435d53-000f-4636-8784-f3211e79546e)

* Question.
* It is conditional join.
* (name of all female students) - (name of all female students who have scored equal or lesser than any male student) -> name of all female students who have scored more marks than male students.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bae51f82-48bd-4910-bdb3-b036f52a814d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b124aea-3b4b-4b57-9a91-4d1bbc99df9a)
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

### Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5b327ca-36f3-41dc-9b91-1fae868ae180)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35225449-86ad-4d30-a3fd-468487c371e0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/552d8104-aae0-4832-99a2-3086c0c5e76b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c591d722-3a59-4345-bfb4-8ee614d177b1)































## Misplaced Images

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c85c2c6-4175-4f9d-afec-62497852924e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f0dd0f2-0158-4b53-8fef-40f439e627ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c22ab88f-5e8d-4d32-bf6a-4f9f85cab65a)

# Joke

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8200b49-d63d-4027-88d0-29f087bc60e1)

