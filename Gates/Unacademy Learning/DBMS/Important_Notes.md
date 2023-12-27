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
















































