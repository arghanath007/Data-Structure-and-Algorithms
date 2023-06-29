# DBMS

# Course Structure

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95355a84-08d3-4fff-a0df-23799807aac2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b389e5e-710f-4dcf-8de8-c19950d3dda3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5451e501-452f-465a-b056-67a3d211d41d)

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









































































































# Joke

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8200b49-d63d-4027-88d0-29f087bc60e1)

