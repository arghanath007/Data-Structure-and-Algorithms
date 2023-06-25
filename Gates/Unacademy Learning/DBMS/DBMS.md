# DBMS

# Course Structure

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95355a84-08d3-4fff-a0df-23799807aac2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b389e5e-710f-4dcf-8de8-c19950d3dda3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5451e501-452f-465a-b056-67a3d211d41d)

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























