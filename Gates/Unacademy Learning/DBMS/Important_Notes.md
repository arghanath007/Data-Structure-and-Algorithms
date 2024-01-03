# DBMS

## Revision

* See the **PDF 28** again. **Basic Timestamp algorithm**. Time there then watch the video. [**IMPORTANT**] 


## Important Notes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf8717dd-85a6-4267-a7dd-0a48ba9d6984)

* Disadvantages of DBMS.
* **Mutual Exclusion(ME)** is there in **Concurrent-Access Anomalies**.

## View of Data

1) **Physical Level** -> When the DBMS will store the database, where ever the database is stored is called as the **physical level**. The level where the database is actually stored in the disk.

2) **Logical Level** -> All of the tables, the details of the tables, the details of the items stored in the tables. Everything in front of my eyes. 

3) **View Level** -> The way it is filtered to be seen by the users on the website. Seen by the users. Part of **logical level**.

* Who will see logical level?

> Not the **user**. The creator/maker of the database.

> Everything will be stored in the disk, but we don't know where it is **stored**. The tool(DBMS) only knows where the database is stored in the disk/memory.

* From the logical level can we see the physical level info?

> **NO**. In-between there is the DBMS tool.

* **Physical level** is hidden from the **logical level**.
* From **view level**, **logical level** is **hidden**.
* Commit -> To make the changes permanent we use **commit**.
* Rollback -> Revert back all of the changes and go back to the last state where the DB was saved/committed(before the changes were made).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20893ac0-d9bb-49e1-9dd1-2d0513750c63)

* Different

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc415e8f-1885-4f6c-bbab-f01082df78dd)

* No.

* Atomicity happens on a complete transaction.

* We have created a file and we have not saved the file ourselves and there is no auto-save option as well. We have closed that file. What will happen?

> All the data is gone. This is called as **atomicity**.

*  Atomicity -> **Full commit** if we **saved** the file otherwise the data in the file is lost(zero(0)). It is fully **automatic**, we didn't do anything.
* Atomicity -> Automatic rollback to the previous value, done by the DBMS tool.

> When the transactions stops in the **middle**, fails. It is called as **Atomicity**.

* Rollback -> We can rollback to a previous state when we wish like it until a commit is done.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f111e81e-7af3-4bb2-b102-42930dd299e4)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f206c37-01fd-4029-9212-2ec4df0aff9d)

* Yes
* Rollback -> The DB changes can be reverted to previously saved state.
* NULL -> It is a representation of no any value present.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/932ffcfc-fc00-4b8e-ac62-ad2ad6c77d84)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7d8568d-392b-4e7b-9a97-44b98c915c21)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/922677b2-720a-45b9-aa25-1b584195e5fe)

1) Procedural DMLs
2) Non-procedurals(Declarative) DMLs -> SQL

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b384b173-ff55-476c-a00e-5abf920a9b60)

* Entity -> Object in the real world that is distinguishable from another object.
* Entity Set -> A **collection** of similar entities is called as entity set.
* 1 Teacher -> Entity
* Collection of all teachers -> Entity-set
* An attribute or set of attributes whose values can uniquely identify an entity in a set.
* More than **one attribute** can come into a **key**. 
* Prime Attribute/Key attribute -> All attributes which are part of key.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15dfa836-ae84-4353-bac6-90de36e89ae8)

* One to One.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45b5500b-1476-4e03-bf27-594414abe6d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12f2db2a-0533-4da4-8b86-458ededb9c70)

* One to Many.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe936e02-7a98-414f-8a77-de5f916ef56c)

* Many to One.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b873a27d-951d-41ce-b3cb-011cfbd3a5a6)

* Many to Many.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b89433c-ee2e-4b88-a1bc-0fc42db7d6ad)

* If one entity in the relationship is showing relationship of more than one on the right side then it is **One to Many** relationship.
* Towards the **one** side put an **arrow**. The other side is the **many**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/455264b6-24c4-42fb-913b-da8bdaf441b3)

* Another way to represent **One to Many**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79367e1a-9d6e-40b7-a23c-d0beba8c97c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69375a9d-27a2-4c07-b24f-7dd4595c07c1)

* Mirror/opposite of **One to Many**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d5c9fc7-fe9a-46e7-a781-56bf141bf82d)

* Multiple educator can teach one course
* One educator can teach multiple courses.

## Participation Constraints

* Specifies the presence of an entity when it is related to another entity in a relationship type.

1) Total participation -> All entities of an entity set are participating in a relationship
2) Partial participation -> Not all entities are participating.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4803a7bd-9e6c-4f79-ae2e-55e5f48e326c)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/541e6947-2a17-423e-885d-bf214bde6813)

* Question
* Option C.
* **Rent payment** is not soly on **Person** because it is dependent on what room the person has booked. It is not solely on the **Hotel room** as well because the **rent price** of the **hotel rooms** chance from person to person.
* So, **Rent payment** is an **description attribute** which is possible because of the **relationship** between the **Hotel room and Person**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fb099db-b0fd-48d7-bea9-db2f14c0a8de)

* Option **A**.
* Drawing the **set diagram** will make the questions easier to solve. [**IMPORTANT**]
* Cardinality -> No. of entries in entity set. [**IMPORTANT**]

## Weak or Strong Entity

* A weak entity is an entity that cannot be uniquely identified by it's attributes alone.
* A weak entity set does not have a **key**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73948681-bbe6-4131-b24d-d7a6c60f6a6c)

* Weak entity set is marked with **double rectangular box** around it.
* Every **dependent** doesn't need to be given a **new ID**. It doesn't have it's own **ID**.
* Two weak entity set cannot make a **relationship**.
* One is a strong entity set and one is a weak entity set then the **relationship** is **weak**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e088de0-0ac4-4fa8-a788-c8c8e62c7a1e)

* **Weak relationship** -> Double Diamonds box.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be8e254f-10b4-4eff-a2be-911589c1681c)

* True.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cd0eb5c-259e-4aae-9bb9-22ab930ec04c)

* One Singer can sing many songs.
* In one song many singers possible
* So, **Many to Many** relationship. [Example]
* Songs has **total participation**, as songs cannot be created without singers.
* Singer has **total participation** as well, as singer has **sung** songs that's why he is a singer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/214e3990-7572-42ed-b040-2ab58fcbb361)

* One customer can buy many products
* One product can be bought by many customers
* That's why **many to many**.
* Not necessary that all customers buys products, that's why **partial participation** in **customers** entity set.
* Not necessary that all products are bought by customers, that's why **partial participation** in **products** entity set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c5aa40a-6112-4686-a507-6529a227ed88)

* One children can go to many schools, different times(Secondary from one school, higher secondary from another school)
* One School can have many children.
* So, **many to many** relationship.
* Not necessary that all children go to school, that's why **partial participation** in **children** entity set.
* It is necessary that all schools have children, that's why **total participation** in **school** entity set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2f9ae8d-3e07-4f9c-9682-589c0dec027d)

* Examples

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fd7637a-e534-4e2a-a92b-1356d4adf351)

* Total participation

## Total and Partial Participation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e6a7437-bd47-4032-86b2-481930f59eda)

* Total and partial participation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/592c54ca-b7df-4618-aaf5-58cbc8a05a42)

* Strong and weak entity set.
* Weak entity set participation in a **relationship** will always be **total participation**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85e1499f-c2f2-4752-9726-0908aee22b4a)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a455248-cb71-4fc6-b92a-33c1c7d96ce1)

* Dominant Entity -> Entity of strong entity set
* Subordinate Entity -> Entity of weak entity set.
* If one **entity** of **Employee entity set** which is **strong entity set** then it is called as **Dominant Entity**.
* If one **entity** of **dependents entity set** which is **weak entity set** then it is called as **Subordinate Entity**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af7fa60b-aa85-4c9b-b96a-fb7663918ea5)

* Both the **Dominant and Subordinate** terms will come into **existence** when we are talking about the **above relationship** of **Employee and dependents** which is a relationship between a **strong entity set(Employee)** and **weak entity set(dependents)**.
* If we take one **entity** and not the whole set from the **strong entity set(Employee)** then it is called as **Dominant entity**.
* If we take one **entity** and not the whole set from the **weak entity set(Dependents)** then it is called as **subordinate entity**.

## Types of Attributes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e69b49c3-fb94-42a6-9993-a88026038068)

* Types.

## Single VS Multi-values attributes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa284105-aca8-4ed4-96f0-e31f2e341818)

* Single Valued -> Single value possible for each entity(Rno, name, dob).
* Multi valued -> Multiple values possible for one entity(Phone no).
* To draw **Multi valued**, we need to put **double circle/ellipse** around the value in ER diagram.

## Simple VS Composite/Compound attribute

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c42a89e-23c4-482c-8f35-ae59e51d5429)

* Attributes we have that can be decomposed into more attributes then those attributes are called as **composite attributes**.
* Simple -> Single attribute cannot be decomposed into further attributes.
* Simple -> Cannot be decomposed
* Composite/Compound -> Can be decomposed into other attributes(fullname).
* We have **4** attributes here, **Rno, fullname, dob, address**.
* **fullname** is a **composite attribute** of **firstname, middlename, last name**.

## Given VS Derived attributes

* Given -> Given in entity set
* Derived -> Derived from other attributes(age) -> Dotted lines.
* **Age** can be derived from **dob**.
* **Age** is not a direct part of the database. We are showing that **age** can be derived from different attributes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a1fb2cd-9fd6-4012-915f-b8762eb74a03)

## Prime VS Non-prime attributes

* Prime -> Part of key
* Non-prime -> Not part of key.
* To represent **prime attributes**, we will put an **underline** under the **prime attributes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78326356-f31d-4fb9-b849-d01854b4f68d)

* Prime VS Non-prime attributes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/893c4836-54f3-42ff-850c-e0edcd19dd5e)

* Rollno -> Prime attribute
* fullname -> Composite attribute
* Phoneno -> Multivalue attribute
* dob -> Normal attribute
* Age -> Derived attribute
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42dae6c-454c-4a52-96ed-0d5239b6d18d)

* No.

## Extended ER features

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5cfc8eb-82ac-4f5d-850a-14cbcb8bd21a)

Specialization -> Specializing the information of an entity set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccfdc497-89aa-4fed-8fd2-735315a1b54b)

* Specialization

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cb0ee16-158e-4e1b-b3cd-194cdc9a7bf0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9ce0269-1641-45d1-81d3-36a55bd5b7fc)

* Generalization

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92e16d2a-8369-428b-a65d-bad65ac32bfd)

* Example.  [**IMPORTANT**]
* Vehicle is a **2-wheeler** and **4-wheeler** -> **Specialization**
* **2-wheeler** and **4-wheeler** are **vehicles** only -> **Generalization**.
* In one **entity set**, we are specializing two different **special categories**.
* When we are going towards **specialization**, we have to make the **special categories** when the **specialized entity sets** have some **special attributes**. 
* If there is no **special attributes** for the **specialized entity sets** then there is no point in creating the **special categories**. 
* Top to bottom is **specialization**
* Bottom to Top is **generalization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a0370f8-8ea8-4dfd-8ec0-0386c3620d8b)

1) **Disjoint set** -> Any entity which is **mutual exclusively** going to either one of the **specialized entity sets**. One entity of higher-level entity set is present in only one lower-level entity set. 

* One entity of higher-level entity set(**Vehicle**) is present in only one lower-level entity set(**2-wheeler** and **4-wheeler**).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0760679d-dac6-43d9-95ac-61caf3fb1427)

* Vehicle will be either **2-wheeler** or **4-wheeler**.

2) **Overlapping** -> Present in more than one. One entity of higher-level entity set can be present in more than one lower-level entity set.

* One entity of higher-level entity(Musician) set can be present in more than one lower-level entity sets(**singer** and **guitarist**).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92d318d9-3926-411d-a1ea-c6df6d1379e0)

* Musician can be **singer** and **guitarist** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e40012d-a6e2-4fda-8e03-1ad74cae8229)

* **Total Generalization or specialization** -> Each higher-level entity must belong to a lower-level entity set.
* **Partial Generalization or specialization** -> Some higher-level entity may not belong to any lower-level entity set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fe7fa46-be30-425e-8694-02921c481446)

## Attribute Inheritance

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dc427c9-efbe-4ced-a3eb-64669335a48c)

* Employee entity set -> 4 attributes -> Name, street, city, salary
* Customer entity set -> 4 attributes -> name, street, city, credit_rating.
* Inheritance is **top to bottom** only.

## Aggregation

* Relationships is shown between **entity sets**.
* Relationships-set participating in relationship then aggregation is used.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c94919a-f0b6-492d-bf0e-2194e0791b8b)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25684711-a3de-41a9-83b5-d70ff8414bd7)

* Wrong way.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19a01fbf-c886-48e8-b4d2-522e9ea16c33)

* Correct way.

* The manager is not **managing** individual job, employee or branch. **Manager** manages the already exisiting relationship.
* We want to show a relationship of a relationship with a different entity set is called as **Aggregation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edb118b8-5a67-4ab1-a516-29a6e1f053e6)

* Aggregation [Example]

## Relational Model

* Relation -> Table.
* There is a relation **Student** which means that there is a **student** table.
* Attributes -> Columns

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fe7a188-91ac-484f-87e0-dd5dc6991ae8)

* Table Name -> Relation(student)
* Columns -> Attributes(Rno, name)
* 4 rows, so we have **4 tuples/records** within the relation.
* Tuple -> Row.
* **Degree or Arity** -> No. of Columns -> Number of attributes in relation
* **Cardinality** -> No. of rows or records -> No. of tuples in a relation.
* All of the **constraints** that we have put and all of the database construct used to construct the database. All of them combined is called as the **Database Schema**.
* **Database Instance** -> Snapshot of the data in the database at a given instant in time.
* **Domain** means when some values comes **what type of value(int, varchar, char)** it will be. Kind of datatype.
* A unique set of values permitted for an attribute.
* Difference between **Domain** and **constraint**:-
* **Domain** -> What is the datatype of the value.
* **Constraint** -> Even if the datatype of the value is correct, then also the value is **rejected/not allowed**.
* **Domain constraint** -> Specifies an important condition that we want each instance of relation to satisfy.
* **Keys** -> An attribute or set of attributes whose values can uniquely identify a tuple in a relation.
* Super Key -> All possible keys of a relation.
* Candidate key -> Minimal super key. A super key whose proper subset is not a key.
* Example -> rno, name + fname
* **name + fname** combination because the subset of them is **name and fname** and none of them are **keys** individually. That's why they are **candidate keys**.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1918acd1-d5a0-410d-9f99-9006ee28ec5a)

* If **ABC** is a **candidate key** then **A, B, C , AB, AC, BC** are not **keys**.
* **ABCD** is a **super key** but not **candidate key**.
* Prime Attributes -> Attributes of candidate keys.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f71fa7f1-85ee-4bd8-9fc3-7206d1d8da89)

* Question.
* Total no. of super keys which are not candidate keys?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6956597d-e749-42f1-9282-e5e98546051d)

* ACDB -> Not a candidate key as **ACD** alone is a key. **ACDB** can be a **super key**, yes.

## Primary Key

* One table has only one **primary key**.
* Chosen candidate key for implementation.

* Alternate key -> All other candidate keys apart from primary key

### Foreign Key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea30e54b-1045-4d6f-92a0-1c2f3b3ce254)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb927970-11e5-45f4-b214-1b024799faaf)

> The constraint put on the **Account.Branch_id** column is called as **Referential Integrity constraint**.

* The value we are referring from should be a **primary key** of that table. **Compulsory**.
* The one who is referring the value is called as **foreign key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7968e9c-a739-4501-8f5e-329079f44265)

* Of-course

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e38f589d-f3b8-4ef0-a687-2c04e0c4e87f)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30c0d2f6-d738-4f0a-b701-786cdb01193c)

* Branch table is **parent** table.
* The **FOREIGN KEY** constraint prevents invalid data from being inserted into the foreign key column, because it has to be one of the values contained in the parent table.

### Referential Integrity constraint

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a739c618-7145-43e3-9d83-6ed4e94b5fe1)

* Foreign Key may not be **unique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a05db006-b8bf-4bdf-bad3-53c34d743ee4)

* Integrity constraint is still maintained.
* Foreign Key can have **NULL**.

## Cascading effects

### On update cascade

* It says that foreign key value refers to which ever parent table value, if there is **updation** at tha parent table then at the **foreign key** updation will also happen.
* DBMS will do it **automatically**.
* If parent table value updated then automatically foreign key values are also updated accordingly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32f8e38e-0df6-4480-9bc1-e75d9ebbca2e)

* Example.
* On delete cascade -> Careful implementation
* On delete No action -> Makes no sense.
* On delete set NULL -> Careful implementation -> Only foreign key set to **NULL**.
* More cascade options.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3413aa74-193b-4350-87e4-0beb2d5c7ace)

* On Update Cascade -> If we **update** the column **Branch.Bid** and the value of **B4** is updated to **B5** then the  column **Account.Bid** values which has **B4** will be updated to **B5**.

### On Delete

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab57c81-6141-455f-bf3a-c2530cd29c19)

1) On Delete **Cascade** -> If we **delete** the **B3** row in **Branch.Bid**, then the **B3** values present in **Account.Bid**, their whole/entire **row** entry will also be **deleted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c3bb9c6-ace0-4817-b1fc-f7ed85247226)

* Example
* Not only the value is deleted, the whole row is **deleted**.

2) On Delete **Set NULL** -> If we **delete** the **B1** row from **Branch.Bid** then the **B1** values in **Account.Bid** will be set/updated to **NULL**. We will have **no value** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b796944a-e98d-4eb5-8d9d-ad9649f055ee)

3) On Delete **No action** -> If we **delete** the **B2** row from the **Branch.Bid** then there will be **no changes** to the values in the **Account.Bid** column.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1e21971-001f-4f58-bf03-54c1883e2105)

## SQL

* SQL is not **case sensitive**.
* Only **DB** values are **case sensitive**.
* Semicolon Mandatory? -> **NO**.
* If we want to run **multiple queries** together then after the end of **each query** we need to put **semi-colon** there.
* Run all queries together then after each query semicolon needed.

### Select Command

* Used to retrieve data from one or more tables.
* select * from Customers;
* **Select** command is used for **column** filtering as well.
* select City from Customers -> All rows of the column **city** will be displayed as **output**.
* select Country, City, CustomerName  from Customers

### Distinct keyword

* Need to be used with select, to **fetch only unique values** of designated columns(s).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a296088-02b9-4a77-8cb9-ded7df0a0b29)

* Combination of **Country and Postalcode** which are **unique** those are **selected**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20436b7e-9ac5-4300-8bc4-925cc36a84f4)

* Error, not allowed.
* We cannot write **distinct** in one column and not in the other.
* If we write more than **one column** then **distinct** should be applied to all **columns**, or **none of the columns** should have **distinct**.
* We have to put **distinct** on all of the columns we want to retrieve or none of the columns should have **distinct** keyword.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2949f983-72c4-44fa-89ce-39d307ed8080)

* select distinct itemp from itemmaster;
* **3** distinct values -> 3 rows -> 2, 4 and NULL.

## Where command

* Used with select, update, delete, insert commands
* Used to filter specific rows from table.
* Syntax -> select columns from tablename where condition;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7e73fb7-f963-425f-85c7-dbaf5402381b)

* This comes under DML.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c19a76f-5d0a-476d-80c4-f2a20b3dc4e1)

* select * from customers where customerid = 3;
* As **3** is **integer** so no need of **quotes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d36fd20-3da7-4895-9d5d-6e8b13344fab)

* Operators with **where** clause.
* Atleast 10 -> Min of 10 -> >= 10 -> Greater than equal to 10. [**IMPORTANT**]
* Maximum of 10 -> Max of 10 -> Less than equal to 10 -> <= 10. [**IMPORTANT**]
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdcbaad1-792e-4e21-b51e-ed46940e18f3)

* select * from orderdetails where quantity <= 10
* Less than equal to 10.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfda6dd9-9548-4b00-9d11-eab35705384c)

* Not equal to 10.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fe0d5e4-0f0b-46a4-b9a7-67ed081ccfce)

* select city,postal from suppliers where country <> 'USA'

## Logical Operators

1) AND -> True when condition 1 and condition 2 both are true. 
2) OR -> True when either of the conditions(1 or 2) are true.
3) NOT -> Negate/Opposite.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90ce5c6a-7fba-48de-bc1c-97d67735637c)

* Example
* Quantity is atleast **5** and atmost **30**.

## Between keyword

* Between lowerbound(LB) and upperbound(UB).
* lowerbound(LB) and upperbound(UB) are **inclusive(included)**. [**IMPORTANT**]
* Used to filter the records in the specific range.
* select * from orderdetails where Quantity between 5 and 30. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c49df39-25b7-4c01-9275-63f92224b077)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/007dcd70-6d4c-4823-b824-7896d050505f)

* select * from orderdetails where quantity < 10 or quantity > 20

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36742bc6-9fe1-41cb-a902-6007619cf520)

* not in between 10 and 20.

* select * from orderdetails where quantity not between 10 and 20

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eea7a325-801d-4f24-bab6-d07ba1acb791)

## NULL 

* We have to use the **is NULL** keyword here. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e9e9492-cbb0-4e6d-b16a-789ba96286d0)

* Nothing because here in **=** operator, **NULL** is taken as a value.
* To compare **NULL** values, or to find where **NULL** are there, we have to use **is NULL** keyword.
* select * from itemmaster where itemp is NULL.
* **= NULL** -> We are comparing with the string NULL or "NULL".
* We have to write **is NULL** to compare with **NULL**, nothing value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38ffa0f9-30c8-46a7-82a0-a208ae4be6c1)

* **Not NULL** sql query.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90759a6a-3485-4605-9cfd-fec7519303bd)

* Is the table possible or not?

> **NO**, the table is not possible.
> As **Xyz** and **XYz** are both same as there is **no case sensitivity**. We also know that **same name columns** are also not possible.

* Column name, table name, keyword are **not case sensitive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6fd5537-775b-4be7-a368-210e2c32c814)

* Limit -> Used to limit number of fetched records from a huge database table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19328153-6ce8-458a-a429-a9e75c69d4f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/160fdf98-b185-4821-be40-4d0e3510a928)

* Fetch **4 records** after starting 5 records
* limit x,y
* leaves starting **x**  no. of records and fetches next **y** records.
* select * from customers limit 5, 4 [x -> 5, y -> 4]

## Aggregate Functions

* Performs a calculation on multiple values and returns a single value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79d5aac0-f29b-4706-920a-e8c63960733c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94ee2a8f-af17-44ef-b724-94d1981ac203)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98a88697-0f5a-4a60-8d73-38a764aa2b43)

* **min() and max()** -> Works both on char data and numbers. For char data it returns the first or last record according to **lexicographic order**.
* Lexicographic -> Alphabetical order.

* **avg() and sum()** -> Will work only on numbers. Returns zero(0) for others.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b970ecbb-9ed4-4409-8ad8-292eae527f80)

* Example
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23de4729-be9f-498b-b180-0bc9e5c23055)

* Average -> Summation/Count -> (5 + 7 + 7 + 7)/4 -> 26/4 -> 6.5.
* We will not count the **NULL** as there is nothing over there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f84a40a8-8240-4be7-9dbf-118b3dc00f17)

* Select count(*) from itemmaster

> **8 rows** will come.

* count(*) will look at **no. of rows** that's why it will be **8 rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e20939b4-45f7-406a-ac04-cb9362c496a3)

* Yes.
* As **itemp** is a **column** it will count the **not NULL** values**. [**IMPORTANT**]
* As **itemmaster** is the **table name** so it will count the **no. of rows** in the table. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04c98ed6-5ef4-40f1-868e-c0f63fcdd01b)

* NULL means **nothing**.
* As it is **nothing**, so no need to include it when counting average. 
* select * from customers where country in ('USA', 'Germany', 'UK')

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7290955-9ef7-4227-a3e4-07cbd6d206c5)

* select * from customers where country not in ('Mexico', 'Sweden')

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64e7564e-0aac-4de0-a9b0-45d54acf520f)

* Sign change

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87d58641-b957-454f-a3c9-77ad8bc67321)

* select * from customers where country != 'Mexico' and country != 'Sweden';
* select * from demo where name <> 'Created by' AND name <> 'SQL Online' AND name != 'Twitter'
* select * from demo where name != 'Created by' AND name != 'SQL Online' AND name != 'Twitter'
* Different way of writing the above query. 
* != -> <> 
* Both give same output.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd7402ab-6a7e-4f52-9292-5b702d2d7d6f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cc91892-358a-4a29-a842-f6fe70c6d9e8)

* Subqueries
* Alias -> Used to give a temporary name to a table, or a column in a table.
* No spaces allowed
* Alias should be unique.
* No spaces allowed in **Alias**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc768781-aeb3-4f94-b1a3-c991eeaa07e7)

* If we give **keywords** in **single or double quotes** then they work as aliases. [**IMPORTANT**]

# Summary

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24d7cae2-5ccd-4011-badb-d103fd5bcb63)

* from -> where -> select [**VERY IMPORTANT**]
* This is the **running sequence** of the commands.
* Limit runs at the end.

## SQL Joins

* Needed to retrieve records from more than one table collectively.

## Types of Join

* Inner join -> Also called as **natural join**.
* Left Join
* Right Join
* Full Join
* Self Join
* Cartesian Product

### Cartesian Product

* Cartesian Product will return the product of each row from one table to all of the other rows in the different table.
* When we do **joins**, how many columns we have?

> Left side table  + right side table combination is the **no. of columns**.

* So it is **3 + 3 -> 6** columns in the **cartesian product** of the **above tables**. [**IMPORTANT**]
* **Cartesian Product** return combination of each row of student table .

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe40c317-1f63-4071-a408-eb1d86706e3b)

* No. of rows -> 4 * 3 -> 12. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c608afb6-9bab-47ea-8fd0-2614b47d4c05)

* select customers.customername as CustomerName, employees.EmployeeID  from customers, employees
* Cartesian Product is **costly operation**.

## Questions

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a68627f-b045-4122-9ed3-69098ff2856c)

* Question.
1) select * from customers where country IN ("Germany', 'Berlin');
2) select customername, address, city, postalcode, country where contactname ='Yang Wang';
3) select * from customers where customerID <= 19;
4) select * from customers where country NOT IN ('Germany, 'UK', "USA');

* For **Query '3'** -> We don't know if the table is **sorted or ordered** using **customerID** or not, it is better to write **customerID <= 19**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e38e4b01-9b50-41b3-9246-c2f1df314979)

* Yes, limit could be wrong there as well.

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

## Inner Join

* We need **one** common column for **inner join** to work.
* Inner Join -> It will give those records that are in the left table and are matching with the column records of the right table.
* select * from table 1 Inner Join table2 on table1.column = table2.column [Syntax] [One Way]
* select * from table1, table2 where table1.column = table2.column

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/783f9aab-151a-4673-afa1-8aafbb8a5b4d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5543eee1-4f03-4459-a940-6164567e57b7)

* select * from student, library where student.rno = library.rno [Syntax] [Another Way]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6cd093e-5a00-4e47-9e43-e3985905b730)

* select * from T1 inner join T2 on T1.A = T2.A
* Example.

## Left Join/ Left Outer Join

* Left Join/ Left Outer Join -> Entire rows of left table and the matching rows from the right table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/547ddfc3-bf20-44a9-8285-3605addbcce0)

* select * from student left join library on student.rno = library.rno [Syntax] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5a6edda-7537-4c84-84a8-7f61a131a63d)

* Result set 
* Min. no. of rows in result = no. of rows in left table. [**IMPORTANT**]

* In the left table we have **4** rows and **3 rows** in the right table. How many max rows we will have after **left outer join**? [**IMPORTANT**]

> We will have **12** rows max.

> All **4 + 3 -> 7** rows from the two tables are all identical then **4 * 3 -> 12**.

* If all the values are **distinct**?

> The no. of rows will be  -> No. of rows in left table

* Min. no. of rows in result = no. of rows in left table

* It is **true** when common column has unique values in both tables.

## Right Join / Right Outer Join

* Right Join / Right Outer Join -> All rows of right table and only matching rows from left table. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e82fb62d-8e6d-4d68-aefb-9970c1b8185a)

* select * from student right join library on student.rno = library.rno [Syntax] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42d8644d-e1cd-4471-9b25-1bfaff75fa07)

* Resultant set

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
* **Cross product** is the **superset** of all of the **joins**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a212c449-b350-4f9b-9e50-323afb61abcf)

* Question
* Option **D**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d36ced0-06fd-42be-a04d-3ab5287303be)

* Finding the **no. of rows and columns** from the **Cartesian Product**. [Formula] [**IMPORTANT**]
* Combination of **Left Outer Join(LOJ) and Right Outer Join(ROJ)** is **Full Outer Join(FOJ)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e93a91f-7b5d-4297-9219-6c9aa752b566)

* Question.
* select customername from customers, orders where customers.customerid = orders.customerid

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ffc3940-1eb9-4837-a448-50a8cbceaa8d)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/982f51b2-cbd6-4c5b-9c02-227c8201b274)

* Question.
* select orderid from orders inner join employees on orders.employeeid = employees.employeeid where firstname= 'nancy'
* select orderid from orders, employees where orders.employeeid = employees.employeeid and firstname= 'nancy'

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b2d4420-f6fa-414e-b522-3a593f5d780c)

* Ordering. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/303499b2-7383-42eb-bdb8-31a38d615739)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cbb3b5a-7c9e-46e8-9374-d66a663caf64)

* We want to know the **name of the drivers** who have **driven atleast once** in a race. [Question]
* select distinct(dname) from drivers, drives where drivers.did = drives.did and racedate is not NULL.
* find name of all those students who have enrolled for atleast one course during 2022.
* select distinct student.sid, sname from student, enrolled where student.sid = enrolled.sid and duration = 2022;
* Find name of all those students who have enrolled for course with id=5.
* select distict student.sid, sname from student, enrolled where student.sid= enrolled.sid and courseid = 5;
* list out all student information and if they enrolled for any courses then those information also.
* select * from student left join enrolled on student.sid = enrolled.sid;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb95c81e-cf64-45ed-8485-b2fec0e3b464)

* find name of all students who have enrolled for course 'DBMS'.
* select distinct student.sid, student.sname from student, course, enrolled where student.sid = enrolled.sid and course.courseid = enrolled.courseid and coursename = 'DBMS'; 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7040b31-908d-4918-ae93-798e3ae231fe)

* Another way of writing the **query**.

## Self Join

* We have to join the table with **itself** only. It is called as **self join**.
* If we have to join the table with **itself** then we will have to do **aliasing**. It is **compulsory**.
* We have to assume they are **two different** tables and then do **aliasing**. 
* Find name of all such employees who are managers also.
* select distinct E1.name from employee E1, employee E2 where E1.Eno = E2.ManagerID
* Find name of all employees who are having managers?
* select distinct ename from employee where managerid is not NULL. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4ea76a9-d712-42ec-bf4a-a5bee5e6a7e2)

## Group By clause

* Used in collaboration with the select statement to arrange identical data into groups.
* Select information in **groups**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5706804-3e1c-463d-9384-871cf68ed7f2)

* Select * from demo group by name;
* For all of the **unique values** of **dob** column, we are creating **separate** groups for them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cff86ee-b790-45b6-8c31-109ba28362e7)

* select * from customers group by country;
* For **each country** there is a **separate group** for it thanks to the **group by** clause.
* select country, count(customersID) from customers group by country;

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86315cdb-34b1-42a3-a3c7-33f97d02a0bf)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b4c26c7-5d3a-45ac-a7b7-7cc55cf57c25)

* Yes. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2f91a29-09ee-442b-9197-137769d833c8)

* 4 rows are selected.
* select * from student group by Rno;

> **5 rows(1,2,3,4,5)** will come.

* select * from student group by name;

> **3 rows(A, C, D)** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86a77073-a0a6-4e5b-add2-bb2c48035a4c)

* Automatically **distinct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6dec18a-0a00-47e0-a800-0d361cf0964e)

* From -> Where -> Group by -> select.
* Sequence [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48131301-1ddd-42c7-aa3e-1500930e85df)

* select categoryid, sum(price) from products group by categoryid;
* The column on which **group by** clause is performed/done, that must be included in select. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4331270d-251c-4ef6-aea7-32d2762b00f1)

* select categoryid, min(price) from products where price > 20 group by categoryid; [**IMPORTANT**]

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73998ef5-f875-4b4c-92ab-4758d262c1fb)

* Having clause **sequence**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69bda08b-622d-4d80-9a7d-63c7fa3f3f2e)

* Where VS Having clause **difference**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d86f711-5d82-477f-bcb9-aa67d167da60)

* Yes, **having** cannot be written alone without **group by** clause.

## Order By

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06d33b8c-2c03-45ca-acf2-b40b2370e5fe)

* Default ordering is **ascending** order.
* Order by doesn't make any changes to the table.
* Ordering the fetched data.
* Order by runs after **select** clause.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d9dfa3c-5bdd-45ac-b54a-f16e36648c11)

* Example.
* If two **country** names are **same/equal** then those rows are **sorted** using **postal code**, otherwise we are doing the sorting with **country** only. [**IMPORTANT**]
* The **order by** keyword is used to sort the result-set in **ascending or descending order**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c55d2fd1-ed13-49a6-8e54-9b01b6dbbfc9)

* From -> Where -> group by -> having -> select -> order by [**IMPORTANT**]
* select categoryid, sum(price) from products group by categoryid having sum(price) > 200 order by sum(price) desc

## Subquery

* Subqueries can be within **select, where and from**.

1) Single row subquery -> returns single row of one column(One value)
2) Multiple row subquery -> returns multiple rows of a column(Multiple values)
3) Corelated subquery

## Single row subquery

* If countryname was directly not given, and we had to find the country name and for that we had to write a query.This is **subquery**.
* Fetch the name of all customers which are from same country of customer name 'The Cracker Box' [Question]
* select customername from customers where country = (select country from customers where customename = 'The Cracker Box') [Answer]

* Find all such products which are having price less than price of product name 'Tofu'.  [Question]
* select * from products where price < (select price from products where productname = 'Tofu) [Answer]
* Highest product price -> max(price)
* Find the product with second highest price. [Question]
* select max(price) from product where price < (select max(price) from products) [Answer]

* (select max(price) from products) -> max(price) [Inner Query]
* select max(price) from product where price < -> Except **max(price)** we will get the rest rows -> Out of those rows we will select the **max(price)**. Which is the **second highest price**.

* Find the product with third highest price. [Question]

* select max(price) from product where price < (select max(price) from product where price < (select max(price) from products)) [Answer]

## Multiple Row Subquery

* returns multiple rows of a column
* Inner query returns multiple values. So, **equal to(=), greater than (>), etc** they don't work.
* We have to use some **keywords** like **In, any, all, exist**.
* Find all customers that are from the same countries as the suppliers. [Question]
* select * from customers where country IN (select distinct country from supplier) [Answer]
* In -> multiple OR. [In keyword] [**IMPORTANT**]
* Find all customers, that are from those countries where there is not any suppliers  [Question]
* select * from customers where country NOT IN (select country from suppliers) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0dabff2-d187-486f-94ea-1665eb1a9350)

* Find all customers, who have placed more than 2 orders. [Question]
* select * from customers where customerID IN (select customerID from orders group by (customerID) having count(orderID) > 2) [Answer] [**IMPORTANT**]
* We can do this subquery using **inner join** as well but **inner join or joins** in general they are quite **costly operations**. That's why using **subquery** is better. [**IMPORTANT**]

## Any Operator

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53d83a83-e8ff-48ef-907e-949a78b1a77d)

* Operators used with **ANY** keyword -> =, <>, !=, >=, >, <, <=.
* Any means **anyone**.
* Any -> **OR** operation.
* Find the productname of all those products which have their orders quantity larger than 50. [Question]
* select productname from products where productid = any (select productid from orderdetails where quantity > 50) [Answer]
* Find the productname of all those products which have their productIDs less than any of the product having orders quantity equal to 1 [Question]
* select productname from products where productid < any (select productid from orderdetails where quantity = 1) [Answer] 
* select productname from products where productid < (select max(productid) from orderdetails where quantity = 1) [Example]
* We will directly get **one value** which is the **max(productid)** and we don't have to use the **any** keyword here.
* If it was **> any**, then we would have used the **min()**, **min(productid)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5b5116-dd42-4d7d-9d60-d25bab0b0ffb)

* Subquery Summary [**IMPORTANT**]

## All subquery

* Any -> Anyone one value.
* All -> Comparing with everyone
* All -> **AND** operation.
* Operators used with **All** keyword -> =, <>, !=, >=, >, <, <=.
* Find the productname of all those products which have their productsids less than all of the product have orders quantiy equal to 1.
* select productname from products where productid < all (select productid from orderdetails where quantity = 1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59d066e8-6a9c-48f6-9681-9ff5cb50d964)

* Sub-query **ALL** summary.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76c544ef-8475-4a32-86c0-136a1c655f3d)

* **! All** -> Behaves like **Not In**.
* Finds all employees whose salaries are greater than the salary of all the employees in the sales department with departmentID is 2. [Question]
* select * from employee where salary > All (select salary from employee where departmentid = 2) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e107ebcd-9f3c-40ab-9251-00b64d395ca2)

## Exists subquery

* Checking if the **result set** returned by the **inner query** is present or not.
* If **Yes**, then we will get the result from the outer query.
* select * from customers where customerID = 1 -> Returns all the details of customers where id is '1' -> Returns 1 tuple/row.
* We are checking if **result** coming from **inner query** or not.
* **Existence** of output there in the **inner query**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c85fd42b-5ff7-4464-a3ac-35ee7d0c898f)

* select * from orders where exists (select NULL)
* (select NULL) -> It selects **NULL** as the **only one value**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5381dbf-cc77-43dc-bccf-dff7426fa415)

* In the **result set**, we are getting **NULL**.

## Co-related subquery

* For each row of outer query, either inner query runs again and again. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/183a6c4f-3575-49b7-b662-b4eef36aafda)

* Example
* select Rno, name from student S where exist (select * from enrolled E where S.ro = E.rno);
* With **corelated subqueries** we are doing a type of **inner join** in the above question.
* write a query to select all such customers record which have atleast one order placed.  [Question]
* select * from customers C where exists (select * from order O where C.customerID = O.customerID) [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed907a93-6830-452a-8ff9-32602f434e25)

* [**IMPORTANT**]
* (customers.*) -> Prints the columns only from the **customer's table**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed54ef66-35e3-48a8-bb62-af85e200d25e)

1) select customername from customers where country = (select country from customers where customername = 'Around the Horn')
2) select postalcode, count (*) Counter from customers group by postalcode.
3) select country, max(Counter) from (select country, count(*) Counter from customers group by country);
4) select country from customers group by country having count(*) = 1

* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff2ecfc5-9f1c-4bbf-ad67-aa4abd1e99a7)

* Question
1) select * from product where price = (select price from products where productname = 'Aniseed Syrup')
2) select suppliername from suppliers where supplierid IN (select supplierid from products where price > 20)
3) select * fom products where productname != 'Tofu' and categoryid = (select categoryid from products where productname = 'Tofu')

* [**VERY IMPORTANT**]

## Set Operators

* Set operators are used to combine results from two or more select statements
* SQL rule -> Both the **result sets** from the **select statements**, **no. of columns** should be **equal**.
* **Set operators** doesn't change the **columns**.
* Same no. of columns as in left or right select statement.
* **Set operators** is happening on the **data**.
* Set Operators -> Union, Union All, Intersect, Minus Or Except
* In **union**, duplicates are **eliminated**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c16ff70f-42bb-4327-a274-cabfc42f70a2)

* Example
* We have done **union** of the **rows**.
* (select city from customers) UNION (select country from suppliers)
* UNION -> Eliminates duplicates
* Union All -> Duplicates are not eliminated. Shows all **tuples**. [**IMPORTANT**]
* Intersection -> Common
* Intersect -> Gives common tuples.
* Minus or Except -> It gives **set difference**.
* select * from T1 except select * from T2 -> We will get those rows from T1 which are not in T2.
* select * from T2 except select * from T1 -> We will get those rows from T2 which are not in T1.
* Find out those cities where we don't have customers but only suppliers. [**IMPORTANT**]
* select city from suppliers EXCEPT select city from customers.

## Create Table

* No value i.e NULL, it is fine
* If it is **value** then it should be **unique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/847b80d3-4241-4b96-9e69-66683a5619fc)

* Primary Key

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3026a348-5c34-4911-90d4-3d9a8fb9734c)

* Foreign Key

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7305a393-37af-4092-aace-503937195746)

* If we have **one value of 'A'** then give **one value of 'B'** and not **two values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bfb7a3e-dd01-4be4-a81f-caf17c99e30c)

* For **a1** value of **A** column we are getting **two different values** of **B** column which are **b1 and b3**. So **a1** is giving **not unique** values.
* So, **A -> B** does not **hold**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0f7f758-0b8f-4de9-80bd-ae176635d325)

* Another Example
* For **a1** value of **A** column we are getting **unique value** of **B** column which is **b1**. So **a1** is giving **unique** value.
* For **a2** value of **A** column we are getting **unique value** of **B** column which is **b2**. So **a2** is giving **unique** value.
* So, **A -> B** does **hold**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c63aa487-e921-4392-9561-2580d9efbc1a)

* Example.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/692d87df-94a5-4c80-8e20-590b7ca79ba5)

* Example
* A+ -> {A, B}
* B+ -> {B}
* C+ -> {C, D, A, B}
* D+ -> {D, A, B}.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cf3d4f1-8a03-4032-82ec-86a3382405bb)

* Trivial Functional Dependency

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8395abe-fc85-4f09-adbf-83224f49a6d4)

* Reflexivity Rule
* If **A to B** holds then **AC to BC** will also hold. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70473b11-f847-44a6-8faf-d02c52e0af80)

* Augmentation Rule.
* If **E -> F** holds then **ABE to ABF** alos holds.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e295f0f-24ca-4ff2-82f2-6de5b48b8bd5)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27f83c71-60ef-4395-908a-d3eb920409ee)

* Transitivity Rule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bef4ff8-00e9-4170-94d7-60faf2980088)

* Addition Rule.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0cf66a9-40fc-405c-a373-d52a400ef39e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e53e3e5-dd2d-4428-bd11-5249c1cd11c7)

* Example.
* FD+ -> {A -> B, B -> C, AB -> D, A -> C, A -> D}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5186916a-ea9d-4b50-9da4-03b693aae4b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ecd7ea7-f61d-4ef2-bee7-a48759e9024a)

* Question [**IMPORTANT**]
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92b834a6-8bba-4bae-bd5d-52193eba5c63)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc631168-42d6-4f8d-af8e-962df77437be)

* In closure of **A**(A+) -> {A, B, C, D}
* If we find all of the attributes in closure of **A**(A+) then only we can say that **A** is a **key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c564af8d-88f2-436f-a6a3-b43929d3bc59)

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

* All of them have **all of the attributes** in their **closures**.
* So, **A, B, C and D** are **candidate key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1609e260-a207-4391-9cdf-5246a8f2d281)

* Only **one** of them have **all of the attributes** in their **closures**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31bed794-6fc7-4a73-9895-d70733c1e7e0)

* So, **AB ** is the **candidate keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a50e026-3fdb-4881-a64b-7d622dab6d91)

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eeffda2c-2860-47b4-a541-9036e6e42765)

* These are the **6** keys.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/892e9ee3-bba3-4ea0-b0e5-39954d9ef2be)

* These **three** are the **keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f1fb6b7-3687-47ac-8420-1d67c59a4d0e)

* So, **three** keys are coming.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9af51c66-3578-4af1-87c0-327e131e8d73)

* Example.
* On the right side is the **minimal set**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ba430c1-2bd3-4263-b73c-04bab8e42b1b)

* Exactly.

## Normalization

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efe4639d-ebf1-46b1-b0a6-18f37f5d3e7d)

* Definition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b5d4868-cd20-4958-ae24-63d3ce1f5fb7)

* If we didn't allow **NULL** value in **P-Id, P_Name and P_Price**. They should be **Not NULL**.
* There is an **anomaly** due to **insertion** into the table.
* **Insert anomaly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e8388c1-8264-4dc9-b878-e646beb655d4)

* **Update anomaly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6a0307f-8d0c-417d-a751-b76d2d3752f5)

* Delete product jeans
* Deletion Anomaly
* Customer with id **c3** also deleted.
* To **remove** the above anomalies we use **normalization**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/577524d5-c6f5-421b-b396-ceccf29ffd4f)

* Normalization.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01f2c9ec-7398-4887-88b3-1f3edd3605ad)

* For the relation to be in **1NF** -> Remove Repeating Groups.
* For the relation to be in **2NF** -> Remove Partial Dependency.
* For the relation to be in **3NF** -> Remove Transitive Dependency.
* For the relation to be in **BCNF** -> Remove overlapping Candidate key.
* GATE syllabus till **BCNF**. [**VERY IMPORTANT**]
* NFs -> 1NF, 2NF, 3NF, BCNF.

## 1NF

* A relation R is said to be in 1NF if there is no any multi-valued attribute in R.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/941e56d7-e86f-4a0c-bf74-5e3e3bbaef14)

* We removed the **Rno** column.
* Keep multi-valued attribute along with **primary key** of table in another table. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a41c3bef-ee74-476d-bfe5-80cea2e3a499)

* This is also a **good solution**.

## 2NF

* If we have to normalize the DB table in **2NF** form, then they should be **normalized** in **1NF** form already.
* If we have to perform **2NF** form then the DB table should in **1NF** form already.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9a2d474-266f-4951-b632-9b0a5aa13de6)

* There is **no any** non-prime attributes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1db0ee96-7874-4566-82c1-b440d22cf8b7)

* Partial Dependency.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acb597d3-ef1a-495b-a5ea-6058a9ddd8e6)

* Prime and non-prime attribute.
* if key is a **composite** key and from the **sub-part**. If the **sub-part** derives some **non-prime** attribute.
* This is called as **Partial Dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33d74be4-f1b6-4ad7-93a6-2d72faf2444d)

* Example
* Candidate Key is **AB**.
* Prime attribute -> A, B
* Non-prime attribute -> C, D
* If **table's data** is not given, then we can assume that the **table** is in **1NF** form.

* For the table to be in **2NF** form, there are **two** conditions:-

1) Table should be in **1NF**.
2) No partial dependency. 

* **A or B** alone can derive any **non-prime** dependency?

> **Yes**, **B** derives **D**.

* It is a **partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/610d3b48-e781-4006-8811-5dcc987a41dc)

* Example.
* Given relation **R** is not in **2NF**.
* We have to get it to **2NF**.
* To get the relation in **2NF**, we have to **decompose** the relation.
* To bring **R** in 2NF, decompose **R** into **two** relations such that we remove **partially dependent** attribute from **R** and keep it in another relation. [**IMPORTANT**]
* We have to keep the **partially dependent** attribute with whom it is **dependent** on. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e10a702-41d5-45e5-8e36-4593310b5343)

* Key in **R1** table is **AB**.
* Key in **R2** table is **B**.
* So, there is **no partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a04eb922-f8da-4ff7-bd22-bed298e4a8b7)

* Both **R1 and R2** are in **2NF**.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/035c330c-b837-4fd8-bf3f-b8a5093bdeec)

* Option **C and D**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7180af91-8f02-43bd-8bba-3e0455458d1b)

* **AB** is a **candidate key**.
* **A and B** are **prime attributes** and **C** is **non-prime** attribute.
* **B -> C** is **possible**.
* **C -> B** is **not possible**.
* We have a **partial dependency**, as **AB** is a **candidate key** and **B -> C** is **possible**.
* So, the **partial dependency** is **B -> C**.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05b1c9b9-65f4-45c3-97bf-6069f5856779)

* In **2NF**. [**IMPORTANT**] [Solution]

## 3NF

* Transitively dependent:- [**IMPORTANT**]
* Key -> Non-prime_1
* Non-prime_1 -> Non-prime_2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1552441-9541-4195-b3c1-c5ac2cd5a2ae)

* **Transitively dependent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22cb98d5-1b63-4f84-aee1-19d955c23b55)

* Candidate key -> AB
* Prime -> A, B
* Non-prime -> C, D
* Check for 2NF -> No partial dependency -> **2NF satisfied** -> It is in **2NF**..

* AB -> C [Key -> non-prime_1]
* C -> D [non-prime_1 -> non-prime_2]
* So, AB -> D [Transitively dependent]
* **D** is **Transitively dependent** on the **key(AB)**.
* So, **3NF** not satisfied.
* **D** is **transitively dependent** so **D** is the **issue/problem**.
* If **D** is the **issue/problem**, then **remove 'D'**.
* Keep **D** in a **separate table** with **C**.
* Decompose **R** into **2 relations**.
* Whoever is **Transitively dependent** with **D** here, we will remove that from the **original table**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ce197a9-46d9-47bb-95a2-fca4bc51cafe)

* To whom **D** is **directly dependent** on, that should go with **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46503d93-b39a-4f77-9056-070275df4bdb)

* If **D** is transitively dependent on **key** then, **remove 'D'** from the **original table** and keep it in **another table** along with the **attribute** with which **D** is **directly dependent**.
* Don't remove **C** from the **original table**

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/887979fd-6753-43ad-afe1-fb1b0b233901)

* Question.
* **C -> D** is a **partial dependency** as **C** is a **prime attribute** and **D** is a **non-prime attribute**. So not in **2NF**, we have to do **decomposition** of **R** to get it into **2NF form**.
* **AC -> B** is a **partial dependency** as **A and C** are **prime attributes** and **B** is a **non-prime attribute**. So not in **2NF**, we have to do **decomposition** of **R** to get it into **2NF form**.
* We got **R, R2 and R3** which are in **2NF**.
* Now to check for **3NF**.
* There is **transitive dependency** in **R3** which is **C -> E**. So we have to do decomposition of **R3** to get **3NF** form.
* **E** is **transitively dependency** on key **C**.
* We got **R31 and R32** tables, now they are in **3NF** form.
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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96fe50c6-b0e8-45ba-a3ea-16936b6cf1ce)

* Solution [**IMPORTANT**]
* There is some **data loss** as earlier the **FD** was **AB -> CD** in the original(R) table but in **R1** table it is **A -> CD**. 
* This **decomposition** is called as **lossy decomposition**. [**IMPORTANT**]
* **BCNF** can create problems. There is **no any solution** for this.
* When we do **decomposition** till **3NF**, everything is **fine**. **No data loss**, no **FDs** are lost as well.
* When we go to **BCNF**, there is a **possibility/chance** that **FD** is **not preserved** or the **decomposition** that happened, causes **data loss**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/372ecc2a-6768-4f9b-b3c2-d7ba8cf40d81)

* Upto 3NF decomposition -> Definitely **lossless and dependency preserving** -> **Compulsory**.
* BCNF decomposition -> Not necessarily -> **lossless and dependency preserving** -> **possibility/chance**.

* BCNF **always provides** lossless and dependency preserving decomposition?

> **False**.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7792e435-df29-4dfc-ba9c-55c9ab01dfdb)

* Decomposition to remove the **partial dependency**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5d5e35-5d15-4abb-8ae9-29ef934f0291)

* Question. [**IMPORTANT**]
* It is already in **3NF** because all of the attributes of **R** are the **prime attributes**. So **no partial or transitive dependencies**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72b845ff-90b1-4188-a98d-e8bc3f9954f2)

## My Work

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e207028-2a6a-4a9f-b9a2-f6d1a430bdc0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b993ef4-5809-4c37-93f8-8f68bdb4e7ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62efd41a-1125-4281-a9c6-c439595289a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9be6958b-211a-4e7d-89d2-a5ab4c9ad008)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/497c97b8-2325-4094-95bc-a96a7c6e704c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/382515b9-177b-49da-8628-407fb9e00b9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30a7411c-cb70-4bc3-9b3e-172a8835448e)

* DONE.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c07ca70-51bb-4b21-8841-be24e27fc5e6)

* Relation is already in **3NF**.
* Also in **BCNF** because for each **FD**, the **LHS** is a **key**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32327a14-fa63-4b9e-981b-887cd8552037)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc78a731-4271-40b3-8ce9-0a7cf0122983)

* Solution
* Answer -> **a, b, c**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2ddf8c7-601a-48d3-9136-5831b80f1332)

* BCNF [**IMPORTANT**] [Answer]
* A -> B
* No partial or transitive dependencies -> 3NF.
* LHS is a **key**. So **BCNF**.
* Same for **B -> A, AB -> AB**.
* We said that if more than **2 attributes** are given then it is not possible to find **relation** without **FDs**.
* If **2 attributes** are there then it is possible without **FDs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be7e6f58-7a75-4784-9d07-8d07a352ed8d)

* For **partial dependency**, all of the **above problems** happen.
* To remove them we apply **normalization**.
* Option **D**.
* **Inconsistency** comes because of **redundancy**.

## Lossy VS Lossless Decomposition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c70cf1ef-6705-4d77-89a6-03d70cc2776b)

* We will do **inner join** and the **common column** is **sname**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42656f5-550a-485c-931b-3fdf219326cd)

* select * from student_details S inner join s_department d on S.sname = d.sname;
* We will get **4 columns** and **4 rows**.
* If we want the **department** of **roll 12 vishvadeep**, then the **query engine** will be **confused** as we have **two roll 12 vishvadeep**, one of them has **CSE** as their **department** and the other has **AI** as their **department**.

* We didn't get the **correct** information, we wanted.
* This is **lossy decomposition**. [**IMPORTANT**]
* It will be **lossy decomposition** when we do **inner join** on the **decomposition tables** and after doing **inner join** the **result set** that we will get. If the **result set** is **not equal** to the **original table** then it is **lossy decomposition**.

* If the **result set** is **same to same** as the **original table** then it is **lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03e2ce19-3f1a-450f-9bb1-8b85be934dfa)

* Lossless Join Decomposition

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d22f539d-5e8b-484f-a35b-6cf4c4045b79)

* Example.
* select * from student_details S, S_department d where S.rno = d.rno

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74f0cf3d-5f28-4048-8165-7c99f2d18c3f)

* Inner Join
* R becomes a **subset** of the **result set** -> Lossy decomposition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c80c6734-61b0-4504-b897-d5894f4e1cb9)

* Question. [**IMPORTANT**]
* **Y** is the **common table**.
* We will get **lossy decomposition** because **5** is there **two** times in **Y** column. We will get more columns than there was in the **original table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b151eec-b111-4676-9fe8-17a3d7d18fe3)

* Good **observation**. [**IMPORTANT*

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd5b940-9e3d-4405-8c19-285999d358e4)

* Solution.
* **R1 intersection R2**, between **R1(A, B, C) and R2(A, D, E)**. So, we have **A** as the **common attribute**.
* Is **A** a key in **R1 or R2**?
* As it is a key in **R1** table, so **yes** it is **lossless**.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/199df87d-94d6-4deb-a468-cf9e35d9e250)

* If we do **inner join** of **three tables** then we have to write **two join conditions**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dec44e16-23c2-44e7-9f36-0b525303ab8e)

* Combine **two-two** tables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81b176f7-7838-490c-b2c3-c3785b2eabab)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4aaea5b-d661-4136-8f5a-e56b66123a4b)

* Lossless.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17d70ebf-468c-4a1f-ba14-79fde58f7b2f)

* Question.
* There is **no common attribute** between **R1 and R2**.
* So, **lossy**. [**IMPORTANT**].

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a7477c0-0640-4260-94d1-6295869d53ff)

* **x -> y** is the **partial dependency**, we **remove** it from the **original table**.
* **y** was **dependent** on **x**.
* **x** also goes to the **new table** with **y** and **x** becomes the **key** of that **table**.
* **x** is also present in the **original table** also.
* So, **x** is common in the **new as well as the original table** and **x** is **key** in **one of the tables**.
* That's why **2NF and 3NF** always gives **lossless decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e2af48a-73f6-4ae9-9c6b-71c780e0f267)

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/279a7355-3336-4b5f-a94e-a8d81190c37b)

* **Not Dependency Preserving Decomposition**. [Example] [Question] [**IMPORTANT**]
* From the **union** of the **FDs** of **R1 and R2**, we couldn't get **D -> A** from the **question**. So it is a **not Dependency Preserving Decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da7c32db-9e10-4887-ba77-05bfbd3882e8)

* [Example] [Question] [**IMPORTANT**]
* **Not Dependency Preserving Decomposition**.
* From the **union** of the **FDs** of **R1 and R2**, we couldn't get **D -> C** from the **question**. So it is a **not Dependency Preserving Decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0577fc14-865a-4367-98bf-e9d800722172)

* [Example] [Question] [**IMPORTANT**]
* **Dependency Preserving Decomposition**.
* From the **union** of the **FDs** of **R1 and R2**, we are getting all of the **FDs** from the **question**. So it is a **Dependency Preserving Decomposition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf9099cd-287a-4ccf-ab7e-ed1ce6b75f87)

* As there is **no common** between the **R1 and R2**, so it is a **lossy decomposition**.
* It is **dependency preserving** because we are getting all of the **FDs** from the question after we do **union** of the **FDs** from **R1 and R2**. 
* **Dependency preserving and Lossy decomposition** -> **Dependency preserving and not lossless decomposition**.
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84e7a534-adba-4c6a-86dd-10f0b8e3ee23)

* Question
* Option **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ba5b0de-94b8-4eac-a7dd-e63d790d65ba)

* Solution.

## ER Diagram to relational model

* 1 Entity Set -> 1 Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f7b4b84-e9de-4ea1-a10c-210f8bef74f8)

* Many to Many Relationship.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4de5671-30c4-4bb9-af7a-452c87f903ba)

* Using **both Eid and Cid** together we can make a **composite key** for the **Teachers table**.
* Teaches.Eid -> Foreign Key referring to **Educators.Eid**
* Teaches.Cid -> Foreign Key referring to **Courses.Cid**
* **No partial dependency** present in **Educators, Courses and Teachers** tables.
* So, all the **three** tables will be in **2NF**.
* **No transitive dependency** present in **Educators, Courses and Teachers** tables.
* So, all the **three** tables will be in **3NF**.
* All **3 relations** are in **BCNF**.
* Keys are in **LHS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2379b0f8-47f5-465c-9a5b-595daa1c9040)

* Option **1**.
* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23e2b79d-f61b-480c-bca5-c348852e4960)

* Option **2**.
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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f195887d-bb48-4b5c-a278-0896a7446bf8)

* We have to keep **one student's information** only **once**.
* **One to many** relationship [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12459bdc-c944-4208-8673-02876a1971c0)

* **Sid** is the **primary key** in **students** table.
* **Eid** is the **primary key** in **Educators** table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b43e68a1-2b2a-413d-967e-f001b8594d95)

* **Eid** is not **primary key** and **too much redundancy**. 
* That's why we can't keep the **relationship** in the **one side** which is the **educator** table. [**IMPORTANT**]
* So we will go towards **many**, which is **students** table. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70e2fac1-ff6d-404e-a8cb-26ba5f38683f)

* There is **no point** of creating **three** tables when we can get the work done in **two** tables. [**IMPORTANT**]
* **Best Solution** -> Take relationship information towards many side entity set. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55350ab5-32ad-4a8f-8ac0-957cd9b0ed88)

* **Sid** is the **primary key** in **student and Guides** tables.
* So, we can keep them **together** and make **2 tables** instead of **3 tables**.
* **Sid** is **primary key**. So it is  better to keep it in **same** table.
* **One to Many** and **Many to one** is **same thing**. [**IMPORTANT**]

### One to One Relationship

* It will be in **2 tables** only.
* **3 tables** scenario comes when there is **Many** relationship. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82a85115-70bf-4b16-84ef-9077ba151294)

* Whichever side we will have **total participation**, we will keep the **relationship details** on that side only.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d276bd94-103f-4a72-b97e-0e51be1036a7)

* **Option 2** is better because **license** table has total participation in **relationship**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bf8e840-4a2a-4af9-b2a1-820eaf79d493)

* Keep **two tables** and set **guide_eid** as **Not NULL**.
* So **student** table will be **total participation**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42ad1521-3119-4bcc-9bc7-61c0f27ac416)

* There cannot be any **department** without any managers.
* **Department** table has **total participation**. That's why we are keeping the **relationship** which is **manages** in the **Department** table and also it is a **One to Many** relationship so the **relationship** which is **manages** needs to be in the **Many side** which is the **department** side. [**IMPORTANT**
* Many TO Many -> 3 tables. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a8c7721-16c3-427b-9336-0829ae75d4d6)

* If there is **overlapping** then it makes sense to go for **3 tables**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57326c7c-0af5-46af-bf80-5cc26dc3a0af)

* Relationship.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47a6807f-32e2-45b7-b75c-f8df4001a6c0)

* Overlapping
* Dis-joint.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38e1d08d-fcdf-46cf-a9fb-cec9fd9864d2)

* There can be **multiple dependents**.
* The key can be a **summation** of all the attributes, **Eid Dname and Dbod** which is the **key**.
* **Eid** cannot be the **primary key** in **departments table**.

## Relational Algebra

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/907e3137-701a-4858-b932-c587e8bf8686)

* SQL -> Non-procedural query language
* Relational Algebra -> Procedural query language

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d597c546-d3e4-4ebd-8349-e6446dfc2949)

* Basic Operators.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa929a82-9f45-482b-864b-fd74dd73432d)

* We will get all of the **rows and the columns**. We will get the **whole** table.

### Select

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9f89f31-9215-4ddd-a897-58fb44b15e42)

* Syntax.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bb1a122-194a-4236-9e8b-42cf56c2c8c4)

* Example
* sigma(rating > 8) (sailors)
* Sigma -> For Filtering rows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93019435-b79f-456d-9b70-ddd180c2c742)

* Example 
* Find all sailors who have rating greater than 8 but age less than 25.
* '^' -> AND symbol [**IMPORTANT**]
* 'V' -> OR symbol [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6303554-7229-4110-b366-46a07d717baf)

* Example
* The **select** operation is **commutative**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9de2545-864e-4111-bcd0-136475c3bd75)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55357f53-d456-4bac-b9d0-10af83507af1)

* Question
* Link -> https://gateoverflow.in/743/gate-cse-2001-question-2-25
* Option **C**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb0e42f0-ce97-4a11-8d3f-60b46b85f304)

* Solution.
* **select** filters rows based on the cond
* **Same** as **where clause** in **SQL**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a650117-4b7e-471b-842e-16660f688437)

* Example.
* (Sigma) price >= 15 ^ price <= 30 (Products)

## Project

* The **project** operation results in a set of **distinct tuple** as the project operation removes duplicate tuples.
* It is like **select clause** of SQL.
* It **eliminates** duplicate from tuples/rows. It takes only **distinct** values from tuples/rows.
* We do **project** at the **last/end**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05ff3842-b965-4fad-84eb-cae2afa00d71)

* pie cname (customers)
* We will get **distinct customer names**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3afeaf74-9081-40e7-86ab-c6c5aec6e5ed)

* pie Ename, Salary (Employee) [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2ae8910-9770-4b95-8a7a-35e3e465e920)

* pie Salary (Employee) [Example] [**IMPORTANT**]
* We are getting **distinct salary** which are **3** only

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65a4aaa7-ecba-4044-9d88-38bb5aee56e6)

* pie A, B (R) [Example] [**IMPORTANT**]
* We got **combination** of the **distinct values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a383973-aca4-4cfc-b9c2-9f5f485f1be5)

* **Sequence** of **execution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67dd15ea-f87c-46ca-9b9c-746835d8bc71)

* pie Ename (sigma Dno = 2 ^ salary > 17000 (Employee))  [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12b05b65-1eb0-4de3-aa6e-4c3de8e152c0)

* Yes, fetching the records.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5bded8e-3a39-4441-8c41-479326d0ab52)

* Fetch name and dno of all male employees who are having salary less than 30000. [Example] [**IMPORTANT**]
* pie ename, dno (sigma salary < 30000 ^ sex = 'M' (Employee))

## Set Operations

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/197612ed-7da1-4978-9828-ec83de9eb7ae)

* If we want to use a **set-operator** then we have to keep **two** things in mind:-

1) No. of columns must be **same**.
2) Data Types in the corresponding columns must be **same**.

* No. of columns and data types of corresponding columns must be **same**.
* If the **condition** are met then **any set operation** will work.
* Operations is performed on **tuples/rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ce46eb-51d3-48be-bbf0-91e464eba41a)

* Example. [Table]
* The **whole tuple** needs to be **duplicate** otherwise we will write the **tuple** in the **union**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d598f68b-86c4-4007-a9a4-99b131e28808)

* We got the **distinct age and distinct name** from **E1 union E2**. [Example] [**IMPORTANT**]
* **Relational Algebra(RA)** doesn't remove them automatically but **project** removes them automatically. There is a **difference** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54c5458c-5d4e-415f-9377-35999f9864ee)

* (pie sname (sigma dob = '27-10-1988' (Students))) U (pie ename (sigma salary > 15000 (employees))) [Question] [Example]

### Intersection

* Intersection -> Common Only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8b8291f-bf0b-47ac-b5a8-7e0a91f25cd5)

* Example

### set-difference

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a33be5f8-6730-43e7-a123-ecb30a8078b6)

* E1 - E2 -> * E1 - E2 -> All those tuples of **E1** which are not present in **E2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e570fa1-3ebd-4820-bf12-cfb3f2762c55)

* E2 - E1 -> All those tuples of **E2** which are not present in **E1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/673266d9-9ec3-4242-ad4b-f6eee5df494b)

* **Union and intersection** are commutative and associative. [**IMPORTANT**]
* **Set-difference** is not applicable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/864e01d7-7cf2-4eb6-b242-6cbc9d536bf4)

* **Yes**, they are **equivalent**. [Example] [Question] [**IMPORTANT**]
* **Project** is **distributive** over **union**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0325e796-b2d4-4f7a-a827-325de0faca66)

* **Project** is **not distributive** over **intersection**. [Example] [Question] [**IMPORTANT**]
* Both are **not equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82fa8f90-0895-4427-934d-e817413f6649)

* Solution. [**IMPORTANT**]

## Cartesian Product(Cross product)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd4d0522-4669-4577-87f3-6f483514a6c0)

* Cartesian Product(Cross product) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc317b2a-3fdb-4dc0-80f8-3763bdcca7f4)

* Cartesian Product(Cross product)  -> pie A = D (R X S) [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/094ceb7c-af16-4109-81f7-705bd04b9801)

* Solution. [**IMPORTANT**]

## Joins.

* When we join **two tables** and we filtered out the result based on the condition.
* This is called as **condition or conditional join**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69ecdf5a-0fde-425f-be2d-fa7800ebfabe)

* In **conditional join**, the join condition would be **>=, >, <=, <**.
* There will be **no equal too(=)** con


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af322074-3221-4e29-bc36-1b7b5d898822)

* Equi Join.
* In **Equi join**, we are going to use **=** operator.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a63a919b-da49-4a20-bc50-f36b48979458)

* We will get **two** rows.


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e35a6c14-dc43-4dd9-af94-834830e4a185)

* In **cross product** form.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68c6b02e-d101-4f0f-a92e-9c8573f34534)

* The **common column** which is **cid** has the **same** name. [**IMPORTANT**]

### Summary of Joins

* **Conditional Join** -> <, > [Cannot be equal to(=)]
* **Equi Join** -> =
* **Natural Join** -> No condition. [The tables have the common column with the same name on both the tables]
* In **natural join**, automatically the **common column** join condition is there. We don't have to write it. 
* In **equi join**, we have to write the **common column** join condition. The **name** of the **common column** is **different**.
* [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7985e12-b4e9-4e9f-b6da-ba52c281fbef)

* One Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f9d355c-29b5-4e84-a769-02b8aae70dd6)

* Another Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7492af-fd4c-4066-a0b2-ee872a3a590c)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0659fd5c-78fa-4ad5-a08c-cc8472fe03f7)

* (pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Blue' (Drivers X Cars X Drives))) (Intersection(U)) pie dname (sigma drivers.did = drives.did ^ cars.cid = drives.cid ^ ccolor = 'Black' (Drivers X Cars X Drives))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/517a3b63-40a7-4029-9090-d7dac2d26fd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fac53007-9a7d-4827-965e-f5b75204c289)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db038dcf-d935-4075-b4c5-6332f9eefe11)

* **Left Outer Join** -> We get all values(rows) of the **left table**. [**IMPORTANT**]
* **Right Outer Join** -> We get all values(rows) of the **right table**. [**IMPORTANT**]
* **Full Outer ** -> Extra records of both the tables will come that do not participate in natural join. [**IMPORTANT**]

## Rename Operator

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81f99207-bf0c-4294-a70b-7a63223e100b)

* When we want to **rename** the names of the columns as well as the **table** name.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0176612c-17fe-45fd-ac3b-766c831de768)

* When we want to **rename** the names of the columns only, we are aliasing the table as well but we are not giving a name to the table.
* New instance of **student table** is created. We haven't given a name to the table, we have just renamed the column names.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fe652a7-724c-464d-9bdd-84573defda7b)

* When we want to **rename** the names of a **specific column**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dcbc7fc-d71d-4c59-a386-c1987a8ed15b)

* Both.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cc3e8c9-3b59-4e0a-9b88-d9efab3c1c60)

* Sequential renaming.
* If we don't want to rename all of the **columns** then we have to put **arrows(->)** for the column renaming. Otherwise it will not work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/861cfb03-5618-44fd-88fd-15f19777a557)

* All [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bae51f82-48bd-4910-bdb3-b036f52a814d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b124aea-3b4b-4b57-9a91-4d1bbc99df9a)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/859f5fe9-6fce-459d-94af-1358b4a5cdf7)

* It is conditional join.
* (name of all female students) - (name of all female students who have scored equal or lesser than any male student) -> name of all female students who have scored more marks than all male students.
* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa18e0bb-3af2-42ef-984d-d453ad9cab79)

* It is conditional join.

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7d95318-219f-46f7-b1c8-0140b6371367)

* Question.
* 1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fdcc788-a137-4b65-8415-dc515e8f12d9)

* Solutions [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ee76b12-ffcd-42b2-a9ce-a7cf601b2ce8)

* Set-difference. [Another way]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b2ad916-21b5-469b-adf5-8fa443d59042)

* Question.
* 1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f06d4091-1f6c-4e9d-9d5e-63e19ed53cd3)

* Solutions. 
* As range is mentioned, so, it will be **inclusive** only. [**IMPORTANT**]
* If supplier details needed, then use suppliers relations. We have to do **join** then.
* We are writing **pie suppliername, address, city(project)** because we only want the **supplier details**. If we don't write **pie(project)**, then we will get the details of **products** as well which we don't want.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/524c97f3-331f-4696-9e1c-19d70ea4e10f)

* Solutions.

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

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9be66525-0c30-47bf-99f4-7f77d489555e)

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f97a244-0885-4e46-9439-5b5ace6a84b6)

* We want that **pid** which is in-front of all the **prodid**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b645c9bb-3260-4082-a6ee-ef6a1900e002)

* Question.
* https://gateoverflow.in/118329/gate-cse-2017-set-1-question-46

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ec4bdf1-0d0f-4a5b-9240-59ceeacbaf07)

* Solution
* Answer -> 4
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e79d065e-cedb-4383-b85e-ac20bcb90fe3)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d55baa3-4178-4bac-991a-4ad60b0922c9)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e79d065e-cedb-4383-b85e-ac20bcb90fe3)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba987728-0bda-4dc4-b8d1-f7bab263c4b3)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0c32046-1855-4aca-a01b-7994d0a1a572)

* Yes.
* CarID and Date should be **same** value with the **Cid**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5492a93a-26d8-474c-8ade-ff4751fbf834)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66a82715-dba9-4d8f-b25d-c03aeb317ea6)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bc71aaf-082a-49f8-b9b7-ab9d4af51435)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc10e1b0-2496-4b08-a761-fe976bf3c163)

* The condition would be **True** for one row only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/743e696e-56fd-47d5-b4e7-2b0a7242a241)

* Same Only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73904c6e-516c-48fc-9147-d9120ac2823f)

* Will work.

## trc-drc 

* RA -> Relational Calculus.
* Predicate Logic(P)
* Domain -> Concentration on Attributes

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
* ^ -> AND
* It is like **where** clause in SQL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaf428de-2dd6-4da5-96e2-833366cd42d7)

* Find firstname of all shopkeepers who are having rating between 7 to 10 [Question]
* {t.firstname | t belongs to Shopkeeper ^ t.rating >= 7 ^ t.rating <= 10} [Answer]
* TRC(Tuple Relational Calculus) eliminates duplicate. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77eb0e29-b474-48b2-b80e-7d954eb9d202)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5cfe3b0-a084-4f51-a2f8-916fbc10b4c6)

* Both give the **same output** but the writing is in **different formats**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf133a69-fe8c-4efa-ad7d-e6e0bb3239de)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e1847f4-b192-4387-8756-ae18daa54838)

* Empty set because there is no any attribute age in relation students.

## Quantifiers

* Existential -> There exists a tuple(t), which belongs to a relation and satisfies predicate(p).
* Universal -> All tuples(t) satisfy the predicate, P(t) then only we can bring the tuples, otherwise not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2b33b0e-5bbe-4050-9928-46f7dddf6d84)

* Quantifiers [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/321d38ac-4c91-4518-afc6-a97d61172802)

* For **two table**. [**IMPORTANT**] [Example]
* {t | t belongs to students ^ t.Gender = 'Female' ^ there exists s {s belongs to Department ^ s.Dname = 'CS' ^ S.Dno = t.Dno}}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/837f7a72-1a90-4c82-988b-9aa786945228)

* Explanation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bbaa7c9-ab28-49b0-be82-c750cd40c665)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cd05c04-13a7-4789-a70d-2a66fea7ecf2)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9bc853a-de3a-4cf1-b087-d437d146aa18)

* Solution. [**IMPORTANT**]
* {t.Dname | t belongs to Department ^ there does not exist(~) S {S belongs to Students ^ S.Gender = 'Male' ^ S.Dno = t.Dno}}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5fb8937-178b-4035-b3da-ce045fe69b3a)

* Symbols for AND, OR and NOT.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dea1f887-ec5d-439b-8c03-d130ead2ec95)

* NOT Symbols

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f1eceb3-df26-468b-88fe-55f7ab70330c)

* Another Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/519b409f-53f4-4b2f-a9d8-62899f083385)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd52733d-73dc-48db-b53d-d77056d5dceb)

* Explanation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/638a79c4-7e6c-4bb6-9578-2db22686ef0a)

* Question.
* 3 tables.
* {t.cmodel | t belongs to Cars ^ there exists D {D belongs to Drives ^ D.cid = t.cid ^ there exists E {E belongs to Drivers ^ E.dname = 'Mitchell' ^ E.did = D.did}}} [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0faf45e5-9fbc-41ac-8c3f-0b3eebab0d1b)

* In general, when we have to do **joins**, like above, then **there exists** is fine. It will work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f00f1cd-6870-4856-9001-9683975b0138)

* Whichever is asked first in the question that table comes first. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/089695a7-961f-40cf-b4c3-ceb37310c218)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e856a8b-f90f-4e82-b9b0-6a1650df8b4d)

* Another Way. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59c15282-9bec-4722-9212-759dccdfc22d)

* Solution. [Another Way]
* {t.sname | t belongs to Student ^ there exists E {E belongs to Enrolled ^ E.rno = t.rno ^ E.duration= 2023 ^ there exists C {C belongs to Courses ^ C.cname = 'DBMS' ^ C.cno = E.cno}}}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c00a0e13-68a6-4465-974b-cb7ac8f98182)

* Here, we have to write the **common table** first. [Example]

## Tuple Variable

* Bound -> Where we added **quantifiers**. Used with **Quantifiers**.
* Free -> No **quantifiers**. Not quantified.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53b92e7f-0769-40ae-b2f4-8cad07495499)

* **There Exists** -> The combination between the rows should match. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77ec15f6-2348-4175-9eb6-b78413bd6e28)

* **For all** -> There should be combination with all the rows on the right hand side, with the single row on the left side. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/852edf4c-8219-4179-9f6f-dbf4dda1e8d3)

* {<r,f,l,m> | <r,f,l,m> belongs to Students}
* **First part\left side** of the **|** bar is what we want.
* **Second part\Right side** of the **|** bar is the **conditions**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9693ae68-8a49-4e6f-a1b0-dd71f105c6cf)

* Similar to select * from students.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a997153-b8b4-4b30-ab89-bad9f6e29ae2)

* We just want the **first name** of all students.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14c3561a-325f-45ab-9899-048cc59b0ac9)

* We want the **first name** of those students who have **marks(m) greater than 90**.  [Example] [**IMPORTANT**]
* The table name we have to write always. All of the columns names we will also write. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6530bb64-65ff-498e-9836-8e15e3911c69)

* Yes.
* It shows the particular attribute. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209c8b19-7ea8-4124-bf51-3a64de6e80c9)

* We can write the **variable names** same as the **column names**. Just remember to **maintain** the sequence of the columns in the table. They should come in **sequence**. [**IMPORTANT**]
* Name of all such drivers who are having rating > 8 and dob = '27-10-1988'
* {<dn> | <d, dn, r, dob> belongs to Drivers ^ <r> > 8 ^ <dob> = '27-10-1988'}

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209c8b19-7ea8-4124-bf51-3a64de6e80c9)

* We can write the **variable names** same as the **column names**. Just remember to **maintain** the sequence of the columns in the table. They should come in **sequence**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c426a7d-84bb-4c1e-84c3-8283d8952eee)

* [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5020ee02-6713-4b76-abb8-a96a10191a44)

* If we have one/single value with **equal too condition**  then we can **replace** the **domain variable** with that **number/value**. [Another Way] [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d81592c-1587-4fe6-95c5-60d0ce5143f7)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec8d4260-d9be-4e51-b9be-6354c4cb09a7)

* Both are **same** and they work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b59072a9-69fb-468c-a01e-9e885418d424)

* Example [Solution] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2542afe3-ac34-4f3e-84de-124c4a2c350d)

* Many to many participation constraint [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4a272a3-8dfd-4d54-a79d-f6721b1382f0)

* We cannot control the **participation constraint** in **many to many**.
* We can control the **participation constraint** in **one to many, many to one and one to one**.

## Transaction

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc57e29b-98af-4cf7-aa3a-2f92a75c5dd8)

* Sequence of **DB access operations** is called as **transactions**.

## States of transactions

* **Commit** -> To save the state of the transactions.
* **Rollback** -> Revert the database state to that state where transaction has not even started. It will take us back to the **last commit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/514becc6-3ff5-4a56-ab13-e6ba62e0291e)

* As there was **rollback** at the end, so we **reverted back** to the **last committed value of 'x'** which is **5** that's why we got **x = 5**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ebf7528-2e79-4ff0-97fe-8fc23159f374)

* States of transactions. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d13d15f-0bb4-48cb-b3d2-b48a3c442320)

* If a transaction has **failed** then it has to be **rollback**. It is not the job of the users to **rollback** the transaction. It is the job of **DBMS**.
* The **rollback** of the transaction is done by **DBMS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f16c111a-cc58-479a-bc6f-e2df07eee297)

* If the **commit** was successful or the **transactions** were committed.

## Schedule

* Collection of multiple concurrent transactions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f437bb4-6de3-42f3-8755-481617b9451d)

* This is **Parallel** work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab3f88b-46ef-4e70-9ea3-034fc6fa6b5e)

*  This is **Concurrency** work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcb305cc-f3c8-415b-ac6f-0f4d5bf73dd8)

* Parallel run. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67aa6bdf-25d9-4b8d-975d-3bee752b6ec1)

* Concurrent run. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0d33718-10cd-457d-a806-c8a21568b00e)

* Parallel and concurrent run. [Example] [**IMPORTANT**]

## ACID property

* ACID -> Atomicity Consistency Isolation Durability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/716bc833-bb6a-4ff3-bf68-22a7a5b1ec84)

* Atomicity -> All or none. Either it will run fully or it will not run.
* Consistency -> Expected output/result from DB.
* Isolation -> The concurrent transactions should run in such a way that they provide final result same as they were running like one after another.
* Durability -> We should be able to see the results for a long period of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f935571a-2e76-4761-a330-6a43a6c7da1b)

* Why Concurrency [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f288361-9ddd-4daa-b30f-4e8fa8cda159)

* Problems with concurrency [**IMPORTANT**]

## Dirty Read or Temporary Update Problem [**VERY VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed93224b-27ff-4153-8bc5-6a9fa3256181)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dce38738-9a4a-44d5-bc5f-d8150c5832ff)

* Reading someone's dirty written value. [**IMPORTANT**]

## Phantom Read Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4253d4e-0f66-40da-af00-8bb1d5bcba12)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a96a3174-89fb-49e7-a1a8-9f2bc583750c)

* Wanted to read again but the value was gone. [**IMPORTANT**]

## Unrepeatable Read Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e5f7868-a2c7-4d47-855f-0067a062c25f)

* When **reading** two times, we got the **old value** once and we got the **new value** the next time. [**IMPORTANT**]

## Lost Update Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed7b0c8d-7fb9-477d-bbed-0e6902174be1)

* **X= 7** is **lost**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ccc7537-f4d1-4635-86c8-7ce19ffc0b74)

* Some transaction **directly** writes and does nothing else, nor reading or updating anything then it is called as **blind write**. [**IMPORTANT**]

## Good VS Bad schedule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0c9414d-ba51-4733-b93a-79856678c7bf)

* Good schedule -> Final result as expected.
* Bad schedule -> Final result not as expected.

## Serial VS Non-Serial Schedule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77882efb-5eeb-438d-8d18-d1bf047b1f68)

* Serial -> Sequential System.
* Serial -> First a whole transaction runs then another whole transaction runs. We are not talking about which transaction will run first. Anyone transaction's whole statements are completely run then another transaction's whole statements are completely run.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea1486fb-1531-403e-ad52-0e11ca0d7615)

* Non-Serial Schedule -> Also called as **concurrent schedule**. 
* They run in **interleaving** manner. There is no manner/way in which the scheduler runs, anyone of the statements can be run at anytime. We got no idea how the statements are run.

## Serializable Schedule

* Serializable schedule is a schedule which is **concurrent** but it's final result comes in the way of **serial schedule**.
* A concurrent schedule which can provide final output as a serial schedule is called as serializable schedule.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24ec8800-f183-4629-b058-8dc6ce920f2a)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30fef9aa-c29d-4b2b-9f01-d5afdb55cfae)

* Serial Schedule, **run T1 then T2**.
* We are getting the **same output** as a **serial schedule**. So, it is working like a **serial schedule**.
* Serial Schedule, **run T2 then T1**.
* So, it is a **serializable schedule**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b0d7702-5653-4551-bce1-2415840298cd)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b646caa-da52-4dd8-b6ee-e3b5d2bedd6e)

* T1 then T2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cf1204f-0779-4a19-b4ec-089eef80ddf3)

* T2 then T1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df3222bc-4b33-45e2-89e7-41d949c8bc83)

* It is **serializable schedule**.
* As the **concurrent schedule's output** is matching with **one of the serial schedule** outputs which is **T1 then T2**. That's why we can say that the **above** is a **serializable schedule**.

* If it(concurrent schedule) matches with **anyone of the serial schedule output** then it is a **serializable schedule**. [**IMPORTANT**]

* Serializability -> Method to prove that a **concurrent schedule** is **serializable**.

* **Types**:-

1) Conflict Serializability
2) View Serializability

## Conflict Serializability

* Find conflicts and then based on it prove that a given schedule is conflict serializable or not.

### Conflict

* Two(2) database access statements are conflict statements if and only if all of the following conditions are satisfied.

1) Both statements should be in **2 different transactions**.
2) Both statements should access same data item.
3) One of them should be a **write operation**.

* There will be **no conflict** between **two read operations**, which is **Read to Read** operation.
* **Conflict** will be between **Read to Write**, **Write to Read** and **Write to Write**. [**IMPORTANT**]
* When **checking for conflicts**, we should be checking the **below/bottom** statements than the **above** statements compared to the **current statement**.  [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdeb39be-320d-4f81-845b-93537fcb4c54)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cec40dfa-7e1b-4d82-a8c8-4fa2a4c62ca6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/264cfabb-46d5-4bff-b8ba-57f0938f83fb)

* 2 conflicts we got.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8777db71-5bb1-4d31-b3ee-ded82cd7df32)

* 2 conflicts we got.
* R(X) -> W(X)
* R(Z) -> W(Z)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d777812d-bf27-4f5f-82c7-fcd6b478b50b)

* Example.

## Conflict Equivalent Schedules

* **Different schedules** where we have **same type of conflicts** on the same data items, same sequence.
* **Two schedules** having **same conflicts** in the same order. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7996649e-24c1-495a-95fb-f6b8fdde4b4e)

* **S1 and S2** are **Conflict Equivalent Schedules**. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f642104-3f40-40f3-beb3-6cab9573014b)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b08c685d-d736-4e98-88b4-e86b59ff0364)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2713486d-4a7f-4891-98b3-8c3e2975b447)

* Not **Conflict Equivalent schedules**. [Example] [**IMPORTANT**]

## Conflict Serializability

* Given schedule 'S' is conflict serializable if it is conflict equivalent to  S' .
* Where S' is a **serial schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a140167d-831c-44cd-bba3-dc215b7ba60c)

* Precedence Graph -> Directed Graph.
* Vertices/nodes -> Transactions
* Edges -> Conflicts.
* After drawing the **graph**, check if it has **cycles** or not.
* **Cycle** -> Started from an edge and followed vertices and was able to return to the starting edge. Then it is a **cycle**.
* If **cycle** present in graph -> Not conflict serializable [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37d7141d-94aa-4dea-a700-1319f915b7d8)

* Cycle present -> Not Conflict Serializable.
* Solution [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ef16b10-3669-4515-b34e-554908dd355c)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/564462f1-4ad5-4735-b299-34804a46bf6e)

* As there is **no cycle** so it is **conflict serializable**, so we have to tell the **sequence** also. [Example]
* Sequence -> T1 -> T3 -> T2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b8cf1b2-dd1d-4bd4-9349-267250b44a5f)

* R/W -> Read/ Write
* Number -> Transaction Number
* A, B, C -> Data Item

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d37bc5c6-f508-49dc-b8e5-8819086cd72c)

* Solution.
* As there is **no cycle** so it is **conflict serializable** and we have to write the **serializability sequence**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08a9aff4-0899-4dde-96cf-9e2d2280ecd5)

* Yes [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/815aa2d7-3952-43e1-b234-a3e1b1609cbf)

* Wherever **commit** comes after that we don't have to check.
* No checking after commit for **conflict**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1405bdd4-53b2-4704-a0fb-15660c2cfabc)

* No Cycle, so conflict serializable. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41eb7dd6-adc4-4568-83dc-f5cd2bb27bbc)

* Doubt. [Solved]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9c3bc02-7065-4193-b749-f82dc98b273f)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05ab65dd-3448-4254-abf4-0049420cd3ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f81d5f7-fb41-4df0-a77d-f80da75babaf)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/764cec61-de73-48e4-9c4e-70a21bd130dd)

* Answers. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72812e13-502c-45f4-a145-c1271daa70b2)

* Question.
* Link -> https://gateoverflow.in/2063/gate-cse-2014-set-3-question-29

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da04876f-7284-43e4-b222-1590672da92d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fa912f3-f7e3-4bbe-af4f-e838d8d50182)

* Solution.
* Option **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3247a5c2-610c-4573-93d1-86834efe9256)

* Question.
* Link -> https://gateoverflow.in/357419/gate-cse-2021-set-1-question-32

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6419c674-6949-434e-97d8-188117140247)

* Solution.

## View Serializability

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5da40bec-7708-4e51-8510-17acde93c426)

* There are **many good schedules** which we couldn't identify with the help of **conflict serializability**.

### View Equivalence

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30a8f50e-4e61-4c84-a833-15308ea5b7b9)

1) Who is reading first from database

> **T1** is reading the **X** value from **database**.

* **T2** is reading the **written value of 'X' by T1**. It is not reading the original value of **X** from database.
* Who is reading first from database?

> **T1**.

* Who is reading first from database? -> Who is directly reading the value of **X** from the database before any other **transaction** writes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41f5db02-07c8-4bd8-998a-6a568d642538)

* So according to the **first rule**, we will say that **T1 and T2** transactions have read first the value of **X** from the database. It is because **T2** has not used **W(X)** which means that the value of **X** hasn't been **updated** from the original value.

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

* **T1** has written last to **X**. [**VERY IMPORTANT**] [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8904395d-f357-429e-a11e-f486fff78edb)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77a20523-a1ef-4382-a93a-f89476314760)

* **View Equivalent** -> When both schedules S1, S2 are following all the 3 points for all data items(Above 3 points). [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57ebd05b-df18-4e5b-9a7d-a673339dc43b)

* We have to check if they are **view equivalent** or not. [Question] [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d118a3d3-6eaf-4df5-b933-1bddc746fe84)

* Not **View equivalent**. [Solution]
* S1:-

1) T1 reads X first from DB

* S2:-

1) T1 and T2 reads X first from DB

> As they are **not the same**. So it is **not view equivalent**.

* If anyone of the **3 conditions** are violated then it is **not view equivalent**.
* All of the **3 conditions** are to be **matched/satisfied** for it to be **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44d9acfd-3d20-44be-9ddf-48d34260ad3a)

* Question.

1) T2 and T3
2) T1
3) T2

* All of the **3 conditions** are to be **matched/satisfied**. [**IMPORTANT**]
* So **S1 and S2** are **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/217f8f9d-b407-4198-9992-3284560d7e87)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2d269be-a89b-4a97-9066-215320b6a9dc)

* Question.
* It is **view equivalent**.
1) R(X) of T1
2) W(X) of T2
3) W(Z) of T3.  [Solution]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd8b7c97-3572-41f1-a815-aca1b62b2e43)

* Yes, we have to check **9 things**.

### View Serializability

* A schedule is called as **view serializable** if it is view equivalent to any serial schedule. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10f71e16-2a74-4b65-b9dc-efed9ee2c04f)

* Question. [Example]
* **T1 and T3** cannot come after **T4**.
* **T2** should come after **T1**. **T2** has to come **immediately after T1** as there is **W(X)** at **T(3)**.
* Otherwise **T2** will read **X** from **T3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f282c05b-7faa-43fa-aab0-998225cf6a0b)

* We have to make a **serial schedule** of **T3, T1, T2 and T4** and check the **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/655eb2f0-1bd2-4b52-8c0f-c49c94632992)

* Serial schedule.
* Yes it is **view equivalent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a14d8bc2-e645-47a1-a2fb-63f9009d3df9)

* It is **view serializable**.
* The **given schedule** should be **view equivalent** to **one of the serial schedules**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0f4df80-d46f-4ac2-818a-a31399181c85)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b1c8209-1b45-410d-b269-36fbea8a8755)

* We are not able to make a **serial schedule** to check **view equivalent**.
* So it is **not view serializable**. [Example] [**IMPORTANT**]

## Role of abort or rollback

* If **abort or rollback** is written in a **transaction** then we will **not include** that **transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd7ab5bb-e9f2-409c-a8cd-9399c09f0ed4)

* Do not include **Transaction, T1** above. [Example]
* Do not include transaction which are having **abort or rollback**.
* In the given example **T2 and T3** transactions are **only checked**.
* Given schedule is **view serializable**.
* Sequence:-
* T2 -> T3 [Correct]
* T3 -> T2 [Wrong]
* It is because **final/last write** is **T3** and not **T2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/534bdc6f-754a-4bfe-a22c-6e4437a5251d)

* Solution.
* We have proved that a **given schedule** is **view serializable** then it is a **good schedule**.
* Not all **good schedule** are **view serializable**.
* All **good schedule** are **view serializable**?

> **NO**.

* All **view serializable** are **conflict serializable**?

> **NO**.

* All **conflict serializable** are **view serializable**?

> **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d57f4c81-693f-435e-bd9f-5f89f94401b5)

* Diagram [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec46d2d4-0637-4f66-b01d-bab7a2e922ee)

* Not conflict serializable but view serializable. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f5213c6-64fe-456c-b24c-e00bb92bafa6)

* No. of nodes **equals to** the **no. of transactions**.
* **Runtime complexity** to **find the cycle** -> n + |E| -> n ^ 2 [Approx].
* No. of nodes = no. of transactions = n
* No. of edges(E)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6fbf052-922a-48b6-85c7-b85749557de9)

* To find **Conflict Serializability**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caf9c8d4-d14c-4d8e-8662-647be32317bf)

* View Serializability
* Time(K)
* No. of nodes(n)
* **Runtime complexity** to **find the cycle** -> O(k * n!)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0b090ac-5528-4128-8852-935e264a2361)

* Conflict and View Serializability **difference**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8bb53c6-a5f6-47f3-855b-0cc9882078f2)

* NP hard problem.

## Recoverability

* **Recoverable Schedule** -> When no any committed transactions should be rolled back.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d5b785b-7d70-4376-b638-cfa73de0fb5a)

* Example
* Not recoverable schedule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4f890cf-aa85-46fb-af10-f86f014f0f9b)

* If **T1** failed just before **commit** then it is not **recoverable**.
* If there is a possibility of **rolling back a committed** transaction, if **yes**, then it is **non-recoverable schedule**. [**IMPORTANT**]
* It is **recoverable schedule** only when for any case/condition and for any transaction that fails then also we don't have to **rollback any committed** transactions. [**IMPORTANT**]
* To make **recoverable schedule**, sequence of commits, should be same as sequence of reading dirty values. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b78debc-a8f0-4dff-a3c6-eca477df84fc)

* Recoverable schedule example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b8ee324-f7de-4a84-93b1-864cfc9d30de)

* Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67b2ef56-c5c4-4a18-8979-9e15928f3df1)

* Recoverable schedule example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73bc4806-e3e7-4586-b638-6a94051aff57)

* Types.

### Cascading Recoverable Rollback

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1b9fceb-c8c7-4522-b30d-2e345cdad6f8)

* [**IMPORTANT**] [Example]

### Cascadeless Recoverable Rollback

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60c24442-c4ba-47c2-9240-2f96b0716d8e)

* Cascadeless Recoverable Rollback [Example]
* When a transaction fails only that transaction will be rolled-back. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7dbe427b-9a4f-4b86-b26a-a7d1cc4c22a0)

* Exactly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a8b1334-a34d-4920-9168-6f515da06e93)

* Question. [Example]
* Not recoverable. It is because **T3** transaction committed before than **T1 and T2** and if **T1 or T2** transactions **fail** before their respective **commits** we have to **rollback** T3 as well which is a **committed transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2245843f-eecf-46be-8efe-cb4c7acac8f9)

* Then **T3** transaction will be required to **rollback** and as **T3** transaction is a **committed** transaction and we have to **rollback** a committed transaction then it is **not-recoverable**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73ec973c-810e-43e6-beef-2279b5c5e6dc)

* Question. [Example]
* Recoverable schedule.
* Rollback -> Ignore that transaction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8aea5a17-c5e8-4e34-bf57-0dca068066e4)

* Cascadeless Recoverable schedule. [Example]

### Strict Recoverable Rollback 

* Strict Recoverable Rollback -> The **second transaction** can **dirty read or write** only after the **commit** of the **first transaction**. [**IMPORTANT**]
* Dirty read and write can be done in another transaction only after commit of first transaction. [**IMPORTANT**]
* **Cascadeless recoverable schedule** is also included in **Strict Recoverable Rollback**.
* If it is a **Strict Recoverable schedule** then it is also a **Cascadeless recoverable schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/968ef928-4b8d-405c-8389-fd251ad56855)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8eda0bbe-f628-4aaf-9b02-98f7057d53fd)

* Recoverable Schedules.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34085acf-3875-4f13-b600-c8df5d40c3e1)

* Recoverability definition -> It is dependent on **dirty read**.
* **Dirty read** -> The upper/ before transaction has **written** and the **next transaction** has **read** the value before it could be **committed**.
* If we include **write on write** then it becomes **strict recoverable schedule**. We will not do **write on write, read on write and write on read**, until the upper transaction is committed.

* In **strict recoverable schedule** -> If the upper/ before transaction has **read** then the **next transcation** can only **read** and cannot **write**. If the upper/ before transaction has **written** then the **next transcation** cannot do either **read** or **write** unless it is **committed**.
* The **conflict serializability** method we had cannot be used **practically** because for **practical** implementation we have to know the **future transaction statements** and the sequence of run of the transactions, which is **not possible**.
* **Conflict and view serializability** is not implemented practically.

## Locking Protocols

### Lock

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58acd41e-5294-4467-ad18-2b76bc331c6d)

* We can put **locks** on **different data items** at the **same time**.
* One lock for **each data item**.
* Lock '0' -> Available
* Lock '1' -> not-available.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d60f685-41e1-48e0-b07c-9128fdb06426)

* It depends on the **operation**.
* If it is **both read-read** then there is **no problem**.
* If on a **database item**, the **transaction** wants to do **only read** then it will take **shared lock**. If the **transaction** wants to do **write/read both** then it will take **exclusive lock**. [**IMPORTANT**]
* There is **no problem** with **read operation**.
* **Shared Lock** -> For only read operations
* **Exclusive lock** -> For read/write operations both.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d988cd5-0333-4d15-b785-a9f6f05d1866)

* Compatibility. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6ab92a8-9d74-4343-b901-69390ce7a2f8)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3aac6c7d-2f0c-425a-8758-b3985ddc11a3)

* Example.
* Lock_Ex(X) -> It is allowed only when **T1** unlocks **X**.
* **Shared lock** doesn't have **write** permissions. **Shared lock** has to be **updated** to an **exclusive lock** for **write operations**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33c05a59-9397-4a09-8f23-0891d936c7cf)

* **0** -> Available, Lock not taken.
* **1** -> Not Available, Lock have been taken.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec37dfa8-ea42-46ef-9990-2d70564523a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd612802-23fb-4984-9369-80985d9093c4)

* Example.

## Busy waiting 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9220dcc5-a2b2-4995-9f15-b71de6abd951)

* Lock: Busy waiting [Example]
* **Busy waiting** for **exclusive lock** on **X**.
* We **blocked** ourselves. When the **lock** is available, we will be informed and we can now take **lock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af2fad11-8b54-41a0-830d-e794c416cae7)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/811c733d-02ef-4743-afc7-4faee06c9ccd)

* We didn't get **exclusive lock** because there was already **shared lock** taken on **X** by **T1**.
* **T2** is in **busy waiting** state.
* After the **shared lock** taken on **X** by **T1** was removed then the **exclusive lock** is taken on **X** by **T2**.
* **Busy waiting** -> The transaction will run continuously and it will try to acquire the **lock**. It will not be able to **acquire the lock** and it will keep trying again and again. [**IMPORTANT**]
* The solution of **busy waiting** -> Whichever transaction wants to take a **lock** which is **not available** then the transaction is **blocked** and it falls under **blocked transactions**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38468964-9f4f-49e4-aea4-2dce7fbc64b9)

* After sometime, **T1** has unlocked the **shared lock** taken on **X**. As soon as it(X) is available, **T2** transaction is **unblocked**. **T2** transaction has come back and the two statements of **T2** are run.
* **T2** transaction didn't do any **busy waiting**.
* **Advantage of removing busy waiting** -> The unnecessary usage of resources of DBMS has been **saved**.
* Time is **saved**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3150d46a-c596-4bd0-9796-9cde14130ea4)

* On the **same data item**, we can put **multiple shared locks**?

> **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4790672d-bf5f-4572-9abb-526e64f50a30)

* **W(X)** on **T2** tried to take **exclusive lock** on **X** but it shouldn't take because **T1** has already taken a **shared lock** on **X**.
* So, the **transaction, T2** is in **blocked state**.
* **T3** has **R(X)** and it tries to take **shared lock** on **X**. **T3** is successful in taking **shared lock** on **X** even though there is a **shared lock** already taken by **T1** on **X**.
* It is because **shared locks** can be taken on the **same data item**, multiple times. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7435c96c-6a03-43a0-9a0d-27fec87c8c81)

* **T1** has released it's **shared lock** on **X** and because of that **T3's shared lock on X** is also gone. Now, **T2** is **unblocked** and **T2** can take **exclusive lock** on **X** now. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13e29cfe-115c-413a-8744-43dea4af987c)

* So now, **T3** has **shared lock** on **X** and **T2** has **exclusive lock** on **X**.
* This is a **problem**.
* If **two shared locks** are taken on the **same data item** then **no. of unlocks** should be the **same** as the **no. of locks** taken. As in here, **two shared locks**, so **two unlocks** should be there before **T2** can take **exclusive lock** on **X**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7125b61-8136-4fe8-8fb2-9af0c5a37f56)

* Blocked transactions is unblocked only when **count** becomes **zero(0)** for **multiple shared locks**.
* Here, when a new transactions keep asking for shared locks on **X**, then **T2** may **starve**. [**IMPORTANT**]
* There is a **solution** for **starvation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ad046e0-f961-4cb1-9879-75fb82677f54)

* When **T4** tries to take **shared lock** on **X**, then there is a **condition check** that happens. If no any blocked transaction on **X** then allowed otherwise blocked.
* We are checking that there is any transactions that are in **blocked state** due to **exclusive locks** that are taken on **X**. If so then **shared lock** cannot be taken and the transaction trying to take **shared lock** will be **blocked** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20fe630c-801b-4470-b114-4c5f2b379d34)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f410fb49-9d68-4d1b-8526-f2a3733e7772)

* Upgrade -> The **shared lock** taken **X** and now that **shared lock** has been **upgraded** to **exclusive locks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3870a664-dfcd-46b0-802a-0f45ed14245b)

* Downgrade.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8283dc64-36e0-4ed5-85a1-43cbc1c90b74)

* Rules to **acquiring the lock**:-

### Locking protocols

* 2-phase locking protocol(2PL)

1) Basic 2PL
2) Strict 2PL
3) Rigorous 2PL
4) Conservative 2PL

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3071972-178b-49f7-b446-0d69e2b7a918)

* Working.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cdf18b8-4030-42d0-a971-4171f791aa50)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/801252dc-adc7-46ba-aa26-b94e7e7ef5b5)

* **Correct** according to **basic 2PL**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61f4371d-1b8d-473a-8539-c8c5bf075155)

* **Lock_Ex(Z)** is not allowed after **unlock**. [Example]
* We can take **locks** at anytime but after **unlock** we cannot take **any locks**. This is the **only condition**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49f3a364-c9f9-4c6e-8cf4-dfe78a2bc0b1)

* **Correct** according to **basic 2PL**. [Example]
* **Upgrade** of the locks happen within the **same transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1979a7f-2749-4861-bb90-fc396918abeb)

* The **given schedule** didn't run as it is because of **basic 2PL**, the style of the run has been changed. [**IMPORTANT**]
* So, we will say that the **given schedule** is not allowed under **2PL**.
* Given schedule is not allowed under **basic 2PL** because it does not run same as given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2dff856-f1e2-47b0-9285-1dea585eae6a)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/400effd1-36cd-4a70-890e-9e54d4e285c5)

* Example 
* Every schedule which is allowed under **basic 2PL**, is **conflict serializable** also. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/625f071e-c843-41d6-a245-79bccde4a195)

* Not serializable.
* Whenever needed **write 'lock'** and once we have **written 'unlock'** then we cannot **write 'lock'** again.
* We will acquire all the **locks at the start** and when we start releasing the locks then we will only release the locks and nothing else, we cannot take anymore **locks** after an **unlock** is done.

* After **unlock**, we cannot take any **locks**. It is for **any data-item**.
* Take all of the **locks possible** at once and when we started **unlocking** then we will only do **unlocking**, no more taking **locks**. [**IMPORTANT**]
* Once we start **unlocks**, we cannot do **any locks** on **any data-items**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d139252-3b01-41b9-90c0-f9fe365a1acb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cae0086c-256c-4936-8f13-1258bc4e5341)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79c1525b-7a9e-4c34-8bbc-d8c232746e17)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c712ebb4-d96e-4e96-b3ba-351c99d6a78a)

* **lock(Z)** is not allowed after **unlock**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/422b4317-00d5-4cfa-9405-0bb4162c873d)

* This will work **no problem**. **T2** will run after **T1** has unlocked **X**.
* **T2** was put in **blocked state**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b442ad2-c8c5-42cb-ae3f-bd523fef64d6)

* In the **given schedule**, when we applied **basic 2PL protocol**, the schedule didn't **run as it is**. It run like **below(Run actually like**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dad83f03-0f32-4a6e-962f-464a9f35e9bc)

* In the **given schedule**, it didn't **run as it is** because when we applied **basic 2PL protocol**, the style of it's run **is changed**, then we will say that the **given schedule** is not allowed under **basic 2PL protocol**
* The **sequence of run** was **changed** due to application of **basic 2PL protocol**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9c13ee2-34df-4508-9e2d-4c19dfc9f1a4)

* Not Allowed under **2PL**.
* In **one transaction**, we cannot take **lock** after an **unlock**. [**IMPORTANT**]
* But we can take **lock** in the **other transaction** though.
* We **unlock(X)** in **T1** and we did **lock_Ex(X)** which was in **T2** transaction. So we are taking **lock** after an **unlock(X)** but in a **different transaction(T2)**, so **no problem** here. [**IMPORTANT**]
* **Unlock** keh badh **lock** cannot happen in the **same/single transaction**. **Single transaction** will not do that. [**IMPORTANT**]
* It is **possible** in **different transactions**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/913744fd-b5a6-45e0-b33a-c7d3a8891bc0)

* Allowed under **2PL**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44c085a6-d7cb-4b76-9019-6c86bf9f618c)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d14cb68c-ca84-4255-a623-ae941bda355d)

* Another Name [Growing and Shrinking]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d5b36f4-11bf-4fde-a955-a15505a69b43)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ae31491-7c8d-43e4-8c38-6d341fdd6d8c)

* Won't be allowed under **Basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a63ac1f-af46-423c-b4d3-b6745d9f5d76)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c429e055-6808-4093-b785-5ea266827349)

* Won't be allowed under **Basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb500419-7725-4dd5-b9fb-958b2f09c300)

* We will run **unlock(X) and unlock(Y)** at **10:15AM** so that we can do **lock(Y)** in **T3**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d1ccfa7-b8a4-4444-8e69-fb2be3e250ed)

* Won't be allowed under **basic 2PL**. [Example]
* **T1's released lock** can be used by **T2**, **YES**.
* **T2's released lock** can be used by **T3**, **YES**.
* **T3's released lock** can be used by **T1**, **NO**, it is not possible.
* It is because when **T3 releases it's lock**, then **T1** cannot take **lock**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19989d43-aa7a-4fea-92c4-f7a12d68ebaf)

* Yes.
* The lock **T1** has taken on and **T2** wants to use that then after **T1's unlock**, **T2** can use it.
* After **T2's unlock***, **T3** can use it.
* **T3's released lock** cannot be used by **T1 and T2** because we cannot do **locking later** after **unlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/231eb04b-ea3f-48e7-9180-326d12b81a78)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11f29fdf-4f87-4201-8908-08b0470fd970)

* So there is **no chance of 'cycle'** when we apply **basic 2PL**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f77667b6-b6a7-49df-a6d1-adde4729946d)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09135e9b-1c78-4d7f-ae74-193f38d66375)

* **lock(Z)** in **T3** is **not working** because there is already a **lock(Z)** in **T1**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2406ecc4-d31d-49ea-8cd7-e980dea177fe)

* There is **no cycle** of **conflict** and as there is **no cycle**, so it is **conflict serializable**.
* If allowed in **basic 2PL** then it is  **conflict serializable** as well. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bab06c38-97c5-48da-94d0-0cd479c34f28)

* Yes.
* We cannot implement **conflict serializability** practically.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3988416-34b7-4813-bf39-4bef57d9c9b8)

* Not allowed under **2PL**. [Question]
* Not allowed in **2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9802808-2240-4134-8b3e-368231fe1c8e)

* **Deadlock**. [Explanation] [Solution]
* Suffers from **deadlock**. It is situational. It is **not always**.

### Starvation

* Starvation -> Indefinite waiting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b86cfc8-9d9e-4e4c-bc54-3b54878bb423)

* Starvation of small transactions due to large transaction. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4414b212-4e4d-47d6-b3a2-70cbaa73a777)

* Starvation of large transactions due to large transaction. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5619bc8b-2ece-4c74-be31-832eebbeb7b6)

* **Strict schedule**.
* **Strict 2PL** says to follow **Strict schedule**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/968cb692-a6f6-46ba-981a-920e7959cbd6)

* **Commit** is **important** here. [Example]
* If the **upper one** has done **write operation** then we will do **commit** of it and after that only the **lower one** can do **either read or write** operation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84a4d206-4c7a-4e88-a84a-cbf6ffcc3374)

* After **every write** operation, there should be a **commit**. 
* We  missed that in the last **write(X)** in the **T3** transaction.[**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e56d23b6-d457-4458-b840-4b58e52afc65)

 * Yes. [**IMPORTANT**]
* Strict 2PL -> Exclusive lock should not be release until **commit**.
* At the **end of the transaction** when the **commit is done** then we will release the **exclusive lock**.
* **Strict and basic** 2PL are **different**.
* **Before commit**, we cannot **unlock the exclusive lock**. [**IMPORTANT**]
* Strict 2PL -> **Exclusive lock** should be released after **commit**. [**IMPORTANT**] 
* Strict 2PL -> We can **unlock**, **shared locks** anytime. [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c4f88ef-d351-4cfe-a93b-2e76dc1244ca)

* Strict 2PL rules not broken. [Example] [**IMPORTANT**]
* This is allowed under **Strict 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5cdc52ae-5fb7-4f45-b4df-96b948bc0d24)

* This is **not allowed** under **Strict 2PL**.
* Solution [**IMPORTANT**]
* **W(X)** in the **T4** transaction is getting **blocked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f27a6db3-c198-4d20-9a5b-243bc9ca4922)

* So, **Strict 2PL** only allows **Strict schedules**. Yes. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4192de78-e27c-4fec-b93d-6f245886cd7e)

* Solution. [Example] [**IMPORTANT**]
* This is **not allowed** under **Strict 2PL**.
* As the **R(X)** in **T2** transaction is getting **blocked** that's why.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/866545dd-e007-472c-9103-6c30edd32700)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f27491c-c2cc-483c-8ac4-9dfe083198a2)

* Wherever we want, we can **write commit** statement, here. 
* This is **not allowed** under **Strict 2PL**.
* We are getting **deadlock** here as well.
* Commit happens at the **last/end**. [Example] [**IMPORTANT**]
* We cannot write commit in the **middle**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d0fb515-c294-42be-a35a-0967b73d8bb0)

* It is because of **deadlock** happening here.
* Committed/Commit -> Finished/Terminated.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae6e10a9-5a3e-419d-90c4-2f366e811790)

* Wapas bhejna ho to **new transaction**.

### Rigorous 2PL

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2babf039-4e79-4c1d-a1f6-7c93e611ccd8)

* Rigorous 2PL
* Every lock(Shared and Exclusive) should be released after commit. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/059027f7-a3e2-433c-92e3-998f54f880f6)

* Yes, **Strict 2PL** had **shared problems**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d0de2dc-1804-43a2-87bf-7068968e4ddd)

* In **rigorous 2PL** we can also get **deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67e7d205-ac47-46a7-8c4e-bb37eef7401f)

* Solution
* Not allowed under **rigorous 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c551a221-938d-4c11-a93d-754ac70175e3)

* Recoverability [Solution] [Example]
* It is allowed under **basic 2PL** as there is **no relation** of **unlock and commit** in **basic 2PL**. [**IMPORTANT**]
* We will have **Recoverability** problem.
* **Basic 2PL** which allows us to be **recoverable**, which is **not the case**.
* **Basic 2PL** does not ensure **Recoverability**. [**IMPORTANT**]
* **Strict and Rigorous 2PL** don't have **dirty read**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31c62e6b-b712-457e-8a20-86c753336a32)

* 2PL. [**IMPORTANT**]

1) Even if the schedule is **recoverable**, it does not mean that the schedule is **cascadeless**. **Cascading** can happen as there is **no trust(no bharosa)** of **commit**. We don't know where **commit** is done(no bharosa). [**IMPORTANT**]

* **Basic 2PL** allows **dirty read**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/724bcada-36c2-4d1f-8325-3423b9542a94)

* Allowed under **Basic 2PL**.
* It is **recoverable** but it is not **cascadeless**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b9abf24-802e-4590-8aad-5f840a279756)

* It will be **cascaded recoverable**. **T1** transaction will take **T2** transaction with it as well.
* **T2** transaction is also getting **rolled back**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b0bfd5f-405b-4bd8-af01-93a6ef2d422a)

* **Cascaded recoverable** -> If **T1** transaction **failed** then **T2** transaction is also **rolled back**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ad7dba1-4d2b-4e0a-9c40-01c7ac21476e)

* **Basic 2PL** allows **non-recoverable** schedules also. It **fails** because we are doing **dirty read**.
* All of them, **basic, strict and rigorous 2PL** may suffer from **deadlock**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a950985-6435-47dd-baca-d3f2af35a0e3)

* It will be **cascadeless** because we are doing **commit** first then **unlock** and after that some other schedule accesses that **data-item**. **Cascading** cannot happen and on top of that it will be **recoverable** as well. 

### Conservative or static 2PL

* Conservative or static 2PL.
* Lock all the items before the transaction begins execution by predeclaring it's read-set and write-set. [**IMPORTANT**]
* It will **declare** it's **read and write sets**.
* Read set will have the **shared locks**.
* Write set will have the **exclusive locks**.
* **After all of the locks** are given then only it will go forward.
* **unless all of the locks** are provided/available till then it will **wait**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5b8bc36-3ea9-4a2a-9eaf-2f2485bdab25)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e77ad05-7941-4e2f-98f9-f2b6b45d2ac4)

* **No deadlock** condition here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01ee9afa-a130-4af7-91a3-e898fb98e2c0)

* 2PL. [**IMPORTANT**]
* A schedule is allowed in **rigorous 2PL** then that schedule is allowed in **strict, basic 2PL and it is conflict serializable** as well.
* A schedule is allowed in **strict 2PL** then that schedule is allowed in **basic 2PL and it is conflict serializable** as well but we **don't know or not confirmed** if that schedule is **rigorous 2PL** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c72b3537-e385-410d-9089-3135fb277876)

* Example.
* It is **not allowed** under **basic 2PL**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00cea820-e39b-4b04-895e-011f351f94b0)

* It is **conflict serializable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97f1a4b0-55fd-4eac-8cf4-4fed42d4b416)

* Sequence

## Timestamp

* Timestamp -> At what time transaction started.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4a20765-9feb-485d-bf93-363260870c80)

* **1999** is **greater**.
* According to **birthday**, the **timestamp value** of the **older transaction** should be **bigger or smaller**? [**IMPORTANT**]

> **smaller**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a191012a-641e-42e7-a9b0-8e42dc145830)

* Assume there are 2 transactions T1 and T2 and their respective timestamps TS(T1) and Ts(T2). [Example] [**IMPORTANT**]
* TimeStamp(TS)
* So, **T1** is **older transaction** and **T2** is **younger transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32585ca6-0ea9-43b2-a88f-5af6c8eb823c)

* Deadlock Prevention.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87d6db56-d265-450c-ac7b-939cdb306024)

* View Serializability.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62aaf118-364f-406b-a431-ca6a39edbeb6)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c50f282-55ce-4e08-9a47-57f566bddeb2)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a907505-420d-4d76-811e-85ec3ba3ac50)

* Not view serializable.

## Timestamp

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eb374ec-b9b0-417c-a595-426262ab68c0)

* Who came earlier?

> Whoever's **arrival time** is **smaller** that came **earlier**. So, here **T1** came **earlier** than **T2**.

* Came Earlier -> Old
* Came Late/Later -> Young.

## Deadlock Prevention

### Wait and Die

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0046f29e-743d-4446-b22a-858478849e03)

* They are not **shared locks**. [Example]
* **Tj** has taken the **X** item. It is already **acquired**.
* **Ti**, **tries to acquire** the **X** item.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45cc287e-0a01-467d-9c84-8d365ca54e12)

* Now, we have to check their **timestamps**, who is **younger and older** among **Ti and Tj**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43d337db-b5e0-4838-8ffb-754028afe2dc)

* It means that if a **lock** is already acquired by a **younger transaction** then we are giving permission to the **older transaction** to **wait** but if a **lock** is already acquired by an **older transaction** then we are not making the **younger transaction wait**, we are **aborting** the **younger transaction**. [**IMPORTANT**]

* The **advantage** is that a **younger transaction** will **never wait** for an **older transaction** and there will be **no circles**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ebc3c95-d92a-4f32-b49e-6df4d7baa956)

* Because of **circular wait**, **deadlock** will happen. [Example] [**IMPORTANT**]
* We are preventing **circular wait** in **Wait_Die**.
* **Wait_Die** -> Older transaction **waits** and the younger transaction **dies**. [**IMPORTANT**]
* The **timestamps** of **two transactions** will **never ever** be the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b15c320f-5731-4f79-bdb5-4bb78748cf3f)

* Example. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcaf23db-4909-480a-a34f-09161ac3f724)

* **Ti** which is an **older transaction** as the **timestamp(TS) of Ti** is **smaller** than **Tj**, hence **Ti** can **wait**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc2744f8-ae27-400b-b80c-519f159e9533)

* **Ti** which is a **younger transaction** as the **timestamp(TS) of Ti** is **greater/bigger** than **Tj**, hence **Ti** is **aborted** and restarted with the **same timestamp(TS)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a30058bd-2c63-4897-a7c2-ab6f67314cbf)

* Example. [Solution]

### Wait and Wound

* It is just the opposite of **Wait and Die**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f595bdb-d647-400b-afd2-9474728aaa86)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86e83234-5878-4607-9cc9-d190430fe527)

* Yes.
* Younger -> Wait
* Older -> Wound.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e47220af-d32c-4b8a-9232-2fb5dcf428f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78bcfa6a-e38c-4fe8-8b20-2166bf0807b6)

* Ti -> Older [Example] [**VERY IMPORTANT**]
* Tj -> Younger
* Tj has the **lock** and the **older** transaction(Ti) wants to acquire the **lock**.
* We will **abort Tj** as it is a **younger transaction** which has the **lock** and **Ti** which is the **older transaction** will **acquire the 'lock'**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3caa5e9e-2f6d-4b3a-8d9a-2f0186a154bd)

* Ti -> Younger [Example] [**VERY IMPORTANT**]
* Tj -> Older
* **Tj** the **older transaction** has the **lock** and the **younger transaction(Ti)** wants to acquire the **lock**.
* So, **Ti** being the **younger transaction** has to **wait** for the **older transaction** which is **Tj**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/829ee23a-836c-42cf-9f10-af323dc80721)

* In **wait and die**, a **younger transaction** has taken a **lock** and a **older transaction** is **waiting** for the **younger transaction** to release the lock. So, at a given time the **younger transaction** has released the **lock** but the **lock** was not immediately given to the **older transaction** but some other **younger transaction** got the **lock**. The **older transaction** will again **wait**. The **younger transaction** released the **lock** and another **younger transaction** got the **lock** instead of the **older transaction**. [**IMPORTANT**]

* The **older transaction** will keep on **waiting**.
* There maybe **starvation** for **older transactions** in **Wait_Die**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e83a5162-33d7-4aa7-a28f-e70727f76835)

* Difference between **Wait_Die and Wait_Wound**. [**IMPORTANT**]

1) There is **no starvation** for **older transactions** but **younger transactions** may **starve** if **older transactions** keep taking **locks** for **indefinite time** in **wait-wound**.

2) After a **definite** amount of time, the **older transactions** will release their **locks** and the **younger transaction** will definitely be able to take the **locks**.

3) The **older transactions** will eventually **terminate**. So, there is **no sense** of **starvation**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91a3749d-de82-4592-935e-358767660ce4)

* Question. [Example] [**IMPORTANT**]
* T1 is older than T2

* T2 -> Acquired the lock.
* T1 -> Requests for lock.
* W -> T1 Aborted(Die)
* X -> T1 Waits
* Y -> T1 Waits
* Z -> T2 Aborted(Wound)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67538294-b371-4a03-b909-d91c30de6626)

* Solution. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb6a9c31-b619-426d-906c-6afc8bcc70f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b354420-98b5-44d2-8ce0-5c159447c682)

* Question.
* Link -> https://gateoverflow.in/118325/gate-cse-2017-set-1-question-42

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91f07230-847a-4baa-be98-263d783b3558)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d22552e7-67c6-40e7-8a83-cc7cf867a61f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6dfc64f-9639-4f09-982d-2640b96ee8ef)

* Option **A**. [Answer]
* T1 -> Younger [If, TS(T2) < TS(T1)]
* T2 -> Older
* Option **A**, **Wait and Wound**, example.
* **Transaction** ends in **definite time**.
* Transaction if not killed will eventually terminate and timely terminate. So there is **no chance** of **starvation**.
* After a **definite** time, the **younger transaction** will get the **lock**, guaranteed.
* So, it is **deadlock free and starvation free**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dd61f4a-b823-4bfc-8a4b-f3b3fb5185c1)

* Option **A**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ed49a9d-c9ed-4d38-902d-b84cae033248)

* Timestamp based algorithms for **concurrency control**.
* Initially **read and write** timestamps are **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1f1651e-b154-4872-bff3-ef8b06c36fb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2ce4072-1495-4dc1-b455-0867ca6fd8e5)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de7219da-996c-4029-a769-bd0da4f143bf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85ede271-b80e-479b-ae9e-cfa21054bc5e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88fac306-46c8-4cdb-a865-759155f236bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40ba0956-dacb-47af-b32f-fb7c233e1409)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d147218e-e1ea-46c7-b2da-422bd2136194)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0efab24c-673b-4dfa-88e3-ef6f144aea8d)

* Yes.
* R_TS(X) -> Youngest transaction who read X.
* W_TS(X) -> Youngest transaction who write X.
* TS(T1) = 1 
* TS(T2) = 2
* So, **T1** is **older** and **T2** is **younger**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f58195ef-0da7-4821-93a7-e0c25a1c7a97)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5515cd2-a76f-4c9f-9c16-7dcd355950a1)

* Basic Timestamp algorithm. [**IMPORTANT**]
* In whichever sequence the transactions arrive in that sequence/order only they(all transaction) should follow to run. If there is a conflict in the sequence then the **Basic Timestamp algorithm** will reject that sequence. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f1a26da-23fa-470f-83c4-6ee272e6d387)

* There is **no conflict** in **read-read** operations but in **read-write, write-read and write-write** there is **conflict**.
* Restarted transaction gets a younger timestamp. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60989431-75d1-4f6d-8445-e9afd526cc5a)

* TS(T1) = 1
* TS(T2) = 2.
* **T1** is **older** and **T2** is **younger**.
* First **old** then **young** which is **T1** then **T2**.
* T1 -> T2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ccabeea-703c-4d94-ab5f-bd89bcce8f02)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7901d441-ad5e-45e3-b23d-0bb43cbaae57)

* There is **conflict** between **read-write** and **write-write**. So, we will not allow.
* We will not allow **conflicting statements** in the **opposite sequence(T2 -> T1)**.
* This not allowed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c6ddb8f-5140-4898-9337-b49f306685bf)

* This is **not allowed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90ae6ba9-6d4a-40da-9093-8faeeb061baf)

* This is **allowed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93dffc33-872c-4d1e-88bd-9bd562820945)

* After the **young transaction's** read or write, we will not allow the **old transaction's write** operation.
* For **every statement**, the **algorithm runs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bd93d00-c127-4ca3-9f34-823730f37dbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f0bb49c-57f9-4fbb-91bd-5600727df7d3)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4df3779d-21d6-42a4-b4dd-8fd1d9d61678)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f477f13e-a33c-41c8-9b4d-cb6aeca22c29)

* If a **younger transaction** has done **read or write** operation then the current transaction's **write** operation is **rejected and aborted** and the current transaction is **rolled-back**.
* So the **write** operation of **T1** transaction is **aborted** and the whole **T1** transaction is **aborted** and **rolled-back**.
* If the **T1** transaction is **aborted** and **rolled-back** then the **T1** transaction will **restart** with a **younger/young timestamp**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c3728aa-67bb-4e8d-9f4e-122a774a8c27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d945af13-3ba2-4bf6-979a-fc21cdf69b50)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35c0659f-71b6-49e4-972a-d490975b4e7f)

* **Read-Read** meh **no conflict**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d84e5c91-8f7e-446d-a024-3def3ec08c64)

* For the **W(X)** in **T1**, we will check the timestamps of both **read and write** operations.
* Any **young transaction** has done **read or write** operation before the **W(X)** in **T1**?

> **Yes** [Read timestamp].

* So we will reject **W(X)** operation and whatever **T1** operation has done **rollback** those operations as well.
* **T1** operation is **aborted and rolled-back**.
* So, **T2 and T3** transactions are **completed** . **T1** is **aborted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8126c0d8-bb60-4b66-8aed-bb6ff0029a28)

* Solution [**VERY IMPORTANT**]
* TS(T1) = 1, TS(T2) = 2, TS(T3) = 3.
* TS(T1) < TS(T2) < TS(T3)
* So **T3** is the **younger/youngest** transaction.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cf56bb5-61d9-4948-9095-33a152e969c4)

* Question. [**IMPORTANT**]
* **T2, T3 and T1** transactions are **aborted**.
* **T4** transaction is only **completed**.
* For **R(X)** in **T1**, **younger transaction(T4)** has **written** which is **W(X)** before it, so **abort**, **T1** transaction.
* **T2** transaction is **aborted** because a **younger transaction(T4)** has **read**  before **W(X)** in **T2**.
* **T3** transaction is **aborted** because a **younger transaction(T4)** has **read**  before **W(X)** in **T3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36dbdc1c-f1cc-4087-bf3a-2ce1e33217a2)

* **T4** transaction is **not aborted** because a **not younger transaction** has **read**  before **W(X)** in **T4**. Only **T4's**, **R(X)** has **read** which is within **T4** transaction only and **not a younger transaction**. So, **T4** transaction is **completed**. [**IMPORTANT**]
* TS(T1) = 1, TS(T2) = 2, TS(T3) = 3, TS(T4)= 4.
* TS(T1) < TS(T2) < TS(T3) < TS(T4).
* So **T4** is the **younger/youngest** transaction. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01725695-4496-4562-a725-fb2064049897)

* Question. [Example] [**VERY IMPORTANT**]
* **T2 and T3** are **completed**
* **T1** is **aborted**.
* **T1** transaction is **aborted** because a **younger transaction(T2)** has **written** which is **W(X)**, before **W(X)** in **T1** 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ff6865c-7606-47ac-a293-2f08ae585c07)

* Rollback -> T1 transaction never came.
* That's why we set **R_TS(X) = 0**.
* We will **reverse/undo** all of the **changes** made by **T1 transaction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a6d7a82-d2f1-41d1-b5a6-852ebf5c04db)

* We are getting the **final result** as **expected**.
* The middle **W(X)** in **T1 and T2** are getting overwritten by the **W(X)** in **T3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8eb0b9eb-62f9-4574-8232-2090f8d39196)

* For a **serial sequence** of **T1 -> T2**, the **final value** of **X** must be the value written by **T2**. [Question] [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b7d73f4-830a-4e58-abea-786a30714e6e)

* Thomas Write Rule.
* The **benefit** is that we don't have to **revert** the **T1** transaction. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7402cd18-a849-4726-b3ac-7c7b5c1a4075)

* Example [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86735722-099e-4c25-8244-b1a36c5103e0)

* We got the **final value** as **expected**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ee48a42-0b35-442a-b9aa-14f36d59b8a6)

* No, it is for **write-write** operations comparison only. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88d29c89-e519-440b-9a17-2cc41bb6db59)

* Yes.
* **Basic Timestamp algorithm** is also called as **Timestamp ordering** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/551806c4-1521-4251-9e6c-7b9ae380c219)

* It is because **W(X)** in **T2** has **written** earlier/before than the **W(X)** in **T1** and **T2** is a **younger transaction** compared to **T1**. That's why **T1** transaction is **aborted and rolled-back**. **W(X)** in **T2** has **written** earlier/before the **W(X)** in **T1**.[Example] [**IMPORTANT**]

## Thomas Write Rule

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2dae4b1-e8d4-4ae5-9147-2629b8b9721b)

* Thomas Write Rule -> If a **young transaction** has written earlier and an old transaction has come to **write** then **basic timestamp algorithm** will **reject** it. **Old transaction** is not allowed to **write** after a **young transaction** has written earlier. **Thomas Write Rule** says that if there is a **write** in the **older transaction** then **allow** than **write** operation.
* If we write it in-order then first we will **read** then there is a **write** in **T1** and we will do another **write** which is in **T2**. The **final value** of **X** will be the **value** that was **written** by **W(X)** in **T2**. 
* **Skip/do not perform** the **write operation** in **T1** and tell that it is **done**. [**VERY IMPORTANT**]
* **Advantage** -> We don't have to **rollback** the **T1** operation now. We also got what the **expected result** was. [**VERY IMPORTANT**]
* If a **younger transaction** had done **read** operation before the **write** operation in **T1**, then we had to **abort** **T1** operation, **thomas write rule** can't do anything. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d3acb8d-ba46-4172-a6c9-106b93055c17)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5804fb87-bc0e-47aa-a930-8180ca4e82cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d3acb8d-ba46-4172-a6c9-106b93055c17)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdd260aa-f926-4454-8d46-8261f335da98)

* According to **thomas write rule**. [Example] [**IMPORTANT**]
* **T1** transaction is **aborted** because before the **W(X)** in **T1**, **younger transactions(T2, T3, T4)** have done **read/write** operations and the **older transaction** which is **T1** wants to do **write** operation which is **not allowed**.
* The **W(X)** in **T3** is **skipped** because first we checked if a **younger transaction** has done **read** operation than **T3** but there is **none**. So now we checked if a **younger transaction** has done **write** operation than **T3** and we found that **W(X)** in **T4** and **T4** is a **younger transaction** compared to **T3**. Because of **thomas write rule** the **W(X)** in **T3** is **skipped**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d91b8bbd-57e6-4b69-8ff5-b2777b55c14f)

* Yes.
* Anyways we are getting whatever the **written value**, the **T4** transaction has done at the **end**.
* The **basic timestamp algorithm** will run the process/transactions in such a way that the transactions which is **arriving first is run** then the next then the next and so no.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/998cb00d-ff55-42d3-8b30-7cfecdbe3109)

* Timestamp of T1 -> 1
* Timestamp of T2 -> 2
* Timestamp of T3 -> 3
* Timestamp of T4 -> 4
* First **T1** had arrived then **T2** then **T3** then **T4**.
* T1 -> T2 -> T3 -> T4
* In the **above order** only we have to run the **transactions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7555ef3b-a3e5-4727-a172-6aa452e6e965)

* Question. [**IMPORTANT**]
* The **2nd W(X)** in **T2** is **skipped** because of the **W(X)** in **T3** which is a **younger transaction** and had **written** earlier then **T2**.
* The **2nd W(X)** in **T3** is **skipped** because of the **W(X)** in **T4** which is a **younger transaction** and had **written** earlier then **T3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c803347f-e62e-463c-b331-f1928bd573c3)

* The schedule is **allowed**.
* As there is **no waiting**, so there is **no deadlock** here.
* Timestamp ordering algo:- [**IMPORTANT**]

1) Serializability.
2) No deadlock.

* Starvation may happen but it depends, if a **restarted transaction gets a younger timestamp** then **Starvation** will not happen.
* **Restarted transactions** gets a **younger timestamp**. This eliminates the possibility of **starvation**.
* Arrival time changes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4fb37c0-9f79-4eec-bd4b-e377b7f46bf4)

* Timestamp.
* All the **Timestamp schedules** are under **conflict serializability**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa1a2708-e82e-402f-ac19-c41dff8c4e58)

* Not conflict serializable.
* TS -> Timestamp.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcf3bd1a-3bf4-4381-beef-a15861269792)

* Full/complete/whole schedule allowed as it is.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b707f09-70ec-436e-a445-bea800309798)

* Yes. Good point.
* Write(W), Conflict Serializable(CS)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68bfefbe-e357-4507-94c1-7ddf9f04ef8f)

* No need to study. Just remember the **names**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/149bd80c-83df-4011-908d-a1230973c0e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a55a695-c9dd-4428-b932-1aedea8df6eb)

* Question [**IMPORTANT**]
* Link -> https://gateoverflow.in/981/gate-cse-2006-question-20-isro2015-17

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb4cedd8-b3b1-40ec-951c-a6b57b3e5fc7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff87c883-41cb-46f4-ac6a-fba5febb3d6e)

* Solution
* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd02e18f-f7ac-4b63-9b1b-bae6d7007897)

* Yes

## Memory Structure

1) Main Memory
2) Secondary Memory

* RAM -> Main Memory -> Nano seconds(ns)
* Disk or SSD -> Secondary Memory -> Milliseconds(ms).
* **DB tool** run on **CPU**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d66d5290-f0d4-4023-8d7f-d4532c2411fd)

* Select * from table -> Many many records(rows) will come. Reading many many records(rows) from **secondary memory** and bringing them to **RAM** will take a lot of time.

* **Access time** of **secondary memory** is **more(greater)** than **main memory**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6437b0ef-fb13-4d6f-aa08-e7ae23ab6742)

* Optimization.
* **Query optimizer** -> Runs query in such a way that **minimum time** taken to fetch records from disk.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4f6e0d5-f31d-4ca2-ae1e-c78dcc5015c7)

* select ename from employees where dataofjoining > 2001 and salary > 50000. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7441fa05-6b6b-4faf-abdf-06de6e8954ca)

* **Query One(1)** -> First we **filtered out** the **table rows** with the **dataofjoining > 2001** condition. We will get **5000** rows. On those rows we used the **salary > 50000** condition and we did comparison on the **5000 and 100** rows, then we got **82** rows which match both the conditions.

* **Query Two(2)** -> First we **filtered out** the **table rows** with the **salary > 50000** condition then we would have gotten only **100** rows. On these **100** rows, we would have run the **dataofjoining > 2001** condition and then we got **82** rows which match both the conditions.

* In the **second query run**, the **no. of rows** fetched in the **first time** is **significantly lower** than the **first query run**, which is from **5000 to 100 rows**. So, we have to so do much **less comparisons** here. **Disk access** would have been **less** and **time for comparison** would have been **less** as well.  [**IMPORTANT**]

* When we **optimize the query** in such a way that it **runs** and it take **min. no. of comparisons** and **time to run entire query** will also be **less**.
* That's why **SQL** is called as **non-procedural query language**. 
* We are just writing the **query** and we are not telling the **DB tool** how to **run the query**. 
* How the query has to be run -> It is the work of the **optimizer**.

## Disk Blocks and Record Storages

* **Block size** is from **512 bytes to 4 kilobytes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/347dcd1d-1e67-4f72-8bad-28a77bb41ae2)

* Whole table will come within a **single block**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a984726-04f7-484b-9543-99d8cf619c03)

* 16 different blocks needed to stored the **single table**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b186283-a4e9-44a5-8d83-d7c01e671d21)

* Nobody knows where the **employee** with **EID = 76** is **stored** in the table.
* We have to **check all of them** to find the **employee** with **EID = 76**.
* With the **help of somebody** we can already know **where, which** record is **stored** then we can **directly** reach to that **record**. If not, then we have to do **linear search**.
* In the **regular cases**, search each record linearly to get the required record.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/519c3755-d875-4b0e-8034-5ac0370ff012)

* Sorted with **employee ID(Eid)**.
* In general, all blocks are accessed linearly.
* But if records are stored in sorted order of eid, then only till that block where eid becomes 90.

* **Physical storage** of DB table:-

1) Basis on which column the records must be ordered in disk so that maximum number of times. Queries can provide quick results. 
2) Can we reach to a specific record directly. It is done through **indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cbddd31-393b-4aba-a8e9-95e52078acfb)

## Spanned VS Un-spanned File organization

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dfef642-3721-4146-950b-22c392f1d4ef)

* After putting/storing all of the **6 records**. We have filled **6 * 5 -> 30 bytes**. We are left with **32 - 30 -> 2 bytes**. [Example]
* How we will store the **7th record**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ae14dfb-cd7e-48c4-9121-c6eebc52107e)

> We can start storing the **7th record** in the **remaining 2 bytes of  block '0'** and the **rest 3 bytes** in the **next block** which is **block 1**.

* If we keep a **record** in **two different blocks** like above because exactly fixed no. of records were not coming to **block '0'**. Some space was **left over**. We didn't want to **waste that left over** space. So we started storing the **7th record's 2 bytes** in **block 0** and the remaining **3 bytes** in **block 1**. [Way 1]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41dc062e-5414-484f-92de-fb2e4eee2087)

* This is called as **Spanned file organization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cdf549c-370c-4b19-addd-99ec18ec1520)

* **Yes**, if we have to **access 1 record** then we need **two blocks**. As the **7th record** is stored in **two different blocks**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4f9a850-6058-4d23-b801-4e8bd911b7a6)

* Assuming table has **100** records. No. of blocks to store db table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71e93961-719b-441b-8bb7-cb0ea6151995)

* Spanned. [Solution] [Example]
* In **OS language** it is called as **internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62cbc21d-739b-4f40-ab41-d8047447c5dc)

### Un-spanned

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5525ad0-3779-4c34-a3a9-a258443fb4ab)

* A record is stored completely in only one block always.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00f28d58-a677-4ca0-b942-291b1c2caef6)

* Of-course.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38d8d1ea-8604-4142-a281-6c62067adde0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/694317e6-d5cb-42eb-b825-74892ef99d2f)

* Spanned. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9977f11-2542-4326-a72a-99a4ecb750a5)

* Un-spanned.
* In **un-spanned** we cannot keep **half record** some where else. The extra space which is **left**, that will not be  **used**. That's why we took **floor** value when finding the **no. of records per block**. We can keep **34** full/complete records.
* 14 complete blocks and **0.7 or 70%** of the **15th block**.
* So that's why we took **ceil** value when finding the **no. of blocks**.

## Indexing

* Used to access records in **less time**.
* For **indexing**, we need **separate pages** for them.

* Used to access records in **less time**.
* For **indexing**, we need **separate pages** for them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51f532a7-3383-40f0-a4c1-2c7d9ed482e2)

* Where we have kept the DB records/table rows, they are called as **data blocks**.
* When the **DB table** is stored then in technical term, it is called as **Database file**.
* When the **index** is stored then in technical term, it is called as **index file**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fa23878-e566-45af-af3a-b7f7759ca065)

* DB File.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/088cea85-e858-4fd5-8dd6-b13c4c02a35e)

* Indexing techniques.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c572c447-2e8f-4f96-b2e0-d4db3e3face2)

* Indexing techniques [Related to sequences].

1) Clustered Indexing
2) Non-Clustered Indexing

### Clustered Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9d73024-6a11-4b16-ae65-61f2e46c6703)

* In the sequence we have arranged the pages in the book, chapter 1 then chapter 2 then chapter 3 and so no. In that **same sequence** only we have done the **indexing**.
* In the sequence, we have arranged the **files**, in that **same sequence** we have arranged the **index**. This is called as **Clustered Indexing**.
* **Clustered Indexing** -> Data order and index order are **same**. [**IMPORTANT***]
* In what order we have arranged the data in the blocks?

> In the order of **Rno**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a19630b5-dbde-4184-a017-e2cff04bd386)

* **Clustered indexing** -> Storing the records in **DB file** and storing the **indexing** in **index file** and the **sequence of storing** in both **DB file and index file** is the **same** then it is an example of **Clustered indexing**. [**IMPORTANT**]
* **Data and index** order are the **same**. Like in **books**.

### Non-clustered Indexing

* **Non-clustered Indexing** -> Data order and index order are not the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0351dd3c-36aa-40fa-aa40-b0a627b57614)

* In the **sequence**, the **indexing** has been done in that **same sequence** the **data** in the **DB file** is **not stored/kept** and **vice-versa**.
* There is a **difference** between the **sequence** of the **data stored** and the **sequence** of the **indexing**. That is called as **Non-clustered Indexing**. [**IMPORTANT**]

* Dense VS Sparse index.
* Dense -> Index record is for each database record
* Sparse -> Index record is for a few database records only.

## Primary Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a63fcfc9-6fc7-4ffd-9bab-16ffbf4a8728)

* Primary Indexing:- [**IMPORTANT**] [Points]
* Indexing done on primary key or any super key.
* Data must be ordered on index which is **primary key**.
* It is always **sparse index**.
* We can do **indexing** on any of the **columns**.
* If **primary key** is one column then **indexing** is done on **one column** values.
* If **primary key** is combination of two columns then **indexing** is done on **two column values**.
* **Indexing** has to be done on **primary key**.
* **Index and data** order must be the **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bbf4d18-c3d2-46b1-9187-498a7ca5f85e)

* Sparse Index.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/273aaf16-435a-4e41-8cee-6ea29a3a8a50)

* Anchor records.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94557e72-0e9a-47e6-a5fa-01b3ae8ad160)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae50c836-5104-42e6-8dbb-6820594db725)

* Question. [Example]
* How many blocks are accessed?

> **1 block access** for the **index block** and **1 block access** for **data block**. So, total **2 block access** are **required**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e3913d1-faa8-4f53-8c3f-32081bcf7f0d)

* Question.
* How many blocks are accessed? [Example]

> In the **index block** we accessed **2 blocks** and in the **data block** we accessed **1 block**.

* So, total **3 block access** are **required**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55a86636-c056-4742-bac9-3089216f747b)

* We don't have to calculate the **no. of tuples(rows)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b24bedc4-f587-44d5-9184-0a4257cb2acf)

* Question. [Example] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9917106-7002-42c3-be23-a8e53b452158)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47d3e3b2-1366-4b69-b7de-54827beb022c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e714fcf6-0758-44fa-bd99-fefe6025d7d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5bda27b-2dc5-4b37-81f9-7c282542be55)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3faf044a-8b1f-448e-86d9-48a307eb5b61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b27eb0f9-f966-4291-bde1-3bfe091c3a87)

* **32 byte** record we got.
* If **database table** is stored in **4 blocks** then **indexing** will be of **4 records** as in **primary indexing** we know that we do **sparse indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5a24eeb-1905-4993-a960-781f6ded2622)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e73524e6-e5b5-4965-b04a-cd493a15ce8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22f503cb-0e48-430e-8dc6-9dc2a3568baf)

* No. of index records = No. of blocks to store DB file.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24621fbe-a7c4-4a15-897f-22c4b5ee52c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd14f0e5-56bf-4896-9b67-16cd0df5a92e)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e9fb1cc-c9ae-4371-ba05-9c62a5df81f2)

* Explanation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/219d75af-defa-4ab7-9aca-c6be85927af2)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff7f3265-0f14-4984-8127-30cbe2a42b31)

* Solution [Example] [**VERY IMPORTANT**]
* No. of DB records per block = (Block size) / (DB record size)
* No. of blocks to store DB file = (DB file) / (No. of DB records per block)
* Index record size = (Key size) + (block pointer size)
* No. of index records per block = (Block size) / (index record size)
* No. of blocks to store index file = (No. of blocks to store DB file) / (No. of index records per block) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a743db52-a7b2-4ffd-b910-0d1b8f7c1e45)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec2603e4-9824-402d-bb01-9f5bd986023e)

* Solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64dabb86-9a5c-43c3-a420-25498c125dce)

* Question. [Do for both **spanned and un-spanned**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/867a3625-dd2f-4c68-96c3-8b8bc4f60f6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b969fc7-df2e-4791-8a4b-3d0dbda8d483)

* Spanned. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f345e5e1-56e3-4ece-9f6c-f4ee30b687c4)

* Un-spanned. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8a6e786-ceab-40f7-b1d5-156d38ebd9e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f950e62-7ea8-4e34-99c8-4a7ce902044c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b89150c0-8156-48c2-b94a-7dccd87e43e9)

* Solution. [**VERY IMPORTANT**]
* In the **index block** if we have to do **searching** then we have to do **binary search** instead of **linear search**. The **index and the data** are **ordered** only.
* No. of comparisons?

> For the  **108** blocks, **no. of comparisons = log 108 base2 -> 7**.

* With the access of **7** blocks, we can access the blocks, we want to access.
* We will **search** first in the **index**.
* Every **index** has a **block pointer** which is pointing to a **block**.
* We will do **searching** on the **index block** and after **searching** we will find out the **block** in which the **data** that we want is **located/stored**.
* We are doing **binary search** on the **index block** and the **no. of block** we have to access is **7** blocks. We accessed **7** blocks and the **job** is done.
* Out of the **108 blocks**, we have to access only **7 blocks** and the job is done.
* This is where we can **optimize the access time**.

* **Binary search time complexity** -> O(log n base 2) -> logn base 2. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd301fde-325e-4f52-9b8c-c1c19d35ba03)

* Yes, **spanned** can also have **internal fragmentation** because the **last block** may not be **completely filled**.
* In **un-spanned**, every block can have the possibility of **internal fragmentation**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a46ef901-1571-4029-8acf-ae0db2f708cd)

* Yes.

### Clustering Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e2515a3-af90-441e-9258-dde83e30996f)

* Clustering Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7f2608c-34cc-40d1-9ce5-920bc56a39ce)

* * This is **wrong**.
* Indexing is done for **each unique value of non-key field**. [Example]
* **Non-key field** means repeated values are possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27404068-59b8-4d2a-8b4f-bebc9e3de298)

* This is **correct**.
* **Indexing** will not be for **every single record**, **NO**. For **every unique value**, we do **indexing**. [**IMPORTANT**]
* We have to **store** the **starting blocks** of **every unique value**. [**IMPORTANT**]
* Sparse Indexing. [Example above]
* In **clustering indexing**, it can be **dense** as well as **sparse**.
* **Sparse** when -> When non-key field has duplicate values.
* **Dense** when -> When non-key field has all unique values.
* The indexing is done for each unique value of non-key field.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3342737-e4cf-427f-93d7-dac4903855dc)

* We have to search the records in **sequence**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af78affc-b545-4a76-b833-d97828465730)

* Question. [Example] [**IMPORTANT**]
* **Clustering indexing** is not directly mentioned but the definition of **clustering indexing** is given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5620763-71d9-4a98-b554-e9d7f55e57eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e465a87e-7272-4a03-8bdd-1fd5182bf597)

* Solution. [**IMPORTANT**]
* In **primary indexing**, **the no. of records in index file** will be **no. of blocks to store the db file**.
* In **clustering indexing**, **the no. of records in index file** will be **no. of unique values**.
* This is the **only difference** everything is **same** in terms of solving the question.
* **Indexing kiski karni ha** woh dimag(brain) meh ah gaya toh, everything else is **same**. [True]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b8a7920-9cd4-4359-8e36-68702f8170b6)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77e6b403-f325-416c-8860-99148382b3b8)

* Question. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e4bca64-9444-4846-a299-d1966ea597b0)

* Spanned.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cba50c67-d265-4a0a-a681-801a3c9df6bd)

* Un-spanned.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cc7a5f8-fb92-4881-aa19-c5429e2c5632)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a301a05-bd84-4245-badc-03235ec7c85e)

* Solution. [**VERY IMPORTANT**]

### Secondary Key Indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdeb5321-c9ca-4a0f-b4a1-03424fee398b)

* As the data is **not ordered**, we will not know the **sequence** and for this reason we will have to do **dense index**.
* For **every record** we have to do **indexing**.
* Bi, Rj -> Block 'i' and in that record 'j'.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b68fc86-fa97-47e8-bf0f-9f755cd0ef79)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209e5725-73d0-44e5-b280-74897f9cbc0f)

* **NULL** is also one of the **unique values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/193c1cb5-9797-4cfa-9949-1d2d1b44b5f5)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9367057e-b73c-472d-8e0c-5bf13049e092)

* Question. [Answers]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21aaf1db-422a-4aa3-a4d9-84a248729029)

* Solution [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3da23662-63a3-4bf3-8ebd-e360254e6c88)

* Clustering Indexing [Summary]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c0786e7-4b73-4773-b1a6-3dc55c03f79e)

* Secondary Key Indexing [Summary]

## Secondary non-key indexing

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d424184d-3e30-4df4-88ef-23d3b0e8428f)

* For **every unique value** there will be **indexing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed48251e-8940-4482-9794-96f3a1ead3b0)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce0379c0-a702-4fd4-a32f-e682a83d4b9e)

* **B5** is index block for value **A**.
* **Primary, clustered and secondary key** indexing are the **most important**. [**IMPORTANT**]
* **First level** is **sparse indexing** and the **next level** is **dense indexing**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e822b27d-b1bf-42d0-a47b-3f532148fd52)

* Summary. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f537e452-ec35-4b93-b66a-5bd3cbf1c32b)

* Question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7258292e-1c25-4a38-93ef-66312b3904a9)

* Solution.

## Multilevel indexing.

* Do **indexing** on the **index**.
* As they are **keys** so they will be **unique values**. **Indexes** are **unique** and on top of that they are in **sorted** order. 
* We will do **primary indexing** of the **index**.
* We can do **sparse indexing** of the **anchor records**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43bad67f-480b-4c40-8103-f2c6352c59e5)

* Example.
* For **2 block access**, we will get the **index's record pointer**. [**IMPORTANT**]
* **No. of levels** = **No. of blocks accessed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6aad1dec-d191-45e8-9a56-ad2299ac70d4)

* Without **multilevel index**:-
* To search indexes, **no. of blocks** to be accessed = **log b base 2**. [Binary Search]
* **'b'** -> No. of blocks required to store indexes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b7b1b9e-cc67-4062-8324-25a45099f314)

* Of-course.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74710775-46f5-4b61-a4fe-cb22543f67fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e9d918c-de57-4541-8662-1669974ccd97)

* **Note** -> One block access extra to access DB record. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84205fd4-4563-40e5-b5a0-a587d6d59b76)

* n-level multilevel indexing -> To access index(record pointer), no. of blocks accessed = **'n'**.
* **Note** -> One block access extra to access DB record.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baf7d1e9-b0b6-4a47-9f90-6fd9651b2f0a)

* Question. [**IMPORTANT**]
* For **2-level indexing** we accessed **2 blocks** and we got the **record pointer**. We have to access the **record** as well. **Another block access** to get to the **record** we wanted to **access**. We wanted the **DB row**. For that we need **+1 block access**. That why **2 + 1 -> 3 block access**. [Solution] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eb0a558-dc8a-4be0-9c69-2877512f3154)

* Yes.

* If the **DB file** is **ordered** on the **non-key field** then **DB file** is **not ordered** on the **key field**.
* **Secondary indexing** is **dense**.
* The **no. of index records** needed is **16384 or 2 ^ 14** as the indexing is **dense**.
* As it is **un-spanned**, so we have to see **block by block**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d5bc353-04f0-470b-b544-64948e4f0ef2)

* For **every block** we need **one index**. [**IMPORTANT**] [Solution]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f17f76b4-2eda-46f3-b458-4406ec9f7bd4)

* Solution.
* Option **C**.
* We are storing **index file** here and not the **DB file**. THat's why we ignored the **32 bytes** information given. 

## B-Tree

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72046352-fe07-433b-a66a-d5163c1e2d62)

* It is like **binary search tree**.
* In **Binary Search Tree** we can do **searching** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fdea640-b1a5-4065-a994-410d6dd4f132)

* Left -> Smaller values
* Right -> Bigger values.
* We have to do **indexing** in such a way that we have to take the help of **BST(Binary search tree)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2bdb40a-a9ff-4cd8-8f96-84f27ce03431)

* In **BST**, the **min time for searching** is **Log n**, if we have **n** nodes in the tree. [Example] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8468ba44-e921-47c8-b3f1-d5726c124f0d)

* As **no. of elements** in **BST increases** -> Tree grows **vertically** and it's height increases.
* Hence even for **searching** when **log n base 2** time required that too becomes **very large**.
* **Solution** -> Make a tree which can grow **horizontally and vertically** also.
* We have to make a tree where in **every node** we can keep **multiple keys(more than 1 key)**.
* The **advantage** is that when we insert an element or when we increase the no. of elements, then the tree will grow **horizontally and vertically** as well instead of **horizontally only** in **BST**.
* That is **B-Tree**.
* Binary Tree -> From **one node** we get **two pointers or children**.
* 3-ary tree -> Each node can have **3 children**.
* For **3-ary tree**, we have **3 children** and we can have **2 keys**.
* For **binary tree**, we have **2 children** and we can have **1 keys**. [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1de7ba82-ad52-4ad1-ab70-e61ae805833a)

* We will grow the tree in every direction. [Example]
* **Height** will be not that much and for that reason **searching** will take **less no. of block access**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c4fe0ff-4b2c-4f78-ab92-8fe3a2818691)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec57f07b-5b69-40c0-b7f7-c0fad749547d)

* At-most -> Maximum
* **Max** is pointers(**p**) and **keys** is **(p - 1)**. [**VERY IMPORTANT**]
* Max. pointers -> p.
* Max. Keys -> (p - 1).
* Min. pointers -> Ceil(p/2).
* Min. Keys -> Ceil(p/2 - 1). [Formula] [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cea5c58-c31f-4f66-96a6-2b6f108a0347)

* Ceil value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e744311-b49e-46f2-91f1-524eb1def320)

* Keys -> Values. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/828ab576-7a30-416c-89ec-9face45f1907)

* Each node can have **3 children or pointers** and **2 keys or values**. [Example]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ab3f474-360a-45fe-ad25-3be6c8b6ed36)

* **Except root on any node**, we have to apply the **min and max** rule of **keys**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/861024b9-bb40-4e6b-89ad-49a0ad89371e)

* Yes, **balanced tree** always.
* All **leaves** appear on the **same level**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd2031c-7ce5-4091-94ba-f03cd62f8df6)

* Example.
* Remember the **formula**. [**IMPORTANT**]

* Why learning **B-Tree**?

> We want to keep the **indexing** in **B-Tree**.

* **Every node** has **two pointers**. **One pointer** is of the **record** and the **other pointer** is for the **tree**.
* Rec pointer -> Record pointer.
* **Record** means the **row/tuple**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb37bdb4-6172-453f-b26c-890742038679)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79bb43db-f53a-470c-b423-b80c9a22ac13)

* Example.
* We have kept **max of '4' keys**.
* We have to keep **'4' record pointers** for **4** keys.
* We have to keep **'5' tree pointers** for **4** keys.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ad333a9-d44e-4326-bfb2-9d5ba55582c7)

* Not possible. [Example] [Question] [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9d2ca17-a70d-49db-81f6-4f0283d65545)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8b6ee68-9250-40f8-99fd-1120240fa754)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4bf45e3-44be-4de5-9650-26aaf783cd81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1ef7f84-c227-4ce7-9a16-d2a58a44661d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ced5fe58-8dd7-4a8e-89f5-c8f74faf5299)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b86ed91-4c4d-4273-8f68-0b8032b18003)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc0d907b-a538-4d39-a526-390f2d735d70)

* Solution.
* Insertion in **B-Tree**. [Example] [Question] [**IMPORTANT**]
* **Insertion** is always done on **leaf node**.
* We can keep **2 keys** on a **single node**.
* p = 3
* Max keys -> p - 1
* Min. keys -> Ceil(p/2 - 1) -> 1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/247cb3fe-9cb4-488d-b377-6a25758574cf)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc81fee7-b927-477b-8775-f19ae5a02905)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07711a3b-486c-4d15-b409-d014ffad6ae9)

* Solution. [Question] [Example] [**IMPORTANT**]
* p = 5
* Max. key = p - 1 = 4
* Min. key = Ceil(p/2 - 1) = 2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee774fc6-1734-462f-9439-7d5e0aedf3ec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7356208-0ba1-466e-90c4-d127a0877565)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57186270-3481-4a45-8d79-8561e5030541)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63e2e991-de44-4dba-a240-d862811b23c4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c869377e-d89c-40a2-abf7-413cd25f10b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24446a65-85cb-4229-bd87-3814f7df8c5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2be4619-ed5d-4b7e-b712-f6fed9aafb85)

* Good point, we will see **tomorrow**.


























