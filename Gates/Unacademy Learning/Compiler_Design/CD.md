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

















































































































