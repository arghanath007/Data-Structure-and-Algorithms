# DBMS

## Notes Link

* 

## Playlist

* DBMS 1  -> https://www.youtube.com/watch?v=uPZXOj0r1co&list=PLC36xJgs4dxGcz7nZaxGxxmbJrcgDXhFk&index=3

* DBMS 2 -> https://www.youtube.com/watch?v=khKoJUpcXUE&list=PLG9aCp4uE-s0bu-I8fgDXXhVLO4qVROGy&index=1

### Watching tomorrow

* Link 1 -> https://www.youtube.com/watch?v=RCrG3L-yO_o&list=PLC36xJgs4dxGcz7nZaxGxxmbJrcgDXhFk&index=12

* Link 2 -> https://www.youtube.com/watch?v=0LiCjs5Uwfg&list=PLG9aCp4uE-s0bu-I8fgDXXhVLO4qVROGy&index=11


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
