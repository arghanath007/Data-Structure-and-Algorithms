# DBMS

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efe4639d-ebf1-46b1-b0a




























