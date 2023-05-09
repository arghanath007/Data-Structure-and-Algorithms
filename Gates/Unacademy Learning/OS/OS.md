# OS

* Course Link -> https://unacademy.com/course/comprehensive-course-on-operating-system-for-gate-2425/A9IBFZWP

# Syllabus

![image](https://user-images.githubusercontent.com/54589605/236868120-bf5277d2-780d-4475-817e-22f568012381.png)
![image](https://user-images.githubusercontent.com/54589605/236868374-486883d7-fc31-4289-b294-906784259ad8.png)

## Introduction (1) [8th May 2023]

> OS is another intermediate software which is **installed** on top of the hardware and with the help of the **OS** we can run various **processes** or **programs** and with the help of **OS** only, the whole computer system runs.

> We can do anything we want with the OS.

![image](https://user-images.githubusercontent.com/54589605/236866639-d7d80b0e-e835-4952-8768-631f79be3a3c.png)
![image](https://user-images.githubusercontent.com/54589605/236867460-89c66d79-b7c9-446a-b40a-48995993b0df.png)

### Services of OS

* What is the most important part of OS, without which OS cannot run/function?

> Program Execution.

![image](https://user-images.githubusercontent.com/54589605/236869209-3cc35000-113b-4b70-b42d-13da672f7a4f.png)

* Secondary memory also falls under **I/O** devices. 
* Cache memory is part of CPU. It is over CPU, to **reduce/lower** RAM access.

![image](https://user-images.githubusercontent.com/54589605/236869939-3ccbe220-12a3-4cd9-baa5-1fa92929ba7b.png)

* File-System Manipulation -> The files/folders present in the HDD and the various operations(copy, paste, delete, update etc) which can be **performed** on them is done by the help of the OS.

![image](https://user-images.githubusercontent.com/54589605/236871000-ceb8768e-0e2d-4e6c-a104-e2ac4efa0b7a.png)
![image](https://user-images.githubusercontent.com/54589605/236872197-3ba48fd2-acbd-44e3-8401-eedb7e6a3c65.png)

## Goals of OS

![image](https://user-images.githubusercontent.com/54589605/236873203-189293f1-4495-478f-a06f-f4abb2a0977f.png)

* Reliability -> Trust.
* Portability -> Hardware independent.
* Robustness -> Solve unexpected situations. Tolerant.

## Types of OS

* They are related to the **facility** of OS or they are related to **what type of computer system** we use the OS.

![image](https://user-images.githubusercontent.com/54589605/236875908-ade524a3-1df4-487d-ac16-03a3202e5faf.png)

## Uni-programming OS

* Uni-programming OS allows only **one(1)** program to be in RAM at a time.

![image](https://user-images.githubusercontent.com/54589605/236877892-88aec00c-2f3f-498d-9b0e-99e9be1f5d5c.png)

* One or single program, at a time, can either use an **I/O** device or can utilize the **CPU**. Cannot use **both** at the **same** time.
* Single program cannot keep **CPU and I/O** devices busy simultaneously. 
* Not every efficient CPU utilization.

![image](https://user-images.githubusercontent.com/54589605/236962298-0c22d23e-82d5-405f-a39e-9530310130ac.png)

## Multi-programming OS

> This OS allows more than one program or multiple processes/programs at a time in RAM.

![image](https://user-images.githubusercontent.com/54589605/236962434-f03db9de-52be-4854-b594-2f3f28d7a9fb.png)

> The no. of processes the CPU can run at a time is **1** only.

> If one process was running on CPU and that process has gone for **I/O** operations then another process can use the resources of CPU. Parallel work is going on. **YES**.

> If want to use/utilize the CPU as much as possible then as many processes we have the better it is.

![image](https://user-images.githubusercontent.com/54589605/236963168-7c94bfe0-cefe-4a45-9c60-ea9727c9da3a.png)

* Better CPU utilization as compared to uni-porgramming OS, because if a process goes for **I/O** devices then other processes will be ready to run on the CPU. 

### Degree of Multiprogramming

* It tells at a time, how many no. of processes are there in the main memory.
* At a time there are **5** processes in **main memory** then the **degree of multiprogramming** will be **5**.
* As the **degree of multiprogramming** increases, CPU utilization also increases but upto a **certain limit**.

### Types of Multiprogramming OS

1) **Non-preemptive** -> A process can leave CPU only with it's own wish.

* Cases:-

* Either process completed
* Or process wants to use **I\O**.

> For whatever is the **external** reason, the process will never leave CPU. For any forceful reason as well, the process will never leave CPU. 

* The design of the OS is in such a way that it cannot **preempt** any running processes from the CPU. Then that OS is called as **non-preemptive multiprogramming OS**.

2) **Preemptive** -> A ruuning process can be taken out of CPU forcefully.

![image](https://user-images.githubusercontent.com/54589605/236982461-7d0a8087-f634-460d-8510-bde0d4250a95.png)


## Multi-tasking OS(Time Sharing)

> **Multi-tasking OS** is an **extension** of **preemptive multiprogramming OS**, in which processes are executed in **round-robin** manner. It is a **type** of **multiprogramming OS**.

![image](https://user-images.githubusercontent.com/54589605/236966726-ee43b08b-f97a-4526-aa25-baed95d0dd09.png)

* It is called as **Time Sharing OS** because the **time of CPU or CPU time** is being shared equally among **many processes**.

## Multi-processing OS

* It is used on computers having multiple CPUs.

### Types of Multi-processing OS

1) Tightly coupled or Shared Memory -> We have **multiple** CPUs and all of the CPUs will share a single **main memory**.
2) Loosely coupled or Distributed system -> We have **multiple** CPUs here also but all of the CPUs have their own **main memory or RAM** now. All of the CPUs will represent a **single computer system**.

![image](https://user-images.githubusercontent.com/54589605/236968395-661da22b-ace8-4fcb-9b23-3f9db94ae6ca.png)
![image](https://user-images.githubusercontent.com/54589605/236968642-6737721e-6f8c-41c2-ad51-fe7cc660c21a.png)
![image](https://user-images.githubusercontent.com/54589605/236968669-8a5c110f-87e3-46a7-b5ee-6e021060a51d.png)
![image](https://user-images.githubusercontent.com/54589605/236968729-c0051294-9282-457f-bb8e-b8c3b57461ed.png)

* NO. Cores and CPUs are **different**. Cores means a processing unit.

## Multi-user OS

* This OS allows multiple users to use one computer system simultaneously.

![image](https://user-images.githubusercontent.com/54589605/236969366-bfac84b1-3507-4d2d-85d9-573c76a5afed.png)
![image](https://user-images.githubusercontent.com/54589605/236969518-7cbdb781-c942-4adf-87c0-bc6fa26730e8.png)
![image](https://user-images.githubusercontent.com/54589605/236969696-4556181d-ba9e-46c9-aed2-84c6b2672c2b.png)

## Real-time OS

* It runs on computer system which runs on real-time event or data.
* Every process get a **deadline** and each process should complete within deadline.

![image](https://user-images.githubusercontent.com/54589605/236970036-65c1049e-800d-46d8-b85f-6e1ea7449581.png)

### Types of Real-time OS

1) Hard
2) Soft

## Embedded OS

* Used on embedded systems.

## Hand-Held OS

* OS used on devices like phones, tables, etc.

## Dual_Mode_Operation (2) [9th May 2023]

* Preemptive multi-programming -> Forcefully stopping one process running in the CPU.

![image](https://user-images.githubusercontent.com/54589605/236982830-327226a3-37db-43b9-bda9-8cee2da6cbad.png)

* Why is Preemptive programming only in multi-programming and not in uni-programming?

> **Uni-programming** has only **one** process running in the CPU. If we forcefully stop that only one process then there is no one to run in-place of the process.

* So, **uni-programming** OS is always **non-preemptive** OS only.

![image](https://user-images.githubusercontent.com/54589605/236982559-0d152ec9-1603-48c1-9815-8e70387f160e.png)
![image](https://user-images.githubusercontent.com/54589605/236983533-f6a17572-f82f-40d5-9984-a50d85981ae8.png)

## Parts of OS

![image](https://user-images.githubusercontent.com/54589605/236984880-b7b7f0e6-6f5b-4fca-ad97-1808e2270e44.png)

* All of the codes/modules of the entire OS, they are **divided** into **two** categories.

1) Kernel -> The **core** functionality of the OS, which are how the OS behaves, functions, works, stores data. All of the **core** functionality of the OS are **stored** within the **kernel** itself. All of the code, that belongs to the **core** functionality of the OS are **stored** within the **kernel** itself.
2) Shell -> It stores the **interface** to use the **kernel**.

![image](https://user-images.githubusercontent.com/54589605/236985605-55f9fd65-b15c-452e-9cac-929395179aba.png)
![image](https://user-images.githubusercontent.com/54589605/236986108-8cf87cba-b666-4b94-978e-fea2cc1cce27.png)
![image](https://user-images.githubusercontent.com/54589605/236986183-f096fc80-07b0-481c-8ade-39ec4c7d2510.png)
![image](https://user-images.githubusercontent.com/54589605/236986407-023d39d6-fc13-4b6a-ae41-fb8d2d86e8cb.png)

* YES.

* Only OS can access/execute the **privilaged or protected** operations. Any other process running on the system wants to 
access/execute the **privilaged or protected** operations but it can't. The other process will make a **request** to the OS, that do the **privilaged or protected** operations for that process. OS will finish that **privilaged or protected** operations and OS will tell to the other process that the operation is **completed**.

* Any other process trying to these **privilaged or protected** operations, then the **process** has to **request** the OS and that **request** is done through **system call**.

## System Call.

* System Call -> It is a **request** to the OS from either an **user** or from another **process**, to perfrom any  **privilaged or protected** operations.

![image](https://user-images.githubusercontent.com/54589605/236988288-2c0732fc-ba3e-439f-addf-0f8dc187768d.png)
![image](https://user-images.githubusercontent.com/54589605/236991414-5a2998f7-d058-4b3a-9eba-ada40a6e9140.png)

## Dual Mode of Operation

1) User Mode -> Normal user mode.
2) Kernel/System/Supervisor/Privileged Mode -> All of the **privilaged or protected** operations are **available/allowed** here.

* When **OS** is running, the system is in **kernel** mode.
* When **user processes** are running, then the system is in **user** mode.

> A normal user process in running on the CPU, it required some **privilaged or protected** operations, but it cannot do it on it's own as it is in **user mode**. So, the process does a **system call**, then the mode of the system is **changed** to **kernel** mode. Now, the OS executes the **response** of the system call. The program written behind the system call is executed. System call is **executed**. **Privilaged or protected** operations is executed by the OS and returned, the mode of the system is again back to **user** mode.

> Now the user process takes the result of the **privilaged or protected** operations and takes it forward into the user process.

![image](https://user-images.githubusercontent.com/54589605/236993198-58a3028b-b8e6-4d55-9b56-d339c1f5c604.png)

* Why dual mode of operation is used?

> For **protection**.

![image](https://user-images.githubusercontent.com/54589605/236993647-c7be7c2d-436f-4def-8daa-7aa4477ae489.png)

* YES.

## Process

![image](https://user-images.githubusercontent.com/54589605/236993844-e3a0010b-67ec-435f-a0c9-316b57fa6d37.png)

* Process -> Program under execution is called as **process**.
* Program -> Bunch/Set of instructions that can be run on the CPU.
* Process -> **Program** + **Runtime activity**.

* Normal C code written by **user** is converted using **compiler** to **low level language code or binary or byte or machine level code**. 
* Each and every statement in the **machine level code** is called as **instruction**.

* c = a + b; -> Programming statement. Not an instruction as it cannot directly run on the CPU.

![image](https://user-images.githubusercontent.com/54589605/236998465-b714fec7-e278-4ff6-92be-3c77b2cd1844.png)

* **One** instruction of the program is taken into the CPU and then it is run on the CPU. After that instruction is **completed** then another instruction is taken into the CPU.
* The whole program doesn't go. **Only one instruction** is sent at a time to the CPU.

![image](https://user-images.githubusercontent.com/54589605/236998777-584dd599-7c34-4e9d-a41d-417d437b6a00.png)

> Which **instruction** will be executed next is stored in the **main memory(RAM)** and the address of that instruction is maintained within the cpu itself, through **PC or program counter**.

![image](https://user-images.githubusercontent.com/54589605/236999608-89617c10-509b-4e13-a1ae-e5d23f4b6aa3.png)
![image](https://user-images.githubusercontent.com/54589605/236999774-c3b00620-89e2-412d-a30d-59f5707fa2df.png)

* YES.

![image](https://user-images.githubusercontent.com/54589605/237000189-b3f448c9-a1ce-4b18-a33e-ac3356cb214c.png)

> A **program** when it starts running, then with that program, **runtime activity** is also attached to it. Then that **program** becomes a **process**.

* **Runtime activity** comes from the OS, OS attaches **runtime activity** to the program , so that the program can be **controlled** and run.
* Running program is a **process**.

![image](https://user-images.githubusercontent.com/54589605/237001986-54b788f8-a255-4357-9e7f-c5a4ec86aa29.png)

* In the perspective of the CPU, **process** is some unit which can be **scheduled** on the CPU and then run on the CPU.
* One at a time, OS sends the **processes** to the CPU, so that the **processes** are run on the CPU.
* If the OS wants to control the whole system, then it is done through **processes**.

![image](https://user-images.githubusercontent.com/54589605/237002922-e9e3a40d-d9fd-4b56-86c1-c2d50a4aada3.png)
![image](https://user-images.githubusercontent.com/54589605/237003120-74fa3960-e396-46b8-ac47-7c20421703db.png)

* **Process**

1) Definition -> Instructions(Program)
2) Representation/Implementation in memory
3) Operations
4) Attributes

![image](https://user-images.githubusercontent.com/54589605/237062152-bd82958d-4d83-4f7b-955c-c22805c8a05c.png)

## Representation of a Process

* In the whole **OS** subject, we will be talking about **multi-programming** OS. More than **one** process is present in the main memory.

> Whenever a programs becomes a **process** then the OS stores the **process** in main memory. Then that **storage** is being divided into **4** sections.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/676847a4-8f35-4a4a-898d-d8e8c1d80f37)

* Code or Text section -> Instructions.
* Stack, Heap and Data section -> Part of **Runtime activity**.
* Data Section -> Global and static variables
* Heap -> Dynamic Memory Allocation
* Stack -> Activation Record which contains local variables, function parameters, return address.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f0af3d9-75cd-4e4d-b1e8-cc9c0b3fb1d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7edc96a-3ee7-49fc-80e3-ccbad0598d57)

* **Representation of a Process** diagram is for each and every process. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6ef6d06-ea6a-4f96-bfa7-08b9a4abdad8)

* **1 process** but **2 instances** of it.

* Who gives storage to the process in RAM?

> OS

* Where should the process get the storage in RAM?

> OS.


## Operations on a Process

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/953bc919-ffd7-43d9-af12-d93c4fbfc2f8)

* All of the above operations are performed on a **Process**.

* 1hr 10mins. Check the question.

## Attributes of a Process

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10155f5e-72cd-4f3a-8e29-ca20b975fe05)

* NO. At a time only one process can use one I/O device.
* Memory Limit -> From which address to which address process is stored in memory
* All of the attributes of a **process** is stored in a box called as **PCB or Process Control Block(PCB)**. 
* Every process has it own **unique PCB**.
* Process related PCBs are stored with **OS** and not with the process iteself.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0a7aca8-78f7-461e-8ea7-7e6018ca70ce)

* PC -> Program Counter.
* GPR -> General Purpose Register.

## PCB or Process Control Block(PCB)

* Also known as **process descriptor**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32b8cb8c-310f-4d7a-aa66-d261cafe0d74)

* As many processes that many PCBs are stored in the OS.
* Whenever we have stopped a **process** then the values that are present in all of the **various registers** that the **process** has are being **copied** to the **process's PCB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e63a3b9-cfbc-489a-abae-b467f244cb8c)

* The OS has decided that the **P3** process is to be run on the CPU. So now the OS will take all of the values from the **P3 process's PCB** and check if all of the values are there or not, if there then all of the values of P3 process will be copied to the registers of P3.

* The values that are coming from the registers of a particular process to the PCB of that process is called as **context of that process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6c9560f-3de0-4b91-acc8-70fd9f131eaa)

## Context

* The register content of PCB of a process are collectively known as **Context** of that process.
* If a process is stopped then the context of the process is copied by the OS and stored in the PCB of that process by the OS.
* If a **new process** is to be run then the context of the process is taken/copied by OS from the PCB of that process and then loaded into the CPU. Now, the process runs.

## Context Switch

> Stop the currently running process, whatever is the context of that process, it is copied by the OS to the PCBs of that process. The next process we are about to run, take the context of that process from the PCB and load it ino the CPU. This is called as **context Switch**.

* Context Save -> Contesxt of current running process is saved from CPU to it's PCB.
* Context Load -> Context of another process is loaded to CPU from it's PCB

* Both **Context Save and Context Load**, together is called as **Context Switch**.

* What will be the values of a process who has come for the **first time**?

> The values will be decided by the **OS** only.

* Context Switch -> Taking out current process from CPU and sending another process in CPU to run.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc8f53c9-ca38-4970-9c2a-8e444b4cda29)

* **Preemption or Preemtive process** may lead to **context switch**.
* At every preemption, context switch is needed but for every context switch, preemption is not mandatory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3216ac8a-3704-4472-bd50-becdc05d7e0d)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f60c490f-e8e4-45c7-9b22-cfd0dc299e7d)

* YUP

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/797dcb3e-e8a5-44d4-8f7c-e1d05306c66b)

* YES.

## Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/030b9c44-acab-4799-9cc3-918a1bcb75b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d88bf9f2-31ad-4dd2-bc71-f01faa8db18e)

* Only **OS** can access the PCB.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adae13bf-68c5-411c-8337-e49e96324bf7)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d53b1204-3439-423d-b5f3-32eae789ab1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/049adb8b-23aa-466c-b08c-9716bf70a2cc)

## Processing State Transition and Process Scheduling (3) [9th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d653047b-92b4-46e6-9572-2a6b93deb354)

* Old context will be overwritten.

## Process States

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3611fbc9-f0b9-4fb6-8679-54fc80c3407e)

* Process states are defined based on what process is doing?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34343904-af5e-491c-abe8-2b6c3612c484)

1) **New** -> The processes that are **installed**, present in the system but are not there for running. Some process that is there in the system, within the HDD also but have not here there for running purposes. They are called as **new** processes or the processes are in the **new** state.

> The **new** state processes are stored in **secondary memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfe9fc4b-800d-4554-afb5-80d69483b69e)

* As an **user** or the **OS** has **admitted(trying to run the process)** some process. The **new** process which is being **admitted** first comes to the **ready** state.

2) **Ready** -> All of the processes which are **ready** to run on the CPU are known to be in **ready** state.

> All of the processes that are waiting for the CPU, whenever they get access to the CPU they will run themselves. SJust because they haven't been called and they are **waiting**. They are called as **ready* processes.

* If **one** process is running on the CPU, then the **other** processors are in **ready** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a16b3df-ce5a-4a41-8c62-61bc9148e5c2)

* If a process is in **ready** state then it is within the **main memory** guranteed.

3) Running -> A process which is running on CPU has it's state as running.

* If a process has gone to the CPU for execution, then that process will be removed from main memory?

> NO. It will be there in main memory only.

* The state of the process is just changing. The process is still there within the main memory only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e047437f-6c02-4258-829c-3514ff6595a0)

4) Terminated -> If a process was running and the execution of the process was **completed/finished**. If the **process** is **completed** then the process by itself only will take the transition to the **terminated** state. Then the state of the process is called as **terminated** state.

5) Wating/blocked -> If a process running on the cpu and now it wants **I/O** operations. If a process wants **I/O** operations then that process's status will be changed into **waiting/blocked** state. 

> The process is waiting for an **event** which is suppose to come from the **user's end** which could be **user's input**. If the **event** doesn't come, then the **process** will be stuck there only and not move forward.

> If a process is waiting for the **user's click** then that **process** is in **waiting/blocked** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7636b38-3865-4509-b18a-b903ebc51154)

6) When some process's **I/O** operations is complete then the **process** will go back to it's **ready** state.

> Ready state has multiple processes. Out of theose many 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24d198f7-35be-40e9-9ea0-e3078ea79db6)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1201fa5b-ab4b-4dec-9fe0-94e309b21378)
 
 
> If any process is stored but never brought to the main memory then it is **new** state. If the process was brought to the main memory then it is **ready** state. As soon as the process was send for running then it whent into **running state8*.

* Scheduler -> It decides from the multiple ready processes, which process should go to the running state. It will take the **decision**. All of the processes present in **ready** state, among them the OS will make the **decision** of sending the  **process** into **running** state. The decision making is done by the **dispatcher**.
* Dispatch -> The decision making is done by the **dispatcher**. It does **context witching**.

* Selection of **process** is done by the **scheduler**
* The work of the **dispatcher** is to take that **process** to **running** state.

* The **context switch** is done by the **dispatcher**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5146c5f3-4e00-42f3-84fb-1d7e5e01c60d)

* In which states, the process is in main memory?

> Ready, running and waiting states.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f129a09-84a8-4a69-ac66-ac268888d981)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f22de8a-838a-4644-9cb1-f7133c1ab57e)

* If the process is in **ready or running or in blocked state** then the process is in main memory.


* There are **two** transitions that are taken **itself/voluntarily** by the **process**.

1) Running -> Termination state
2) Running -> Waiting/blocked state.

* Voluntarily -> Process can do with it's own wish.

> The rest of the **transitions** are decided by the **OS** and are not taken by the **process** itself.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e2e7380-ae39-421b-bcac-bfdedccdb11c)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14b937ed-a956-4d6e-a040-8cc614e23570)

* For **Preemptive systems**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7e88d1a-d391-4355-ac93-be52e625b231)

> A running process cannot be forcefully stopped when it is running on the CPU. That why that **preemtive** line is not possible in **non-preemptive** systems.

* A processs can leave running state in **two** conditions only:

1) The process has completed executed and has **exited** and taken the **termination** state.
2) The process has gone for **I/O** events.

* The process cannot be forced to leave from the CPU, when the process is running on the CPU.

* When a process goes to the cpu then only the context of the process goes to the cpu. Then we say that the **process is running on the cpu**. The context has only gone to the cpu. The process is still there in the **main memory** which means the **code, data, stack and heap** are there in **main memory**.

* If the process has left **running** state and has changed to **ready** state, then the context of the process will leave the cpu, but the **content** of the process is still there in **main memory** only.
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22d9139e-16bb-417c-b5a5-44052b6b0d4e)

* If the process has gone for **I/O operation** and is in **waiting/blocked** states, then the **content** of the process is still there in **main memory** only.

* If the process has **terminated** then the  **content** of the process will be **removed** from **main memory**.

## CPU VS IO Bound Process

* CPU Bound -> If the process is intensive in terms of **CPU operations**, then it is also called as **CPU intensive process**.
* IO Bound -> If the process is intensive in terms of **IO operations**, then it is also called as **IO intensive process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56a0a707-5d75-4e0b-80d4-ff4f064d3add)

## Process Scheduling

> Scheduling is needed, when we have **more than one** option for somethings.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5b5259c-7005-4cd1-bc10-5b3314763fe6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75cfb2c7-ab36-4dec-88db-2f1d766d9cca)

* More than one process is in **ready state**?

> **YES**.

> The OS creates a list of all the processes that are in **ready** state. The list is called as **ready queue**.

* **Ready queue** is nothing but a **data structure** that is **maintained** by the OS.

## Scheduling Queues

1) Job Queue -> All of the processes which are in **new state**, are kept in **job queue**.
2) Ready Queue -> All of the processes which are in **ready state**, are kept in **ready queue**.
3) Device Queue -> All of the processes which are waiting for a **specific device** are kept into it's device queue.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11cdc391-fadf-4c13-8c17-5df23dbe4d94)

* Each device has it's own queue.


* Start from **1hr**.
















