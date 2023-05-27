# OS

* Course Link -> https://unacademy.com/course/comprehensive-course-on-operating-system-for-gate-2425/A9IBFZWP

# Syllabus

![image](https://user-images.githubusercontent.com/54589605/236868120-bf5277d2-780d-4475-817e-22f568012381.png)
![image](https://user-images.githubusercontent.com/54589605/236868374-486883d7-fc31-4289-b294-906784259ad8.png)

# Revision

* 1 -> Done till Lecture-3. Start from Lecture 4.

# Next Video

* Link -> https://unacademy.com/class/cpu-scheduling-algo-round-robin/UHQQ1T0Y (7)

# PYQs Playlist

* Link -> https://www.youtube.com/playlist?list=PLG9aCp4uE-s3klreqEhbzOBQDg5Ha0U38


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

1) **New** -> The processes that are **installed**, present in the system but are not there for running. Some process that is there in the system, within the HDD also but are not there for running purposes. They are called as **new** processes or the processes are in the **new** state.

> The **new** state processes are stored in **secondary memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfe9fc4b-800d-4554-afb5-80d69483b69e)

* As an **user** or the **OS** has **admitted(trying to run the process)** some process. The **new** process which is being **admitted** first comes to the **ready** state.

2) **Ready** -> All of the processes which are **ready** to run on the CPU are known to be in **ready** state.

> All of the processes that are waiting for the CPU, whenever they get access to the CPU they will run themselves. Just because they haven't been called and they are **waiting**. They are called as **ready* processes.

* If **one** process is running on the CPU, then the **other** processors are in **ready** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a16b3df-ce5a-4a41-8c62-61bc9148e5c2)

* If a process is in **ready** state then it is within the **main memory** guaranteed.

3) Running -> A process which is running on CPU has it's state as running.

* If a process has gone to the CPU for execution, then that process will be removed from main memory?

> NO. It will be there in main memory only.

* The state of the process is just changing. The process is still there within the main memory only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e047437f-6c02-4258-829c-3514ff6595a0)

4) Terminated -> If a process was running and the execution of the process was **completed/finished**. If the **process** is **completed** then the process by itself only will take the transition to the **terminated** state. Then the state of the process is called as **terminated** state.

5) Waiting/blocked -> If a process running on the cpu and now it wants **I/O** operations. If a process wants **I/O** operations then that process's status will be changed into **waiting/blocked** state. 

> The process is waiting for an **event** which is suppose to come from the **user's end** which could be **user's input**. If the **event** doesn't come, then the **process** will be stuck there only and not move forward.

> If a process is waiting for the **user's click** then that **process** is in **waiting/blocked** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7636b38-3865-4509-b18a-b903ebc51154)

6) When some process's **I/O** operations is complete then the **process** will go back to it's **ready** state.

> Ready state has multiple processes. Out of those many 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24d198f7-35be-40e9-9ea0-e3078ea79db6)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1201fa5b-ab4b-4dec-9fe0-94e309b21378)
 
 
> If any process is stored but never brought to the main memory then it is in **new** state. If the process was brought to the main memory then it is in **ready** state. As soon as the process was send for running then it when into **running state**.

* Scheduler -> It decides from the multiple ready processes, which process should go to the running state. It will take the **decision**. All of the processes present in **ready** state, among them the OS will make the **decision** of sending the  **process** into **running** state. The decision making is done by the **dispatcher**.
* Dispatch -> The decision making is done by the **dispatcher**. It does **context switching**.

* Selection of **process** is done by the **scheduler**.
* The work of the **dispatcher** is to take that **process** to **running** state.

* The **context switch** is done by the **dispatcher**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5146c5f3-4e00-42f3-84fb-1d7e5e01c60d)

* In which states, the process is in **main memory**?

> Ready, running and waiting states.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f129a09-84a8-4a69-ac66-ac268888d981)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f22de8a-838a-4644-9cb1-f7133c1ab57e)

* If the process is in **ready or running or in blocked state** then the process is in main memory.


* There are **two** transitions that are bing taken by the **process**  **itself or voluntarily**.

1) Running to Termination state.
2) Running to Waiting/blocked state.

* Voluntarily meaning -> Process can do with it's own wish.

> The rest of the **transitions** are decided by the **OS** and are not taken by the **process** itself.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e2e7380-ae39-421b-bcac-bfdedccdb11c)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14b937ed-a956-4d6e-a040-8cc614e23570)

* For **Preemptive systems** above.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7e88d1a-d391-4355-ac93-be52e625b231)

> A running process cannot be forcefully stopped when it is running on the CPU. That why that **preemptive** line is not possible in **non-preemptive** systems.

* A processes can leave running state in **two** conditions only:

1) The process has completed execution and has **exited** and taken the **termination** state.
2) The process has gone for **I/O** events.

* The process cannot be forced to leave from the CPU, when the process is running on the CPU.

* When a process goes to the cpu then only the **context of the process** goes to the cpu. Then we say that the **process is running on the cpu**. The context has only gone to the cpu. The process is still there in the **main memory** which means the **code, data, stack and heap** are there in **main memory**.

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
3) Device Queue -> All of the processes which are waiting for a **specific device** are kept into it's device specific queue.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11cdc391-fadf-4c13-8c17-5df23dbe4d94)

* Each device has it's own queue.
* The process waiting for the printer will be kept in **printer's queue**.
* The process waiting for the webcam will be kept in **webcam's queue**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19a83e60-e556-4c6f-bffe-7219aa7600ea)

* All of the process that are in **ready queue** their PCBs are taken by the OS and is made into a queue like above.

* The process is kept in **ready queue** means that the PCBs of that process are kept within the **ready queue**.

* If a process is sent for **running** state via scheduling on the cpu then the process's PCB will be in ready queue or not?

> NO. The status of the process has **changed**, it has gone to **running** state. So, PCB is taken out from **ready queue** and sent to **running**.

* The PCB is still in main memory and is a part of the OS only but the PCB is not a part of the **ready queue** now. As the process state has changed from **ready** to **running** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b18256f6-03f6-4100-a24d-24984d32e2a0)

* If the process is in **blocked** state, then the PCB will be added to the **device's queue** as the process is waiting for that particular device.

## Types of schedulers

1) Long-Term Scheduler(Job) -> It schedules processes from **new** state to **ready** state. It takes a process from **secondary memory(hard disk)** to **main memory**.
2) Short-Term Scheduler(CPU) -> It selects one of the **ready** processes to run on the CPU next.
3) Mid-Term Scheduler(Medium-term) -> 

* They schedule **processes**.

### Long-Term Scheduler(Job)

* Degree of multi-programming -> No. of processes in main memory.
* If a user schedules a process, so it comes to the **main memory**. Then, the **degree of multi-programming** is **increased**.
* We can say that the **Long-Term Scheduler(Job)**, can increase the **degree of multi-programming**. **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6889764d-34a6-41e4-9675-05d60b1430bf)

* **Long-Term Scheduler(Job)** can only **increase** the **degree of multi-programming**, it cannot **decrease** it. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbb983f0-064c-4063-b244-6e7abba35f6a)

> **Long-Term Scheduler(Job)** controls the **degree of multi-programming**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/609c6bb0-7e3f-41cf-a01c-f6970dfe4157)

### Short-Term Scheduler(CPU)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63134d7c-8ef2-4897-9dfa-cfc89771ffc6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e791f94b-c0d5-46c7-ab42-3d93398ebb10)

* **Ready to Running** transition -> Dispatcher.
* **Short-Term Scheduler(CPU)** will only select which process will go next to the cpu to run.
* **Long-Term Scheduler(Job)** does **transition** but **Short-Term Scheduler(CPU)** doesn't do **transition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35b1e44b-b629-4988-ab50-873a155dfc58)

* If a process is in **ready** state then it is in **main memory** or not?

> **YES**, it is in **main memory**.

* If a process goes to the cpu for **running**, then it is in **main memory** or not?

> **YES**, it is in **main memory**.

* If any process was only selected to run on cpu next, then the **no. of processes** from **main memory** has not **increased or decreased**. It **remained** the same. No change in the **no. of processes** in **main memory** before or after.
* No impact on **degree of multi-programming**.
* **Short-Term Scheduler(CPU)** does not affect the **degree of multi-programming**.

> **Short-Term Scheduler(CPU)** is being used/utilized every few **nano-seconds** only. It is used very **frequently**.

> **Long-Term Scheduler(JOB)** is used not that **frequently**. It is being used/utilized in every few **mili or micro** seconds, or after **few minutes** only. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30055ae0-cfc2-473c-99f3-e96bfdff6be6)

* Long-term scheduler is needed **less** frequently.
* Short-term scheduler is needed for **more** frequently

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a87b3d7d-2894-4a43-8b07-1b92aacd02e0)

### Mid-Term Scheduler

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a7bddfd-60e7-494e-a3e8-7f22387f8a0d)

> First we were playing a game on our phone, then a whatsapp message came asking for photos immediately. We decided to mail the photos as whatsapp will destroy the quality of the photos. When we we selecting the photos to be sent via mail, then we got a telegram message about the today's class being rescheduled. We also wanted to check that telegram message but the RAM was full.

> The OS has no space in RAM to open the telegram app. The OS observed that there is no space in RAM to open the telegram app. OS noticed that the **game** we were playing earlier is sitting **in-active** for sometime now in the **background**.

> For the OS able to open the telegram app and bring it to **main memory**. The OS will take the **game** application from the **main memory** and copy it to the **secondary memory**. Now, space is free in **main memory(RAM)**. So, we can now open the **telegram** app.

> The PCBs of the **game** app are still with OS only in **main memory**. The content(code, data, etc) of the **game** app was copied to the **secondary memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a19c2055-de22-47f6-821c-73ad5b8f0073)

> We have seen all of the **messages** we needed to see on the **telegram** app. We closed **telegram**. After that we mailed all the images, we closed **email** app. We also replied to the whatsapp messaged and closed **whatsapp** app. Now we wanted to continue with the **game** and when we are back to the **game** app, we have noticed that the **game** loads from the beginning. That is the game coming back from **secondary memory** into the **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b8c297d-7c96-4add-bec3-3af863c8d43f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d786f575-b9e1-48ed-801b-1a8248cb7698)

> If there was not enough space in **main memory** for starting a new process then, the **OS** will have to **copy** one of the **in-active** processes from **main memory** to **secondary memory**.

> The above process done by the **OS** is called as **swap out**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ef956e0-db31-446c-94d8-e908c786d38a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a1476f1-9d0e-4bf5-8e3a-9fff3b35e118)

* The **game** process which was running on **main memory** and was **in-active**, so the **OS** has **swap out** the **game** process to **secondary memory**, so that some **space** can be created in **main memory**. So, that we can open **telegram** app and view messages.

* Whenever the **swap out** process in **secondary memory**, by **user's choice** or for **some-other** reason, tries to go to **main memory** then the **OS** will take that process back to **main memory**. This is called as **swap in**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e28b2a26-7956-4cbe-9fd2-eaa870160894)

* For the **swap out and swap in** operations, the OS has created **one** program within itself that program name is **Mid-Term scheduler**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67bfaadf-da92-48a7-a9f4-3fc74f6a2d82)

> Mid-term scheduler performs swapping(swap-out and swap-in) of process.

* The **OS scheduler** will decide which **process** to **swap out** and which process to **swap in**.

> If **swap out** and **swap in** are done based on **priority** of processes, then it is known as **roll-out, roll-in**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e0c3be7-a0c9-4a6e-9527-973bfa21e863)

* The **no. of processes** is **decreased** in **main memory** when we did **swap out**.

> So the **Mid-Term scheduler** will **decrease** the **no. of processes** in **main memory**.

* The **no. of processes** is **increased** in **main memory** when we did **swap in**.

> So the **Mid-Term scheduler** will **increase** the **no. of processes** in **main memory**.

* Now, we can say that, **Mid-Term scheduler** can **increase as well as can decrease** the **degree of multi-programming**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcf9cbc9-863e-49c2-a68e-9d2b035cea62)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57ea82c7-2c4c-47d5-95b7-4bbfe2ca3747)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c9883eb-fb3f-4530-8e9b-c83bc4638d0a)

### Swap Space

> Swapped-out processes are kept into secondary memory on the **swap-space**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e843d2d-5df6-416a-ba04-411725e34ea7)

* If a process is **swapped out** then what will be it's state?

> **Suspended** state.

* **New** state processes are not in **main memory** so no need of **swap-out**.
* **Termination** state process are not in **main memory** so no need of **swap-out**.
* If a process is in **running** state, then they cannot be **swapped-out**, because they are in **running** state.
* If a process is in **ready or waiting** state then that **processes** can be **swap-out**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/394ee0ac-2f8d-4065-8e52-8ebecfacf103)

* If we have a **ready** state process and we **swap-out(suspend)** the process. It is kept in **suspended ready** state.
* If we have a **suspend ready** state process and we **swap-in(resume)** the process. It is kept in **ready** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1adccd1-5e96-4024-83eb-e5693b257d67)

* If we have a **waiting** state process and we **swap-out(suspend)** the process. It is kept in **suspended blocked** state.
* If we have a **suspended blocked** state process and we **swap-in(resume)** the process. It is kept in **waiting** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/793eeb1f-4cc1-4b0a-9095-ee2bbc7e4108)

> Some processes had **I/O** operations but they are **swapped-out** from **main memory** but the **I/O** in the **background** has been completed/done. If the **I/O** has been **completed/done** in the **background** then **process** will change state from **suspended blocked** state to **suspended ready** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12817e32-77a3-4bad-81a4-9b071703c6c8)

* **Example** of **suspended blocked** state to **suspended ready** state:

> In a **sport** there is a player who got **injured**. Because of the **injury** the player is **sitting out** and is in **blocked state**. When the player was in **injury**, the player got **suspended** because of **some misconduct** he had done earlier.

> Now, the player is in **suspended blocked** state. The player has not fully recovered from the **injury** but the **suspension** put on the player is **over**. The player is in **blocked** state now. Another player is in **ready** state and waiting to play in the **next** season. 

> The new player is **suspended** because of **some misconduct** he had done earlier. Now, the new player is in **suspend ready** state. The **suspension** that was put on the new player is **over**. So, the new player is in **ready** state now.

> If a player has suffered injury then the player got **suspended** for **2 months**. The player recovered within **1 month** only but the player was still **suspended**. So, the player will be in **suspended ready** state as he has already recovered from **injury** and waiting for the **suspension** to be **over**. So, when the **2 months** suspension time is over, the player will be in **ready** state to be **picked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2024a65f-ad3f-4a8e-bd0a-b9a7dcc9be70)

## CPU scheduling

> Ultimately, **process scheduling** and **CPU scheduling** are the **same** thing. The **process** in the CPU, or the **CPU** in the process. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75ade2d9-db68-4454-8edb-43b4ae9ea31b)

* Function -> Make a selection, which process will run next on CPU.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fca933bc-8bfb-4a68-949d-cf554d2a2639)

* YES.

## CPU Scheduling Types

1) Preemptive
2) Non-preemptive

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25ff33dc-a4fc-4487-874b-ca04e439d57f)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1763eceb-3873-4e9d-a115-a7484dc3aa4d)

* Not in control of **Long Term Scheduler**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64453680-6846-4feb-9bd4-5260005a7bc6)

* Not necessarily.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/553faabf-b304-4b3e-9ad2-0acfe720457d)

* Decision making.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d03783f-52e4-4a67-a402-dee346c9cdbf)

* ALGO Quiz.


## Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c5618cb-7a95-4653-8cf3-fb20c3e386c6)

## Doubt_Solving_Session (4) [11th May 2023]

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35e08120-a69b-48ae-82b8-a61b1130b273)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1da95dfc-a96a-4c25-9d81-3b9415c539b2)

> Controlling means on the basisc of the **requirements**, the **degree of multi-programming** is **increased** or **decreased**.

> Long term scheduler on **it's own** and using **understanding/intelligence**, controls the **degree of multi-programming**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e300d0f6-2375-4e31-a874-6d17915100ea)

* Really **True**. **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc791bbd-ea14-45a0-a0ed-38dd61001648)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7904495-27a9-4e91-9dbf-f5cdc4f20a3a)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e954edf3-41cb-4a3f-a141-4cd2b6711e67)

* All system calls are **software interrupts**. but the **rest** is **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b8ba1d2-ade7-4e94-860a-b68def6d2e1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58da21c8-2068-4bb1-b4e7-8d48cf31a2c9)

* NO.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02018f6c-7c09-40e6-ac78-02467125ca6a)

* Not Worth it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed9c642c-7529-4084-9228-4cd258c190f1)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0fec96b-e0ea-45f4-84a4-1e4ed2093725)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6919e510-5c14-4944-bc7c-8a0cde3c2390)

* Suspended diagram.
* Suspend menas **swapped-out** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5beddebe-f2d3-4ded-a614-aa4d342ce967)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10617947-978d-452f-9ece-d08b4249ee8d)

* Will still be in **main memory** only with OS. Only content of the **process** goes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46878b06-eb2c-4f64-ac04-9b27e3d0944c)

* Not necessarily. Many processes are in **ready** state. There are very low priority processes as well which will run on cpu, they can be suspended.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a3254ba-5787-4e0b-b7ee-f8f5d7eddd6c)

* Whenever a system call happens and the user process needs the service of OS, then the user mode changes to **kernel** mode.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0d1bec9-a561-427d-8079-7824a01848bc)

* Many of the background processes needed by the OS.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe94cd87-ba94-4720-9151-e218abf05c19)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84fbbe44-6b12-4d93-bc68-46824c6aaccf)

* Hard -> Not leniant.
* Soft -> Lenient

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9427acea-6777-4289-8c70-8a59ad39a924)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d29a2e53-51c1-44c3-8033-92bbe89306c3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65160486-72dc-4ad9-8a40-2f7d64630fb7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0e91bc1-27e8-4861-9794-210fe89b52d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f9fef0d-cd2b-4b63-bb1f-710ad112d4ac)

* When the process was allocated, then we got that **space(4 sections)**. **Space(4 sections)** is the block area that the process has already gotten.
* If the process runs and executes **malloc() or calloc()** then the process doesn't have to ask for **extra space** from OS. It already has the **heap** section, which **OS** has given to the **process** before only. The process will itself go to the **heap** section and the amount of space needed for the **malloc() or calloc()** will be allocated by the **process** only.
* So there is **no need of OS**. So, **no need of system call** as well.

> So in **malloc() or calloc()**, there will be **no system call** for them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0eec42a7-8992-4b81-84b0-3b5ad3cfb1f7)

> Job queue are used by long term scheduler to select **one** process and bring it to **main memory**. **YES**.

> Ready queue are used by short term scheduler to select **one** process and send it to **CPU**. **YES**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef7482e4-d938-4aad-b370-957122f3a44b)

* Mid Term scheduler can take processes out from **ready queue** as well as from **device queue**. Can do **both**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efe5a2c8-23b3-4738-9987-5710a19427d3)

* NO. Because we use **interupt** now. **Non-preemptive** is not practical now.


## CPU scheduling

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d96bd44-e023-44be-95e0-3ec9510faaac)
 
## CPU Scheduling Types

1) Non-preemptive 
2) Preemptive

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/807ab3b4-4f3d-48c8-9912-8e138a769e69)

## Scheduling Times

1) Arrival Time(AT) -> The time at which a process is admitted. The process is coming from **new** state to **ready** state, that time is called as **arrival time**.
2) Burst/Service Time(BT) -> The amount of time a process needs to run on CPU.
3) Waiting Time(WT) -> The amount of time a process spends in waiting(in ready state).
4) Completion Time(CT) -> The time at which process completes.
5) Turn-Around Time(TAT) -> Total amount of time a process spends from arrival to completion.

* Turn-Around Time(TAT) -> Completion Time(CT) - Arrival Time(AT).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79d82259-881d-4258-84e6-02d549407802)

* The those **45secs**, the process was not running on CPU for the total **45secs**, it was running on CPU for sometime but most of the **45secs** was spend on **waiting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d1ca3c3-b365-4fff-9924-2b6615248023)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7cdf0dc-4db5-4a9a-83ec-4f1054014fc6)

* IMPORTANT FORMULAS.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8412b03-617d-461d-8cb2-7538280932b4)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5bdd132-2aee-4572-bd41-2fcb0ce552e5)

6) Response Time(RT) -> Time from arrival to first response of process.
7) Scheduling Length(L) -> max(CTi) - min(ATj) [i and j are processes]
8) Throughput = **n/L**. No. of processes executed per unit of time.

* 'n' = No. of processes executed in L.

## Scheduling Algorithms

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1954d11a-ff2c-41aa-85fd-90b0ebcecb92)

* **Scheduling Algorithms** work is that the **processes** that have **arrived** to the **main memory** and have the **ready** state, out of those **processes**, one of the **process** will be selected by the **scheduling Algorithms**, that will run next on the cpu.

* The process which are in **ready** state only, those processes will only participate. The process who hasn't come yet, that processes we cannot **schedule**.
* A process can be **scheduled** only after it arrives.

### Consideration

* No any requirement of **I/O** operations from processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9b3f479-d4f8-4373-8b39-5a983fb5e4c0)

### FCFS(Fime Come First Serve)

> The process that arrives **first**, then that process is sent **first** to the CPU.

* Criteria -> Smaller **Arrival time(AT)** first.
* Mode -> Non-preemptive

> If **two** process have their **arrival time(AT)** exactly same. Then we have to apply **tie-breaker**. The **tie-breaker** will be **smaller process-id** first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83ca3618-77fb-4faa-bca8-9fe3da6c57c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/429eba07-ab09-480f-8c31-724c7d745956)

* P0, A and P are the **smallest**. That's how the **PID or process-ID** would be given in **questions**.   

### Gantt Chart

* Gantt Chart -> It always starts from **zero(0)**. It is a time line diagram which shows the process run from when to when.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6cbb0a3-8e45-440f-8a45-6cac18fbc7cb)

> We see that **P1, P2 and P3**, all arrive at time **zero(0)**. Now we can use **three** processes for **scheduling**. All of three process have same arrival time. We have to apply **tie breaker** and we have seen that the **smallest PID** will be give the **first scheduling**.

> So the **P1** will run till **30**. Then **P2** will run till **36**. At the end, **P3** will run till **42**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4688b717-43bb-46ba-98ca-ec6e86efda40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f45b5941-b915-4e22-9a92-887528db22d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5029bef4-c5da-46e1-9bdd-f3308fc98bd2)

* Criteria -> The process which comes **first**, schedule that process. We didn't see in the **critera** how much **burst time** the process was taking. We didn't see the **PID** of the process in the **critera** also.

> If the **arrival time(AT)** of **two** processes is **same** then we are checking **PID** of the process to see who goes **first** for **scheduling**.

* Response Time -> The first time, the process got the CPU and from the time the **process** arrived. That time is called as **response time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb1cc66d-1a17-40b8-bfa0-a9fed7af3087)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d946fb4b-5c10-46fc-a61f-adcdf9e630f9)

* Response Time(RT).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f005b6ff-d7fa-47a7-bf85-534457bd829a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3edaa9b0-c94b-4f84-94b8-125ae44f765f)

### Problems

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47c125a5-1917-40b7-9fd1-3af2765e7f58)


## CPU_Scheduling (5) [11th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7049968a-6382-4999-8481-306fec6b2788)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94556661-585e-4ccc-87ea-a92e50f51c03)

* NO, if we have only one CPU. CPU can only run one process at a given time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/885d9605-2c8e-4647-86a5-b54dfd4c0ebf)

> So the **42** units, which is the **scheduling length**, means that in **42** units of time, we have **scheduled** all of the **processes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/604a5637-3578-4cd2-bb48-6e33c299cdef)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3dd0fc85-b548-4096-b1be-797096c21640)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08e8c594-8077-4c48-b118-50c8b1f0b193)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/772adc75-f2f9-4a57-8e47-448d77a95335)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3960264-6051-4d34-9cbb-412f687bdda3)

* No issue.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d8d5055-fa4f-4a7e-9c9a-e9dbfd19d9d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c90c2ce8-ff06-49cc-854d-4bfe830907af)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/720ca9d8-1569-488a-821f-865ec4adf397)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d2d80aa-247e-481d-bad6-58a1f77358c7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/841e333e-a39f-42f8-8655-bc3897a4760e)

* Response time(RT) will be **same** as **waiting time(WT)** for right now. **WAIT** for the analysis.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80d2ad30-b1a2-47f8-8626-10f0e90d5708)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/904fc668-2358-4bcb-a015-6ebc829e1f13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73fc617c-6c24-4a56-8f10-f441c3b0e677)

* Not the **idle** situation.

* For how much time CPU is idle in the above question?

> 2 + 2 + 3 -> **7** units of time.

> From the total **21** units of time, only **21 - 7 -> 14** units of time are being used by the CPU.

> CPU is idle for **7** units of time out of the total **21** units of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44144ea3-8c0f-459e-8e23-e09cfba2cf4c)

## Convoy Effect

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/685fad26-04db-4117-92a9-70c21ed71602)

* If a **big process** is schedules ahead of **small processes**, then **waiting time(WT)** of small processes will **increase**, and it will eventually **slow down the system**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3fcbceba-1da0-406b-9715-4adc8e113b53)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/675b5d78-00d2-4c63-89db-3db03cfea21f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8050b5bc-76f8-408e-8024-06857bc9dd7b)

* Adavantages and disadvantages.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2244097-c23e-43bc-b051-da4fe69ed0d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/953fb3d3-2e2c-482b-a208-54b6761223ad)

* FIFO

* FCFS is **not practical**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71253cb6-6de8-4bca-955c-b6e7cee9b0d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92dc829b-5543-4a78-8585-35d5caa48985)

* Fixes for mitigating or removing **convoy effect**.

> Let's make a **new algo** where instead of using **FIFO**, we will **schedule the processes** based on **BT or burst time**. This is used is **SJK or Shortest Job First**.

## SJF or Shortest Job First

* Criteria -> We will take the **smaller** burst time(BT) process first. If **two** processes have the **same** burst time then, we have to use **tie breaker**. The **tie breaker** will be **FCFS** which means we have to find see which **process** has the **smaller** arrival time and if arrival time is also same then we have to see **PID** of the processes.

* Mode -> **Non-preemptive** algo.
* SJF **preemptive** -> **SRTF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3284c46-b72f-4fb1-90a4-aa1ece6a4e12)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7e996cc-3ff5-4056-8309-979523381e6d)

> In the **ready queue**, all of the **three** processes arrived at **zero(0)** time. We saw their **burst time**, **p2 and p3** had the **same** burst time. So we had to do **tie-breaker**, so we checked **arrival time** which was also **same** Now, we checked **PID**.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0aa2f06e-d2aa-4dae-be06-34aa5aba4bbd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/678d0e8f-2a0e-4d0a-b038-af72ed6d9657)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cf3dab8-57cd-459e-8f28-06a61c6be3a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/260daebb-21d9-41a5-af8d-ab140e833f24)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6f4fd18-9f71-4dfb-8b06-2834b07cffd3)

* SJF, Advantages and disadvantages
* Starvation happens in **SJF**.
* **SJF** is not a **practical** implementation as well.
* **Convoy effect** is only possible in **FCFS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df9c9351-9beb-4a49-9cc0-36a66d4a8ed7)

* This is the **problem** with **SJF**, we cannot **preempt**. It means that if a **big process** goes to the CPU  and then a **smaller process** comes then there is **no value/use** of the **smaller process**. It means that the **big process** cannot be **preempted**.

> To solve the **problem**, there is a **preemtive** scheduling algorithm that was introduced.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/407e29f0-c30c-437d-bf25-1b15c1516a14)


### Starvation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f97e2b52-1315-4019-a645-0148bb9191be)


* Starvation -> Infinite waiting

## SRTF(Shortest Remaining Time First)

* Criteria -> The smaller **Burst time(BT)** first. If **two** process have the **same** burst time, then we will have to use **tie breaker**. The **tie breaker** will be **FCFS**.

* It is the **preemptive** version of **SJF**.  [**IMPORTANT**]

* Mode -> Preemptive

> If a process arrives and there are no options, we will **schedule** the process. If a **running process's** current remaining time is **more** than the **new process's** burst time then we will **preempt** the **current** running process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3f4d268-6be0-4c30-8921-11104f1fac13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63a3eb1c-3533-459d-8368-2a43133ddc88)

* **Example** -> We will **preempt** P1 player, when a **better** player than **P1** comes to the ground. If **P4** player is better than **P1** player then we will **preempt** P1 player and let **P4** player play on the ground. If **P4** player is not **better** than **P1** player, then let **P1** player, continue playing on the ground until **P1** player is **out**.

* **Preemption** will happen when a **new** process arrives and the **new** process has **lesser burst time(BT)** than the **current** running process's **remaining** time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3afd2627-dc4c-402b-9b45-d6d4c8c6d818)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b38b0e05-874b-4521-8982-969c8615a642)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4245338d-a6a6-438d-8bc9-7101f0482761)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a32bf091-9d4b-49ae-8910-b228504961d0)

* Question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04354347-2c87-4d44-b924-72090d5d16e7)

* Gantt chat using **SJF** scheduling.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95e1a3a3-3318-4d3f-adbb-ce5a37f3f077)

* SRTF

> At **4** units of time, we have **P1, P2, P4 and P5**. Their **burst times** were, **7, 4, 1, 1**. **P4 and P5** have the **same** burst time. We would **continue** P4. If the **remaining burst time** of **process** are **same** then we will check out, **arrival time**, whose's **arrival time** is **smaller**.

> There is **no new process** after **5** units of time. If **no new process** are coming which means that there will be **no possibility of preemption**. Then, run the **remaining processes** like **SJF**. The **remaining time** of **P2 and P6** are **same**, so we will see **arrival time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2fec5ed-9bd8-4f0f-b14f-628472d8b917)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4dc8cb3-70a9-4271-85b0-d902473d46d7)

* We will give some **respect** to **response time** now.
* If the **algo** is a **preemptive** algo, then the **response time and waiting time** for the **various** process will be **different**.
* If the **algo** is a **non-preemptive** algo, then the **response time and waiting time** for the **various** process will be **same** because when a **process** gets the CPU, the whole process is **completed** at that time only, **no preemption** happens. There is no **waiting**, so whatever was the **waiting time** at the **start** was the **response time** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50922ed4-1f5c-4688-b762-4ac15b4c6714)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f61b6f49-0cff-4b87-9d98-9341b3cc7b14)

* Response Time = (When the process got CPU for the first time) - Arrival Time(AT)
* Avg response time =  (0 + 0+0+0+1+5)/6 = 6/6 = 1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b798a5b-5cbf-4540-b030-4eaae47f439a)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e91ac02d-6abe-49ef-8288-6b493c9668ce)

> Arrival time of **P6** was **5**. **P6** got cpu first at **10** units of time. The time from it's **arrival** to the time **P6** got the cpu for the **first time**, it had to wait for **10 - 5 = 5** units of time. So, **5** is **P6** response time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58920a2d-a33c-41b1-9385-31de25610648)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef3e0788-07ec-41a3-846a-b343328d7419)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a36b580-aa66-4ab5-b97c-17853d5dfb07)

* No questions have come as of it in **GATE** exam. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19783656-81a7-4cd9-8d98-fbff9aea8aad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/399ca39b-8601-4513-8f46-fbbb1ab6b73c)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a133f2bc-f51a-46d9-9727-0dfaa15c73c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03957dea-d144-4345-9097-81177ad827bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/713ffad7-c2ea-4f2e-8bfb-8864cd7c282b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f4c426e-70b4-4916-af7f-5d6a5cc85ff7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/51955819-1051-44a5-9b63-da8d055ccc20)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f044ec8-db69-4bad-9d02-86754661a88e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/993aeb9a-9da7-4917-97a0-0bf498a0e811)


## CPU_scheduling_algo_SRTF (6) [12th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72599a85-f79f-4829-bcb5-ed92672809ed)

* Doubt.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47e8e98e-465a-41a8-a96e-9f33c61c1be2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39ee938a-42b4-46ae-8966-df87dea66720)

* Waiting Time(WT) **not equals to** response time(RT)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04676eb4-8b6e-4d2c-a32d-ada169cc12e2)

* SRTF, advantages and disadvantages.

* If asked in a question that for a given process what will be the **min average waiting time**?

> Indirectly asking for **SRTF** algo, as it has the **min avg waiting time** among all **scheduling algos**, preemtive or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8e6f2c6-29f7-4ec0-8905-a1082591983d)

* If asked in a question that for a given process what will be the **min average waiting time** for **non-preemtive** algos only?

> Indirectly asking for **SJF** algo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3633348-163e-46fc-9cca-6c85d15c900c)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87be7521-4c8c-474f-a5c0-391867387942)

* AS **SRTF** has **starvation** we can say that the algo is not **fair** or **no fairness** in the algo. It is a **biased** algo towards **smaller/shorted jobs/processes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3af4bca8-234b-417d-9051-aa58db75ce79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ddb5bb9-c660-40fb-a6ca-efac9a11ed81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27fe9f5a-e3d7-49db-b1d4-4a17d25ddba6)

* SRTF and SJF are **benchmarks**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d74fdaaf-3376-4d8f-a5b8-36e01e75dba6)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91f598cf-d576-4da0-87e2-efed441a44f0)

* If asked for a given process scenario, **what will be the min. avg. waiting time?**

> Apply **SRTF**.

* If asked, **what will be the min. avg. waiting time**, for **non-preemptive execution of processes?

> Apply **SJF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4b4e300-2001-440d-83af-4883945c917d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/488a36b0-dffd-4475-b3a7-0fd18ee0a981)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9341ae00-70fe-4dec-9cd9-71b1265567fb)

* Only happens in **FCFS** only.

## LJF(Longest Job First)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e31d3949-c1a7-479f-b612-41f03109af96)

* Criteria -> Largest **Burst time(BT)** available. If there is **tie-breaker** then use **FCFS** for **tie-breaker**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a277c711-1730-4b81-a3d0-9868a1c7ecb9)

* Convoy effect is given only. It is always there as well are taking the **largest** process anyways.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06f40bd7-d45e-4c23-8c23-a9f96b77e82d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33f29439-a59c-4c52-9f42-db90edc3eba8)

## LRTF(Longest Remaining Time First)

* Criteria -> Largest burst time first. 
* Tie breaker -> FCFS
* Mode -> Preemptive

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5ca66be-534f-4279-ade4-00b802052397)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79e74138-8345-49f0-9dc5-c408b5234581)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76842b98-8ec5-4c59-95cf-8e690912966f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5528f5f9-7cb3-484c-b275-5d3a15c4e5d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6a698ee-8437-42ae-8536-a413500516a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a54acb3e-889a-4c06-901f-3464a3dd2d26)

* Don't count the **first and last** one. This will be mentioned in the **question** only.

* **No. of context switches** -> 17

> Excluding before first process and after last process completion.

> **Turn-Aroung-Time** is **same**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08f90613-33c5-4c8e-a912-e31ca59c3c62)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c08a654f-2d00-4f60-b92b-4933cb90af78)

* **LJF and LRTF** also suffer from **starvation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f175338-ccb5-4166-9fcb-2f41dceaf2bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44370e58-8a0f-419f-a8ad-614fb9f392d0)

> The **four** processes, **P1, P2, P3 and P4** have ran for **8 + 5 + 3 + 1 -> 17** units of time. In whatever **sequence** they have ran, **we don't care**. Now, all of the **four** process each have only **1** unit of time left.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b80faf26-406a-45a6-92d6-dde24f2d9673)

> We will run **P1 -> P2 -> P3 -> P4**, in this **order** only, for **each and every case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e512480-4d2f-4d1b-aa58-a494b50d82f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/570dea75-3136-4ff8-b365-83d2de9d17a9)

> The **burst times** are **9, 6, 4 and 2** respectively given in the question for **p1, p2, p3 and p4**. 

* **Steps**:-

1) We will **subtract/deduct 1** from the **burst times** of the above processes.
2) We will **add** the **new burst time**, which are **8, 5, 3, 1**. The total is **8 + 5 + 3 + 1 -> 17**. So, this **17** means the **end** of the processes. Only **one count** of **each process** is left.
3) Starting from **17**, put down the **processes** one by one **like above**.

> We don't have to make the **full gantt chart**, until and unless they ask for **count of context switch**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c23a2072-d0f0-4d97-9a76-861ec1e936ee)

* Example 

> **Subtracting 1** from the **burst times** of the **processes** so that we are left with only **1** unit of time for all of the processes. 

* That's the **trick**.

> No need of making the  **full gantt chart**. From there we can easy find **completion time(CT)** and get the **answers** from there only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef8a5ad4-afd0-4d6d-83ed-a6a8bc21bf49)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4eefc79c-c38b-4b67-a310-15d321dffa9f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a59c7189-b53f-4a5f-a35e-89c62c687c05)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cca89e9-27ed-4c49-a7c0-36237a6f689a)

* **Useless** algorithm. No **advantage** of scheduling. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8e81e8f-d03e-4878-805a-57342c5da379)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/022d0b27-1e2e-4747-9006-0fed4ac7473f)

* GATE PYQ questions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/deec2240-a827-41c5-b0f3-dde44c496c11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87f6f97a-cf2d-4fc2-82b2-7469d7b2a11d)

* When the **above trick** will not work:

> Trick does not work when a person completes before any other process arrives.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6983ea6c-be2e-4a95-98af-0a76ab0ad544)

* Examples where the **trick** doesn't work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/539a2698-d9c5-4c4e-b69a-d39ba5f3d63d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5540ab9e-00c6-468b-a3eb-ef991313cef2)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54a29729-8099-4be5-a749-5274d478825a)

* The above trick will not work in these question because **P4** process came **very late**, after **two** process were already **finished**. Better to make a **gantt chat** here and solve it using that.

> **SRTF and SJF** give favour to the **smaller** processes and because of that reason **starvation** happens. The **bigger** process have to wait for **longer**. This **problem/issue** is fixed by **HRRN**.

## HRRN(Highest Response Ratio Next)

* Response Ratio -> It is dependent on **waiting time(W) and burst time(S)**. If the **waiting time** of the process is **increased** then **response time** will **increase**. If the **burst/service time(S)** is **small** then also the **response time** will **increase**. 

* Criteria -> Among all of the processes, whoever has the **highest** response ration will be **scheduled**. If there is any **tie breaker** for some reason then we have to resolve the **tie breaker** using **SJF** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4d8ec0c-7ec1-4725-b797-efaf8a72e146)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7bd06d1-605a-47ae-baae-5a8ab303edb6)

* Non-preemtive **SJF**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16424ba8-7258-433c-bc26-3fdf55cf3845)

> We haven't checked the **response ratio** because there is only **one process** in the algo, and with **one process**, which ever algo we apply, it will give the **same** result. That's why we didn't calculate **response ratio** for **P1 and P2**. **P1 and P2** where running **alone** on their own.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c073c957-5569-4803-949c-41ef2873257b)

> There is **no choice**, only **one process** is there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d7c2beb-5832-442f-a250-de3436465b74)

* This is for when **time or t=9**.

* P3's **waiting time(w)** = 9-4 = 5
* P4's **waiting time(w)** = 9-6 = 3
* P5's **waiting time(w)** = 9-8 = 1

* s -> Burst time.
* **Response Ration formula** = (w + s)/s.

* Response ratio(P3) = (5 + 4)/4 = 9/4 = 2.25 (Highest)
* Response ratio(P4) = (3 + 5)/5 = 8/5 = 1.6
* Response ratio(P5) = (1 + 2)/2 = 3/2 = 1.5

> So, **P3** process has the **highest** burst time.

* This is for when **time or t=13**.

* P4's **waiting time(w)** = 13-6 = 7
* P5's **waiting time(w)** = 13-8 = 5

* Response ratio(P4) = (7 + 5)/5 = 12/5 = 2.4
* Response ratio(P5) = (5 + 2)/2 = 7/2 = 3.5 (Highest)

> So, **P5** process has the **highest** burst time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db7f7f6d-6291-4b9a-8f75-ee78a0509085)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bce17e9-7b2d-454c-b964-6f647cc1904e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08145feb-4e20-4b82-b856-9b400dd078f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f93c8319-f5d9-47f1-8ce2-c061325b7aca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7837b586-c9aa-4ccb-abc4-78b6a6ee44ea)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/53faf4f8-aed7-484a-ab4e-6eded4479069)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87247f1b-994b-4c46-b125-9454ad776359)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f20656c-432e-4c30-80b2-d08bf4252f73)


## CPU Scheduling-Round Robin (7) [24th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba6ba678-e7fa-41f2-a5a4-85124f43ae4c)

* Yes

## Priority Based Algorithms

* Criteria -> Priority
* Mode -> Preemptive or Non-preemptive.

* Priority:-

1) Static -> Priority cannot be **changed**.
2) Dynamic -> Priority can be **changed**.


> It will be mentioned in the **question** that **bigger nos.** are **higher** priority or **smaller nos.** are **higher** priority.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f115242e-5429-482b-ba4e-8359f7f04e16)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/afdb385f-2980-4c79-abd0-c618099c84f0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/354464bc-8280-4ce4-9d97-e80077deafa2)

* Here it means **bigger nos.** have **higher** priority.
* It will be mentioned in the **question** as well that we have to solve in **Preemptive or in Non-preemptive** matter.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/985e39a6-b533-4e0c-a1c5-92b4dba9e877)

### Examples

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c18fe887-1cac-4559-8353-c5493bcf8779)

* **Non-preemptive**.

> When we have only **one process** available then we don't need to see the **priority**. We don't have any **options** only.

> As we can see in **T=0** time, we have only **one process** which is **P1** that is **available**. So, we don't need to see the **priority** table, we can simply just run **P1** process.

> As we are doing the **non-preemptive** one, the whole **P1** process will run fully.

> At **T=4**, we have **P2, P3, P4 and P5** processes. As we have **options** now we have to check **priority** and see which process has the **highest priority**.

> As mentioned in the question, **largest nos.** have **higher priority**, as in the **priority** column, **highest** is mentioned beside **10**, which means **highest priority** is **10**.

> As **P4** has the **highest priority** of **10**, we will take **P4** process now.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04777e29-da0a-451d-82b0-0ba82cd62b7e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c6be6c3-55bd-4eee-a3ae-74f1fa363fa3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/063eacf0-651a-4f0c-a90b-77803a2632f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc166d76-2b3b-424f-be49-b98ef83b3c64)

* If **tie-breaker** is there, then it will be mentioned in the question.
* There is **no default** tie-breaker here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6d250f2-f096-4e42-87b0-3095d42dccfa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d73a122-58a9-42fa-87d6-ab114a3bf642)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f808b49-2f6b-4c9e-a712-236a94508402)

* Preemptive.
* Preemption is only possible when a **new process** arrives/comes.

> We will run **P1** for **1 time** and we have **P2** process coming at **1 time**. So, we will check if **P2** has **higher priority** than **P1** or not. If **Yes**, then we will **preempt P1** and run **P2**. 

> After **5** unit of time, **no new process** are coming.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5afa4f9-4c27-4160-8d1b-75d9b38c0053)

* If **no new process** are coming then a **Preemption** algo and then it behaves like **non-Preemption** algo only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7eec2610-a823-49dc-a7e3-c8061f062d49)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bef7def2-df4e-4661-b90b-2ca80fa14f08)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5b72602-6130-42c8-92c3-f2c320837061)

* Non-preemptive
* **Smallest no.s** have **highest priority**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf8f104d-d53f-4918-9b3d-cb4c6c630739)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/081e1cb2-6386-45a7-8b5d-249d6f057ec7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb1f2742-9fc8-4b7e-9236-0ea845e49626)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d806ede9-c0c7-4a98-a5ad-af29ef2be5d9)

* Preemptive

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52f1e23a-d50c-46ac-8f37-aa2bd6f30080)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63ebacfa-7770-4f2a-a016-1b4d1a44d807)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b78580a-3d2f-48c0-8948-8b2908b104dd)

 * Types of questions asked:-

1) At what unit of time, the process **P5** was finished/completion time? -> **15**
2) The **finishing** order of **processes**? **P4 -> P3 -> P5 -> P2 -> P6 -> P1**.
3) What is the **turn around time** of **one** particular process?
4) What is the **waiting time** of **one** particular process?
5) What is the **avg waiting time and avg turn around time**?
6) **Turn around time** of **P3** is greater than **P1** or not?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82d7d739-f767-46d4-98a0-ecffc39e6155)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/795a500a-2d0f-423e-b37f-6646bd608ad7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64528cfc-369b-401a-9afc-57a6d9a8d627)

* If **OS** has **dynamic priority** then solution of **starvation** is possible, it is called as **aging**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b56a0b59-34df-4fd4-a161-3fa1133877aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7df008d2-c50c-4258-8b15-6896c099e4e3)

* It is possible in **preemption** only and not in **non-preemption**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4cf98fbd-e0e9-410d-a8d9-e33ec57d83ae)

### Aging

> If a process **waits** for a certain duration, then it's **priority** is **increased by 1**. After waiting for **long**, the process will become **highest priority** process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db504149-cf0e-45cb-aee9-97cc6fe48cc3)

## Round Robin

* Criteria -> Arrival Time  + Quantum Time(Time Slice)
* Mode -> Preemptive

> **Quantum Time(Time Slice)** Will be mentioned in the question

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57581aea-b431-470a-b11c-bef7f9a8e503)

> Whenever one process comes to the CPU then for **max how much time** it runs on the cpu is dependent on the **Quantum Time(Time Slice)** .

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a60ca3f8-2fd1-4395-b738-3ddbac2bc001)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06b97007-9499-4c95-a900-c6a2a3e70087)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c14cdf4a-080f-4533-b402-ab28a20711ef)

* **Q=2** means that whenever one process comes to the CPU for running then it cannot run for more than **2** units of time on the CPU.

* As all of the process arrive at **T=0** time i.e **arrival time** is **same** for all, so the process are arranged in the **ready queue** on the basis of their **P_ID or process ID**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dd1f8d8-5761-4b32-926d-802670b190a3)

* If the process was running on the CPU and it was **preempted** but the process had **burst time** left, then it went back to the **end** of the **ready queue**.

* If the process running on the CPU is **finished/completed** which means that the process had **no burst time** left. So, the process was **terminated** and it never went back to the **ready queue** and instead went to **terminated** state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c03408a-9848-42d2-b1af-692a2f42717e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0562b891-18bb-40f7-a061-4bbf4f3f0806)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a09ed12b-68a9-4e1f-b411-423b84d62d74)

* No. of context switches = 9.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68b23e88-72ce-47d5-b423-87f2271b86d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb21e6eb-37b3-4939-8a50-b5f341029c1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27d8f3d5-2654-4d60-a985-e91fa4d72e40)

* Slide in parks.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb5bd016-155c-4224-866b-3301e021bb77)

* New Kid, K5 entered the park. **K5** doesn't know that **K1** has already done **one round** of the **slide** only. That's why **K5** will be placed at the **end/last** after **K1** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/39faaec9-598c-47f4-8aea-277267875b00)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8439c7b-d2a5-483c-b59d-48353e5cbe02)

* Whoever kid comes later one, will stand at the **end/last** of the **queue** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6666b880-4c89-4328-9f06-f2d5d4e5f644)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f72a4f20-35e6-4b8b-a2c5-26f88279d60e)

* So when **one process** just finished running on the CPU and is coming back to the queue and at that time **new process** comes to the queue then the **new process** is placed **before** the **just preempted process** running on the CPU.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f99847f-8adc-4ed7-be1d-28ef865d3dd1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f7ac7b6-b2f4-444e-bcf1-b83f6b4b8394)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffbd053c-ab3a-4360-b6fc-291d9188cf38)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f831762-3550-4a97-ab4c-3d8854ac52db)

> At **T=2** unit of time, **P1** process is preempted from the CPU and at that time only, **P3** process has arrived at the **ready queue**. Between **P1 and P3**, **P3** is the **newer process** so it will get **more preference** and  put **before** P1 process.

* **Newer process** is given **more preference*.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e813b1b3-a237-4c39-af40-5dbc8f8963e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e28cd48f-8deb-45a0-b989-d14d600ebf36)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5e401e5-02aa-4002-9b87-75948a3edf8d)

* Now, **no new process** are coming. So, run the **process** in the given sequence at **Time =4** as no new process are coming.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3121af13-c03f-49f3-8033-c4b782ac64ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37b1b35d-5b11-4ba9-b88b-6cd972a997ff)

* Rule, follow it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/08516108-b9da-49bb-aba6-cdf4d0013fe5)

* Ofcourse

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aac890d1-f5aa-4e78-8c07-a41498536acd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c5714ad-641a-4b93-a74c-6396df603a94)

* No never ever. We will count the context switches.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6915783-0cc7-4a11-a5ba-257f4fff0a98)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/badad813-6a5f-46df-824a-00c2d2fd750b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9ca16f7-964d-4107-b4de-9fb2a2f33c8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e22b020c-098c-40d9-a1a0-0d73aeeac5d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54ec031e-97e5-43bf-a1fc-4d543b5aea21)

* If asked in the **round robin** question to find out only the **no. of context switches**?

> We can solve directly, no need for **gant chat**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9074b3c-9aab-49c7-a2ff-aad58a970629)

* Quantum Time(Q) = 2
* No of time some process **X** will go to CPU = Burst Time(B)/ Quantum Time(Q).
* No of time process **P1** will go to CPU = 6/2 = 3. 
* No of time process **P2** will go to CPU = 5/2 = 2 + 1 = 3. 
* No of time process **P3** will go to CPU = 4/2 = 2. 
* No of time process **P4** will go to CPU = 3/2 = 1 + 1 = 2. 
* No of time process **P5** will go to CPU = 2/2 = 1. 
* No of time process **P6** will go to CPU = 4/2 = 2. 

* We can take the **upper bound or Ceil value** when we get **fractions**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/971425a7-1b0a-4f00-a39c-113f5e3a4b8f)

* Total no. of times process ran on CPU = 3 + 3 + 2 + 2 + 1 + 2 = 13

* We will do **(Total - 1)** because when **P1** process when to CPU for the **first time** for **running** we will **ignore** it.

* Context Switch for the **above problem** = (Total - 1) = 13 - 1 = **12**. [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49f7cbc9-8fd2-4e0f-9f21-6b5081cfac02)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e621ca4d-cef2-455e-aa8a-dd2888fa6008)

* No process came.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cd07a24-8dca-4f96-8825-7d2f8aade9b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57c6030e-819b-43aa-88c7-7b52190415ec)

* No. of context switch calculation without using **gant chat**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0b87072-b8b0-4a70-b335-403d087c1387)

* General consideration.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86f27866-9280-473a-9a04-1ca507e4b037)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/214f0f85-dc1f-46d5-8d95-665cfde22f69)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5e06295-ba73-4f3f-8010-51e4d1193a11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f3fa0ea3-5ee3-42c4-82a1-58163fc88dfa)

* Timeout.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dfa303b-00d1-45d3-9fcf-8818404fe1b0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c97d3a1-cd79-4bf1-a6b9-5ae1591c34ca)

* Context Switch = 11.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e59aca7c-68c7-45f9-ba32-92010075c47b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f87e3261-026b-4a89-b979-e1f12c5a2c0b)

* Sequence Length(L)

## Quantum Value

* CS -> Context Switch
* Q -> Quantum Time

* We have taken a **very-very small** value of **Quantum Time(Q)** and in that process the **context switch time(CS)** is **very very bigger/greater** than **Quantum Time(Q)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e32e4d39-4e2f-4ad0-a6cc-ce68cd3ce271)

> The CPU is taking very little time for running the process. The **context switch time** is **way bigger**.

> **Context switch(CS)** is having way more times and  **context switch(CS)** is **way bigger** than **Quantum Time(Q)** then the **CPU efficiency** is approximately **equal to Phi**, **Phi** means **almost equal to zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a523c46f-4e97-40ba-bd49-2faad6c0ac6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d5a40ff-376c-4008-9565-19c07575eef4)

> It is because cpu spends **max time** in **context switch**.



![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fed9701-33fb-4461-9d40-7593fdfe983d)

* In case the **Quantum time(Q)** is taken as **very-very large** then whatever **cpu scheduling** algo we will use, it will act as **FCFS** algo, no matter what.

> If the **Quantum time(Q)** was set to **Q = 15**, then it will be **very-very large** than the **burst times** of the processes, so in the **below table** it will act as **FCFS** algo.

> Which means the **Round Robin** algo will be **degraded** to **FCFS** algo.

> All of the **processes** will be run **at once** and **completed/finished**. No need of **preemption**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d873454c-a2ff-481b-ba21-d20f2730f6c8)

* No need of **preemption** because the **Quantum time(Q)** is **very-very large** than the **burst times** of the processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab0ba3f7-aa51-4cb2-9cbc-3616e8da6dc4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d99683d-877c-493f-a25b-755cffdbbcd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d259c1c7-ab06-45d0-abd0-8a8bf3253904)

* Because we don't want the **round robin** algo to behave as **FCFS** algo.
* As  **round robin** algo is **better** than **FCFS** algo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c5b930f7-adc6-414b-985e-2c6a48b4bfab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45566ca1-662a-43f0-be18-c5955e57933e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c74ead7-ae97-4bd2-8aaf-30bfd6d66435)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ab214bb-7dff-4be6-bf80-d63ce8a9ad6f)

* When the **Quantum(Q)** is **smaller**, we are getting **response faster or faster responses** from the **same** processes.

> We are able to see **faster responses** from the **processes**.

* When the **Quantum(Q)** is **larger**, we are getting **response slower/delayed or slower responses** from the **same** processes.

> We are able to see **slower responses** from the **processes**.

* Interactive system -> The user thinks that he is able to **interact** with all of the processes and the CPU is giving **responses** from all the processes.
* Interactive system means we are able to do things or see things happening **parallely** which is **multi-tasking**.

* If the **Quantum(Q)** is **larger**, then we would get **quick responses** from **one of the process** and the **other process's** responses will be **delayed or takes more time**. That is a **less interactive** system.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44bdae7f-1460-4aaf-bfb2-f1b737e36e44)

* BT -> Burst Time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0085858-b1c7-4bc7-9012-005b7b69ef61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fa18490-c4ce-4ca1-80f4-d88f138b5705)

* RR -> Round Robin.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15d68231-6f32-44ec-b2f9-909f34ca7491)

* Yup.

## Doubt-Clearing_Session (8) [25th May 2023]

### DPP 2 (Lecture -> 5) Solutions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca4bda1f-cda0-4dfa-ba91-7f82b2dc2406)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/150b0137-629a-4140-bab8-824322b487aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd2b877-0c30-45c2-8b9e-eed479fc455b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ccaf15e7-3c04-4b84-b407-9d0b8e33cf49)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/962d1acc-4aba-4e6a-ab18-7dd029eb5c0c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60968a0d-e1d5-4165-b258-1d88edb28488)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfcc74f7-9cff-464e-abcf-5ab1124d1d5a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0eba6ca-913f-4893-8d6b-2366c76c2a30)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c89cfef1-8d43-43ff-8d4d-f02bba115638)

* Correct solution added. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75cc9c81-753b-4164-b51c-3844bdc8b778)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcecd51c-8610-491c-8859-f60662adfa0d)

* For **all algos**, **throughput** will be the **same** answer. As there is **no idle** period between **processes**.
* If **idle** period is there then **answer** will be **different**.

> It is because in **13** units of time, all the **processes** will be completed as the **total burst time** of all the process is **4 + 3 + 1 + 5 = 13**, which is the **scheduling length**. 

* **Scheduling length** is between **0 to 13**.
* We have **4** processes.

> So **throughput** will always be **4/13** no matter what **algo** we have used for the **given problem**. It will be always **4/13*.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42600cee-7fcb-4eb1-a9ec-0dc7115cfd3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58ed628d-389a-469a-93d5-a0bce6772226)

* There is **no idle** period in this above question also.
* Min arrival time is **0**
* Max Completion time is **19**
* **Scheduling length** is between **0 to 19**.
* We have **6** processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d933d6c-9d7e-462b-a380-abf7e614edfa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bdf3ef2-d35f-4ffe-9a89-73fa7539b16b)

* Here also **same**.
* Throughtput will be **6/19** for **all algos** as there is **no idle** period in between processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b431370-8c25-41d6-b5ed-c5fd23da829f)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34f99937-a8b2-4008-96c3-1aae24edb929)

* Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a63170ea-4418-4d48-b41d-a3c5c5a4920d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c75dd14-8de5-41dc-a3ed-abaacba02194)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/940848de-8587-4836-be37-ba5e10bd0580)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/daffba50-5c67-4b4f-a88c-13a0e5693e55)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/410ffb3f-ba54-4e25-9a02-013164ad5118)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86945548-5b4f-4d32-8197-b4975f68c793)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95c3cf90-a165-4ffe-8c60-f9b7f3e0a21f)

* SRTF method

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15d0c6c7-587b-4356-8aac-78dc5fb3daca)

### DPP 3 (Lecture -> 7) Solutions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b1040a4-d018-4957-8c20-347bbce0bbaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b13d1d7-e21f-479e-a87f-ff810fb4f17e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d464913-4bd4-41b7-b851-b27c662242eb)

* It is beause of **same** arrival time. All the process are available at **T=0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1f18204-a6f1-458b-9c71-ea9b3fea7cf2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a9ca4f9-efbb-4650-a3b3-fde398e0e42e)

* If all processes arrive together, then **SJF and SRTF** will have **same process execution**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baf5590f-0adf-4681-aa57-54fee0e8a7df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32e7dd66-34ed-4e8d-86d7-465cca872a35)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34ea08e1-3808-4466-8723-1ac4d7fa3cc1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cb308cd-68e5-4372-bd7c-52fc51603cdb)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/646f64f5-1434-4e32-a442-afd5a3c451d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fec7bf7f-0772-4d9a-975c-055c14bd6987)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5caf3c8a-29c3-4e44-898b-ac45c25a5071)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b9b4b96-f77f-4dad-88bd-eaaf3102b610)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fd4097f-52d4-4b4a-acde-765489b1e4e4)

* Correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/228322dd-e174-4d5a-b05e-901cc1ba2dd9)

* Correct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb8fcf73-fe51-4c6e-95dc-7974b40f941a)

* Correct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c5c10b9-ed77-4b25-80f5-a2eebabbf22d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2a515c2-bf90-40ae-b49a-105f2eb77b01)

* It means we want a process which has **min arrival time(AT)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/146ac9d8-ff68-43b4-8459-63bf9d6f4889)

* If the **pink circled** text is not given, then also the **answer** is **FCFS** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9de4844-c9b9-43c9-9a04-42c0f8a4d7e1)

* So, **only one** process will be there in the **ready queue** which can be **scheduled** at any time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb87b7a0-7373-4403-8c86-d2d2e0d84317)

* So the **answer** for the **above question(4)** is **all the options**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56888ff3-e5e0-4e43-98ba-6e4c1be2c0ea)

* YES. All **options/answers** are correct.
* **All algos** will behave as **non-preemptive**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9027abb1-0470-4584-a510-d703f3b34469)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e04a0596-f820-4e35-8c34-6fcf66e94040)

* If **A >= B** then it doesn't matter what is given in **point 2**. 
* All **options/answers** are correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/926c06c0-d3d3-43a8-b1bb-9d4d5ad82ac8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e56dcfea-ea7f-42f8-b5e7-b49f4c536b57)

### Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05df638f-27fa-490a-b7a6-e69da447f5f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c87fc2e-2b73-47be-a9fc-3c4e55e66b4a)

* Not compulsory

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4da7637c-341e-4810-a442-f33ae6e935bf)

* Yes possible, no problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d96f88f-3cfe-4464-838f-f68ef78ffde6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18ea5658-85c3-404b-9c4e-07e824e08005)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e41d8306-293b-464a-b228-feb6fdbc722c)

* **II and III options** are **correct**, SO **C** is the correct option.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/127ad2b4-5594-4c1e-bb2f-8b86cd24afb4)


* Uniprocessor -> Single processor, single CPU.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81a75ce1-8699-4b40-99f0-5fe5e248bb89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49156d48-e877-49c5-b437-20fc50826cef)

* 43

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a56c4331-bce1-49c0-85b7-e312605459c3)

* Not needed. Leave it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efe26d06-a875-41e9-a9d3-bca729921861)

* No sirji.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24ebdae6-25aa-4ab3-8575-e7c67828e234)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4dc0c377-fd36-4eaa-8d2f-c6a0844e328b)

* If waiting time is **more** then **priority** is **more** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a4aad91-e1b9-4ed7-b148-f2951eb2d560)

* The algo is **round-robin** and **Quantum = T = 3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f695515-8927-4f85-a3e7-41fbebcc0528)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7a81218-c3bb-465e-a2ee-c5085c8dfb8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a67bbd3-5a20-4112-b0d4-376b4df09cc5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2beb0996-c02d-4328-9287-5eea1ebe2543)

* Response time problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13e1ac9b-4125-45e7-a2f6-1717dd69225d)

* If all processes arrive together:-

1) SJF and SRTF behave **same to same**.
2) Preemptive and non-preemptive priority algo is **same to same**.

> It is because in **SRTF and preemptive priority algo** preemption occurs only when later arriving process has better criteria (priority or burst time(BT)). 

* In priority based algo -> priority is the criteria
* In SRTF -> Burst time(BT)

> The later arriving process has better criteria then **preemption may occur** otherwise **preemption** will not happen.

* If **no process** is arriving **late or later** then **preemption** will not happen.
* Because of this **above reason** only, **SRTF** will behave as **SJF** only and **preemption** algo will **behave** like **non-preemption** algo.

> The same thing happens in **priority based algo** also. In **priority based algo** also there is **no preemption**.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e4498c1-249c-4aa2-9d37-c4689d1b9f40)

* Why **preemption** happens in **round robin**?

> **Preemption** happens when the **Quantum time(Q) or time quantum** is over.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ab15890-b750-477e-98ec-8e4f667a9810)

* If all of the processes come at the **same time** in **round robin** algo then also **preemption** happens.

> If the **Quantum value** is **not greater** than the **burst time** of all the processes then **preemption** is possible in **round robin**.

* Why so many **preemption** happen in **LRTF**?

> Even if all of the processes come at the **same time** in **LRTF** or at **different times** in **LRTF**, then also **preemption** is possible in **LRTF**.

### SRTF -> Non preemptive case

1) All processes arrive together
2) Burst time(BT) of later arriving process is **greater than or equal to(>=)** the remaining time of the running process
3) Process arrive with **non-decreasing burst time**.

### Preemptive priority algo -> Non preemptive case

1) All processes arrive together
2) Priority of later arriving process is always lesser than current running process.
3) Process arrive with **decreasing** order of priority.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d93932b8-a573-4259-8ed9-f794747d2787)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/640b233f-b8a8-4e4b-b26e-3b2afd77f5aa)

> **SRTF** and **priority based algo** are **exactly same** thing only. In **priority based algo**, they have a separate **priority column**. In **SRTF**, the **priority** is **equal** to the **process's burst time**. **Lower burst time** then **highest priority**.

* **SRTF and SJF** are also **priority based algo**, where **priority proportional to (1/BT)**.
* BT-> Burst time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c3dce7e-da2f-4370-9fc4-28097b3fde6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea6c8ea8-f058-43cb-8dcd-bcd7196b78de)

* YES.

* When does the process go from **ready state** to **running state**?

> When the process is **scheduled** by a **scheduler**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c420065b-7800-4e91-a95c-ab2d7a38b4eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68695015-8196-47e7-afd3-a70e1fb18240)

* The **waiting time** we are calculating is not from **waiting or blocked state** but from **reddy state**.
* We have **assumed** that the processes have **no requirements** of **I/O**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9df4077f-672d-408c-b2b9-16df89fb03a4)

* Process -> CPU then termination
* Process -> CPU then I/O then CPU then termination
* Process -> CPU then I/O then CPU then I/O then termination

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0a3fd18-cb89-4d3d-9d8e-d8b860c4645a)

* Running -> Blocked -> Ready -> Running -> blocked -> on and on.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36ff89e8-2327-450b-8092-9e95c018c6bf)

* Consider system has enough no. of resources to carry pit IO operations for all processes in parallel. What does this mean?

> It means that if more than one process goes to the **blocked** state and starts performing their I/O operations then they will individually receive their IO devices and they will start performing their I/O operations parallely.

> No one will wait for anyone. Everyone's IO operation can happen parallely. No **deadlock** and no waiting for IO as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fa28424-5ac0-43ec-a77e-123bb8dec5cd)

* There was **only one CPU** and all of the processes were **fightining** to run on the CPU. All of the process are waiting for their chance to get the CPU. IO operation is **different**. It is a **local thing**. Everyone has their own IO operation. 
* **No process** will wait for **IO operation**. Whenever the process goes to **IO operation**, it immediately starts running.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3410772f-9e4a-4cdd-b589-f5689aa42416)

* As all **arrival time** is **same**. We will look at **smallest burst time** of processes. As it is **SJF**.

> So we will run **P1** on the cpu as it has the **smallest burst time**. As it is **non-preemptive**, so **P1** will run for **3** units of time on the cpu to completes it's **first burst time**. Now, **P1** will go for **IO** operations.

> P1 will spend **9** units of time in **blocked state**. After that it will come back to it's **ready state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88a0137a-9afd-4693-b3c7-31558f616bcf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/402b466e-04dc-4f4a-a132-dc1a428bb57a)

> We cannot schedule **P1** until it is back to it's **ready state**. At **3** units of time we have **P2, P3 and P4** and **P3** has the **smallest burst time**. So schedule **P3** now. It ran till **7** units of time. It will go for it **IO** operation now. 
> **P1** is still running. As mentioned **IO** operations can run parallely, so **P1 and P3** will parallely run their IO operations.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09ae58b8-6357-4cc8-a820-fa1435bed186)

* YES, **Needed** but not here as it is mentioned in the question they can run parallely.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94cf8db6-a847-4b43-80a0-1884f9c1a146)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1da66d5b-12a7-466b-868e-469799ed6c14)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e9fe2b4-1504-45e4-8c21-dbe09360e806)

> At **T=12**, **p2** is waiting for its **first burst time** whereas **p1 and p3** are waiting for their **2nd burst time**, they have completed their IO operations.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a479a43-0059-4978-9a5c-a871d5c42c0c)

* Whoever has **less burst time** we will schedule that process.

> As **p3** has **less burst time**, so schedule **p3**. It will run for **2** units of time and **p2** is **completely** finished.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed5820da-07ca-4da5-8962-055646bca55a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0e4f0a9-f282-4005-ba69-d60a47e8bb3d)

> As **p1** has **less burst time**, so schedule **p1**. It will run for **4** units of time and **p1** is **completely** finished.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44734820-c0f9-427d-a919-9eade88c8ad1)

> At **T=18**, **p2** is waiting for it's **first burst time** and **p4** has returned from completing it's IO operations and waiting for **second burst time**.

> As **p4** has **less burst time**, so schedule **p4**. It will run for **1** units of time and **p4** is **completely** finished.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dd45c80-622a-4db6-a556-a6390083f22a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c4f5641-7c2d-417f-ae3d-c8ffe4c125e2)

> Now finally **p2** runs. When **p2** goes for IO operations, then cpu is **idle** from **T=25 to T=29** units of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9635e56e-e015-44c1-83fd-a39db5960065)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4acdb5da-1e6c-4f52-9266-82ec72cfe7bc)

* The questions mainly asked in these are:-
* When was the **different processes** ended or **completion time**?

> Answer.

* P1 -> 18
* P2 -> 36
* P3 -> 14
* P4 -> 19

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/654b0414-6635-4cf1-8248-63bcb212c9b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e969a872-e7f3-4fe8-bb24-b836bdbb256b)

* No process directly **terminates** from **blocked state**. They usually **terminate** from **running state**. Accoding to the below chart/drawing. That's the standard.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7011235e-ddb3-474e-901a-27e905e2f6ba)

* When the process is doing it's IO operations, then the process is waiting at it's ready state for the CPU or not?

> It is in **blocked/waiting** state but it is not waiting at ready state.

> All of the questions we have **solved** previously, the waiting time we are finding is the waiting time of the process at it's ready state when the process is waiting for the cpu and not in the **blocked state**.

> If a process is in **blocked state**, then the process is not waiting for cpu.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f179e83a-afa8-4d20-951f-36d05696e28f)

> The **TAT or turn around time** for **p1** process is **18** and within that 18 unit of time, it had take **3** unit of time in it's first burst time on cpu and **4** unit of time in it's second burst time on cpu. It had run for **9** unit of time in IO but it didn't wait for that **9** unit of time. Wait in the sense, it didn't wait in **ready queue**. 
> So, **total** is **3 + 4 + 9 -> 16**. So for **16** units of time, the **p1** process was **used** in **cpu or in IO operations**.

* Waiting time of **p1** in **ready queue** -> TAT - total -> 18 - 16 -> **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3bb3d96-fd76-4997-b996-b5d0a3a6ff7f)

* Waiting time of **process** in **ready queue or ready state** -> (TAT - (summation of CPU and IO burst times)).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f630ee4-6c77-410a-8735-a67722b34c13)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/763f2f06-42bf-4f56-acec-d1c4170d452e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/999c1d20-9c0b-4eb7-ad42-47c3a8560df5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a11c59d-ed9e-4f3d-989b-1a8f4f707617)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0980bf95-dfa2-4a67-9610-82b8ad5d786c)

* What is the **CPU utilization** in the above question?

> **4** time unit when **cpu was not used**. Overal was **36** time units.

* **CPU utilization** = (36 - 4)/36 = 32/26

* What is the **CPU idle period** in the above question?

* **CPU idle period** = 4/36.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8e19ef8-b0f3-4e34-bd79-df9725b7651d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b25671d-551a-4ebb-a25c-1fd34a14a5fe)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ab3c972-4c51-482f-b9c5-b53414f8e001)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edd23212-b2cc-443e-a536-d196bfdd0bd4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7f98b30-1ef3-4fab-a44d-9c2c04a171f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87046db4-a17d-4c8e-87e8-3bbd9e47d26b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bab83585-3cb6-4a21-a5a1-d097dc77ffdb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/403232af-3ea1-48a7-ab9d-19eb61f31338)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43950431-481f-4963-9826-ef76d08a852b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5dcdbd30-179b-4112-bc32-016f01b5859a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a29227b2-35fc-4171-b88c-7272a98344dd)




## CPU_Scheduling_Algo_MLQ_MLFQ (9) [25th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/315bc473-c1e2-4698-9dce-d8978cf9be15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f358bf45-0aca-4081-9c21-c4836f758a84)

* If the process is in **blocked state** then the process is not **waiting in ready state** for cpu access. It is performing/using IO operations. After IO operations are done then it goes to **ready state** and waited for **2** unit of time then got access to cpu. It ran for **5** unit of time on the cpu. After that the process was **terminated** and went to **termination state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/38e511bc-47ad-4868-976c-68ab9855a3c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72b922bd-04f4-426a-9bb6-1b71b8cba313)

> **Waiting time** meaning for these types of questions is that the process is **waiting** in the **ready state** for getting access to the cpu.

* If the process is in **blocked state** then the process is **not in waiting state**. There is **no waiting** before the **IO operations starting**. As soon as the **first burst time** was over, the process started the **IO operations**.

* TAT -> 3 + 5 + 7 + 2 -> 17
* It **overall waiting time** -> 17 - (3 + 5 + 7) -> 17 - 15 -> **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7dc40bf-2241-4ddd-b551-f76449f5202f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aede29bf-cf03-4fb5-98d9-a45f590b675d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/918af9db-fe0c-42e4-8f34-85421c85c26e)

* If **IO operations** doesn't have any **burst times** then:-
* **Waiting time** -> (TAT - (CPU burst times)).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/475bd3bb-5027-4d31-9422-d1269598b510)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8e95b07-a85f-460b-be58-af300b6a76ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d69049b-6567-46c7-8578-8c381d3d3136)

* If we have **one process**, whose **probability and time** both are included then with that **'p' fraction of time** with that same probability is a process which performs IO operations.

* **'p' fraction of time** goes for IO operations.
* One or single process only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c4b8f72-8a1c-410d-abdf-70af3c489363)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/383a71e6-17a5-413a-a232-158e6287c285)

* CPU utilization for **1 process** -> 1 - p [1 shows 100%]
* CPU utilization for **2 process** -> 1 - (p * p) -> 1 - (p ^ 2) [IO requirement -> (p * p)]
* CPU utilization for **3 process** -> 1 - (p ^ 3)
* CPU utilization for **'n' process** -> 1 - (p ^ n)

* Remember the **formula**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cedf4561-eab1-4e49-a47f-f1f6e077dd14)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2c21e5d-5fdb-40fb-b28e-ad9aeb2fcb40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20f272c6-489f-473d-82b8-3e8d889e8dc6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba142a67-4f3c-4764-8177-e87215d4c811)

* No. of processes = 256MB/4MB = 64
* CPU utilization = 1 - ((0.15) ^ 64)

## Multi-level Queue Scheduling

* In a **single computer system**, **only one** algo can be used.
* Multiple Reddy Queue.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f2d16e3-9a3c-4c60-b9aa-22eb1c120c98)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/154dba6f-609b-49c3-b728-2eab02af3842)

> Depending on the **category or type or requirement** of process, we are **dividing** the processes into **various different queues**.

> All processes in reddy state are distributed over multiple ready queues and to run the process of each queue, a different scheduling algo is used.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3082e2a9-82e2-41ee-8944-3191256bf579)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60eff95f-e82b-4948-abcc-bb27c4312615)

* One of the ways, not the **only way**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5ccf592-3731-4624-96e3-afff649896b0)

* Different algos for every particular queue to run the various different processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0be17a66-3b08-4ff0-8c41-1674b065d85e)

1) **Fixed priority scheduling method** -> **Queues have priority**.

> Once a higher priority queue is empty then only, process of next priority queue are executed.

> A running process from lower priority queue is **preempted** when a new process arrives in higher priority queue.

* Why is the preemption happening?

> Because a process came to the **higher** priority queue.

> If a new process came to the **foreground process** queue, then **preemption** will not happen as we are applying **FCFS** in the **foreground process** queue and no **preemption** happens in **FCFS** algo.

* The **FCFS** process will also get **preempted** if a process came to the **higher** priority queue.

> The **preemption** is not happening because of **FCFS** algo but we have **multiple priority queues**, and in the **higher priority queues** a process came to it that's why **preemption** happened.

* It has **many problems**. The **main problem** is **starvation** problem.

> Processes from lower priority queue suffer from **starvation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69d27180-e0dc-4a64-8681-e686a1fd6843)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9d299bf-5a97-427b-b507-bdede9706a1c)


2) **Time Slicing** -> Don't give priority to queues.


![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4db77723-ed46-42ed-aa88-012070566b0b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a5ca115-aa51-407e-afb4-381c73d4d256)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c622bfc-5bcd-47ba-ae12-a5ebe9b2bf1c)

* **Problem of starvation** due to priority of multiple queue is **solved**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d403ba87-c025-4a51-b9b3-5483a0e26011)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd71b20b-752e-4603-b07a-be967cecbc2d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37caddc4-5a83-4e87-9f58-47e3f5b72b34)

* Then the processes in the other queues will not run or they will suffer from **starvation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2c1efdc-7692-43ce-b864-bfeffe091f7c)

* If not mentioned about **priority of queues** then we have to take **Queue 1 to have higher priority**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c784c93d-0258-49c6-ab62-211270eeb3b9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d726c723-9953-452a-ab61-51df70f7a7a4)

> As mentioned that **Queue 1** has higher priority so it will run first. It has **p1 and p2** processes. They both ran till **7** units o time. As both **Queue 1** processes are done, now **Queue 1** is **empty**. So, we can now go to **queue 2**.

> **p3** was already in queue 2, it ran for still **9** units of time because we can see that **p4** process is arriving at **T=9** time into queue 1 which has higher priority, so we have to **preempt** the process **p3**, it has **7** burst time left.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e32983d2-724c-4534-9a2d-900961d755a0)

> As p4 process has come to queue 1, it doesn't matter what algo is in queue 2, the process run from queue 2 will be **preempted** because a new process arrived at queue 1 which has **highe priority** than queue 2.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/080c0f0a-ecb1-460e-834a-2bc7449bf0c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd8d4b89-7937-4b41-8126-61246a33d870)

> So **p4** will run completely and after **p4** process is completed then only **p3** process gets a chance to run again on the cpu and completes it's remaining **7** burst time left.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8613d1f6-d91d-4881-acb7-c87f3806471a)

* Let' s say the algo used in queue 2 is **Round robin with q=5**.

> Even though **Round robin with q=5** is used in queue 2, if a **new process** comes to **queue 1** which has **higher priority** than **queue 2**, then the **p3** process will be **preempted** after **2** units of time, even though the **quantum(q) = 5**. 

* It doesn't matter what the algo is in queue 2, if a **new process** comes to **queue 1** then the currently running process from lower priority queues will be **preempted**.

* The preemption reason is because of **new process** comes to **queue 1** which has **higher priority** than **queue 2** and not the **quantum(q) = 5** time. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dce5c618-a283-47ea-a9c3-e6f1accd510e)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87e51393-6314-4de1-90bb-641aee31d74f)

* Queue 1 having **higher priority**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31aa5abc-fb82-44d0-bfcf-33741c0360de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/833b48a2-1a8d-41fd-ac77-87c171303ac8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7410730f-fc33-44e2-ac67-eb6b2d77aca3)

### Disadvantages

1) Some processes may starve for cpu if some higher priority queues are never becoming empty -> It is For **Fixed priority preemptive**.
2) It is **inflexible** in nature. Processes cannot shift between the queues.

> If a process is in Q2 then it cannot go to Q1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22c52453-e865-45b6-9870-7a4ab481a38f)

## Multi-level feedback queue scheduling

> It is same as **multi-level queue scheduling** but here processes can be **upgraded** to higher queues or **degraded** to **lower priority queues** based on **some criteria**, it is an **implementation detail**. 

> **Some criteria** will be given/mentioned in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa34e294-10a8-468b-8288-b4c7a8da5813)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22d25a97-c7b4-435b-ada8-42d32fe86cf9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc1eb294-e358-4408-af82-0466ed17a674)

* Between **multi-level queue scheduling** and **multi-level feedback queue scheduling**, which is **preemptive** and which is not?

> **Both** are **preemptive** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0a4bdfa-9a3e-48a7-849b-64fc2cf7fcac)

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed235fa9-6e09-406c-bfe0-3a905a06a381)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/158cc1ec-26aa-4268-8a16-196a464afe81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33f78e06-8bcc-4362-a80c-64899038ab15)

* In the **waiting time(wt)** of p2 process, the total was **14**, out of that **13** units of time was spend waiting in the **ready state** for cpu and **1** unit of time was spend in **blocked state** for IO operations.

* What is the **overall waiting time(wt)** of **p2** process?

> **14**.

* What is the **waiting time(wt) in reddy state** of **p2** process?

> **13**. The **IO** waiting time will be **removed**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03c365e2-ea97-495e-9a3e-4d20064736c9)

* Overall avg wt including wait for IO -> (7 + 14 + 3 + 12)/4 -> 36/4 -> 9
* Avg wt only in ready state -> (7 + 13 + 3 + 12)/4 -> 35/4 -> 8.75

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6dab87c-ef8b-43d7-91f8-0070b517414c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ebf58b5-8ac9-409e-bea5-3bae842b2d76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5dd4bfff-a4f0-4474-b1a2-802f6208c5df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ae0b041-eda3-422a-af0b-35127d4549d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a390d8a5-d62e-4bfe-9ba0-7db3f38e6d7a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03926998-0ce0-4b9f-9e19-c71d155db57c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b9cfe8a-a914-4845-8091-3c51958b5176)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31d9c45d-82dc-4f8c-8c00-121baaeab0e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76a969ec-e4e5-4bc7-a5ac-58789fe8db14)


## Process Synchronization Introduction (10) [26th May 2023]

### Process Management

1) Process -> Program under execution
2) Process implementation -> code, data, heap stack
3) Process state transition diagram
4) Scheduling

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d1cffe3-0f5d-4900-a169-b62fb339739c)

> The **interaction** happening between **MS word and printer driver** is not done **directly** but done through **OS**. 

> It is called as **inter-process communication**.

* OS does communication between two processes it is called as **inter-process communication**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6fc96cd-55f5-49fe-bb0a-39a06cb4c0f7)

* The communication is done through **OS**.

* If a process needs the **communication** or not, in that way, processes are **divided** two ways.

### Process Types

1) **Independent** -> Processes which do not require any communication with any other process.
2) **Cooperating/Coordinating/Communicating** -> 

 * Processes which require communication with other processes.
 * Can affect or can be affected by other processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70e1af4b-7202-4e0e-873f-282620f3b6f7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7cf6e5b-661b-4973-9847-2ffc9d8721cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/885364d1-3511-4320-9d34-2e9851d454e1)

* If two processes, p1 and p2, are communicating with each other, then they can **affect/impact** the **execution** of each other as well.

## Need of synchronization

* Synchronization -> When two or more communicating processes when they are running then their **total final result** after all executions are completed should be **expected**.

* Between coordinating processes to get expected results.
* It is done by **OS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60bd9bdc-4888-4271-bfc0-713138a4a388)

## Problems without synchronization

1) Inconsistency
2) Loss of data
3) Deadlock

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/951c34ae-d319-4e6c-b4f1-4d2776af9053)

1) Parallel execution of process:-

> We have more than **one CPU**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a41f99c-dc0f-44e3-9992-efe13b445c85)

* All **p1, p2 and p3** run simultaneously.

> Reddy sir at the same moment is teaching **Algo** in unacademy plus and vishvadeep sir is teaching **OS** in unacademy plus as well. This is **parallel run of two courses**.

> At the **same time**, two process are running on two different CPUs. It is called as **Parallel execution**.

* Not in **our syllabus**. As it a part of **distributed systems** and not in the **syllabus** now. [**IMPORTANT**]

2) Concurrent execution of processes:-

* One CPU

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b4845d4-c99b-46ff-9bae-ae6083d915a6)

> It is the complete base of **synchronization**, where even we take **more than one process**, it will **assume/take into consideration** that they are running **concurrently**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a46be859-d9d0-4bcb-aaa8-047efd864e14)

> Synchronization is **needed** at a **particular period of time** when the **processes** have to **meet or have to do some communication** and not all of the time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dcf3522e-2b3f-4d13-bbc3-e674713ef4c9)

> Some **select few** instructions are there, when they run and then **communication** happens.

> The rest of the instructions, are a part of the process's instructions. They do not have any **dependency** on any other process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91b7634a-3c3a-4e15-8b13-c622e8e31dbf)

> A part of the process, where instructions are getting executed and where the **communication** between process happens. It is called as **critical section** of the proces.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d74f2ce1-4527-4230-9ca5-cc4ee3e52967)

## Critical Section

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d42ea01f-909f-404f-9c1b-9b9ec52bce87)

> It is called as **critical section** because this needs **synchronization**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ccf7762-9bd6-4407-8ff9-044a5a283fde)

* There is a problem with **shared variables**. It is called as **Race condition**.

## Race condition

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/120ee0ea-d557-4664-9334-87a4e292aab6)

> The final race result will be **dependent** on the **sequence** in which the processes had reached the **finish line**.

> The execution sequence of the processes and **dependent** on that the result comes out as **different-different**. Then it is called as **Race condition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5daf0faa-4abf-4177-93b5-80d008403584)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cea7753d-e92f-42ed-93c0-19230a9b4306)

* Is there some **common resource** between p1 and p2 process?

> YES. 'x' variable.

> As we have some **common resource** then **synchronization** should happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0327276b-e9d9-4dc8-9897-a99b0c4a79f3)

* There is no changes in the 'x' variable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56007c40-e09d-4885-8971-d31df296446d)

* R1 =  R1 + 3 = 8

> After these there are **two** possibilities that could happen.

* In **one** of the possibilities that **p1 finishes and then p2 finishes**. In that the **final value** of **x = 10**.
* In the **other** possibility that **p2 finishes and then p1 finishes**. In that the **final value** of **x = 8**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f2b3c65-aec3-496a-b391-231d2a560b51)

* The **final value** of **x** is **different** in the **two** possibilities.
* This is called as **Race condition**.
* **Race condition** means in which **sequence** the processes are finally **finished/completed**. If the **final result of execution** is **dependent** on that then **Race condition** is present.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/922a0591-6376-4b5f-9360-550201704f2c)

* Yes **not desirable or un-expected** situation of results. The **results** which we don't want.
* It is because of **preemption, concurrent run, common resources('x' here)**.
* If p1 executed on 'x' and p2 executed on 'y' then there would have been **no problem**. If **no common resource or common variable** then it didn't matter.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/049d7c08-d26a-4ea9-99b3-c0c4e07af2f4)

* Yes, because of **many factors/problems** then this **problem** occured.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57058a11-e547-49de-a9a8-c116bf4ca88e)

* Some typical question asked:-

1) Different-different values of 'x' come as the final result?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a46917d4-5884-477c-9152-23b1e935b2b3)

* If p1 runs completely and then p2 runs completely, then **x =13**.
* If we do **reverse** which is p2 runs completely and then p1 runs completely we will still get **x = 13** as the final value of **x**.

> NO **difference** in this **case**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22424e0d-d53d-4093-a400-975e48cb432e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56ea3e94-e8a1-4b2f-a45f-0bb26471bb74)

* Possible values of **X** -> 9, 7, 14, 5
* So we have **4** possible values of **X**.

> We have to **run the processes**, we have no idea how many  **instructions** out of all **three instructions**  is going to be **executed/run**. They can be **executed/run** anytime.

> Any process can be **scheduled, arrive and preempted after any no. of instructions** at any time. We have no idea which will happen, so we have to take **all possibilities** into **account**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1779e5ba-9624-40ce-b1a1-fecebb5e7d76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2485dbc8-f696-4b77-b737-793f97c2ff31)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c260f91a-eaa8-4a99-beb3-62d785b2e50f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7e2d41b-79ee-4ca2-8642-db03db152759)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9482c422-bf98-4c5f-9990-aa6394372cd1)

> Different value of **x** came because the processes that were **executed** and they had **3 instructions** each and these **3 instructions** can be **executed** in **any different/various orders**.

> We have seen all of the **different/various orders** possible where the **instructions** will run on the cpu and we will get **various/different** final values of **x**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4467e2d3-b09e-4d73-9c59-bf05e2c417ff)

* NOPE, NO.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33267ee6-0c89-409f-a748-a1dc9ccfd8cd)

* Will be given, we have to assume.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59b0965f-cf9c-4e48-9a07-f4ef7a589152)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17729538-6eb0-4ba5-8604-db185e9e0115)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c456ef9b-d2d8-4096-b6eb-1a518971f433)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77a013b0-94a9-441b-a75e-f57bb8a5dc61)

* Run them **individually or one-one** once.
* Run them **concurrently** once.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c00cd307-dad7-40cb-ae69-26a9a8c8b653)

* The **highlighted** statement means that process A and process B statements can run in **any order** and in **concurrent** manner.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6284e8e3-97b9-4d2a-aefa-18ed9a9ae5bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b569b51-76d2-4572-810f-c9d59f7d0432)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b160b450-739a-4544-8a3c-c8fd779b8d98)

> P1 took 'x' and completed all it's instructions. We got **x=8** now. Now, p2 and p3 both read the value of **x=8** concurrently. We got **x=6** from p2 and **x=10** from p3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9a67b2d-8107-40a7-a12a-79d19decd611)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e98c0e5-d49e-403e-ae26-ff05ef4bc3ed)

> P2 took 'x' and completed all it's instructions. We got **x=14** now. Now, p1 and p3 both read the value of **x=14** concurrently.  We got **x=7** from p1 and **x=16** from p3. **x=7** is already recorded before, we are not writing it again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0eaf8ac8-3f0e-47eb-a71b-c415cf814240)

> P3 took 'x' and completed all it's instructions. We got **x=18** now. Now, p1 and p2 both read the value of **x=18** concurrently. We got **x=9** from p1 and **x=16** from p2. **x=9 and x=16** are already recorded before, we are not writing it again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c59f3aee-3476-4898-818f-27ded8e22134)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69bc9339-dacf-41f2-923e-3ecf2d381bba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c130884-ef6c-4eff-b80c-803ca4f52d0f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8875b870-1ce4-4bf4-8257-a63d1871b70a)

* We have to see **distinct** values of **x** possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a677ec6e-36fe-4557-899c-7bd0842f9799)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b8da352-32c8-490f-a4d0-3eeb7c91d85c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/811ccd66-6600-434a-a0af-4366fefbb16f)

* No formula possible here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fad6d20-3f73-4555-96b0-0174d0b3a8c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60e2f82d-f77b-4fa1-b3c6-0d4f3ff940ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ca668c6-702b-4e4b-a5f0-63aa39b0d092)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9315ff6c-7931-42e1-8096-b363fc2a6da4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3601b301-a3c6-48e7-8b9c-13607d496bbe)

* This is for **max possible value of x**.

> P1 and P3 took **x=16**. P1 completed all it's instructions and got **x= 16/2 = 8**, Now, p3 completed all it's instructions and got **x= 16 + 8 = 24**. Now P2 took the value of **x=24**. Now, P2 completed all it's instructions and got **x= 24 * 4 = 96**.

* So the **max possible value** of **x** -> **96**.

> We isolated the **value of p1** so that it doesn't impact the value of **P2 and P3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82501aca-a0c0-4fc5-8e37-ee416dabcce8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dd76d1c-ba18-4a83-a9e6-04ab663828c5)

* **Plus then multiply** to get the **max value**.
* We wanted the **impact** of the **plus then multiplication** to get the **max value**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79c5126c-1eb3-4218-a9dc-99c0c4c60594)

* This is for **min possible value of x**.

> First **p1, p2 and p3** all take the value of **x=16**. p3 runs completely and we got **x= (16+8) = 24**. Now, p2 runs completely and we got **x= (16 * 4) = 64**. Finally, p2 process runs and we had already stored the value of **x = 16** in the process. p1 runs completely and we got **x= (16 * 2) = 8**.

* So the **min possible value** of **x** -> **8**.
* We want the **impact** of the **division** now.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f46b2ee-db12-4640-8fff-6d9dc4bdc5d7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8e6c63a-0194-479d-987f-a8647c744c82)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a129b68-83c0-4e2a-9a34-82c47fe7187b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62f6f61a-2900-440a-a6dc-751dc5f3afdd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff88ab23-b670-4f8b-8048-5d8632aca275)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92b6f91e-924e-4bd7-a3dd-e994f14ff9c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b60efd69-8cf2-469c-a86a-9ecc86f5bce5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d032837-fd3d-4514-b3ad-be9cd169a039)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a050b19-0bea-46bb-b343-b89e48eefb56)


## Doubt-clearing-session (11) [27th May 2023]

### Quiz- 1  Solutions

#### Q1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/075a99e3-4bf4-488e-8563-716528006f11)

 * IO bound process -> The process which spends **more time** on **IO** devices.
 * CPU bound process -> The process which spends or requires **more time** on **CPU** than **IO** devices.

> If an **IO bound process** is scheduled to the **CPU** from it's ready state, then it will spend **less time** on CPU. Then for **IO** operations it will go to **blocked/waiting** state. Now we will schedule the **CPU bound process** to the CPU. It will run for a **long time** and the **IO bound process** will also run for a **long time** in it's **blocked/waiting** state.

> It is better **cpu utilization** if we send the **IO bound process** first and then the **CPU bound process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3181a801-bdad-41bb-96f8-7d3dd8f981a8)

#### Q2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4b6181c-3d09-4b96-be25-4661c1b7adc5)

>  "The scheduling happens only on arrival of a new process or on completion of a running process. Each scheduling overhead takes 0.1ms. Further note that scheduling is required only when at least one process is there in ready queue".

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed05c73d-f9d4-45ea-af62-6877f24d664f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/328ed8f4-76f3-4a5b-abd1-af54df6e697a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3787a163-dc2a-445f-bf29-9a01edb7d50f)

> When **A** arrived we added **0.1**.

> When **B** arrived we added **0.1**.

> When **C** arrived we added **0.1**.

> Even though **context switch** didn't happen but **C** arrived and we are continuing with **B** process.

> When **D** arrived we added **0.1**.

> **D** ran for **1** unit of time and **completed**. So **D** is terminated and we need **0.1** scheduling overhead for completion of a running process which is **D**. 

> **B** ran for **2** unit of time and **completed** as no new process are coming. So **B** is terminated and we need **0.1** scheduling overhead for completion of a running process which is **B**. 

> **C** ran for **3** unit of time and **completed** as no new process are coming. So **C** is terminated and we need **0.1** scheduling overhead for completion of a running process which is **C**. 

> **A** ran for **5** unit of time and **completed** as no new process are coming. So **A** is terminated and we don't need **0.1** scheduling overhead as the **ready queue** is **empty**, for completion of a running process which is **A**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6a05a6a-f0ba-4af7-b38c-4fa5d15b8619)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89953fa6-e5e8-4b54-aa00-c28ec063c316)

* Scheduling Overhead -> (7 * 0.1) -> 0.7
* Total time required -> 14 + 0.7 -> 14.7 [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efb15442-2543-4ef8-bce0-49747f1b9c49)

* Scheduler will also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ec2a91f-6723-4a6d-9c30-d6534072d68d)

* NOPE, no short-cuts.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/473d8dff-5591-47d8-a70c-e07c3493d813)

* A's arrival time.  **Arrival of a new process**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ad58df0-d66a-434c-91e2-8ae320767ecb)

* YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c42bed52-ab1e-43d6-b231-ae28b438c3ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f1354c1-bd88-4ae0-8fa8-3758d033651c)

* YES.

#### Q3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68ecfde3-77f6-49ac-85f7-9fd07e4e6bbb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ca4b9b5-c5dc-4a1c-a47f-05a0d1c85f43)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a7b068a-8690-4835-9f79-cc6f95197033)

#### Q4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5cdb6b9-794b-4090-8256-ff3aacf73bb3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc8401c5-5843-4cb2-9fab-b9d874f44054)

#### Q5

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56c69ca4-bee9-45c1-980f-73bf01d2e81c)

A) Should be selected
B) Not selected [True Statement]
C) Should be selected
D) Not selected [True Statement]

* **A and C** should be the **correct options**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faa4b3bf-767a-4d49-a8ee-30f5748af970)

* These on the **Left side**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb389caf-ae5a-453d-97f3-12c183c1fc17)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea79d033-a1a3-4ef1-8904-526e85404587)

* multiprogramming doesn't imply that it is **preemptive or non-preemptive**. It can be **preemptive** and **it can be non-preemptive**.

#### Q6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb6e1c66-a2d9-46f4-b8f3-257febc4aa1e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8474d492-a1e7-4712-ad28-3cbafe0381c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23621dc4-da5f-4b81-b3c3-2603463d8882)

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11369c36-246d-424c-b25e-0376bab927de)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a5157a6-29aa-4dd2-b90b-bb2bb715927d)

* YES. **(1-p)** is the **amount of time** one process is running on the CPU.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f22b2449-6829-4d8e-bb55-d39f2bf919b6)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ee85fa7-1ce1-4997-88a5-cea955927136)

* We have **10** inputs from **1 to 10**.
* We have **two** instances of **Uf and Ug** which we can **use** parallely.

> So we can run **two** inputs parallely as we have **two** instances of **Uf and Ug**

> For **x1 and x2**, **G** took **3** secs and **F** took **3 + 5 -> 8** secs. It means that we got the answers of **x1 and x2** after **8 secs** only. **F** took **5** secs only. 

> We have to implement **F(G(Xi))**, which means we have to run **G** first then **F** will run. That's why the total is **8 secs**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/053eaf57-3921-4827-a3ed-37106873dd92)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88e128a1-0ac4-4cc3-bfbc-249bbf163edd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29a95287-92ef-49b5-99ba-af4c95865b4e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0f0fe2b-4fbb-4767-bf4b-7f6b3dfc2794)

* Answer -> **28**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c9b7a46-8d2b-4e07-a85a-f0bcd01bff82)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/065cb1bb-376d-4222-99f4-f0a8e4d25a19)

* Wrong question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7952489-9a4e-4888-b0a2-554603b96857)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d88e07f-e4e0-4356-a3c5-4b652dcf3a2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f547a1e6-8833-4315-9baf-b70cca2ff9c2)

* Leave it. Half asked question. more details needed.
* **b** programming is not in the syllabus also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc7f653d-f44d-494a-a0a8-9ca57e37be92)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb07662f-ac26-427e-b203-744cfec0e853)

* Get **50%** marks in quiz. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dabcd9f-7532-46f8-8661-2063e338da34)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ebe7592-1a19-498f-8662-ffcb7d908ed0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34559e17-415a-4b5e-afd8-96c5b5dabdca)


### DPP Discussion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04500b9a-b82d-434c-911b-770b60f91627)

* Discussed in class.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3efffd2-4ceb-4020-9173-f2b14af9dce8)

* Discussed in class.

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ca05423-bd45-42a6-8280-e78d11636087)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94cf5260-a2b7-45d8-9f70-e4141df69f60)

* We can maintain the **ready queue** in **sorted burst time**. One of the **implementations**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1865bdaa-802a-4994-9ed3-bfa02476956e)

* **P4** will go for **execution** at **T=12** time unit.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f0cabac-1bcf-4955-9bec-27fcdd361a3d)

> In **both** the case at **T=15** unit of time, the processes that are already present at the **ready queue** will get the **priority**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1e4e6fa-ae1d-44be-95ea-a94b6bbcfff5)

* Why can't we use **Arrival time(AT)** here?

> We would have taken **Arrival time(AT)** into consideration if the **processes** where in the **ready state** from the **starting** only until now.

> But the **case** is **different** here, **one of the processes** have gone for the **IO** operations and after completion of the **IO** operations, came back to the **ready state**

> In this case, we will see which process was there in the **ready state** for the **longest** from the **starting**. We will give **priority** to that process.

> We have **p1, p2 and p3** in the **ready queue**. As **p3** was there in the **ready state** from the starting we would give **priority** to p3 over **p1 and p2** as they have gone for their  **IO** operations and came back to ready state.

> If two processes having **equal burst time** then you need to take the process which **entered** first in the **ready queue**. [This should have been mentioned in the question]


> P1 and P2 had gone for IO operations they will come to the ready state and join the ready queue at the back only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bdd2fb6-eab7-4de6-87d5-4ece38b40696)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74dec15d-9aab-4510-8a02-075cf9a99769)

* Done in class

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/642895c3-ef8f-4f4f-b106-649bfd2bc32a)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca10a303-bac0-4af8-adc3-9cf2a98535b3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ac36e8e-1fdc-46f2-b2e5-3e04ac95ae0e)

* Multiple ways possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e1e6f25-2d54-4541-9cf5-457d97af94cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef0dce45-09c3-46df-9d53-c206c3ddfc6f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdeb2ffa-e859-49ac-b46e-8d816c5fc0b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dc50833-5431-4e39-b9cb-828fd2ff62af)

* No. of distinct values = 3
 
 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4acaba64-e2d2-4681-9a71-7997b2e77baa)

* **80** is the answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f1498dc-d0a7-42e1-8ed4-819e05746752)

* Rest is called as the **remainder section**.
* Synchronization is only **required** at the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab386d31-44f4-4f48-b649-371fbcc383e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/879b82aa-bf1d-4246-8d09-e148fbe450b7)

> One process which has **read** the **shared variable(B)** and the **execution** of the process is **not finished**. The process has only **read** the **shared variable(B)**. The process is **executing** it's **critical section** which is **reading** the **shared variable(B)** and it has **not finished** running it's **critical section**.

* Then, **preemption** is possible?

> **YES**, **preemption** is possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8132027e-42bc-47d9-8691-4bc3900d9a1a)

* Yes. Right. **Preemption** can occur at any time but **preemption** will happen after **one instruction** is **executed** atleast. It cannot happen in the **middle** of **running one instruction**. It is the rule of **COA**.

* We have to give a **solution** to the **critical section**. We have to provide **synchronization** at the **critical section**.

### Critical Section Problems

> Problems due to execution of **critical section**.

> The **solution** provided is called as the **critical Section solution**.

### Solution of critical section problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf61e5c5-de6b-4c14-81f1-d95b5a4888c6)

* Next Class.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75463e0f-379f-4070-bfe5-358af40e51cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca33480e-ac34-4268-8411-583c344ab5ce)

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6bf4fae1-a838-411c-b6ae-b6c5ac23120e)

* Implicit declaration of function -> Return Type is **int**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee5891a3-0042-4e28-90e3-7a11654e36b8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d1771a9-a61d-4312-984f-b950ae45bd80)

* Option **D**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83cdc4ce-ca5a-41c9-81fe-26960e8fa371)

* Return type of **foo()** will be taken as **int** because of **implicit** definition.
* When **double** type value will be returned from the **bottom**, it will give **compilation error**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d25b6bf6-e5c5-40a0-b47a-db6ba071db37)

* Yes.
 
 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe70d7ca-ef66-4cb5-b913-e414f62aa89c)

* We have **unsigned int** so **option d** is gone. 

> **Option a** is **not correct** because we have **3** multiplication and **n** value is **large** as mentioned in the **question**. If the **3** multiplications give a **very big/large** value which is more than **unsigned int** value or out of range of **unsigned int** then we might not get the correct answer.

> **Option a** is not likely correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d501e800-b14e-4dff-8af1-96da976b57e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1395478a-4928-4904-b509-a8b6bc929f56)

> For **option c**, we are multiplying **n * (n-1)** then dividing by 3. If the **multiplication** gives an **even** no. then **division** will not be **accurate**. It can happen in the **next case** also when dividing by 2.

> **Option c** not giving likely correct answer.


* (n * (n-1) * (n-2)) -> It is **3** consecutive values. Among them, one of them is **divisible by 3**, one is **divisible by 2**.

> So the **answer** will be **divisible by 2 and 3**.

* So **option b** is **correct**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/590aa7dd-19e9-4786-94c6-08b73801b316)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8f0fb5e-23f0-4d2d-bb9e-a83b0245d684)

* **option 'b'** is **correct**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea096be6-5398-4c73-90fc-e813b41c4f8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6263e36a-1496-44ac-836e-4815d75d0536)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8057e200-0d91-4a64-8398-a0194c8a0335)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88c4ae1b-e9b3-44a2-b599-4d1354621de0)

* Leave it. not needed.






































# DPPs

## DPP 1 (Lecture -> 4)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/130e5b4d-1645-487a-a9cd-89e0cdf3692e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6adcd27c-1715-4534-9fe4-7b435491eb07)

* **D** option.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f448e639-75e1-49af-b1ef-e092988eed58)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/268cadc9-6650-4322-9f8e-941a02a2f551)

* Fatal Error -> Suicide of process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bfad7b0-bb48-437e-953f-005137f820d9)

* NO.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7c86339-f9ca-47a4-8037-e0e26bb30c70)

* Could be **fatal error** or **killed by another process**, either is possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0536535f-38a4-4c1c-aee6-caf968322b90)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a44da0f2-bcd6-4e65-b015-8d8ec74fbf06)

* Degree of multi-programming -> **n**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5378926-d4ff-47e3-a560-da56f654f644)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/141b790e-46f0-472a-837f-99364dccf19c)

* Max -> 'm' [No. of cpus available as **one** cpu can only run **one** process at a time]
* Min -> zero(0) [If all of the processes goes to the **blocked** state, then running states is zero(0)] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5a7dd1c-9c91-4b40-8738-65d511be6133)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e264d705-8e10-4b43-abbf-e91c20ff3215)

* True.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b461e55-50ec-4905-aee8-1dd7cf90e177)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94e9719d-0912-48c7-9ebb-18c5aa5b2655)

* n > m, should be in all **practical** scenarios. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/649244ff-2609-4be1-8d6c-6db087399009)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4b522c4-9fe2-4757-b33d-564de422f5c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/50d37904-1756-4010-9edc-0b91a3f67418)

* CPU is **idle**. All of the **two** processes went for **I/O** operations. So, the **no. of processes** in CPU is **zero(0)**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ad1e134-cbf7-4001-a09b-e4ed8c481aef)

* OS not needed to be **preempted**. OS work is for **preemption** and not get **preempted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47dd6d95-ff26-4ba6-8c23-5931d7e0d257)

* Multi-core CPU.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee8b15aa-9ae9-4cd4-b4f5-9b5e078f8861)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b522ae3e-0f67-42bf-b177-900efa65b003)

* Could be possible, but not necessary that **deadlock** will happen. Can't say that.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/157558ad-556b-499f-bf35-0733dbb9bf6a)

* Multi core is **better**. Less cost.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c1a09d2-900f-4814-9107-1f20fa62cbe1)

* n > m.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf1a180d-6450-41b9-abb0-72b9934f0978)

* None of them are in **PCB**. These are **parts** of the **process**. The **content** of the **process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d05c173-ac18-4533-85ef-607062e5c812)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86ee6e38-fbba-43d8-8ce6-9604d5fd6206)

* D

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a023935a-e076-4661-aca7-687236087d4d)

* C

## DPP 2 (Lecture -> 5)

* Solved in **Lecture 8**.
* Link -> https://unacademy.com/class/doubt-clearing-session/6MF4H8JN

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c659b1a0-e29f-455d-bf3f-9b9c49f66d8a)

* True.
* After waiting for CPU initially, process runs and completes. Hence afterwards no any waiting of process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba5537ae-68e6-40db-ad10-9eaa7e68a8a9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e418045-e9bd-4e89-81d8-58221e0c0b79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/696b9eac-9400-455a-a13e-88203df860b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/375aebc9-71c5-48ca-8ae4-871d59300abb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8001acf1-d41b-4da9-9770-d173ff59bf09)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e90a29c1-8b7a-49b4-bdf2-aade768e722d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f939332-32ad-4fa7-ac63-e155cfae7829)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4720b33-2b41-49a0-adbd-5488278bdced)

* Question **7** is half completed. Some doubts there.

## DPP 3 (Lecture -> 7)

* Solved in **Lecture -> 8**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f5122d0-9389-4c9c-a06a-f0464342e25d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/505b3cfb-aadb-45a2-b1b7-04607865bb51)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c65fe8c8-c43e-4fcc-9b7d-7f5dd4b57069)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e74054fe-8ede-45e1-91d7-9a7d13582aea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9eddfa65-4d41-4998-8798-d23f72cebe79)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9228cbf3-f109-471d-a2e8-8e58949f96f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3cb52824-045b-4941-ab47-8b4ec9ef3a0a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d1a76b9-4944-4be4-b2cf-764f2665c304)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8f75a14-2017-4bef-9f23-8095251851df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5cc29142-4e59-4773-bb72-59cd27ec2df2)


# Quizzes

* Quiz 1 -> https://unacademy.com/quiz/quiz-i/KEUEBL97D4/attempts/SP_96IBDFZMKYZUNXERM
* Solved in (Lecture-11)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2ffbbec-68cd-46b8-becb-ca6d924bb220)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0059846b-0755-4fc1-a94c-30e69b798d8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86414aa5-f517-4433-acb1-a870503fa49c)










