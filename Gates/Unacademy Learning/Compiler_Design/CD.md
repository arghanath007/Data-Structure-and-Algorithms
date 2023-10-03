# Compiler Design

* Link -> https://unacademy.com/course/complete-course-on-compiler-design/U5V0ZQEX

## Syllabus

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a948453-95ac-4e1e-b569-a390172c19e0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ffdc240-2e56-47b7-86fb-71f91ea9c301)

* 6-10 marks usually.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cc01e1b-8046-47d7-9e1c-9e7a88e15735)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/736bc70b-07d4-40fb-86cb-d367fe52bb08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a4d9382-a8a6-47fb-b085-b83676e92c11)

* Syntax Analyser -> [**VERY IMPORTANT**]
* DAG, SSA -> [**VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f15df85c-8fe6-424b-a175-65e219765c00)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8a5a909-bf29-453c-b16c-c1b85685e225)

* Syllabus.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8afd8f42-99b9-4485-8ca5-301e44552cb9)

## introduction-to-compiler-design(1) [28th Sept 2023]

## Introduction

* First compile then we have to run.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94d141ad-484f-49a2-bda4-f38444fc37b1)

* HLL -> High level Language -> For humans
* LLL -> Low Level Language -> For Computer
* LLL Or machine level language or Assembly language.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/100d91e0-dfbe-4dec-bc79-b40a8e96a8db)

* HLL given to **pre-processor**.
* Output of **pre-processor** is **Pure HLL**.
* Pure HLL -> No shortcuts.
* HLL -> Shortcuts there.
* After **pre-processor** is over, we never see **hash** in the code.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b88edbd3-f3d5-4fa8-9056-d718c0383eb4)

* Compiler input -> Pure HLL.
* Compiler output -> LLL Or machine level language or Assembly language(AL).
* Assembler input ->  Assembly language.
* Assembler output -> Relocatable Assembly language or Relocatable machine level machine or Relocatable LLL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2b0b711-fd65-4603-bded-cbd4c544294d)

* **Assembler** will make sure that **code** can move anywhere.
* If we don't do **assembler** then maybe we will loose the data.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f03d016-9ae2-4a57-b80f-a486f16f48d7)

* Relocatable Assembly language or Relocatable machine level machine or Relocatable LLL -> All **three names** are **similar**.
* In a project we have **many programs**.
* They are compiled **individually** and **individually** assembled.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c67de09-909c-466d-bcb1-bd4820bf9274)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e76bc79a-a1a3-4a90-9b3b-a9d0a1793ff6)

* Linker.
* Single Relocatable-Assembly language.
* Loader -> Loading program from Hard-disk(HDD) to main memory(MM).
* The program is in main memory(MM), the file is called as **exc or executable** file.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9c1e213-d7b0-4ca8-b0bc-35d3b5b18e3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be010ae3-4730-4274-beea-30d5b4bcbf4e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07bdc706-0725-47e1-aebc-b64463d95a5e)

* Between ready and running state, who will come first?

> **Ready state** will come **first**.

* First we should be **ready**.
* Before **ready state** we have **new state**, which is making **one process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/545e36b1-a15c-46d6-a4a9-c1d99db87285)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/620f3d72-f12b-408c-bc94-6ffa093b6e76)

* Termination State.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89e76168-04f9-4c2d-bca8-cb5e92b54508)

* Waiting State.
* Input interrupt
* Output interrupt.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/539981db-c472-454e-8b18-f45e17e125a7)

* [**IMPORTANT**]
* **Exc** came means that the program is in **main memory** and it is ready for running state, just processor is required.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c242a56a-b246-4c9a-a8be-d6568666dba1)

* The different states are not needed here. Shown just for explaination.
* We cannot go directly to **loader** without going to **linker**.
* We have to go to **linker** first and from **linker** then we will go to **loader**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d31b496-7eba-465b-9a84-eec73027aed7)

* **Pre-processor** purpose is replacing **shortcut** by **actual code**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/194b6023-2210-4354-bd60-69b8865a7ba5)

* yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcfcf84b-b698-4a5e-8930-84c6505ea7ad)

* The entire story is called as **language processing**.
* In the entire **language processing**, who is there after **compiler**?

> Assembler, Linker, Loader.

* They are called as **cousins of compiler**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c3e5c52-05b2-4a41-ac7c-e3eb733ac170)

* Linking done compile time or linking done running time, which is better?

> We can do it in **both times**. Doing it in **Compile time** is **better**.

* Doing **linking** in **Compile time** is called as **static linking**. [**IMPORTANT**]
* Doing **linking** in **running time or runtime** is called as **dynamic linking**. [**IMPORTANT**]
* Depending on requirement do **linking**.
* Really needed link it that is **dynamic linking**.
* Blindly link first and go that is **static linking**.
* **Static linking** will sometimes **waste space**.
* Which is more important, Space important or CPU time?

> CPU time is more important. [**IMPORTANT**]

* Normally linking is done at **compilation time**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9890af81-68bc-4d3b-9cd0-355ba442fc61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afb98062-a90c-49c5-aff5-77b2b0993e82)

* If the above program is given to **pre-processor**, the **'#' statemenet** is related to **pre-processor**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b6320be-c0a1-4ee6-b1de-ab17bd027777)

* In the program everywhere we have written the shortcut.
* First we define the shortcut then we are using the shortcut everywhere.
* Whenever we say **compile** the **pre-processing** will start. The **pre-processor** will see the **Hash(#) symbol** and immediately go inside. **Square(X)** is the shortcut and **x * x** is the actual statement. The **pre-processor** will come inside the code and wherever the **shortcut** is there it will replace the **shortcut** with the actual statement which is **x * x**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c923197-427d-41cd-9c0d-006e2f9f0213)

* First replace **all the shortcuts with actual statement** and then remove whatever shortcut defination we had in the **'#' statement**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61350518-5c38-4805-bc64-5e5b3f4a0bea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50b6ab6e-0995-4265-af00-c8c9bd645182)

* **Pre-processor** never do any calculations. It will only do **substitution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e2de493-ed0f-40f6-9db9-b44f002cfd67)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef20e3cc-469f-4178-99b6-8fa193d7c520)

* **Pre-processor** never do any calculations. It will only do **substitution** and it will replace all the shortcuts with actual statement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dd93f51-58f7-4fbd-b802-a95cc9f1b623)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47edd883-7620-4f29-9745-6343ef7c530c)

* Do as mentioned in the shortcut. Don't be emotional and add brackets from yourself even though **brackets** are not there. 

## Compiler Introduction

* Compiler will convert from **high level to low level**. Compiler is a **translator**.
* Compiler is a program. It is a **software**.
* Compiler input -> High level language.
* Compiler output -> Low level language.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1fa97632-3fcc-4225-80c3-44cf702d9cab)

* Compiler is a program which will take **High level(HLL)** as **input** and will give **Low level(LLL)** as **output**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66f18681-6520-493d-85d4-6659efef6faf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a982d240-7f4b-4c5c-bbae-adf226e3c7ce)

* They are **functions**.
* There are **6-functions**.
* ICG -> Intermediant Code Generator.
* CO -> Code Optimization.
* TCG -> Target Code Generator.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0716b3d4-f004-4140-a478-86df0d50c6b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1beed268-2873-4dce-99f5-25f40336fc02)

* Lexical Analyzer purpose is **scanner**. It will **scan** the program.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9a1dfdd-9286-479b-b44a-82cb6971cb9f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/929a23c1-4c64-4f9c-9908-f1369443ead0)

* Lexical Analyzer purpose -> Scanning -> Introduction.
* Syntax Analyzer purpose -> Syntax/Physical checking -> Physical problem.
* Semantic Analyzer purpose -> Semantic/meaning/logical checking -> Logical/Mental problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4ccdbb6-45b4-4870-9236-d8a60aed43af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4bbfd5b-973d-43a0-8429-1fc62e67d9a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73b3e97b-b5ea-4a3e-9914-0ce1a4cd4888)

* If the **first three checking(Lexical, Syntax, Semantic)** are **succefully completed** then the program is **syntactically and semantically** correct/perfect.
* Until now we have not done **conversion**. Until now we were just **checking**.
* Purpose of **first three phrases** is **checking**.
* Purpose of **compilation** is **conversion**.
* Final goal is **conversion** only.
* We want to **covert** valid programs only.
* First check/verify program is valid or not. If **valid** then **convert**.
* From **Intermediate Code Generation(ICG)**, **code conversion** story is there.
* **Last three steps** belongs to how to **convert input to output**.
* After **checking** is successful meaning the program we have written is **valid**.
* If  **first three steps** are not there then we are **converting** everyone.
* Checking **first** for **valid program** and then **conversion**.
* Lexical Analyzer input is **HLL is string** and output is **token string**.
* Syntax Analyzer input is **token string** and output is **syntax tree**.
* Semantic Analyzer input is **syntax tree** and output is **modified syntax tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3133bbcb-e227-4fa8-b62f-228609d58786)

* Intermediate Code Generation(ICG) input is **modified syntax tree** and output is **Intermediate code**.
* Code optimization(CO) input is **Intermediate code** and output is **Optimized Intermediate code**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dceec0c-6bce-4ad1-aa90-0b0957818533)

* Target Code Generator(TCG) input is **Optimized Intermediate code** and output is **Target Code**.
* Finally we will get the **Target Code**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79c61c07-826b-4c93-bc80-c49166c7b7c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bab63f9-3995-4f7c-8840-e0836563ca35)

* Who will draw the tree?

> Syntax analyzer will try to **draw** the tree.

* If tree not possible then **syntax error**. Problem in the program.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3e0b790-86d8-47c3-9e77-157fa6734222)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40e25a79-263b-4286-8792-0ffd684ec188)

* **High level to Low level** we have to go via **intermediant code**.
* If we directly go from **High level to Low level** then we will miss so many things.

## lexical-analyzer-part-ii (2) [28th Sept 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a84c112-751d-4d77-858f-d1328b25ba5e)

* The table contains **types** of every symbol.
* That's why the table is called as **symbol table**.
* Purpose of **symbol table**. It contains every variables and it's **type**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c81da880-c839-49a6-88fc-16514228c90c)

* Before **declaration** the table was **empty** because **no variable**.
* Symbol/variable names is nothing but **identifier**.
* **Symbol table** contains **identifiers, identifier's names**, followed by it's **data types**.
* **Identifier** are **variables and functions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8788a27-857f-4c08-83e3-2b8804e410d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6956b6cd-9aa3-4773-9489-2080a7bcaa52)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f44f27c6-a09e-44ce-830d-2f00cb8cc010)

* **Symbol table** contains **identifier's names** and it's information. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b20fd596-873a-4a57-a51b-3ca947d66012)

* If the variables belong to **one function** then **every function** having **one symbol table**.
* Total program not having **one symbol table**. **NO**. **Every function** having **one symbol table**.
* Global variables are stored in **static area**.
* **Symbol table** internally contains the **identifiers** of that particular function.
* After installing **c-compiler** inside our system and now the system knows that **a** is an **identifier**. **a** is an **integer** datatype. **while** is a keyword.
* Can we use operator **x** in c program or not?

> If we want to use it then **x** should be there in the operator list. If it is not there, we cannot use it.

* c program operators are fixed. One fixed table is there.
* c program keywords are fixed. One fixed table is there.
* c program symbol table is not fixed. It keeps on changing from function to function. It is completely based on the **user**. It is the **user table**.
* Symbol table keeps on changing depending upon variables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ef1a6cf-d7a0-4bfc-bbb4-3fd5a92cb332)

* **x** is an **identifier type token**.
* We can check it(**identifier type token**) in the symbol table
* In the symbol table, in which row **x** is there?

> In the first row.

* The token is given which is **(id,1)** [id -> Identifier, 1 -> Token no.]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fefceda3-fd0f-4632-b2b3-1b29807dbfbf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4bb19e8-fdd9-46bb-92e9-78f4b632c9da)

* = -> Assignment operator type token.
* They are **fixed**. So no need to give **token**.
* Only for **new people**, give **token**.
* a -> Identifier token -> (id, 2)
* + -> Addition operator type token.
* b -> Identifier token -> (id, 3)
* * -> Multiplication operator type token.
* 60 -> Integer Constant. [No token required]

* Next phase of the compiler is **syntax analyzer** and it will see **((id,3)** instead of **b**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7928374e-37b3-4c97-8114-21524be34381)

* Table means it is **array**. It has **random access**.
* To give the **token**, **lexical analyzer** is taking more time as it is the **first phase** of the **compiler**.
* **Lexical analyzer** is saving a lot of time for **other phases** of the **compiler** by giving **token numbers**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8aed8a69-0805-415a-941d-a490acb60e83)

* **Lexical analyzer** input is **HLL statement** and the output is **token string**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8feb2328-8c84-4f0c-bfa6-71ffd313eecc)

* Syntax analyzer input is **token string** and the output is **syntax tree**.
* 'c' compiler installed means 'c' language rules are installed as well, which is nothing but **grammer**.
* Grammer is nothing but set of rules.
* Every production is a rule.
* Compiler is a set of rules which is nothing but **grammer**.
* Compiler is installed means set of rules are installed which inturn means that grammer is installed.
* Compiler is installed means grammer is installed. We have grammer. **YES**.
* Grammer means set of rules.
* Compiler is installed means we have grammer and we have string also now.
* Using the grammer can we generate the string?

> Membership problem.

* To generate a tree two things are required, **grammer and string** are required.
* To generate a tree two things are required, for which string and using which grammer?

> So grammer and string required.

* if string not there then for what purpose we are drawing a tree.
* if string there but grammer not there then with what rules we are drawing a tree.
* Without any rules what is the purpose of drawing a tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7702bdc7-96bb-46df-95ef-bd0c18dd98d2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be5eb1a6-b19f-4d79-b556-07c42b913cbe)

* Tree possible then **member**.
* Tree not possible then **not a member**.
* From the c compiler we installed we are getting the **grammer** from there only.
* To generate tree, **grammer and string** are required.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20e4d1fd-0bb4-41c6-91cf-101906aace3f)

* Tree possible then the **user program** is a **valid** program. Using the rules tree is possible.
* Tree not possible then the **user program** is **invalid**.
* Compiler is nothing but grammer there.
* For everything there is a **grammer**.
* Compiler grammer is huge grammer. Different people have different combinations. So many rules are there. WHich rule we have to select?

> What tokens are going on based on them the rules will be taken.

* Syntax analyzer actually needs two inputs **grammer and string**. **Grammer** is build-in.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8590598a-0677-427e-86cf-f7f65dd8b26a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/452af461-fba7-45b5-951c-cf2e3465beb2)

* For every statement in a program, there is **1-tree**.
* Everyline we will draw **1-tree**.
* All trees are connected by root which is **main()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf4babd0-ccd0-4178-b54f-8c7b575d0018)

* For one of the lines **tree is not possible** then **syntax error**.
* Semantic analyzer input is **syntax tree** and output is **modified syntax tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fae415c0-d485-4ae5-81c7-cb5c17d90214)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43efd457-37ea-4feb-a00e-a57fde20443e)

* If we want to do operation between two variables then they should be of **same type**.
* In grammer **function** is called as **variable**.
* In program it is called as **function**.
* Bigger data type cannot come to smaller data type but the smaller data type can come to Bigger data type.
* In **T and F**, there is **multiplication** but there is **type mismatch**, **T** is **float** and **F** is **integer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6999b216-193a-4c75-8276-181789351aa6)

* We are modifying **F**.
* We are converting the **interger** which is **60** into **float** which is **60.0**.
* This is **typecasting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b723bd9-8ae7-441c-ae5d-2833ddc5c1c8)

* **F** is now **float**.
* Type conversion is doing but it is **not possible** then we will show **error message**.
* Type checking will be taken care of by **sementic analyzer**.
* Higher data type to lower data type conversion will give problem but vice-versa is possible.
* **Syntax analyzer** never see data types. **Syntax analyzer** goal is tree creation.
* **Lexical analyzer** work is **only tokens**.
* **Syntax analyzer** work is **only tree**.
* **Sementic analyzer** work is **only type checking**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5582c1a9-a2f3-421d-8f4a-7f3bcb2fc549)

* When to the table but unfortunately there is **no type**. So it is clear that it is an **undeclared variable**.
* **Undeclared variable** is found out when using the **token number** we went to the table and say there is **no type**. That's how we got to know.
* **Sementic analyzer** work is **type checking and undeclared variable**.
* Same variable cannot be declared twice.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc8de4cf-d0c2-4ee7-bd6c-e14e69f0cc8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26bfbe90-f792-4f46-a334-221243cef354)

* Symbol table is empty as declaration is not done.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddf526ae-5ce1-4304-a220-2f5476401d83)

* Lexical analyzer will simplify other phases of the compiler. True.
* If checking not successful it will give errors.
* No errors then ready for converstion.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8ae0e4b-ee86-4325-adab-aaed2b0f7601)

* Checking done, now we are doing **conversion**.
* **Star(*)** has higher priority.
* Every **intermediant operation** will be done in **one intermediant variable(t1, t2)**.
* Assignment operation will never be **intermediant operation**. It is the **final operation**. No temporary variable required.
* We are doing according to **priorities**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e158afac-5499-4765-a755-4ff7a28d4cba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d096526a-fd90-4074-8968-4a61789ab4ba)

* Tokens are required only for **checking** purposes.
* Next is **code optimizatio(CO)**.
* If we are able to do some tweaks/changes to make the code more optimized then do them otherwise leave it as it is.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bebb49fc-0167-4b73-9a4c-35850ac2944b)

* Next is **Target code Generator(TCG)**.
* **Star(*)** -> Mul
* **+** -> Add
* Lastly we want to store the result in **x** because we did **optimization**. So we will write **move/store** at the end.
* Everyline we will use the **opcode**.
* Everyline contains **1-opcode**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de488b7c-2d4a-4a09-afad-7777fb19a5ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9f0da00-e170-4a00-99f6-3b9319d68066)

* First line **Star(*)** -> Mul
* Second line **+** -> Add
* Third line -> Store
* In three line we compressed it.
* **Target code Generator(TCG)** not in syllabus.
* **Code optimization** is the **optional phase** of the compiler.
* While will store in symbol table?

> Lexical analyzer.

* All of the **6-phases** of compiler are having right to store in symbol table.
* We are storing **identifiers** in the symbol table.
* Error handler is another phase of the compiler where all errors are noted down. When total compilation is done then the errors are printed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11caf0ad-9bf5-4347-9802-3bfea47344cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2974783a-02a6-4d99-82a4-31951de58ee8)

* Who can store in symbol table?

> All.

* If **All** option not there then choose **lexical analyzer**.
* Compiler has **6-phases** sometimes **5-phases** are also there.
* **Code optimization** phase is **optional**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/267322ac-7a10-495d-a6d6-8c09cf6d78b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/804197e7-e9fd-4d69-9a25-62df3de80263)

* Middle end of compiler/Optional ways of compiler -> Code optimization
* Front End -> LA to ICF
* Back End -> Target Code Generator(TCG).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dce33b2-345b-4b00-80f0-91f96e9dbba7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a73bdb3-a42b-47f7-ba04-d94405904ebc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b123fdfe-7c9f-4f36-8863-0f7de4ccc8c1)

* Target code means machine instructions.
* Machine means processor.
* After **c compilation** is over whatever result came that is a **machine dependent code**.
* After **Java program compilation** is over whatever result came that is **machine independent code** because the compilation is till **TCG** phase only.
* **Intermediant code** is **machine independent code** as there is **no machine instructions**.
* **Target code** is **machine dependent code**.
* Java compilation is half compilation.
* Another name of **Intermediant code** is **byte code**.
* Between **c and Java compilation**, Java compilation is **faster** as there is **half compilation**.
* Between **c and Java program running**, Java program running will take **more time** as only **half compilation** is done.
* Remaining half compilation and running when Java program running.
* **Java compilation** is **machine independent code** means we can run it in any system.
* Between **c and Java program running**, c program is running faster. We directly have **machine code** available.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92f57125-fcb5-4534-8308-54aff0031ba2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e6a82f3-1802-418b-a726-db3c17938ed1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/513b972d-1d2c-4b9f-a100-417bbffded7c)

* Hardware -> processor.
* Target code as it is related to processor.
* until **Code optimization** it is **platform independent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63bfb52f-282b-4de2-9494-dd41faa60737)

* When we said **compile** on a program **xyz.c** then all of the **6-phases of compiler** started running on **xyz.c**.
* If **more main memory** then go for **single pass compiler**. If at a time all of the **6-phases of compiler** are loaded in **main memory** then it is **single pass compiler**
* If **less main memory** then go for **multiple pass compiler**. If at a time some of the **6-phases of compiler** are loaded in **main memory** then it is **multiple pass compiler**
* If we do **more passes** then **redundant** work is **increased**.
* **multiple pass compiler** advantage is that with **less space** we can manage but **more time** taken.
* Total compilation done at a time -> Single pass compiler.
* Total compilation done in multiple passes -> multipass compiler.
* **Single pass compiler** advantage is that with **less time** taken but we need **more space(main memory space)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cfb3fa9-19d8-4d15-82c1-34e3d4e3fe6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31f614cd-764a-47af-9a52-de5ea8be597c)

* [**IMPORTANT**]
* c compilation advantage -> Running time faster, compilation slow only.
* Java compilation advantage -> Running time more, Platform independet, compilation time less.
* c compiler means **c language, all of the rules**.
* c compiler -> Software -> Written in some programming language.
* c compiler rules are written in **any language**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37b82462-bdfd-4caa-be96-e9f001dbe2be)

* Yes.

## lexical-analyzer-part-iii (3) [29th Sept 2023]

## Lexical Analyzer(LA)

* Expected Question -> Find no. of tokens?

> Program will be given and we have to Find no. of tokens.

* Another name for **parser** is **syntax analyzer**.
* It is called **parser** because it will create **parse tree**.
* Another name for **parse tree** is **syntax tree**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00be1088-358b-40a6-a130-16a79105200f)

* 100 rows and 30 columns.
* Column will increase first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1098110-aaa9-4462-b22b-4c4f7a6bd69c)

* This is the program we are compiling.
* This is the **input** to **LA**.
* First row and first column we have **LA**.
* If we say **LA** to start then it will start from First row and first column, which is r=1, c=1.
* LA's goal -> Getting the tokens.
* Parser's goal -> Creating parse tree.
* To create **parse tree**, **grammer and string** are needed.
* String is the **program**. **Program** is nothing but a **string**.
* Grammer is build-in with the **c** compiler.
* Grammer is inside the computer.
* Grammer means set of rules.
* Grammer started from the start symbol(S). We cannot start it from anywhere.
* D -> Declaration.
* F -> Function Call.
* E -> Arithmetic Expression
* W -> While Loop
* For everything there is **1-variable**. [**IMPORTANT**]
* The **variable/variable name** should be there in the **variable list**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2858714-79a8-47f8-99a3-4032bfc6e131)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce4c6da8-5d15-4304-ab56-8e2b1fea4db1)

* **B** will generate all.
* **S** is all strings of **a's and b's** ending with **a**.
* **Parser** is at the **start symbol** and in front of **parser** many possibilites are there, **S -> D, S -> F, S -> E and S -> W** and many more.
* **Parser** is at the **start symbol** and it is having **dilemma**. Infront of it many possibilites and don't know which possibility to take.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eeb7c4d9-80e6-49d0-a657-1b7d5bd12cb3)

* **LA** is giving **token**.
* **LA** is at the first place of the program.
* When **parser** will ask for the **nexttoken()** then only **LA** will start.
* When **parser** will ask for the **nexttoken()** then only **LA** will give the tokens.
* After reading few characters **LA** got to know it is a **token**.
* **i, n and t** individually are tokens as well.
* **int** is combined also a tokens.
* Then we have to go for **longest matching**.
* Individually token and combined also token then we have to go for **combine** which is **longest matching**.
* **LA** follows **longest matching**.
* Individually token but combined is not a token then we have to go for **individually**.
* a,b -> Identifier type token
* Star(*) -> Operator type token.
* **,** -> Separator type token.
* We have to say what **type** of token it is? we just can't say **token**.
* This is **individually token**.
* a * b -> It is not an identifier. It is an expression. It cannot be a token.
* Combined is one **expression**. It cannot be a token then go for **individual**.
* If individually token as well as combined also token then take **combined**. [**IMPORTANT**]
* If individually token and combined not token then take **individually**. [**IMPORTANT**]
* Between individual and longest(combined) we will go for **longest(combined)** if **longest(combined)** is available otherwise we will go with **individual**.
* a -> Identifier type token
* **;** -> Separator type token.
* Both are token.
* Combined **a;** is what type of **token**?

> Combined it is not an identifier. Only **a** is **identifier**. Only **;** is separator.

* As combined, **a;** is not a token, so we have to go with **individually**.
* We are not calculating **no. of characters**, we are calculating **no. of tokens**.
* Token means if possible, **group** is there. If not then **separate** and do **individually**.
* **LA** post probable mistake? [**IMPORTANT**]

> Students will take individually. Don't take individual take longest match. If longest **possible** then don't go individual. If longest **not possible** then go for individually. 

* **=** -> Assignment type token.
* **==** -> Equal type token.

* Individuall also token(=) and combined also token(==).
* So take the **longest token** which is **==**. [**IMPORTANT**]
* So it is **1-token** because combined also token.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d62c6169-0967-4c10-99d3-a3afd8ca0779)

* **+** -> Operator type token. [Token name -> Binary Addition]
* **++** -> Operator type token. [Token name -> Uniary incrementation]
* Individuall also token(+) and combined also token(++).
* So take the **longest token** which is **++**. [**IMPORTANT**]
* So it is **1-token** because combined also token.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be261fcc-a9c8-4615-8a4b-94d3747b489a)

* **a+=b** -> a = a + b.
* **+=** -> In the operator list it is there. So it is **1-token**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00b93dc0-a886-44c6-8f85-5dd6829306f2)

* In c-language while calculating **tokens** we have to go for **longest matching**.
* If we have doubt if it is **1-token** or not then see the **operator list**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00dff6b8-ad0a-4caa-aba7-66f89fcecc06)

* **LA** will do **tokens**. Whenever **parser** needed **token** then parser will ask **LA** for tokens then **LA** will give tokens.
* **Parser** asking for tokens because in front of **parser** there are many possibilities.
* **LA** and **parser** are communicating with each other.

* **int** -> Data type token
* **,** -> Separator type token
* **int,** -> Combined no meaning.
* So we have to do **individually** here and we have **2-tokens** which are **int and ',' as we are doing **individually**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d2a50b9-3ea2-4340-8823-a2932ee57aa4)

* If possible we will **combine**, if not possible we will not combine and do **individually**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f65aea51-83c7-4499-91c5-57f07e599cff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/209166f2-6362-4846-88f4-8a81d826551a)

* **LA** will return the token to **parser**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1524b512-9f10-4b1f-8bf1-e34f4e09ac12)

* **LA** and **parser** at any time can store in **symbol table**.
* If **LA** and **parser** at any point of time want to take they can take from **symbol table**.
* At any time **errors** will be informed to **error handlers**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d62cd302-f619-4815-95fc-d13d638887ac)

* Rule is saying that **open bracket** should come **next** but the programmer has written that **Plus(+)** is coming next.  Who is correct?

> Rule only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a6a78bc-d457-4627-ad23-b7cbe2758963)

* Yes.
* Token that is coming from the program is *+** but according to rule it is expecting **open bracket** but whatever he is expecting according to the rule, it is not coming. Whom he will blame?

> Programmer only.

* Now he will go and inform to **error handler**.
* Who is informing to error handler?

> Parser

* Parser expecting open bracket but **+** came.
* Error Message -> Syntax error: bracket expected but **+** came.
* The **error handler** will ask the **LA** as of now n the program at which place you are?

> Row no 25 and column no 4.

* We have to print row and column no also.
* **Error Message** -> Row no 25 and column no 4 there is a syntax error: bracket expected but **+** came.
* **LA** is giving the **row and column number**.
* **LA** is the only one who knows in the program how many rows and columns are there and at which place it is there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91d486bf-1c52-4234-bc2d-feef3f2b1dac)

* Primary functions of **LA** -> Tokens, providing **row and column** no. [**IMPORTANT**]
* Who is scanning the program?

> **LA**.

* Other people don't know.
* Further people don't read the program, they read the **token string**.
* In the **token string**, no row or column there.
* If **1-error came** then also we will **continue further**. We want all of the errors.
* **id** means identifier.
* Who needs types or who is checking types?

> Semantic analyzer.

* The error will be sent to **error handler** by the **Semantic analyzer**.
* The **error handler** will ask for the row and column nos from **Semantic analyzer**.
* **Error Message** -> Row no 75 and column no 15 there is a semantic error: variable 'x' is undeclared.
* Whenever tree creation is going and wherever **types** are required/there **semantic analzer** will come.
* Whenever tokens are required **LA** will take care.
* Whenever grammer is required **Syntax analyzer** will take care.
* All three(semantic, LA, Syntax) are communicating with each other. [**IMPORTANT**]
* The program will be **scanned** by the **three(semantic, LA, Syntax)** people for **1-time** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e980dbe-70de-4f97-83d4-3cc6d5cf008a)

* Tree creating is keep on going, at which place **semantic analyzer** will come? 

> Token is identifier. Whenever **LA** will say that the **next token** is an **identifier**. **Identifier** means data type is there. So **semantic analyzer** will go and check. [**IMPORTANT**]

* **LA** is only reading the program. Depending on the requirements it will give **tokens**.
* They(semantic, LA, Syntax) are doing **at a time**.
* When the above process is going on **semantic analyzer** is **type cheking**, **LA** is **creating tokens**, **syntax analyzer** is **creating syntax tree**. Everyone doing their part/work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/984dd01a-f46f-4284-8aa6-5084e820c92a)

* **POINTS**:-

1) **LA** is first phase of the **compiler** which is also known as **scanner**.
2) **LA** will divide the given program into meaningful string which are known as **tokens**. Different types of tokens are as follows:-

* Identifier(id) type token.
* Operator type token.
* Keyword type token.
* Separator type token.

3) **LA** will eliminate **white space characters** and **comment lines**. They are not counted as **tokens**.

* Comments are for **user/programmer** convenience. BY seeing comments **compiler** will ignore/skip them.
* By seeing starting of the comment until ending we will **skip it**.
* // -> Single line comment

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd992c4d-0afb-4a7a-aeb8-e9a9c8a516d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/568b18bf-f2db-43e4-a7a5-8dc8453deef7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a51b595-a3ac-4d6a-8421-4467c906a7b7)

* Comments.
* Doing **tokens** will be stopped when the compiler see **'/*'** this in the program and until the compiler sees **'*/**. After **'*/**, the compiler can start doing **tokens** again.
* Inbetween nothing is there.
* By seeing comments compiler will skip it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8571cd3-72a3-4697-84f6-2e2f80a88321)

* int a -> Two tokens(int and a). The white space character between **int and a** is not counted.
* If we don't keep gap between **int and a** then it will be a **different meaning** which is **inta**. It is a variable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4879740a-222a-4ffe-9db7-1c5b7cad5697)

* **inta** variable.
* If we want data type is **int** and variable is **a** then we have to keep **gap**.
* Because of the **gap** it became **two tokens**.
* **Gap** is not a token.
* Functionality of **LA** -> tokens, comments are eliminations, white space characters are eliminations, help in giving error messages by providing row and column number. [**IMPORTANT**]
* **White space characters** -> blank space, tab space, new line character.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23d14526-ca20-43ac-a70c-b08650b02d45)

4) **LA** also helps in giving error messages by providing row and column number.

* Expected question -> Finding no. of tokens? [Program will be given]
* [**IMPORTANT**]

### Examples

* Normally **declaration** first and then initialization.
* We have done **reverse** but still no problem.
* The goal is only tokens.
* He is not bothered about syntax, semantic, declared or undeclared.
* Declaration not there still it will work but his goal is only **tokens**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7af8815-fa80-4400-9570-96155928a474)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5e40406-9a1b-4821-b8f8-0420d8086310)

* How many tokens does the program contain or count no. of tokens in the program?

> 

* **S** is starting state.
* We are explaining only tokens. There is **no parser** nothing.
* To do **tokenization** we are using **one automata** that is called as **finite automata** which is **DFA**.
* To do **tokenization** we are using **DFA** as the **automata**.
* The **LA** phase of compiler will do the **tokenization**.
* To create the **pharse tree** we are using **PDA** as the **automata**.
* For **type checking** we are using **LBA/TM** as the **automata**.
* For **LA** we are using **DFA** as the **automata**.
* If **DFA** not there then there is **no LA** which means **no tokens**.
* If **PDA** not there then no **syntax analyzer**.
* If **LBA/TM** not there then no **semantic analyzer**.
* If at all these three(LA, syntax, semantic) people are not there then there is **no compiler**.
* **No compiler** means no programming language.
* **DFA** will always start from **starting state**.
* States are more, remembering capability is **more**.
* **S** means nothing over.
* **S1** means **a** over.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af33f0c1-d5a0-400a-9f03-a6851bde6c7d)

* To do **tokens** we are using **DFA**. The phase of the compile is **LA**.
* **S1** state indicate **i** over.
* **i** is an **identifier**. We are looking for **longest matching** so we will **wait**.
* If we don't want to **wait** then go to **final state**.
* **Waiting** means don't go to **final state**.
* **S2** state indicate **in** over.
* **in** can be **identifier token**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58d98c81-188e-4efa-8c21-93c2621d18c2)

* **S3** state indicate **int** over.
* **int** can be **identifier token**
* What should come further so that we can increase?

> Based on the next one we will take action.

* By seeing the **blank** we got confirmation that the previous one is a **token**.
* Most of the time we have to read one **extra/next symbol** to confirm that the previous one is a **token**.
* So **stop** and confirm.
* **S4** state which is **final state** means that token is confirmed.
* Token name -> int -> It is of Keyword type -> return(int, keyword).
* Token type -> Keyword.
* We stopped because token is confirmed.
* If token confirmed then stop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef759cf2-3b63-4662-8a56-f9c716060a2e)

* Token confirmed means go to **final state**. [**IMPORTANT**]
* Hope is there then go further if hope is not there then stop and confirm.
* We read one extra character. It is the **blank** character.
* Excluding **blank**, **int** is a **token**.
* Sometimes we have to read **some extra**.
* **S3** means **int** over.
* **int** followed by **blank** means that **int** is a **token**.
* **inta** -> variable name -> Identifier.
* **inta;** -> We have two tokens(inta and ;).
* **;** -> Separator type.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abfbea14-d572-4d0d-8072-abba26637799)

* After reading extra(;) we got to know that the extra part is not part of the token and it is **separate**. It means that previous one is **1-token** and this **extra part** maybe next token.
* **inta;** cannot be **one token**.
* When we say it is an **identifier type** token then **token no** required.
* return(inta, id) -> **token no** required, from the symbol table we got the **token no** -> return(id, 5)
* If we go to **5th row** of symbol table then we will see **variable name 'inta'**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7606872c-ebd2-49a3-86c0-0f6a6d2c242b)

* Every **identifier(id)** will be there in the symbol table.
* In **S3** we have to cover all possibilities. That is **DFA**.
* In **DFA** we have to check all combinations.
* Every possibility we have to cover.
* Changing state means we are remembering something new.
* S1 means **i** over.
* S2 means **in** over.
* We will continue till confirmation will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2288ec9-b857-43c8-800f-c101bfc41b74)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a88c5ce6-4076-499d-b048-83fae8901536)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/762c433a-3208-4e50-ae6c-cb7d975849b9)

* Whenever there is a function so system must be followed.
* function name is **main() only**.
* Answer is **36**. [Answer]
* **LA** uses **DFA**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4413a64b-4c05-4450-a0ba-d06f0d2a71a3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1da73688-f88a-4451-a456-6d0d438e0eb7)

* How many tokens are there. Count everyone? 
* Double quote starting and double quote ending is **one string**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/171d6e5a-57d8-4f93-a73f-722348eefccc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c58ebbc-5417-414a-bf3b-8766e3dea359)

* Answer is **24**.
* 'a' -> One token because it is **one character**.
* 10.75 -> One float.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8da6227f-468c-4c17-b7cd-ea6d73b355c3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/786d529e-06db-4b44-880a-cc623607dad2)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d69c55e6-81d0-4cb3-972f-aa93d255aa8d)

* Example
* There is a comment(//) which is a single line comment.
* We have to skip the comment.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee826e2a-af07-4ac8-9550-522d96bc1628)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dc604f4-c3bd-4e91-b339-216ec63902e1)

* Answer is **31** [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79cc5bf8-7a75-40c6-b3ee-03a019b86b9b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/917f156f-1e39-4983-b415-67945592a92c)

## parsing-part-i (4) [29th Sept 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c96c02e0-b39d-4492-9295-d3b229025406)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c778a06-8c81-4dd5-ae9b-3ca3fd1f8804)

* Example.
* *c -> Expression not a token.
* * -> Operator
* c -> Operand.
* *c -> 2-tokens( * and c).
* *ccc -> 2-tokens( * and ccc).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/355ea0f3-cbd7-4302-937b-231195c3f481)

* a * b -> 3-tokens.
* In **7th and 8th** line the **comments** are replaced by **blank/space** so they are same as **4th and 5th** lines.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47b833cb-fa45-4d9b-9ded-97c509dc04fa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/778a4d9d-9492-479b-b82c-30b24e90ea6b)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b00d7a9b-557e-433a-b9b1-e458ba878db0)

* Example
* Between open and closed bracket, open bracket should come first.
* if )a( -> Syntax rule.
* Goal is how many tokens. Tokens only find out.
* Problem with syntax or semantic maybe. No problem with tokens.
* Answer -> 36.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78244546-d92b-4ca4-910f-b2b507214e3b)

* While(1) -> Condition True.
* While loop keeps on printing **abc**, it will go to infinite loop.
* While condition will never fail.
* It will never stop. It will print **abc**.
* It is a **runtime error**. It is not a **compile time error**.
* While running it is everytime **True**.
* Compile will just **scan** just one time.

> In the above program there is an infinite loop story but that infinite loop problem is at which phase of the compiler? Infinite loop problem is none of the phases of the compiler. Why running the program, the infinite loop problem will come. 

* We have one program and when we compiled the program **lexical, semantic, syntax** didn't give any errors. How will give further errors?

> No one will give further errors as checking is over.

* After the first three phases of the compiler, the remaining phases are for **conversion** purposes and not for **checking** purposes.
* The first three phases of the compiler are for **checking** purposes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f8804aa-b29f-4a0c-bf10-a1ae81cf9bf9)

* Answer is **36**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b8184cb-3a52-4ce8-8e38-da94ec7f2bdf)

* In terms of **tokens** no problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/359ad3ce-9523-4004-a25d-5f6a82f4b1a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db18475e-fdce-4d12-bb8f-ddbd4b4a805a)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eaa67d7a-1f5f-49fe-9cd1-d31d858a5a05)

* Until now **22** tokens.
* /* -> Comment started.
* It is a **multi-line** comment.
* **multi-line** comment started, so comment ending should come. Until comment ending comes, the compiler will **skip**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d86f0464-8537-4697-9bd5-90f0c4311f86)

* Compiler skipped and the total program is over.
* Compiler is unable to find out matching one.
* Compiler will give **lexical error**. [**IMPORTANT**]
* This is the **lexical error**.
* He is trying for token but unable to decide, total program is over -> Example of Lexical Error. [**IMPORTANT**]
* Before **lexical error** there are **22** tokens.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92f3db27-5db4-44a9-98ee-f1520629506b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6878d076-bfc9-49c2-adc9-0052941b1a27)

* Example of Lexical Error [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4046a7a2-96fb-4d9d-8dcd-7a13749d3239)

* How many tokens?

> Until **22** no problem. Further problem there. Finally there is a **Lexical Error** in this problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/165d5a43-549c-4b00-b5c6-21883ea6b075)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ed305b6-bbe3-4c08-9d1d-0d4b6eec7754)

* If this is the problem then **23** is the answer.
* We can say something is a **string** when it is in **double quotes("")**.
* String cannot go to different lines. Write in one line.
* Whatever we are thinking write it in a single line.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6750bf56-ab3a-4615-aabb-8b6dc34c1a4f)

* Identifier.
* Because of identifier we cannot write **20 characters**.
* For every identifier there is a limit.
* Giving **very big/larger name** to an **identifier** is an example of **lexical error**.
* There is a limitations.
* Don't give very big identifier names.
* We are talking about **identifier size**.
* Example of **lexical error** -> Comment started but comment ending not there. Compiler is unable to find out the tokens -> Larger identifier names.
* Double qoutes starting and double quotes ending is one string but we have to write Double qoutes starting and double quotes ending in one line only. If we keep multiple lines then the string is considered to be **two different strings**. There is no relation between them.
* String should be **continuous**. In one line only string should be written.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/474b2690-3fa4-4d4a-b48c-383a0ad2137c)

* String not ending with double quotes -> Syntax error.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dabcb5ad-8ea0-4167-a8ab-c39d754a9cbb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e80eabd-324e-487f-b053-1bbe5dd84deb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56c0aba8-1324-4379-a908-ee5f2fcfabfd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95e63705-47b0-4c42-91ec-cb8ba300f193)

* Multi-line comment. Multi-line string not there.
* By default at the end of the line, string is over.
* Lexical errors are very less.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff61d488-43d7-4909-aa45-200c34522cc7)

* Example.
* How many tokens?
* Answer -> 13 tokens.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aacbd53c-af36-4e72-a19f-b072159b6e52)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/919a2252-e670-43cb-8435-1ceb897f99da)

* **Two operands** we have written side by side -> Syntax Error.
* [**IMPORTANT**]
* Token means **longest matching**.
* Which one of the following is said to be token without reading next input symbol/character?

a) int -> We cannot say without reading the next input -> inta.
b) float -> We cannot say without reading the next input -> floata.
c) return -> We cannot say without reading the next input -> returna.
d) ; -> **;** followed by something cannot be a **Token**. **;** itself is **one token**. [Answer]
e) ( -> **(** followed by something cannot be a **Token**. **(** itself is **one token**. [Answer]
f) , -> **,** followed by something cannot be a **Token**. **,** itself is **one token**. [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a216649-8301-40ac-b864-888c4e66cc1f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/791f722d-39c6-4dd0-b1f8-640310eeb320)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adfe8861-9f9a-44eb-b581-d3ba3f279160)

* **Separators** are considered to be **one-one tokens**. [**IMPORTANT**]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15f8e9b0-58b8-4721-8f82-7ff1ceb86d61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9ca0ea2-ed75-4661-9ef5-d43025fa6dd4)

* TOC.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a921a8d5-c114-4232-b056-b5c53ffc1894)

* 2 productions
* Terminal(T) -> a
* Purpose of grammer -> Generating strings.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2b4610d-8447-4cbd-9eeb-485d09b76f10)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58fc8447-e79b-4898-9a79-623a55ae52f7)

* Grammer will generate infinite language
* Minimum string -> a
* CFG will generate CFL.
* **S** means **2-possibilities**.
* Concentrate about **variables**.
* Recursion is there(S -> aS).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4c719fa-211b-40e8-bf6e-c51f05b8c511)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc02f221-3831-420c-8325-d3ec3fab12be)

* We can use anyone.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c9f80b2-88a4-4bf1-a968-47a1045a28d0)

* We have to read the tree from **left to right** in leaf nodes.
* How many trees possible?

> Two trees possible.

* For drawing tree, **grammer and string** is needed.
* Parser -> Syntax analyzer -> Needs grammer and string.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c32774d8-dca5-43c4-98dd-5e675c9b99b0)

* From the given grammer to generate a string **more than one tree** is possible. Then that grammer is called as **ambigious grammer**.
* If we can show for a given grammer and to generate a string multiple trees are possible then that grammer is an **ambigious grammer**.
* 2-parse trees possible.
* If more than **1-parse trees** possible for any string of a given grammer then it is **ambigious grammer**.
* If **1-parse tree** possible then not **ambigious grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/348d2e06-40f2-4dfb-871f-f4af0656ab3f)

* The grammer will generate many strings.
* String -> a, aa, aaa, ........
* Minimal string -> a
* For **Minimal string -> a** only **1-tree** is possible.
* The grammer is **ambigious grammer** doesnt mean that for every string more than **1-parse tree** possible.
* **Ambigious** means that there exists **atleast one string** to whom more than **1-parse tree** possible.
* Even though it is **Ambigious grammer** for some strings only **1-parse tree** possible.
* If any grammer is **Ambigious grammer** that means that there exists **atleast one string** to whom more than **1-parse tree** possible. Not for **every string** more than **1-parse tree** possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5a3f325-2565-4076-bdf7-f13265a2cb37)

* A grammer(G) is said to be **Ambigious grammer** if we can find **atleast one string** to whom more than **1-parse tree** possible.
* To say **Ambigious grammer**, **one string** is enough.

* Question:-
* A grammer(G) is said to be **Ambigious grammer**? Which of the following is true?

a) Every string should have multiple trees. [Need not be]
b) Every string cannot have multiple trees. [NO]
c) A grammer(G) is said to be **Ambigious grammer** if we can find **atleast one string** to whom more than **1-parse tree** possible. [Answer]

* Find one string and stop it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cca3f354-d2b9-4e7b-9f6c-ecc1c0d62a9a)

* Read the leaf nodes from **left to right**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f21eba5-04a7-4e92-b652-29cd20b0e5e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3521396c-57c1-4bd8-a189-7c1e7353134f)

* Question:- [Expected Questions]
* How many parse trees possible for the string **aaa**?

> 4 parse trees

* Question:-
* Every CFG is ambigious?

> Need Not be.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ee2aad7-6b55-4bf3-9867-ae588dc00057)

* Two string are possible.
* Every **CFG** need not be **ambigious**. [**IMPORTANT**]
* Some CFG is ambigious?

> Yes.

* No CFG is ambigious?

> False.

* CFG generates CFL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b13c1c9-3c49-4844-8a5c-d95d33cf96ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0556adc-0293-4868-a832-09f6b5349f7b)

* Example.
* Capital letters are variables and rest are terminals.
* Variable -> E
* Terminal -> +, * , id
* Epsilon -> Special Person -> Weight is Zero(0).
* id -> identifier -> One variable name.
* It is **CFG**.
* Recursion also there.
* Grammer will generate infinite strings.
* Minimal string -> Epsilon.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2abd00d2-0a6d-418a-aa5d-d2e958bfc45d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e3a60c7-02cd-430e-a5d8-dd0b3c003818)

* E -> E + E -> id + id
* Read from left to right.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a958b224-c767-4a87-8ac8-c365607dbe14)

* With the plus(+) operator many operations will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb808361-b3d7-402d-96b0-56158fa83317)

* Any no. of star(*) and any no. of plus(+) possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d2d9b30-4d7e-452e-a8e7-9fc4543c7be2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/796da8d4-170e-46e1-8899-3a681f75793c)

* Both the trees are generating **same**.
* Simply read from **left to right**.
* The above grammer is generating some string in **multiple ways** so it is **ambigious grammer**.
* It is **ambigious grammer**. So **Stop**. We just have to find **atleast one string** with multiple parse trees possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/148a00b2-df5d-4360-a26f-0ffa3786044b)

* [**IMPORTANT**]
* It is generating combinations of plus and star. It is generating plus only. It is generating star only.
* It is a **CFG** that is generating all **arithmetic expression** over the operator(+, *).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2ac780f-cd03-4df9-85ab-e418e1ee9c0e)

* We will get **arithmetic expression** for operators(- and /) as well.
* It is a **CFG** that is generating all **arithmetic expression** over the operator(+, *, - and /).
* It is a **CFG** for set of all **arithmetic expression**.
* There is a **CFG** for **for loop, while loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85bd6be2-c8d8-4911-b734-bfd3d648c886)

* It is Ambigious grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0cd48fa-8df8-481c-9e8f-6c0bf33b8ff1)

* According to c-language this expression answer is **23**.
* This is the answer we are expecting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb1f7c65-58e8-4d7b-bd27-c993dca346bf)

* We started from **top**.
* Every program executing will start from **top** only.
* Whoever is visible first, they are having **left priority**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8823f299-149d-410c-ab9d-44d37a01e6a2)

* **Highest priority** people will be at the **down/bottom** of the tree. They will be the **last person**.
* **Star(*)** is at the **down/bottom** of the tree. **Star(*)** has the **Highest priority**.
* After **Star(*)**, **plus(+)** which has lower priority compared to **Star(*)**.
* According to the tree, last people have the highest priority and the last people are the terminals. Which means that **operands** have the highest priority.
* After **operands** next comes the **operators**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21b3cc00-b53b-496f-8edc-5012c42f7908)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98098aca-02d2-43bf-840b-354441bddb6f)

* Every time **operands** only have the highest priority. Bottom people will be done **first**.
* Highest operator is **star(*)** and next is **plus(+)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3656a499-d1e1-46fe-83dd-a69304baa1a2)

* According to the **left tree**, answer is **23**. [First tree]
* According to the **right tree**, answer is **35**. [Second Tree]
* If the grammer is **ambigious** means that there are **multiple trees** and for those multiple trees we have **multiple answers** as well. [Problem of **ambigious** grammer]
* The grammer is having problem. [**IMPORTANT**]
* Multiple trees means multiple answers.
* According to **c-language** it contains the **first tree** because in the tree **star(*)** has the highest priority and in c-language also **star(*)** has the highest priority.
* According to **c-language** contains **first tree**.
* The two trees came from the **above grammer**. So **this grammer** is not there in the **c-compiler**.
* The **c-compiler** will generate only **1-tree**.
* **c-compiler** grammer is **unambigious**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37b41297-c5c0-4cd7-be56-60439e14e42d)

* While writing compiler we cannot write some **ambigious grammer**.
* Please write always **unambigious grammer** for compiler.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fffbbe09-f94a-4853-beb3-f9d908a15f42)

* Multiple tree means multiple answers which we don't want. So we have to convert the above ambigious grammer into equivalent unambigious grammer. [NOTE]

## Conversion From Ambigious to unambigious grammer, According to **c-language**

* According to **c-language** which is **( * > +)**, **star(*)** is **greater than plus(+)** .
* We want **first tree**.
* Here only in **1-way** we want. Previosuly multiple ways were possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5fd7598f-5daf-4c4b-be78-4e6f6bdaa36d)

* Variable(E) having three choices. We can take anyone. Because of this only, we can **take anyone**, two trees came and made the grammer **Ambigious** and we got multiple answers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e0a703c-729b-4adb-b338-8e1d2b381d45)

* Don't say anyone now. Now **1** only.
* According to **c-language**, **plus(+)** has **least priority**.
* **Least priority** person should come **first**.
* **Least priority** person write **first**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d56013cf-b070-4f6e-bd8b-4631800670ad)

* All people in the **same level** problems will come.
* If we want to make something nice then go for **levels**.
* Different levels are going on so **different variables** are coming.
* In previous grammer there is **one level**. For **one level**, one variable is enough.
* If new variable not there then same variable we have to write.
* **id** should be in the **last level**.
* In the top level we have taken **plus(+)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95fc6d76-63bc-4e83-89a5-c45d41e799f8)

* No chance of directly taking **star(*)**.
* We have to come to **E** first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9410841a-7b8f-46c4-bb69-c07f44b4ee47)

* So **second tree gone**. Only first tree possible.
* We want **equivalent grammer**.
* **Equivalent grammer** -> Whatever previous grammer generating, it should generate the same grammer.
* It should be **one way only**. Means **1-parse tree** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f4d16b2-15aa-4721-b2ea-f765e5332d66)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39009e03-5b3b-43f7-81f2-2b87b93f683c)

* [**IMPORTANT**]
* We cannot directly get **star(*) or id** like the previous grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8e05792-e687-4da0-a53f-64c4d0718a80)

* We cannot go back. From next level we cannot come back to previous level.
* There are **rules and regulations**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be9b1cf9-c0fe-4f31-b822-f6677108b7fc)

* We want both plus and star, so we will first take plus then we will take star.
* In the previous one **no condition**. They are in the **same level**.
* In this one there are **conditions** and they are on **different levels**.
* Both the grammers are **same** because they are generating same strings but instead of generating a single using many ways now we are having **one way** only.
* We have introduced new variables everytime so that we can go to **different levels**.
* If new variables not there then we cannot go to **different levels**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da3339a7-c5db-42d0-98c8-18619decced0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eca22a20-0ffa-409f-84fc-27fb0cc9e7c9)

* According to c-language.
* **Same priority** means **same level**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8ec94ef-e70e-42c2-91d3-a87f52f4774e)

* Bracket is special person.
* Bracket is **highest priority**.
* So keep it at the **last level**.
* Inside **bracket** anyone can come. So keep **start symbol(E)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dce06674-46bc-4088-9f3d-9d7729be22e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8483b579-639e-4405-95f8-aaf9af29a490)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9168ff5-4d90-4ea5-b712-0f9c0587aa21)

* [**IMPORTANT**]
* Both will generate **arithmetic expressions**.
* In **c-compiler** the **above grammer** came.
* **Divide(/)** is greater than **minus(-)**.
* Same level means **same priority**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03f5b0f9-9e2b-4013-9f63-57ccae44348e)

* Question.
* In this grammer, star and plus operator which is highest priority?

> Both are **same**. Because of **same level**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e02b1ca-0369-49fd-b749-d742f5d8d939)

* Question.
* In this grammer, star and plus operator which is highest priority?

> Star(*). Because of different level.

* Star(*) is bottom level which means higher priority.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9b0de02-c107-476a-a825-5e6420c1022f)

* Question.
* In this grammer, star and plus operator which is highest priority?

> Plus(+) and divide(/). Because of different level.

* Plus(+) is bottom level which means higher priority.

* In this grammer -> [**IMPORTANT**] words.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1064db82-f6bf-4ac0-9324-f4c4c89bd7f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5f78ff5-9d27-46d2-bb89-87ed9dfbb02b)

* [**IMPORTANT**]

## parsing-part-ii(5) [1st Oct 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a90924c8-1cfd-4d69-b367-859af1d03c35)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/969f8885-7da9-4b4c-9b8d-7f5609cccfba)

* There are **2-grammers**.
* 1st Grammer -> Set of all the arithmetic Expressions over the operatons(+,-, *, /) and over the operand(id).
* Variables -> E
* Terminals -> Anything except Variables.
* Whether it is **ambigious or unambigious**, **operand** has the highest priority.
* Don't think much about **operands**. Throw them in the last level. Just think about **operators**.
* If two people are having different priority then they will be in different levels. [**IMPORTANT**]
* If two people are having same priority then they will be in same level. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69de6f4f-6fc9-426b-93ce-d8e57b1eede4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01b83a8b-1d22-4220-abc8-f52dd1d403af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13c3dc5c-f922-4e75-98e1-f7fb176bb4f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9c763ba-02d4-476b-9ab2-3f033b0971c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e5c53b7-3396-466e-a77a-d8d775e62467)

* We are expanding **left side** means that we are going **left side down** indicating that **down** will be done first. In the tree **bottom** will be done first.
* It means that **left side star(*)** will be done first then **right side star(*)**.
* According to **c-language** between **two multiplication**, **left side** multiplication is done **first** and then the **right side** multiplication is done.
* Both the multiplication having **same priority**. Associativity is from **left to right**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a5769c6-e7d0-4f7b-a8b9-a7666983c3b8)

* It means that closing right side and opening left side which is **left to right**.
* The below grammer is only having **left to right**.
* If we want **1 more star(*)** then left only we can expand.
* The above grammer is having both **left to right and right to left**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18e95689-5eff-44f9-bb08-14c7f612f59a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9750e86a-96a8-4fa1-ab09-b752313bc6a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b028bfd-05e5-4662-bf32-354808b0eb40)

* Everytime, we are introducing new variables.
* We are writing them in different levels because of different priorities.
* We are introducing new variable on the **right side** means that if we want the **same operator** again then right side expansion not possible. Left side only we can expand. Left side only we can go down means **left to right** associativity.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bebec62-a8a8-4776-89f3-a1ec23f95ac2)

* **Left to right** associativity.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86784c47-1e82-477a-869d-ba47c7cf4115)

* This is **right to left** associativity.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7c6f7ab-0d08-436a-96e2-429a6c399d25)

* Associativity possible in both ways.
* Not only introducing the new variable but which side we are introducing the new variable also matters.
* In the original grammer, both the side **left to right** or **right to left** associativity both are possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8608096-d932-4507-9360-3feb4965aac1)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69437560-0462-4469-afb7-a4c12a988a4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c56cb3db-129b-4aeb-bc34-ac7b7947af11)

* Question [**IMPORTANT**]
* **Bracket** is by default at last place.
* As **minus(-)** has **right to left** associativity means that it has to expand on the **right side** so put the new character on the **left side** like **A -> B - A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed468c2c-09ed-4d97-92ed-965c965427f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b940c2d-d1fd-467c-83ae-3431efa188af)

* [**IMPORTANT**]
* Same levels having **same priority**.
* Compiler is constructed using **unambigious rules**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eec84bd6-4565-4f7d-95df-36773851abfe)

* Sometimes **unit productions** are needed for **unambigious grammer**.
* Boolean Expression -> Final answer is 0 or 1.
* **B** is **bit** it can be either **0 or 1**.
* With **B -> B or B** we will get so many **OR** operators.
* With **OR** operator we can write so many people.
* With **OR** operator we can generate every possible combination.
* With **OR** operator there is a sequence possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41db483a-ffda-4d2e-bb06-dafaad65996b)

* Grammer is nothing but **rules**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a087806-dd39-4fb4-a7c7-82666c9da60e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfd804e7-dff4-4daa-9736-ec5fbdeb0f09)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a64ab21-1d9c-41a3-aaee-aed36c4881f3)

* It is the grammer for set of all boolean expressions over the operator(OR, AND, NOT, bracket).
* Operands are **0 and 1**.
* It is **ambigious grammer** as they are on the **same level**.
* All have the highest priority.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bf2089b-e0cb-42fc-83d2-c9fe59e6322d)

* Not > and > Or
* They are all **left to right** associativity.
* As **not** operator is **unary operator** which means **only one(1)**. For that we cannot introduce a **new variable** in **D** otherwise there will be **no recursion**. We just write **not D** only.
* When recursion is over, lastly replace **D** by **E**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a2bd458-6e01-4a4d-9dfe-f4e21e44a74d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afe39c93-62b3-416d-9ab7-fcafce5fb388)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50b449f7-47a8-4570-b3d5-006ab6e220f9)

* Unary operator [**IMPORTANT**]
* Grammer can be given in **tree form** as well.
* Drawback of **unambigious grammer**, **unit production** is there.
* There is no algorithm to check/verify if a given grammer is ambigious grammer or not. So checking if given grammer is ambigious or not is **undecidable problem(NPC -> NP complete problem)**. [NOTE]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f99ab8f-77c4-4230-b593-8b8fc57756ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/658ef5c1-7b49-4ce8-873f-0a720eec9650)

* There is no algorithm to convert the given complex ambigious grammer into equivalent unambigious grammer. It is also **undecidable problem(NPC -> NP complete problem)**.  [NOTE]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7787c15e-bd8e-494b-a779-57e988119bee)

* As it is a small grammer, we can check and say it is an **ambigious grammer**.
* Because of small grammer we can convert the **ambigious grammer** to **unambigious grammer**.
* Just remove one possibility.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/294bf320-d026-4617-a9c0-6b8ba38ba059)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/195e83ca-0971-4d9f-89aa-d3e36f170ca2)

* Example
* Computer will read/see one symbol at a time.
* Whatever factor we want(a) that factor is common on left side of every person -> Left factoring.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95ba2a53-5d31-4a93-a4ad-f3fb0a2d62b0)

* Left factoring.
* From the above grammer to generate string **ad** all the three products are fighting because in the given input string, first character **a** is given by all of the three productions.
* This problem is known as **Left factoring**.
* The common part in all three is **a**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3499237-7d0f-4784-a92e-77a6347e75f9)

* **a** is common and **a** followed by remaining which is **S'**.
* **S' -> b|c|d**.
* From the above grammer we want to generate **ad**.
* **a** is over already and in **S'** we want **d**. So no fighting.
* No fighting means no problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12600c6f-4170-4be1-9c6d-61995fc92dc3)

* This **result** is called as elimination of **left factoring**.
* Another name is **left factored grammer**, which means that **left factorization** is done.
* **1** means no fighting. More than **1** means fighting.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d57d150a-a85e-486f-83d0-49431284c293)

* Compiler grammer rules:-

1) Umambigious grammer.
2) Left factored grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb6dedc0-2f93-451d-a949-ac0d969e2c5f)

* Example.
* For **S -> i** we have **two people** fighting(iets and ietses). So there is **left factoring** problem.
* Four places it is common which is **iets**.
* Until which place fighting is there make it **common**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/586e4a7e-9137-43bb-8950-4a4dae9cda3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcef9b33-bf76-4498-bdd1-f38909b989a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80eb6e95-18cd-4292-bd14-7a0ded706fc0)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18cf814f-7a2d-48ba-936f-50be9c683ee4)

* Example.
* Until **a** only it is **common**.
* Fighting is there means there is **problem**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfbec3e4-176a-41a5-bc2f-fc35be643081)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2867c190-1897-4790-9773-a149ae0de91a)

* Left factored grammer.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a686305b-9f7d-4310-9f3c-7f42f551fdc7)

* Everywhere **one choice**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93bd51ba-ab24-4087-9214-cf489eeaa6d3)

* It is CFG.
* It is recursion. **S** calling **S** and **S** is the first element. So it is **left recursion**.
* **Left recursion** -> **S** is there at the first place only.
* It is **left recursive grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd2289c0-bba3-486a-82ee-df50e552b8eb)

* It is **Right recursive grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81e16498-fb62-4ec1-b7aa-ec525caa7337)

* Two types.
* Recursive grammer. **Left and right recursive grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9265a0c8-3860-4732-9c08-eeece419834b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/879f5f2d-e67d-49c1-88cd-0b32fb75644e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/450f9cb7-caf2-4aa2-91ee-f302950b29e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c9afa84-2ada-4589-8fe1-b7d1a143ad74)

* b * (a ^ *) -> Within the **brackets** if we write **a** then it is **(a ^ *)**.
* S -> b{a} -> There is **no left recursion**.
* This is called as elimination of **left recursion** using **EBNF(Extended Backus–Naur normal form**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baf0554a-38e9-4c09-aaa8-64bc9f75665b)

* S -> b{a} -> Minimal string -> b.
* This is one way to **eliminate left recursion**.
* S -> Sa/b
* This is another way to **eliminate left recursion**.
* **S** contain **two productions(Sa, b)**. **Sa** is the **first production** which is having problem.
* **S** is have two choices, **first one** is having problems, don't use **first one** use the **second one**.
* **b** don't have any problem write **b** as it is.
* **S** goes to **Sa**. **S** replaced by **b**.
* Instead of writing **a** write **S'**.
* So for **S -> Sa** we write **S -> bS'**.
* **S'** means **a** which is **S' -> a**.
* For repeatation purpose write **S' -> aS'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04ba47a1-9e77-43d2-b954-a53fcb08877e)

* Minimal string -> b
* Another way to write it.
* Instead of writing **S -> b**, in **S'** write **S'-> Epsilon** so that we get **b** as well which is the minimal string.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0215c5c-ecd2-488e-a5d9-2e126e550548)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0b129e5-0d4a-40e5-8dc6-0473936b9adf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe161e91-fd45-4d12-a320-a1a32a039ceb)

* Elimination of left recursion -> Two ways.
* Not there in **CFG** form.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45490b85-216c-4356-ab7a-f4da66074693)

* S -> Sa/b.
* **S** has two productions.
* Second one(b) don't have problem.
* First one(Sa) is having problem.
* Second one substitute in first one.
* **S** replaced by **b** and remaining **S'** we write.
* **S'** means **a**.
* If we write only **a** then **a** will come **one time only**.
* Along with **a** write **S'** so we can get as many **a** we want for the **repeatation**.
* The termination condition for **S'** is **Epsilon**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac59a38a-7664-47df-9d19-cc24e57ba58e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb23f875-ba50-4560-9a97-0490aeeaca7a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/940716be-ad34-4a33-90e7-99d80970bc16)

> There are two recursions(Left and right recursion). Left recursion we have eliminated using two ways which are **EBNF and CFG**.

* Elimination of Left recursion using **CFG**.
* Left recursion means on the left side **S** should be there.
* On the left side no where **S** ->  Elimination of Left recursion
* Left recursion is eliminated but right recursion came.
* If recursion is at all not there then how will will get the infinite strings.
* If recursion is at all not there then we will not get those infinite strings.
* Recursion should be there.
* We don't want **left recursion**.
* We have written the **left recursion** as **right recursion**.
* While eliminationg left recursion we got **right recursion**.
* **Right recursion** whatever is there **no problem** at all. No need to eliminate also.
* Left recursive grammer will create problem to **parser**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83750222-b578-4e8d-8b05-099517da4034)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14903fab-8e3f-4968-9bdc-70b23c03bd1f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23531d8c-63ec-4a61-b976-f1e3b47b9c7a)

* Left recursion having problem.
* Right recursion don't have any problem.
* Left recursive grammer will create problem to **parser**. That's why we have to eliminate **Left recursive grammer**.
* Convert the Left recursive grammer to equivalent right recursive grammer.
* **Parser** like **right recursive grammer**.
* **Parser** don't have any problem with **Right recursive grammer**. So, no need to **eliminate**.
* **Parser** having problem with **left recursive grammer**. So, we eliminiated **left recursive grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a659dbc-cc7b-404f-959e-783e9afcd764)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f7e0df0-b0a8-476a-80b8-b7a9d5ad605c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3956cf2e-979e-4976-ab31-54ff89d24742)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3d15c25-3bb1-42e2-af48-d43eed7109ee)

* Example.
* **S** contain **3-productions**.
* **Sa** which is the **first one** having problem.
* Start with second. Replace **S** with **b** and in place of **a** write **S'**.
* **S'** means **a** only with **repeatations** which is **S' -> aS'** and for recursion we need termination condition which is **Epsilon**.
* For **C** replace **S** with **C** and for **a** write **S'**.
* **a** keep on repeating.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/694a50ee-2cca-45f5-8d6f-08cb9fca37b8)

* We are eliminating **left recursion** not eliminating recursion.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19a028f8-bcb2-454c-b7a7-21b79a778464)

* We want to eliminate **left recursion** not eliminate recursion.
* [**IMPORTANT**]

* Question:-
* Check following statements are true or false?

1) For every left recursive grammer we can construct equivalent right recursive grammer -> Correct.
2) Elimination of left recursion is decidable problem? -> Correct. [It is a Decidable problem]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92fab850-d66a-472d-a1b6-400eae77658c)

3) left recursive grammer we have to eliminate because it will create some problem to parser? -> Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcad900a-e292-4ef3-8254-7e3b145fb922)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d711c8df-418a-42c7-a66a-6b3a132c0379)

* We are replacing **S** with **c** and for **a** with **S'**. Do the same for **d and e**.
* We are replacing **S** with **c** and for **b** with **S'**. Do the same for **d and e**.
* Common things we don't have to write.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c375686-8294-4b62-9879-a34b1a20a9da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a1fd908-714f-4567-9af8-904c3517f806)

* Elimination of left recursion is a **decidable problem**.
* We are not eliminating elimination, we are eliminating **left recursion** and we are getting **right recursion** in place of **left recursion**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28c37510-0ad6-40d2-ba19-9287be4af136)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdbdb70f-b12b-4027-a5c5-9f159b3cd63c)

* It is indirectly left recursion.
* Replace **A** by possibility of **A**.
* Indirectly means nothing **one time substitute**.
* Left recursion visible, do the **same story**.
* One place we substitute and then do normally.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ef9384b-3b44-40a7-bf94-8432d7f17f4c)

## Parsers

* Process of deriving the string is known as **parsing** which is also called as **derivation**.
* Process of deriving the string from the given grammer is known as **derivation(also known as parsing)**.
* Derivation or parsing both are same.
* Depending upon how parsing is performed we have two types parsers of:-

1) Top down parser
2) Bottom up parser.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6b8f97f-3448-42c3-b969-a269b1cdc8be)

* Total chapter purpose is drawing tree.
* Input to the problem -> Grammer and sting are required
* Output -> Tree.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c8edbc9-0798-432b-90ac-7fb5aa0e802f)

* Top down parser will start from **start symbol(S)** and keep on **expanding** until **string** will come.
* Bottom up parser will start from **string** and keep on **compressing** untill **start symbol(S)** will come.
* Both are different approaches.
* Powerful one is **Bottom up parser**. It is solving many problems. It is parsing more grammers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29234ba5-61db-419d-9f7b-31e2403cd83c)

* **Top down parser** follows **expansion** and **Bottom up parser** follows **compression**.
* At the end both will do the **same thing**.

## parsing-iii (6) [1st Oct 2023]

## Top down parser

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8713c63d-5530-4396-9830-632b708e917a)

* It is recursive grammer. It will generate many strings.
* We want **abbcde** string.
* Variable(S) is having only one choice, so we don't have any dilemma.
* If possible then **expand** otherwise say **not possible**.
* Variable(S) is having only one choice, we have to **expand**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16727c0f-2d73-41ce-be94-1aeb50d21a4a)

* **a** cancelled. We got it.
* String means program will read from **left to right**.
* Which character we type first we have to read it first.
* Left means first person.
* Right means last person.
* Input string we will read from **left to right**.
* Left most symbol is **a**.
* Left most symbol we are reading in string so, we have to read the left most symbol of expanded **S** as well.
* While expansion going on we have to read it from **left to right**.
* In the second level of **S** we have **2-variables(A and B)**. We will expand **A** first which is the **left one**.
* Input string is read from **left to right** then in **derivation** also we have to expand from **left to right**.
* If we always first expand **left variable** first then it is **left most derivation**.
* If we always first expand **right variable** first then it is **right most derivation**.
* Normally every parser will follow **left most derivation** only.
* String also we will read from **left to right** and the expansion we will do from **left to right** only. So we are following **left most derivation**.
* String also we will read from **left to right** and the expansion we will do from **right to left** then there is **no meaning**.
* Every **parser** follows **left most derivation** only. [**IMPORTANT**]
* No **parser** will read from **right most derivation**.
* Practically **left most derivation** only there. Theoretically **right most derivation** is there.
* **Left most derivation** -> When we have more than two variables then we will give preferrence to the **left most variable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/619bed7c-976e-4555-ac6b-8fb03931ed76)

* Top Down parser follows **Left most derivation**.
* We have to expand **A** first.
* **A** is having **two choices(Abc and b)**.
* We are looking for **b**. So for **A** we should take **first choice(Abc)**.
* If variable having more than **1-choice** then computer will face difficulty.
* A variable having more than **1-choice/production** finding the correct production is **difficult**.

* Top Down Parser:-

1) It will start from first symbol and proceed to string.
2) Top Down Parser follows **Left most derivation**.
3) Top Down Parser difficulty, a variable contain **more than 1-choice/production**. Selecting the correct one is difficult.

* To solve the drawback(Point 3), we have two options:-

1) Brute Force
2) LL1 parser or predictive parser.

* **A** is difficult as there are **multiple choices**.
* **S** has only one choice.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2df91cfa-f60a-4340-97c5-fbcee3ed33da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/273ea2de-7c02-4bb1-9fea-86ec43c3e6ab)

* LL1 parser.
* We are taking **first production** which is **Abc**.
* How many people are fighting?

> Only **leaf nodes** check which are variable.

* Terminal we cannot expand.
* **A** is having **2-choice**.
* We are at **A** and we want **b**, so we will take **b** this time. But this is **human behaviour**. Machine cannot do this.
* Machine will always do similar behaviour.
* We have to take **second production(b)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f14aa40d-ee6f-4e26-888a-48bfe53366ba)

* String is over.
* End of the string there is **dollar($)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f60f846c-5e6b-413d-8d6f-977a4dc1873b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd119d26-9e9b-496d-b3d9-82e839da8d8f)

* **Predictive parser** is better than **brute force parser**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a1d4275-9afc-4e30-892f-ae447bde1cec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d961a14-cf88-4efe-8abb-d17637ce0537)

* Top Down Pharser Working [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/673cfb16-3589-4908-837d-07c8b78642fb)

* Bottom up pharser will start from string.
* 4th production is **B -> d**.
* If we replace **B** by **d** then it is **expansion** and if we replace **d** by **B** then it is **compression/reduction**.
* Left replaced by right **expansion** which is **top down** and if **right** replaced by **left** then it is **compression** which is **bottom up**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4e0d362-2521-4daa-8500-3f7a0f4f0349)

* Yes.
* aABe -> S [Reduction] [r1]
* Abc -> A [Reduction] [r2]
* b -> A [Reduction] [r3]
* d -> B [Reduction] [r4]
* Reduction means we will see from **right side**.
* On the right side no where only **a** there, so we cannot reduce the **a** in the string.
* On the right side there is only **b** there, so we replaced **b** with **A**.
* The **first reduction** we have done is **b -> A** and the production is **A -> b** which is **r3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e803c63-161b-489e-b367-ba089f8f5398)

* Now the **reduction** we are doing is that, **Abc-> A** and the production is **A -> Abc**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10764177-8852-437f-90b1-4ef1686abbd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64e408eb-f74d-4435-b5df-8e90d51f06f0)

* The **d** is replaced with **b**, the production is **B -> d**.
* The **aABe** is replaced with **S**, the production is **S-> aABe**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8724d3fd-9660-49cb-bdaf-c465ac5ed20a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21461776-3cee-4ddd-8a7f-22308291490f)

* The trees are looking **same**.
* The difficulty with **bottom up parser** is that we don't know whom to **compress**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/314e190f-448f-4e9c-a225-605fed29ae70)

* [**IMPORTANT**]
* The difficulty with **bottom up parser** is identifying a sub-string which we have to **compress**. It is **difficult**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b8bd96f-8341-4357-92ec-4aa53694a5d1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3ea2060-7ccc-480c-8592-bb445bf69a90)

* It is a **complex parser**.

* Bottom Up parser:-

1) It will start from string and proceed to start symbol.
2) Identifying substring whom we should compress so that we will finally get start symbol. It is very difficult.

* Identifying correct substring is difficult so that we get to the start symbol.
* The substring whom we have compressed that substring is called as **handle**.
* Substring is **handle**.
* In the GATE exam if it is asked to do **bottom up approach** do **top down approach** only and just draw **1-tree** and count the **no. of productions**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39a20ed2-b798-4114-82db-54ddd58e6aa5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e14040d4-5e95-4387-8fd6-4695cc7d5fb5)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d076c3e1-5468-4b3d-8613-ebf134dae274)

* Identifying correct handles in **bottom up approach** is difficult.
* The substring which we are compressing is known as **handle**.
* **r3** means **3rd production** we reduced.
* After completion of the entire procedure, go **top** and number them from top to bottom.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8a0ffe6-984d-4c71-af4c-5048cafe8609)

* After **bottom up parser** is over see in the **reverse order**, it looked like a **top down parser** who is working in **right most derivation**.
* If we see from **bottom** no variables.
* Acutally **bottom up parser** has **no derivation**. From the bottom no derivation.
* If we still want to know the **derivation** then see in the **reverse order** and it looks like a **top down parser** who is working in **right most derivation**.
* **Bottom up parser** in the normal order means we will see from **bottom**, it has **no derivation**. No variable at the bottom.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3eea287-79c1-4c1b-a262-2d4e59f853ae)

3) It follows **reverse of right most derivation**.

* Bottom up parser derivation without reverse order?

> No derivation.

* Bottom up parser derivation in the reverse order?

> Looks like **top down parser** with **right most derivation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7381fe8-36f6-4e18-bdf7-bfd988dc600b)

* Bottom up parser follow which derivation?

> **No derivation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b18ce6a-d674-452b-b22c-92267d8e2dfb)

* [**IMPORTANT**]

## Top Down Parser

* Difficulty -> Selecting correct production.
* When a variable has more than **1-production** then selecting the correct choice is difficult.
* To solve the **problem/difficult** we have two approach:-

1) With Backtracking

* Recursive Descent parser

2) Without Backtracking

* Non-Recursive Descent parser or Predictive Parser or LL(1) parser.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d0a1500-3173-4dd7-9889-40acd417b966)

* All top down parser with the name **LL**. why?

* First **L** indicate scanning input from **left to right**.
* No one will read input from **right to left**.
* Second **LL** indicate using **left most derivation**.
* Top down will follow **left most derivation**.
* **LL** means **top down**.

* All bottom up parser with the name **LR**. why?

* First **L** indicate scanning input from **left to right**.
* **R** indicate scanning input from **left to right** but using **reverse of right most derivation**.
* **LR** means **bottom up**.
* Both **top down parser and bottom up parser** read from **left to right** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2d808ff-1b3f-49bb-ac1b-d25fa219d2fe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/475b9b5a-c6c9-43da-b80c-7915192d5bde)

* [**IMPORTANT**]
* With backtracking means **brute force**.
* Try one combination and it failed then backtrack come backa again and try another combination/possibility.
* Another name of **recursive descent parser** is **brute force**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f115d8d6-f515-4b11-afdf-1d500811bcce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99b51ad3-50b5-40b0-8996-69dbdc40ab84)

* Recursive Descent Parser.
* LAS -> Look Ahead Symbol.
* This is exactly like **brute force**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d9da650-0d82-41f6-9d07-e1666b36ad49)

* We have **12-productions**.
* Input -> ghijkl
* It is possible. **YES**.
* We will start from **S -> GHI** then **G -> gh, H -> ij, I -> kl**.
* Parser input -> Grammer and String
* Output -> Tree.
* Top down parser will start from **start symbol(S)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d481c6a8-47ea-4f80-9373-dd5c838c8934)

* We are at the **start symbol** which means **start function** and LAS symbol is **g**. Everything is ready.
* We are at **S** and we want **g**. As it is brute force we can select anyone.
* Now program is running.
* **S** contain **3-productions**.
* SO according to the algorithm select anyone of them.
* We selected **S -> ABC**.
* A -> X1
* B -> X2
* C -> X3
* Right side we have three symbols(X1, X2 and X3) so the value of **k** is **3**.
* When these symbols(X1, X2 and X3) are over then only the for loop is over.
* When the Right side three symbols(X1, X2 and X3) are over then the **production** is over.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66319f03-f4bd-4503-9924-67a94dfe7b95)

* We are at **S** which means **S's productions** are running. **S's code** is running.
* **S's code** steps:-

1) Select any production of **S**.

* For loop is three times.
* If **A** is a variable then call again.
* **Variales** can change.
* Now **A** is called.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30c42957-214c-4405-83a3-8a38bd401b84)

* **A** having only one choice.
* For loop is running **1-time**.
* X1 -> a
* When we come to **else part** means we are in **terminals**.
* **a** and **g** are not matching.
* **A** failed.
* So it is **bad choice**.
* **Error** means we have to **backtrack**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1eace56-0e91-474f-990b-8b709771ee5f)

* **A** having two choices and both failed. It means that mistake is not at **A**, mistake is at the **parent**. Because of **A** we came to **A**.
* **i = 1** is **A**.
* First function call is **S**. **S -> ABC** we have taken and we have expanded **A** firstly. This is called as **left most derivation**.
* For loop is going on from **1 to 3**. So **A** is expanded first.
* For loop is going on from **3 to 1** then **C** will be expanded first. It is **right most derivation** then.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbd0f68c-9e02-42ca-9167-0447d39279aa)

* Now parent will try another possibility.
* **C** is **internally** calling everyone.
* First itself fail what is the need to go further.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66fc10a9-6d65-4a9b-acfe-b7fce9a20042)

* [**IMPORTANT**]
* Parser at variable **S**.
* In the input string first symbol coming is **g**.
* **g** is the **LAS or look ahead symbol**.
* Parser is at **S** and is looking for **g**.
* **S** contain **3-productions**.
* Select any production of **S**. For these reason a lot of backtracking is going on.
* In case of **predictive parser or LL(1)** parser, instead of select any production of **S** we will have **select correct production of 'S'** from table.
* We are at **S** so go to **S** row. **LAS** is **g**.
* If we go **'S' row and 'g' column** then it will say take **3rd production**. **3rd production** is **S -> GHI** we take.
* It will directly give correct production.
* The table name is **LL(1) parsing table**. Name of the parser is **LL(1) parser**.
* Which parser is each to start?

> Recursive Descent parser. Start directly and dance inbetween.

* **LL(1) parser** is saying that don't start directly first construct table. Do prediction first. Do some work. Construct some table.
* **LL(1) parser** is using **Dynamic Programming**.
* In **LL(1) parser** instead of selecting anything randomly select correct one from table.
* Table name is **LL(1) parsing table**.
* Between **LL(1) parser** and **recursive descent parser** is that in **recursive descent parser** we are selecting any production of **S** but in **LL(1) parser** we are selecting the correct production of **S**. Other than that eveything is the **same**. [**IMPORTANT**]
* Everything same except the **starting line** between **LL(1) parser** and **recursive descent parser**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4496414-d475-4ecc-995c-e750f655a846)

* We cannot start **LL(1) parser** directly without a table.
* We need a table first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ac84718-f48a-4adf-abc3-a65f8ab6a003)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1ee0a3f-9766-4485-b76b-480c5645c33f)

* Example -> **Recursive descent parser**
* Every variable is function call.
* Variable means function call.
* **A** is variable so call further.
* **A** is having **5-choices**.
* We can select anyone of the **5-choices** as it is **recursive descent parser**.
* **a** is terminal and input string having **terminals** only, so we are checking if both are matching or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88e6726a-4094-44c9-b844-cb4a02f6ffd3)

* **a** will inform to parent that **a** is successful.
* **A** is having **5-choices**. The **correct choice** is **3rd-production** which is **abc**.
* **B** is variable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e6ddc03-b645-4496-be49-e06bd060a8ac)

* Everything is **failed**.
* **B** tried every possibility and it failed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40c9baf1-d04b-491c-8547-d5e911d5a1d3)

* Problem is at the **parent**.
* We have to do **back-tracking**.
* This is the problem of **left factoring**. It is almost like misleading. It is diverting the path.
* Actually curent person is **A -> abc**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d35ec0a9-0398-4cfe-b6eb-aeccc244ea39)

* Finally parser confirmed that **tree** is not possible.
* Actually tree is possible.
* Parser will give parsing error even though tree is possible.
* Even though tree is possible because of **left factoring** parser may say that **tree** is not possible. It is called as **parsing error**. We may get **parsing error**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2253ba1-678a-4d6f-9a74-28ba5334e23e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59bc7855-4eaa-49b2-82f2-b8522beb4058)

* Program will stop by giving **error message**.
* Here we have **compiler** so it will stop at **infinite loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc38500b-9639-4828-9bcc-0506afa91c6f)

* In the last **S()**, **S -> aS**, the **a** didnt match with **b** so we backtracked.
* **S** having two choices.
* Let's do the 2nd choice now whish is **S -> b** and the **b** in the input is matching with the **b** from the **output**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09b67657-9fd2-400f-a658-3c51f6a65947)

* Right recursion having no problem.
* Left recursion having problem.
* Grammer contain **Left recursion** the problem is that **recursive descent parser** will go to **infinite loop**.

* **NOTES**:-

1) In **recursive descent parser** for every variable we will write one recursive function(All variables contain the same code).
2) In **recursive descent parser** a lot of time is wasting in the form of backtracking.
3) If the grammer contain **left recursion** then **recursive descent parser** may go to **infinite loop**(There is a chance of not going to infinite loop also).
4) If the grammer contain **left factoring** then **recursive descent parser** may give **parsing error**. It means that tree is not possible.
5) **Recursive descent parser** uses **stack** data structure(S0 parser uses **PDA**).

* Next parser is **same** only difference is that it does not use **back-tracking**.
* There is **stack** and **PDA** also there.
* Select correct production from **LL(1)** table.
* Everything else is **same**.
* One parser doesn't have backtracking means that it has a **table**.
* One parser does have backtracking means that there is **no table**.
* **LL(1) parser** another name **predictive parser** another name **non-recursive descent parser**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/569dca3c-ab81-477b-a6e4-6de333ff9418)

## parsing-iv (7) [2nd Oct 2023]

## LL(1) Parser

* This is without backtracking.
* In LL(1) Parser no backtracking because we are using LL(1) Parsing table to select the correct production.
* To **construct LL(1) Parsing table** we need two functions:-

1) First()
2) Follow()

### LL(1) Parsing Table

### First()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/588ae5ed-1430-488f-9c5b-b1d3ce4a6904)

* **S** contains **3-productions**.
* **S** is generating **3-strings(abc, def, ghi)**.
* First(S) = a, d, g
* It means that for every string whatever **S** will generate, in every string starting letter is taken/used.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67eb5a2d-be2f-462c-84a2-ec7c189c33d5)

* First().
* First() of any variables is equal to?

> **First of any variable** we want to find out, then first of all we have to find out that **variable will generate what strings**. In all those **string** find out what is the **starting letter**. That is the **answer**.

* This is called as **First**.
* **S** is generating **3-strings(abc, def, ghi)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c56032ad-f40c-4806-bb9b-21fbf4d96003)

* **S** will generate **4-strings(abc, def, ghi, Epsilon)**.
* Starting letter of **Epsilon** is **Epsilon** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/969a5c68-ab4e-4f97-bae7-a37b684fcea9)

* **S** will generate **4-productions**.
* **Comma(,)** means **union**.
* First of any terminal is **itself** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b4e21a5-cda1-419d-a032-beb7734c8032)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5549866a-65f0-4d87-a061-8af9ac1141c6)

* [**IMPORTANT**]
* **First(S)** is equal to -> Whatever strings **S** is generating in all those strings starting character.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4d1c3d5-0d43-4cd6-ba5d-04c2808e6084)

* Example
* Minimal String -> a.
* Infinite strings are coming.
* Starting symbol is **a** for every string.
* **S** has two productions.
* First(S) -> a.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b552f204-b659-49b9-8533-5af0234ba474)

* [**IMPORTANT**]
* Whenever we want to generate any string we have to always see what is the **first character** these production can generate.
* From the grammer(S) we want to generate the string **ghi**.
* First character is **g** and we have 4-productions in **S**.
* It is checking/matching **g** with the first characters of every production and seeing which can produce the desired string(ghi).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/010f0f60-0b22-4cea-bc4e-b4d53266f12a)

* **Top down parser difficult** is that if the variable contain **more than 1-choice/production** and selecting the correction production is **difficult**.
* **Top down parser above difficult** is **solved** by looking/seeing at **first()** of the **variable**. [**IMPORTANT**]
* a = g, No
* d = g, No
* g = g, Yes.
* Computer will do calculations.
* In **recursive descent parser** having a **variable** with **many choices** then we will apply **first()** on the **variable**.
* **LL(1)** is calculations.
* If two people match then it is called as **left factoring**.
* If we want to make **parsing so easy** then the grammer should contain **no left factoring**. That(left factoring) is not the problem of **LL(1)** that is the problem of **grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3b10308-1aae-4f9b-98e1-6ce85fb641f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/211e5cb3-670c-418e-a31a-fc837a03e6bb)

* First(S) -> Set of all terminals present in first position of every string derived by **S**. [Definition]
* Whatever **S** will generate in all those strings, starting/first character.
* Final answer is **set of terminals(a, d, g)**.
* First(Terminal) -> Terminal [NOTE]
* First(Epsilon) -> Epsilon [NOTE]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/622e3e29-3c4f-420c-b25a-6fb69a32b606)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3eb6c928-4143-49d6-87a4-0b465b68e2df)

* Example.
* We have **10-variables**.
* Every variable's first we have to find out.
* If we want **first(C)** then go to production of **C** first.
* **first(C)** means whatever **C** will generate, we want their starting character.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea12772b-fe45-4bc6-bf77-4c53122d3e5d)

* **first(C)** -> c
* **first(E)** -> e
* **first(I)** -> i
* If we are asked to find **first()** for the above question then we have to find the **first()** for all **variables**.
* The internsion here is to find **first(S)**.
* If we want to find **first(S)** then go to **productions of 'S'**.
* **S** contain **3-productions**.
* **D** is a **variable**. So go to the **production of 'D'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3375d31-f796-4cac-8803-40041639b86e)

* **G** is a **variable**. So go to the **production of 'G'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f849c6f-c710-4e34-8a6e-08c1e28131a1)

* **A** is a **variable**. So go to the **production of 'A'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8b675bb-2eea-4c62-a3c2-6da5a2b15905)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/313af8b5-9c72-42bb-a1ab-ddd90968f971)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9008b7ce-7513-4297-9477-9383faff2ea0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c07110e-0a70-47be-abf5-a3f5e3043155)

* As they are terminals(a,j,k,d,g) so they came as it is.
* first(S) -> a,j,k,d,g. [**IMPORTANT**]
* If required they will call. If not required then they will not call.
* Major functions of **top down parser** is **first() and follow()**.
* Everywhere **first() and follow()** is required. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e4587b1-7499-4780-9dd6-72f92a5b685f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1c4ed89-758f-44d9-a01a-623f00638d7e)

* First means **first person**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/261b05d4-7114-47cf-925f-48ad05fdebb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59a071a4-c607-4059-9cd1-84d0470da959)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/904a09a3-2d05-48fb-99f2-5bf1ed7745b3)

* Everytime **A** only generating.
* First(ABC) means First(A). First(A) generating something.
* Giving chance to next one.
* **Epsilon** means
* First(S) -> First(ABC) -> First(A) -> a,d,e,f, Epsilon -> a,d,e,f, First(BC).
* First(A) will sometime generate **a**, sometime generate **d**, sometime generate **e**, sometime generate **f**, sometime it(A) will take rest(Epsilon). Now if we want first symbol contact **B**.
* Epsilon means **taking rest**.
* Epsilon * BC -> BC.
* First(BC) -> Give chance to **next people**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a876d46-5b27-4f5f-bb7e-8e9316074c75)

* First(BC) -> First(B) -> b.
* What is first(S) finally?

> first(S) -> a,d,e,f,b.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ab115da-3f86-490c-a6a6-d96169f744d8)

* [**IMPORTANT**]
* First person is **Epsilon** means **giving chance to second one**('B' here).
* Second one generating first symbol **b**. It is **first symbol**.
* How second person generating **first symbol**?

> First person not generated anything.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/432091c1-4980-408c-8b0a-7967dd8327c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c32041b9-7e76-4021-a95d-f21542c9ccb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f205588d-70ed-4064-ab5e-0650c1782217)

* **B** is also taking rest.
* **Epsilon** in **A** means **A** wants to give chance to **B**.
* **Epsilon** in **B** means **B** wants to give chance to **C**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b7693d2-0686-418c-b0d1-df0140d41174)

* Now **C** got the chance.
* **S** will create so many **strings**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07af4914-5fda-485a-a5cc-b6187a6a73d2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2ba7ddc-cf05-4046-a913-8ea07527d674)

* first(S) -> a,d,e,f,b,g,h,i,k,j,c

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18548bc7-6d94-41bb-a32d-ef649fe233a3)

* Until now in the final answer **Epsilon** came.
* **A** can be **Epsilon**, **B** can be **Epsilon** but **C** cannot be **Epsilon**
* Epsilon * Epsilon * c -> c
* **S** is not generating **Epsilon** because **S** is based on **ABC** and **A -> Epsilon** is possible, **B -> Epsilon** is also possible but **C -> Epsilon** is not possible. So **S** not generating **Epsilon** from where **Epsilon** will come.
* First(S) never contain **Epsilon** because there is one person(C) who is not generating **Epsilon**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d262ef0-2fac-41fb-a4d8-1d50d5671f0b)

* **C -> Epsilon** means that **A** is taking rest, **B** is taking rest and **C** is also taking rest. Everyone is taking **rest**. Someone should work.
* **Epsilon** came means all are not capable.
* **A** is not capable as **Epsilon** is there.
* **B** is not capable as **Epsilon** is there.
* **C** is not capable as **Epsilon** is there.
* Everyone is **Epsilon**. So finally **Epsilon** came.
* If finally **Epsilon** comes then write **Epsilon** otherwise don't write **Epsilon**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bba261b-5e34-4d90-b036-260e830604b0)

* first(S) -> a,d,e,f,b,g,h,i,k,j,c, Epsilon
* Lastly **Epsilon** came.
* Why Lastly **Epsilon** came?

> **A, B and C** all are **Epsilon**. So gurantee that **Epsilon** came.

* Epsilon * Epsilon * Epsilon -> Epsilon.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a646b39d-aecb-4087-837d-5879b2b24466)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5502548-17c4-4cd3-8172-00a711fa6be3)

* [**IMPORTANT**]
* One person is also **not Epsilon** then **Epsilon** will not come.
* First one(A) is Epsion means giving chance to **second one(B)**.
* Second one(B) is Epsion means giving chance to **third one(C)**.
* All are Epsilon means all are giving chance. So finally **Epsilon** will came. [**IMPORTANT**]
* First(S) -> First(ABC) -> First(A) -> a,d,e,f.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baa86734-1791-4f99-876a-fb40fbfff4ac)

* First(S) -> First(ABC) -> First(A) -> a,d,e,f, Fi(BC) -> a,d,e,f,b,g,h,i.
* **Epsilon** is not possible as **B** saying that **B** is compulsory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7e80711-2061-4daa-b54e-c7a8f0481f0e)

* If all(A,B and C) are not capable then only **Epsilon** will come finally.
* As of now **B** is compulsory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebdd70cb-513e-400f-8515-22c6da430e95)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9cbc327-1501-4816-b837-3e1b8739d321)

* We can go to **C** now.
* **C** saying that **C** is compulsory.
* So **no Epsilon** on **C**.
* First person(A) has **Epsilon** means **A** is giving chance to second person(B).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0da3fd58-0783-46b7-8d91-8510a64c8c22)

* All(A,B and C) are **Epsilon** then finally **Epsilon** will come in the **answer**.
* **Atleast one person** is **not Epsilon** means that in the final answer **Epsilon** will not come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7b12ce7-a030-4cc9-8022-35d9ef961ba4)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d58748df-1464-42af-b954-8167d8c97345)

* Example
* Grammer contains **5-variables**.
* Find **first** of every variable.
* First(E) -> F(TE') -> F(T) ->  F(FT') -> F(F) -> (,id
* First(E') -> F(+TE') and F(Epsilon) -> F(+) and F(Epsilon) -> +, Epsilon
* First(T) -> F(FT') -> F(F) -> (,id
* First(T') -> F(*FT') and F(Epsilon) -> F( *) and F(Epsilon) -> *, Epsilon
* First(F) -> (,id

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5781174-3296-441e-89dd-cda48b66accc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec312650-392d-47c3-9198-9f5e92a7995d)

* In the given grammer they are written as **i,d** then they are two terminals.
* In the given grammer they are written as **id** then it is one terminal.
* In-between **comman(,)** or not there check.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14c0eca2-14b3-42a6-88bb-8ed5f28e15d9)

* First one is **Epsilon** then go to **second one** but **second one** is not there then we have to **write** epsilon, no other **option**.
* First(E) is **TE'** means first(T). first(T) is **(, id**. In first(T) there is **no Epsilon** so **T** is compulsory, we cannot go any further.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2e83f6b-ab9c-49d1-a5b3-7cc157fed344)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c7affcf-63ed-4b1c-9124-d49ec7ddbd41)

* [**IMPORTANT**]
* For every variable if we find out **first()** then how many have first symbol as **open bracket('(')**?

> We have three-variables(E, T, F)**. 3-Variables [Numerical Problems]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10ceeed3-891e-4787-8387-9b2f5239fded)

* Example
* For every variable find **first**.
* first(S) -> f(aBDh) -> f(a) -> a
* first(B) -> f(cC) -> f(c) -> c
* first(C) -> f(bc) or f(Epsilon) -> f(b) or f(Epsilon) -> f, Epsilon
* first(E) -> f(f) or f(Epsilon) -> f , Epsilon
* first(F) -> f(e) or f(Epsilon) -> e, Epsilon
* first(D) -> f(EF) -> f(E) -> f, Epsilon -> f(f), f(F) -> f, e, Epsilon

* f(E) -> f, Epsilon.
* When we got **f and Epsilon**, cancel **Epsilon** and go back to, see next person **F** is giving chance, which is **f(F)**. **f(F)** is **e, Epsilon**.
* When we got **Epsilon** again, cancel **Epsilon** and go back to, check if we got **next person** or not. If **next person** not there then don't cancel **Epsilon** and keep it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c6e9f05-aa43-48e3-a598-f65e827e32ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51a540b2-a027-46c2-bcdb-65647598f964)

* [**IMPORTANT**]
* In the above question, how many **variables** contains **two symbols**?

> **4**, m = 4 which are **B, C, E and F**. 

* In the above question, how many **variables** contains **Epsilon symbol**?

> **5**, n= 5 which are **B,C,D,E and F**.

* Now what is **mn + 7** value?

> mn + 7 -> 4 * 5 + 7 -> 27.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72774116-e01c-4123-b1b0-ec2ab217be57)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ddc4d9d-35eb-44cb-b190-2b93d1b3ae10)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8a73ac8-8913-4066-a99c-cb2b0f03f776)

* [**IMPORTANT**]

### Follow()

* Follow() internally contain **first()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03e3b445-c646-4e1d-8421-16c2beac2f98)

* 7-productions and 7-variables.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76f4bdd2-bd50-4ce0-8e5b-d93626667af7)

* Read the leaf nodes from left to right.
* string is **defbc**.
* First symbol is **d**.
* After **f**, **b** is there.
* They maybe in **different levels** but who cares.
* d -> e -> f -> b -> c
* We can say that **S** is over when all the childrens are over.
* When we say **c** is over, after **c**, **S** is over.
* **S** over means who is after **S**, **dollar($)** is there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94cf4a8d-c2bb-4701-9fb0-5c55283f7926)

* String is now **defbc$**.
* After **c**, **dollar($)** is there.
* How can we say **string** is over?

> Dollar($) will come.

* **c** over means **S** is over because afterwards **no one** is there.
* **S** is over means string is over.
* String is over means next one is **dollar($)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17caf45c-34ff-4d2e-9e21-b76a8fa76ceb)

* After **f**, next symbol is **b**.
* Sometimews we don't follow this rule and it will create problem.
* After **b**, next symbol is **c**.
* After **c**, next symbol is **dollar($)**.
* **Next symbol** is called as **follow()**. [**IMPORTANT**]
* Follow(D) -> After **D** immediately whatever is there and we want the starting symbol.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7714800-d9c3-435a-af8b-c9e5cae35403)

* Follow(D) -> first(EF) -> first(E) -> e 
* Follow(D) means whatever it's neighbouts will generate, in that we want the starting symbol/character.
* Follow(D) means immediately right hand side. Whatever will come in that starting symbol/character.
* We want **terminal** of **neighbours**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6829aa5e-6619-4f66-8398-8c3889d2456f)

* string from left to right is **defbc$**.
* Follow(F) -> Follow(A) -> First(BC) -> First(B) -> b.
* After **F** nothing is there.
* **Follows** means immediately next person but next is not there for **F**. After **F** no one there.
* After **D**, next person is **E**.
* After **E**, next person is **F**.
* After **F** no one there.
* Unfortunately no one there. If no one is there indication that after **F** no one, indicating that **parent is over**.
* Parent of **F** is **A** which means **A** is over.
* So for **follow(F)**, immediately to the right of **F** no one there which means **parent(A) is over**. So **follow(F)** is now **follow(A)** as **parent(A)** is over.
* After **F** no one means **parent is over**.
* After **F** no one means production is over which means **parent is over**.
* It means **after parent(A)** who is there?
* We have to find that.
* After **A** we have **BC**.
* Follow(F) -> Follow(A) -> First(BC) -> First(B) -> b.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad945516-66f3-473a-bf77-e5e04d51633a)

* This is why sir said after **F** next symbol is **B** because of the above reason. For **Follow(F)** we got **b**.
* This is the **reason**.
* After **e**, next symbol is **f**.
* After **f**, next symbol is **b**.
* For these reason only for **Follow(F)** we got **b**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/117ce2cb-2408-4f35-b63b-004e6adcba13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/752ab4fd-7f64-4343-b1f8-10c4a3d8664e)

* [**IMPORTANT**]
* After **F** no one means **A-production** is over. After **parent(A)** we have to find **next**.
* **F's follow** is **equal to** parent's follow because after **F** there is no one means the production is over, the **parent(A)** is over. After **parent(A)** who will come. Indication or meaning, one level we are going **up** as the **current level** is over.
* Follow(C) -> Follow(S) -> First($) -> $. [$ -> Terminal]
* After **C** no one is there which means that **level** is over. We have to go to the parent of **C** which is **S**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70649676-90f4-44da-91d9-1e9bfb133c02)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39709713-79b8-442b-a6e3-ceebfe9414f8)

* [**IMPORTANT**]
* In exam see the **grammer** it is **enough**.
* For meaning we have drawn the **tree/diagram**.
* After **c** next person is **dollar($)**.
* After **c** physically there is no one but after **c** logically there is **dollar($)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90ee61b0-7579-4825-94d2-24bd25a8435e)

* Example.
* Leaf nodes from left to right -> abcde$.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a13b9b9-2a8b-44ea-9c8f-2bd569fd4516)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c38a985e-5c1b-4bb3-9777-82eece3bb92b)

* Leaf nodes from left to right -> ace$.
* So after **a**, **c** is there **not Epsilon**.
* Physically looks like **Epsilon** is there but **c** is there logically.
* After **c**, next symbol is **e**.
* After **e**, next symbol is **$**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47df6777-45f4-4edf-a6e0-055fb072f651)

* As **first(A) -> Epsilon** we have to remove **Epsilon** and go further to **B** which is **first(BC)**.
* Same thing we have to do in the **above example** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be58bbaa-32d7-44b6-a9ed-18091d4e0870)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc2b421e-d8da-4773-bd1d-b1f64c18c8a6)

* After **a** only **c** is there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/928d6e3b-64a9-4459-ab75-dc64ad0e9349)

* Follow(F) -> follow(A)
* No one is there after **F** which means the production is over, the level is over. We have to go to **parent(A)**. So we will do **follow(A)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd892478-e855-4419-b692-afad913f30a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/260b5ca7-310f-494e-94e9-02d020dcaba2)

* After **c** next symbol is **e**.
* Follow() [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8607b70-2c2e-4307-9121-c4c038ad951e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e04879b5-1eec-41d3-b420-10b25a976728)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87cead80-87b8-41bb-b12c-500ad3256682)

* string is **abcde$**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01cbb527-ec3e-4417-9dd0-780b59696fa1)

* string is **$**.
* Directly **$** came.
* Directly end marker came which is **$** meaning/means string is **Epsilon**.
* Starting itself end marker($) came so string is going to be **Epsilon**.
* Epsilon * $ -> $.
* Everything is **Epsilon**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61539b65-537e-4327-838d-49d4f4729482)

* Follow(D) -> Fi($) -> $.
* Second also **Epsilon** came so go further but further not there means contact parent. Parent of **F** is **A**. So it is **follow(A)** which is the **parent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf7de762-ef66-4b71-b272-a5dfba98b4b5)

* Second also **Epsilon** came so go further but further not there means contact parent. Parent of **C** is **S**. So it is **follow(S)** which is the **parent**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22b286b1-ff22-443a-a171-c6b3ba42cba4)

* So **Follow(D)** is **$** because only one thing is there.
* String of the above tree is **$** only.
* Next symbol is **$** only, we don't have anything other than **$**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0c7ed97-4ff5-4963-9ae7-b6a9aa66ce3f)

* [**IMPORTANT**]
* In the current level we cannot solve so go to **parent** maybe **parent** can solve it.
* Follow means **next one**. If **next one** is not there then **parent's next one**. If **parent's next one** also not there then **it's parent's next one**. Like that we have to go.
* If **next one** is **Epsilon** then cancel **Epsilon** and go to **next one**. **Next one** is also **Epsilon** then cancel that one and go **next**. **Next** not there then go to **parent**. Lastly there is the **Dollar($)**.

* **NOTE**:-
* Follow() of any variable we take, it never contain any **Epsilon**. [NOTE] [**IMPORTANT**]
* Follow() of any person never contain any **Epsilon**. NOTE] [**IMPORTANT**]
* **Worst Case** is we will get **dollar($)**.
* **Worst Case** end marker which is the **dollar($)** will come.
* If nothing there then atleast **dollar($)** there.

* **Next** is **Epsilon** that is **not possible**. [**IMPORTANT**]
* If **next** is **Epsilon** then don't write **Epsilon** take **parent here**. [**IMPORTANT**]
* We cannot say **next** is **no one**. [**IMPORTANT**]
* If **next** is **no one** then we can take **parent here**. [**IMPORTANT**]
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35f69999-5297-46f1-8a5c-0f52c5f7affc)

* **NOTE**].
* **First** of **some variable** then **Epsilon** is possible. [**IMPORTANT**]
* **Follow** of **some variable** never contain **Epsilon**. [**IMPORTANT**]

> What we are generating, sometimes we will generate **Epsilon**. We cannot say **our neighbour** is not generating anything. We cannot say that. **Neighbour** is not generating anything means **go to parent**.

* This is how **follow()** is maintained.
* **Follow()** purpose is **next symbol**. Don't say **next symbol** not there.
* If **next symbol** really not there then **$** will come. Atleast end marker($) will come.
* We cannot say that end marker($) is not there.
* String is over means next symbol is **$**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41f7f658-6d05-473b-8655-3b1b05ddbaad)

* Follow(D) -> $
* Follow(E) -> $

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54540bca-7c40-40f5-b73b-8ccb2eb0ae9d)

* Worst case **$** will come.

* **RULES TO FIND FOLLOW()**:-

* Assume **A** is variable

1) If **A** is start symbol then what is **Follow(A)**? [Minimum]

> **$**.

* Follow(Start Symbol) -> Follow(S) -> Follow($) -> $.
* Follow of **Start Symbol** is **$**.
* Follow of **Start Symbol** minimum is **$**.
* **$** plus something may come.

2) B -> CDAEF

* Follow(A) -> First(EF).

* If we want to find **follow()** of any person then **arrow symbol** see **right side** where is that person.
* In the production we will see **right side** for **follow()**.
* If we want to find out **first()** then **arrow symbol** see **left side** where is that person.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46a7ca66-2135-471e-9603-eb4d14150cb8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50ac3987-db53-40a9-be88-2d65f9270d5b)

* [**IMPORTANT**]
* For follow(A) if at all the production is like **above** then **follow(A)** is **first(EF)**.
* If **A** is **start symbol** then **$** also will come.
* If not **start symbol** then normal story.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7e44893-8fb8-44e7-9378-5190d26ca338)

3) B -> CDA (OR) B -> CDAE, E -> Epsilon.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68bb6045-9381-47bd-8dca-252f44e0089b)

* In the production **B -> CDA** after **A** no one is there. If after **A** no one is there then **follow(A)** is **follow(B)**. It means that there is no one at **A** so **A** is going to it's **parent(B)**.
* follow(A) -> follow(parent of A) -> follow(B).
* In the production **B -> CDAE** after **A** next symbol is **E** which is **Epsilon**.
* After **A** no one physically is **equal to** after **A** someone who is **Epsilon**.
* They are **same** meaning only.
* The two productions are **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be9910a5-9b90-45e2-b2f2-fcc57aac9a65)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc6f8455-e8f5-4d4b-9dd6-e6094f472908)

* Rules.[**IMPORTANT**]

## parsing-v (8) [2nd Oct 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26497e69-33cc-43ea-8c2d-f54bc24f1e26)

* If we want to find **first()** of any variable then we have to go **left** side.
* If we want to find **first()** of any variable then we have to go **right** side.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc0c4f69-6832-451f-8c10-bd704c266201)

* Find **first() and follow()** for all variables.
* E -> first(E) -> first(TE') -> first(T) -> first(FT') -> first(F) -> id, (.
* T -> first(T) -> first(FT') -> first(F) -> id, (.
* E' -> first(+TE') -> first(+) -> +, Epsilon.
* F -> id, (.
* T' -> first(*FT') and first(Epsilon) -> first( *) and first(Epsilon) -> *, Epsilon.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e452769-b09f-4e86-88f4-8b6e76249738)

* First().

* E -> $, follow(E) -> $, first( ')') -> $, )
* T -> first(E') and first(E') -> first(+TE') and first(Epsilon) -> first(+) and first(Epsilon) -> +, Epsilon -> +, follow(E) -> +, $, ).
* E' -> follow(Epsilon) and follow(Epsilon) -> follow(E) and follow(E') -> follow(E) -> $, )
* F -> follow(F) -> first(T') and first(T') -> first(T') and first(T') -> *, Epsilon -> *, follow(T) -> *,+, $, ).
* T' -> follow(T') -> first(Epsilon) and first(Epsilon) -> follow(T) and follow(T') -> follow(T) -> +, $, )

* first(Epsilon) -> Next one not available, so go to parent.
* If we want to find out **follow()** then first step is only at **start symbol** keep **$**.
* **E** is **start symbol**.
* **start symbol** is also a **variable**.
* **follow()** of any variable is nothing but **first(remaining part)** immediately to the right side.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3bdc7bb-8ca8-482d-b249-55e8095d534e)

* follow(E') -> Go to the right side. It is at **two places** so two things may come.
* **E'** is at **two places** on the right hand side.
* follow(E') is calling follow(E'). If we call ourselves then nothing will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/126b9ba6-74f4-4fde-8a0a-9052202b78e2)

* follow(T)
* **T** is at **two places** on the right hand side.
* **follow** never contain **Epsilon**. [**IMPORTANT**]
* follow(T) -> first(E') -> +, Epsilon
* Remove the **Epsilon** and go next. As go next not possible so go to the parent which is follow(parent) which is follow(E).
* We know that follow(E) is **$, )**.
* follow(T) -> +, $, )
* follow means we have to somehow remove **Epsilon**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c183909a-7e8f-4cf2-8484-316d268cbcca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed1b531c-ea77-4980-9de5-82940a86985e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f96c38bd-88ff-454b-b17b-e3fc259da166)

* follow(T') 
* **T'** is at **two places** on the right hand side.
* follow(T') is calling follow(T'). If we call ourselves then nothing will come.
* It is of not use. Leave it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2eda7329-2d08-4203-a969-411dd8b7fdb3)

* follow(F) 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3a650c4-1838-45d6-936f-cc282a09371a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29324f7a-8558-4c03-8ab1-911f22d49cde)

* Follow().
* Betwen **first and follow()** do **first()** and then do **follow()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7349b97f-39b3-4cbf-b742-d80baf28100b)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11bdc20d-58ff-4499-a8cf-cc0c5de8b784)

* Example
* Write first() and follow() for every variable.

* **FIRST**:-
* first(S) -> first('(L)') and first(a) -> (, a
* first(L) -> first(SL') -> first(S) -> (, a
* first(L') -> first(,SL') and first(Epsilon) -> first(,) and first(Epsilon) -> comma(,), Epsilon

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac13aada-8a22-4b03-9ae0-554c5520c985)

* first().

* **FOLLOW**:-
* As soon as we starting doing **follow()**, one thing we should do blindly is that give **$** to the **start symbol**.
* follow(S):- $, comma(,), follow(L), follow(L')
* follow(S):- $, comma(,), follow(L), )
* follow(S):- $, comma(,), )

1) first(L') -> comma(,), Epsilon -> Remove Epsilon go next, next not there go to parent -> comma(,), follow(L)
2) first(L') -> comma(,), Epsilon -> Remove Epsilon go next, next not there go to parent -> comma(,), follow(L')

* We don't know **follow(L)** so we are keeping it as it is.
* We don't know **follow(L')** so we are keeping it as it is.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65b7ecdc-73d0-48c5-93e5-c730de98ae6c)

* After doing **follow(L)** below we now know that **follow(L)** is **closed bracket(')')**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef0ff9c6-19e5-4807-802c-6478ea5f265c)

* After doing **follow(L')** below we now know that **follow(L')** is also **closed bracket(')')** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5213459-5ed7-4dc1-8039-0c33908027d7)

* follow(L):- )

1) first(')') -> )

* follow(L'):- )

1) first(Epsilon) -> Go to parent -> follow(L) -> )
2) first(Epsilon) -> Go to parent -> follow(L') -> Calling itself only -> Nothing ignore.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96172b46-4386-4404-ace8-d888e661ea8e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6764bf96-38f2-41fa-8548-a9661caa19ac)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ed87618-7c71-4837-9cfe-d4d6ace8e01c)

* Example
* First and Follow of every variable.
* first(S) -> first(aBDh) -> first(a) -> a
* first(B) -> first(cC) and first(Epsilon) -> first(c) and first(Epsilon) -> c, Epsilon
* first(D) -> first(FE) -> first(F) -> e, Epsilon -> e, first(E) -> e,f, Epsilon.
* first(C) -> first(bC) and first(Epsilon) -> first(b) -> b, Epsilon
* first(F) -> first(e) and first(Epsilon) -> e, Epsilon
* first(E) -> first(f) and first(Epsilon) -> f, Epsilon

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afe7d7e2-142c-4cfa-8723-692e598de802)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8098dd62-e565-4a13-9203-b3297471dfcb)

* first()

* follow(S) -> $
* follow(B) -> first(Dh) -> first(D) -> e,f, Epsilon -> e,f, first(h) -> e,f, h. [**D** is Epsilon, so go next(h)]
* follow(D) -> first(h) -> h.
* follow(C) ->  e,f,h

1) follow(c) -> first(Epsilon) -> Go to parent -> follow(B) -> e,f,h
2) follow(c) -> first(Epsilon) -> Go to parent -> follow(C) -> Calling itself -> ignore.

* follow(F) -> first(E) -> f, Epsilon -> Remove epsilon, go next, not possible, Go to parent -> f, follow(D) -> f, h .
* follow(E) -> first(Epsilon) -> Go to parent -> follow(D) -> h

* On the right hand side there is **no 'S'**. So only **$** will come.
* There is **one variable** which is not coming anywhere on the right hand side of the grammer. It is indicating that the variable will never come in **any derivation**.
* So the **follow(above person) -> Phi**.
* It is a useless variable.
* **S** is the **star symbol** and minimum is **dollar**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/896a60ed-2476-474e-9698-452fd83a87f8)

* Epsilon -> Null or empty string -> Language is not empty, string is empty.
* Phi -> Empty Language -> Language itself empty, no one there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8174a5f1-4e5a-46e3-a6ff-a197de67268a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5996ff65-6542-41ce-9f52-bb38625e3da6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7da7c3b8-9f82-4385-b656-46a4a22314ef)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10b3add2-0734-4993-923c-9ef7c2bb0028)

* Example.

* first(S) -> first(aSbS), first(bSaS), first(Epsilon) -> first(a), first(b), first(Epsilon) -> a, b, Epsilon
* follow(S) -> $, a, b

1) first(b) -> b
2) first(Epsilon) -> Go to parent -> follow(S) -> Nothing
3) first(a) -> a
4) first(Epsilon) -> Go to parent -> follow(S) -> Nothing

* **S** is at **4-places** on the right hand side.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66be9b28-2fe5-426d-b6d0-01bd134b455a)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30627417-d4f3-4db3-af5e-6dedf7ab6811)

* Example
* first(S) -> first(A), first(B) -> first(Epsilon), first(Epsilon) -> Cancel Epsilon and go next -> a, b
* first(A) -> first(Epsilon) -> Epsilon
* first(B) -> first(Epsilon) -> Epsilon

* follow(S) -> $
* follow(A) -> first(a), first(b) -> a, b
* follow(B) -> first(b), first(a) -> b, a

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5236153b-7027-4c5d-b245-f4dc71a8e4bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85bfe020-5b6e-42a5-98b0-5ef48ddeb1e6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78265298-1e85-4de2-922f-c5e71d64dd78)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e73125d-94a2-4e0c-b627-8c7d96d6d565)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/464b5661-d52d-4625-8896-d067d26fcf6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a02ea06-beb8-4d6c-a322-ffd6c65bbf0c)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fd9eb04-4eee-474f-8482-3453e979f7bd)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/936e8d98-967b-44b4-af06-6b5b0c5acf18)

## LL(1) Parsing table Construction Algorithm

* LL(1) parser is without backtracking.
* From now onwards if we want to construct a **tree** don't take any production blindly. See the table.

* **ALGO**;-
* For each production A -> Alpha, repeat following steps.

1) Add A -> Alpha under m[A,d] where for all **d** belongs to first(alpha).
2) If first(Alpha) contain Epsilon then add A -> alpha under m[A, e] for all e belongs to follow(A).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4b77f45-6ffb-4f1f-baf2-8264288ef751)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8d05cf1-2cee-40c4-9899-398d08f505ed)

* LL(1) Parsing table Construction is nothing but finding **first() and follow()**.
* First step is saying **first()** and second is saying **follow()**.
* Construct **LL(1) parsing** table for the following grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04e967da-db0e-4158-9fe7-70ee25b6eeeb)

* Grammer.
* We have **5-variables(E, E', T, T', F)**.
* Table means rows and columns.
* 5-variables are there means that **5-rows** are there.
* Terminals -> +,*, (, ), id. So **5-terminals**.
* **5-columns** are there plus one more extra that is for **$**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e34dc6d2-f5c5-49fa-b216-ffeb8e5a5d58)

* Every entry in the table is **production**.
* **E'** row contain **S' production** only.
* If the parser is at **E** then we have to take **'E' productions** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0d6e894-49f4-4a9a-9d2f-2b02d901eb68)

* **F -> (E)** production should go where in the table?
* It belongs to **F** variable so go to **'F' row**. In the **'F' row** ok but to which column?
* In the **'F' row** and to which column we want to know then the production we have what is the first symbol? It is **open bracket('(')**.
* If it will generate at all open bracket how can we take it as **star(*)**.
* We are at **F** and in the input **open bracket** is coming then we will take **8th one**.
* We are at **F** and in the input **id** is coming then we will take **7th one**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/623fb256-8a69-4369-bce7-fa9df40bd95b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42ccded0-10fd-4cb7-9bf1-cae5a6ee75b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/729c0f32-f8b4-4037-8adc-2bd5ef07a72f)

* The production is asking where should it go?
* It belongs to **E'** variable. So it should go to **E'** row.
* No change in **row**.
* In that row which column?
* We will decide the **column** by seeing the **first symbol** only which is using **first()**.
* first(+TE') -> +
* On **E'** row and on the **+** column we should write **E' -> +TE'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f648aa9-40b1-4bd8-b644-76649c21f9bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5954178f-ef13-4396-a842-f26f03e14777)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7a683b3-0d99-415b-8185-c58fa4b9b2c7)

* 5th production belongs to, **T' -> *FT'**.
* Row is **T'** and the column is **star(*)** as the **first symbol** is **star(*)** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68e1719b-f6a1-4cad-af76-975858dcfc0b)

* At the end of the whole story we are expencting **productions** within the table.
* We may have written the **numbers** in the table but actually the **productions** are there within the table.
* At the end **every production** should go inside the table.
* Beauty of the table is that if we go to any entry there will be **only one production** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90115578-5f2d-45b1-b488-c09bbb41ae39)

* 7th production is **F-> id**
* Row is **F** and the first symbol is **id** so the column is **id**.
* We have to see **first symbol** and then accordingly we have to take **action**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7c0d709-c41e-4641-9249-7ca7b4637b6a)

* 1st production is **E -> TE'**.
* Row is **E** and the first symbol is **first(T) -> first(F) -> id, (**. So the column is **id, (**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b1313363-69cd-4027-8f0b-3fcfa85f5a3d)

* 4th production is **T -> FT'**.
* Row is **T** and the first symbol is **first(T) -> first(F) -> id, (**. So the column is **id, (**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b0455c6-a2e6-423b-beb1-05d4421d4832)

* What is **first(Epsilon)**?

> Epsilon

* **Follow()** uses **first()**.
* **first(Teminal)** -> Terminal.
* **first(Epsilon)** -> Epsilon.
* **first(abc)** -> a.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33424b6a-c1aa-448e-a9ac-2f2cd1f1e197)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea4150fb-cc27-45c5-b1a9-936b8e50236f)

* This is the production.
* A -> Alpha [Production]
* Row -> A
* Column -> first(Alpha).
* m [A, first(Alpha)]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40a57c98-d287-46d6-9c21-f61427c22f44)

* There is **no Epsilon** column in the table.
* **Epsilon** column is not there.
* The compensation for **Epsilon** came means that as **Epsilon** came so go further and further is not there, so go for **follow(A)** which is **follow(parent)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dac24c3-13d2-4489-a6ab-19dd894861c0)

* When we will go to **second step**?

> Epsilon is there but Epsilon column is not there.

* If we do **first(alpha)** and **Epsilon** not coming then do **first step**.
* If we do **first(alpha)** and **Epsilon** coming then remove the **Epsilon** and do **follow(parent)**. This is the **second step** saying.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ca58088-c8d6-46ae-a22c-f8ffb4b86706)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe0138d6-3fbe-4ea8-9241-e31e666e8cac)

* 3rd production is **E' -> Epsilon**.
* Row is **E'**, first symbol is **first(Epsilon)** and we are getting **Epsilon**. We do not have **Epsilon** column. Do the compensation which is **follow(parent) -> follow(E')**.
* We have **E** at two places on the right hand side.

1) follow(E') -> first(Epsilon) -> Go further but further not there, Go to parent -> follow(E) -> $, ) [**E** is the start symbol so **$**]
2) follow(E') -> first(Epsilon) -> Go further but further not there, Go to parent -> follow(E') -> Calling itself -> Nothing

* Row is **E'**,
* Column is **$, )**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a57203fb-b869-43a1-a0f5-76a69ddc1fc5)

* 6th production is **T' -> Epsilon**.
* Row is **T'**.
* First symbol is **first(Epsilon)** and we are getting **Epsilon**. We do not have **Epsilon** column. Do the compensation which is **follow(parent) -> follow(T')**.

1) follow(T') -> first(Epsilon) -> Go further but further not there, Go to parent -> follow(T) -> first(E') -> +, Epsilon -> 
2) follow(T') -> first(Epsilon) -> Go further but further not there, Go to parent -> follow(T') -> $, +, ) [We found this out previously]

* Row is **T'**.
* Column is **+**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56f50f2e-2f27-4126-95a2-0a4f634feba4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6442f686-e665-47d5-8084-e63b3e60046d)

* [**IMPORTANT**]
* Grammer given what is the table size?

> How many variables those many **rows**. How many terminals those plus '1' columns.

* Variable Count = Rows
* Terminals + 1 = Columns.
* Now multiply.
* Without the table backtracking is required.
* With the table backtracking is not required.
* In the grammer directly there is **no ambiguity**.
* We are at **T'** and it is having 2-productions. We are in dilemma which one to take.
* If we see **directly** confusion is there. In **T'** we don't know which one to take.
* Without seeing the table if we do then it is **recursive descent parser**.
* If we see the table and do then it is **LL(1) parser**.
* Whatever problem we had in **grammer** we thought the **LL(1) parser** would solve and we created **LL(1) parsing table**. After construction of the table we got to know that inside the **table** also there are **problems**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e92dd2c-eef0-42c5-970c-b71d0f332f9e)

* Indirectly the **LL(1)** parser is saying that it tried will all of it's capabilities but still we are getting **confusion** means that the **given grammer** cannot be handled by **LL(1) parser**.
* So the given grammer is not **LL(1)**.

* Question:-
* Check if the given grammer is **LL(1)** or not.

> Just complete the table and in the table every entry contain maximum of **1-production**.

* If somewhere multiple came then it is a **problem**.
* Conflict there means **multiple people**.
* So it is not **LL(1)**.
* For the given grammer if we construct **LL(1) pharsing table** then can we give gurantee that everytime **no conflict**. We cannot say that.
* For some grammer we do not get the **multiple values**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/644d71ac-290a-4d81-9416-b5d1a7c9eb52)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bf8c4eb-1168-44eb-8aeb-786455f186ef)

* Construct **LL(1) parsing table** for the following grammer. [Next question]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05e414f1-e284-45e6-b3b9-e92cd4de8bd3)

* Grammer.
* How many columns?

> **5** columns as there are **5-terminals** which are **a, comma(,), $, (,)**. [**IMPORTANT**]

* How many rows?

> Variables -> Rows. Variables -> S, L, L'. So **3** variables means **3-rows**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1201d067-3cb6-4909-87c9-8e9ad45b700c)

* Row -> alpha1
* Column -> a,b,c,d. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/441aa9a2-d370-4c71-b638-ae8b7ce2c5ec)

* If **Epsilon** came then remove **Epsilon** and go further, further not there. Go to **parent** which is **follow(parent)** which is **follow(alpha1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e34450d5-5c6f-4701-8141-518e4d7ec29f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29b60ecf-4c35-4359-834f-4d436e76babb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ccb8af8-ad36-43b9-9bea-8b41e2263741)

* Question:-
* Fill **x,y and z** in the table.

> Don't do the complete column in the exam. Do the necessary things. Focus on the needed thinks.

* 4th production is **L' -> ,SL'**.
* Row is **L'**
* First symbol is first(,SL')-> first(,) -> ,
* Row is **L'** and column is **,**.
* first(Epsilon) comes then only do **follow()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/831c0bc3-8b56-4660-9dee-bb058f885aa7)

* 2nd production is **S -> a**
* first(a) -> a
* Row is **S** and column is **a**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd15ed10-7ddb-4734-940a-0f1c2c521007)

* 1st production is **S -> (L)**.
* first( (L) ) -> first( ( ) -> (.
* Row is **S** and column is **(**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/536c3765-69bd-4c3e-b6b9-9abda61c228c)

* 3rd production is **L -> SL'**
* first(SL') -> first(S) -> first( (L) ), first(a) -> (, a
* Row is **L** and column is **(, a**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab3727ce-47ef-4297-b934-aad0267853d8)

* 5th production is **L' -> Epsilon**.

1) first(Epsilon) -> go further, further not there, go to parent -> follow(L') -> first(Epsilon) -> Calling itself, Nothing
2) first(Epsilon) -> go further, further not there, go to parent -> follow(L) -> )

* Row is **L'** and column is **)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5df448a9-22b2-49a5-978a-658114480c9b)

* In the table nowhere there is **multiple productions** at any entry.
* Given grammer is **LL(1) grammer**.
* In the above **LL(1) parsing table** no entry contain **multiple productions**. So the given grammer is ***LL(1) grammer**. [NOTE]
* With the **table** there is **no dilemma**.
* If we see the **grammer** there is **dilemma**.
* According to the **above grammer** we do not find the **'L' row and ')' column** as the combination in the table. We got empty space means that the string we are trying for that does not belong to the **above grammer**.
* That is the reason why **table** is saying **it doesn't know**.
* Table construction is done.
* How many blank spaces are there in the table?

> **9** blank spaces. They are nothing but **error entries**.

* Blank entries means **error entries**.
* The error is called as **parsing error**.
* The particular grammer is saying that in it's grammer this strings will not come.
* This is called as **parsing error**.
* In the **LL(1)** parsing table no. of error entries is equal to no. of blank entries. [NOTE]
* **parsing error** -> Syntax error.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94c0852e-8ee9-4941-8074-a7331e626f8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/913757a6-0cb6-471f-adc1-44133f7c6744)

* Example.
* What is the problem/difficulty with the above grammer?

> When for a variable we have multiple choices/productions. Dilemma comes.

* If we draw a table then also the problems may not be there.
* Problems will mostly come if multiple choices/productions are there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f7660ed-7c92-42d6-b097-57e34e451103)

* 4-variables(B,C,F,E) will cause trouble if we use the grammer directly. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27701cc4-d192-4c50-8ab4-972d91a60b1b)

* Check if the given grammer is **LL(1) or not**?

> Who can trouble me? Only those **4-rows** can cause trouble. So only draw those **4-rows** because anyhow other people no trouble.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a39a064f-dae7-475e-b556-caf18cce807d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cd47486-57b8-4dc6-a4ff-35777abc0e9d)

* There are totaly **10-productions**.
* **S and D** have only **1-production**.
* Every column **1** is there in **S** row.
* Every column **6** is there in **D** row.
* To get the conflict minimum of **2-productions** required.
* If **variable** have more than **1-production** then only we will have **dilemma**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4531add4-9c3d-4c9e-8549-04dcbebb2b18)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00834e5b-b5bc-4630-9778-a3836fb7fd22)

* We want to check if the grammer is **LL(1) grammer** or not. We have to try the **variables(B,C, F, E)** which are causing **problems**.
* **S and D** no need to check also if **directly** no problem then if we do how problem will come.
* If we are **lucky**, we draw the table then the **problems** may are gone.
* If we are **unlucky** then **problem** maybe there.
* If we draw the table, **problem** may not be there.
* Don't construct **row** for every person. Necessary people we should **construct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4627bef6-5e5b-4b0b-9b90-5708cce0512e)

* No no problem then **not draw**.
* Don't construct every row.
* The rows having problem construct them.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c9511ce-8ac0-4b63-a045-db06c4758b40)

## parsing-vi (9) [3rd Oct 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c40fd4d-af73-4ba8-81c7-43517ba93782)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72771e80-fcaf-435b-ba76-d68d7f1e3420)

* Rows -> 6
* If they ask verify if the grammer is **LL(1) grammer** or not?

> We will draw only **4-rows(B,C,F,E)** as they are the ones causing problems not the rest. So, No need to draw them. 

* If a variable contains **1-productions** then there is **no problem**.
* Write/draw only those variables which have **multiple or more than 1-production**.
* We have to write **4-rows** and no change in **columns**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccbfa4b3-b82c-4fbe-a3c3-f1c452d58c77)

* As we are checing **LL(1) grammer** or not. So we don't want **S and D** rows. They are not causing any problems as they have **1-production** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa0adc79-0f04-41e5-99aa-d3ef535569ff)

* **1st and 6th production** are not required. We don't need to think about them. 
* 9th production is **E -> f**
* Row -> E
* Column -> first(f) -> f
* **9** means 9th production.

* 7th production is **F -> e**
* Row -> F
* Column -> first(e) -> e

* 2nd production is **B -> cC**
* Row -> B
* Column -> first(cC) -> c

* 4th production is **C -> bC**
* Row -> C
* Column -> first(bC) -> b

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a0fd923-ed6a-4d2a-bfa3-ca8bd5c90bce)

* 3rd production is **B -> Epsilon**
* Row -> B
* Column -> first(Epsilon) -> go further, further not there, go to parent -> follow(B) -> first(D) -> first(FE) -> first(F) -> first(e), first(Epsilon) -> e, Epsilon -> go to parent -> follow(F) -> first(E) -> first(f), first(Epsilon) ->e,f, first(Epsilon) -> go to parent -> e,f,follow(E) -> e,f,first(Epsilon) -> go to parent -> e,f,follow(D) -> first(h) -> e,f,h.
* Column -> e,f,h.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4848c57-f747-4b56-8613-2de607773fb5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91c6f64a-a1dc-4500-8b3e-4fc153d03274)

* 5th production is **C -> Epsilon**
* Row -> C
* Column -> first(Epsilon) -> go to parent -> follow(C) -> e,f,h.

1) follow(C) -> first(Epsilon) -> go to parent -> follow(B) -> first(Dh) -> first(D) -> first(FE) -> first(F) -> first(e), first(Epsilon) -> e,Epsilon -> go to parent -> e, first(E) -> e,f, Epsilon -> go to parent -> e,f, first(h) -> e,f,h.
2) follow(C) -> Calling itself ignore.

* 8th production is **F -> Epsilon**
* Row -> F
* Column -> first(Epsilon) -> go to parent -> follow(F) -> first(E) -> first(f), first(Epsilon) -> f, Epsilon -> go to parent -> follow(E) -> f, Epsilon ->f, follow(D) -> f, first(h) -> f,h
* Column -> f,h

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/955e7e30-ec8d-45bc-afa7-fc16ccb35ec3)

* 10th production is **E -> Epsilon**
* Row -> E
* Column -> first(Epsilon) -> go to parent -> follow(E) -> first(Epsilon) -> go to parent -> follow(D) -> first(h) -> h.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac3dbaa1-c4ce-4d73-8ba4-fb1497ff7407)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9218ff05-b280-4a1c-b7af-0c0b7af7e78d)

* Question:-
* For the grammer if we construct **LL(1) parsing table** then How many error entries?

> We cannot do any shortcut. We have to draw the **whole table** then only we will see the no. of blank spaces.

* The above one is **LL(1) grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af5c22b6-d342-42b4-96ca-dc420addbf3d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eaada76b-0cc1-4604-9d70-1732217481c7)

* Total Error Entries. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59a437dd-48ce-4092-9bf8-9deb8ced432a)

* Example.



















## Misplaced Images

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13c32075-f1fd-4277-9417-1f78dea3cf1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5eff1507-a093-4b38-9b62-114aa658b9ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6bf9c49-01a8-4407-bf0f-92c01cd177a4)
