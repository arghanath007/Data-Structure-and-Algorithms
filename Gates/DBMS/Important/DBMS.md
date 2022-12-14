# DBMS

## Notes Link

* 

## Playlist

* DBMS 1  -> https://www.youtube.com/watch?v=uPZXOj0r1co&list=PLC36xJgs4dxGcz7nZaxGxxmbJrcgDXhFk&index=3

* DBMS 2 -> https://www.youtube.com/watch?v=khKoJUpcXUE&list=PLG9aCp4uE-s0bu-I8fgDXXhVLO4qVROGy&index=1

### Watching tomorrow

* Link 1 -> https://www.youtube.com/watch?v=RCrG3L-yO_o&list=PLC36xJgs4dxGcz7nZaxGxxmbJrcgDXhFk&index=12

* Link 2 -> https://www.youtube.com/watch?v=5b376YFCliI&list=PLG9aCp4uE-s0bu-I8fgDXXhVLO4qVROGy&index=28


## DBMS Architecture

* It is a three-tier/level architecture:-
  * Logical/Conceptual Level -> It is a very big table(more than 50 columns), some of the columns are visible to a particular user/user-group that is **External**. The table which is stored is **Internal**. 


### What data is stored in the DBMS?

>The type of data stored in database is **Logical**. 

### How data is stored in the DBMS?

> The way data is stored in a database is **Internal**.


## Data Model

> They are the tools which are used to design database models.


## Entity

> A single phone is an entity.

## Entity Set

> All the phones collectively represented is an entity set.

## Attribute

> The properties of an entity are called attributes.
> The characteristics(Name, brand, size, processor, price) of a single phone are called as attributes.
>  Attributes are nothing but to describe an entity(Phone is an entity here).


## Participation Constraints

* **Double Line** is used to represent **Total** participation constraints.
* **Single Line** is used to represent **Partial** participation constraints.

> Examples below.

![46_participation_constraints](https://user-images.githubusercontent.com/54589605/205938902-77036a0b-8942-4b1e-a393-41f56ef74fc8.png)

![46_1_participation_constraints](https://user-images.githubusercontent.com/54589605/205938944-ae68156b-6a1a-423d-a216-efc43a97bc22.png)

![46_2_participation_constraints](https://user-images.githubusercontent.com/54589605/205938975-e467244b-a0ba-4940-a812-5889e6353138.png)

## Specialization

* Entity -> Computer Science Branch

> If we bring more Entity-sets, into that entity, like Data Science, Machine Learning, AI,  etc. Then it is called **Specialization** of the branch Computer Science. 

* **Person** ISA **Employee**.
* **Person** ISA **Customer**.

> Top to bottom is called **Specialization**.

## Generalization

> Bottom to top is called **Generalization**.

* **Employee** ISA **Person**.
* **Customer** ISA **Person**.


> **ISA** relationship is nothing but **specialization** and **generalization**.
## Types of Specialization

* **Disjoint Specialization** -> If the specialization is not overlapping, then it is called **Disjoint Specialization**.

* **Overlapping Specialization** -> If the specialization is overlapping, then it is called **Overlapping Specialization**.


## Attribute Inheritance

> If the attributes of the parent entity is inherited by the child entity, then it is called **Attribute Inheritance**.

## Relational Model
## Attribute

> These(id, name, size, type, price, fit) are the attributes of these relation **Shirt**. Or, they are the fields of these relation **Shirt**. The name of the columns in the relation are called as **Attributes**. Only the names are included in the relation, not the data.

## Lossy VS Lossless Decomposition

> During the normalization process, if **BCNF** giving lossy decomposition, then **BCNF** decomposition will not be applied. This is because, we will only do decomposition when the decomposition process is a **lossless** decomposition process.


## Candidate Key

> Minimal keys are nothing but **Candidate Keys**. If asked for minimal keys in a question, then find the **Candidate Keys**.

## 3NF

> If there are None/not any **Non-Prime Attributes** in the relation, then the relation is already in **3NF**. Not need to check.





## Questions

![5](https://user-images.githubusercontent.com/54589605/206654652-63a0562e-2ddd-4ab1-b93c-e4b832200e3b.png)

> Here, we can see that both the Functional Dependencies(FDs) are preserved from the original relation. When we try to do a **natural join** in-order to find if it is a **lossy or a lossless decomposition** between R1 and R2 relations and in-order to do **natural join** we need a **common attribute** between the two relations and we don't have that here. So **natural join** is not possible between R1 and R2 relation. Hence this is a **lossy decomposition** or **not a lossless decomposition**. 

>  If **natural join** is not possible or hell, if there is no **common attribute** between the two relations, it is a **lossy or not a lossless decomposition**. 

## SQL Joins

![118_1_types_of_joins](https://user-images.githubusercontent.com/54589605/206859688-ae78b605-a9de-4f3d-8e83-8bb5ec4921f1.png)

### Inner Join

> We get the common data/rows from both the tables.

![118_5_inner_join](https://user-images.githubusercontent.com/54589605/206859537-aadc7f0f-b3ad-4a71-8921-5c940b9a4ce9.png)

### Left Join

> We get all the data from the left table and the matching rows/records from the right table.

![119_1_left_join](https://user-images.githubusercontent.com/54589605/206859586-c3faa29c-80f7-40b2-8400-2b3fc2040edf.png)

### Right Join

> We get all the data from the Right table and the matching rows/records from the left table.

![120_1_right_join](https://user-images.githubusercontent.com/54589605/206859648-72e1e771-f8a6-45a8-ab45-346ee4422f73.png)

### Full Join

> We get all the data from both the left and the right table. All records/rows from left and right table are fetched.

![134_2_full_join](https://user-images.githubusercontent.com/54589605/206859831-7ef7a451-2c0f-4082-ab1c-2a41dd8d00e2.png)

### Self Join

> Only 1 Table is involved in self join.

![135_2_self_join](https://user-images.githubusercontent.com/54589605/206859880-5213a11f-d069-43a0-9b77-47af13c88e72.png)

![135_1_self_join](https://user-images.githubusercontent.com/54589605/206859875-ede7fc49-0a17-4705-a3a3-139be5c511dd.png)

![135_4_self_join](https://user-images.githubusercontent.com/54589605/206859894-b3064b81-30b8-4337-9da6-3db58a676bc9.png)

![135_5_self_join](https://user-images.githubusercontent.com/54589605/206859907-c7d2a288-4030-44a9-ae37-bb54fa7c53b3.png)

## Aggregate Functions

> They ignore/omit/does not **count** the **NULL** values in the table.

## Cartesian Product

![136_1_cartesian_product](https://user-images.githubusercontent.com/54589605/206859937-30938eeb-88cd-479a-841f-e1609567b71b.png)

![136_2_cartesian_product](https://user-images.githubusercontent.com/54589605/206859941-05459880-27cd-4cdc-b9b8-2f1ce77e8a9a.png)

![136_3_cartesian_product](https://user-images.githubusercontent.com/54589605/206859946-3cf4aa8e-79dc-469d-b7ca-c5026bba95bd.png)

![136_4_cartesian_product](https://user-images.githubusercontent.com/54589605/206859952-8c09d66a-5208-469d-a310-7192c9bbfc35.png)

![136_5_cartesian_product](https://user-images.githubusercontent.com/54589605/206859957-b7bc850c-df74-4635-ae14-440282c54f3e.png)

![136_6_cartesian_product](https://user-images.githubusercontent.com/54589605/206859963-e9dbba3a-ffc3-47ab-bcf1-a51d7710a3f7.png)

## Group By Clause

![139_group_by_clause](https://user-images.githubusercontent.com/54589605/206860114-88bf875c-d7d7-417d-86ba-488fcf88a533.png)

![139_2_group_by_clause](https://user-images.githubusercontent.com/54589605/206860007-60a8dd5e-7663-44e1-973a-7af23ba9b616.png)

![139_4_group_by_clause](https://user-images.githubusercontent.com/54589605/206860023-0be1b877-8899-4d52-a926-6b72316adee6.png)

## Having Clause

![140_having_clause](https://user-images.githubusercontent.com/54589605/206860069-86fb0506-9a8f-490c-a357-e7981b6887d0.png)

## Ordering 

![139_16_group_by_clause](https://user-images.githubusercontent.com/54589605/206860090-7fa036e3-6f83-4caf-ad6e-5972da12cdf7.png)

![139_19_group_by_clause](https://user-images.githubusercontent.com/54589605/206860100-b3ab24eb-3683-457d-b55b-5ba402793ca5.png)

![139_20_group_by_clause](https://user-images.githubusercontent.com/54589605/206860104-20ee9715-5ce1-4a38-8b9e-b2330a1398ec.png)

## Set Operators

![141_set_operators](https://user-images.githubusercontent.com/54589605/206860165-7b36bcb2-4aa3-4b06-a929-7388a160e55b.png)

![142_types_of_operators](https://user-images.githubusercontent.com/54589605/206860170-abf219a5-402f-4416-8ea9-8cc8d6e990ef.png)


 

## Sub Queries

### All Operator

1) select ProductName from products where ProductID = ANY (select ProductID from OrderDetails where quantity > 50);
                                  *OR*
* select ProductName from products where ProductID IN (select ProductID from OrderDetails where quantity > 50)

2) select ProductName from products where ProductID < Any (select ProductID from OrderDetails where quantity = 1);

3) select * from products where ProductID < All (select ProductID from OrderDetails where quantity = 1);
  
4) select * from employees where salary > All (select salary from employees where DepartmentID = 2);

### Exists Operator

1) select * from customers where exists (select * from orders where customers.CustomerID = orders.CustomerID);

2) select * from suppliers, products where supplier.SupplierID= products.SupplierID and products.price < 20; 
                              *OR*
* select * from suppliers where exists (select * from products where supplier.SupplierID= products.SupplierID and price < 20);

3) select * from suppliers where exists (select * from products where price = 22 and supplier.SupplierID= products.SupplierID);


## Sets

> In sets, the order of the elements does not matter. It is always an unordered list.

## Division Operator

> It works **for All** cases. It is used in queries where there is a case of **For All**. 
> **Eg**, Select a car which is driven by all the drivers.
> **Eg**, Select a particular driver which has driven all the cars.

## ER Model to Relational Database

> If it is **one-many** or **many-one** then we will use **2** tables. We have to keep the **relation information** on the **many** table/part. 
> If it is a **many-many** then we will use **3** tables. We have to keep the **relation information** on the **3rd or new** table/part created. 
> If we have **one-one** then we will have **2** tables. We have to keep the **relation information** on **either of the tables** and it is dependent on the situation and the tables given.

## Relationships and Cardinality

![174_2_cardinality_of_binary_relationships_question](https://user-images.githubusercontent.com/54589605/207613288-8dbd0f86-1f21-46e1-8b2a-7de6b5a9fe34.png)
1) Stated in the above photo
2) One To One
3) Many To Many
4) One To Many from Department to Employee. Many To One from Employee to Department.
