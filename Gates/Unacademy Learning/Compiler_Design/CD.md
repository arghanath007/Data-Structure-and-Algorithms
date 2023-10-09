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
* LL(1) grammer or not.
* We have only one variable(S).
* Terminals -> a,b, $
* 1st production -> **S -> aSbS**
* Row -> S
* Column -> first(aSbS) -> first(a) -> a

* 2nd production -> **S -> bSaS**
* Row -> S
* Column -> first(bSaS) -> first(b) -> b

* 2nd production -> **S -> Epsilon**
* Row -> S
* Column -> first(Epsilon) -> got to parent -> follow(S) -> $, a,b

1) follow(S) -> first(b) -> b
2) follow(S) -> first(a) -> a
3) follow(S) -> Calling itself ignore.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a7a2179-4a50-4005-9454-6f799c74d44d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd20a8ea-1582-4ff6-a5a1-9997f18881bb)

* This is not **LL(1)** as some places have multiple entries.
* These are **error entries**.
* **Error entries** means **blank**.
* Question:-
* How many places conflict came?

> **2 places(a,b)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d671e76f-d761-4dab-891a-15052f4b299d)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d97794c1-37e5-4897-b9f1-89aaa0df9d08)

* Example
* LL(1) or not.
* Productions ->4
* Variables -> S,A,B
* Terminals -> a, b, $
* **S** is starting variable so **$** there.

* 1st production, **S -> AaAb**
* Row -> S
* Column -> first(AaAb) -> first(A) -> first(Epsilon) -> go further, further there -> first(a) -> a

* 2nd production, **S -> BbBa**
* Row -> S
* Column -> first(BbBa) -> first(B) -> first(Epsilon) -> go further, further there -> first(b) -> b

* 3rd production, **A -> Epsilon**
* Row -> A
* Column -> first(Epsilon) -> go to parent -> follow(A) -> a,b

1) follow(A) -> first(a) -> a
2) follow(A) -> first(b) -> b

* 4th production, **B -> Epsilon**
* Row -> B
* Column -> first(Epsilon) -> go to parent -> follow(B) -> a,b

1) follow(B) -> first(b) -> b
2) follow(B) -> first(a) -> a

* No need to write for **A and B** variables as they have **1-production** only. [**IMPORTANT**]
* We will draw **1-row** for **S** variable.
* This is **LL(1)** grammer, there are no places have multiple entries.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79e95ada-712a-46d6-b62b-1e8849357b47)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cabf90f9-3611-40bd-933b-d084b2586ee5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9015b82-b4da-4dda-bb15-13e018a3a56a)

* [**IMPORTANT**]
* No need to write for **A and B** variables as they have **1-production** only. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fa05800-aaeb-4c9d-8ff2-75b8ff112d26)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4df43fcc-b7ba-4140-8bc0-382a7256c147)

* We have **3-error entries**. [**IMPORTANT**]
* There is **no conflict**. So it is **LL(1) grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d02aecc5-e933-4d8f-b1de-8c9dc7699090)

* From the given grammer what is the minimal string possible?

> Minimal String -> ab, ba.

* There is **no recursion**.
* The grammer will generate only two strings -> ab, ba.
* We want to generate **ab** string.
* Top down parser follows **Left most derivation**.
* In the given string the first character we want to derive is **a**.
* **A** is variable so **expand**.
* If it is **terminal** then compare with **look ahead symbol**
* Read all of the leaf nodes from **left to right**.
* If terminal is equal to the **look ahead symbol** then **increment** the **input pointer**. So it will go to next which is **point at 'b'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc8a4a72-edcd-4379-81da-6904022eeca2)

* At any time we have **doubt** which production we have to take, **LL(1)** will look/see at the **table**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1389f865-608a-4f8d-aad7-d1701900753a)

* Top down parser will start from **Start symbol(S)** and it follows **left most derivation**.
* If any dilemma because of more than **1-production** then see the **table**.
* If we take some string which is not part of the **grammer** then gurantee that we will end up with **blank symbol**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/164c9916-c331-4542-b865-c648f8cca238)

* **b** and the **a** which is at the **look ahead symbol** are not equal which means **parsing error**. We cannot go further.
* Wherever not matching **blank** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82bbad24-3156-4f2a-8ba4-27c7ec21a369)

* How to check if given grammer is **LL(1) grammer** or not? [Short Cut]

1) If grammer(G) not contain null production.

* S -> Alpha1 | Alpha2 | Alpha3.
* Null production means **Epsilon**.
* **S -> Epsilon** not there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c21de8ff-115c-4218-bef1-10813258cfc1)

* In the **a** column we have 1st production.
* In the **b** column we have 2nd production.
* In the **c** column we have 3rd production.
* They are going different. So no problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd35ef14-798a-4ecb-ba04-1c5f6cbc11b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e51c3e3-68ad-48e0-85e3-8c11d92332ca)

* In the **a, b** column we have 1st production.
* In the **b, c** column we have 2nd production.
* Alread in the **b** column **1st production** is already there and **2nd production** also came. So it is not **LL(1)** grammer.
* If we want to confirm it is **LL(1) or not** then this is the rule:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/941ae5f5-0b67-4b51-90c1-6cef5360ecd8)

* How to check if given grammer is **LL(1)** grammer? [**IMPORTANT**]

1) If given grammer don't have **null production**:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ac61ae1-0fcc-431f-97d6-27d8f1b8f0d1)

* Just find out **first()** of every production. [Step 1]
* All of them have the same **row** which is **S**.
* We have to do **intersection** between the **columns** of the productions. We have to do **pair-wise** intersection between them. [Step 2]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac9de6a9-7b56-4156-9519-af96c0d169cb)

* Phi(Q) means **no two productions** will go in the **same column**.
* Just find out **first()** of every production.
* One of them is **not phi** means it is **not LL(1) grammer**. One fail means all of them will fail.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69bd4611-e860-47c1-84d8-742efbb1f39c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8560a38-6c84-4731-9531-53bab8137158)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99a491ca-459e-44b9-8e07-3cbe176e49c1)

* **Disjoint** means nothing common.
* Pairwise Disjoint then It is **LL(1) grammer**. [**NOTE 1**]
* [**IMPORTANT**]
* It will work for grammers which don't have **null productions** i.e **no Epsilon** there.
* For **null productions**, **follow** required.

2) If **grammer(G)** contains **null productions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8f8c1de-cfec-47c2-a732-1707b1f8f004)

* 1st production -> **a** column
* 2nd production -> **b** column
* 3rd production -> **c** column
* There is no problem here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ed4f296-ee06-4a49-ad5e-4dd85e90257b)

* Now **problem** is there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1308f639-ff81-44bc-b4f5-2065d54157b2)

* **Pairwise disjoin** should be there like **above** only.
* **Pairwise disjoin** then it is **LL(1)**. [**NOTE 2**]
* [**IMPORTANT**]
* In both the places **Pairwise disjoin**.
* In the second note there is **follow()** that is the **only difference**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/101c9f4d-5472-4e2c-ae3d-03d237ffc969)

* If variable are having **1-production** then **skip** them. They are not causing any problems.
* If we want to check **LL(1)** or not then we have to **concentrate** on **variables** that are having **more than 1-production or multiple productions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0f3cac5-82fd-44be-81e4-2091fa4374ce)

* [**IMPORTANT**]
* Checking following grammer is **LL(1)** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcc30586-a9bb-44ca-83c4-e9fa6530e73d)

* Example.
* Ignore **E** as it has **1-production** and concentrate on **S** as it has **more than 1-production**.
* S -> E|b.
* first(S) -> first(E) -> b.
* first(b) -> b.
* first(S) intersection first(b) -> b intersection b -> b -> Not equal to **phi(Q)**. For **LL(1)** grammer it should be **phi(Q)**. So it is **not LL(1) grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ab04fb9-76ca-4bc5-84ef-199c9f0e99e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4086cc76-d165-4e34-9aba-540e7bd9b13b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/079b5dc6-d508-4ee3-a403-d63058f65103)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f776feb8-6051-4b98-9621-1b759ecd3a88)

* So it is **not LL(1) grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02b0e235-c005-4b05-b6fa-c6976b37bfef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d5c9e23-78d5-4f93-b94e-2c0549ece6a7)

* Examples.

* Example 1:-
* 2nd production **A -> c**
* Row -> A
* Column ->first(c) ->c

* 3rd production **A -> Epsilon**
* Row -> A
* Column -> first(Epsilon) -> go further, not there, go to parent -> follow(A) -> first(B) -> d, first(Epsilon) -> go further, not there, go to parent -> follow(B) -> first(b) -> d, b.

* 4th production **B -> d**
* Row -> B
* Column -> first(d) -> d

* 5th production **B -> Epsilon**
* Row -> B
* Column -> first(Epsilon) -> go further, not there, go to parent -> follow(B) -> first(b) -> b
* Don't have to check **1st production** because it has only **1-production**.
* **LL(1) grammer** is satisfied

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c4eddcc-a564-4e00-899f-8087493551a4)

* Do the **shortcut** method:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/294e1d87-fddb-48b0-a3ab-b0a6626622e9)

* first(c) intersection follow(Epsilon) -> **c** intersection **d, b** -> Phi(Q)
* first(c) -> c
* follow(Epsilon) -> go further, not there, go to parent -> follow(A) -> first(B) -> first(d) , Epsilon -> d, Epsilon -> go further, not there, go to parent -> follow(B) -> d, first(b) -> d,b

* first(d) intersection follow(Epsilon) -> d intersection b -> Phi(Q)
* first(d) -> d
* follow(Epsilon) -> go further, not there, go to parent -> follow(B) -> b
* Don't have to check **1st production** because it has only **1-production**.
* **LL(1) grammer** is satisfied.


* Example 2:-
* first(aSA) intersection follow(Epsilon) -> **a** intersection **$, c** -> Phi(Q)
* first(aSA) -> first(a) -> a
* follow(Epsilon) -> go further, not there, go to parent -> follow(S) -> $, first(A) -> first(c), Epsilon -> c, Epsilon -> go further, not there, go to parent -> follow(A) -> first(Epsilon) -> follow(S) -> $, c

* first(c) intersection follow(Epsilon) -> c intersection **$, c** -> c -> Not Phi(Q)
* first(c) -> c
* follow(Epsilon) -> go further, not there, go to parent -> follow(A) -> first(Epsilon) -> go further, not there, go to parent -> follow(S) -> $, c
* **LL(1) grammer** is not satisfied.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/516e6bd9-2631-411a-b43b-661fa14034a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d99377a-c9b5-4ffb-9ee0-d6089b543db5)

* Example 3:-
* Ignore **S** only **1-production**.
* first(a) intersection follow(Epsilon) -> a intersection **b, $** -> Phi(Q)
* first(a) -> a
* follow(Epsilon) -> go further, not there, go to parent -> follow(A) -> first(B) -> first(b), first(Epsilon) -> b, Epsilon -> go further, not there, go to parent -> b, follow(B) -> b, Epsilon -> go further, not there, go to parent -> b, follow(S) -> b, $

* first(b) intersection follow(Epsilon) -> b intersection $ -> Phi(Q)
* first(b) -> b
* follow(Epsilon) -> go further, not there, go to parent -> follow(B) -> first(Epsilon) -> go further, not there, go to parent -> follow(S) -> $
* **LL(1) grammer** is satisfied.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a9d3961-89b7-4165-ae34-bd1a305c5327)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/711f69b3-df15-451c-8d65-c8fe93137a23)

* [**IMPORTANT**]
* 1 -> **LL(1) grammer**
* 2 -> Not **LL(1) grammer**
* 3 -> **LL(1) grammer**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ab7c19e-4aaf-4c17-b95b-1e60ea21a436)

* Example.
* first(aAa) intersection follow(Epsilon) -> a intersection a -> a -> not Phi(Q)
* first(aAa) -> a
* follow(Epsilon) -> go further, not there, go to parent -> follow(S) -> $, Epsilon -> Epsilon go further, not there, go to parent -> follow(A) -> first(a) -> a
* It is Not **LL(1) grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72d4a30a-3350-4878-90e2-f2188c7751a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9503196d-c7ec-4d5b-83c9-9ca9fa20926c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/742dde97-b4f7-4522-bf1b-1f742d6f8987)

* [**IMPORTANT**]
* NOTE:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a68376ce-fe7b-4499-9caf-417dfeed8b08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a05a2c7-a815-4ac5-966a-4af077ed302c)

* If any grammer contains **left factoring** then there is **no chance** of it being **LL(1) grammer**.

* If grammer contain **left factoring** then it is not **LL(1) grammer**. [**NOTE**]

* As not asked to do **convertion** and check. Just say that the grammer doesnt have **LL(1) grammer** as it has **left factoring**. Don't do **conversion** and all.
* [**IMPORTANT**]
* We have a grammer which is **not LL(1) grammer**. What about **left factoring**?

> May be, may not be. We don't know.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/905f7bf8-042e-4154-9b1d-4fc66bc19823)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdd51f54-a40f-44e5-86b2-1c4a8e4f4f30)

* Example.
* Verify it is **LL(1) grammer** or not?     [Don't do conversions in these types of questions]
* first(b) -> b
* first(Sa) intersection first(b) -> **first(S) , b** intersection **b** -> b -> Not Phi(Q).
* first(Sa) -> first(S) -> first(Sa), first(b) -> first(S) , b -> Same loop repeating itself.
* So it is not **LL(1) grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9071c97c-326a-4907-8e3e-c986ecee88db)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11e2fa49-7a57-4d0d-af6a-8d757d6c81be)

* If any grammer contain **left recursion** then it is not **LL(1) grammer**.
* We can convert or not that is a **different story**.
* Right recursion don't have any problem.
* Right recursion no problem.
* We have to verify **Right recursion** also before concluding anything.
* **Right recursion** and **LL(1) grammer** have **no relation**. Depending on the **grammer** it maybe **LL(1) grammer** or may not be **LL(1) grammer**.
* No conclusion for **Right recursion** as anything can happen.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aba20f88-15bc-4794-95bc-12f400fe97ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b63dd35-89a1-4e3d-acbb-2a8ad26892ff)

* If grammer contain **left recursion** it is **not LL(1) grammer**. So we cannot apply on the **left recursive grammer**, **LL(1) parser** as it is not **LL(1) grammer**.
* **LL(1) parser** is only applicable for **LL(1) grammer**. [**IMPORTANT**]
* We can apply **recursive descent parser** to anyone as it is **brute force**. It doesn't have any rules or regulations. It may work or may not work. Anything can happen. It is the starting parser.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68fc1216-1999-453f-8a50-cda7023e2a72)

* Example
* Verify **LL(1)** grammer or not.
* first(aSbS) intersection first(bSaS) -> a intersection b -> Phi(Q)
* first(aSbS) -> first(a) -> a
* first(bSaS) -> first(b) -> b

* first(bSaS) intersection first(Epsilon) -> **b** intersection **b,a** -> b -> Not Phi(Q).
* first(bSaS) -> first(b) -> b
* first(Epsilon) -> go further, not there, go to parent -> follow(S) -> $, first(b), first(a) -> b,a
* This is not **LL(1)** grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b70ab241-aa10-4514-b126-81c42a15112c)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27cf6423-d233-4e20-b840-c581ea605e1f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0574ca23-c955-443f-acd3-1c59daf9d1fa)

* If the given **grammer** is **ambigious grammer** then the grammer will never be **LL(1) grammer**.
* If the given **grammer** contain **ambiguity** then it is **not LL(1) grammer**.
* If the given **grammer** contain **ambiguity, left factoring, left recursion** then it is **not LL(1) grammer**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b02fd393-a3aa-4f33-a086-9f94becd37c7)

* Grammer is not **LL(1) grammer**. What is the reason?

> We clearly cannot say what is the reason. May be **ambiguity, May be left factoring, May be left recursion**. Anyone of the can be the reason. Sometimes these **three** may not be the reason also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfabf067-a35b-41a3-8366-6fd833339b36)

* We have a grammer that has **no ambiguity, no left factoring, no left recursion** then what is that grammer?

> Maybe **LL(1)** may not be **LL(1)**. Some other problem.

* If grammer is **LL(1)** then it means that the grammer doesn't have **ambiguity, left factoring, left recursion**. One side it is **True**.
* If grammer is **LL(1)** then it dont have **ambiguity, left factoring, left recursion**.
* If grammer don't have **left recursion, left factoring and ambiguity** then the given grammer may be **LL(1)**, may not be **LL(1)** no gurantee.
* **LL(1)** means these three(left recursion(LR), left factoring(LF) and ambiguity) not there.
* These three(left recursion, left factoring and ambiguity) not there doesn't mean **LL(1)** may be, may not be.
* NOTES [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8c501fa-f8b7-454c-a2c0-6f405a5e3943)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9514d77f-1458-405d-84e3-19740f395cbf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ceabaf5d-2cc1-4a88-b84a-b004a90049aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ce68e74-6c91-4f10-85eb-d9119974a604)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb181b75-5eed-4c83-8131-d996dc6aef07)

* A -> It has **left recursion(LR), left factoring(LF) and ambiguity**. So it is not **LL(1)**.
* C -> It doesnt have **left recursion(LR), left factoring(LF) and ambiguity** but we constructed **LL(1) parsing table** and saw **conflict**. So it is not **LL(1)**.
* B -> It doesnt have **left recursion(LR), left factoring(LF) and ambiguity** and we constructed **LL(1) parsing table** and saw **no conflicts**. So it is **LL(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eacf13b2-a14d-45da-8008-bde8864efcb4)

* **Left recursion(LR), left factoring(LF) and ambiguity** -> They are not **sufficient** conditions**, they are **necessary conditions**.
* Question:-
* Which one of the following is sufficient condition to say that the given grammer is LL(1) grammer?

1) Elimination of left recursion
2) Elimination of ambiguity
3) Elimination of left factoring
4) None of these [Answer]

* Answer -> Option **4**, None of these.
* What is the sufficient condition to say some grammer is LL(1) grammer?

> In the table **no conflict**. That is the only way. [**IMPORTANT**] 

* [**IMPORTANT**] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93ddb4fb-07a9-4b0c-91d0-4ede7c157f80)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9198939-6aa1-45d8-8ab2-254d32524d68)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2aa2f9f6-0279-4e2e-a176-ca03fa97ee0a)

* When can we say grammer is CFG?

> Left side single variable.

* When can we say grammer is regular?

> First it should be **CFG** then on the **right side** it should either have **left linear or right linear**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6a862af-f4c9-4571-9ac9-d6b7adb0fb23)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a678fbdc-e656-4fe1-ad67-1453855711fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06147dd0-cd9c-4ff7-be94-4ac81c6eaa05)

* Regular grammer generates regular language.
* CFG generates CFL.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4061bd7a-ca9d-424b-af95-a738871ca82a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d859df4a-fce6-4355-a513-182ecb70980b)

* Every regular grammer is **LL(1) grammer**?

> Need not be.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c3f3193-1996-48c3-a0c3-65fe77d35b06)

* **Every regular grammer** need not be **LL(1) grammer**. It means that we have a **regular grammer** it may be **LL(1)** or may not be **LL(1)**. Sometimes it may **fail**. [NOTE]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95286a93-882f-4c6f-a91b-e19fc0125d33)

* **Every regular grammer** need not be **LL(1)** because it may be **ambigious or left factoring or left recursive**. [NOTE]
* [**IMPORTANT**]
* Questions/Problems:-

1) only first()
2) only follow()
3) first() and follow()
4) Draw Table
5) Check LL(1) or not.
6) From the notes. True or False Statements.

## Bottom Up Parser

* Without backtracking or no backtracking because table is there.
* Directly we take correct one.

1) LR Parsers

* LR(0)
* SLR(1)
* LALR(1)
* CLR(1)

2) Operator Precedence Parsers.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19b6ba10-5f33-4a19-b9be-290bab73d5fe)

* Checking give grammer is ambigious or not is **undecidable problem**.
* Converting given grammer into equivalent unambigious grammer is **undecidable problem**.
* Ambiguity means **undecidable problem**.

## LR Parser

1) Ambiguity grammer can never be **LR**. It doesn't mean that unambiguity grammer will be **LR**. There is a hope
2) Unambiguity grammer maybe **LR**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29fe6c17-00d6-43b0-a34a-133670d735a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b991885-d2a5-4c61-8d81-d824f4689d7c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16e52456-d25b-46d9-9838-073383c10410)

* LL(1) subset of LR(1)
* LL(2) subset of LR(2)
* LL(K) subset of LR(K)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ba757df-d191-4564-8ebe-157edc213ff3)

* **LR** having table.
* **LL** also having table.
* Size of **LR** parsing table(PT) is approximately **2-times** the size of **LL** parsing table(PT).
* LR is difficult to implement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f4ab344-12cb-4242-abbb-5b03f02f1877)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dfd0279-0db6-4eec-b349-7546fa720ddc)

* **LR** means scanning inputs from left side and using reverse of right most derivation.
* Every parser will scan inputs from left only.
* No one will scan from right.
* CLR(1) -> Canonical LR.
* LALR(1) -> Look Ahead LR.
* SLR(1) -> Simple LR.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc14e656-f777-4df6-a65a-27e3c11829d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3f2f7a8-df96-41eb-8f57-e8e7659bd00b)

* Every LL(1) grammer is regular grammer?

> No.

* Every regular grammer is not LL(1) grammer. We know.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4474f48-6fc2-4c05-a666-831eeefe3255)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92bbe3ba-5fad-4fbe-8ba1-d208ac9156d9)

* Bottom Up Parser -> LR parser.
* For all **LR parser** parsing algorithm is **same** but parsing tables are different.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5339c12-fe77-4ea4-ae1c-3c29191d18aa)

* Top down -> From **S** to **ABC**.
* Bottom Up -> From **ABC** to **S** -> Compression only there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2088fd77-f505-442e-8ffb-8c64d23125ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2107e5f3-f67b-40da-900e-8a7b99b7b339)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fb59902-e1bc-47d7-a5ca-8e0216cea523)

## parsing-vii (10) [3rd Oct 2023]

## LR Parsing Algo.

* CLR1 another name is LR1.
* Top down parser superior is LL1.
* Bottom up parser superior is CRL1 which is LR1.
* Top down parser topmost LL1.
* Bottom up parser topmost is LR1.
* Top most things we have to compare.
* Between LL1 and LR1, **LR1** is the superior.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27181a3e-4441-4dbd-b9c1-cad4f5e3023e)

* TOS -> Top of the stack.
* Assume x -> state number on Top of the stack(TOS), a -> look ahead symbol
* Parser uses **PDA**.
* LA uses DFA.
* PDA -> DFA + 1-stack.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c9903af-18e1-412d-a156-654e5e7c9d26)

1) If action[x,a] - Si then shift **a** and **i** and increment input pointer.

* LR parses uses **table** and the name of the table is **action**.
* Row -> S

2) If action[x, a] = rj and jth production is **alpha -> Beta** then pop **2 * mod(Beta) symbols and replace by alpha. If sm is the state below alpha then push goto[Sm, alpha]
3) If action[x,a] = blank then PE(Parsing Error)

* blank -> gap.

4) If action[x,a] = acc then SCP(Success completion of parsing).

* acc -> Accepted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0e7e7a9-1da6-429d-869b-af74b813b4d6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e8797cc-a7dc-4bf8-83b5-140f78145230)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86ecf369-58ce-473d-a6b9-b10d68144fca)

* Example
* How to generate that string from the given grammer using bottom up.
* If we do directly then it is production.
* If we do **reverse** then it is reduction.
* Right side replaced by left side is **reduction**. It is also called as **compression**.
* Left to right is **expansion**.
* Handles -> Which substring we are replacing to finally get to the start symbol.
* Bottom up parser will start from string and proceed to start symbol.
* Production used in the reverse order is **reduction**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6cf70d5-e646-4e8e-bb73-4689eb41f226)

* 5-productions we are using. 5-reductions we have done.
* We used the productions in the reverse order so it is  bottom up.
* 1st reduction we have done is **b -> A**.
* b -> A -> 1st reduction
* aA -> A -> 2nd reduction
* aA -> A -> 3rd reduction
* b -> A -> 4th reduction
* AA -> S -> 5th reduction

* New grammer and new string, it is difficult with the bottom up parser. The difficulty is we don't know which is the first reduction and all.
* Read from the bottom as it is **bottom up** and read the right side people(b, aA, AA). They are called as **handles**.
* Identifying handles is very difficult.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/489f65df-c26e-4566-ba7d-8158e3c38899)

* We have done this manually.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/533a32c3-ac93-4b91-bd29-cc5d964edf81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9f26b4b-aa26-49f6-8b57-d694c27c9057)

* Look Ahead symbol is **a** now.
* What is **x**?

> **x** is the state number on top of the stack.

* Initial state is **zero(0)**.
* Initially the automata is in the **zeroth(0)** state.
* Zero(0) is the state number which is at the top of the stack initially.
* Top of the stack is **AA** there. **A&& production come and loose.
* Top of the stack is **AA** and **AA** productions can reduce now.
* **shift** means handle not possible **wait**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a47a4490-b153-45f2-952a-2b30f4ad67b6)

* Phi(Q) means two **A's(capital a's)** are over.
* Top of the stack **5** indicate that **AA** is over.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a872399b-c612-4eda-923f-05bd82b39328)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d665513-aaa4-4d56-948a-0fe57fe84337)

* 4 symbols are popped and replaced by **S**.
* What is **0S**?

> 1. [From the table]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1102d951-e915-464f-9ae2-9248f7006b6a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6b20706-0a8f-4169-8e83-b3c24d9fef81)

* We have to **push** one.
* **1** indicates that **S** is over.
* **S** over means total tree came. So **$** should come.
* Top of the stack is **1**, look ahead symbol is **$**.
* **$** means we will see **action** part.
* We have to check **action** part of **1$**. It is **acc**.
* Finally it is **acc**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd428be3-62b8-44b7-a01f-f63009d242df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/544dca48-9ce2-4906-9081-fd9373af3e9f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/518ebc4b-fb49-46c4-b73e-4088bcc2d569)

* These are the reductions that came by **algorithm**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3fe7667-faa0-40d4-aed7-41b046a5a8c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84f3d9af-e7df-417a-bfc6-7cc69ce50e11)

* Table is given.
* Handle not there at the top of the stack -> Push
* That's what the algo is doing.
* Handle there then **reduce**.
* Whatever table said do that.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/373aca29-2d90-4ff6-904a-ff8c2f1123ed)

* After everything is over we are numbering them in **reverse order**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9a4acca-131d-451a-9985-d4328c6487e4)

* So the **bottom up parser** in the **reverse order** is **right most derivation**.
* Two **A's** we got from **S**. We expanded the **right one** first.
* In the **reverse order** if we see it looks like a **top down parser** who is working as a **right most derivation**.
* Bottom up parser derivation -> In the **reverse order** it is **right most derivation**.
* Actual order **no derivation** of bottom up parser.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c718f10-41b7-4140-a051-fbf27cf8d447)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d39f6b5-ac74-4690-b112-e1d144c3eeb4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1948faac-d403-4e8e-8aa4-133b3ef67cc1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5aad698d-f55f-4338-a8b2-840c4a8ee945)

* Example.
* From grammer only table came.
* 1st Column -> inputs
* 2nd Column -> Stack contents
* 3rd Column -> Reductions
* When we will reduce?

> Somewhere we have seen **reduce(OR)** in the table. [OR means reduce]

* When we will push?

> Somewhere we have seen **shift(push)** in the table. [shift means push]

* Whatever table said do that.
* Input is **aaab$**
* Stack is **0**.
* first symbol is **a**.
* So **0a** means **S3**.
* **S3** means **shift 'a'** which is input and increment input pointer.
* When we have done the **shift** then **input** will **increase**. [**IMPORTANT**]
* Input -> aab$, stack -> 0a3, Top of the stack -> 3. So it is **3a**. It is **S3**.
* We will add **a3** again and increment input pointer.
* Input -> ab$, stack -> 0a3a3, Top of the stack -> 3. So it is **3a**. It is **S3**.
* We will add **a3** again and increment input pointer.
* **Shift** means input will **decrease**.
* Input -> b$, stack -> 0a3a3a3, Top of the stack -> 3. So it is **3b**. It is **S4**.
* We will add **b4** and increment input pointer.
* Input -> $, stack -> 0a3a3a3b4, Top of the stack -> 4. So it is **4$**. It is **r3**. [r3 -> Reduce 3rd production]
* 3rd production = A -> b
* Reducing 3rd production means that on the right hand side we have **one symbol(b)**, so **pop** 2-symbols and replace by **A**. Stack is **0a3a3a3b4 -> 0a3a3a3A**
* What about **A**? It is **3A**. See the **goto part**. **Goto part** of **3A** is that **6** should be there. Stack is **0a3a3a3A -> 0a3a3a3A6**.
* Reduction means replace **b** by **A**. We have **only one symbol of 'b'** in the stack then **pop 2-symbols**. We replaced **A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa6b05d5-2332-4807-a325-354e12852e3b)

* Now **A** came. So remember **A** also.
* When top of the stack, **variable** comes then go to **goto part** and check **3A** as **3** is before **A**. Goto part of **3A** is **6**. Push **6**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85d8a834-4df8-478b-8bbd-3c082b64c05e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f3bac49-47b5-4bd0-b862-3fb60b07023c)

* Forget **state number**. At the top of the stack **handle** there or not there?
* Input -> $, stack -> 0a3a3a3A6, Top of the stack -> 6. So it is **6$**. It is **r2**. [r2 -> Reduce 2nd production]
* 2nd production= A -> aA
* As we have **2-symbols** on the right hand side. We have to **pop 4-symbols**.
* Stack is **0a3a3a3A6 -> 0a3a3A**.
* **A** has come. So we have to do **A's** as well. It is **3A**, as **3** is before **A**. Goto place of **3A** is **6**. Push **6**. 
* Stack is **0a3a3a3A6 -> 0a3a3A6**.
* Reduce time don't increase input pointer.
* Shift time only increase input pointer.
* Input -> $, stack -> 0a3a3A6, Top of the stack -> 6. So it is **6$**. It is **r2**.
* 2nd production= A -> aA
* As we have **2-symbols** on the right hand side. We have to **pop 4-symbols**.
* Stack is **0a3a3A6 -> 0a3A**.
* **A** has come. So we have to do **A's** as well. It is **3A**, as **3** is before **A**. Goto place of **3A** is **6**. Push **6**. 
* Stack is **0a3A -> 0a3A6**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/627bc537-af6b-41f9-a5a9-7b48cfbdd544)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/277144be-cf54-48ba-95c2-edccc866b8c0)

* Input -> $, stack -> 0a3A6, Top of the stack -> 6. So it is **6$**. It is **r2**.
* 2nd production= A -> aA
* As we have **2-symbols** on the right hand side. We have to **pop 4-symbols**.
* Stack is **0a3A6 -> 0A**.
* **A** has come. So we have to do **A's** as well. It is **0A**, as **0** is before **A**. Goto place of **0A** is **2**. Push **2**. 
* Stack is **0A -> 0A2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/664cbc78-640c-4f85-9867-5d85f7ac9c18)

* Input -> $, stack -> 0A2, Top of the stack -> 2. So it is **2$**. It is **blank**. It is **parsing error**.
* It is **parsing error** because it means that the string will not come from the given grammer.
* If string is **possible** from the given grammer then we will see **acc**.
* If string is **not possible** from the given grammer then we will see **blank**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d5e6456-fa18-4ed8-bcaf-00fc3f93b4aa)

* If **blank** came no need to go further. What we will do.
* Do whatever **table** says.
* Everything is done by **table** only.
* Major is **table** only.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa7fbc46-882e-4dd2-bf5c-749aeb4aaa3d)

* Example.
* It is **possible**.
* After giving number to productions. Now give numbers in **reverse order**.
* Bottom up parser follows revers of right more derivation.
* Give normal numbers and then give reverse numbers then it will become top down. Bottom up will become top down.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f2322dd-8c4c-46db-ab85-5a78c36fba8a)

* Input -> abab$, stack -> 0, Top of the stack -> 0. So it is **0a**. It is **S3**.
* Input -> bab$, stack -> 0a3, Top of the stack -> 3. So it is **3b**. It is **S4**.
* Input -> ab$, stack -> 0a3b4, Top of the stack -> 4. So it is **4a**. It is **r3**.
* 3rd production= A -> b
* As we have **1-symbol** on the right hand side. We have to **pop 2-symbols**.
* Stack is **0a3b4 -> 0a3A**.
* **A** has come. So we have to do **A's** as well. It is **3A**, as **3** is before **A**. Goto place of **3A** is **6**. Push **6**. 
* Stack is **0a3A -> 0a3A6**.
* Input -> ab$, stack -> 0a3A6, Top of the stack -> 6. So it is **6a**. It is **r2**.
* 2nd production= A -> aA
* As we have **2-symbols** on the right hand side. We have to **pop 4-symbols**.
* Stack is **0a3A6 -> 0A**.
* **A** has come. So we have to do **A's** as well. It is **0A**, as **0** is before **A**. Goto place of **0A** is **2**. Push **2**. 
* Stack is **0A -> 0A2**.
* Input -> ab$, stack -> 0A2, Top of the stack -> 2. So it is **2a**. It is **S3**.
* Input -> b$, stack -> 0A2a3, Top of the stack -> 3. So it is **3b**. It is **S4**.
* Input -> $, stack -> 0A2a3b4, Top of the stack -> 4. So it is **4$**. It is **r3**.
* 3rd production= A -> b
* As we have **1-symbol** on the right hand side. We have to **pop 2-symbols**.
* Stack is **0A2a3b4 -> 0A2a3A**.
* **A** has come. So we have to do **A's** as well. It is **3A**, as **3** is before **A**. Goto place of **3A** is **6**. Push **6**. 
* Stack is **0A2a3A -> 0A2a3A6**.
* Input -> $, stack -> 0A2a3A6, Top of the stack -> 6. So it is **6$**. It is **r2**.
* 2nd production= A -> aA
* As we have **2-symbols** on the right hand side. We have to **pop 4-symbols**.
* Stack is **0A2a3A6 -> 0A2A**.
* **A** has come. So we have to do **A's** as well. It is **2A**, as **2** is before **A**. Goto place of **2A** is **5**. Push **5**. 
* Stack is **0A2A -> 0A2A5**.
* Input -> $, stack -> 0A2A5, Top of the stack -> 5. So it is **5$**. It is **r1**.
* 1st production= S -> AA
* As we have **2-symbols** on the right hand side. We have to **pop 4-symbols**.
* Stack is **0A2A5 -> 0S**.
* **S** has come. So we have to do **S's** as well. It is **0S**, as **0** is before **S**. Goto place of **0S** is **1**. Push **1**. 
* Stack is **0S -> 0S1**.
* Input -> $, stack -> 0S1, Top of the stack -> 1. So it is **1$**. It is **acc**.
* **1** indicate **S** is over. So string should be **over**.
* acc -> Successful completion of parsing(SCP).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2a6a0a6-725e-4b22-8eb7-3f9db51b42b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0f03874-6c6c-45d5-9dd8-3c2bcd0d4179)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a850702-e116-4b39-a7cf-decee957f1c3)

* We cannot say which **derivation**.
* Let's see in **reverse order**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d076840d-3208-4cbb-b86d-5c329af14820)

* We have given the numbers in **reverse order**.
* Bottom up reverse is top down.
* If we give **reverse order** then Bottom up reverse is **top down**.
* So if we see in the **reverse order** it looks like **top down** but the **derivation** is **right most**.
* Expand **right one**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/155b5941-adf5-4d6a-807e-af243cf2ae2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/963a7fbd-3fc8-4c75-aab4-7fcc9ff61241)

* Reverse Order right most derivation.
* Bottom up parser difficulty -> Identifying **handles** are difficulty if we do manually.
* If we do using/apply the **algo** then no difficulty nothing.
* Questions:-
* How many handles?

> As many productions are there those many handles. **5-handles**.

* What are those?

> See from bottom. b, aA, b, aA, AA -> **5-handles**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caa12aa9-43c1-477f-a234-7f644ed53168)

* Prefix -> Set of all leading(starting) symbols -> We always have to read from the left hand side.
* 'TOC' string prefix -> Epsilon, T, TO, TOC
* Suffix -> Set of all tailing(ending) symbols -> We always have to read from the right hand side.
* 'TOC' string suffic -> Epslion, C, OC, TOC
* While bottom up parsing is going on all the **prefixes** present in the **stack** are known as **viable prefixes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ea9586d-67f6-4e1a-a56d-837bbc104450)

* **b** itself is a handle.
* If handles comes then how can we keep something in the handle?

> If handle comes we have to **reduce**.

* **a** is possible as **viable prefix**.
* **ab** is possible as **viable prefix**.
* **abb** is not possible. Whenever **b(middle 'b')** came, **b** itself is a handle. It will reduce there is no chance.

* **a** is possible as **viable prefix**.
* **ab** is possible as **viable prefix**.
* **aA** is also possible as **viable prefix**. **b** becomes **A** due to **reduction**.
* **aAb** is also not possible as **viable prefix**. **aA** itself is a **handle**. It will reduce there is no chance
* **Ab** is possible as **viable prefix**.
* **aa** is possible as **viable prefix**.
* We have to **push** first without pushing how we will know that it is a **handle**.
* If **handle** there then don't **push** one more symbol.
* **A** is also **handle**.
* All of the **prefixes** that are possible in the **bottom up parsing** in the **stack** those are known as **viable prefixes**.
* Prefixes not strings.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0b79da2-870d-47a6-bf33-39dbe7ae4b92)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16090e0c-d172-49dd-9e67-1c928c34c1b4)

* **Viable prefixes** purpose is they are making a **handle**. They are very close to **handle**. Maybe handle or may be very close to handle.
* Handle is also viable prefix?

> **YES**. It means that handle can come inside **stack** or not. **YES** it can come inside **stack**.

* Handle is also viable prefix only.
* One viable prefix contains **1-handle** possible?

> Maybe.

* One of the handle maybe viable prefix.
* One viable prefix cannot have/contain **2-handles** or cannot have/contain **more than 1-handle**. [**IMPORTANT**]
* Handle itself is one viable prefix. [**IMPORTANT**]
* When one handle will come we will **reduce**. No chance of second one.
* Table is deciding when to **push and pop**.

## parsing-viii(11) [4th Oct 2023]

## LR(0) parsing Table Construction

* To construct LR(1) parsing Table, Functions needed are **first() and follow()**.
* To construct LR(0) parsing Table, we need two functions:-

1) Closure().
2) Goto().

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66a647fa-b88e-45f3-a7c3-d9e60718aeb7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67502b75-89d4-4d2d-8267-3a05470ac809)

* Both grammers are same.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/292eeac7-421b-4977-bfd7-e9a7c838802d)

* These two gammers are same or not?
* When can we say two grammers are equal?

> When both are accepting same language. Both are accepting same strings.

* Language is collection of strings.
* Whatever **G** is accepting **G'** is also accepting same only.
* Only difference in **G'**, one more level is increased(S' -> S).
* Both the grammers are same if they accept the same language.
* We have added **one production** extra in **G'** grammer. That's why it is called as **augmented grammer**.
* Augmentation -> Adding
* Original grammer is **G** and **augmented grammer** is **G'**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4eae897-2717-4b7b-b6d5-327e1e6efdeb)

* Augmented Production = S' -> S.
* They are **same(G and G')** because language are **same**. Other than **increasing one level** we have done nothing else.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72bb7042-c5ad-4653-9afe-988371f433ab)

* In the last production **dot(.)** is at the **right most place**.
* **dot(.)** is kept at the **right hand side** of the production.
* S -> .xyz  [It indicates that production just started now]
* S -> xyz.  [It indicates that the production is over]
* When **xyz** is over then **S** is over.

* S -> .xyz [It indicates that production just started now]
* S -> x.yz [It indicates that **x** only is over]
* S -> xy.z [It indicates that **xy** is over]
* S -> xyz. [It indicates that the production is over]
* Production just started now means that the **dot** is on the **left most place**.
* Dot(.) will be there on the **right side** only as the story is there on the **right side only**. Anywhere on the **right hand side**.
* Dot(.) is at the **right hand side** but in the **left most place**, it means that **production just started now**.
* The **parser** knows how much over and how much not over is by seeing/using the **dot(.)**. [**IMPORTANT**]
* Dot(.) is there at the **left most place**, the **parser** got to know that the **production just started now**.
* Dot(.) is there at the **right most place**, the **parser** got to know that the **production is over**.
* The **compiler(grammer)** knows in the production how much over and how much not over is by seeing/using the **dot(.)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7738ef-2919-4756-8620-e32de1bf1556)

* Take the productions and keep **dot(.)** on the **right hand side** anywhere. Those are called as **LR(0)** items.
* S -> xyz. This is **LR(0)** item and another name is **completed LR(0) item** or **reduced LR(0) item** or **final LR(0) item**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98c08bcc-6ac0-4511-90cb-04944b2deaf5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d2d5bca-9217-4f18-b237-a1282e766f8f)

* When **LR(0) item** is going on starting itself we will get the dot(.) at the left most place.
* Completed LR(0) item will give **reduce/reduction**.
* Non-Completed LR(0) item will give **shift**.
* Out of the four LR(0) item, the **first 3** will give **shift** entries at they are Non-Completed LR(0) items and the dot(.) has not reached the right most place.
* Production not over **shift** will come.
* Production over **reduce** will come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29f239c5-60f5-4949-b7c0-acce5586de16)

* **LR(0) parsing table** contains **shift-reduced entries**.
* The only debate is how to find out **shift** entries and **reduced** entries. As we want to construct **LR(0) parsing table**.
* Who given reduced entry in the table?

> Completed LR(0) item.

* Who will give shift enties in the table?

> Non-Completed LR(0) item.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3db02d87-9c77-4cf6-8ce1-9ba3fbc0d7e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2527252-24df-4153-a101-599c6a97224d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e536c99f-dec7-4355-a38e-5ae28f30df82)

* LR(0) item.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe61c64b-6ef9-45a7-af92-7a722f182dc2)

* Total is LR(1) item as something extra.
* **, and 'a'** not there then it is LR(0) item.
* dot(.) not there then it is production.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4e79b09-6186-4c2e-9180-4f5b4d3ff412)

### Closure()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7c7f40f-1445-49c5-8323-5eee1b7e8a8d)

* S -> A.A [LR(0) item]
* It is the production from the grammer(G).
* **Closure()** will be calculated for **LR(0) items** only.
* We cannot calculate **Closure()** for **productions**.
* The **input** of **Closure()** is **LR(0) item** only.
* **Closure()** of any **LR(0) item** is **equal to**:-

1) Write **LR(0) item** as it is.

* After dot what is there? 

> **A** is there. It means that the **parser** is at **A**.

* After dot(.) who is immediately there, **A** indication that the **parser** is at **A** then we can use **productions** of **A** or **A's productions**.

* S -> .xyz
* It means that **parser** is at **x**.
* **.x** means that **parser** is at **x**. We are at **x**. **x** is not over. If we do some work then **x** will be over then we will move the dot(.).
* We can use the **S** productions now.
* S -> x.yz
* **.y** means that **parser** is at **y** now.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95042380-79c1-48a7-9817-86156a1f0347)

* If the Parser is at **A** which means we can use the **productions** of **A**.
* If the Parser is at **S** which means we can use the **productions** of **S**.

2) After dot whoever is there immediately write that variable's all productions from the grammer. 

* Write all of **A's productions** from the grammer. 
* As the productions are **starting** so the dot will be there at the **left most place**.
* The productions we can take means we can **start** using them. Dot is there at the first place.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/017d525e-d776-40fa-8636-59d8367b46ef)

* A -> .aA, A -> .b
* After dot, **terminal** is there then **stop it**. We cannot get any further.
* After dot, **variable** is there then we can write the **variable's content(productions)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/897ac3bc-cf72-4a86-889e-2ceda8e86591)

* S' -> S -> Augmented production
* S' -> .S -> Augmented LR(0) item.
* Closure(S' -> .S) [Closure of Augmented LR(0) item]

1) Write as it is.

* S' -> .S

2) After dot whoever is there immediately write that variable's all productions from the grammer. 

* After dot **S** is there so copy all of the **variable(S)'s productions** from the grammer by keeping dot at the first place.
* S -> .AA
* After dot we have variable(A). So we can go further.
* After dot **A** is there so copy all of the **variable(A)'s productions** from the grammer by keeping dot at the first place.
* A -> .aA | .b
* After dot **terminals** are there so **stop it**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52f658e5-fa6e-4022-8099-6c55f1d1ddd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cc8f8c8-3552-4aed-8521-85ba356d7470)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/908e9467-a104-4347-9412-82b29047078b)

* Closure() will be applied for **LR(0) items** only.
* In the table **acc** came because of **augmented productions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3634a33c-0f93-4275-8f8c-ed08f04bc818)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18eed22e-d3f8-4b98-8a15-7689f9aa37ef)

* Example.

1) Write as it is.

* A -> .aA

2) After dot immediately any variable? No. There is **terminal**, we cannot go any further. Just stop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fce8b791-a3a8-4bec-b6f6-4bd91238f8c1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ed7aa02-af04-461c-8fa5-f930053ea8d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5ea2ed6-78cb-4cfa-a620-771275945b14)

* Example
* Closure(S -> .AA)

1) Write as it is

* S -> .AA

2) After dot any variables there then copy all of their productions.

* After dot **A** is there so copy all of the **variable(A)'s productions** from the grammer by keeping dot at the first place.
* A -> .aA | .b
* After dot there are **terminals(a,b)** so just stop it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84bc07db-a416-43a3-adb4-3aa4c1655534)

* Closure(I)
* I -> LR(0) item.
* G -> Grammer.

1) Add **I** [Write as it is]
2) If A -> BC.DE is **I** and D -> FH is in **G** then add **D -> .FH** to the closure(I)

* Whatever we have written as it is. After dot(.) variable is there so it will gurantee generate something in the grammer(G) then write the **productions** by keeping dot(.) at the first place.

3) Repeat 2nd step for every newly added LR(0)-item.

* Repeat **2nd step** for every **newly added LR(0)-item**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/049cbb36-c63f-4db1-bce7-a026cbf048ac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f27454e3-dbc6-4eb0-82bd-c395806624c0)

* [**IMPORTANT**]

## Goto()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38583048-6e4c-48ab-baf0-05f97b1741dd)

* S -> .AA [LR(0) item]
* After dot **A** is there.
* In the LR(0) item after dot **A** is there then we have to give **A** as **input**.
* **Goto()** has **two inputs**. One is **LR(0) item** and one is the **input**.
* **Input** is whoever there immediately after dot in the **LR(0) item**.
* We cannot give whatever we like as the **input**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3678881-499e-4a42-b7ef-7237d8590479)

1) Whatever **LR(0) item** we have given **same** thing will come. After dot **A** is there.  We have given **A** as input. Dot will **shift** to the **middle**.

* Whatever symbol we have given as **input**, dot will **shift** after that symbol.
* It is indicating that **A** is over. We have given **A** as input.
* If we have given **A** as input so **A** is over.

2) From now onwards it is **same closure()**. After dot **variable(A)**. Get all of the **contents(productions)** of the **variable(A)** from the grammer.

* A -> .aA | .b
* As after dot **terminals** there so we stop.
* Only first step differ remaining all will be like **closure()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39063c76-a1e6-4370-8ffa-697fdab32449)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c206107f-e93c-468b-ab30-08577a8fcc5d)

* This is **LR(0) item**. After dot **y** is there. So we have to give **y** as input.
* After **goto()** it will be **S -> xy.z**.
* Dot will move after the **input symbol**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddaf51f7-0acf-44a3-a6d5-012a47e3b62a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b7fa1f1-f3a9-41ce-bbc3-20452539146e)

* Example of **Goto()** [**IMPORTANT**]
* Only **1st step** is **different** next steps are same as **closure()**.
* How to get 2nd step?

> Whatever 1st step answer we got to that apply **closure()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d340c7d-15bd-419f-9a86-06ee5a68a2e5)

* It is **LR(0)** item.
* After dot immediately there is **a**. So **a** is the **input** to **goto()**.
* goto() needs two inputs.
* Now we have to move dot after the **input(a)**.
* **A -> a.A**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfb81ef2-fa24-4b50-81cc-88780dd0d2c1)

* Now do **closure()**.
* First is write as it is which is already there.
* After dot we have a **variable(A)**. So copy all of the **variable(A)'s productions** from the grammer and put dot(.) at the **starting**.
* A -> .aA | .b.
* After dot we have **terminals(a,b)** so stop it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b38e9f9-c93a-4b44-a8a0-d8c683ed5a6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/649cc330-0284-4396-85c3-dfc6841b0f07)

* Example
* After dot we have **A**, so **A** is the input for **goto()**.
* We will write the dot after the **input(A)**, which is **A -> aA.**.
* Now apply **closure()** on **A -> aA.**.
* After the dot we have **no variables**. So **stop it**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1405f44f-ec58-46b3-9f03-88ed28f21e33)

* [**IMPORTANT**]
* I -> LR(0) item
* x -> goto() input.
* Goto(I, x) -> It means that after dot in **I** we have **x**.
* What is the **output**?

1) Add **I** by just move dot after **x**.
2) Apply Closure() of first step. [closure(1st step)]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6df5b725-d9fa-4bf4-b604-2bbc4cb8e20b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3421d528-008d-43f9-a180-26e2ba58f86e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83169299-8ec7-4179-a266-891abd874248)

* [**IMPORTANT**]

## LR(0) parsing table construction algo

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5db9f5f-fecb-497a-96a9-9d724f3da74c)

* Algo

1) I0 = Closure(Augmented LR(0) item)
2) Using I0 construct DFA
3) convert DFA into LR(0)-PT

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da665fab-0af4-4750-817e-72ef592fe3a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81f7c7d2-a8c0-4b35-81b8-b017750ca8c3)

* Construct LR(0) parsing table for the following grammer.
* Grammer(G):-
* S -> AA
* A -> aa|b

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7523890-6798-411f-bd48-85b199a79524)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ab20c6b-ced4-4f3d-a876-d5dffa95627c)

* Take the augmented production and keep the dot on the left most place. It became augmented LR(0) item.
* To the augmented LR(0) item find **closure()**.

1) Write as it is.

* S' -> .S

2) Check if variable there after dot.

* **Variable(S)** is there after dot. So write all of the contents(productions) of **Variable(S)** keeping **dot(.)** at the first place, from the given grammer. 

* S -> .AA
* **Variable(A)** is there after dot. So write all of the contents(productions) of **Variable(A)**, keeping **dot(.)** at the first place, from the given grammer.
* A -> .aA |.b

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a42506ae-8a24-4245-ac44-b263a33cc0a2)

* This is **state zero** which is **I0** which is nothing but **starting state** of **DFA**.
* Automata will state from **state zero**.
* We are at the **starting state**.
* In **I0** state we have **4 LR(0) items**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f6fe4ca-b2ee-4836-835d-e326c2838fcf)

* In the first LR(0) item after dot, **S** is there so we have to write **S** as **input**.
* In the second LR(0) item after dot, **A** is there so we have to write **A** as **input**.
* In the rhued LR(0) item after dot, **a** is there so we have to write **a** as **input**.
* In the second LR(0) item after dot, **b** is there so we have to write **b** as **input**.
* After dot whoever is there we have covered **everyone**. That is why it is **DFA**. DFA means covering every possibility.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4f67ed6-e4c9-4c73-b21f-58880053feb9)

* We have covered every possibility.
* We are now applying **Goto()**.

1) We are writing as it is and moving the dot after the **input**.
2) Perform **closure()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a34583c4-e730-4909-aa8c-b3f8c47db1c4)

* Applying **Goto()** on **S' -> .S** and **S** as the input we got **S' -> S.**. After dot no variable there so **stop**. This is **I1**.
* Applying **Goto()** on **S -> .AA** and **A** as the input we got **S -> A.A**. After dot we have **variable(A)** so copy all of the contents of **variable(A)** from the given grammer starting with dot.

* A -> .aA | .b
* This is **I2**.
* Applying **Goto()** on **A -> .aA** and **a** as the input we got **A -> a.A**. After dot we have **variable(A)** so copy all of the contents of **variable(A)** from the given grammer starting with dot. 

* A -> .aA | .b
* This is **I3**.
* Applying **Goto()** on **A -> .b** and **b** as the input we got **A -> b.**. After dot no variable there so **stop**. This is **I4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74e18aaa-d842-43bf-9f5e-d7c8b41d8615)

* State(I1) indicate **S** over. It means that we have given **S** as input. **S** is given as input because after dot **S** is there. **.S** came because of augmented production(S' -> S). If augmented production(S' -> S) is not there then the **I1** state never arrives. Because of **I1** state only **acc** will come.
* State(I1) indicate **S** over. **S** over means string is also over. On state I1 we are expecting **$**. On the **I1** state **$** should come then only we are successful.
* Because of augmented production(S' -> S) only we got the **I1** state.
* Why we have written augmented productions in the grammer?

> To get the **acc** in the table.

* To get **acc** in the table **S** should be **over**.
* State(I1) indicate **S** over.
* State(I3) indicate **a** over.
* State(I4) indicate **b** over.
* We got **I0** after **I0** we have to make it **DFA** by covering every possibility.
* After dot Whatever there apply **Goto()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8459695e-3d28-44a4-9dba-1d33fad4bd4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46a5b045-f6dc-49de-8ec1-6311a9f0bfb1)

* It is called **DFA** because in **I0** we have covered every possibility.
* If we want to make it **DFA** then on every state we have to **cover**. Covering not possible then stop it.
* Possibility there we have to cover.
* In **I1** state we don't have to apply any input. After dot nothing there which means **completed**.
* To make it **DFA** after dot whatever we have we have to apply it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/134850d4-6ddc-4fd0-8585-d10b35687d7b)

* In **I2** state we have **A, a, b** after dot. So we have to apply **three** possibilities.
* In **I3** state we have **A, a, b** after dot. So we have to apply **three** possibilities.
* In **I4** state we don't have to apply any input. After dot nothing there which means **completed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4ca0d2d-2e48-4a6b-b2df-88c004981079)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb8e7d46-2083-4c70-9362-e6a3733cfa79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cbfb7ae-55b0-40f4-9aee-05c8ef9dff7c)

* **I6** is as it is like **I3** so no need to write it. Remove it.
* If something new then only **new number**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0349e734-2fe9-4e96-be11-f84b53da7a53)

* If **same** will come then keep **self-loop**.
* **I3** on **a**, **I3** only coming then keep **self-loop**.
* Meaningfully do it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0964488-f4d1-47f8-a6ac-eaa055b00f64)

* **I3** completed
* **I4** completed.
* **I5** completed.
* **I5** completed.
* They have no chance of expansion. It means all are **completed**. We have made **DFA**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae07c598-6089-4762-bad3-5a28d7ca5e8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9a163c1-7e66-4a13-8ebb-556718b761dd)

* [**IMPORTANT**]
* DFA representation in two forms **transition diagram** and **transition table(LR(0) parsing table)**.
* Rows are based on **no. of states** in the DFA.
* **I3** state indicate **a** over.
* **I4** state indicate **b** over.
* **I6** state indicate **aA** over. [aA -> Handle]. **r1**
* **I5** state indicate **AA** over. [AA -> Handle] , **r2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7f14684-5be7-4e33-84f7-fe3ed609d593)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/055ffb9a-d2ca-4c74-abc3-76a48b8449c4)

* Table contain two parts:-

1) Action contains terminal(a,b) followed by **$**. 
2) Goto contain variables(A, S).

* For both the tables then common part is **rows** which are **state** only.
* For both the tables the common part is **no. of rows**.
* Columns will differ.
* **0 to 6** states which means **7**s states tables.
* Table contains two parts so the columns are divided into two parts(Action and Goto).
* **S'** is a **new creating** not part of the **grammer**. We cannot add **S'** in the grammer part. [**IMPORTANT**]
* Purpose of **augmented production(S')** is **acc**. Only for **acc** not for others. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c982dda-fdc3-4931-a663-7e65e2ad9cc2)

* In the **diagram state no zero(0)** which is **equal** to ***table row no zero(0)**.
* From **state no zero(0)**, **4** people are going outside. Out of the **4**, **2 terminals(a, b)** are going. So the **2 terminals(a, b)** will go to **action area**. So the **2 variables(S, A)** will go to **Goto area**.
* From **state no zero(0)**, **4** people are going outside. It means that in the **0th row**, **4 values** will come.
* **Terminals** will come to **action area**. [**IMPORTANT**]
* **Variables** will come to **Goto area**. [**IMPORTANT**]
* For **state no zero(0)** and **a** we have **I3**. Write **S3** in the table.
* For **state no zero(0)** and **b** we have **I4**. Write **S4** in the table.
* **Shift and reduced** are in the **action part**. Write only **S and r** in the **action area**. [**IMPORTANT**]
* Don't write any **S and r** in the **Goto area**. Just write **number**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47e58831-57bb-4fa8-a2d7-cec4a27669d3)

* On **I0**, 4 people are going outside. So in the **0th row**, 4 values will come. They are all not **shift or reduce**. Out of the 4 people 2 people are going to **Goto part**, write numbers for them. There is no **shift or reduce**. Only 2 people are going to **action part**. Only **2 shift** will come.
* Completed -> Dot on the right hand side.
* In state **I0** anyone completed?

> No, so no **reduce** will come.

* How to check in state **I0** no reduce?

> Go to state **I0** and check if any production completed. No one completed so no reduce.

* For only **terminals** which are going to **action part** for them only we have **2 shift**. Remaining will go to **Goto area**.
* State **I0** over.
* In state **I1** whoever is there, they are **augmented production**. The purpose of **augmented production** is **S** over or not over. To these we don't have to do anything.
* **I1** indicate that **S** over. **S** over means string should also be over. On **I1(1)** we are expecting **$**. **I1(1)** on **$** blindly write **acc**. **S'** is the special person, no reduce no shift. Write **acc**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/592da45d-ace4-4212-9c72-2c48cc2ebac7)

* In **I2**, three people are going outside. 1-variable(A) and two terminals(a,b). variable(A) cannot give **shift or reduce** leave it. Two terminals(a,b) so **two shift** will come.
* **I2(2)** on **a** will give **I3**. Write **S3** on the table.
* **I2(2)** on **b** will give **I4**. Write **S4** on the table.
* **I2(2)** on **A** will give **I5**. Write **5** on the table.
* **I2** over.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22d5821b-44e5-40e3-baad-6209bb1a4955)

* In **I3**, three people are going outside. 1-variable(A) and two terminals(a,b). variable(A) cannot give **shift or reduce** leave it. Two terminals(a,b) so **two shift** will come.
* **I3(3)** on **a** will give **I3**. Write **S3** on the table.
* **I3(3)** on **b** will give **I4**. Write **S4** on the table.
* **I3(3)** on **A** will give **I6**. Write **6** on the table.
* **I3** over.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5867747b-50ca-4ec7-9618-1a8922bc7069)

* No reduce in **I3** because no one completed means handle not came.
* IN **I4** no one is going outside. It means **no shift**. One person is completed. **Production '3'** which is **A -> b** is completed.
* **Completed** also called as **final** also called as **reduced**.
* **Production '3'** is completed we should write **r3**.
* In the **fourth state(I4)** we should write **r3** as **Production '3'** is completed.
* **fourth state(I4)** means **4th row** and **Production '3'** is completed. We should write **r3** in **state(I4)**, total row we write. That's why it is called as **LR(0)**.
* **LR(0)** means blindly write.
* **fourth state(I4)** means **4th row** and **Production '3'** is completed. We should write **r3** in **total action**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/288af9d9-1983-42bc-b8db-4b7c6073bb50)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/326f2a7e-5451-45a7-9e5a-a9bc06961e20)

* **Fourth state(I4)**.
* **LR(0)** is the **least power**.
* It is writing blindly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0293030b-8ea2-48c8-aaae-50f54915e074)

* In **I5** state **no one** going outside so **no shift**.
* They are not going outside because they are **completed**.
* So **S -> AA** production is **completed** which is **r1**.
* LR(0) so write **r1** everywhere in the **action part**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d65f1cd-8723-4a97-9f19-ccf78be2c1c0)

* In **I5** state **no one** going outside so **no shift**. They are **completed**.
* Already over what input we will give.
* If they are not over, to make them **over** we will give **input**. [**IMPORTANT**]
* So **A -> aA** production is **completed** which is **r2**.
* LR(0) so write **r2** everywhere in the **action part**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/820bd387-b31f-4462-8846-97aa68f186b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5c6fd24-b1f4-4900-a084-2b4a07a89d0f)

* [**IMPORTANT**]
* We are going from one state to another state by applying **Goto()**.
* **Goto()** -> Going from one state to another state.
* Within the state we are using **closure()**.
* **Closure()** -> In the state we are expanding possibilities.
* **I1** state is not part of grammer. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65cb960e-ce2f-409f-be82-a810fb11cb1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19a2c20e-8b65-4bf7-b562-b6290217a434)

* [**IMPORTANT**]
* No conflict in the **table** so the given grammer is **LR(0) grammer**.
* In the above LR(0) parsing table no conflict, so the give grammer is **LR(0) grammer**.
* We are using LR(0) item.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/891f83ca-6952-453c-b460-235208db017b)

* Construct LR(0) parsing table for the following grammer.
* The given grammer is not LL grammer as it has **left recursion**.
* If maybe **LR** because it don't care about **left recursion, left factoring**. It will only care about **ambiguity**.
* If it is **ambigious grammer** then not need to check also. Stop and say it is **not LR** grammer.
* If we don't know that it is **ambigious grammer** or not then we can **check**.
* **LR** grammer is only afraid of **ambiguity**.
* **LR** grammer is not afraid of **left recursion, left factoring**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f45e1a0a-2a03-4cd4-8ad3-cfaaba2ef48f)

* It has **left recursion** so it is **not LL(1) grammer**.
* The grammer maybe **LR(0)** grammer because it is not afraid of **left recursion, left factoring**. I
* **LR(0)** grammer is only afraid of **ambiguity**.
* **LR(0)** grammer is **more powerful** so there it **hope**.
* **Bottom up parsers** are **more powerful**. They maybe hope.
* In **ambiguity**, both **LL(1) and LR(0)** grammer will **cry**.
* In **left recursion**, **LL(1)** grammer will **cry** and **LR(0)** grammer will not **cry**.
* In **left factoring**, **LL(1)** grammer will **cry** and **LR(0)** grammer will not **cry**.
* More powerful doesn't mean that **everytime** it will work.
* There is a **hope**
* In **compiler** the dangereous problem is **ambiguity**.
* Identifying **ambiguity** is undecidable. Conversion is also undecidable.
* **Left factoring and left recursion** we can convert.
* **ambiguity** is the complex problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02525c5c-991e-4f02-94de-584b5ce2f871)

* Example.
* Check **LR(0)**.
* Grammer(G):-
* S -> (L) | a
* L -> L,S | S

* Step **1** is **I1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30b45214-e7e5-42b2-9e34-807ae11cdbc6)

* Start symbol is **S**.
* Create the augmented production.
* S' -> S
* S' ->.S [Augmented LR(0) item]
* Find the closure() of **S'**.

1) Write as it is.
2) **Variable(S)** is after dot, so write the contents(productions)** of **Variable(S)** with the dot at the starting from the given grammer.

* S -> .(L) | .a [( -> Terminal]
* No variable after dot so stop it.
* It is **I0** state.
* **I0** is over. To make it **DFA** we need to cover **3 possibilities**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b437e28-506b-4cf3-81fe-e83b49693d79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15c53e37-83a0-41b4-9eb0-fd265bbc92d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a897c5a8-be8f-4499-a380-3b1a8c87ed7c)

* Because of **S -> (.L)**, we have **L** after the dot. So we have to copy all of the **contents(productions)** of **variable(L)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23ce85b8-357e-4de0-bfda-050f52e02974)

* Now we have **L and S** after the dot. No use of writing the **contents(productions)** of **variable(L)** again. Write the **contents(productions)** of **variable(S)** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcf8a9a2-15c5-4e01-8da0-d315bbf3da9d)

* In **I1** after dot nothing there. Leave it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bd18ac6-b917-40ba-93a8-2e72bbc5f1c7)

* In **I2** we give two **L's** after dot. Both will go.
* On **I2** if we give **L** then both **first and second production** both will go as after dot **L** is there.
* At the end of the day **L** only.
* It is **one** as we are doing **DFA**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/318ed4d1-f31e-4935-ba5e-637dc7b04ac0)

* S -> (L.)
* For the input of **)** we got **S -> (L).**. It is now completed. This is **I6**.
* L -> L.,S
* For the input of **,** we got **L -> L,.S**. As we have **variable(S)** after the dot so we have to copy all of the contents(productions) for **variable(S)**. This is **I7**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29d8074f-efb9-47b5-bebc-f46e692fc65f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/067c5e3c-0ee6-4087-b56f-18d1619ab3b2)

* For **S** in **L -> L,.S** We have input of **S**. So it is **L -> L,S.**. It is **I8** state and it is completed.
* We have **0 to 8** which is **9** states.
* [**IMPORTANT**]
* In **DFA** one state and one symbol only. We cannot give same symbol multiple times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c37d9a69-c37a-4ec9-9613-0e39a6c88528)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57b6f00d-b0fa-4943-90d0-2b2b9511cb45)

* [**IMPORTANT**]
* Going outside by giving some **input** means they are **not completed**. To complete them we are going outside.
* If already completed we cannot go outside.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9dbca06-0886-48c7-8dd3-d95e42ee4b2a)

* In state **I0**, 3 people are going outside. Going outside means **shift entries** will come. We have **variables(S)** they will go to **Goto part** and **terminals(a, '(' )** will go to **action part**. Only the **terminals(a, '(' )** will **shift entries**.
* Our goal is **action part** only.
* **I0** completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b72d8318-d03f-436a-b66a-32203e4ecb81)

* **I1** is special person.
* No need to do special work for **I1**.
* Nothing will come because of **I1**. The only thing which will come is **1** on **$** we will write **acc**. Other than this nothing there.
* **I1** completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ce86d40-92d4-453c-9ead-1b1ce5a27ff0)

* In state **I2**, 4 people are going outside. Going outside means **shift entries** will come. We have **variables(S, L)** they will go to **Goto part** and **terminals(a, '(' )** will go to **action part**. Only the **terminals(a, '(' )** will **shift entries**.
* **I2** completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3690d631-e6d5-4292-a9b3-57c9a0245690)

* In state **I3**, no one is going outside. It means that they are already completed. If already completed why apply **input**.
* Completed people will give **reduce**. [**IMPORTANT**]
* Non-Completed people will give **shift**. [**IMPORTANT**]
* As **I3** is completed, so it will give reduce.
* State is **3** as it is **I3**.
* The productionis **S -> a.**, so it is the **2nd production** from the given grammer.
* We have to write **r2** in the **total action**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33a55dd2-eb96-4972-a807-6a96f6135749)

* In state **I4**, 2 people are going outside. Going outside means **shift entries** will come. We have **no variable** and they will go to **Goto part** and **terminals(',' , ')')** will go to **action part**. Only the **terminals(',' , ')' )** will **shift entries**.
* **I4** completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5fecfec9-3a60-40e5-b49e-614e7b68be0e)

* In state **I5**, no one is going outside. It means that they are already completed.
* State is **5** as it is **I5**.
* The productionis **L -> S.**, so it is the **4th production** from the given grammer.
* We have to write **r4** in the **total action**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5720d728-013e-4f5f-8e9b-f092071678e9)

* In state **I6**, no one is going outside. It means that they are already completed.
* State is **6** as it is **I6**.
* The productionis **S -> (L).**, so it is the **1st production** from the given grammer.
* We have to write **r1** in the **total action**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e5c4262-6a8d-4eb3-a7e2-67097cd41205)

* In state **I7**, 3 people are going outside. Going outside means **shift entries** will come. We have **variable(S)** and they will go to **Goto part** and **terminals(a , '(')** will go to **action part**. Only the **terminals(a , '(' )** will **shift entries**.
* **I7** completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b4b11fb-7d7b-4a20-8a33-2beafec5cb6e)

* In state **I8**, no one is going outside. It means that they are already completed.
* State is **8** as it is **I8**.
* The productionis **S -> L,S.**, so it is the **3rd production** from the given grammer.
* We have to write **r3** in the **total action**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3716a806-0f60-4b2a-a07a-69091b2ccece)

* There is **no conflicts**.
* So it is **LR(0)** grammer.
* **LR(0)** grammer passed means everyone will **pass**.
* Top down parser, top most one is **LL(1)** and it said it **cannot**. Bottom up parser's least parser which is **LR(0)** and it said **yes**.
* **LR(0)** is more powerful.
* **LR(0)** passed means **SLR(1), LALR(1) and CLR(1)** will gurantee **pass**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/990463eb-8796-49e2-86b0-afcb73c4ec80)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/912e1963-ac67-4775-8962-8caf6ee11b46)

* Small error in table. Fixed.
* **Action part** is more valuable in the **table**.
* Unless and until mentioned to draw total table, don't draw total table.
* Do only **Action part**.
* **Goto part** only for **name sake**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31487bec-945b-497f-9b98-da66195c1b25)

* All not completed people will not give **shift entry**.
* Not only **not completed** but after dot **terminal** should be there then only we will get **shift entry**. [**IMPORTANT**].
* Question:-
* Not completed people will give **shift entry**?

> **NO**. It is **wrong**.

* Shift entries will come because of **not completed** but every **not completed** cannot give **shift entry**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8b3b2e8-c764-46ef-8347-7f14bf41aca4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4655b74c-76f3-49bd-b2ee-9331c890249c)

* **Reduce** will come because of **completed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ccf55a1-4834-471a-849d-a0e940af6623)

* SR(Shift-reduce) conflict. At that time it is saying that we may **push** or we may **pop**. That is the **dilemma**. Maybe handle or may not be **handle**.
* In **two places** problem came.
* Already **shift** there and then **reduce** came.
* Shift means **push**.
* Reduce means **pop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be683c34-2362-4f12-b67f-32bfb8331487)

* There maybe chance that two people may/will complete.
* This is **RR(reduce-reduce)** conflict.
* We will get **RR** conflict when in **one state** multiple people are **completed**.
* **Bottom up parser, LR parser** contain **two conflicts** whcih are **SR and RR** conflicts. [**IMPORTANT**]
* There is **no SS** conflict.
* We will get **SR** conflict when in **one state** completed people are there as well as **non-completed** people also there.
* In one state **completed and non-completed** both people are there then it is **SR** conflict will come.
* In one state **more than one(1) completed** people are there then it is **RR** conflict will come.
* Conflict will come in the **action area** only.
* Write only **action area**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f6badbe-4fda-4c3f-9d22-783f2730d01e)

* [**IMPORTANT**]

## parsing-ix(12) [6th Oct 2023]

* **Unambigious** grammer **LR** there is **hope**. If hope is there then only we will check. After checking it may pass or it may fail.
* Not completed and shift not came -> After dot immediately **variable(A)** there.
* We have to take variable as input. We are going to **Goto part**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b464bf3f-0aad-4b8f-b4a1-645e13a378eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bf50fad-2ad3-4f29-b777-527e6797e44c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77650e03-0c0e-423f-87e4-3a3e059829d3)

* In **LR** parser, **SS** conflict is not possile, why?

> We are using **DFA**.

* If we use **NFA** then it is possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ff5fcab-82d5-4cd4-8d1b-2cdf01c2ddd5)

* LR parser conflicts -> Two possible -> SR and RR conflicts.
* SR or RS both are **same**.
* Reduced entries will come in the table because of **completed** people.
* Is there any completed person who will not give reduced entries?

> Augmented production. It is not part of our grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29552393-d1a1-4418-8c59-e43d05b15ed8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5977f52-20bb-4cf8-a889-f29a5e75fcbe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7885d61-6eda-456f-9fa4-c19da0756d7f)

* To get the **conflict** minimum of two productions are required. Not only min. of two but out of them one should be reduced.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96f01fa1-ea72-4fc0-aa4d-585aee56c86e)

* If at all the state(I5) is having conflict then:-

1) I5 should have minimum of two productions.
2) Atleast one of them in those two productions is completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c55d7a33-7f5b-4b63-8548-6c188bab7bee)

* LL(1) and CLR(1) or LR(1) are only having **relation**.
* LL(1) and LR(0) or SLR(1) or LALR(1) are not having any **relations**.
* Check the given grammer **LR(0)** or not?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd1732f7-cd07-4719-91c3-701c7dd2f509)

* If **LR(0)** passes then **SLR(1), LALR(1) and CLR(1) or LR(1)** are also **passed**. No need to do them also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b57512bd-87f5-4541-afd5-38a044dacdfc)

* Find the **closure()** of **LR(0) item** and we will get **I0** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/046fcb59-1e2b-417a-baa2-0d2a7ea5f9b1)

* As we have **variables(E, T)** after do so we have to copy the contents(productions) of the **variables(E, T)** and starting add dot to them from the given grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7f9897-6bdb-4597-af71-2bfa6fae856d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e3cd850-9c62-4dc3-b0f2-76f57c11bf95)

* How to check if given grammer is **LR(0)** grammer or not, after DFA over?

> One way is **table**.

* If any state having problem it has to satisfy one criteria which is **minimum of two productions**. Out of the two, one should be **reduced**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59952452-e437-4929-95cd-65e3c7834759)

* It looks like a problem but it is not a problem because it is augmented production.
* Augmented production will only give **acc**.
* It is not part of the grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a7abc19-54ff-487e-b6d6-736f496159d7)

* CHeck if the grammer is **LR(0)** grammer or not.
* LL(1) failed due to **left factoring**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ed81559-e747-4939-a995-d4a961abb74e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01091b9a-3619-4b09-b8f7-96cd294a3d42)

* We have a **conflict** as we have more than two productions and one of them is **reduced**.
* 2nd Production is completed in the **I1** state. So write **r2** everywhere as it is **LR(0) grammer**.
* With the **+** as the **input** we were going to **I2** state. So write **S2** for it. **r2** and **S2** are in the same place in the 1st row with **1**.
* We have one(1) **SR** conflict.
* As we have **conflict** so it is not **LR(0)** grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b446484c-65fb-4ce9-9901-2c1d6d1f3b32)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f70a4332-d1d9-4bbd-a86a-df0262f494c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae23c345-e25e-4cad-b375-5eb83d263cb7)

* It is not a **LR(0)** grammer.
* How many states are having problem?

> One state.

* The state having problem is called as **inadequate state(IS)**.
* The state having no problem is called as **adequate state**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdcf264c-e466-4423-8ea3-e1bfc02980a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec6c8aad-afce-49e6-ad92-e9ac91abdd59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d3f3eab-2aea-402c-bc9d-8966b5131886)

* If it was **LR(0)** grammer then it would have **zero(0) inadequate state(IS)**.
* LR(0) parser we write the reduce everywhere. We have write the **r2** everywhere because of **LR(0)**.
* In **SLR(1)** everywhere we don't write. Only few places we will write.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e62799d-eb74-4d04-9955-15d5c3d3217e)

* We want to check if it is SLR(1) or not?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/944238fe-3ebf-47d2-b636-adc09b968d98)

* Because of the above **state**, it is not LR(0).
* Now check for **SLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d8eaacb-c400-44c9-a983-f5d734266145)

* We have to check the above state only because all of the other states have passed **LR(0)** so they will pass **SLR(1)** as well.
* We are drawing **SLR(1)** table.
* We will check **necessary row** wherever previous one failed. That place we will check.
* In the state where is the **shift entry**?

> We are going outside by reading terminals.

* Whatever **shift entry** there in **LR(0)** write that **shift entry** in **SLR(1)**.
* In all **LR parser** only change is **reduced entries**. **Shift entries** are **same**.
* Only **reduced entries** differ. **Reduced entries** will decrease in **SLR(1)** compared to **LR(0)**.
* In **LR(0)** we write the **reduce everywhere**.
* In **SLR(0)** we write the **reduce only few**.
* Only **reduce** will differ. They may **decrease** sometime maybe same also.
* In all **LR parser**, **Shift entries** are **same**. They will not **chance**.
* In all **LR parser**, **Reduce entries** may **differ**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f881ce4-2e69-41c6-b619-39f9168fd29d)

* The production **E -> T.** which is the **2nd production** that is **completed**. Production is **2** so we will write **r2**.
* We should write **r2** everywhere in **LR(0)** but in the case of **SLR(1)** write **r2** not everywhere but whichever production(E) is over, that production(E)'s follow find out.
* The production is over, it means that **E** is over. The next person that will come is **follow(E)**. So find **follow(E)**.
* follow(E) -> $, first(Epsilon) -> go furthere, not there go to parent -> follow(E) -> calling itself only no use -> $.
* As **E** is the start symbol so **E** has **$**.
* follow(E) -> $.
* So **1** on **$**, write **r2** instead of writing **r2** everywhere in **LR(0)**.
* Now, the **conflict** is removed.
* So the given grammer is **SLR(1)** grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92f1f048-2818-4cb1-89d3-61a01507e984)

* **Reduce entries** will change and mostly they will **decrease**.
* The given grammer is **SLR(1)** which means that it is **LALR(1) and CLR(1)** as well.
* For the given grammer we create **SLR(1) and LR(0)** both, no. of **inadequate state(IS)**, what is the difference?

> LR(0) has **1 inadequate state(IS)** state and SLR(1) has **zero(0) inadequate state(IS)**. So **1 - 0 -> 1** **inadequate state(IS)** we have.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc3c06ce-d868-4cc8-a842-0d779967856a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f12ba01b-ab66-4a12-90c4-74f78c14d845)

* We checked **only one state** because in **LR(0)** only one state **failed** and the remaining states **passed** in **LR(0)**.
* [**IMPORTANT**]
* First try **LR(0)** and whoever failed on them try **SLR(1)**. Don't directly do **SLR(1)** it is wastage of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c278ef1-e493-4d5c-82f1-720fcb7b8d2e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b12a833-1662-4ad5-ab8f-449378791465)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96c21a1b-21fe-4a3f-81fc-06dc76e16d56)

* SLR(1) or not.
* It is not **LL(1)** grammer because of **left recursion**.
* First try **LR(0)** and wherever problem there then try **SLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c363345-5e9f-4aaa-8fc8-5a8398b87139)

* Where **1-production** is coming no need to write them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33af5040-e30c-4416-8d18-2c0cead6a84d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99fad363-7c4b-4322-8500-f17854fb4179)

* In **I3** for **id and F** as **input** we are getting only **1-production** so leave it. No need to write.
* In **I4** for **id and F** as **input** we are getting only **1-production** so leave it. No need to write.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74ce7a1d-9c38-4625-aa93-2302edde64df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65b2b2b2-dd45-4a88-a458-77b61dfee61b)

* The empty circles no need to check. The empty circles don't look like problem. Look like problem then we will **check**. Not look like problem then we will **not check**.
* The problems are:-

1) Minimum of two productions.
2) One of the two production has to be **reduced** i.e **completed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8afe4656-0092-4a85-9d9f-0299afe099b9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd79e82d-c3f9-46c3-9dd8-40b9434632f6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a1f3d36-4e66-4872-990b-9cc2e02ace8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee2a0940-41e8-463b-b1ea-9020b8874418)

* **I2 and I5** states look like problem.
* We want **shift entries of any state** and we get shift entries by going outside reading a **terminal**.
* In **I2** by reading **star(*)** we are going outside to **I4** so we will write **S4** for **2** in **star(*)** in the table.
* In **I5** by reading **star(*)** we are going outside to **I4** so we will write **S4** for **5** in **star(*)** in the table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28cdb7da-d3fd-43a6-984c-e735d8281aab)

* Now we will go to **reduced**.
* In **I2** the production is **E -> T.** which is getting reduced and it is the **2nd production**, so we will write **r2** everywhere as it is **LR(0)**.
* In **I5** the production is **E -> E+T.** which is getting reduced and it is the **1st production**, so we will write **r1** everywhere as it is **LR(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27f1692e-5df5-4871-b156-e48c6c1c930b)

* So we have **two SR** conflicts.
* One state having **one SR** conflict.
* Two state having **two SR** conflicts.
* Two inadequate states and **two SR** conflicts also.
* Sometimes in **one state**, **two SR** conflicts can happen.
* One inadequate state having **one SR** conflict.
* Two inadequate state having **two SR** conflicts.
* Between inadequate state(IS) and conflicts, **conflicts** are **more** because in **one state** there can be **more problems**.
* Atleast **one inadequate state(IS)** is there so finally it is not **LR(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/432b9d72-cc3f-4dcb-a5c4-98876a18be1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a978af2-9290-4fba-92c6-7b3cdc10fed7)

* The given grammer is not **LR(0)**.
* If they ask how many states are there?

> Everything we have to **expand**. Don't do any minimization. [**IMPORTANT**]

* We have to check **SLR(1)** for the two given states only which are **I2 and I5**.
* Write the **shift entries** from **LR(0)** as it is. They will **not change**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e45dbe8-f85f-490c-a379-ea1577e3ffbf)

* In **I2** the production **E -> T.** is reduced which is the **2nd production**, which means that **E** is over, so we will write **r2** in the table, as it is **SLR(0)** table we will do **follow(production) -> follow(E)**. 
* follow(E) -> $, first(+) -> $, +
* **E** is the start symbol so **$** also there.
* So for **I2** we will write **r2** in **2** for **+ and $** in the **SLR(0)** table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00dad336-e93c-4883-bd26-b03360bb7227)

* In **I5** the production **E -> E+T.** is the **1st production** which is reduced which means that **E** is over, so we will write **r1** in the table, as it is **SLR(0)** table we will do **follow(production) -> follow(E)**. 
* follow(E) -> $, +
* So for **I5** we will write **r1** in **5** for **+ and $** in the **SLR(0)** table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ecdc820-74ff-4eda-9ce2-e6cd5f7abbe4)

* So we have **zero(0) inadequate states(IS) and zero(0) conflicts(SR)**, which means the grammer is **SLR(1)** grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97d077f6-ab8b-4e51-bf54-38dc54746a15)

* [**IMPORTANT**]
* Question:
* Which one of the following is **True** for **SLR(1)** and **LR(0)**?

1) Both the parser DFA no. of states are same. -> True. [Doubt]
2) Both the parser Goto part of the table will differ. -> False. [The Goto part will not change that's why we haven't written the Goto part. No Change]
3) Both the parser shift entries will differ. -> False [Shift entries do not chance]
4) Both the parser error entries should be differ. -> False [Instead of 'should be', 'may be' would be there. We have done extra calculations, it may change]
5) Both the parser reduced entries may differ. -> True
6) Both the parser error entries may differ. -> True. [5th and 6th are indirectly same]
7) Both the parser blank entries may differ. -> True [Blank means error entries only] [Error means blank entries only]
8) Both the parser DFA no. of states will differ. -> False.

* In **LR(0)** everywhere we have written **reduced** so **few gaps**.
* In **SLR(1)** we have written **reduced** in **few places** so **more gaps**. Less reduced coming so more gaps.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbed531f-79b5-482e-9803-661e139996b4)

* We are creating **DFA**. There is **no minimal DFA** here.
* Following grammer is **SLR(1)** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1f07c5a-7d21-452a-ab8c-0ede12861202)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55c9aa05-b1a0-4633-9574-2af5f467e8dd)

* For **LL(1)** we are checking **S** only because it has multiple productions.
* There is **no problems** in the grammer so **LL(1)** passed.
* As **LL(1)** is the top most parser of **top down parser**, so the top most parser of **bottom up parser** will also pass because of **LL(1)** passing.
* So **CLR(1)** which is the top most parser of **bottom up parser** will also pass.
* We compared the **toppers** and they **passed**.
* In the first group **topper satisfied** which gurantees that the **topper** in the **second group** will also satisfy.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc1c2ac7-ab74-4e5f-bcc8-f72322da9d6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a98f327-8e24-4e18-8702-d04b3d56a381)

* We don't know about **LR(0), SLR(1), LALR(1)**. Anything can happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bc0384a-6051-44dc-94e6-7a50fad5eaad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ac86ab2-8ec7-4dc4-8e0c-326c5cd0e854)

* Because of **.S** we got the productions of **S**.
* Because of **.A and .B** we got the productions of **A and B**.
* If we give **Epsilon** as input in **I0** then both will come but first question is how can we give **Epsilon** as input in **DFA**. We cannot given **Epsilon** as input, otherwise it will become **Epsilon-NFA**.
* We cannot keep **Epsilon** on transition line.
* .Epsilon -> . (dot only) [ . -> dot]
* dot Epsilon means dot only.
* Without reading any symbol, it is **accepted**. Without reading any symbol, it is in final state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5061c6a2-26fe-4898-af15-d8c8600bec06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b566564-21e7-4589-a9e5-5658d04ba269)

* In **I0** we can say something is **completed** if it has **null productions(Epsilon)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fc39598-57d3-4a1d-9f69-bb8af29f38b1)

* In **I0** finally there are **5** productions.
* Out of the **5**, **2** productions are **completed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/426e3281-d4f4-45e2-8a6d-63b6f12c7e6e)

* Purpose of **example** is to handle **Epsilon** in productions.
* On **I0** three people are going outside but all of the **inputs** are **variables(A,B, S)** so no shift entries will come.
* On **I0** no shift entries there.
* **2** productions are **completed** which are **3rd and 4th productions**. So we will write **r3 and r4**.
* State is **0** as it is **I0**.
* We are going to write the reduce(r3 and r4) everywhere because it is **LR(0)**.
* Total row is **r3** and total row is **r4**.
* So we have **3-RR conflicts**.
* So it is not **LR(0)** grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5644a9ff-dd06-4d48-9860-119144b9d887)

* **I0** looks like a problem. Min of 2 productions and one of the productions is reduced. Two reduced are there.
* Now we will check for **SLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2496237f-f5be-470e-8e57-bc55f8154236)

* Further more coming.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8266611-1b7a-42c9-9998-416b4ce21951)

* Only terminals there.
* LR(0) having problem or not?

> We have to do till **I0** state only. Problem there or not there, one is enough.

* LR(0) having how many problems?

> Then we have to check all. How many problems are there then we have to check all.

* In **I0** state we have **3-problems** and the state is **I0** only. Only one **inadequate state** and 3 problems there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14544dcc-1c81-44da-bc21-19d448e30295)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c8b2228-8636-49af-a0c0-26d029f9de50)

* For **SR** we need one going outside reading terminal, which means **no shift** possible as we don't have anyone going out. So **SR** is also not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/888e9a9d-e754-4a5b-b280-0cb58964993d)

* **It looks like a problem but it is not a problem** but still we are checking once.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15b99013-fa98-4b72-9d5d-fbf8bf7929f2)

* Finally in the **LR(0)** parser we have one **inadequate state** and 3-RR conflict, problems there 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a925a5d-3406-47c2-9fa6-c5c6caa59075)

* It is not LR(0) grammer.
* One state is having problem and in that one state only we have 3-RR conflicts.
* Now we check for **SLR(1)**.
* Check **I0** state for **SLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e32834d4-bc26-460d-8fba-7a843ebe6d6d)

* Copy all of the shift entries from LR(0) to SLR(1) but we don't have any shift entries.
* The production **A -> .** which is the 3rd production which is reduced, which means **A** is **completed** so we will do **follow(A)**. We will write **r3**.
* follow(A) -> first(a), first(b) -> a,b
* So for **0** we will write **r3** on **a and b**.
* The production **B -> .** which is the 4th production which is reduced, which means **B** is **completed** so we will do **follow(B)**. We will write **r4**.
* follow(B) -> first(b), first(a) -> a,b
* So for **0** we will write **r4** on **a and b**.
* So **RR** conflict is still there.
* Now  have **1 adequate state and 2-RR conflicts** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d2a3da5-82ed-4492-a88b-c1806f951b84)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fbdfb30-9041-420c-a6e7-0e9e906fd7d4)

* SLR(1) failed.
* Given grammer is not SLR(1).
* Now check for **LALR(1)**. [To be done later]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23ba4435-d025-4bec-9f5d-81ec1103f6d2)

* **LALR(1)** we have to **verify**.
* LR(0) and SLR(1) parser belongs to **LR(0)** items.
* We need to add some more to **LR(0)** items to make them **LR(1)** items.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4a0e35a-beb1-4299-bfbf-149edee344dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89b35e82-daec-481c-a446-a0c4e5bac03a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/175da041-6e08-4a07-8d64-3816c08316f1)

* Augmented production

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db030659-8ee1-498e-874d-68442b51586a)

* Augmented LR(0) item.
* Comma(,) not there for separation purpose we have kept.
* LAS -> Look Ahead Symbol

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fd0127f-d906-4fb8-966b-35fe9e89c1f3)

* LR(1) item.
* How to find closure() and Goto() of LR(1) items?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea02c6c5-601d-4154-ab5a-c58a8016a2b5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98daed1c-4bb5-4c87-985e-bde514d4430b)

* Closure of **LR(1) item**:-

1) Copy as it is.
2) For now forget about **LAS** which is **$** and do normal story.

* Because of **.S** we have to write the productions of **S** starting with do from the grammer.
* Because of **.a** we have to write the productions of **A** starting with do from the grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a59906ee-f4c2-4a70-9987-c68e0a814e06)

* New people also require **LAS**.
* First of remaining part.
* After **S** immediately **$** is there.
* First($) -> $.
* So we will write **$**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cb0a369-40d5-49a6-a5a4-5f84b3b8aaa9)

* First(A$) ->first(A) -> first(aA), first(b) -> first(a), b -> a,b
* So we will write **a or b** which is **a|b**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fec0cd8-0292-41ed-813c-7cbfdd72761c)

* Everyone taking care of from where they came.
* Everyone taking care of **Look Head**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f722027-51b3-41df-9bdb-c7f0f3b1c302)

* SLR(1) finding **follow()** at the **end**.
* LALR(1) finding **follow()** everytime.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0ea3bba-f8be-44e0-baae-f9b1d152d73c)

* Example-1 [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56cc3da3-97a2-44da-a3a4-d3dcaea7790c)

* Example-2

1) Copy as it is.
2) Ignore LAS and do normal closure.

* After dot termianl is there so stop it.
* If something new will come then **LAS** will come to the picture.
* Nothing new came, so stop it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33fe6d20-cdc2-4ce7-987f-54ed9710d4e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/393859c3-209b-420b-bc98-1f068995c9e8)

* Example-3

1) Write as it is.
2) Ignore LAS and do normal closure.

* After dot **A** is there so write the productions of **variable(A)** starting with dot from the grammer.
* So new things came now do **LAS** for the new people.
* first(c|d) -> first(c|d) -> c|d.
* After dot no varialble so stop it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ce14b4c-123b-460c-b4b1-da27a101c948)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9eb6b6f-1dc4-4c0f-8d47-f0dfdd441c90)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76c32e2d-b2f3-4f1c-ad59-482bf43076ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fea57e33-847d-4b07-923a-53e5e9114771)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7737ef4e-5aed-4059-8671-b7ad51002884)

* Closure(LR(1) item) definition [**IMPORTANT**]
* **D** is a variable.
* **G** -> grammer.
* LAS cannot be **Epsilon**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d1d369f-dc82-4485-a676-9c587a2c577e)

* Goto(LR(1) item, input) example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b0f7895-af98-415a-94ce-374f4f3d7e12)

* In **Goto()** after dot whoever there they are the **input** for the **Goto()**.
* As after dot **A** there so **A** is the **input**.

1) Write as it is by moving dot.
2) Whatever answer we got in step(1) to that do **closure()**. Ignore **LAS** and do normal **closure()**.

* After dot we have **A** so write the productions of **A** starting with dot from the given grammer.
* Now do the **LAS** for the new people.
* first(a|b) -> a|b

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c427d08-6e74-46bb-8e8a-581c25796d28)

* Goto() Example [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f438df5a-e653-441a-96a5-71629ce023a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/710cf320-ff6e-4611-a5d8-ff9503bad2b9)

* Definition Goto() [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b91846ee-e763-451d-90d2-bd7ab9d02e17)

## parsing-x(13) [7th Oct 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2c8164c-3d34-4b1d-a896-c886a7fa153e)

* To the augmented LR(1) item do **closure()** we will get **I0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a429e3c5-0d8e-4765-babc-5ba7002671f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d291ad1-d915-4fc7-8872-5938c208c1af)

* Here, LAS are required.
* **closure(augmented LR(1) item)**:-

1) Write as it is.
2) Ignore LAS and do normal closure.

* After dot we have **S** so write the productions of **S** starting with dot from the given grammer.
* After dot we have **A** so write the productions of **A** starting with dot from the given grammer.
* After dot terminal there so stop it.
* Now add **LAS** to the new people that have come.
* For LAS of **S**, we have first(,$) -> $
* For LAS of **A**, we have first(A,$) -> first(A) -> first(aA), first(b) -> first(a), b -> a,b -> a|b.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16301281-942b-4ca0-80e7-7de10f6fc7de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71c1310f-491d-46ca-bdab-7325ca5da5c4)

* Everywhere **LAS** are coming. How we will use them, afterwards we will see. While filling table we will use them. As of now no use. They will come everytime.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed91d25d-6399-4889-81ee-eb4a77b347e4)

* In the **LR(1)** item we will know that the production is completed after dot there is a **comma(,)**. Comma(,) indicates afterwards **LAS** will come not productions. [**IMPORTANT**]
* Dot followed by comma(,) means production is over. Nothing will come so leave it.
* Comma(,) is for separation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47250efc-69b2-4927-8ca5-30519b31c0f0)

* Write as it is by moving dot to the right, as it is **Goto()** that's why we are going to apply **closure()** to whatever we got.

1) Write as it is
2) Ignore **LAS** and do normal **closure()**.

* After dot we have **A** so write the productions of **A** starting with dot from the given grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee74abe8-3de3-4925-9e59-1680e01ff3f4)

* We are going outside for **4-times** so we have applied **Goto()** four times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7295209f-d4eb-4c91-9b20-f13b9adc07dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6082a475-7db3-47b3-97de-77dc3dc8da70)

* **I0** is over.
* In **I1** after dot comma(,) there which means production over. Leave it.
* In **I2** we have **A, a, b** which are coming after dot.
* For the input of **A**, the production is **S -> AA., $** which is after dot comma(,) there which means production over. Leave it. It is **I5**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/684ef216-0127-4b84-ba4e-8b5d19fd018e)

* **LAS** are different.
* If we combine them then **more conflicts** maybe will come.
* In case of **LR(0)** those two states we **same** and we combined them. Two rows content we kept in one row, so more conflict.
* **LAS** different means the two states are different.
* After dot **A** is there so we wrote the productions of **A** starting with dot from the given grammer.
* States are increasing means rows are increasing.
* Only **a** over then **I3** state will remember.
* If **Aa** over then **I6** will remember.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f822fbb2-1263-4ca2-955c-7aff4e1b99d1)

* Two states are there which contain exactly same productions, every thing same except the **LAS** then they are two different states in **CLR(1)**.
* If **LAS** are not there then both are **same**.
* In case of **CLR(1)** if two people different only by **LAS** then we can give **different number**.
* So states are **more** which means **cost** is also **more**.
* **CLR(1)** advantage is more power because of more states and the disadvantage is more cost.
* **LAS** are **important**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef6adfb8-baa2-4ffb-8e8c-1d0e1677885c)

* **I4** is over as after dot comma there.
* **I5** is over as after dot comma there.
* **I4** is over as after dot comma there.
* In **I6** we have given **A** as input and we got **A -> aA.,$** which is **I9**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d5776f0-d288-48e2-ba93-da7da981c402)

* For **a** input in **I6** we are getting **I6** only.
* For **b** input in **I6** we are getting **I7** only.
* **I6** is over as after dot comma there.
* **I7** is over as after dot comma there.
* **I8** is over as after dot comma there.
* **I9** is over as after dot comma there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6079437f-cbc3-46df-aacd-b179b48a32c2)

* In the augmented LR(1) item, we have to keep the **LAS** as **$**. Remaining everyone will come one after another.
* It is targetting path wise. Conflicts are less as states are more but cost is more.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e9a42c0-5282-4b52-9fe8-cea43870c1a0)

* We did this in **LR(0)** with **7** states but with **CLR(1) we are getting **0 to 9** which is **10 states**.
* We are constructing **DFA** and for **LR(0)** parser the no. of states is **n1**.
* We are constructing **DFA** and for **SLR(1)** parser the no. of states is **n2**.
* We are constructing **DFA** and for **CLR(1)** parser the no. of states is **n3**.
* What is the relation between in terms of **n1, n2 and n3**?

> **n1 and n2** are **same**. Only in reduced entries they differ. There is no **LAS** for them. For **CLR(1)**, **LAS** are there. So more states. Sometimes equal also. Most probably CLR(1) having more states, sometimes equal also.

* Most of the time **CRL(1)** having more states, sometimes equal also.
* n1 == n2 <= n3.
* Less than equal to -> Sometimes equal, sometimes less.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9390350-80a4-4502-990b-26b4d71915b7)

* This is **in-general**.
* If we write for a **specific problem** then we have to write either **less than or equal to**, we cannot write both.
* To the above problem **LR(0)** is **7 states**.
* To the above problem **SLR(1)** is also **7 states**.
* To the above problem **CLR(1)** is **10 states**.
* To the above **specific problem**:-
* n1 = 7
* n2 = 7
* n3 = 10
* n1 = n2 < n3
* 7 = 7 < 10

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf5dd2e3-cc0f-4a92-aa74-0571e4793bc6)

* Grammer given -> Specific to that grammer only asking.
* Grammer not given -> In general asking.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce6a5d1b-2141-4522-b94a-bfb668f5aab6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8078c6d0-4caa-4100-a074-dbedcb8e1583)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7ab8457-067b-4b48-883b-384a38124ee3)

* n1 = n2 <= n3 [In-general]
* n1 = n2 = n3 OR n1 = n2 < n3 [Specific problem asking, grammer is given]
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf620211-2617-475f-851e-60f132cfca3b)

* We are doing **CLR(1)** table.
* **Minimized CLR(1)** another name is **LALR(1)**.
* **Goto** part actually not required. It will not create any trouble.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/183b3f88-439c-4100-98f9-06e68859fdac)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c69327a4-6c86-45ef-97b3-509a4046c5af)

* Goto part done.
* In any state we are going outside by reading a **terminal** then we are getting **shift entries**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f53a846e-99ca-4e94-aedf-2f83b7edfe40)

* Action part done.
* Shift entries done.
* In all **LR** parsers there is **no difference** in **shift entries** there is only difference in **reduce entries**.
* In **I4** the production **A -> b** is completed which is **3rd production** which means **A** is completed so we have to do **follow(A)**.
* follow(A) -> follow(Epsilon) -> go further, further not there, go to parent -> [This is SLR(1)].
* In **I4** the production **A -> b** is completed which is **3rd production** so we should write **r3** in the **LAS** only. **LAS** of **I4** is **a|b** so we will write **r3** on **4th row** for **a and b** in the table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e41acb0-3b35-4a96-819b-0599e5a8b0f0)

* In **I5** the production **S -> AA** is completed which is **1st production** so we should write **r1** on **5th row** for **$** in the table.
* In **I7** the production **A -> b** is completed which is **3rd production** so we should write **r3** on **7th row** for **$** in the table.
* In **I8** the production **A -> aA** is completed which is **2nd production** so we should write **r2** on **8th row** for **a and b** in the table.
* In **I9** the production **A -> aA** is completed which is **2nd production** so we should write **r2** on **8th row** for **$** in the table.
* This is **CLR(1)** table.
* There is no conflicts.
* So the above grammer is **CLR(1)** grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22c4da42-879b-4686-a07a-5482c734e7cb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c0864c1-e471-47aa-a479-392f5aa20555)

* [**IMPORTANT**]
* CLR(1) and LALR(1) **both** will take care only in that path.
* Minimized CLR(1) is LALR(1).
* **SLR(1)** will take care **overall**.
* LR(0) does not take care of anything.
* CLR(1) and LALR(1) **both** will take care about every specific path.
* CLR(1) and LALR(1) both will take care about every path.
* Given grammer is CLR(1) because in CLR(1) parsing table, no conflict.
* CLR(1) is more powerful comparing with all other parsers because it will take care in every path.
* The only problem with CLR(1) is if two states differ only by **LAS** then they are considered to be **2-different** states so cost will be **more**. Power is more so cost is also more.
* To decrease the cost of CLR(1) we are applying minimization algo on CLR(1).
* **Minimized CLR(1)** is also known as **LALR(1)**.
* In **LALR(1)** if two state differ only by **LAS**, consider it as single state. Cost will **decrease**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c359054-8e1e-4755-9487-46576291e81c)

* CLR(1).
* I3 and I6 are **same**.
* I4 and I7 are **same**.
* I8 and I9 are **same**.
* These **6** people are 6 different states in **CLR(1)**.
* These **6** people are 3 different states in **LALR(1)**.
* This is the only minimization we will done.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/081491ce-e3c3-4075-9aa5-b06df5e1be36)

* I3 and I6 productions are **same**. **LAS** only differ.
* As productions are **same** that's why we are talking.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bca368f-74d4-441a-a6c3-d6cd2df15cf7)

* Rename **I3** state to **I36** and in **LAS** with the **a and b** also add **$**. Now **LAS** is **a, b, $**.
* Now remove **I6** state.
* Differ by **LAS** only. Let's make both the states in **one place**.
* In both of the combined paths we are either getting **a or b or $** in **LAS**. We did minimization.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a950c987-902e-4dc3-ad21-48ddd12338d7)

* Rename **I4** state to **I47** and in **LAS** with the **a and b** also add **$**. Now **LAS** is **a, b, $**. Now remove **I7** state.
* Rename **I8** state to **I89** and in **LAS** with the **a and b** also add **$**. Now **LAS** is **a, b, $**. Now remove **I9** state.
* Previously no. of states was from **0 to 9** which is **10 states**. Out of the **10 states** after **minimization**, **3** of the states are **removed**. Now we have **10 - 3 -> 7** states.
* LR(0) is also **7** states.
* SLR(1) is also **7** states.
* LALR(1) is also **7** states.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c60e9e98-4383-4227-b6e0-e142ab36a1f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03d5095f-5f9b-4f44-9e3f-3f11b4c0e3c7)

* After minimizing it is like **LR(0)**. No care there in **LR(0)** but in **LALR(1)** there is **care**. Every path we have taken care of.
* We now have to make it **DFA**.
* In **I2** for **b** earlier it was going to **I7**, now it is going to **I47** as **I7** and **I47** are **same** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faa969c2-2637-4143-a1a4-ad9b367c2ca4)

* **3 and 6** we have to merge.
* **4 and 7** we have to merge.
* **8 and 9** we have to merge.
* **Two conflicts** are only possible, **SR and RR** conflicts. Don't create new conflicts.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa386b8b-18f7-4be6-8459-f3acf55dbc1b)

* **SS** conflict is not there. It is not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/196567d2-853e-4092-b5da-3b6f627baff8)

* In the **3rd row** of the table for **a** we have **S36**, for **b** we have **S47** and for **A** we have **89**.
* Just make two as 1.
* We removed **6th row**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c928c283-042f-4580-b657-0b31532d429c)

* In the **4th row** of the table for **a** we have **r3**, for **b** we have **r3**.
* We removed **7th row**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a9e90e0-6658-43b0-90fc-afffd4bba0a1)

* r3 -> Reduce 3rd production.
* r3 or r1 then it is **RR conflict**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f4afb5b-a7d9-4aca-93c8-a31f1cf157a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fdb4291-7792-4449-941e-08b5cdaa4af0)

* In the **8th row** of the table for **a** we have **r2**, for **b** we have **r2** and for **$** we have **r2**.
* We removed **9th row**.
* New rows -> 0, 1, 2, 36, 47, 5, 89.
* In place of **S3** write **S36** as state **I3** not there.
* In place of **S4** write **S47** as state **I4** not there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b5f1dbb-0231-4b0e-ad17-2e68ce10fca5)

* 0th row -> S36, S47, 1, 2
* 1st row -> acc
* 2nd row -> S36, S47, 5
* 3rd row(36) -> S36, S47, 89
* 4th row(47) -> r3,r3,r3
* 5th row -> r1
* 6th row(89) -> r2,r2,r2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4bb714aa-dec5-4468-be70-6e8c15eac6a1)

* When merging is going on then one row contains **r2,r2 and r2** and another row contains **r1,r1 and r1**. If we **merge** them then we will get **RR** conflict.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de4af2e2-02b3-45ae-89d9-9cc48de1a149)

* **SR** conflict will never come after **combining/merging**.
* After **minimization** there is **no conflict**.
* It is **minimized CLR(1)** and another name is **LALR(1)**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c1c3d7b-7a9e-462b-b45e-203101621d78)

* Two states we are making as one, it is **LALR(1)**.
* Every paths individual then it is **CLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89fb3759-4451-4a25-a7c3-f98bae6435bf)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ccc45ca-0dbb-49b0-afbc-181f3a54014b)

* Conclusion [**IMPORTANT**]
* n1 = n2 = n4 <= n3. [In-general]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a777d07b-4913-46c7-91b0-47e75f5e42ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db1e70d7-c24a-484f-a4a3-4c515ff34098)

* Specific problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1845edd2-f285-4525-8a42-c300bf433943)

* [**IMPORTANT**]
* Check the following grammer is **LALR(1)** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53173e65-3d15-4cdb-8335-5f871d349e27)

* Example.

* Steps for **LALR(1)**:-

1) CLR(1) or not verify first. CLR(1) **True** means without combining no conflicts there. CLR(1) then may be LALR(1).
2) Now combine conflicts may come or may not come.

* After combining also no conflicts then it is **LALR(1)** also.
* Check the following grammer is **LALR(1)** or not -> First check **CLR(1)** and the given grammer is not **CLR(1)** then there is **no chance** of **LALR(1)**.
* Without combining itself conflict is there and with combining conflicts will increase.
* After combining problems may come. 
* Check the following grammer is **LALR(1)** or not -> First check **CLR(1)** and **CLR(1)** failed then there is **no chance** of **LALR(1)**.
* Before combining itself **problem/conflicts** there and after combining more **problem/conflicts** there.
* If it is **CLR(1)** then there is **hope/chance** there that the grammer will be **LALR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ead1015e-3979-4f25-84fd-920e6e967494)

* Check the following grammer is **LALR(1)** or not

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e633a0f-f891-4a19-bb58-afe14743e227)

* The grammer is **CLR(1)** because it is **LL(1)**. [**IMPORTANT**]
* Top down parser top most parser is **LL(1)**. [**IMPORTANT**]
* Bottom up parser top most parser is **CLR(1)**. [**IMPORTANT**]
* Bottom up is more powerful.
* As **LL(1)** passed so **CLR(1)** also **passed**.
* We got that **CLR(1)** has **passed** ok but for **LALR(1)** we need the **diagram of CLR(1)** for doing the combinations.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adfa78bc-949b-44c3-867f-2bd3197c6d40)

* We will write the augmented LR(1) item
* S' -> .S , $
* Find closure(' -> .S , $)

1) Write as it is
2) Ignore LAS and normally do closure.

* As **.S** there we have to write the productions of **S** starting with dot from the given grammer. 
* As **.A** there we have to write the productions of **A** starting with dot from the given grammer. 
* As **.B** there we have to write the productions of **B** starting with dot from the given grammer. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/610dd50c-020d-4536-89ea-4dd77e48532c)

* **LAS** of **S** is **first(,$) -> $**.
* **LAS** of **A** is **first(aAb,$) -> a**.
* **LAS** of **B** is **first(bBa,$) -> b**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edcfbb77-f603-40ef-8e6d-9bbf598275b6)

* 1-mark question.
* The above grammer is given and it will simply say augmented LR(1) item closure() contains how many productions?
* The above grammer is given and it will simply given the total Io state and leave the LAS and tell to fill them?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10aa9423-c976-4aa2-b2a6-31d24c8a60cd)

* If we are getting **only one production** then no need to write it as we will get either shift or reduction only. No conflicts will be there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39698d88-87d0-4529-b61a-11c06b7dc6a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8e80544-4d05-4943-94ce-128ec560e844)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a1bd6a0-8c83-49b7-96a7-61d5700b0dfa)

* For **a** input in **I1** we got **S -> Aa.Ab,$**, as **A** there after dot we need to write the productions of **A** starting with dot from the given grammer.
* **LAS** of **A** is first(b,$) -> b.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eedadbaa-eee9-4423-9f5b-b3ead66e3b34)

* For **b** input in **I2** we got **S -> Bb.Ba,$**, as **B** there after dot we need to write the productions of **B** starting with dot from the given grammer.
* **LAS** of **B** is first(a,$) -> a.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/525b7a39-310a-45d3-806e-eeac6bcbc878)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15b42fc1-48cd-4004-89b2-d4adba491a8b)

* In **I0** we have min. of 2 productions and one of them is reduced. So problem maybe there. Need to check.
* In **I3** we have min. of 2 productions and one of them is reduced. So problem maybe there. Need to check.
* In **I4** we have min. of 2 productions and one of them is reduced. So problem maybe there. Need to check.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47b087bd-b3f6-41b8-a358-6375a8a7d939)

* Only for the **three states(I0, I3, I4)** which **look like a problem**, we will create the **CLR(1)** table.
* We will get **shift entries** by reading terminal in any state we should go outside.
* In **I0** no shift entries.
* In **I3** no shift entries.
* In **I5** no shift entries.
* No shift entries means there is no chance of **SR** conflict. **RR** maybe possible.
* In **I0** we have two reduced **A -> Epsilon** and **B -> Epsilon** which are **r3 and r4**, which means that **A and B** are completed. So we will write **r3** on **0th row** for **a** and **r4** on **0th row** for **b**, where **a and b** are **LAS** of **A and B** respectively.

> While writing reduced in the case of **LR(0)**, we will write **r3 and r4** everywhere and we will get **RR** conflict. So **LR(0)** not possible. For **SLR(0)**, we will write **r3 and r4** for the **follow(A) and follow(B)**. Follow(A), Follow(B) -> a,b. So we will write **r3 and r4** for **a and b** in **0th row** which will give **RR** conflict.  So **SLR(0)** not possible. Don't check **LALR(1)** because we have to do minimization first, so do **CLR(1)** then do **LALR(1)**. In case of **CLR(1)**, we look at **LAS** to see where to write **r3 and r4**. So we will write **r3** on **0th row** for **a** and **r4** on **0th row** for **b**, where **a and b** are **LAS** of **A and B** respectively. As of now it is **CLR(1)**, we need to check **I3 and I4** states.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcd24e3a-6624-4081-97c8-ce90d53b4997)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6996fbef-ec82-4bc6-87e5-12a744885eae)

* For 0th row or 0th state(I0).
* LR(0) -> 3 conflicts -> 3-RR
* SLR(0) -> 2 conflicts -> 2-RR

* For the further rows(I3 and I4) it is very easy as **no shift entries** are there, so no chance of **SR conflict**. [**IMPORTANT**]
* If we go to **I3** state we have 2-productions and one of them is completed. For **RR** conflict we need **2 completed** productions which is not possible. So **RR** conflict is also not possible in **I3**. [**IMPORTANT**]
*If we go to **I4** state we have 2-productions and one of them is completed. For **RR** conflict we need **2 completed** productions which is not possible. So **RR** conflict is also not possible in **I5**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e281c524-19e6-474c-98cf-76ca2a016f7a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80b274ea-9347-47a4-a62e-a0fbb3ce351e)

* For 3rd and 4th row we have no **SR or RR** conflicts. In **0th state** also no conflicts there.
* It means that it is **CLR(1)**.
* So the given grammer is **CLR(1)**.
* Without doing the above work we can say that the given grammer is **CLR(1)** grammer as it is **LL(1)** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d60ffd9-6cfd-46af-a920-1997165d90d6)

* In the above diagram check if any states have same productions but differ only by **LAS**.
* **No** there is no state like that. No need to minimize as well, it is already **minimized**.
* It means that the diagram is already **minimized** which means that **LALR(1)** is also satisfied.

* In the above **CLR(1)** not **no states** differ by **LAS** so already it is **minimized CLR(1)**.
* So the given grammer is **LALR(1)** also.  [**IMPORTANT**]

* **Question**:-
> If in the exam a grammer is given and asking all parsers then do **CLR(1)** first and while writing reduced entries verify all of the **parsers** as we did **like above**. Writing reduce take care. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c64ed86e-96bc-4c5f-86b3-871ce5571194)

* [**IMPORTANT**]
* Check grammer is LALR(1) or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86409f13-6959-4e1a-a053-eda9b36808b4)

* Example.
* Question:-
* What is the no. of states in the given grammer? 

> The state which contains one production we have to write that as well. We have to write everything/everyone. Don't do minimization. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9a809c7-77dd-45f0-97bb-63d1e728a6ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a98f1af7-e5a1-45bf-b192-b7bce39b7b66)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b9580fe-dda7-4b39-a332-02148706af29)

* The dilemma is that is it(LALR(1)) **less than** or **equal to**, which one is it.
* **CLR** is **more** or **equal** that is the dilemma.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2811f606-904b-4d99-997d-272b6fa25f8e)

* This is the confirmation which is needed.
* Two states are **same** but differ by **LAS** only, so stop the diagram.
* Until we got the **confirmation** continue with the diagram.
* The two states are **two** in **CLR(1)** but they are **one** in **LALR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26fc7ff7-863b-49f5-b9ab-6558f9833f5d)

* We got confimation in the above grammer that **CLR(1)** is **more** so stop it.
* When we got the confirmation so stop it.
* Question:-
* The question is either LALR(1) is less than or equal to?

> LALR(1) is less than **CLR(1)**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/261a38b2-3ede-40bb-a32e-03781f38595f)

* Question:-
* The question is between CLR(1) and LALR(1), how many states differ?

> We have to write the whole diagram and then check the difference.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c8ad82a4-533e-4d23-bf89-5b7195efada7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afbbe05d-5882-4082-98e2-168b309f2203)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/305223cf-2e8f-4891-954b-136ecc23c5b9)

* Difference is there in the **LAS** between **I1 and I2** states that matters.
* Little bit different or completely different write in different states in **CLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ced927c2-ee6c-433b-9a5f-41297aea821c)

* We have verify three states(I0, I1 and I2).
* We are verify if the grammer is **CLR(1)** or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc2148de-1b1f-4006-8e90-4301ebf902bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3701cde-d53a-41ed-9630-f45509340ad7)

* In all of the three states we have min. of 2 productions but none of the states have one production which is **reduced**.
* No states looks like it is having any problem in **CLR(1)**. No one looks like a problem then we could have drawn the table.
* So it is **CLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12f97248-fa12-4b01-bdf7-dc606c42268a)

* Can we do **minimization**?
* For **LALR(1)** we have to see if we can combine states or not.
* **I1 and I2** have same productions but they differ in **LAR**. We will try to combine them.
* Combining **I1 and I2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef635d5d-e8fa-4894-affc-d6cea9cf92a2)

* The new state is **I12**.
* We have moved the **LAS** from **I2** to **I1** and removed **I2**.
* Now checking if **I0 and I12** have any problem.
* They don't have any problem.
* No state looks like a problem.
* After minimization also there is **no problem**.
* So it is **LALR(1)** also.
* No state looks like a problem. So it is **LR(0)** also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9940f16d-627c-44eb-a998-956ddf7e92ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8cbb40e-e1c0-4120-88ce-6992c4e16403)

* If states related question comes then we will not neglect any states with one production. We will write all of the states even if they have only one production.
* State means don't keep any gapes otherwise it will create problem.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5ce0d99-a16b-4153-95a1-33005b98a126)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a85a80e-6a28-49cf-92d8-b0465df99515)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/031a7213-acd0-4781-89ef-8a70cf7f49c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35c8c208-9df5-4ac3-9719-3ca967e20337)

* In all of them the **productions** are **same**.
* Productions are **same** everywhere then why we are combining?

> Productions are same then everything is **same**. **NO**. In **CLR(1)**, **LAS** also matters. That's the reason **I5 and I6** are separate in **CLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d1731b2-e348-4e21-84c0-c503cdced68a)

* Production 1 and 2 are **completed** they are already **reduced**.
* State no for **I5** is **5**, we will write **r1** for 1st production(A -> c.) where in the case of **CLR(1)**?

> We will **r1** in the **5th row** of the table for **a, b, c** which are the **TAS** for 1st production.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b220fe1-4112-46d8-a018-8762ed872efd)

* State no for **I5** is **5**, we will write **r2** for 2nd production(B -> d.) where in the case of **CLR(1)**?

> We will **r2** in the **5th row** of the table for **d, e, f, g, ......, z** which are the **TAS** for 2nd production.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2742548b-c286-4aa6-ae1b-039d658e5abd)

* There is no chance of **SR** because both of the productions are **completed**, so no chance of **shift(S)**, so **SR** not possible.
* We only have chance of **RR** conflict in **I5**.
* Any **RR** conflict for **I5** in CLR(1)?

> No **RR** conflict.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1736374-f262-4911-bafd-64738436dbae)

* State no for **I6** is **6**, we will write **r1** for 1st production(A -> c.) where in the case of **CLR(1)**?

> We will **r1** in the **6th row** of the table for **d, e, f, g, ......, z** which are the **TAS** for 1st production.

* State no for **I6** is **6**, we will write **r2** for 2nd production(B -> d.) where in the case of **CLR(1)**?

> We will **r2** in the **6th row** of the table for **a, b, c** which are the **TAS** for 2nd production.

* Any **RR** conflict for **I6** in CLR(1)?

> No **RR** conflict.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82a765c1-e7d9-4045-8e30-ce94565e8d99)

* No **RR** conflict in both I5 and I6.
* Productions are same and they(I5 and I6) differ by **LAS** only.
* For **LALR(1)** we should combine. We combined them.
* What is the **LAS** in **I56**?

> We are doing **union** of both the I5 and I6 states **LAS**.

* For both the productions we will have **LAS** as **a,b,c, .... ,z**.
* We are doing table to see if we have any conflicts or not.
* State no for **I56** is **56**, we will write **r1** for 1st production(A -> c.) where in the case of **LALR(1)**?

> We will **r1** in the **56th row** of the table for **a, b, c, d, e, f, g, ......, z** which are the **TAS** for 1st production.

* State no for **I56** is **56**, we will write **r2** for 2nd production(B -> d.) where in the case of **LALR(1)**?

> We will **r2** in the **56th row** of the table for **a, b, c, d, e, f, g, ......, z** which are the **TAS** for 2nd production.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3c4da48-d151-4ea3-90b3-2b644e6f2dc6)

* So **RR** conflict came.
* We are getting **26-RR** conflicts in **I56**.
* Before combining **no conflict** there but after combining **conflict** came.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a58774ad-1987-4866-9851-81e68d3e2f6d)

* This is the **example** for, there are some **CLR(1)** parser before combining no problem/conflicts, after combining problem/conflicts will come.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc5dcc19-94f3-4b61-9bf1-8e2180636d17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba4c0e50-e68e-4914-bbd8-5d3e30a90e85)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f849dedd-e585-4a06-90a7-6b911de99855)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb085a94-d61c-462f-a24d-d4c0a69f9873)

* Even though CLR(1) parser don't have **RR** conflict, **LALR(1)** parser may contain **RR** conflict. Example above. [**NOTE-1**] [Standard Parser Statement] [**IMPORTANT**]
* If CLR(1) dont have **SR** conflict then **LALR(1)** also don't **SR** conflict. [**NOTE-2**] [Standard Parser Statement] [**IMPORTANT**]
* In the **CLR(1)** states they dont have **SR** conflict and we have to prove that after combination for **LALR(1)** we will get **SR** conflict in **I56** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27a986e8-6115-4e97-ab8f-18515ed7d16a)

* We talking about **SR** conflict which means one production is completed and one production is not completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30d449f8-8db3-494a-907c-f0966a4d2246)

* Production **A** is not completed and production **B** is completed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab2005b7-18e3-446e-af77-bb6afb6c564f)

* We combined because the productions are **same** and they differ by **LAS** only.
* Before combining no conflict but after combining conflict is required, that's what we have to **prove**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/caed55b9-7ffd-4138-a159-82e900726aae)

* We have the liberty of selecting the **LAS** here.
* Production 2 is completed so the **reduced entry** is in **Production 2** only. So we will write **r2** as it is **Production 2** on **d,e,f**.
* **LAS** are for **reduced** only. They are not for **shift** [**IMPORTANT**]
* Production 1 is  not completed so we will get **shift entry** in **Production 1** only. So we will write **S1** as it is **Production 1** as after dot **d** there which is the input of. So we will get **shift entry** at **d**.
* **Shift** means don't look at **LAS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d10f08d-75fc-4116-a97b-0bd38c40d670)

* At **d** we have **shift** as well as **reduce** so **SR** conflict is coming.
* So we cannot write **d** in **LAS** of **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acd20468-14de-405d-b492-4acf20e24d36)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6373538-a5f2-464a-b12c-e04027258c1e)

* Shift at 1st production is at **d**.
* Reduce at 2nd production is at **a,b,c,e,f**.
* Other than **d** write anything.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b7418a2-f947-4cdd-a5e1-8ee8ce2126a7)

* Ignore **LAS** in 1st production as we are finding **shift** there.
* **Shift entry** and **LAS** no relation.
* Shift entry is already **d** which is **fixed** only in **I6** we cannot change it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ed832f8-ccc1-43b8-bd72-92ac2214157c)

* **LAS** in **I56** is **union** of **LAS in I5** and **LAS in I6**. 
* Shift entry is already **d** which is **fixed** only in **I56** we cannot change it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a365534d-79c9-40ec-8d3b-eb275867b978)

* If shift is at **d** then reduce cannot be at **d**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bc9dd91-bfde-4850-be8b-70631034192b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3995ad4d-5d06-42f4-baf3-8f47a3eb69da)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac892021-7f65-4233-bbc2-ae3f7134dbd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b3b1ebf-56de-4aa0-9c8a-342471f190ce)

* Finally **d** not there.
* Other than **d** everywhere is **r2**.
* Shift is at **d** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e3d4394-5593-4b79-9075-f0733db6b6e3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b73f76ec-1732-4563-9c20-b847eb38bb4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f17b60cc-4c0c-4795-8173-ea9e64111b10)

* Prove of Note-2 [**IMPORTANT**]
* Finally **SR** didnt came. No chance. SR not possible.
* Question:-
* We have one grammer and that grammer is **CLR(1)** grammer but not **LALR(1)**, what will be the reason for it?

1) RR conflict [CORRECT]
2) SR conflict
3) Either A or B
4) none

* Option **1** is **correct**, **RR** conflict.
* Question:-
* We have one grammer and that grammer is **not LALR(1)** grammer because it is having **SR** conflict, then what can we comment about **CLR(1)**?

> It is not **CLR(1)** also because of **SR** conflict there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/620d3ce8-dd2b-4f2a-ae40-26dc9f5b9d7c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a9c1986-dfb6-436c-bc20-447dcbf8e86c)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5061d5e1-ed50-4ee0-9330-9d8d4668d607)

## sdt-part-1 (14) [8th Oct 2023] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dafcdfb0-a5c6-4ce3-ae8c-c6e101f700b3)

* Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2bff5bd-f5d1-4a1a-9e9e-818b20293d15)

* [**IMPORTANT**]
* Same person coming with different **LAS** we have to take care of them as well. [**IMPORTANT**]
* Same person but coming with different **LAS** that's why we have to write them **again**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8780cd0b-b049-44a3-b15f-2a91c1d2a12e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c57ee2c9-f703-41fe-88f4-db6119acbc29)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bd2cbb2-719a-41bd-87c9-ff7a17e038c6)

* Instead of writing the productions once again but with **+** just add **+** to the LAS of already **E** production there. Like above done.
* Same **E** production one time coming with **$** and one time coming with **+** but they are both there in one state only. No need to write **twice**. Just write one time and add the **LAS**. It will become easy.
* We are writing them again because same **E** production are coming with different **LAS** that's why.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4682f74b-1561-44f9-b660-12d9f31cdfe2)

* Now add **star(*)** to the TAS.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d961d4d-44c3-41b8-b647-7c3d0e47d64f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e92dba37-0cdd-464e-abee-827ffcf84fd0)

* This is **I0**. [**IMPORTANT**]
* Mistake -> Same person(production) is coming and we ignored it. Actually same person(production) but with different **TAS** then we have to write it.
* Production **same** and **TAS** is also **same** then we can ignore it.
* Production **same** and **TAS** is **different** then we have to write it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9295d668-86e8-4614-9b42-1b8dc4a0acad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3efa1c70-70b8-456a-8e58-68204acf78d2)

* For **+** input in **I1** we got **E -> E+.T, $|+** as after dot **T** there we have to write the productions of **T**.
* T -> .T*F |.F
* As after dot **T** there we have to write the productions of **T**. Productions of **T** already there no need to write them just update **LAS** with star(*). So LAS is now **( $ | + | * )**.
* As after dot **F** there we have to write the productions of **F**.
* F -> .id

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc9fcbd9-5227-4b3a-8eca-ae8c7acd2f69)

* I3 state:-
* E -> E+.T, $|+
* T -> .T*F |.F, $ | + | *
* T -> .F, $ | + | * 
* F -> .id, $ | + | *

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd0954fc-3e61-4281-8668-835524e9016e)

* **I0 and I3** are the important states here, they are doing some thing new. Productions are **same** but with different **LAS**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd9aa290-5359-4433-80ca-b82d3c2b9c38)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b74404bf-f1df-4afe-9f53-94c7b1163fb6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41a66983-91b0-4b09-89da-ad2bb961cf51)

* [**IMPORTANT**]
* **CLR(1)** or not, check if the states are looking like having conflicts or not.
* So the **I2 and I5** states are looking like having **conflicts**. Let's check.
* Draw for the these(I2 and I5) two states.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61c9a067-bbef-4854-b2cf-958bd0c25651)

* In **I2** state we have production **E -> T** which is 2nd production is completed so we will write **r2** on the **2nd row** as it is **I2** state. The LAS are **$ and +**. We will write **r2** on the **2nd row** for **$ and +** which are **LAS**.
* We will get **shift entry** in **I2** as there is someone going outside reading **star(*)** which is a **terminal**. It is going to **I4** state so write **S4**. We will write **S4** on the **2nd row** for **star(*)**.
* Shift and reduce columns are **different** so **no conflict** there.
* It looked like a problem but it is not a problem in **CLR(1)**.

* In **I2** state we have production **E -> T** which is 2nd production is completed so we will write **r2** on the **2nd row** as it is **I2** state. **E** is completed so we will do **follow(E) -> $, first(+) -> $, +**. We will write **r2** on the **2nd row** for **$ and +** which we got from **follow(E)**.
* We will get **shift entry** in **I2** as there is someone going outside reading **star(*)** which is a **terminal**. It is going to **I4** state so write **S4**. We will write **S4** on the **2nd row** for **star(*)**.
* Shift and reduce columns are **different** so **no conflict** there.
* It looked like a problem but it is not a problem in **SLR(1)**.
* For the state **I2** it is not **LR(0)**. So the given grammer is not **LR(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a2a0edc-ff20-4613-bc94-fc76be8bf212)

* In **I5** state we have production **E -> E+T** which is 1st production is completed so we will write **r1** on the **5th row** as it is **I5** state. The LAS are **$ and +**. We will write **r1** on the **5th row** for **$ and +** which are **LAS**.
* We will get **shift entry** in **I5** as there is someone going outside reading **star(*)** which is a **terminal**. It is going to **I4** state so write **S4**. We will write **S4** on the **5th row** for **star(*)**.
* Shift and reduce columns are **different** so **no conflict** there.
* It looked like a problem but it is not a problem in **CLR(1)**.
* For the state **I5** it is not **LR(0)**. So the given grammer is not **LR(0)**. **SR** conflict is there.

* In **I5** state we have production **E -> E+T** which is 1st production is completed so we will write **r1** on the **5th row** as it is **I5** state. **E** is completed so we will do **follow(E) -> $, first(+) -> $, +**. We will write **r2** on the **5th row** for **$ and +** which we got from **follow(E)**.
* We will get **shift entry** in **I2** as there is someone going outside reading **star(*)** which is a **terminal**. It is going to **I4** state so write **S4**. We will write **S4** on the **5th row** for **star(*)**.
* Shift and reduce columns are **different** so **no conflict** there.
* It looked like a problem but it is not a problem in **SLR(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1525101-9c48-471f-8c43-5ba83ae97dec)

* [**IMPORTANT**]
* **LR(0)** failed in both the states **I0 and I5**.
* **SLR(1)** passed which means that **LALR(1) and CLR(1)** also passed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b821f55-c685-45b5-a284-0e0183c2f7f0)

* The states that are not empty, none of the states have the same production and differ only by **LAS**. So the above drawing is **minimized CLR(1)** only which is **LALR(1)**.
* So the grammer is **LALR(1)** also.
* If the same production is coming again in **LR(0)** then we can **ignore/neglect them** as there is **no LAS** in **LR(0)** but in the case of **LR(1)** item we have to write them again as the **same production** is coming with **different LAS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cd7390ad-84b6-40cd-a1a2-da25d3194ba8)

* We have **E' -> .E, $**, because of **.E** we have to write the production of **E** further and we got another **.E**.
* For the **LAS** of **E**, we got the **$** from the first **.E** as **first(,$) -> $**.
* For the second **.E**,  we have to write the production of **E** further but we already have productions of **E** written already but now the **LAS** is different as **first(+T) -> +**, which is **+**.
* Finally we will write
* E -> .E + T, $|+
* E -> .T, $|+
* The same is for **T** as well for the first **.T** we wrote the productions of **T** and the TAS was **first(, $+) -> $|+**. We get another **.T** as we have already written the productions of **T** just add the **different TAS** which is **first(*F) -> star( * )**.
* Finally we will write
* T -> .T * F, $|+|*
* T -> .F, $|+|*
* The same thing happened in **I3** state as well.
* Do the union of **LAS** as the two productions are **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0919dbff-8229-416c-90ec-6cec42d588d0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ecaa471d-361a-4c00-bd1a-34f2991db093)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ab8ec8-9eee-4af0-b9a3-9b551e0aa865)

* Example.
* Complete first 4-states.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26f65f6e-3606-4a41-a2b2-de4b217436c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f914abd3-6e6c-4de9-8618-4078d0446972)

* Because of the above two states having same production but different **LAS**, **CLR(1)** having more states. We have to out that combination where same production but different **LAS**.
* If we can find one incident also then **CLR(1)** having more states.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc5983b3-89b4-4441-9c99-1e55a15170df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e958ca26-cdac-4e4e-8735-5314a1214e9e)

* Minimum of 1-state extra.
* If the goal is if the given grammer is LALR(1) or not then if state has one production then leave it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2af482e-a060-4e4b-9c70-88b916903f0b)

* In **I2** for the first **.L** we wrote the productions of **L** and the LAS was **first( ),$ ) -> )**. For the second **.L**, we just updated the **LAS** by adding **first( ,S ) -> ,**. So the **LAS** is now **), comma(,)**.
* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/467cc925-307c-4ac4-a7bc-3e529bfa5826)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf1c7a04-a731-4acb-8866-7619a1ef9ec5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b259abc1-3693-4062-a0cd-6904ded4e2bd)

* first(a) -> a
* first(b) -> b
* intersection of a and b -> Phi(Q)
* So it is **LL(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14235cf7-0c45-4157-b904-7e6aadeef921)

* LL(2) -> In every string read first two symbols. Max of 2 symbols. [**IMPORTANT**]
* first(ab) intersection first(ac)  -> Phi(Q)
* first(ac) intersection first(ad)  -> Phi(Q)
* first(ab) intersection first(ad)  -> Phi(Q)
* So it is **LL(2)**.
* More symbols if we read at a time then **more power**.
* LL(3) -> In every string read first three symbols. Max of 3 symbols. [**IMPORTANT**]
* LL(1) is the subset of LL(2) is the subset of LL(3) ... is the subset of LL(K).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b73c4abc-8f36-4508-95ee-f0426aef0c4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca2f668a-0aea-4a4a-81bf-9b4dc84f1b2b)

* LL(0) not there. We have to read symbol. Without reading symbol how can we say.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f6e854f-a8fc-4f44-b568-9d594cfefd9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa04feac-bcf7-418f-837a-c0fd06bf67b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90331957-a630-4b31-b3b2-6119f78d9b90)

* LR(1) subset of LR(2) subset of LR(3) ... subset of LR(K).
* LR(1) -> CLR(1).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a4f609f-6ecb-4b5b-8027-f673dd5cb880)

* We have a grammer which is not LL(1) what about LR?

> Maybe, may not.

* We have a grammer which is LL(1) what about LR(0)?

> Maybe, may not.

* LL(1) fail but LR(0) pass.
* LL(1) pass means what we say about LR(0)?

> No relation.

* LL(1) fail means what we say about LR(0)?

> No relation.

* Only relation between **LL(1)** and **CLR(1)**.

* We have a grammer that is **LL(1)** what about LR(0)?

> Maybe, may not.

* Every LL(1) is CLR(1) which is nothing but LR(1).
* Every LL(1) is subset of LR(1).
* Every LL(2) is subset of LR(2).
* ...........
* Every LL(k) is subset of LR(k).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86098f85-6d7a-4334-9414-70a5eb45bb22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fff1751-3c61-4f80-ae61-9ed67a0fffe6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08dfcabb-1f8e-4c03-bde6-a9629855d555)

* [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa3e8a9a-924e-47fa-855b-6f6235875a63)

* Example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4eb32077-2630-4458-9606-77f9f51a6311)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa9d148d-434f-4091-a672-ad70a035f611)

## Operator Precedence Parser

* Bottom up parser is of two types:-

1) LR parser -> It will be applicable to unambigious. Unambigious we will check. Ambigious no need to check also.
2) Operator Precedence Parser -> It will be applicable only for operator grammer.

* Operator Grammer -> A grammer(G) is said to be operator grammer if it don't have null production and if it don't have two adjacent(side by side) variable on the right hand side of the production.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a294369-aaec-4a4a-bfd1-8775c8cadf79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdedaaf0-6f1e-4efc-815e-5855fc7a1a85)

* It has no Null productions.
* It has no two variables side by side on the right hand side of the production.
* So it is operator grammer.
* To the grammer operator presedence parser will be applicable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f322d5f-e751-4438-887e-2f8c0231e682)

* It is an ambigious grammer.
* Operator presedence parser is the only parser that is applicable on ambigious grammer also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32c614e8-99db-49df-b1ed-54a415bd9db7)

* We have written in different levels.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c55043fd-547e-423b-b6bc-cdd87ca35911)

* Upper one is ambigious grammer and the below one is unambigious grammer but the important thing is both are operator grammer.
* Operator grammer is always ambigious, no relation.
* It will work for ambigious grammer also. It doesn't mean that it don't work for unambigious grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdc2fec9-2635-46b9-96aa-a837266c7740)

* Operator grammer is only for ambigious grammer, need not be.
* Operator grammer condition is satisfied or not, that matters.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3398175-1fbc-4dcc-a01a-30605b682cd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a2ec102-4503-4b7c-b64a-bc0958bd9c51)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46bc43dd-e32e-475e-9e5b-3e5d2d4ffdbd)

* **Operator presedence parser** will be applicable to **Operator grammer**. That maybe ambigious or it maybe unambigious, anything can happen. We don't have any relation.
* We have an ambigious grammer and we want to pass the ambigious grammer with one parser, which parser we may prefer?

> **Operator presedence parser**. As others are directly saying **NO**. Atleast it(Operator presedence parser) is saying maybe it can. Only condition is that it should be **operator grammer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7d2cbee-a6a2-4df6-a846-3ccbbb42a117)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd57094b-f84f-4e50-96e3-dad4a08fc9e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bffbc33d-a626-4aa2-b1c3-821c424b2eaa)

* Example
* Operator grammer or not?

> It is not operator grammer. Two or more variables are side by side.

* Can we convert it?
* Convert the following grammer into operator grammer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e86b9eed-d4ae-4f89-8782-2916846dbd15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20a78ce9-b0c5-4983-969e-5aa497cf0f02)

* Example
* Operator grammer or not?

> It is not operator grammer. Two or more variables are side by side.

* Can we convert it?
* Convert the following grammer into operator grammer.
* **A** having two possibilities. Write both of them. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/385c3d9d-3a8f-4f16-a760-42219f4cb31d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f262b7e-8fa3-49f8-b313-83525e9f2dec)

* Example 
* Operator grammer or not?

> It is not operator grammer. Two or more variables are side by side.

* Can we convert it?
* Convert the following grammer into operator grammer.
* After conversion same meaning should come.
* **P** means **SR and S** also.
* **SR** means **P**.
* Somewhere we have **SR**, we can replace the **SR** with **P**. **YES**.
* First we replaced **R** with **possibilities of R**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab082fe8-b434-4e6b-bdee-d54cdee56d8a)

* **P** is superset and **SR** is subset.
* **SR** means **P** and **S** also **P**.
* **P** having two meaning.
* **P** having two choices(SR and S).
* We are able to do **SR -> P** because the side effect of **P -> S** is taken care of.
* Normally we don't do like this.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba01e6fa-9b93-48c8-9fba-c9b370a63e21)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1ec53f8-c677-4d0d-9e68-622f5ff8f2f9)

* If in the original grammer **SbS** is not there then we have kept **SR -> P** and **P** having two choices(SR and S). So we will get **SbSR and SbS**. **SbS** is not there so some serious issues will come.
* Substitution is normally done from **left to right**. Normally we don't do **right to left**.
* We cannot write subset by superset.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11b0425b-9be3-4bcf-99e8-1f1b4a47d6a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5fb2d45-d205-4b03-b061-413f301c7c1f)

* Normal way to solve the above problem is via substitution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4aee4e01-2583-4c6f-a7a7-fb1981032b84)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/636ffe56-4d21-4858-8eea-6926b47296b6)

* We did direct substitution and we got answer directly. No need to replace subset by superset.
* Whenever after substitution also still problem is coming then replace subset by superset.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9882a91-3bcc-4102-8387-3f93fc2593e4)

* Convert the following grammer into operator grammer?

> Verify the options. Check who are operator grammers first.

* If we replace left by right then it is **normal substitution**.
* If we replace right by let then it is **back substitution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adfd462c-5a73-4c65-b108-7f0beafe8b45)

* As of now **P** is generating only one(a) then we cannot replace **a** by **S** as **S** is generating so many.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c92e923-557b-4d82-a8b8-13310738eaa9)

* Now we can replace **a** by **S** because any how rest are coming in **B**.
* If already there then no problem.
* If already not there then we cannot use the above method(subset by superset).
* We are replacing **subset by superset**.
* Operator presedence Parser -> Operator grammer -> Two conditions there.
* Given grammer and say it is operator grammer or not. [Question]
* Given grammer and convert it is operator grammer?  [Question]

> Substitute. Lucky then direct substitution is possible. Unlucky then back substitution we can do.

## sdt-part-2 (15) [9th Oct 2023]

## Syntax Directed Translation(SDT)

* It is like parser, syntax is also there.
* Compiler -> Grammer -> Set of rules.
* On the program we have done compilation means we have applied the grammer production on the program.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a6e4790-f12e-4680-8464-39e5f80bf272)

* All the errors whatever came after compilation, all came because of the yellow color lines, {pf("hi")} only.
* After compilation is over whatever things we see on the screen all came because of the yellow color lines, {pf("hi")} only.
* For every production within the brackets we write some story.
* Those are called as **symantic actions**.
* Grammer plus(+) symantic actions is known as **SDT**. [Difinition]
* Which phase of the compiler is **SDT**? [**IMPORTANT**]

> It is the **new phase of the compiler** who is helping to every other phase of the compiler. [**IMPORTANT**]

* It will give direction what should be done exactly at that point of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f95a440-ac45-4d17-a465-3b246b5f5fec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1a9ec56-04fe-4742-8420-feac6a3357f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd333305-7efe-496c-a011-c77df1413fe5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dab97ce1-364d-4a61-a1dc-020367237851)

* We compiled the program and we are able to see so many **errors** in the screen they are called as **Semantic Actions**.
* Every production having **Semantic Actions**.
* Using **SDT** we can do **type checking** also.
* Using **SDT** we can do **syntax checking** also.
* Some portion of the grammer is for the **tokens**, some portion is for **syntax**, some portion is for **semantic**. Grammer will be divided into parts. Every part will be useful for some work.
* For lexical purpose some grammer there, syntax purpose some grammer there, beside that grammer write the **semantic actions** also.
* **Semantic actions** is helpful to every phase of the compiler.
* Every production having some **semantic actions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0db0ba8-01c3-4d1e-ad1d-392fd2a4c218)

* Every variable having some characteristics which are known as the attributes of that particular variable.




















## Misplaced Images

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13c32075-f1fd-4277-9417-1f78dea3cf1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5eff1507-a093-4b38-9b62-114aa658b9ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6bf9c49-01a8-4407-bf0f-92c01cd177a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb1a6fb8-6936-4717-9fe7-2777648a8645)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cd32bd2-987a-4a12-879c-8491e39b0439)
