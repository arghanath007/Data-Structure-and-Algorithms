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













































