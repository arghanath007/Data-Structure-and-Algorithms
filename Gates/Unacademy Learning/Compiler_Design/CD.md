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












