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







































