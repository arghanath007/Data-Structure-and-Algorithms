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
* Cpu-scheduling-pyq-discussion-part-I -> https://unacademy.com/class/cpu-scheduling-pyq-discussion-part-i/T8IWFUH3
* cpu-scheduling-pyq-discussion-part-II -> https://unacademy.com/class/cpu-scheduling-pyq-discussion-part-ii/K4Y81I1H
* cpu-scheduling-synchronization-pyq-discussion-part-i -> https://unacademy.com/class/cpu-scheduling-synchronization-pyq-discussion-part-i/RLE53AC9
* synchronization-deadlock-pyq-discussion-part-i -> https://unacademy.com/class/synchronization-deadlock-pyq-discussion-part-i/6WEIBHH0



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

### Quiz-1  Solutions

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

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7672956-a56c-4284-9d19-d9ebaf1ddd53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de3e48ab-8524-4a2a-a56e-37ddf516aa2f)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9daebb59-ea28-4d66-8d3b-155cedee35a6)


## Two process solution of critical section (12) [27th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c79d6d5d-4a96-4ace-bc5f-25a6687efff9)

* In **critical section** only, **communication** is needed.
* In **critical section** only, **synchronization** is needed.

> If in the **critical section** part, **synchronization** is provided then it is called as the **critical section problem's solution**.

* **critical section problem's solution** should have fullfilled all **3** requirements to make it **perfect**.

> If one of the requirements is not fullfilled then the **critical section problem's solution** is not the **perfect** solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd8b9349-270f-46d7-9820-8c4303051b31)

* The requirements.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/787b9538-07fe-494e-aacc-b478a3a7584a)

* Critical section access.

## Critical section problem's solution

1) Mutual exclusion
2) Progress
3) Bounded Waiting

## 1. Mutual Exclusion

* Mutual Exclusion -> It means **shared variable or shared resource** at a time can be **accessed** by **one process** only.

> If one process is executing critical section, then other process should not be allowed to enter and execute the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33cd6796-9b99-4c17-844b-794a55b797a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/760188b8-0504-47bc-8a0d-e03140017b30)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e16f2646-dac7-4240-8a19-6b267ee46f15)

* Mutual Exclusion example

> P1 is running on the cpu and performing it's **critical section**. We have preempted p1 and given p2 process to run on the cpu but p2 came to run on the cpu but we are stopping p2 from **executing** those **instructions** which belong to the **critical section**.

> We are stopping p2 from executing the **instructions** that are belonging to the **critical section** because **p1** process is at the **critical section**.

* This is the **motive** of **Mutual Exclusion**.

> This is going to happen to p2 when p1 is already at the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebacb51d-b568-4849-a918-9d106c7ec43e)

> If two process read the **same or common resource(x)** then there will be a lot of problems. There is **race condition** and many more. Inconsistent data comes in the system.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fa41db4-ee50-4f66-9247-8ab98e183c85)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da1391d2-7047-430b-ab2e-27971070e90a)


## 2. Progress

> If no process is at the **critical section** and **one process** puts forward it's wishes to go to the **critical section** then that process should be allowed to go to the **critical section**.

> Progress is need in the solution.

* If no any process is in critical section and a process wants to enter into critical section, then the process should be allowed to enter the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01978e54-3ea3-4ee5-81b6-ba03cbc6bd21)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26972f79-920e-431f-90e5-d1dd7b0c140e)

* The one who wants too.

> The process which wants to enter the critical section then that process is only allowed to enter the critical section.

> Not everyone or every process is sent to the critical section. The process which wants to enter the critical section they are sent to the critical section.

* The discussion is **mainly** around **2 process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0edbc0d-09e9-4b88-93d8-336a81622521)

* In a single process, multiple **critical solutions** are possible.

## 3. Bounded-waiting

* It means **fairness** which means **no or not biased**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ab0e180-c58b-40ed-b8f1-1505fc2ed7f1)

* Scheduler can only schedule at the cpu. If a process got the cpu doesn't mean that the process will get the **critical section** as well.

> The process can run on the cpu but cannot get under the **critical section** part.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a00647db-5787-4fe6-a21d-4537b3bceb6c)

> If a process is in critical section and other process is waiting for critical section then the first process should not be allowed to enter into critical state again by keeping second process waiting for critical state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1867f241-f733-4c87-94df-8f5fb1cd6a9a)

> In **Bounded waiting**, remember that if p1 process is in **critical section** and p2 process **wants or waiting** to be in critical section then only we will discuss the **bounded waiting** case.

> If **one process** is in the critical section and the other process doesn't want to go to the critical section or isn't waiting to go to the critical section then we will not discuss the **bounded waiting** case.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57f34e6c-afa4-41fa-b3d8-72c9b4761a5f)

* All **3** are needed, mandatory.

## 2-Process Solution

1) Software solution -> Solutions through code. 

* Entry section -> Ensures all 3 requirements are met. (Like a watchman)
* Critical section
* Exit section -> Announcement for critical section. It means that the **critical section is free**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/971c9abb-5fe1-43b3-9948-c8a19ea49b80)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd28deab-da2b-4fe4-8956-88284ba1346d)

* They are not part of the process. They are part of the **synchronization**, which we have **added**.
* We can put them in the **remainder** section as these are parts from where we will never access any **shared variables** like **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de171eed-8fb5-48c2-b75d-c5c64c41ade8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff366691-7547-4e63-89e9-22ff49c8c33b)

* Boolean lock= false;
* lock = false: -> It means that no any process is in critical state.
* lock = True: -> Some process in **critical section**.
* while(condition);

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/47e5189f-63fb-40a5-91dc-e5bd2ae92bea)

> No statemenets within the while loop. It will just run till the condition is **True**.

* We have to check if the solutions are **perfect** or not.

> The work of the **entry section** is to check if the **critical section** is **locked or not**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/775404c9-dd64-40d7-98b1-c5370399c681)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3965eee-de16-4a54-a2bb-476ffd901ad3)

> The while loop will run continuously till the while loops's conditions keeps on returning **True**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bb407d2-8af2-44a3-855d-a5fc26945773)

> The process will not be **stuck** in the **while** loop if the condition is **false**.

* The **lock = True** when one process enters the critical section then the process set the value of **lock = True** so that no other process can come to the critical section.

> If **lock = True**, then it will be stuck in **infinite loop**.

> If **lock = False**, then it will not be stuck in **infinite loop**.

> We know that p1 and p2 process can be preempted at any time. They can be run at any time and preempted at any time.

* Our **target** is to see if we can violate **mutual exclusion** in any case?

> If **YES**, then we can say that **mutual exclusion** doesn't hold in this particular solution.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f042c0f-9908-45a1-b654-bfce26dcf17e)

> We have to run the processes **one by one** in such a way that both the processes go to the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25705ead-eefe-4858-960c-9ee063577c09)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e342f90-7350-46b0-a859-1e92f2e67270)

> As **lock = false** and the **while loop** condition is **false** as well that why p1 can move forward from the **while loop**. Before it can set the **lock =True**, p1 was preempted.

> So we got p2 process and **lock = false** still. The **while loop** condition is **false** as well that why p2 can move forward from the **while loop**. It set **lock= True** and p2 was preempted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1daaaa8c-5ed3-4078-b7c3-d5e7f84bf998)

> Now p1 came and set **lock= True**. Now p1 goes to the **critical section**. It gets preemted. So p2 comes and it also goes for it's **critical section**.

> Both **p1 and p2** are in **critical section**.

* So, it means **no mutual exclusion** is possible. **Mutual exclusion** is gone. It is violated.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3882fabf-9f38-4531-89ed-f0f29cf77de6)

* Out of all the **instructions**, where the process will stop?

> While loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9d54f96-84dc-476a-9bad-ca3209aab773)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0215be05-2669-49aa-bc17-8ab24345d032)

> Just **before** the **lock= false** we are in the **critical section**.

> P1 is in **critical section** means that the **entry section** of p1 process have ran **successfully**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48b918a9-3e6a-4fb3-bb56-009d4aa5ef8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80e47c84-3a9d-43f3-8aab-196d9752db3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9948cff-10a0-4af9-95e1-9404aacbfbc5)

* We are doing **preemption** after **while(lock)** statement. Where the **white color arrow** is there.

> We are doing it here because it is the only statement where **one process** can get **stuck**.

> The **while loop** can be in **infinite loop** if **lock= True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6db80e85-419e-4708-a759-effeff50cf90)

* Bounded waiting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f13e1aec-a82e-4320-b7aa-73a55cd9ff31)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d4af5aa-91e7-4dca-a69c-20f784b9ddb8)

> First the p1 was sent to the cpu it ran and **lock = false** so there was no infinite loop. It reached the critical section and we preempted it.

> Now p2 goes to the cpu and now **lock = True** and it is stuck in **infinite while loop**. Till **lock = True**, p2 is stuck in the while loop.

> It means we have **waited** p2 process for critical section because p1 is in critical section already.

> Now we are trying to preempt p2 and give another chance to p1. p1 leave the critical section and it immediately tries to go back into the critical section again.

* We are checking if p1 can go to the critical section again or not? Why?

> It is the condition of **bounded waiting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d97e30d-37af-4b60-85b3-73ae5c6e2e28)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46b2092b-48b9-48bc-bd6d-317dfe1fae9c)

> P2 was stuck in the infinite loop. After sometime it was preempted. P1 got cpu again and it completely ran the critical section and set **lock =false**. P1 ran the **remainder section**. As it was **while(True)** we went back to **while(lock)** condition. 

> As, **lock =false**, we move forward and set **lock =True**. Now p1 is at the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2cbc8ae-4ed2-4214-b6cb-b776dd532e11)

* P1 was at critical section, it left and came back again to the critical section but p2 was **still waiting**. 
* So it is **not bounded waiting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/306f3a66-e27a-4b2d-8bd8-9a9588262b4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab90b7fd-896a-4ff6-9a3e-cad709eb3ad1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52eaffed-219b-40b9-9732-04572edc6a9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0abd7d72-07ee-47a4-a545-ddc9553ba8b6)


## 2-Process Solution Flow with **Example**. [**VERY VERY IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3e3824d-b081-4918-94ea-f943e865ba01)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc7d2bc1-e8de-4883-9cbe-a67a7fd79717)

> Entry and exit section are **same to same** for **p1 and p2**.

> We are checking if the **solution** is **perfect** or not.

* At a time only one process can enter the **critical section**.

* Engineer's mind -> We will try to prove that **mutual exclusion** is not happening or **mutual exclusion** is failing.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f915bdd-803f-4a1d-8ab1-56e6db18319b)

* Boolean lock= false; -> **Lock** checks if the **critical section** is **locked** or not.
* lock = false: -> It means that no any process is in critical state.
* lock = True: -> Some process in **critical section**.
* while(condition);

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d307c36c-c513-4a8c-9a75-42f6886e53db)

> No statemenets within the while loop. It will just run till the condition is **True**.

> When **lock =True** then the **process** will be stuck in the **while** loop.

> When **lock =False** then the **process** will not be stuck in the **while** loop and it will go forward.

> If a process had entered the **critical section** then it has set the **lock =True** then another process trying to enter the **critical section** will be stuck at the **while(lock);** statement as **lock =True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d59851f-e0f2-4a85-965e-f54f4357ca8d)

> Before entering the **critical section**, the process has set the lock as **lock =True**. So, **lock =True** when the process had entered the **critical section**.

> When leaving the **critical section**, the process at the **exit section** is setting the lock as **lock =False**. So that other processes can enter the **critical section**.

> We know that p1 and p2 can be **run** at any time and they can be **preempted** at any time.

* The goal is to try and violate **mutual exclusion**, if possible then in this example **mutual exclusion** is not possible or not holding.

> We are trying to run the process/instructions in **one by one** manner as we have **one cpu** only, such that **both** process enter into the **critical section** at the **same time** which violates **mutual exclusion**. 

### 1. Mutual Exclusion

> We ran p1 process and **lock = False** initially. P1 will go forward from while loop. But p1 was **preempted** before it could run the next statement which is **lock=True**. 

> P2 process ran and **lock = False** still. P2 will go forward from while loop. It ran **lock=True** statement and after that got preempted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1f9ab40-6f32-4161-a72a-4618a50a3706)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2f6fad5-5bf6-487a-bc02-ea53910db47d)

> Now p1 process is ran and it ran the **lock=True** statement. Now P1 is at the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa782cbd-4c5e-46a3-acaf-7db18b25cbe9)

> After sometime P1 is preempted, then p2 will be at the **critical section**.

* Both, p1 and p2 are at the **critical section** at the **same time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a50812f-3c96-4501-ac83-f434fa6995c5)

* It means that **mutual exclusion** is **not possible**. It is gone, it is **violated**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/baa69d29-b81b-459d-8a73-404634a51112)

* If a situation/problem/questions comes then what we will do?

> We will check at the **entry point**, some statement is there where the **process** can stop. The process will **wait**.

> In the above example the **statement** where the process can **stop/wait** is the **while loop** statement.

> The **trick is that**, whatever statement is there at the **entry point** where the **process** can **stop/wait**. We will try and run one process still that **statement**, run the statement as well. Then we  will preempt that process. We will try and bring the next process still that **statement** run the statement as well.

> The statement in the **example** is the while loop and we will preempt the process after while loop is run. 

> We will go to the next process and run it still the while loop is ran and we will also run the **next statement** which is **lock =True** and after that preempt the process.

> Now P1 will run **lock =True** statement and enter the **critical section**. After sometime p1 get preemted.

> Now P2 is ran and it is also at the **critical section**.

* Both p1 and p2 are at the **critical section** at the **same time**, which means **mutual exclusion** is not possible and violated.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dae4c21d-8193-41e2-a1b7-7e98f1c17494)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/719c7894-de0b-48da-af35-36ed3084f508)

* Yup. Do this in the code.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bed55f0-68b3-41be-afe3-1492dc917605)

* That's the main motive here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d10d54f0-b9f6-49be-91c0-881ac585f668)

* Yes

* Why was mutual exclusion violated here?

> One process read the **while(lock);** condition and lock was set to **lock = false**. and when it went to ran the next statement which is **lock = True** before that the process was **preempted**.

* Preemption happened between the **two** entry section statements. That's why mutual exclusion was **violated** or not holding.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1df3266d-42a0-4838-bf52-be609fc3b126)

* No, working as an infinite loop. Stopping another process from entering the critical section, if one process is already at the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edcc8018-ef03-4a35-8d02-63ef17e9e007)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a87ecf10-b286-4e7d-a367-07c0b439c91c)

* We are doing the **preemtion** at the **white arrow** in the above photo.

### 2. Progress

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f76ae04a-7ea0-43dc-a3e7-e8e73d1c933d)

> No one is at the critical section and one process comes which wants to go to the critical section then that process should be allowed to go to the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3149bd8-c050-4f75-8900-d6b455d96372)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06b20f1b-3814-41e1-bef0-15eac2d45a8b)

* We will see if p1 alone can get into the critical section or not, p2 never arrived.

> P1 ran and **lock= False**, we set **lock= True** and enterd the critical section.

* p1 was able to enter the critical section alone when there was no other process available or wanting to go to the critical section. **YES** p1 was allowed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9ef7480-b24c-4b82-96c0-132127a4fdf4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef5188c1-e787-4823-b78f-844669f016d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae90d175-07a2-4e1c-b8c6-e2dee919d509)

* We will check for p2 now.
* P1 process never came or arrive.

* If P1 came alone, then also it was allowed to enter the critical section. 
* If P2 came alone, then also it was allowed to enter the critical section. 

> So both process individually, if no other process was there in the critical section, were allowed to **progress** further.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6df74b62-7ab3-4c17-bd97-585d39002a08)

* So, for P1 and p2 process both, there is **individual** progress which is available.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f1c436a-2c26-4dfb-8992-3e7db289093c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d4996bdd-ce78-46d9-b440-830bfedd8429)

* YES.

* As soon as **lock =False** statement is **run**, the process is out of the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b165521f-9f1f-41b3-bc98-0e0460eb9ee2)

* We have to see the **progress** of **both** the **processes** that's why 2 cases.

### 3. Bounded Waiting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5bf7055-8d2a-4a0c-9fc8-8c64803e0da0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/180c68d4-16bb-43dd-9fa9-3400ca875288)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f13e1aec-a82e-4320-b7aa-73a55cd9ff31)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d4af5aa-91e7-4dca-a69c-20f784b9ddb8)

> First the p1 was sent to the cpu it ran and **lock = false** so there was no infinite loop. It reached the critical section and we preempted it.

> Now p2 goes to the cpu and now **lock = True** and it is stuck in **infinite while loop**. Till **lock = True**, p2 is stuck in the while loop.

> It means we have **waited** p2 process for critical section because p1 is in critical section already.

> Now we are trying to preempt p2 and give another chance to p1. p1 leave the critical section and it immediately tries to go back into the critical section again.

* We are checking if p1 can go to the critical section again or not? Why?

> It is the condition of **bounded waiting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d97e30d-37af-4b60-85b3-73ae5c6e2e28)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46b2092b-48b9-48bc-bd6d-317dfe1fae9c)

> P2 was stuck in the infinite loop. After sometime it was preempted. P1 got cpu again and it completely ran the critical section and set **lock =false**. P1 ran the **remainder section**. As it was **while(True)** we went back to **while(lock)** condition. 

> As, **lock =false**, we move forward and set **lock =True**. Now p1 is at the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2cbc8ae-4ed2-4214-b6cb-b776dd532e11)

* P1 was at critical section, it left and came back again to the critical section but p2 was **still waiting**. 
* So it is **not bounded waiting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31180197-32e9-41f6-8645-58583e7fa14b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a576c85f-1d00-4c14-8427-2e9db1016476)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/306f3a66-e27a-4b2d-8bd8-9a9588262b4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab90b7fd-896a-4ff6-9a3e-cad709eb3ad1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52eaffed-219b-40b9-9732-04572edc6a9c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0abd7d72-07ee-47a4-a545-ddc9553ba8b6)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/740a8504-8651-473c-adc8-327997466b20)

* P1 came out but p1 was never preempted that's p2 never got a chance to run. P1 ran the code again to enter the critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32e496cb-b9aa-42b5-b768-d7fa897430fe)

* Yes. We have to try and make the conditions fail. If after many tries the conditions don't fail like in **progress condition** then we have to say that the condition is **met**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11604770-b309-4ec8-800c-3287b1483f6c)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/711f10da-5c10-4933-af93-b44d56393460)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4d5c7c0-0fd7-4c31-9a33-441475075c2c)

* That's the **problem** here. We have not put **mutual exclusion** on the **lock** variable.

* We don't need to change the code.
* We need to check the **three** conditions which are **mutual exclusion, progress and bounded waiting** are **working/perfect** or not.
* We need to check if the **solution** is correct or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbf2b29d-e4de-49d2-8c01-998bd7228723)

* Questions comes **differently** in gate.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd823641-3cc2-4aff-83d1-f84b0e95ffd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a581ced-0cf0-4094-8e67-08049cb4816a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a59d3ee-d223-4ddc-8c78-9c0c29e6f495)

## Synchronization hardware semaphore (13) [28th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddafab19-bd59-4d39-b9b7-d08951fc1170)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7eff149b-b288-46d9-88a8-0f0801a69d51)

* No stack-overflow, there is no stack.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe1c34b3-5507-4396-9510-fd15bad342e4)

* Infinite loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e82ea215-4b21-4385-b24c-cf1043e5b9fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d240e0c2-c0da-4243-bebf-afe8be3bfb2e)

* Loop with no statements within it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06aa3d59-3231-4697-b2c3-19d8217bb7a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a41993c-d425-4a8b-8df3-f455cc91fb6d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6624931f-54fc-4be5-9935-ad9f2d70f51e)

* Quiz-II Syllabus.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3db1340-8c51-4833-a1ce-c2912c88d3c8)

### Example 2(Solution 2)

### 1. Mutual Exclusion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a5c17a9-c6cb-4c7d-b2ce-c0f1418227bd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0e12a32f-5131-4c32-8427-456c2b67499b)

> We ran p1 process and **turn =0** initially. The while loop returned **false** so we moved forward and p1 was in the **critical section**. We preempted p1.

> We ran P2 and as  **turn =0** still, the while loop returned **True** as **0 != 1** is **True** and hence the **p2** process is stuck at the **while loop**.

> To move p2, we need to set **turn =1** and in-order to do that p1 has to **leave or come out** of the **critical section** and ran the statement **turn =1** and after that only p2 can move forward.

> P2 cannot get a **false** condition and move forward from the while loop unless **turn =1** is set.

* It means that p1 should run completely, run the **critical section** and set **turn =1**, then only **p2** can ran and move forward.

> P1 and p2 couldn't enter the **critical section** at the **same** time.

> The while condition is on the turn variable, either the value of **turn** variable will be **0 or 1**. It is only one variable. If **turn =0** then p1 condition is **false** and if **turn =1** then p2 condition is **false**

> Both p1 and p2 are checking **different values** in their while conditions. At a time, **one variable** cannot have **two** values.

* It means that one of the conditions will be **false** and the other cannot be **false**.

> Both the conditions cannot be **false** at the **same time**. One of them will be **True**. Only one value is there and we are checking for **different values** in the conditions of while loop. 
 
* It means **mutual exclusion** is possible/hold/satisfied. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97fa1131-5de1-4171-a525-5086e7aab88f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a559b745-fbc0-483c-838f-b020388066fd)

> **Turn** variable can be either **0 or 1**.

> Hence atleast one process will have while() condition as **True** and the other one will have **false**.

> To make **Turn =1** in p2 while loop condition, when p1 process is over, it has left the **critical section** and in the **exit section** we have set **Turn=1**, then p2 process set the while loop condition as **false** and continue/move forward.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6e0af5e-50fc-489c-9b9a-3f6d4c920c41)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a427d762-1e92-412e-a9a2-2c9c3dd7d20c)

* Mutual exclusion

### 2. Progress 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34dee93b-3dd6-44e5-a3b7-f8d040c055b5)

> Initially the value of **turn=0**. We are checking for **p1** process first.

> P1 process runs and in while we get **false** so p1 enters the **critical section**.

* **P1 was allowed** to enter the **critical section** no problem.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dbb0e89-86ad-4f53-9037-d63be9d1b7e1)

* P1 can enter into **critical section**.

> Initially the value of **turn=0**. We are checking for **p2** process now.

> P2 process runs and in while we get **True**, as **0 != 1** is **True**, so p2 is stuck at the **while loop**.

* **P2 was not allowed** to enter the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3bbc257-b7a5-44fb-9d5b-59729bd5b451)

* P2 cannot enter into **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a806bc4-92be-4a69-811f-e7826db7a129)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1103499f-e9bc-4c76-8ba5-1e05523d2b7b)

* If we had set **turn 1** initially, then P2 would have entered the **critical section** but p1 couldn't.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6538d239-9853-4a64-9d66-e2684b2d0d30)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6dbddac2-4eba-44f9-ba53-bbb561550815)

* P1 and p2 are running in **alternation or alternate** matter. They are running **one by one** in an **alternate** manner. This is called as **strict alternation**.
* P1 and p2 are running in **strict alternation** matter.
* It is happening in this specific example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f754566-58a5-4013-b48b-a462b367d484)

* **critical section** of p1 and p2 is in (strict alternation).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84a5fded-4378-4bb5-836a-be3e5abef0a1)

* Left(Red) -> When **turn=0** p1 can enter into **critical section**.
* Right(Green) -> When **turn=1** p2 can enter into **critical section**.

### 3. Bounded Waiting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fba3c37b-7d57-4a9b-93ff-7c87bcbedeaf)

> P1 ran and in while we got **false** and p1 entered into the **critical section**. Now P2 run but in while we got **True** so, p2 is stuck at the while loop and is **waiting** for **critical section**.

> Now p1 leaves the **critical section** and sets **turn = 1**. P1 tries to enter into the **critical section** again. It went to the while loop and we got **True** as **1 != 0** which is **True**, so **p1** is is stuck at the while loop and cannot enter into the **critical section** again.

> P1 process couldn't enter the **critical section**.

* It was **bounded waiting** for P1 process. As p2 was waiting, we **stopped/stuck** p1 process from entering into the **critical section** again. We would have **stopped** p1 process **anyways** if **p2** process was **waiting** or not.

> P1 had dug a hole for himself only by setting **turn =1**, unless p2 goes to **critical section** and leaves the **critical section** and sets **turn = 0**, p1 cannot go forward and go to **critical section**.

* This is what **strict alternation** means.

> Only after p2, p1 runs.
> Only after p1, p2 runs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c32f417e-a016-447a-b2d2-e533d5e95433)

* **strict alternation** implies that **bounded waiting** is there, it is **satisfied** here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79c92e84-3334-48e0-9a57-db136d0677c7)

* Possible that P1 may starve or p2 may starve.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36478947-eaae-4d83-ac97-42f1932b8224)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97e3d2d7-8341-41e4-8b08-352feb8164ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1451dd11-bec0-451e-8cd2-cc0777041360)

* Don't try to connect one with another.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23671a73-f301-482b-a12f-6b2ed51c8d04)

* If **turn =0**, then we will start from p1.
* If **turn =1**, then we will start from p2.

> As **turn=0** initially and p2 came alone, there was no p1. P2 ran but in the while loop we got **True** as **0 !=1** which is **True** and p2 process got stuck in the while loop. P2 couldn't reach the **critical section** even though p2 was alone.

* This is why **progress condition** failed/violated in **solution 2** example.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cceb91e-b6cd-4b02-9148-c45fc815e980)

* Yes ofcourse.
* That's why we wrote **p1 and p2** may **Starve**.

## (Example 3)  Solution 3 Peterson's solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df404e32-e7cc-421a-a09a-e9568437badf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd05876e-3e52-4b99-a536-c3148dfc001f)

* Flag[i] -> It indicates the intension of a process to enter into **critical section**.
* **i = false**, Not willing to enter into critical section.
* **i = True**, Willing to enter into critical section.

* **turn = 0**, process '0' gets priority to enter into the **critical section** if the process wants to.
* **turn = 1**, process '1' gets priority to enter into the **critical section** if the process wants to.

> If p0 process wants to enter the **critical section** then it will set **Flag[0] = True**. P0 set **turn= 1**, so that it can give **preference** to **p1** process. In the while loop, even if **one of the conditions** is **false**, we will get **false** and we will enter the **critical section**.

* **Flag[0] = True** -> Process 0 wants to enter into **critical section**.
* **Turn = 1** -> To give preference to process 1.

> After p0 has come out of the **critical section**, p0 process has set **Flag[0] = False**. So, that it means p0's work in the **critical section** is done.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c966115a-d4c0-44b9-b919-b8259f1eb4aa)

* **Flag[1] = True** -> Process 1 wants to enter into **critical section**.
* **Turn = 0** -> To give preference to process 0.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0359659e-62af-400d-b02f-6a5bffc7a5e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d05696c0-456c-46be-ab83-3d3d09f6c1b8)

* Turn is a **shared variable**. It can be either **0 or 1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c56f51ee-6801-4cd3-abcc-a6f415b7962e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5daf283b-26d4-478d-86de-9765f1455da6)

* My Analysis:-
* ME possible
* Progress possible
* BA not possible

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0757cb5-0b72-4bcf-8465-c6f051ebfa49)

* Sir's analysis

### 1. **Mutual exclusion**

> The **turn** variable value is set by the processes. At a time, **turn** value will be either **0 or 1**. If **turn has some value** then, their individual **flag values** are **True**. In the while loop, the **flag condition** will be **True** but the process will try to set their **turn** values. 

> If **turn = 0** then p0 will run

> If **turn = 1** then p1 will run

> But only one process can go forward/ahead because of **turn** variable value. Turn value cannot be **0 and 1** at the same time. Flag can be **True** for both, that is possible but **turn's** value cannot be changed.

* It means **mutual exclusion** is possible.

* Trying another case

> P1 came first, ran and entered into **critical section**. P1 was preempted. Now run p0 and see if it is stuck in the while loop or not?

> **YES**, p0 process got **stuck** in the while loop as **Flag[0]= Flag[1]=True** and **turn =1**. The while loop returned **true**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/392ddedb-0598-441f-aff8-b06bfcf11006)

> If one process is at the **critical section** then another process cannot enter the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ea8f049-5a32-46b5-b46c-6b35e1c214c9)


### 2. Progress

> For **p0** there is **progress** in **base case/condition**.

> For **p1** there is **progress** in **base case/condition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/258a22e3-fe43-4371-ae03-fd90e6d89140)

### 3. Bounded Waiting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a3e22f1-f56c-4f69-8e17-8d683588ecaa)

* No **starvation** as all.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a3e0dfb-6001-499e-b376-f8d368dc3170)

* If **bounded waiting** is there then **maybe** starvation or no staravation is possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6efaa4e3-7637-462e-9b9b-d921e8d2d06b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd03711d-ca22-4419-b073-8d0497c810c8)

* All **3** requirements are met.

* Checking **bounded waiting** condition case.

> We took p0, **Flag[0]=True and turn=1**. We got **false** in while loop and entered the **Critical section**. After that p0 was preempted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a97e3cbe-323a-4b57-b8fe-e0e3bb250464)

* Preempted at the **blue arrow**

> P2 came and set it's **Flag[1]=True** value. After that p1 was preempted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/656b148a-a9d4-4502-985f-4577a9530214)

> Now P0 has left **Critical section** and set **Flag[0]=False**. It went up and set **Flag[0]=True and turn =1**. After that p0 was preempted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9a52ccb-3887-4f5b-a13a-26db7a2df788)

> P2 has set **turn=0** and on the while loop p2 got **True** which means p2 got stuck in the while loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6a11c11-4ed4-4b8b-bc5a-a0d0a7a53e31)

> Now p1 comes, we have **Flag[0]= flag[1]= True and turn=0**, so in the while loop, we got **false**, which means p1 entered into **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3c56a29-24e9-4028-87be-c35fc7061280)

> So p0 left the **critical section** and set **Flag[0]= False**. p0 entered again. It set **Flag[0]=True and turn=1**, so in the while loop we got **True** and p0 got **stuck** in the **while loop**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3741795-8cc9-49c7-bfe5-8a0782be2092)

> If a process's waiting is **bounded** only. If a process ran and went to the **critical section** and it left and joined again to go to the **critical section** then that process cannot go to **critical section**

* Then also **bounded waiting** is satisfied.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8cab56d-bb96-4056-957d-8de107d4882e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db275eff-397e-49c2-80fa-15de5e4d1b46)

* Both **processes** are stuck in their **respective** while loop conditions.
* Both **processes** are at **deadlock**. They cannot move **forward** only.

> Both processes will keep running the while loops. They cannot move **forward**, even if we do **preemptions**.

* No **progress** condition is met.
* Infinite waiting for both process.
* There is no case of **Mutually exclusive** condition only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4e329ce-2bc9-4b0f-a600-16d438d45efa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bb2d767-3617-4f36-af92-dae8420951b1)

* The conditions of the while loops are always **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffce6a36-7699-4627-b121-cacc30feb3be)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/642699c2-2bd8-4501-8642-2efd9d1d81e7)

* Useless code.
* Just to show what we need to check.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aac847bb-9d3d-44f5-aa36-d385776eb72c)

* My analysis
* No mutual exclusion possible
* Progress possible
* Bounded waiting No

* It is necessary that both processes will run their critical section one-one time and after that **both** processes will go into **deadlock**?

> This is not **True**. It is not necessarily.

> If one process came alone and the **turn =1** value was there and in the while loop we got **false**. p0 entered into the critical section and set **turn =0** value then the **another process(p1)** will never **move forward** and will never go to the **critical section**.

* It can asked that if both the processes will **move forward** and go to **deadlock** or one process will **move forward** and go into **deadlock** ?

> **One process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57a2ee00-21b6-480a-ac2e-dd85627adfc4)

* No mutual exclusion possible
* Progress possible
* 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26d21441-f952-4533-9027-890440765f11)

* Either p0 or p1 can go in the **base case**.

> If P0 or p1 are fully run then both **p0 and p1** cannot work.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32eb67a2-1e15-454f-b7ae-f5cb3bca0db8)

* Homework.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ae29d19-c110-4a2f-b8a6-6d5abed992dd)

* Yes

## Multithreading-system-call-fork-call (14) [29th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/299853eb-73c5-4c89-9f39-32bf395bfd4e)

> Sir kal aapne bola tha ki if their is even a single case where bounded waiting is not satisfied then the solution has no b.w. right? **YES**.                               


> So in Peterson solution if we simply try to run P1 and again P1 then it is able to go inside CS. **YES**.

>   So how we can say in peterson bounded waiting exists ?

> In the example, in the **first time**, P1 was in critical section and p2 was not in critical section, it was just showing it's intension to go to critical section by setting it's **flag**.

> P2 hadn't come to the **waiting state** which is the **while loop**. If p2 had come to the **while loop** which is the **waiting state** then there would have been a **case** of **bounded waiting**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b057574-c37b-474e-a76b-f90e6c4372af)

> When p1 entered into the critical section for the **second time**, then p2 was at the **waiting state**. Now for the **third time**, when p1 tried to enter into the critical section, p1 cannot enter into the critical section.

> We cannot execute p1 for **more than once** in the critical section while p2 is in the **waiting state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/464f107d-7bea-4842-93e5-34082724d8e9)

> We have to check when p2 is in **waiting state** that p1 is allowed to run more than once in the critical section or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6eb71e21-5cd0-4977-84a2-7f009b2cf2a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5efe8821-3c66-4b97-94f1-e32b39eeb45c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2495d65-744d-456d-98a1-b236c48fa237)

> He is saying that in the **first case**, when the **first process** goes into **critical section** then the **second process** cannot go into the **critical section**. Here, **mutual exclusion** holds.

> He is saying that in the **second case**, when the **second process** goes into **critical section** then the **first  process** can also go into the **critical section**. Here, **mutual exclusion does not** hold.

* So in **overall** condition of the **two** processes, **mutual exclusion** does not **hold**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/110051c9-2957-421b-8104-d527a4d9674d)

* So **mutual exclusion** is not possible.

> Whatever we do, if any case comes that both the processes are at the **critical section** at the **same time**, then **mutual exclusion** is not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3667a7bb-d431-42c4-acb1-96fa0522883e)

* me -> **mutual exclusion**
* If no process can enter then **mutual exclusion** is violated or not?

> We cannot say **mutual exclusion** is violated. Progress is violated, there will be **deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/805b37a6-d48e-418a-881c-b74ba77f389e)

* We will not say anything about **mutual exclusion**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c7f5e02-f2af-4017-b601-ea128984fa67)

* We will write **mutual exclusion** is satisfied, as no two process can enter the critical section at the same time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e04560d8-c883-421d-8ec4-2ec556ab3b35)

* Yes.

* We have to prove that the written code is wrong or not.
* All of the **three** solutions we have seen are **software** solutions.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/421ceae1-8a03-479a-ac79-2849734b7bd6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0982ec4e-260b-4dca-8c4e-50bd77cbb785)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e84c141e-9128-49c3-bda8-5a45f278c309)

> We are writing some particular code and running it on the cpu so that we get the **solution**. This is **software** code.


## Synchronization Hardware

* Instructios provided in cpu architecture, so that instructions can be used for synchronization.

1) TestAndSet() -> Returns the current value of flag and sets it to **true**.
2) Swap()

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f291c945-3632-4eaa-96d1-f85d779bf681)

* Yes.

### 1. TestAndSet()

* Whatever is the **flag** value, we have to always **set** the **flag** value to **true**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16c9693f-483f-4bf1-837e-4171eb895810)

* TestAndSet() is an **instruction**.
* The instruction will do is that, with whatever value of flag we have called the TestAndSet(), it will return the value as it is and also sets the **value** of **flag = True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d1b0b2b-8f32-43f3-8215-c1b45bf68d93)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4216646d-2b5d-4e22-8b4a-e003a9e8ce1d)

> In the above **lock variable** solution, TestAndSet() is an **upgradation** of it.

> We want to read the **lock**, if it is **false** then we will move forward, if it is **true** then we are stuck at the while loop.

> If the lock is **false** and we will move forward then we will set **lock=True** before moving forward, then we can **stop/stuck** the next process in the while loop.

> We want to test the **lock** and see if it is **true or false**. We also want to set the **lock = True**.

* The above **two** work will be done **simultaneously** by **one instruction** and it is given by the cpu.
* So, **no preemption** can happen between the **two works/jobs**.
* As **no preemption** can happend between the **two works/jobs**, so **mutual exclusion** is **possible**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c901e904-b14d-4903-90bc-c4108c6e7513)

> The **returned** value from the **TestAndSet()** is the **original lock** value that we sent into the function.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2532245c-ef88-4b86-85bd-d1365187b646)

* These two work, will be done at the same time, with the help of the **TestAndSet()** instruction.
* We wrote, **while(TestAndSet(&lock));**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69d55a29-4184-4305-9a1f-f7bf3e433ad1)

> If **while** condition is **true** then we are stuck at the while loop.

> If **while** condition is **false** then we can go forward to the critical section.

> When we are out of the critical section then we are setting **lock = False**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df57d74a-216c-4ce4-ab1a-31b763a870bf)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b6a7c59-caea-4a9a-ae77-29e877e7c544)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6013a21-eb38-4a64-a260-fad1dd569d31)

> **Lock= false** means that there is **no process** at the **critical section**.

> **Lock= True** means that there is **one process** at the **critical section** and now we have taken **lock** on that process.

* TestAndSet is **atomic**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/163139fd-0a1a-499a-8878-d00d019907ba)

* Both process p1 and p2 are sharing the **same code**.
* **Lock** is a shared variable

> We are running p1, **lock = False**, so in the while loop, we have the **TestAndSet()**, which has set the **lock = True** and returned **false**. So while is **false** which means p1 entered the **critical section**.

> P2 tries to go to the **critical section**, **lock = True** initially, so in the while loop, we have the **TestAndSet()**, which has set the **lock = True** and returned **True**. So while is **True** which means p2 is stuck at the while loop and cannot enter the **critical section**.

> P2 can enter the **critical section** when p1 has left the **critical section** and set **lock = false**.

* **TestAndSet()** is testing if **lock** is **true of false** and we are setting **lock = True** as well, simultaneously. So that **no preemption** happens between them and **mutual exclusion** is hold/possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea267329-29ad-4e72-a1ca-5e596a4b6164)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bce475ad-bcc9-4519-9d5e-e4a1014c8bf2)

* **Mutual exclusion** is holds/possible in the **above example**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7c3d5c7-d027-4611-9850-4855567bdd81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b99a593-aea6-4b0c-81d9-bd424f3100d5)

* P1 was run first.

> P1 will enter into **critical section** even if p1 gets preemeted before it can get it's while loop running.

> P2 get stuck in the while loop, because **lock = True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/766e1600-0210-4e14-a5a8-0a36863fcd89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16909a3c-654c-40af-8a8d-bc09ea8c6e1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/116bac08-1b16-4f99-a018-a4f2779c7266)

> We got **false** value from **TestAndSet()** but before we could use it in the while loop, p1 got **preemted**. It is **possible**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85f6acfb-1d21-42d3-81b4-26c422cac97e)

* P2 will be stuck at the **while loop**. p1 has entered the **critical section** and has set **lock =True**. That's why.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b1ecac8-dcd1-4927-9c5a-d82b96630f89)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b327c8fd-83ad-4c43-aa97-fc4624c64315)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/075591b9-04ab-4e25-81f7-12ba0218dddc)

* Process is satisfied/holds.
* P1 came alone and it was allowed to enter the **critical section**.
* P2 came alone and it was allowed to enter the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b44d7c1a-ebd1-4168-95d4-6c283d79abc2)

* Testing means we are **checking** what is the value of **lock** variable.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f80bb809-96c5-48f4-8090-b37de8a37adb)

* It is called as **mutual exclusion** and not progress.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95b584d5-e90b-4729-a3d6-d930d2b571c4)

* Bounded waiting is **failed/does not hold**.

> P1 ran and entered the critical section and set **lock = True**. P2 ran and was stuck in the while loop because of **lock = True**. Now P1 left the critical section and set the **lock = False**. It went to the top and tried to enter the critical section again. As **lock = False**, while loop gave **false** and p1 was able to renter the critical section again, while p2 was **stuck** and waiting in the **while loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f129658-44ef-46d5-8fb5-994ead9e7ad5)

> If one process is in the  critical section and it is **preempted**, then the  critical section is **not free**. The process has just left the cpu but it has not stopped running on the  critical section.

* **We will say that a process has left the  critical section**, when it has come to the **exit section** and has ran the **lock=False** statement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/968ca410-ba30-4db9-81d9-ade37a948ec6)

* Possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/290d74d8-eaaa-42bd-b2b8-c470d63f9592)

* We converted two programming statements, into **one or single** instruction, which the CPU supports.
* No **deadlock** possible here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d562aed2-c296-4dac-932f-5150e4781c1e)

* NO.

* Variable declaration possible in instructions?

> NO.

* No variable is declared while running an instruction or in-between when an instruction is running.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc71bd1f-7ad6-49e8-be44-0c57d5675f7b)

* This is just implementation detail. It is not a variable. This will happend within an instruction only.
* This is not a function or a program.
* **TestAndSet()** is an instruction.
* Sir has written it in c-program for easier understanding of the behind the scenes logic.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12e9634a-5e43-4c94-a6bb-45badaddc7f4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6cee3ad9-c833-4571-be3b-181063b558b3)

### 2. Swap()

* Interchanging values.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2c5502a-74b5-4ef1-b3e4-a37b9c4d4810)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdcd0cde-8b34-48fb-89d1-16bfedb019ab)

* Boolean key; -> Local variable for **each process**.

> Both processes will have their individual **key** variables.

* Boolean Lock = False; -> Shared variable among all.

> Both processes will have their common variable **lock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c75dffa1-614e-459f-969f-66ea91c9204c)

* **Lock=False** -> Critical section is free, no process in Critical section.
* **Lock=True** -> Critical section is not free or occupied, one process is in Critical section.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e68acf51-d4cd-4e83-bf2e-e3fbeeb2109c)

* In the **second** while loop, where **while(key == True)**, there is **no semicolon** at the end of the while loop, which means that, if while loop gives **True** then we will run the statement within the while loop which is the **swap()** statement. If while loop gives **False** then we will not run the statement within the while loop which is the **swap()** statement and go to the next statement which is the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef8bc250-5082-4d82-9aa6-941c31417a25)

* Both processes(p1 and p2) have their individual **key** variables and **lock** variable is their **shared variable**.

> We are running p1 process. It has set it's own **key = True** and the **lock= False**. While loop returned **true**, so it ran the **swap()** and p1 process will **access** it's **own key** value. It swaped the values and new values are **key = False and lock= True**. It went to the while loop again and while returned **false** hence p1 is out of the while loop, so p1 will go forward and enter the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43c87a04-2339-4206-88fd-6a104121b7c1)

> We are running p2 process. It has set it's own **key = True** and the **lock= True**. While loop returned **true**, so it ran the **swap()** and p2 process will **access** it's **own key** value. It swaped the values and new values are **key = True and lock= True**. It went to the while loop again and while returned **True** again. P2 is now stuck at the  while loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1118b7d-de57-4fb1-9c7b-69e919842353)

> P2 can move forward when **key = False** and **false** will come to **key** when we have swapped the values of **lock and key**.

> We will get **lock=False** when p1 process had left the **critical section** and entered the **exit section** and ran the statement, **lock =False**.

* For **Mutual exclusion checking**:-

P1 -> Key -> F/T/T
P2 -> Key -> F/T/F
Lock -> F/T/T

> We ran p1 and it got preempted after running while loop condition but before it could run **swap** statement.

P1 -> Key -> F/T
P2 -> Key -> F
Lock -> F

> We ran p2 and it went into **critical section** and after sometime, it got preempted.

P1 -> Key -> F/T
P2 -> Key -> F/T/F
Lock -> F/T

> We ran p1 and it ran the **swap()** and we got **key=True and lock=True** and it went to the while loop and while returned **True**, which means **p1** process is stuck in the while loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02bb26d1-3ff7-4b29-8e80-a84955bcc8c7)

* **Mutual Exclusion** is **possible/holds/satisfied**.

> At a time only **one process** can move forward and enter the **critical section**.

* For **Progress checking**:-

* P1 process is going alone.

P1 -> Key -> T/F
Lock -> F/T

* P2 process is going alone.

P1 -> Key -> T/F
Lock -> F/T

* Both the process can enter into the **critical section**.
* So, **Progress** is **possible/holds/satisfied**.

* For **Bounded Waiting checking**:-

P1 -> Key -> T/F
Lock -> F/T/T/F
P2 -> Key -> T/T

> When P1 process has entered the **critical section** and p1 got preempted after sometime. Then p2 process is trying to enter the **critical section** but p2 is stuck/waiting at the while loop. Now p1 has left the **critical section** and set **lock=False** and trying to enter the **critical section** again. As **Key=False**, so while returned **false** and p1 was able to enter the **critical section** again while p2 is still waiting. 

P2 -> Key -> T/F
Lock -> F/T/T/F
P1 -> Key -> T/T

> When P2 process has entered the **critical section** and p2 got preempted after sometime. Then p1 process is trying to enter the **critical section** but p1 is stuck/waiting at the while loop. Now p2 has left the **critical section** and set **lock=False** and trying to enter the **critical section** again. As **Key=False**, so while returned **false** and p2 was able to enter the **critical section** again while p1 is still waiting. 

* Hence **bounded waiting** is not **possible/holds/satisfied**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f5e8b71-5b0c-4102-9436-d7a6bca5f6e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22edb6c6-a272-41fa-8754-12a90dc2860b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80ddfae0-65cd-416d-9880-8635186d68e8)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f4b231f-4988-47c4-be0a-ede9f68e8d8a)

* Yes. Not that imp. It works without bounded waiting(bw).

## Synchronization Tools

1) Semaphore -> In GATE syllabus
2) Monitor -> Not in GATE syllabus

* They are provided by the **OS**.
* They are used to provide Synchronization.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0b10774-de41-4577-bf28-0404d5d14c94)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13fd6db5-a1de-469c-b3fa-13834ac3b10a)

### Semaphore

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64d55589-f8ba-4885-bd3f-5ad16cbc9e7f)

* Semaphore is an **unsigned integer value**.
* If we have to take Semaphore's value as **negative** then it **should be given/mentioned in the question**, otherwise we cannot take it as **negative**.

* Semaphore can be accessed with those **above functions** only when we want to access Semaphore otherwise not possible.
* **wait()** -> Decreases Semaphore value by **1**.
* **signal()** -> Increases Semaphore value by **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5be02b95-8d85-439f-88ef-8a43d6c0b0d0)

### Implementation of wait() and signal() in the background

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41c6e203-3b44-4d31-b20b-676ad0c51c06)

* 'S' is the **semaphone** here.

* In **wait()**, the decrement of 's' doesn't happen that easily. **S--** will only happen when **semaphone(S)** value is **greater** than **zero(0)**. 

* If **S == 0** or **S < 0** then, **wait()** will never be **completed** and we will be stuck in the **while loop**.
* If **S <= 0** then we have an **empty while loop** ending with a **Semicolon**, it is run **infinitely** and we will be **stuck** in the while loop.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/77337a60-364b-466f-9fa5-c8fa39fe3505)

* Any process can be stuck in the **wait()**, when **semaphone(s)'s value** is **equal to or less than 0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5a4e1d2-49e9-4088-b7b4-6a398c34e65b)

> If **semaphone(s)'s value** is **greater than or equal to 1** then the while condition will be **false** and we will more forward and **decrease/decrement** the value of  **semaphone(s)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97c4c590-81cc-4625-9411-99f8b58f1a2e)

* Both **wait() and signal()** are **atomic** in nature.
* **Atomic** means that either they will **run completely** or they will **not run at all** and when we will try to run them, they will start from the beginning only. They will not run from the **middle**.

> They will **run completely** or if they get **preempted** in the **middle** then they will start from the **beginning** and not from the **middle**.

## Types of Semaphone

1) Binary Semaphone -> Value can be either **zero(0) or one(1)**
2) Counting Semaphone -> Value can be any **positive or un-signed** integer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0d2f9da-fc88-4631-b4bd-a06525e2268b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fafcc2a7-6bfa-43b6-b2ed-0669c93f3816)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e91f8856-df90-4418-b504-cd4afc03514c)

* **Binary Semaphone** -> It is used to implement the solution of critical section problems with multiple processes. Where we want to **provide mutual exclusion**.
* **Counting Semaphone** -> It is used to control access to a resouce that has multiple instances.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7740c61-f978-48c5-8c2e-c855ca56a845)

> The **semaphore(s)** variable is not **created** by us or by our process. It is **created** using the **semaphore** tool provided by the **OS**.

> We can create as many **semaphore(s)** variables we want but it will be **created** using the **semaphore** tool provided by the **OS**.

> The **semaphore(s)** variable can be only accessed by those **two** functions only, which are **wait() and signal()**.

### Characteristics of Semaphores

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b11200f-8120-408c-a6c6-0b43706f8c23)

* Semaphores are **machine-independent** -> It means that it is not **dependent** on a CPU. If we run the OS on different CPU, then we can access the **semaphores**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56a03e6a-17cc-4ac0-a836-7f1ddcf7c0d8)

* How **semaphores** are used to provide **mutual exclusion**?

> To provide **mutual exclusion**, we will use the **binary type semaphore** and it's **initial** value will be **one(1)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ccd5a0c-e78c-439b-baa8-fa63ee5b6353)

> First, p1 process comes. P1 will run **wait(s)**. 'S' value is **1**, so we will move forward and do **s--** and get **s=0**. **wait(s)** ran successfully and **s=0**. After that p1 ran **wait(s)**, p1 went into **critical section**. P1  is preempted but p1 has not left **critical section**.

> Now p2 run. P2 will run **wait(s)**. 'S' value is **0**, so p2 will be **stuck in the while loop** inside the **wait(s)** which is **while(s <=0);**.

* **wait(s)**  -> It means we are testing if **s <= 0** or **'s' is less than equal to '0'**  or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87efa463-5d5f-45f7-a620-6e0e4879231d)

> P2 can only go forward when p1 process leaves the **critical section** and enters the **exit section** and runs the **signal(s)** which **increments** the value of **s** by **1**, so **s=1** now. P1 is preempted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98e6b5b6-0da9-47f1-8b6b-dbc071c68fa0)

> Now p2 will run the **wait(s)** condition as we know that **wait(s) and signal(s)** are **atomic functions** and they will always **run from the beginning**. So when p2 ran **wait(s)**, **s =1**, so it got **false** in the while loop and decremented **s** by **1** and now **s=0**. Now, p2 can enter the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b495e9f-07c4-4e47-a6fb-6237aaa1f538)

* Out of the **two** processes only one process can enter the **critical section** at a time.
* That is **mutual exclusion**.
* So **Mutual exclusion** is **possible/holds/satisfied**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8e2ed78-e9b4-4f96-b6f9-20276bcb2894)

> In-fact, if we take **15** processes like p1 and p2 and they all have the **same** code, then out of all the **15** processes, only one process can enter the **critical section** at a time.

* So **Mutual exclusion** is **possible/holds/satisfied** in these case also.

> Whoever comes first, doesn't matter, **only one process** will be at the **critical section** at a time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/164c66cf-acf2-4a2b-bfa6-91d8f43524b4)

* Yes.

## Semaphore questions classical synchronization problems (15) [30th May 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ad712e28-e555-48dd-955a-aa603e4b6867)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79448632-ec2e-4ba7-96ca-27cf31569d61)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b11c7315-34a8-47e4-81d0-4704dc6587b2)

* **S** is a **binary semaphore** so it values are **0 and 1**.
* We have **S=1** and the next statement is **signal(s)**, if we run **signal(s)** then can we **increment** the value of **s**?

> **NO**. Because it is a **binary semaphore** and no values comes after **1**.

> If **s=1** and we ran **signal(s)** then **s** value will be **1** only and **signal(s)** will run **completely**. The process will not get **stuck** as **signal(s)** run **completely/successfully**.

> If **s=0** and we ran **wait(s)** then **s** value will not **decrease/decrement** but **wait(s)** will not run **completely/successfully**, the process will get **stuck**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/769c63ed-c6a8-4fef-a2a1-af2782dfe889)

* Note:-

> If binary semaphore value is **1**. Then **signal(s)** will run successfully and value will remain same.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d4ad592-5859-47c1-9b1b-c07b824d8908)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a7f8f5f-4321-4796-94f4-8841d696f6dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa742e2c-3360-4d8d-8b39-4d615ee89fdd)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec5d5db5-1829-4eec-b627-f9ba75bed4eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3298cdb8-8570-4063-85d8-d06a3901d627)

> If **s=1** and we ran **signal(S)** then what will be the value of **s**? It will depend on what **semaphore(s)** is.

* If **s** is a **binary semaphore** then **s=1** only.
* If **s** is a **counting semaphore** then **s=2** only.

> **signal(S)** will run **successfully** and it will not get **stuck**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/adecc001-a40e-4aa1-8667-cbe170fefc88)

* Dry Run.

s = 1/0/1/0/1

P1 = Completed
P3 = Completed
P2 = Completed
P4 = Completed

* Prints -> 1111

> As it is mentioned in the question that **all processes run successfully**. So we have to run the processes in such a way that **all processes run successfully**.

> So, **no processes** will be **stuck** in **wait()**.

* No. of times **1** printed = **4** [Answer]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a829fb9c-d808-40f3-a7bc-3db7d65dde43)

* Is it possible that all processes may not complete?

> **YES**.

* In the **given sequence**:- **p3 -> p4 -> p1 -> p2**

> So, **P2** will be **stuck** and p2 will not complete.

* **Max** one process will not complete, it will be between **p1 and p2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ac95f87-585c-4c75-aa7a-35dc76327e0c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99b0c7f7-de2d-405c-88e9-221817b1bac8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48090ce6-6a25-41ea-b2bf-15f11ff27356)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbfd6516-02ce-4ac8-82ba-44e1e3b46cfc)

* NO.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33e70c1f-a485-44eb-8655-6b3d9c208c48)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ba86b44-57f4-4ff1-aaa1-afc7bc3328ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f066de43-5289-4a2d-8644-cc4cc0edebcd)

* S=0 and **s** is a **binary semaphore** still.
* So, **max process** get stuck will be **1**. Out of **p1 and p2**, one of them will get **stuck**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1627bab7-88db-4c33-9ec2-3c6d2b507dd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74282281-1831-45f9-9efa-514f91e360ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f82af12-5795-41ff-9a1e-ed4c32bd94bb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb1c037e-31b8-45c7-9343-ab3095e95f73)

* CS -> Critical Section

* Dry Run

S = 1/0/1/0

P1 = CS
P2 = No
P3 = No
P4 = No
P5 = No
P6 = No
P7 = No
P8 = No
P10 = CS
P9 = CS

* Max no. of processes at the CS together -> 3.
* The process should stay at **CS together**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ef71df3-8bae-45b8-833d-f54d5adbccd1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac9a101e-c5c0-46f0-b55a-b98312f8665d)

* Max no. of processes at the CS together -> 3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9759a8ba-96f2-475c-87c7-40b74fb7fdd9)

* CS -> Critical Section

* Dry Run

S = 1/0/1/0

P1 = CS
P2 = No
P3 = No
P4 = No
P5 = No
P6 = No
P7 = No
P8 = No
P10 = CS
P9 = CS

* Max no. of processes at the CS together -> 3. [**WRONG**]
* The process should stay at **CS together**.

> We have a **while(True)** statement. So, the **wait(), CS and signal()** will run **multiple times** for a **single process** yes.

> We can run a **single process** as many times we want.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d78bd6d3-dfd1-4934-bc3b-885734c137a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e02f6ff-b076-4ffd-bfa9-4fe065fbc762)

* All of the process get entry into **critical section** which is **10**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18a84d87-a49f-49c3-9fdd-55056978bd41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8536dc17-c907-4079-aaee-bc80430e5c27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3439d94b-051a-4a78-8c01-f10cfc7faafc)

* All of the process get entry into **critical section** which is **10**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a433d952-572e-4cb1-9e19-566397c0a1e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/291d5fd2-6664-41bc-b665-1c3b0a558266)

* P1 and P2 will work in **strict alteration** manner.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4445497d-d8ac-4cb6-8567-8e06f98442da)

* We have taken **3 semaphores**.
* First P1 ran, then P0 ran and finally P2 ran.

> As P1 should run first that's why **S1 =1** and the rest **S0= S2 =0**.

> If we want the **same** sequence(P1, P0 and P2) to be repeated then in P2 process at the very end, write **signal(S1)**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76b3c101-98fc-4dc9-9aaf-88dacb513674)

> If we want the processes to run once and finish, then don't write **signal(S1)** in the P2 process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6eb700b6-bd4b-4c29-b72c-dbd43e7f24f2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72c81a07-06f2-4cb3-9973-fbb34174c067)

* Min no. of semaphones = 3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68940ee9-d18a-4a07-b8de-1c1eec838e8e)

* To get the given sequence we need **B** first. We can get **B** in **T2** process and for that we need **S1**. So, **s1=1, S2=0 and S3=0**. We need **C** and it is in **T1** and for that we need **S3**.

* s1=1
* S2=0
* S3=0

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46c1f987-e004-4461-ab6e-62dd14433b6a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3125690-34cb-4e14-8ae7-6453e06c383f)

* Option **C** correct answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4969d92d-a66b-419e-a94f-c6cb50df701d)


> We cannot run **P1 and P2** processes first because **s1=s2=0**. As **s0=1**, we can run **P0** only.

> As **P1** has **executed/ran** already we will not run **P1** again. Now we will go to **P2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4abe93e-1bf8-4a88-a553-5381d2bb1c6a)

* **O** can be **printed** 3 times, that is one of the options.
* P1 and p2 process ran only one.
* Eithe **zeroes(0)** will be printed **3 times** or **2 times**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af78ba04-2e71-419f-bf8a-58ac0882318e)

* Option **A** is correct which is **at least twice**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4b899d1-8c16-4c99-bfa9-08f0eb41c01b)

* 3 zeroes printed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6aff4de9-d4fe-4d96-8c25-154348df3c37)

* 2 zeroes are printed. We have ran P1 and P2 one after another.
* P1 and P2 will run **once** because they don't have any loops.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62610ce7-f26c-4580-a4a0-f9f7c491ec4c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b816480-f812-49da-8c17-2dd2db85413c)

* Release -> Signal().

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7550f2c-7a93-481c-99d3-5082b4bf93cc)

* Option **A** is correct which is **at least twice**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ea3dd54-8bb4-45c6-a7b2-44c187783ef3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/189bc938-b568-475d-96b9-9f8f46e68570)

* Final value of **x** would be **-2**.
* How many processes can read **x** at the same time?

> **2** processes.

* So, we will have **race condition** here. Any two processes can read **x**.
* We want **max value** of **x** so, we will do the **additions** at the end for **max effect** and nullify the **negatives**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d772e44-96ef-4181-b7e7-bd50d1a4356e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6007622-6383-4961-9783-14fa0e96ce6d)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8dc76ce-3442-4a13-8c6e-a3b0980e10f6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5cc438b-3259-415d-91b3-7fa5878b6274)

* How 3 processes are nullified?

> **W and X** can go to the critical section together.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fcac2e8-8e08-468e-a1ed-976e6f80cc2e)

> What are we basically doing is that we are taking **W and X**, we are running **W** till **R1 = R1 + 1** and **w** get preemeted. Now X, Y and Z all three processes are one-by-one run one after another. Run them in any sequence. At the end **w** comes to run and w had **1** stored locally and it set that **1** as value of **x=1**.

* This is how **only one process** impact comes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e071715-cdfe-45e2-9f72-d41956513f33)

* No. of **distinct values** -> **7**.

## Doubt clearing session classical synchronization problems (16) [31st May 2023]

### Quiz-2 (Solutions)

#### Q1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c988928f-3b5c-4d60-80e0-17fcc03479eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f5cbdb9-c36f-49bd-9640-a3ebf6590536)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86ea0681-f0ca-40ce-b65f-b12edb874b68)

* Answer -> 2

#### Q2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/001519b0-5947-4c52-977f-3670a9d0a69b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/944e963f-9de8-4dc5-b9ea-4ddaa1666bf2)

* Answer -> FCFS and SRTF

> **SRTF** behaves like **SJF** when all processes come/arrive at the **same time** which is all process have their same **arrival time(AT)**.

> In that case, **preemption** will never happen.

#### Q3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/601563db-616a-4d3d-8ae9-2cdc71ad6bed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98553222-9a0e-4fab-b79a-5a33b8426aa1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24220f09-fb45-4d70-8238-243a96837b96)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23f90e06-3a18-44df-8c0b-92b8cf8e9cb2)

* Answer -> 89%

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24940284-f007-4525-9c9b-cb258d5d4a49)

#### Q4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f19b53db-f7f5-4ca2-8ca3-50f4750c203b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbe29fb5-1378-4fec-9041-f81e98bddf6c)

* Options A,C and D are correct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a8ea76f-3d88-4f62-97c3-8d2dc59ae1c6)

> This is **True** because in  **round robin**, when we run a process in round robin, all of the process are **waiting**. The process run for sometime then have to wait for sometime then they run again.

> As a result the **waiting time** of the processes **increase**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/821b973c-1971-4dd8-8e88-d044a64fab19)

* The **average waiting time(wt) and average turn aroung time(TAT)** comes **very very high** in **round robin** algo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e169bce1-f5b9-467b-8381-52446e7cad64)

* We can compare.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b4ab1c5-a511-479a-b174-031b5c8316bd)

#### Q5

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e3f0ca5-147f-45b0-9d6d-dc76d41624c5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65e637c4-94d5-4168-b728-bbfb3c599c71)

* **No process never preemptes itself**. Either the **timer or the OS** will preempt the process. For external reasons, preemption happens. From itself preemption doesn't happen. When a process goes for IO opration, it is not called as **premtion**, it is called as **process has goes for IO opration**.

* Preemption is a **very specific** term used when a process in it's **running state** has been taken to the **ready state** for external reasons.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31aa4f58-01b9-4344-9624-b8bbc6162873)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27f6975a-e833-4b02-aaad-db16b0ab7a9f)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a215b54d-7289-449b-b4a7-1b138895308c)

* Both **False**.
* Option **D** is correct. **NONE**.

### Secret

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9dffb654-6e20-4cf5-9dfc-6f9de744b3fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b8bac30-f4db-4995-b36d-09e0e9b9625d)


#### Q6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7382eab3-962d-41ba-8ffb-b1cf9af47797)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/591d5f5e-c673-4aaf-b9df-41bed28c5fb2)

* We are finding **incorrect** statements here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b445358-fc30-427a-b6bb-a12bfd1388c2)

> This is also **incorrect**, because if we take **lock=True** then all of the processes can be at **critical section** all at once.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bfcb310-2736-49ee-80b9-493b3720ef2c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c6b5a31-1632-4f85-bb7c-c968d6b983f0)

* This is also **incorrect**, because if **lock=False**, then in the while we get **false**, so the process doesn't enter into the **critical section**. In that case, all of the processes doesn't enter into the **critical section**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a8bdb7df-98f9-48a0-be90-ff5c4eebb1e7)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10c8769b-b4ef-4054-ace1-7ef7afe14975)

* This is also **incorrect**, because if **lock=True**, the processes will enter into the **critical section** but none of the processes can leave the **critical section** as **lock=True** and the while loop is running over and over. The processes get stuck inside the **while loop** which is the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ee24102-6de2-4855-9b2f-7c9129f936a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a233ac5-5627-4f6d-9728-ef64c8ca704b)

* This is also **incorrect**, because if **lock=False** then the **first process** cannot enter into the **critical section** but the **first process** will set **lock=True**. Then the **next processes** coming after **first process** can enter into the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3183f403-0954-49af-913f-891b1e44ad8f)

* All **four** options are **incorrect** and they are asked to find **incorrect solutions**.
* So all options should be **selected**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81b2249b-d639-4fa1-bc5a-941334f2b051)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2464a580-8816-457c-8910-27891dba38f5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/803c5c5a-90f6-4800-8a2d-93c5c870559c)


### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1a9f09b-ddc9-4d30-8651-1e72578d7a1c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/028e7b0b-cf53-45a5-af84-eb2bc9b82251)

* This is **while(lock)**, no **semi-colon** at the **end**.

```
while(condition)
{
  // Some statements;
}

```
* This is **while(lock);**, with **semi-colon** at the **end**.

```
while(condition)
{
  //Not statements, empty
}

```

**OR**

```
while(condition);

```

* Both have **same** meaning.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9df1916c-8350-46f4-9c17-b363aee35f99)

* That's the difference.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0718afd1-b95e-462a-ab4a-11d3e938b53c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9456a272-10d9-46ca-a252-31dc1f76ecce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a73d9695-13d6-494e-acf6-510a5906b5c4)

* We have to find the **ratio**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a5d72d6-54cf-449d-a5a1-a7589d9f6d89)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c400f41e-bd7f-4282-9354-b6c248814bde)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e54ca078-e9f6-4dff-8653-7fcb7a16ed99)

* The execution is stopping, the code should stop. The solution stops then **bounded waiting** is there.

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2c55e5e-e2f3-40d9-8cb3-25f4c7b0c7d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf272c31-47bf-4c2f-923e-111f09d481f0)

* No any process can go further ever than, they both get **stuck** at the **while loop** as **lock=0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73d8c72c-699d-46fa-9f2d-fdd07b522019)

* Both process will run **while(!lock);** forever. They are **stuck**.
* **Deadlock** -> It means that we can say with **complete surity** that both the processes will never move forward or go further in any sequence we try to run them. **YES**.

> Two process have fallen into a **situation** where they cannot **move forward** from. Not at all possible to move forward from the **situation**. This **situation** is called as **Deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7cf7ccf6-dab7-4e98-89e3-03eb1790aa3a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9389053-ce28-40f6-b579-08deb55f02ff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16d83dee-4587-4a1b-9454-bf741498e7d1)

* Because both the process cannot enter the **critical section** at the **same time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed8ddb78-7405-40aa-8b21-fe98cf1b8768)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e96fdbb-2b96-4503-a216-6ab0b8ba1fc3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6b36cb3-c3f3-4d10-8e9d-1c50a314846e)

> We already know that in **binary semaphores(s)**, **mutual exclusion** holds. Only **one** process can enter the **critical section** only. So, all the processes will run **one by one**. So, in **I-1** we got **12**.

> As in **I-2**, it is a **counting semaphore(s)** and it value is **s=2**, so **2 processes** can enter the **critical section**.

> As we want **min values of x**, we have to **nullify** the **effect** of the **increment/plus** processes. So, for **I-2** we got **7**.

* **I-1** -> **12**
* **I-2** -> **7**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee3080ee-3c59-41a2-8c87-6a880ace4147)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f88348ad-5142-437c-82c7-42825f415182)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d81a9abe-eeb6-4833-a205-1e3a363c0915)

* We have to **nullify** the **impact**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2b87522-8664-45fc-a34a-00f787ded107)

* Max = 4
* Min = -6

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cbdd3878-d5d2-4a27-bc36-0894bfe12211)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ecfd6fd-cff6-4eee-87f2-1bc8a6f03970)


* x= 2, 4, -3, -6, -2, -1, -4, 1.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee447290-ffcc-4326-981e-9037d14bcc6e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f58110d0-2266-41c4-9667-342d72ff0c05)

* -1 = 2 - 3. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de821e8d-cf13-4faa-958a-06fb1273747e)

* Answer -> **8**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74472409-fc4d-420d-b089-ac2af5c45e8f)

* Semaphore(X)=0

> If **P2** process run/comes **first** the p2 process will **wait** forever, as **x=0** so, **P(X)** will not happen.

* P2 will **starve** guranteed.

> If P1 process hasen't started executing and hasen't run **V(X)**, then P2 will **starve** forever.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/721f7380-13f7-49fa-9e53-6d648dc60d5f)

* (II) -> It is possible for process P2 to starve.


> P1 process ran and it runs **V(X)** which sets **X=1** and after that p1 got preemted.  Now P2 runs and it runs **P(X)** which sets **X=0**. P2 gets preempted . P1 continues and after **computation**, runs **P(X)** but as **X=0**, P1 is unable to run **P(X)**. So, **P1** is stuck at **P(X)**.

* So it is possible that **P1** process can go for **Starvation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc9ad670-f042-464f-b716-9f3bad382aae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ade9a973-107f-4883-a8a2-cf1c8d73758b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/73f1fdce-15d2-4530-bada-f8f91957719c)

* Both options, **I and II** are correct.
* Repeat forever -> It means **while(True)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b18f583-c7bf-4bdf-8c4e-d81b1ce511bb)

## Busy Waiting

* **Busy waiting** is also called as **spin lock**.
* Process runs on CPU and keeps it busy, but still can not proceed further.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd473d19-0f1d-4b96-832d-7ce4eb7305d1)

> If condition is **True** then the process is **stuck** at the **while loop**, but the process will keep on running the **while(condition)** code. The process cannot move further. The process will keep running on the CPU. **YES**. We have not stopped the process from running on the CPU. The process will keep on running on the CPU. 

> When the  process keeps on running on the CPU and cannot move forward, it is called as **busy waiting**. Also called as **spin lock**.

> We have **locked** the **critical section**, when one process has entered the **critical section**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/415518ad-37e7-4651-af32-e681353a1b30)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00b28892-c3c3-4fd5-b0a1-a654829589fa)

## Solutions without Busy waiting

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/532856e7-2f57-42f6-a26f-41a8e512713f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/573aa235-4983-42da-a172-93709a4945c4)

> P1 ran first and ran the **wait(s)**, and it set **s=0** and p1 entered into the **critical section** as **s=1** initially and it was **preempted**. Now p2 run and set **s=-1** and as **s <0** is **True**, so p2 process is **blocked** and added into a **queue**. Now P3 comes and same thing happends with P3 as well, p3 get **blocked** and added into a **queue**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f732e22-45bc-4fb1-838d-e87346d3dd38)

> Now **P1** run again. It rain **signal(s)** and set **S=-1**. As **s** is **s <=0**, which is **True**, which means there are **processes** that are still in **blocked** state in the queue. When value of **S** is **less than equal to 0** then we will remove **one process** from the **queue**, which had arrived **earlier**.

> As p2 came first so it was removed from the queue. So p2 is moved from blocked state to ready state. As the **wait()** of p2 has ended, now p2 can go forward and enter into the **critical section**. When p2 leaves the **critical section**, it will run **signal(s)** and set **s=0**, as **s <=0**, so we will remove **one process** from the **queue**, which had arrived **earlier**.

> P3 got removed from the queue. Now P3 runs and moves forward and enters into the **critical section**. After p3 has left the critical section, p3 ran **signal(s)** and set **s=1**. As, **s <= 0** is **false** now which means **no process is in the blocked state and stored in the queue**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17db34fa-caa3-43d0-a597-44dbbf8d9e1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0d2a8c4-f303-4b4b-b033-043fcf4d85df)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7469f3a5-2a0d-4bb9-bde7-27030807978e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2b8a180-503c-4bed-a656-6cc5454a825c)

* When the process tries to run **wait(s)** and **s <= 0**, then we will **block** the process. The processes's **wait** will end when one process leaves the **critical section** and **wakes** up the process. Now the blocked process can run on the **critical section**.

* **S<=0** means multiple processes are in the **waiting section**. When process leave the **critical section** one at a time, we will **increment/increase** the value of **s**.

> When **s=1**, then all of the process are out of the **critical section** and none of the processes are in the **blocked state**.

* It is mentioned in the **implementation** that the **semaphore(s)** can be **negative**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b06615e6-2ec4-42f3-9081-6dd48a8ddd53)

* It is for this particular example only. Otherwise **semaphore(s)** cannot be **negative**.

## Calssical Problems of Synchronization

1) Producer-consumer problem (Bounded-buffer)
2) Reader-writer problem
3) Dining-philosopher problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8787b0f1-7c51-4d73-92d5-af89a2cee97f)

## Bounded Buffer Problem

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97ef324e-2795-4b65-a219-13fdd96721e8)

> When the **buffer** is shared, then we have to provide **mutual exclusion**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/abe767d6-8477-4140-b804-12d96038d87c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e017988-002c-4e6c-b5ec-7177539535a2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/227cd3c1-fc25-42fe-93ad-b940d36f63e9)

1) No any space empty in buffer
2) No any time in buffer

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9268dde0-2a15-4c7a-8a30-300d7233dc40)

* If **buffer** is **empty** then **Full=0** and **empty=n**.
* If **buffer** is **full** then **Full=n** and **empty=1**.

> For **mutual exclusion**, **binary semaphore(mutex)** should be initialized with **1** which is **Mutex=1**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2adc5f9-a63f-4507-894f-c697c9191dcc)

### Producer()

> If **Empty=0**, then **wait(Empty)** cannot go further. **Empty=0** then **no slot** is **empty**.

> If **Empty !=0**, then some slots are open, all are not full.

> **Wait(Mutex)** means we have taken **lock** on the **buffer**. If some producer or consumer had already put **lock** on the **buffer** then **wait(Mutex)** will not run.

> **Wait(Mutex)** ran successfully then we **add** an item to the **buffer**.

> **signal(Mutex)** means the **lock** on the **buffer** is released.

> If an item is already added to the buffer then the occupied space/slot's count will increase. We will run **signal(full)** so that in the **producer's end** the count of occupied space/slot will increase.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b24da072-9be1-4a5f-bd0b-6bbe60dc9871)

* When does the **consumer process** should block?

> When buffer is empty. None or zero(0) occupied slots, which means **Full=0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f4d64cd-8061-40ca-9949-ee5b59bdf26d)


### Consumer()

> **wait(full)** means when **Full=0** then the **consumer** will stop.

> If > **wait(full)** runs then it means that one item was there in the buffer.

> **wait(Mutex)** to take **lock** on the buffer and to access the buffer.

> After accessing buffer, we will **remove** one item from the buffer.

> **signal(Mutex)** means to remove the **lock** on the buffer.

> As we have emptied one slot above and to do that we have to do **signal(Empty)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af24f786-6579-42b9-8551-3d2f086b7220)

### Producer and Consumer

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d39fdf2-3cfe-4490-acf9-dde980b9b820)

* **Producer**:-

> We have first checked if **producer** should move forward or not.




* **Consumer**:-

> We have first checked if **consumer** should move forward or not. We have **swapped** the first two statemenets, which means **wait(Mutex)** runs first and then **wait(Full)** runs. Then what will happen?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d08cf80-3991-4579-a9fa-937b8a890cbc)

> Let, **Mutex=1 and buffer is completely empty**, then **Empty=n and Full=0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/404f4802-3518-45db-ad71-0f3ad0034758)

> One consumer came and it ran **wait(Mutex)** and **Mutex=0**. It ran **wait(Full)** but **Full=0**, so **wait(Full)** will **not run successfully**. As **buffer is empty**, so the **consumer** cannot consume anything. So, the **consumer** stopped.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3127974-e340-44c0-85dc-875453a60dfd)

> Now, some **producer** comes, and it ran **wait(Empty)** and **Empty=n-1**. It ran **wait(Mutex)** but producer didn't get it because **wait(Mutex)** is with the **consumer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04f369b6-8556-44af-9cf2-bc17a40c7133)

> So producer's **wait(Mutex)** will not run, the consumer's **wait(Full)** will not run. Producer's **wait(Mutex)** cannot run because **wait(Mutex)** is with the **consumer** only. Consumer's **wait(Full)** cannot run because **Full=0** but **Full** can be **1 or incremented** when **signal(Full)** is ran by the producer but the **producer** is stuck at the **wait(Mutex)** statement.

> **Mutex** can be **1** when consumer run the **signal(Mutex)** statement but the **consumer** is stuck at the **wait(Full)** statement.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af6a8e44-844b-4c19-90c1-1f3fd26728ae)

* So, **deadlock** happened.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d8e03c1-196d-42d3-9cd2-30dc357cdc08)

* If first 2 statements(**wait()** statements) of consumer process are swapped, then there can be **deadlock** when the **buffer is empty**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07ae29c8-58a1-43cd-9572-04bfccb7428e)

* Now we have **Swapped** the first two statements of **producer**. First **wait(Mutex)** runs and then **wait(Empty)** runs.

* In that case, when the **buffer is full**, then **deadlock** happens.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/009b88c7-0f61-4345-865c-2b4718d94029)

> First the **wait(Mutex)** of producer runs and it has taken **lock** on the buffer and **Mutex=0**. Now, the **wait(Empty)** runs but **wait(Empty)** cannot run because **Empty=0**. So, the producer is stuck at **wait(Empty)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a23fc520-40b5-46e7-88d9-9ea7edaf3e23)

> First the **wait(Full)** of consumer runs and **Full=n-1**. Now it has run **wait(Mutex)** but it cannot run because **Mutex=0** and lock is taken by the **producer**. So, **consumer** is stuck at  **wait(Mutex)**.

* Consumer cannot go forward as **wait(Mutex)** lock is taken by the **producer**.
* Producer cannot go forward as **Full= n** that's why. Producer is stuck at the **wait(Empty)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d49acf55-341f-4cf8-9cda-bcc61a1f2499)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5724867-a287-4f40-84e5-2e1b148c4e08)

* If the first two statements of producer process are swapped, then there can be **deadlock** when **buffer is full**.


* In normal scenario, when will be producer process stop/get blocked?

> When buffer is full.

* In normal scenario, when will be consumer process stop/get blocked?

> When buffer is empty.

* Types of questions coming from these:-

1) Fill/find the missing statements. [3-4 questions have come]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bd7e4a35-9396-42a1-a53f-98f8a040c5b6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2e88b6c-83d7-4660-a485-c82d092e13a7)

* Yes

## Deadlock introduction prevention (17) [31st May 2023]

## Reader-Writer Problem

* If a particular user who just wants to **read** is called as a **reader**.
* If a particular user who wants to **read and write** is called as a **writer**.

* If a **writer** comes, then we will allow only **one writer** at a time. No other **writer** will be allowed.
* If **one reader** comes, then after that we can allow as many **readers** as we want but we will not allow any **writers or writing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28adb378-d096-4c74-a51d-01cc12004355)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb71eee0-fc15-449c-b38c-61a293de90c0)

## Reader-Write Problem Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a2d56c8-7552-4664-af6b-90e85e32690e)

* Mutex =1 -> No Lock
* Mutex=0 -> Lock taken
* wrt=1 -> No lock in writing, writer can go for writing inside allowed
* wrt=0 -> Lock taken, no writing allowed
* readcount=0 -> No readers there.

### Write() Process

> If any **writer** comes then they will try and run **wait(wrt)**.

> If **wait(wrt)** is successful means that the **first user** was a **writer** and no **writer or reader** came before it. That's why **wrt=1** still. As **wait(wrt)** is successful, so **wrt=0** now. Now it can go for writing.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2f8c3c0-10d9-4d64-ad1b-213dc9128b06)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a01d2aba-f5e0-42cc-89e5-26195c7586dc)

> Then writer will do it's **writing process** and after that writer has come out, it will **signal(wrt)**.

* **wrt=1** means that a **writer** can go inside to perform a **writing** operation.
* When **wrt=0** then **wait()** cannot run.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2c5fb82-3d78-40cf-9c50-ffbd8efa916f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ec5acc1-5774-467c-991a-72554fde1607)

### Reader() Process

* Will a **reader** process stop another **reader** process?

> **NO**.

* Will a **reader** process stop **writer** process?

> **YES**.

> If a **reader** comes and the reader wants too **stop the writer**, then the **reader()** process has to run **wait(wrt)**.

> Let's say a **reader** comes and the reader has run the **wait(wrt)**, initially there was **no writing** that's why **wrt=1**.

* When there was **no reader or writer**, the initial value of **wrt=1**.

> A reader came and ran **wait(wrt)**, so **wrt=0**. Now a **writer** process cannot run the **wait(wrt)** statement successfully.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d32613d9-8431-4108-ac7c-f723d5f8ed89)

* All of the writers that come will be stuck in the **wait(wrt)** statement.

> All of the **readers** that are coming will run the **wait(wrt)** statement, **No**. Only the **first reader** that comes has to run **wait(wrt)**. After that all of the **writers** that come will be stuck at the **wait(wrt)**.

> If another reader comes after the **first reader** then all of the **readers** coming after the **first reader** are given **direct entry**. It is because **one reader** has enterted and has **blocked** all of the **writers**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2f58c05-8482-4f44-883d-6a5ca0bfa1aa)

* What we will doin the **reader()** process:-

> If **no readers** are there then the **readcount=0**. If **new reader** coms then **readcount=1**.

> We are doing a **comparision(if)** statement that, if the **reader** is the **first reader** then within the **if** statement we are running **wait(wrt)**.

* We are running **wait(wrt)** when the **first reader** comes because we have to block all of the **writers**.

> If the reader was not the **first reader** then the **readcount** would have been **2** and the reader process would have gotten **direct entry**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f252da3-1b7e-4d68-9d65-4f411d9934a4)

> If a writer was already there and was writing then **wrt=0** because of the **wait(wrt)** run by the writer process. If a **reader** process would have come then reader would get **stuck** in the **wait(wrt)** within the **if** statement.

> **readcount** is not a **semaphore** then multiple readers can access it. **YES**. The access of **readcount** we will make it **mutually exclusive**, so that the value of **readcount** is protected.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/045e2b61-ee16-4369-9fbd-0c72dc4c2754)

* This is the **entry** logic.

> If some reader has crossed the **entry** logic then the reader will start reading.

* If a reader wants to **leave** then it will **decrease/decrement** readcount variable.

> When the very last reader goes, then it will run **signal(wrt)**, which tells the **writers** that all **readers** have left.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1ed2043-c8db-4d92-b586-653b94ae39d7)

> We are protecting **readcount** variable as it is a **normal variable** by using **wait(mutex) and signal(mutex)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5667669-1349-43f4-a9fd-777ecdca0c65)

* We cannot directly access **semaphores**. We cann access only using **wait() and signal()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8752702-6da1-416d-85d5-1bb7d9607168)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0978c408-eabc-427f-adab-92ad076b4b85)

### Scenario 1.

> First the writer came and ran **wait(wtr)** and set **wrt=0**. It started writing. While writing it got **preempted**.

> One reader process came and it ran **wait(mutex)**, and set **mutex=0**. Reader **incremented readcount=1**. Reader ran the **if** condition and it returned **True** which means reader has to ran **wait(wrt)**, but **wrt=0**. So, **reader** process is stuck within at **wait(wrt)**. it cannot go forward.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b910766-95c5-4991-a838-e93e91ca6726)

> All of the subsequent **reader** process get stuck at the **wait(mutex)** because **mutex=0**. The reader processes cannot move forward.

* The reader processes or process cannot move forward because a **writing** process is going on.

> After sometime another **writer** came, writer tried to run **wait(wrt)** and the writer process got stuck at **wait(wrt)** because **wrt=0**. No **writer** can move forward as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97ce3853-4816-4ec6-9abe-61c25e24d398)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64d21e5c-f0cd-4644-a7ab-9562d65c30c4)

### Scenario-2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c39681fd-984e-4c50-b78a-aafbf1efd056)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaef0351-ca96-4034-b250-967b56b045ee)

> First a **reader** came and it ran **wait(mutex)** and set **mutex=0**, then **readcount** was **incremented** to **readcount=1**. Reader ran the **if** condition and it got **True**, so reader can the **wait(wrt)** which sets **wrt=0**. It ran **signal(mutex)** and set **mutex=1**. Now the reader is **reading**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3bfd19cc-5122-484b-b365-26ba849ee95b)

> Now a **writer** comes and it will get stuck at the **wait(wrt)** as **wrt=0**. Writer process is **blocked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8453f16f-d8d4-49c1-86a1-d0624509045b)

> Another reader came, it ran **wait(mutex)** and set **mutex=0**, then **readcount** was **incremented** to **readcount=2**. **readcount=2** means it is the **second reader** that has come and the **first reader** has already gone. Reader ran the **if** condition and it got **false**, so reader went out of the **if** condition. Then it ran **signal(mutex)** and set **mutex=1**. Now the second reader is **reading**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0c57626-6e69-4d07-8007-08a8e81dd98f)

> Another reader came, it ran **wait(mutex)** and set **mutex=0**, then **readcount** was **incremented** to **readcount=3**. **readcount=3** means it is the **third reader** that has come and the **first reader** has already gone. Reader ran the **if** condition and it got **false**, so reader went out of the **if** condition. Then it ran **signal(mutex)** and set **mutex=1**. Now the third reader is **reading**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca111466-35ba-4d2a-b268-09279758ec45)

> In any sequence the **readers** come out or any readers comes out of all the readers, we don't have any problem and it doesn't matter.

> One of the readers is leaving and has ran **wait(mutex)** and set **mutex=0**, **decremented** the **readcount** to **readcount=2**. It ran the **if** condition and got **false** so it comes out and runs **signal(mutex)** and set **mutex=1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/97080048-1489-4525-ac34-cd72c9bf9a9a)

> One of the readers is leaving and has ran **wait(mutex)** and set **mutex=0**, **decremented** the **readcount** to **readcount=1**. It ran the **if** condition and got **false** so it comes out and runs **signal(mutex)** and set **mutex=1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59dfb47c-c94f-4477-af8b-9619f1eb9a32)

> Now the last readers is leaving and has ran **wait(mutex)** and set **mutex=0**, **decremented** the **readcount** to **readcount=0**. It ran the **if** condition and got **True** and runs **signal(wrt)** and sets **wrt=1** for all of the upcoming **readers or writers**, so that when they come they can **move forward**. Now it runs **signal(mutex)** and set **mutex=1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e66872a-6df4-480c-b6ee-b8eb2bbd0f39)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ee6db73-e70e-4fad-8ac8-a25dea54138c)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3dbd772-e8b4-4219-99be-3e06fa460f21)

* Yes, because we are controlling the access. We are controlling the access very much.

> If a **reader** comes then the **writer** are **stuck/ blocked**.

> If a **writer** comes then the **reader as well as the writer** are **stuck/ blocked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fdd5177-eda3-46a0-996a-483bd2faa546)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fc8a54b-7def-4c65-be8d-c316d92c9e6c)

* What will be the **difference** if we remove the **signal() and wait()** functions from the middle?

> If we remove the **signal() and wait()** from the middle, then we are putting the **reading** in **mutual exclusion** as well. Which means that **only one reader** can enter at a time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f824a8dc-8b98-47ba-9222-a7bb74846bf6)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d83a9f4-98dd-47f8-bdf2-d786414691c6)

* If these 2 statements are removed then at a time only one reader will be allowed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2fdfe111-63f2-4498-bd5c-f3cd08d7c215)

* Same questions have come in **reader-writer** problem as well:-

1) Fill/find in the blanks
2) Write missing code

## Dining Philosopher Problem

* Philosopher -> Process
* Chopsticks -> Shared Resource

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93ef2bed-8f8b-40d8-8b7f-d064038f7f1a)

## Dining Philosopher Problem Solution

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c726f840-ffda-4269-9fbf-c151bd5ed0b5)

* For every chopstick we will take **one semaphore**.
* An array of **binary semaphores** of size 'k' to denote chopsticks

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac778878-07bb-402d-a7c2-73b7b7d3d5f6)

* For chopstick availabilty -> **1**
* For chopstick no availabilty -> **0**.

> We have written **wait(chopstick[(i+1) % k]** because at the **last philosopher** we are doing a **wrap around, creating a circle**, so that the **last philosopher** can access the **last fork and the first fork**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95a8bebc-d23a-4b81-98ca-85db9ced64bb)

* Yes.
* The **no. of philosophers** we have, **same no. of chosticks** we have.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21e17808-37ed-4496-9793-43acb2ce4da1)

* Circular case

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6ae5313-6d86-4ca6-ba28-b975ac53c1ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f422bf0e-5455-4a0d-813d-0811252efc0a)

* The **dining philosopher problem's solution** is **prone** to **deadlock** situations.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ded93d85-6dcf-4585-951c-8d379b3ca4c4)

* There is a possibility of deadlock.

> P0 process ran first, then it ran **wait(chopstick[i])** after it was completed then it got **preempted**. Between **two** wait functions, **preemption** is possible. So, the **ch0** chopstick went to P0 and before P0 could take Ch1, p0 got preempted.

> P1 took ch1 chopstick and got preempted.

> P2 took ch2 chopstick and got preempted.

> P3 took ch3 chopstick and got preempted.

> P4 took ch4 chopstick and got preempted.

> All of the **philosophers** ran the **wait(chopstick[i])** successfully and they have taken **one chopstick** each. For all of the **philosophers**, the statement **wait(chopstick[(i+1) % k])** is in **waiting**. The **waiting or wait()** statement cannot run because all of the **chopsticks** are acquired and each philosopher has **one chopstick** each. Everyone is waiting when the **right chopstick** is empty/free then they can **eat**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40c5a924-a811-4ba6-b066-bd0ba642dbdd)

> If this happens then the none of the **process/philosopher** can run **wait(chopstick[(i+1) % k])** statement and in that case, we will have **deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9570b1b-0bc4-41e2-929a-e27174c009ee)

* When each philosopher picks one chopstick.

### Some ways to avoid deadlock

1) There should be at most **k-1** philosophers on the table, with **k** chopsticks.
2) A philosopher should only be allowed to pick their chopsticks if both are available at the same time.

> Any philosopher will be allowed to pick a chopstick or to start the **wait(chopstick[i])**, when **both or two** chopsticks are **available**.

3) One Philosopher should pick the left chopstick first and then right chopstick next, while all others will pick the right one first then left one.

> We will make one philosopher, asymmetric, which means we will run **wait(chopstick[(i+1) % k])** statement first for that philosopher and then we will run **wait(chopstick[i])**.

> In that case, then **one chopstick** will be **free** and **no deadlock** will happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d086509-a431-47c8-adc8-64c258e85771)

* They are **three** different solutions, we can **pick anyone** and implement it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab02938-fab2-4607-9fc9-2ee5bbfb7e18)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/824f769a-a1ca-4c13-9438-71c13c5b96d4)

* 3rd way or solution to remove deadlock.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/106a94ab-4d85-4bfd-8fbd-f5b50f591663)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7e54d3b-fcf4-4de0-a663-9faee9e1dc1e)

## Multi-threading

* Thread -> Component of a process, or Lighweight process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d012e783-1a2b-4884-9946-1baff8b222ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b98bee8-e8db-4121-aa0f-29ddb4c1a580)

* Similar to this happens in **process execution** when we have to create **one type of process** for **multiple processes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7eb667ba-aac4-4f5a-bcba-6b50e4ed087a)

* Instead of making a **full copy** of the process, we will make **threads**. We will components of the process, many parts of the process will be **shared** with the **threads** and some parts will be **unique/own** to each thread.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f6ca277-a984-48c8-bce5-ba15ec795b3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/671613ba-39b8-4d74-b09a-d9a117aa3b3c)

* Thread:-

1) Some parts of the process will be shared
2) Some parts will be own.

> The advantage is that rather than making a copy of a big process, we will make a thread separately which will be **lightweight**.

* That is why **threads** can improve the performance of **parallelism**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4ea7fde-1126-42ad-b402-3ae2fbfd3fa9)

### Threads

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78e99d1d-3ecc-4842-b52e-85a731a9ad6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3ceb133-4f32-4ec9-8f8d-7787a270896a)

* Thread is some piece of a process.
* Register Set -> General Purpose Registers(GPRs)
* Heap is **shared** among threads.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b35d4f0a-ef3c-43e2-aeb1-b013e200a2fd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d94b6ed-adf9-4ec3-8ef8-118f0ff95c9e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3822a240-aab7-4d87-977e-7acf26c737ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c33b068-83d4-439e-a9e3-c73df504f78e)

* Yes
* Instead of making **processes** again and again, we will make **threads** again and again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0586882-7de3-421b-b22b-1c39748e05bc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/94abac47-2ac0-4a1c-961a-9c4649b0de28)

* **Code, Data and files** are **shared** between the multiple threads.
* **Registers and stack** are **unique/own** for individual threads.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c380baf-c312-4573-bf99-9a4eca2ae17c)

* Single Process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f85b482f-d31c-4796-b068-6763e11e2c43)

## Types of Threads

1) **User Level Thread** -> In some Java program which is a **user process**, we have implemented **multi-threading** then it is called as **user level thread**.
2) **Kernel Level Thread** -> In some OS process had **multi-threading** then it is **kernel level thread**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0626e87a-d6a0-4662-b910-eac3ca63c3ef)

* If there are **user level threads** then the **Kernel or OS** doesn't even know.
* **Kernel or OS** doesn't have any idea.
* If there are **Kernel level threads** then the **Kernel or OS** ofcourse knows.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6dfa0f3-6c3c-449c-895b-d85fe36855c0)

> There is **multi-threading** in **user process** then **kernel** doesn't know that there is **multi-threading** in **user process**. If the kernel doesn't know then who will do **switching** between the **two** processes? The **user process** itself will do the **switching**. 

> If the kernel doesn't have any intervention in the **context switches** between **two** threads, then the **time taken** for **context switches** will be **less** ofcourse. The **user process** can itself do the **context switches** between **two** threads, which will be **faster**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49fd3797-880e-4817-97f7-ec5fb467f5a9)

> For **kernel threads** the **context switching** is **slower** as **kernel** intervention is needed for **context switching**.

* **One thread is blocked** means that when the thread is **running** and it required some **IO operations** then the thread went into **blocked state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7da3e4ec-f9b2-4816-8a9a-da2687513e35)

> The OS doesn't know about **user threads**. So, if **one thread** goes or the **whole process** goes, it is the **same** for the **OS** only.  The OS will think that the **whole process** has gone for **IO** operation and the entire process is in **blocked state**.

> So if **one thread** is **blocked** then the **whole process** is **blocked**. The OS doesn't know it is **one thread** or **one process**. The process wants to go to **blocked state**, so the OS puts the process in **blocked state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c06ec98a-c7dd-4688-822e-dd579239b2b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f56927e7-769d-4e69-b8ca-cf0535c6b7f6)

* Exactly.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fcb8bde-740e-4605-8094-07f57543875f)

* We need to remember all of the **points**, as questions have come from them. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71b4a7c7-7e7a-4c38-bb26-99055365ef2b)

* Kernel knows about it's own **multi-threading**.

* [**IMPORTANT**]

* Question also comes from what is shared and what are not shared.
* Questions mainly comes from multi-threading.
* If other questions come from multi-threading then it is out of syllabus.
* Multithreading Model is for **clg exams** only, not needed in GATE.

## System Call

* Programmatic way in which a **computer program or user process** requests a service from the kernel.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac06271f-d8b4-4e3a-a75f-c52fea4e9828)

* Interrupt(Software Interrupt) request for kernel -> System Call.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dc88acdb-7fda-4c72-9d30-15c2d10ff484)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb674a15-6f92-499e-9946-a4de644cb071)

* Not needed for most part.

## fork()

* Fork system call is used for creating a new process, which is called as the child process of the current process.
* We can create a **copy** of the current process. **Whole process's** copy will be created and not a thread.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56f20d72-482a-4669-ba45-84a55aa265ae)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37d76f92-d47c-45a0-95d8-c26d27396440)

> The **fork()** call, has created a new child process. The new process code is **same** as the parent process.

>  The **fork()** call's result will be returned to the **parent process** so that the **parent process** knows if the **child process** was successfully created or not.

> The **child process** will also **receive/get** a value, so that the **child process** knows that it is a **child process** and not the **parent process** or some **new process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eab4265a-273a-419f-827f-aa6ae9cbe64f)

> If the child process creation was **unsuccessful** for some reason then some **negative value** will be returned to the **fork()** in the **parent process**. The return value of the **fork()** will be **negative**. Ingeneral **-1** is returned.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1ba8d55-e05a-4c14-ba7e-f46196c67d66)

> If the child process creation was **successful**, then the **child process** get/receives **zero(0)** and the **parent process** get a **positive value**.

> The **positive value** is nothing but the **process ID** of the newly created child process.

* We the child process is created then from where will the child process start running?

> From the **start**? **NO**.

> From the **fork()** call where the **child process** was created, after that **fork()** call, from the **next statemnet** the **child process** starts running.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30946209-fe1e-4deb-a884-3d06e10fd2c4)

* The **child process** will not run the **parent process** statements from **before**.
* The child process starts execution from statement after the **fork()** call which has created the child.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/720398f2-8302-446d-813c-af7689bf2318)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9c3b939-e285-47a1-a606-af47e2331342)

* Yes, if we start from the **beginning**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31550231-3b0f-4f54-a34e-f381bbae48fb)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/808fa13b-38ed-4355-ada5-1a69e72b2a6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9df1a65-0b3d-4c7f-aaaf-aa1234ca6ecc)

* yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7b69bec-1ad8-4251-9046-6e1b50fdadaf)

> First we will do **fork()** and whatever value is returned from the **fork()** will be returned to **x**.

> From the **parent** process we have make a **child** process. The Parent and child process are running parallely or concurrently.

* From the **fork()** what will be parent process get?

> **Posivite value** which is the **PID** of the child process that is created.

> The **PID** of the child process will be copied into **x** variable.

* From the **fork()** what will be child process get?

> **Zero(0)**.

* When the parent process printf statement runs then we will print **x= 10243**.
* When the child process printf statement runs then we will print **x= 0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/962a1179-7dbb-4e8e-af7b-82c0a7c626df)

> We don't know if the child process's printf statement will run or the parent process's printf statement will run. We cannot **predict** it. We are not the **OS** that we will know who will run **first** whether it is **parent process or the child process** print statement.

> Any process can run at anytime. They are **concurrent** process running and they can run at anytime.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3a02033-7d27-4f7c-bd61-28a27eaaffe3)

* Not parallel but concurrent.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d20cab26-1a6d-4583-b3a8-50bc032b7e65)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1cf858ba-8199-4b4a-a015-3e387290d40d)

* No. They are concurrent processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a94fb280-8c94-462c-a5a7-a1f14f6a8dcb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c83b0374-e3fd-4482-97b3-ba865ad21498)

* We don't know which will run first or earlier.

* There is one process, which has called **fork()** two times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f5e82af-074d-4163-920b-88cfaef23eb0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/809b6e7b-8be3-4705-86df-fd16317f992e)

> The process(p) has run the **first fork()** and has created one child process(c1).

> Now the process(p) and the new child process(c1), will run the **second fork()** individually on their own.

> So process(p) on running **second fork()** created one child process(c2).

> So child process(c1) on running **second fork()** created one child process(c11).

* Total **no. of child** processes are -> c1, c2, c11 -> **3** processes. [**Answer**]
* Total **no. of processes** are -> P, c1, c2, c11 -> **4** processes.

> Total **no. of processes** are **4** if we include the **parent** process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ed18f61-2890-46c5-adcc-2d16902c3e05)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64c41634-3046-4645-b84d-68c85bee5c82)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1c3e4fa-90e8-4807-b527-ae2b0cf3b68c)

* If **'n' no. of folk()** calls then,
* Total **no. of child processes** -> **(2 ^ n) - 1**
* Total **no. of processes** -> **(2 ^ n)**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/325d6d18-65b5-4106-8baf-ce482e5b336f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/781800da-9f75-4fd8-891b-29b0363290ba)

* We don't know who will do the **printing** first.

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2792e757-088b-49c0-a7df-52cdf8f652f1)

* 7

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a96b773a-d365-4597-8ac4-9cb3a576e374)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1025069b-ccd3-4439-86a4-bb4f6f0e177a)

* (2 ^ n) - 1.

> One time to remember is that if the **child process** hasen't **died/terminated** yet then the **parent process** cannot be **terminated**. [**IMPORTANT**]

> Before terminating **parent process** , we have to terminate all of the **child processes** first. Otherwise **parent process** will not terminate.

> If the **parent process** was **forcefully terminated** then the OS will terminate all of the **child processes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d2e1f03-db55-4bba-b7ff-cf8cffc3f4bc)

* They are processes, nothing is shared between them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f822aa1-6970-4bd0-b16d-56c9399ed09d)

* OS will do it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df847673-95a6-4bb8-98df-fd88a17282d3)

> The **fork()** return value for **parent process** is **positive value** and **if(positive value)** is **True**, so the **parent process** entered into the **if** condition. **Parent process** runs the **second fork()** and another **child process** is created.

> The **fork()** return value for **child process** is **zero(0)** and **if(0)** is **False**, so the **child process** doesn't enter into the **if** condition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/810a8a2b-5d6f-4872-bab3-c6d6de46a5b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84828c63-ee56-4000-a236-4eb359603a09)

* 1's printed -> **3** times.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ed899c0d-9421-4999-b2da-66947f0f7d2f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37628480-7507-4894-860c-443944957533)

* We are assuming that **child creation** will not **fail**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2b33bcb9-b774-467a-9a5d-533506fd38df)

* Ofcourse

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02207dbc-dbb0-4dfd-845f-5e03417ffc9b)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/777bd83e-3fda-4eb1-b366-35b3ed590645)

* DPP homework.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44b517dd-a635-4481-9088-7fddfadb79db)

## Deadlock avoidance (18) [1st June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/931db2f5-ebd8-4880-b9fa-264be886e799)

* Option **B**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b015765-3eee-4a5e-adce-8f83cff1ea6b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8301749b-2852-448e-b13f-1fb09589b885)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c9a401e-d09e-402c-8a50-68fceae85508)

> If any **IO device** is there and that IO device has to use some process then the IO device cannot use the process without the permission of the OS.

> Between process and OS there are a many operations that take place on a resource.

## Operations on Resouces

1) Request
2) Use -> Allocated.
3) Release

> Between request and allocation, the **OS** is standing between them.

> If any process request for a resouces to OS. The OS can allocate the resouces to process if it is available.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56d82d97-bd0a-4684-9bac-acd7b92408f1)

* The **release** of the resource will be said by the OS?

> **NO**, the **release** is done by the **process** itself when the process is done with use of resource.

* The resource cannot be forcefully taken away not by the **OS** also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f441b59e-7f7a-4b60-98a9-335ddaca8817)

> The **resource** we are talking about isn't **hardware** resource only, it is **software** resource also.

* The **resource** can be **hardware as well as software** also.
* Software -> Files.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5387b95a-d5aa-46f3-9976-88220ec0c75e)

## Deadlock

* If two or more processes are waiting for such an event which is never going to occur. Then it is called as **deadlock** situation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6aa245bd-6e28-4cf0-aff2-365752362774)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df5a3c1f-1a3d-46dc-b6c1-2cf890276d28)

* Yes, after task is completed.
* Resource cannot be **preempted** by the OS until the task of the resource is completed.
* Resource can be **allocated** by the OS.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a049ae9-8a0f-42dc-96f3-18ca0ece05ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6e76e97-71b9-4925-81b0-9e76d7cdad21)

* **Holds** means the resource is **allocated** already.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5fd4e630-f836-44a0-bb83-f420df81befa)

* It is a **deadlock** for **P1, P2 and P3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49dc2d3b-1a63-4b1c-bed7-37456935d1db)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1d31cbf-2a60-4ba5-8407-69b14727bbff)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5149116e-4bb3-446f-a014-da5c454577aa)

* Deadlock happened between the **you and sibling**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3624c792-3780-455d-aece-9fbd12834f6a)

* Deadlock happened between **employeer and employee**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3363acc1-9ee6-4408-ba47-9f020295c215)

* Deadlock happened between **engineering student and GATE score**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cdc6a38-04ae-4beb-8e3d-1355abbf5f82)

* Deadlock between **job and experience**.

* What is the **difference** between **starvation** and **deadlock**?

### Starvation

1) **Indefinite waiting**. There is a chance that the wait will be over.


### Deadlock

1) **Permanent wait**. No chance that the wait will be over.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af17b7d4-1256-455e-9c86-223e2fadc5cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a596f14a-c27a-4a18-a52b-f33c942459cb)

## Necessary Conditions for deadlock

* Deadlock can occur only when all following conditions are satisfied:-

1) Mutual Exclusion -> We are talking about the **resouce use** for mutual exclusion. 

> If a resource **at a time** is being used by a process, then another process at the **same time** cannot use the same resource. That is **Mutual Exclusion**.

> If **two** processes at the **same time** can use the **same resource**, then **deadlock** will not happen.

* A resource can be used by 1 process at a time.

2) Hold and wait -> All of the **deadlocked** processes must/should **hold** atleast **one resource** and should/must **wait** for atleast **another resource**. If so then there is a possibility of **deadlock** otherwise not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81de4f33-a455-4376-b1fe-65da5e11e4fa)

> P3 will get **executed** as it has got **printer** and after execution p3 will release it's resource **printer**. Now P2 has got access to printer, p2 will execute and release it's resouces. After P1 will execute. Then there will be **no deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca64f05c-2286-49ce-a24b-3af45e25b45f)

> P2 will execute as no process had **printer**, then p1 will execute and at the end p3 will execute. Then also there is **no deadlock**.

3) No-preemption -> Allocated resouces must not be **preempted** from the processes.

> If a resource is there already at one of the process, then the OS cannot preempt those resources. Then **deadlock** may happen.

> If the **OS** is given the power to do **preemption**, then **deadlock** will not happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc933541-848a-4c6b-8599-f51b14a07b52)

* No one can **preempt** the resouces, not even the **OS**.

4) Circular Wait -> All deadlocked processes must wait for each-other in circular manner.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2649f8a2-e4e6-4bbc-8ac7-1256e76d9653)

> P1 is waiting for **HDD** and P2 has access to **HDD**, so we can say that P1 is waiting for P2. P2 is waiting for a resource which is with P3. So, P2 is waiting for P3. If P3 is waiting for P1 then there is **deadlock** otherwise there is **no deadlock**.

> P3 wants **camera** but none of the other process have access to **camera**, so P3 is not waiting for any of the processes(P1 and P2). P3 will get **camera** and p3 will complete. Then P2 will complete and P1 will complete. So there is **no deadlock**.

* All of the above **4** conditions should be satisfied for a **Deadlock** condition to occur.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87a81f78-5670-41f6-9ab2-56da5f899767)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e6b3228-3f9f-4a26-a9cb-762089a28b0b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/886c7d8a-ccd1-4047-b970-11b78f0388fe)

* Yes.

## Resource Allocation Graph

* Which **process** has **access** to which **resource**.
* Which **process** is **waiting** for which **resource**.

* The **nodes** can be of **two** type in the graph:-

1) Process node -> It is represented by a **circle**.
2) Resource Node ->  It is represented by a **rectange**.

* The **edges** can be of **two** type in the graph:-

1) Allocation -> Which resource or resource instance is allocated to which process. It is a **directed edge** from **resource to process**.
2) Request -> Which process has requested for which resource. It is a **directed edge** from **process to resource**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aeceda29-cee5-40c2-a4e4-f293e49b4195)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c7924037-fd50-4056-9ff5-68d6966c2af9)

* One of the **resources** has **4** instances.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb934628-c051-4a36-8635-40b236a56a9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac001624-f6fe-4abd-9194-71878218aba4)

* Hold -> Allocation
* Wait -> Request

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d6bbc70-2622-4231-ad27-28c93c7448f6)

* Draw a **resource allocation graph** of the above table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/753798dd-c378-4679-a630-4575621e8ece)

* **Resource allocation graph**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/001859db-7eab-41b1-8fd1-d04305c028db)

* Create a **table** for the **above graph**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d2281cb-dbad-4279-9003-1603dbd967e9)

* Table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/309ec7a6-a6dd-4c99-8def-850274aa55cc)

* If needed, YES.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/915b85d8-54f5-4c6f-ac23-724d4748f1b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8241bf60-c740-4f51-983f-783ca3a27d71)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/173d78fe-77dd-4b32-a58c-b9b538c985d8)

* This is how.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/108d703c-c5d5-4f18-80da-1a81dc889503)

* Total no. of resources we cannot get. It will be given separately.
* From the **table** we cannot tell how many resources are **free**.

## Recovery from Deadlock

1) Make sure that deadlock never occurs

* Prevent the system from deadlock or avoid deadlock. There are two types:-

1) Deadlock prevention.
2) Deadlock avoidance.

> In both of the **cases** OS will make sure that **deadlock** never happens.

2) Allow deadlock, detect and recover
3) Pretend that there is no any deadlock.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8d9ecf7-8f5f-49e5-98c8-9abdb583c3a8)

## Deadlock prevention

* Does not allow system to satisfy one of the four necessary conditions for deadlock.

> If one of the conditions are not satisfied for deadlock, then there is **no deadlock**. All of the 4 conditions should be satisfied then **deadlock** happens. There is **AND(&&)** between the all four deadlock conditions.

> If one of them is **false** then there is **no deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3503349-7d46-4957-a3cf-43cfdde7039f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/153301fe-f4b2-400d-ba16-77b2ba3844c7)

* To fail **mutual exclusion**:-

1) Make all processes independent -> It is **practically not possible**. The advantage is that there is **no sharing of resources**, so **mutual exclusion** is not needed. No two processes need communication between them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02682522-4da8-4bc0-b007-56a410ed0d9e)

* Independent resouces. No shared resources.

2) Increase no. of resources -> so that each process can have their own resource -> It is **practically not possible**.

> To **dis-satisfy or not satisfy** mutual exclusion, it is becoming **not or non-practical**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f32d5f8-dfc4-404b-b45d-c91d99eb6c7a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af6327fa-a683-45c8-8d56-a9702d03db42)

* To **fail** the **Hold and wait** condition:-

> Either Hold or wait, but not **together**.

> A process should either wait or hold but should not do both together.

> To stop **Hold and wait** condition, the process should either wait or hold. The process should **hold** when the process gets all of the **resources** and then holds and uses the resources.

> If the process has **no resources** then the process will **wait** for everyone.

> A process needs 3 resources to work, only two resouces are available and one is not. Then the process will hold/aquire those **two** resources, **NO**. The process will **wait** when all 3 of the resources are available, until then the process will not **acquire** anything. The process will be in **waiting** only and not on hold.

* A process must acquire all resources together if all are available, or else must wait for all.
* Decreased resource utilization.
* Possibility of starvation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/711474fa-8784-4fba-acf9-ddc267fa1077)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a24ccad-64f3-4149-8494-6ab1a715a63b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64fbcb08-9dcb-4aef-98d4-62f0938e7091)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/719d955a-64f6-4192-a815-f7d4881c986a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/62735a50-d539-4705-aae9-5c7f43b5532f)

* YES.

* **Hold and wait** situation will never happen.

* To **fail**, the **No preemption** condition:-

> OS tries to preempt resources from processes.

> Process may be in unstable state after resource preempted.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d40361b8-2228-4ab5-bef5-387bca0debb7)

* To **fail**, the **Circular wait** condition:-

> Give **numbers** to **each resource**, R1, R2, R3,.... Rn.

> A process can request a resource Ri, while holding a resource Rj, only when i > j.

> If a process is **holding** R1 then the process can request higher resources.

> A process can request for higher no. resources if the process is holding a smaller no. resource.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7dcefbac-9ad3-4a8a-87fd-40aed811a180)

> If a process is holding **R3** resource then it cannot access **R1 and R2** resource.


* So that **circular weight** doesnt come.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57f1e316-57f3-4def-82bb-6f0a2e8edbb2)

> We can do **decrease order** communications.

## Deadlock avoidance

> The OS will allocate the resources in such a way that the OS will be in **safe test*. The system always stays in the **Safe state** which means that there is **no deadlock**.

> **Safe state** is a condition, where the **deadlock possibility** is **zero(0)**.

> If the system is in **un-safe** state, then there is a possibility that **deadlock** will happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2574e67-a9ee-4772-abed-261e9f89cd73)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/df4b01d6-738b-439d-b011-934ff32ecc37)

> Deadlock avoidance will not allow the OS to go to the **unsafe** states.

> In Deadlock avoidance, the OS will do when a process requests for resources, the OS will check if the requested resources are given to the process then the system will be in **safe state or not**. 

> If the system will be in **safe state** then the requested resources are allowed. othewise the request is not allowed because the system may go to **deadlock** condition, there is a possibility for that.

* Before giving the resources to the process, the OS will check if the system will be in **safe state or not**. If in **safe state** then give, otherwise don't give. 

* In **deadlock avoidance**, the request for any resource will be granted if the resulting state of the system doesn't cause deadlock in the system.

> In **deadlock avoidance**, each process must declare to OS that for which resource how many instances at **max** the process will require. This is **not practical**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbcd8497-e51a-4eff-8d26-670c5c059df2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d91b04da-0138-4bc8-affb-40031085b617)

* They are all theoretical.
* They are not practical.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e947536-eb87-433a-a7fe-119eb857c53d)

## Banker's Algorithm

* The banker's algorithm is a resource allocation and deadlock avoidance algorithm that tests for safety.

1) Safety Algorithm -> Checks if system is in safe state or not.
2) Resource Request algo -> When a request comes from process, then OS checks if the request can be granted or not. 

> Granted means system will be in **safe state** after allocation.

> **Resource Request algo** runs in the cases when a process requests the OS for the **various resources** it wants. The OS will check, if after giving the resources the system will be in **safe state or not**. If in **safe state** then OS will give the resources to the process, otherwise resources will not be given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ca2a5c-aba0-43cc-abef-1308cc952e6c)

* Short-circuit condition.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33e873b6-e8fc-4160-a526-af1cbd93fe49)

* **5** times printed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/014577d8-db8f-49c0-8a66-dd353682c5f1)

* Quiz-3 syllabus

## Deadlock detection recovery (19) [2nd June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/acc581a8-d309-4e0c-8fa3-e7e7a24b7c07)

## Banker's Algo

1) Safety Algo
2) Resource Request algo


## Safety Algo

> When we will run **safety algo**, it will check if the system is in **safe state or in un-safe state**.

> Safety algo works on a simple fundamental that is from every process, the **max** requirement would be asked.

* **Max** requirement -> Max. no. of resources needed to completely execute process.

> Process P1, requires **1 R1, 1 R2, 1 R3** resource for complete execution of P1. It doesn't mean that when the process arrives, it will get all of the **three** resources. The process said it needs them, it will request when needed. The process will tell/request the OS when the resources are needed, at that time give the resources to the process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aaa3378c-4cb4-4a05-a1ca-f683f4caf065)

> At the starting, the OS will **allocate** nothing to the process. When needed, the process will request the OS.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3c92a40-e05b-4796-8fbf-4b35fa374666)

> We know the **max** requirements of the process and the current allocation of the process. Now tell the state currently if the system is in **safe state or not**?

> We will check that using **safety algorithm**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/500915dd-a143-4cdd-a49c-83d176b629e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcf03a4b-fa44-439f-a321-dd3aeb644514)

> The need of **P3** is **less than or equal to** the **available** value. We can fullfil the need of **P3**. We are checking if the system is in **safe state or not**.

> Let's say we fullfilled the need of P3 as it needed **1 resource** and we have **1 resource available** and gave it to p3. So, the execution of p3 is **completed**. If p3 execution is completed then p3 will release all it's resources.

> When p3 has completed execution then we had **1 available resource**  and p3 will release it's **3** allocated resources. Then, we will have **4** available resources.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bbe23fbc-e68f-4e4b-9486-4ba142fb03d4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4f49cf3-8af4-407e-94ad-642ab5cd3842)

* For P3, needs **<= or less than equal to** available. After P3, **available = (available + p3's allocated)**.
* P3 is completed. 
* After p3 completed, we have **1 + 3 -> 4** available resources.

> We need to find another process, where the **need <= available** like above. We are repeating the process.

> We can take **P1 and p2**. We can take anyone between them. 

> After p1 is completed, we have **4 + 1 ->5** available resources.

> We can take **p2 and p4**, doesn't matter take anyone.

> We took **p2** and after p2 completed execution, we have **5 + 5 -> 10** available resources.

> We took **p4** and after p4 completed execution, we have **10 + 2 -> 12** available resources.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6e4895a-c938-4c97-bc78-f1b104994776)

* Can we run processes one after another?

> **YES**.

> If all processes are **completed** which means that the system is in **safe state**.

* All process can finish, hence system is in **safe state**.

> From the **order of execution**, it is much more important that we have executed p3 process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11021f7b-e4c8-4af7-841d-a3cceb0b41dc)

* Yes, good point.

* In what sequence we will run the processes to get the **safe state**?

> Safe sequence -> <P3, P1, P2, P4>

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/616c8ea3-e468-4621-9b07-62a346fe825f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69c8320f-d426-41c1-bdf4-65e135d9be77)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c10a93c-81f5-4b12-abd7-87356f8a4eba)

* Many no. of **safe sequences** are possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b0b77a8-786d-4b8c-8d99-0687b26e736c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d115308-b958-453d-81bc-bab49d997d7e)

* This types of questions usually come in **GATE exam**.
* They will given **Safe sequences** in the options and we have to find the **safe sequence** or if the system is in **Safe state or not**.
* The table will also be given in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eee23fa3-3ceb-459f-9678-dd503d7fb7ed)

> First we find out the **need** for all of the processes.

* Need -> (Max) - (Allocation)

> Then we can with the **available resources** which **process's needs** we can fullfil.

> After the **process's needs** are fullfilled then the process is executed and the **allocated resources** of the process are **released** and those resources are **added** to the **available** resources.

> Now we repeat the above process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/858b0a11-a7e1-45a5-8edf-26ff2c29f54d)

> The available resources is **A=7, B=4 and C=3**, we can fullfil any of the **3** available processes(p0,p2 and p4), which means the system is in **safe state**.

* **NOTE**:- [**IMPORTANT**]

> If an **individual process's need** is **less than equal to** the **current available resources** then no need to **check further** and run the process in **any sequence** and complete it.

> We can run the processes in **any sequence**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9f38424-fe7a-4a3a-baa0-50e7a80ef48b)

* Not Yet in GATE exam.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8dbf7e9d-98ec-44f6-93ae-df8b43e6e5cf)

* Multiple safe sequences are possible.

* At some point of time, **needi > available** for all **i**, then the system is in **unsafe state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bba568ff-a020-4205-8d54-4d1c4d49ed1b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/43da63cb-f1f5-457e-9be0-09a2e438df94)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d922ac9-a8af-45eb-a662-de1c2880a5eb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ad40402-cc9e-48e7-a7ac-dd80fd05476a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33975a7e-4635-4473-a975-f4b21513f9fe)

* Any process(p2, p4 and p5) we can run after **p3**. The **available resources** is more than all of the **individual needed resources** of the processes. 

* (Available **>=** Need).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44c7a3fe-57dc-44bb-88ce-53115ec4786f)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68500683-93e4-4e7b-ada2-906da785fab8)

* System is in **safe state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4805f135-64be-44af-9c78-57f0a270f937)

* Multiple sequences are possible.

* Sometimes, the **available resources** may not be given.
* They could give **total resources** as **A=3, B=14, C=12 and D=12**.
* To find the **available resources** we have to **substract**, (**total resources** - **Allocation resources**)
* **Available resources** -> (**Total resources** - **Allocation resources of each process**)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/833dd065-6065-437e-9cbd-03ee5c4aaf60)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffa174dd-38ae-4fa4-a2fc-55ea9b13a8f8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/886a1317-2144-4ac5-8326-e8346738db92)

* Yes, we will check in the next algo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e5ae05e-9703-4d72-ab30-97a3f31d608b)

* We solved it earlier and found out that it is in **safe state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2177a57-4001-47ac-9fdb-a766c8f6c886)

> The OS will check that if after fulfilling the **request of P1**, the system will be in **state state or not**.

> If the system is still in **state state** then fullfil the **request of P1**, othewise don't.

> It is because the **deadlock avoidance** algo states that we will grant the **request** of any resource when the **resulting system** is in **safe state**, otherwise we will not grant it.

> If any such type of requests comes from processes, then we will **first** check if the **request** made by the process is **even valid or not**.

* Valid -> It means that

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7233e391-3e13-4b83-92c1-d713ed645ef6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85d6443b-bfef-48eb-8ffe-d05ecf58c8b6)

* The **max** is **5** and we have allocated **3.5** and the person **need** is **1.5**. But suddenly the person came and **requested** for **1.7**. The limit of the person is **1.5** only.

> If the **request** is **less than or equal to** the **need** of the **person/process** then the **request** is **fullfilled** otherwise **rejected/denied**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab60cc7d-8fee-445a-ae70-47c8e5884b32)

> If **request** is **bigger** than **need** then we will say the request is going beyond the needs and we cannot fullfil it.

* STEPS:-

1) If the **request of the process(i)** is **less than equal to**, **need of the process(i)** then next **step**, otherwise **stop** as it is an **invalid request**.
2) If **request of the process(i)** is **less than equal to**, **available resources** then next **step**, otherwise **stop** as not enought resources.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5525eafb-52bd-4872-99ae-4721c0cdfc18)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5d4be1a-9041-461a-971c-fea28eac92a0)

3) 1) Allocations of process(i) = Allocations of process(i) + Request of process(i)
   2) Need of process(i) = Need of process(i) - Request of process(i)
   3) Available of process(i) = Available of process(i) - Request of process(i)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf7143fb-5d09-44b8-8ce6-ba32aa5bc9c2)

4) Run **safety algo**, if system is **safe** then request is granted, otherwise **request** is **rejected/denied**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8c36d5cb-463c-400c-bd32-58159eabc3a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f01348b-3b81-4ccf-a1bb-83edbcd8c5ee)

* Let's run the **request** of P1 process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fde1ffe-e53c-41a3-a30b-05e587dca6ab)

> We first find the **need** of the processes. Then we check to see if the **request** of P1 process is **less than equal to** the need of P1 process. So, it a **valid request**. 

> Now we are checking if the **request** of P1 process is **less than equal to** the **available resources**. So, **resources are available**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9bc6c216-124a-4a46-8ef9-6efd5e4752a4)

> Now we will **add** the **request** of P1 process to the **allocated/allocation resources column** of P1 process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c9fe2d8-0947-4f47-848c-6d8f7fd57568)

* Now the **allocation of p1 process** -> A=3, B=0 and C=2.

> Decrease the **need of p1 process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a5805032-36ae-431b-bef7-b7aba43011a0)

* Need of P1 process -> A=0, B=2 and C=0.

> Now change the **available resources**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4aa48789-923d-4e15-8bda-06c18174faa8)

* Available resources-> A=2, B=3 and C=0.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f44a0178-37b9-4015-8169-91a948893232)

* On the **new table**, run the **safety algo**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d742543d-5063-4654-b888-c2f7f2d73345)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a9c88eef-6abc-4c4d-b2de-ab07d223b899)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89d95f8e-47a8-4901-a2d8-57d216eed02e)

* System is in **safe state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c064392-7b93-43e9-b71e-ce05dae28cb2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4436e089-e1a5-4514-922c-6ceba34ce543)

* Request granted.
* The **request** made by P1 process is **granted** as the system is in **safe state** still.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d73855d9-1f00-4ffe-9ab4-f3e9c8db3708)

* Check if the **P0** request will be directed or not.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4f05f61-431f-4089-8df4-8f1ccc40823f)

* In this state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbab2676-c40e-49a6-bf5e-f997c1c4abd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f360ca25-5fac-411c-a91a-a91b5699828c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f272a034-3849-45e0-b842-03985cb77a1a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52b285f0-9d43-47d7-9bda-5d09e0bd35a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8e91562a-bc0b-4573-ba33-b370e635aebf)

* Homework.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5045e938-850b-427c-846c-4d3974b0dded)

> Now we will check individually that, if the request of p1 is **granted** or not. If we can **grant** the request then **grant** it. Do all of the changes.

> On the **changed scenario**, now check the request of p3 that it can be **granted** or not. If we can **grant** the request then we can say that we can **fullfil** both of the **requests**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f2c2f1e-48d0-490e-ba7f-bdd62e721477)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f99e8478-8c9a-4b27-81c3-ca0fbb0a0512)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2e082240-e170-41b3-ba26-d727f2b6aa8c)

* On the original table, then that is **option 2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36e5af84-b320-4e88-8ce2-d7a8eaabce02)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ce2d8a2-147f-4ef0-b44a-241f7b3d8d50)

* **Option 5** means that the requests will be individually **granted** on the **original table** and not **one after another**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28f47178-a437-4623-9999-db7d1e5cc1ef)

* Homework.

## Doubt clearing session questions on deadlock (20) [2nd June 2023]

## Homeworks from last class

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bab8b39-80af-4a22-b4c6-40ec77652f56)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d929ae5-bdf6-4f26-80bd-55937482d327)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37de8a56-bcee-49bb-b9c1-a3cbfd8a36c8)

* We checked earlier that the request of **P0** was **granted**
* Now the request of **P3** is **granted**.
* So, both the request of processes **P0 and P3** are **granted**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de8fe4b9-9cf3-4260-9249-48eccd0ae6fa)

## Deadlock Detection

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46d419ee-e0ee-40ce-bf60-98a7dde2f47c)

### Single instance

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/309cd810-a650-4e0e-af67-171a6008f0e9)

* Wait For Graph -> Construct from resource allocation graph.

### Wait For Graph

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f8258b63-c81d-473a-b76d-46ffe94c8175)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0cc7bd9f-1596-44e1-80d0-3aea8c160402)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12c3a81b-912d-4d7f-be00-bf0a1469c03e)

* It has only processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/99a1c85e-4887-4373-be56-cebc31ac1cc6)

* How does one process wait for another process?

> For P1 process to run, P2 process has to end because P1 is waiting for **R1** which is taken by P2. When P2 finished then R1 is released and now P1 process can run.

> P1 process is **waiting or waits** for P2. That's why we have made an **edge** from **P1 to P2** which is in **graph (b)**. **Wait For**, **Wait For** whom? That's how we will get the **edge** from **source to destination**.

> After the **wait for graph**, we will check for **cycles** in the graph.

* If there is **any cycle** in this graph then there is **deadlock**.

### Example

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8411839a-4eab-476d-9517-c5970dc819e4)

* Draw **wait for graph**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/854a197c-e7c4-4ff0-88ac-4e88882fa2ef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6eb6dd4-5c1d-46c3-8b6d-2a8498f277ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6aa5aec3-b793-4f56-9644-fbbed7ac934c)

* P2 and P3 are in **cycle**, so the **graph** is in **deadlock state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3c8396c-b384-46a9-91c1-aee078fd2420)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fa5b50c-3934-4867-bb23-a69da960cdd7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a5a2836-8197-4a5a-a765-c4e4d872003b)

* **Wait For Graph** works when there is **only one instance** of resources in the graph. When we find a **cycle** in the graph then we can say **guranteed** that the graph is **deadlocked**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/64bf6f0d-0a40-420d-ae3f-f88ce906b497)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c974792-36b5-4f63-84a9-59a5a0cf1fad)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a628afd-1da7-45ed-8268-d52da20c73ad)

> There is a **cycle** in the graph. It is **not guranteed** that it is in **deadlock** because we have **more than one or multiple instances** of a resource in the graph but we can see that p1 will run when p2 is over and p2 will run when p3 is over. P3 will run when one instance of **r3** resource is free from **p1 and p2** process. So it is in **deadlock** actually.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4a62b71-53e9-4a65-ac01-1271469c9e16)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ca19b74-03b6-4cd5-ab08-9dd03aeb2bc2)

* Cycle is there in the wait for graph but there is no **deadlock**.

> P2 is not waiting for anyone. P2 can finish and release one instance of R1 resource for P1 to run.

> Similarly P4 is also not waiting for anyone. P4 can finish and then P3 can run.

## Deadlock detection with multiple instances

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1104567c-c436-4987-b57c-adc12db6fb50)

* Similar to banker's algo.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1b6f3e7c-f698-4cf7-a161-7175b8ec460a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/875de069-5f37-4cd8-8e2e-fdb4894e14e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/043d6f30-2386-419e-89dd-0422b2b99147)

* Table of the **above graph**.

> There is **no scenario** of **max and need table** as we don't want to avoid **deadlock**. We want to **detect deadlock**.

* Allocation and Request -> Deadlock detection.
* Allocation and Max -> Deadlock avoidance safe state.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c96cbad-704f-40d4-9bfe-f543ff9d5e43)

> There is **no difference** like the **previous one**. Before we were looking at **need**, now we are looking at **requests**.

* P0 and P2 processes have **no requests**. They can finish anytime.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16b00961-80b0-42c7-be40-26da8b979d13)

* If for any process(Pi)
* request of 'i' <= available, then
* available = available + Allocation of 'i'. 

* If all process are **completed** then **no deadlock**.

* There is also no **safe sequence** as there is no talks of **safe state**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e215827-0346-4aa8-8af6-20b05bfcdbb8)

* As all of the **processes** finished. So, there is **no deadlock**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/159faefc-f94a-4399-b2f2-7fc8288f37fc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66a7798c-82e0-4c6f-877e-0f9bb675631b)

## Detection-Algorithm Usage

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edb81313-d538-4e80-975f-ad913d58b02f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d9baa722-4e1b-441d-9985-62971745f47b)

* Clue:-

1) CPU utilization decreases
2) Process inactivities

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a165c248-f4de-4feb-bc56-5d89ad13647d)

## Recovery from Deadlock

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8a35f41-f7cf-4434-9086-c44a2650b969)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f1f3fc9-5448-4608-8853-6825c5071b53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3ade6a9-ebf8-426e-8cd3-b36dc428fc96)

* Factors not need.

## Resouce Preemption

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/678f8e94-bb87-4d44-9c4b-db5faf910b4e)

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/734904f9-5176-4642-9cf1-fdd1f4dda18c)

> Give **A,B and C** processes **max resources** such that they are still in **waiting state** and wants **1 more resource**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90fb31ac-4513-4394-8694-d5ae2a6b9fe1)

* All of the 3 processes are still waiting. So, **deadlock** possibility there.
* So with **9 resources**, **deadlock** possibility there.
* The question has asked to find **min no. of resources**.
* If we keep **1 resource available** then it will be fine as we can fullfil the need of all 3 processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2c9eff7-2fbe-4003-b2ec-fc342bfddb6b)

* For deadlock to never happen -> **Max of process 'i' - 1**.
* Then **add** them up and at the end do **+1**.
* So the **min resource needed** -> 3 + 3 + 3 + 1 -> 10
* **10** is the **min resource needed** so that **deadlock** never occurs.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1f52507-4a37-48a5-bfae-29d852d3fbfe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2d0a97e-d3d7-4c1a-915e-6e00c9579aee)

* For **n** processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bfa634a7-defd-4ba8-92fa-bf5369bb69f6)

* **Deadlock may occur** that's why we didn't do **20 + 1** because at **21** resources means **deadlock** will never occur, but instead we put **20** as the answer because we want **Deadlock may occur**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb098b6e-9fd7-436e-acbb-aa4a5f63784c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d39de30f-924f-4bc6-ac56-fc072b2ed066)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/40ceeca3-dc70-4f2d-ba32-91989ba000f0)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44dd8070-6857-485e-b069-72084988c7da)

## Quiz - 3 Solutions

### Q1

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8d3ccdb-ab17-4b32-8089-13d29364bbbc)

* All options are to be **selected**.

### Q2

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5905d121-74c0-4539-b93f-1f1f66ddaa8d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21bcfe7c-3243-4a76-84ff-fc6fc061114a)

* As **S=1**, so **mutual exclusion** is possible and **only one process** can run at a time.

### Q3

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/151d36fd-b0a7-4bfc-8d47-3ac6606a0ff7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05b32f2f-1a99-495a-92ec-979f9f36c9e1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f288b0e0-1f1a-4d10-be3f-1a13c91ce782)

### Q4

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b44ed8c-b2f6-4e39-bd83-157638a2a3d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9daf6119-640e-4d52-9ddb-c11806406bd9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/accdffec-5d1a-4cea-baee-1a5b440573fe)


### Q5

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87276541-efec-4d78-9593-cf0bbde90ab3)

* **Option D** correct.

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7495dd03-bc3a-4a42-bdb0-6e2ce536110f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7899d5a8-0868-4dad-9081-cbcc55a0e678)

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c4dd1f2-5ce5-458a-8031-d9c64f1a1474)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca5e3d0e-8f9c-47df-bc74-aafd50786320)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/400c6187-a8f0-41e4-a5a6-815031bcd2ce)

## Memory management contiguous (21) [3rd June 2023]

## Types of locks

1) Spinlock -> Busy Waiting
2) Livelock -> Two or more processes in busy waiting for each other forever.
3) Deadlock -> Two or more processes blocked because of each other
4) Semaphores -> 
5) Reentrant locks -> 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aff9b7d7-20d7-4522-b396-5b642a4c6df0)

* **P(Sy)** and **P(Sx)** cannot move forward as **Sx=Sy=0**.
* This situation actually is called as **live lock**.
* It is interchangeably called as **deadlock** also.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/765fb7bf-f972-424f-9dda-ce8bb83c86ce)

* **P(Sy)** and **P(Sx)** will get **CPU** but they cannot run on the CPU and move forward. They are in **busy waiting** because of **each other**. The **busy waiting** will be forever and they cannot move forward. So they didn't go to the **blocked state**. They are still in **running condition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0d3e3444-1318-4102-8ed0-87153bf0cf63)

> The **difference** between **livelock and deadlock** is that in **deadlock** the processes are in **blocked state** only. In **deadlock**, because of some **IO operations**, the process didn't get any IO device that's why the process is in **blocked state**. The process cannot move forward as it is not getting any IO devices.

> In **livelock**, the process run on the CPU and the process cannot move forward.

* In both **livelock and deadlock**, processes cannot move forward because of processes depending on **each other**. 
* **Livelock** is interchangebly termed as **deadlock** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98fc8215-90d1-441c-b8f8-bc6e5cc4da10)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19854903-00e6-44ea-9b52-fe0ea903e4f5)

* Spinlock -> 1 process is stuck. It is not a forever lock. When one process leaves then another process can go in.
* Livelock -> Multiple processes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0eef326e-f173-4f0b-bf2c-8d9b5c91bdd2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95833698-55ff-43e3-88d2-767db25bc94d)

* Livelock.
* **Livelock** is interchangebly termed as **deadlock** as well.
* In **computer science** people will use **deadlock** most of the time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c672a437-d20a-4dda-94ee-cb75b5937079)

* Ofcourse

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2bd5992-9413-43b2-9903-0c63c70f3961)

* Reentrant Lock -> A thread can enter(acquire) same lock again.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/06d15f83-aef8-4f84-b939-9c24ade23d95)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85934e41-cf74-44d0-b8ef-02d6c39037e9)

## Memory Management

* Module of OS.
* Managing main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a497da2a-3259-4275-bd3d-09818af209a2)

## Functions of Memory Management

1) Memory Allocation -> Allocating space in main memory to a newly admitted process.
2) Memory deallocation -> Deallocating space from main memory for a terminated process.
3) Memory protection -> A process can access only that part of memory which has been allocated to it by OS.
4) Free Space management -> It knows which spaces in memory are **free**.

> To bring the process to main memory(RAM) we have to use **memory management** of OS.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6a70a8f-53a1-4ed7-82c8-d737e69d9b33)

* It creates the process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7183acdb-658d-4b3c-a4ee-b56e7f61bfc3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/975ac134-bc08-4516-b0c1-3076cddc19a5)

> P2 process is running on the cpu, when p2 runs then the memory address generated by the p2 process will be which one? The p2 process can access that much area of main memory  which is allocated to p2 process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f457d934-084c-4f44-ad3e-8982747ccadd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4fa3a2c5-bda2-4220-949f-e63456357648)

* NOPE, pcb is in **OS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eee2fb8d-d16f-4844-afe1-7184e6682c14)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/317df964-9749-491c-a10b-39060ad1b36f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0bc69282-55f6-408a-8074-56e4dcf0db61)

## Goals of Memory Management

1) Maximum utilization of space -> Minimum space wastage.
2) Ability to run larger programs with limited space

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ece40b0-528e-4857-967b-f4ac6949e9ee)

* Space Wastage -> Fragmentation

1) Internal
2) External

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/052a2bb7-e277-4807-a54f-bf49742f5c66)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19219438-0b43-47d1-8488-9cdff960223b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bda6ebaa-018e-4532-8662-3f3f2ed9d9d2)

> If we want to use the **Heap space** then allocate the space and give it some name using **malloc()** and access it. If we want to **deallocate** it then **deallocate** it using **free()**.

> The **Heap space** is still allocated to the process, it has not been **deallocated**.

* For calling **malloc()** do we need the **OS**?

> **NO** because the OS has already given us the **Heap**. We can create **another space** within the heap itself.

* When **malloc()** is running, there will be a **system call**?

> **NO**, because we don't need the **OS** for calling **malloc()**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f6fb99d-b0ce-4564-9558-38193d0a6a22)

## Memory Management Technique

1) Contiguous -> Entire process is stored in memory on consecutive memory locations
2) Non-contiguous -> It is decided by the **OS**. Entire process is divided into partitions and each partition can be stored on memory anywhere.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34dd2b6c-adb3-46a9-8bde-19f91c83b14a)

> The **OS** before storing the process in main memory, the process is **divided** into smaller parts/partitions and those smaller parts/partitions are stored in different places/parts of the main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49ccaac9-1b25-4698-ac8c-d4b1414ad775)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36fd3415-348e-4b58-affe-a7893d56af63)

## Contiguous Memory Management Technique

* **Contiguous** -> Entire process should be stored on consecutive memory locations.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc4334ca-c844-46c1-b5b0-595b5a7b200b)

* Types:-

1) Fixed partition contiguous memory management technique
2) Variable partition contiguous memory management technique

### 1. Fixed partition contiguous memory management technique

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf45d20e-647b-4989-8619-c09d64a080e4)

* Only one process

* OS divides the main memory into fixed no. of partitions. Each partition can be used to accomodate **only one process**.
* Each partition size can be different-different.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/934825e7-738d-479c-a360-195f1d7105f9)

> Different-different size partitions are made by the **OS** inside the main memory. When a process is needed to be stored in **main memory**, then **one partition** will be **allocated** to that process.

> Whenever a new process arrives in memory management unit of OS provides it a **free partition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/393cb8d4-f254-4aed-b2dc-b49bb1493143)

> When a **new process** comes and we have to decide in which **partition** we want to keep the **new process**. Then in the **memory management** technique of OS, there is a small algo, called as **partition allocation policy**, which decides in which **partition** the **new process** will be **allocated/kept**.

## Partition Allocation Policy

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eafbae19-7cb8-4995-b499-43be8d448603)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2345e29f-4525-4932-91c5-89c46eeeff7b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81ad2347-18ed-4f4b-9695-e6635ab69fd8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2365831a-4a3a-4f11-9786-add6dee4e6df)

* Ofcourse.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dfac21e8-8ec0-4598-9455-980d0c1acd01)

> We can keep only one process in each partition because of **protection**. When a process get it's partition, then the process can access that **partition** only and nothing else because of **protection**.

> If we keep **two processes** in one partition, then the processes will **access** each other and there will be **no protection** that's why.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5b0d7863-c3b7-43b8-b389-3b522c67f229)

> When P1 process is stored in **125KB** partition, then **5KB** storage or memory is **wasted** as it cannot be used to **store** another process.

* This is called as **fragmentation**. It is of **internal** type, so it is **internal fragmentation**.
* **Internal** because **internally** we have given the partition to a process and that process cannot use it. Internally it is **wasted** and cannot be used to **store** another process.

* This is **internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd8763e0-407d-45d2-890d-eccd698bd913)

* So, **Fixed partition contiguous memory management technique** suffers from **internal fragmentation**.

* **Internal Fragmentation** -> The space allocated to the process is **more** than the **required space**, hence the **extra unused space** is known as **internal fragmentation**. 

> **5KB** extra space is given to the P1 process even though it doesn't need it. That is **internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/517fc2bc-3caf-4a68-8214-e3b44cbc4792)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2709da4d-a201-4866-b2cb-76f323042bdd)

* Example:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f71449c-ab57-4426-a0b5-46cccfe886b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/63c37a73-dbba-4152-b70f-a7256b80f382)

* A process of size **120KB** has been given a partition of size **130KB**. Then the size of the **internal fragmentation** is **10KB**.

### 2. Variable partition contiguous memory management technique

* No any partition is created before hand and whenever a new process arrives then a new partition is **created** equal to the size of the process and the process is stored in that partition.

> The process is finished, the partition is also finished/released.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae30e372-898c-4896-9761-d1c5a509afec)

* The **advantage** is that there is **no internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2a39ad5-4ac9-4997-b38f-590a20680d2c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a2e976e8-0d3b-4c1d-8998-2e784f08bbb1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee80c88b-f25f-4b7f-a669-09c04e6c0585)

> Process **P2** is **terminated** means that p2 process has finished running. So, the **partition** given to p2 process will be **deallocated**.

> **150KB** size hole has been created between **P1 and P3** as p2 process partition has been **deallocated**..

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4aa72671-e8ec-4214-99b9-a82549371105)

* They are called as **empty holes**.

> A new process came of **100KB** and we will create a **partition of 100KB** from the **150KB hole or 125KB** hole. Which one will be use? It is **dependent** on the **partition allocation policy**, which **hole** we will use.

> New process of p4 of size **170KB** came. We cannot keep it in neither **150KB or 125KB**. The **memory management** technique is **contiguous**, so we have to keep the whole process in **one place**. But we don't have **170KB** in either of the two holes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0df365e7-8281-4078-b6c1-aa7e2d88e80b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79fc2ede-a09c-4ba1-b83f-6535eeb522a5)

* We cannot keep the new process p4. This is called as **external fragmentation**.
* **External fragmentation** -> Enough space is available in memory but not contiguous to store a process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e7a46068-2050-440c-af16-55a404f7dc37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70544ea0-09b7-4b67-8276-f080c82e4186)

* No.

### Compaction

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e217d5e6-75d3-42f0-bd2a-6b756d5708fc)

* There is a **solution** for **external fragmentation**. This is possible in **Variable partition contiguous memory management technique** because the **partitions** are created at **run-time**.  It is called as **compaction**.

* **Compaction** -> We will gather all allocated spaces into one side of memory so that other side can have all empty spaces together.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/281e08b0-dc3d-40e0-a705-6f304a9ee78e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17a30c03-51e0-4336-a2e7-885b43035b21)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/19f33b20-95fa-42fe-8fc0-f94724b935da)

* When we applied **compaction**, we will able to **add** the p4 process to the main memory, earlier we were not able to.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ab3c81c-fb38-4225-a744-d8cc4a031596)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6b4eb716-59cf-4213-beb1-24065e653da5)

* We got **two** spaces contiguously.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dd488ed7-5f5c-44b1-af5e-e86d1ae68ef8)

* In **non-contiguous**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4b694793-1e2c-42e2-84d9-51131fabb86d)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da6a0638-f0f1-4f89-8e95-bb44d432baaa)

* None.

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6a5e4f3-6df2-44a2-a0cc-9182b1d0bf12)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7443e0f8-3aad-4b2f-a869-85d33c4d57ac)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ddbc0c3a-8fda-4ec9-9fec-04962689fcec)

* If mentioned in the **questiom**, then only use **compaction** otherwise don't use it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8564285-06f0-442a-a068-afcea82b11f2)

* First Fit

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4f0faaba-d335-4f03-838e-3f60ca74dfa2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/277f53b1-89b5-4390-ab10-958a323176ef)

* Best Fit.

> Last process was **not stored** as there was no **50K** contiguous memory. So, **external fragmentation** happened.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff1d2f4c-7187-4507-b4e8-b50323374504)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ab16d3b-0f70-4306-ab2f-07c5635c03a5)

* **Option 'B'** is **correct**.

## Paging address calculation (22) [4th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/751a94a0-46f0-48c4-834a-9102df97d0f0)

* No

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25962b0b-c965-495d-b9d8-a89dec4890b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14b371cd-0914-45a5-8113-449433a8a0dc)

* Yes. You are right.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/15bd344c-ec72-4655-888b-7503c277ad89)

* No, as we cannot combine two partitions in fixed partition.

### Memory Management Technique

1) Contiguous
2) Non-contiguous

## Non-contiguous Memory Management Technique

1) Paging -> Each process divided into equal size partitions [**More IMPORTANT**]
2) Segmentation -> Each process divided into variable size partitions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8a86d51e-0bfa-409a-b996-cfb3d8627379)

## Paging

> Equal size partition is called as **page**, the process's page.

> Main memory is also called as **physical memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fc86c0c7-17af-462f-9472-cc085c986a96)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/993027f1-8965-4282-a966-725ce280bcb5)

* Frames -> Page frames -> memory frames -> physical new frames.
* They all are different names of frames. They are the **same** thing only.

### Example

> Some process is coming and the process needs to be stored in main memory by the **OS**. The OS, will divide the process into **equal size** partitions. When **equal partitions** were done, we got **4** pages.

> The main or physical memory is also divided into **equal size partitions** and we got **8** frames.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1e38308-76bf-4c89-b095-c0b72dc44bce)

> When the OS got the process there was **no pages** made. The OS made the pages of the process. After that **each page** was **stored** where ever there was a **free frame**. It can be stored anywhere, doesn't have to be in **sequence**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c2a273e-9a67-44e4-a060-8635f0aae8f7)

* On any **frame**, any **page** can come. This is the simple definition of **non-contiguous memory management technique**.

> The process is divided into **partitions** and **different-different partition** is kept at **different places**.

> When the process came, before that the process was divided into **different-different partition**. The **partitions** are kept anywhere in the **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc487cfa-9835-4240-86f1-21c252e601c2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d284056-9aea-49ee-9811-10acd9bffd55)

> When cpu runs the process and the cpu needs some content and it is stored in which **page** and that **page** is stored where in the main memory. For that **OS** maintains a **page table** for **every proces**.

> **Page table** contains **frame nos.** in sequence.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d58e9c2-a931-4fc8-bcca-c4d5627d12e9)

* Inside the **page table**, we are writing the **frame nos.**.
* The **sequence** of the **table** outside is the **page nos.**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/997aeefd-62f1-4c51-80da-1a75ad971b4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d459dfe0-019e-4153-b369-08b17fe90fdd)

> The **no. of pages** in the process, that many entries we have to keep in the **page table**.

* How many **entries** we have do in the **page table**?

> The **no. of pages** for the process, that many **entries**.

* If a process has **16 pages** then how many **entries** in the **page table**?

> **16** entries.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8deb1e60-b1a5-48e1-b657-e27c0e13f84d)

* How many **entries** we have to do in the **page table**?

> The **no. of pages** for the process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/053b6a9c-2596-411e-b715-7177c0477c7d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86adcd8a-e248-4b91-a0c0-3f0874219b66)

* process is divided into pages.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6f7fe56-c48e-409d-8b7d-539ef1d5283f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/238de1be-73eb-4f6c-a203-7c47091ca3a8)

> If we have **35** processes then each process will have their own **page table**. So, for **35** processes we will have **35** page tables.

* No. of **page tables** == No. of **processes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca8f4412-383a-46a3-817b-1df862e5f9a9)

> When CPU generates a request to access memory, **in COA**, we used to that cpu will generate the address of main memory. The content is in that address and the cpu wants it.

> When CPU generates a request to access memory, **in OS**, actually the cpu doesn't know where each content is stored. The cpu will only see the process and will see that it wants to access that particular content of the process. Whenever the cpu generates the request, cpu cannot generate the address of main memory where the content is.

> Cpu will generate some request by which it will tell that it wants access to that particular content. The content is at that process and at that page.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae1e4cad-1fb0-49ef-8b09-ac0c6d372b20)

> Whenever cpu requests for main memory content, from there we will get the **content's** whatever information and we will know one thing that on **what page(page no)** is that **content** kept. We will ge the **page no.**.

> We will take the **page no.** to the **page table** and from there we will get to know on **which frame(frame no)**, the content is kept. We will ge the **frame no.**.

> We will take the **frame no.** and go to the main memory and from main memory, we will get the **frame** and on that frame, we will get the **page** which we wanted to **access**.

> Finally, we reached the place, where the content is stored in the main memory. It is done with the help of the **page table**.

> We are not able to go **directly**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7d7be82-992b-4f4b-a5f3-ac6cbf52dbef)

> Whenever the cpu requests and from that request we will get the **page no.** and with that **page no**, we will search the **page table**, and after searching, we will get the **frame no** and this is the **frame no.** where the **page** is stored in the main memory.

> We went to that **frame no.** and on that **frame no.** we got the **page** where we wanted to **access** the content of the page.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/337116e8-f681-4da2-ad84-e7a7d02f9460)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cada42e9-7b38-42af-8ef6-2ce4fc0c68a1)

### In Binary

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e31a6778-f8f0-4759-8005-98aabc215b2a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a96a159d-8904-47e8-9ddb-ad51aaa61cdf)

* In the **page table** we have **4** entries.
* Every entry in **binary** is of **3 bits**.
* Total **page table** size -> 4 * 3 -> 12 bits.
* **Page table** size -> ((no. of entries in **page table**) * (size of '1' entry)) -> ((no. of pages in process) * (size of '1' entry))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bdfb6c7-a723-4ef5-9ad0-b27125337d8b)

* As an **example** we are taking **each page size** is **4 bytes** each. 
* We have **4 pages** in the process.
* Total size of process -> (4 pages) * (4 bytes) -> 16 bytes
* **Frame size** and the **page size** are **same**.
* Total size of main memory -> 8 frames -> (8 frames) * (4 bytes) -> 32 bytes.

* We have to address **each bytes** according to **byte addressability**.
* Total size of main memory -> 32 bytes -> main memory address -> (2 ^ 5) -> 5-bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60cfd8fa-33c6-4d3d-8baa-c9446ac706d9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0cf8e81-2612-4ce1-a796-0948af3bb262)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/59e1aaf9-a498-4fbd-aa92-93f0bc55481a)

> The cpu can see the **sequence nos**. If cpu wants the **J** content then the **sequence nos** which is **1001** should be generated by the cpu.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0f01db8-3241-49b6-995a-6897264218b6)

* This is the **view** seen by the cpu.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61e34fa5-d801-4347-9b2e-f220c6564dbd)

* Logical address.

> If we know the **logcal address** then we can go and see the **list(page table)** and after that we know our seat.

> The **logcal addresses** are with the **cpu only** as a **logical no**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/767a888c-70f1-4ce4-82fa-4940bcb2d4cf)

* The address of the **main or physical memory** is called as **main memory address or physical address**. 
* Whenever cpu wants some process's content then the cpu generates some **logical address**.
* CPU always generates logical address(virtual address).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6c5e3a08-646a-4484-b5d6-52c3e6ec2a2d)

* How we will get **information** from the **logical addresses**?
* Why we ware having **4 addresses** in a **single page**?

> Because the **page size** is **4 bytes**.
> One or single page has **4 bytes**.


* If **address** is given by analyzing the **starting 2 bits**, we can observe from which **page** is the **logicial address** from?

> **True**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ba3585b-70b1-4fa4-b098-4304919ae33e)

* **Logicial address** which is **1010**, just notice the **first two bits** which are **10**, which means the **logical address** is from the **2nd page**.

* Why we have seen **first two bits**?

> Because the **page nos.** are of **two bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7bdc5884-0a34-4b5c-8921-f9f9f2663fe1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83c5a2ef-cbf9-4b59-a657-8f585547f1d2)

* We would check the **first three bits** and get the **page no**.

> Apart from the **first two bits** used to find the **page no**, the **rest bits** are used for **finding** out of the **4 bits**, which bit we are taking.

* **0000** -> Page '0' and **zeroth** byte.
* **0001** -> Page '0' and **first** byte.
* **0011** -> Page '0' and **third** byte.
* **0100** -> Page '1' and **zeroth** byte.
* **0101** -> Page '1' and **first** byte.

* Every page has **4 bytes(byte 1, byte 2, byte 3 and byte 3)**.

* Like this, from the given **logical address** we can get **two** information:-

1) To which **page** does the **logical address* belong.
2) Within the **page**, which **byte** it is. 

* Logical Address -> 1011
* **10** -> Page no.
* **11** -> Byte no.
* Byte **11** of page **10**. [In binary]
* Byte **3** of page **2**. [In decimal]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ae93835-3754-4b82-8f92-3e2660e8fb68)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0ed3981-e0a5-47cb-b2be-02afd9a7b438)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/373017cb-6019-445c-8744-522871a4d472)

> When we got the **frame no**, we will attach the **byte no** at the end of the **frame no**, we will get the **physical address** where the **content** the kept.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f726799-6728-4d71-b0f2-998a525f97c1)

> The **logical address** we got, divided it into two parts, the first part was the **page no** and the second part was the **byte no**. We took the **page no** and went to the **page table** and did searching of the **page no** on the **page table** and got **frame no**, on which **frame** the **page** is kept.

> We appended the **frame no** with the **byte no**, so we got **00011** which is the **physical addres** where the **content** we want is kept.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85e5a9c1-e2c6-4e87-b3a7-90f1267c9399)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e858bac3-47d2-494f-96db-f748134c2935)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c4d440b-118b-428f-9d13-d877c7f5b2cf)

> If we have **page no =0** then we don't have to **leave** any entries. We will get **page no =0** at the top only.

> If we have **page no =1**, then we have to **leave '1' entry** then we will get **page no =1** entry.

> If we have **page no =2**, then we have to **leave '2' entries** then we will get **page no =2** entry.

> If we have **page no =p**, then we have to **leave 'p' entries** then we will get **page no =p** entry.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ca986c1-8574-4e33-8cea-88ad20ba072e)

* We have mentioned that only, we have to **leave 'p' entries**, so that we can get the **page no =p** entry.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7283ec45-390a-4585-b74d-afbc2b05e46b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78c67b12-c781-47c7-8ea7-5343df4b7d69)

* This is a **diagram** of a process called as **logical to physical address** translation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/357bb287-6c67-46d3-a4b3-559c3ebe40b0)

* The cpu can only see the **list**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f5f2a96-e879-47f9-bacb-1d464c2c3541)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11cbd40f-86cb-40bd-8d28-725dca076067)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e900047c-393e-4cdc-8c65-c88a22c622e5)

* Yup, but in general it is in **powers of 2**.

* if **page size = 4bytes** then how many **bits** for **byte no** size?

> **4 -> 2 ^ 2**, so **2** bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96b7af06-0e95-4752-9d52-a909816ff126)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79123601-9f90-4513-9f06-6980376a3339)

> We could have found the **byte no** size from **process size** as well. As **process size** is **64 bytes -> 2 ^ 6 bits**, which means **logical address** is **6 bits**. We would that **page size** is **4 bits**, so the **byte no** in **bits** will be **6 - 4 = 2** bits.

> From the **page size** we can find the **byte no** size. As **page size** is **4 bytes -> (2 ^ 2) bites -> 2 bits**. So, the **byte no** size is **2 bits**. We already know the **logical address** size is **6 bits**, so the **page size** is **6 - 2 = 4 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/587670b4-9a3f-463e-8d4f-9e668203d863)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6de6d88-1941-41d8-b535-a6585d04837c)

* Directly find out the **logical address** and create the **logical address** diagram and find the **byte no and page size**. From there we can find anything.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7efaab6-283e-4a90-b888-0c00f43dcaaa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/627e0c9d-e00d-41a4-bcb9-c1ff01f00bb5)

* Will see later. Next step.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05c4c558-9500-4529-9b0f-cc54157c6484)

* Page size == Frame size
* Same thing.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/00905d78-ef65-4d75-b65c-5f070907e163)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d52302f-120c-4a84-afa6-69d99679e5c6)

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72ab12da-73e8-40ba-8309-cf7d88fd5a4f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7893b4f5-59e6-4f1d-b43e-c4909503b8a4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d43029fb-9f0f-4d3d-b2d5-2110c3a404a8)

* What is **stored** in Page table entry?

> **Frame no**.

* In the above question, we got **no. of bits** for **frame** is **23 bits**. 
* Page table entry is **4 bytes**. So it is **8 * 4 -> 32 bits**.
* Each Page table entry is **32 bits** but the **frame no** is **23 bits**.
* What's in the **remaining** 9-bits?

> Some **extra bits** are kept in these **9-bits**.

> Extra bits needed for **each page**.

* In the **page table entry of 4bytes**, how much **extra bits** are kept?

> **9-bits**.

* How did the **9-bits** come?

> It is **mandatory**. In every **page table entry**, there should be **frame nos** but some **extra bits** should be kept.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aab4c981-b4a8-4ef8-a55b-b12a6f5f680c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fef637c7-ba77-4395-939f-0f1be06c7694)

* Will see later.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/11a2b33c-3a46-48d2-a746-e4dd88d07dba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4710b04c-e49a-4bec-8ab7-ff76cc3c1048)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dbf224b-9125-45e8-9fc6-0da2135eb8a2)

* If in the above given question, **page table entry size = 4B** was not given then how would we find the **page table size**?

> We would assume that in **page table entry size** there is **frame no** which is a **gurantee**. So for calculating **page table size** we would have done **no. of pages = (2 ^ 18)** and the **page table entry size = 20 bits**

* **Page table entry size** -> **no. of pages** * **page table entry size** -> **(2 ^ 18)** * **20 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/869a9496-18e6-414e-bd14-38e49144390e)

* Each **page table** entry contains **frame nos. and extra bits**.
* If  **extra bits** are **not mentioned** in the question then take **extra bits=0** and solve the question. So, the **min Page table entry size** equals to **frame nos**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7da7ca8-75cd-48a5-a4c5-a4414954d1eb)

* Yes 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/507cbdca-b1bc-4f80-81d3-4c6a84ef4795)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5487b43-a87f-4695-a041-2f944a5fe5ff)

* Process size -> Logical address space
* Memory size -> Physical address space.

* DPPs given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf098bdd-dfdf-44b4-8000-296467931289)

### COA Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b77a070b-ee92-487f-95d8-c76ce02da157)

## Paging-performance-tlb (23) [5th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ef83f4ee-08a0-46ac-adcc-27b91ee9b416)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76de4b96-4ce9-4fe8-ad3c-d58895d7ea39)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ee8ea9c-a9b0-40ed-94d1-9437793bcd3e)

* Ofcourse.

### Recall last class

* Cpu generates **logical address**.
* 'p' -> Page no
* 'd' -> Offset or Byte no.

* One process is running on the cpu and the cpu knows where all the pages of the process are stored in main memory?

> **NO**.

* CPU can see that there is a **process** which has **many pages** and the **logical addresses**.
* CPU can see the **process** and it's **pages** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/536d447c-75dd-4877-ba91-39478eec3af0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2553bc34-71be-4bec-ba9d-4ba5ed691727)

* CPU will see the **process's pages** and the **process** only. Where the **process's pages** are actually **stored**, it is not visible to the cpu.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a081b99b-fd86-4065-a93b-85b2fc449f30)

* **Page table entry(PTE)** should at a **min** have the **frame nos**. **Extra bits** are possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2d96678-402a-4ac6-80fc-d1f1d7ac2c97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c24fb007-60ed-4d23-bf95-f189f4642da2)

* **Page table size** -> **No. of pages in process** * **'1' entry size**.
* **Page table size** -> **No. of entries in process** * **'1' entry size**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aba9ed37-51d6-48cb-90bf-4981f987674d)

## Where is the **page table** stored?

* **Page table** is stored in **main memory**.

> If a process p1 is running on the cpu then how will p1 process know that **where** it's **page table** is stored in the **main memory**.

> The **starting address** of the **page table** is stored in a **register**, the register is called as **PTBR(Page Table Based Register**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8f1f46c-76d4-40eb-a551-ea187f0664a9)

* **PTBR(Page Table Based Register** is a **special purpose** register which stays in the cpu. Whichever process comes to the cpu for running, that **process's page table's base address or starting address** is **stored** in the **PTBR** register.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f6d97ef2-14c1-4d53-85d9-1d88dc265b11)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f939ac38-3488-467d-919f-f30fe633a021)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/72099257-d42e-4335-88a1-273f39784f31)

* Inside CPU.

* PTBR stores the **starting address** of page table of the current running process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/753572b1-d3ea-4312-8382-a609c93e9532)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e2175b6-d8a6-4cbc-bfa9-4ad94ffbb519)

* To implement **paging**, **hardware support** is required?

> **Yes, True**. If inside the cpu there is no **PTBR reqister** then we couldn't implement **paging**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5826f1d1-d9fc-4525-afe9-d50d7a06f8cc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5965e707-37ca-40b7-a8b1-db7cd6cb147f)

> **1 cpu time** is spent in **accessing** the **page table** for **address translation** to get the **physical address**. So, that the **content** we are **searching/finding**, we will get to know where the **content** is **actually stored** in the main memory.

> **Another cpu time** is spent in **accessing** the **content** that we wanted actually.

* We are accessing the main memory **2 times**. Once for **page table** and another time is for **content**.

## Performance of paging

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61ce851e-edaa-491d-a6fd-e6fb712216d5)

* Effective memory access time(EMAT) -> 2 * tmm.
* 'tmm' -> main memory access time.
* **2 * tmm** because **one** is for **page table** and **one** is for **actual content**.

 ![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a67b38d5-ceb9-41d6-ac27-0fff597a5092)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f3824d1-2c99-482b-8a8c-79ae012a2f94)

* When we try to access the main memory then we have to access the main memory **twice**.

> Let's say a **very small process** has come. It has **only '2' pages**. So, it's **page table** has **two** entries.

* If the **page table** is **very very small** then there is provision in the computer system that instead of keeping the **page table** in **main memory**, we can keep it in the **general purpose registers(GPR)** of the cpu. It is possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa61751f-2134-430a-8563-69b564485b13)

* Effective memory access time(EMAT) -> Treg + tmm.
* 'Treg' -> Time to access the cpu register or register access time.
* 'Treg' because the **page table** is in the **register**.
* 'tmm' is for **content**.
* 'Treg' is **very-very small time**, almost **negligible** compared to the **tmm** or memory access time. We can **ignore it**.

* Effective memory access time(EMAT) -> tmm.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c744af9-6e17-4241-9d83-a3a4fc07a283)

> Everytime the **page table** will not be **small**. Ofcourse not all processes are small. If processes are big then the **page table** is **bigger**. Then the **page table** cannot be stored fully in the **cpu registers**. Then how we will **save time**?

* To save the time, there is a **hardware** it is called as **TLB(Translation lookaside buffer)**.

## TLB(Translation lookaside buffer)

* Why we use TLB(Translation lookaside buffer)?

> It is used because in the **page table**, some entries are **recently used and frequency used**, those **entries** are kept in the **TLB(Translation lookaside buffer)**.

> **Page table** has **thousands** of entries, we cannot keep all of them. We use a **separate hardware** called as **TLB**, where we store the  **page table**, some entries(page table entry) that are **most frequent**.

> In **cache memory**, any and all content of **main memory** can be brought to **cache memory**.

> Not all content of **main memory** can enter the **TLB**. **Main memory's page table content** can only come into the **TLB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9e77be73-11c7-43fc-8008-54b826459399)

> We are only bringing the **page table entry** and not the **pages**. **Pages** are still in **main memory**. Process's content is still in **main memory**.

> We are only bringing the **page table entries** into **TLB**.

* The **advantage** is that when we wanted to access the **page table**, we went to the **main memory** but now we don't have to go.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/23dff760-d9f3-48a1-adb8-cc9ce0d02b61)

* It is a **memory hardware** which is used to store a few page table entries.
* Use of **TLB** improves the **performance of paging** interms of **EMAT**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d81eb51-da50-435b-888b-58afa3b6742b)

* **YES** but it will be very less like 10-15% but 85-90% of the time, it will be in **TLB**.
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1b2192c-cc5d-473f-b6fe-33f50af42502)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf9ef60f-b6f0-4e46-8f20-9cbe162fe18a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b791b7d8-60d1-403e-af5b-d775d7d6e9da)

* TLB Hit -> The entry is in **TLB**.
* **TLB access time** is **very very less** than **memory access time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c10d0fd1-f775-49be-8370-c0fe5fcb7172)

* Whole page table entry is there just for simplicity we have put **frame** in the **above diagram**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33ee96d1-416d-4e8d-9ea5-c05187d58160)

* **TLB Hit** -> **1 TLB access** + **1 memory access**.
* **TLB miss** -> **1 TLB access** + **2 memory access(1 for page table + 1 for content)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41a1579a-8918-496e-9bf0-943ef262f2a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c41e653-e216-4142-b922-4c578db2b1a5)

* **TLB Hit** -> The required page table entry is present in TLB.
* **TLB miss** -> The required page table entry is not present in TLB.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a11b241-f290-4356-90f2-c5ba7062819b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49098b2e-4daf-4b58-9139-e8c0c321fc80)

* TLB Hit ratio(H) -> percentage(%) of time hit occurs in TLB.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35b11c8c-2dd9-4447-b92b-6c9eb9777145)

* Ofcourse

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/28cd4a0e-372a-4a5d-8938-73dff8c6e51c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83b0415f-1958-4ddf-a08c-6f39e6d6ccde)

* **100%** of the time, **10ns** time is taken.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7523c9b2-59f7-4dba-bbbc-8581d558ee5f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/760bfe34-726b-4d3e-83ae-4651ca323016)

* Mathematics. Just shown to tell how the formula came.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/046cfa7d-a37b-46d5-bedc-c9d4bd130022)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ee7b4214-86ee-40b3-9f65-1ddd3e54d078)

[**IMPORTANT**]

* If **TLB** used then,
* **EMAT** -> H * (Ttlb + Tmm) + ((1 - H) * (Ttlb + 2 * (Tmm)))
* **(1 - H** -> TLB **Miss ration/percentage**
* **H** -> TLB Hit ratio
* **EMAT** -> Ttlb + Tmm + (1 - H) * Tmm.

> If **content switch** happens then a **new process** comes to run on the cpu. **YES**. The **TLB entries** will be of the **old/previous process**. So when the **new process** comes then the **TLB entries** will not be **accessible** to the **new process**.

> So when the **content switch** happens then a **new process** comes then the **exisiting extries** of the **TLB** are made **invalid**. Remove them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/13e5d03e-8b61-4029-b2f2-10675f90a1d0)

* Yes. have a good understanding of it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9be8aa7-4bdb-461d-93ae-a88b5e4b6d93)

* When **context switch** happens all entries of **TLB** are made **invalid**.

* In **TLB**, at a given time we can keep the entries of one process only?

> **Yes**, one process only. That is the **basic case**.

* PTE -> Page Table Entry.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9528847-ef2d-4800-80ed-b6223eb517bb)

* If multiple processes' page table entires are to be kept into **TLB** then along with page table entries **process ID** is also **stored**.

> In this **case**, for **context switch**, we will not remove the **page table entries**. If a new process comes, then the **page table entries** of the **new process** will be kept here only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d1c5b9af-28ab-48fd-a037-77aae389d506)

* Multiple processes' page table entries can be kept.
* It is a very high level concept/design.
* Out of **GATE** syllabus.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/32c5d624-9169-42ac-b06e-355c900a7ff0)

* Different concept.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ea5c1fa-6227-4bbd-adc7-2e633cf4ab79)

* Performance **increased** when we used **TLB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/14823cbd-3bb9-4228-a8d1-ce32d37bf45b)

* No.

## How TLB stores entries?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ca7e96d-ffe7-4d96-8377-698659d121e4)

* We have **mapping** here. **Mapping** of **TLB**.

## TLB Mapping

1) Fully Associative
2) Direct Associative
3) Set-Associative.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/112a3a37-dc0f-4ec5-b230-97502846f0a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e540079-c561-40d8-b2de-9476473b3c13)

* Which page table entry is bought to where on TLB.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2206021f-dbd4-4a0f-a82f-c9552ebfbebe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff310243-374c-4476-9e9a-040ff0b03acb)

## Fully Associative Mapping:-

> **TLB** has **parallel searching** power and we can put anywhere the **page table entry** of **TLB**.

* **P** -> **Page no**.
* **f** -> **Frame no**.

> All **pages** and their **entries** are in the **front**. **Page no and frame no** will be there.

> When cpu will generate **page no** in their **logical address**, then that **page no** we will **find/search** in the **memory** of the **TLB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7430d7c0-1ab7-4ec5-b0aa-23ef4cbdde4f)

> The **page no** is **searched** in every cell of the **memory** but the **search** is done **parallely** because the **TLB** is made of a specific hardware which is called as **associative memory**.

* **Associative memory** -> Content addressable memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d67cf964-da24-4404-9433-f67ba91d7b9b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a928b444-1653-45c5-aaa8-cb563b5e37a7)

* **Searching** in **TLB** is done with **page no** and **TLB** is implemented with **content addressable memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4502b50-85c6-46df-bb44-8fe48f655eef)

* DPPs given.

## Doubt clearing session questions on paging(24) [5th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35e08590-1d86-4b9c-ab0e-486579632dc2)

* No, **OS** decision. Not the decision of architecture nor the organization.
* Before **processes** are created, the **computer design** is done.

## DPP discussion

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/01a2143c-95ae-4120-b32d-034332c91997)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33a5cec2-d2e8-45e5-8d61-080960e6c7f3)

* Why the **worst fit** is needed?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4492ce7-6625-4ea4-9bdb-84fa94811ea5)

* We have **two** holes of size **500MB and 150MB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8502102b-043b-42d2-8023-a79f5cf60769)

* P1 process of size **120MB** comes then if we put it in the **150MB** hole then only **30MB** hole is **left** which is pretty useless as that much smaller size processes don't come. So that **30MB** hole is a **waste**. This is the **best fit** in **variable partition**. But if we put the **120MB** in the **500MB** hole then a **380MB** hole is **left** which can be used to store more processes. This is the **worst fit** in **variable partition**.

> So the **worst fit** is useful in case of **variable partition**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85b5e50c-4aed-4da3-a76c-c810eb9679d6)

* Fixed partition -> Best fit performs **best**.
* Variable partition -> Worst fit performs well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a35a47b-d08e-40c3-a967-680433ab2c5a)

* Any space left in the **un-used** cannot be used. It is a **waste**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3ce0942-0f40-4d07-a1e0-a8a3cc3b831b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/903dd085-ef53-4007-bc93-9bcebbc344e7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3e5fcda-5bdf-43b7-8b09-92ed0954535a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3a248dd-3ec0-4bbf-ba06-a9169c20b02a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1747e83b-d546-4563-9376-fcaf374c3828)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65662b9e-2c94-4cd3-b4f9-ac8c87d0f33f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d55b454b-2aa1-466b-8de5-653cf7d4d0fe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20b56ea5-fa01-41b7-ab12-e1802e375f6d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd9ee306-f671-418b-9ff4-d32c02ad15db)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0888e99f-a272-4556-ab7b-ab5f06dfd623)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a47ecd90-a301-4f0f-adab-1fb2a97f80b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/837f0f2b-2a62-4caa-91a2-cb2282ba86c0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/817c630d-5170-4695-b237-8fa3a70a9cbc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f0c89ee-9a6b-4a25-ae6e-16317b10b304)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7668d6e3-7139-40a4-8822-1cc68d8eafbf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d058e487-bc39-432b-a134-e81359e4bfd5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f86ebff0-88f5-444f-a5fa-3c5576f1adef)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/002dd65e-8c54-4920-8741-8b2e916bd360)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/579e5458-cde6-4a28-81a5-9d921f1d43f1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3ff4f269-5820-4ece-878c-c7cbfd2a0863)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b3bd6c66-8972-45af-9ff7-9a1b41f34b3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1bb8fde9-d40b-4b15-8665-440a063d3303)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efae878b-696a-4d67-9427-0d35923885b4)

### Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44b72d7a-937a-4c83-8afd-eb9e21062147)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/18b1402b-1a5c-45af-9e75-ad762d500ab0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/61fd5606-7872-4024-8672-57e5e6db8130)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ebeb7177-be5e-4b8f-80d7-52672afa95b1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6447129f-c1fd-47ce-a925-66015fdd870d)

* Exit() -> Exits from the current program.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ba518451-a8fe-463b-8a64-793e02edc9ab)

* Do we need **OS** for the **exit()**?

> **NO**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7badb01-8ef8-48be-a5f5-b6df5b1b70d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1ef13bd1-ef31-403c-8a4e-69babc11f544)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8cc9eff0-8a31-4b00-a0a8-6a6d2e8758ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9758cb04-8f10-44c6-9f27-c0c8a5495160)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/745fd7b4-2001-43fd-9099-9b26dff9bfdf)

* This is **wrong**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/026dda1d-55a4-4cad-af6b-2fd49036bcaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f0ba0b5-6003-41cf-a119-59212d9f9325)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/92877dce-1942-4734-9260-80f4c5f1abfe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aab95aac-c7d8-447c-9929-fe306a66bec6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f164092-01c6-47df-a469-41b9b1a031de)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d537211-79f9-4f98-9eef-f048be1d734f)

#### COA Doubt

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/dbdc2f56-3e07-430f-81c0-1195ba0474ea)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e2938cf-9027-41af-b9fb-e92a9f736abd)


## Tlb access and mapping(25) [5th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/584bdc9a-9939-423e-8bb7-b7d61428de49)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0ee99e6a-397e-4946-a12b-7b222f8967d0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b5ff1606-bb99-4f74-8d4a-8ad1ddf5eb56)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e0e2403-2251-4a62-817a-d46e3fa2a089)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c429a288-0651-4162-b65c-0a57014241c2)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d8ada67-e13c-4767-89b3-1c224385e469)

> **Only in increasing** or **only in decreasing** order because **circular wait** will never happen. Then, **YES,

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33373eaf-6bf4-4399-b1c2-49711f2a87aa)

* No. Not in **syllabus** now.

## TLB Mapping: Direct

> If we bring the **page table entry of '0'** into the **TLB** then we will keep it as the **'00'** of **TLB**.

> If we bring the **page table entry of '1'** into the **TLB** then we will keep it as the **'01'** of **TLB**.

> If we bring the **page table entry of '2'** into the **TLB** then we will keep it as the **'10'** of **TLB**.

> If we bring the **page table entry of '3'** into the **TLB** then we will keep it as the **'11'** of **TLB**.

> If we bring the **page table entry of '4'** into the **TLB** then we will keep it as the **'00'** of **TLB**.

> If we bring the **page table entry of '5'** into the **TLB** then we will keep it as the **'01'** of **TLB**.

> If we bring the **page table entry of '6'** into the **TLB** then we will keep it as the **'10'** of **TLB**.

> If we bring the **page table entry of '7'** into the **TLB** then we will keep it as the **'11'** of **TLB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27d2ba5a-26e9-4703-93f2-1cddf9719cae)

* The **decision** is according to **direct** mapping.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/70d34731-46a2-4c8b-8e8e-69ce5cbf7290)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4e414ba-5c47-466c-8bb7-948c54398586)

> When the cpu generates the **logical address**, the **page no = 001**. For **page no=01 or page no '1'** entry we went to the **TLB** table and the **01** entry according to **mapping**.

* How we will know at the **01** entry that it is the entry of **1 or 5**?

> We will not know. For that we need **extra tag**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c3e98978-c8eb-4e82-85e2-b44e1c2834e5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b237abc1-977a-4a6f-a572-a6083ed68fb6)

> The **tag** is used to **identify** whether the entry is of **1** or the entry is of **5**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/636eb905-83b8-4473-890c-187b185d231f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b53d4f2-d94b-46cf-827a-11a43f2e89de)

* The **tag** which will come, how will that tag be **identified**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b483b6f5-de65-4f8b-9af8-1b1043dd4cf2)

> On **00** in the **TLB**, we can store the **0 and 4** numbers from the page table.

* 0 -> 000
* 4 -> 100
* **00** are common between **0 and 4**, so the **left most bit** are used to identify if the **number** is **1 or 4**. The **left most bit** is the **tag bit**.

> So when the cpu generated **000**, **00** from the right, represented the **0th position** on the **TLB** and the **left most bit** is **0** which means it is the **0** number from page table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bc192ca2-30ff-48bd-903b-c880a8590957)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e60432b-c428-48c8-bcca-64102c240c4e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f2980b3-8814-4825-85f9-128eb5911f59)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/003a405b-62b0-43e4-94b9-36054a2ead60)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/200f603b-73f9-41d6-ab3b-d5e4d1ea309d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03804a42-446d-4b23-83b9-288ecdc1fb46)

* How many **entries** we can keep in the **TLB**?

1) Would be directly given in the question.
2) Have to find it, check the below question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6ae185d-e8ef-4e23-bd1a-d25f3ef365e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6e6a786-2e88-42f0-a0aa-137221c055be)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/293acf65-6f69-43d6-a025-582e769fdaf8)

* Tag is not stored inside the **TLB**, the **TLB** chip which is a **hardware** beside it the **tag** is stored. Separate memory is required to **store** the tag which is not included with the size of **TLB**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7716cc3c-7f83-4fdc-b517-ca075f303d43)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bcf04cea-59c0-4124-8045-ad9db3099e4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/67ed4930-7e3d-4e71-9701-1e50defee358)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79bca2f0-12b0-40a6-80fb-4a852e750a6c)

* No necessarily, it is coincidently **same** in the question.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5213747e-0c30-4938-ad0b-01254361edb2)

* Virtual Address = Logical Address.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae7ff5e3-69dc-4295-b2a9-80e0d6647c2c)

## TLB Mapping: Set Associative 

* Each **set** has **2 entries** in **2-way set associative mapping**.
* Each **set** has **4 entries** in **4-way set associative mapping**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2ba4f2b-d0f3-4f48-8488-55c6e1546fb3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71b4e70e-d993-4a35-a67a-b4cb7bccb89b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9549be54-863b-4e9c-8bb0-da4447703d1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/961aa8cd-ad78-41ed-9381-c97e191a791c)

* No. of sets in **TLB** = (**No. of entries**) / (**Set associativity**).

* **Set associativity** -> Is it **2-way, 4-way or 8-way**. It will always be in the **power of '2'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6284a7f1-5ac4-4ff3-bec3-a5beb900ad84)

* Division of **p** will happen only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cef3d586-b592-48f3-b17c-70284c96898a)

* There was no use of the **2-way set associative TLB** here as the **no. of sets** was already given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/044aeca2-31f2-4ac7-8068-fce34767cd62)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/598226f9-bd3e-4b46-9bef-a1a13bd74f95)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1a5c6e4-67a8-4958-a140-61a4b9055239)

## Paging

* Paging suffers from **internal fragmentation**.

> When we try to keep the **Page 2** in the main memory, then we will keep the **2KB size page 2** in a **4KB size frame** in the main memory.

> The whole frame will be given to the **2KB size page 2**. The **page 2** is of **2KB** but it is getting a **frame** of **4KB**. We are giving the **whole** frame because the **page and frame** size is **fixed** and a  **whole** frame should be given to **page 2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17926784-c344-4200-b05a-256b1c39d1ad)

* So, **2KB** of extra space is allocated to **page 2**. Which is **internal fragmentation**. We should have given **2KB** size frame to **page 2** but **extra space** was given due to **memory management technique**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d802f2c9-8803-4f5e-a363-91f73f40758a)

* Extra space allocated -> **Internal fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5535fc79-a55a-4f05-8a93-c7875cbaf3f5)

* Good point, **internal fragmentation** will be **reduced**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/10a5684a-993d-415a-b8f0-8c2ac373f0e4)

* To reduce **internal fragmentation**, we will reduce the **page size**.
* Due to this, the **no. of pages** will **increase**.
* **No. of pages increase** will lead to **more entries** in the **page table**.
* **More entries** in the **page table** will lead to **other problems**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd8b1ba4-6e50-48b8-ab15-23daf106b4e4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4b26f74-597f-423f-9515-86174d98aa94)

* Yes.

* If , **TLB or Cache** are **used**, then **Average memory access time(Tavg) or EMAT** will be what?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/37b859d1-a111-4c94-bc3f-6e4f264e97e7)

* Cache -> Physicall addressed.
* It means that for **searching** in **cache** we need **physical address or main memory address** required. Until we find the **main memory address**, we cannot **access** the **cache**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ada2bfdb-a5c3-4aac-ab77-0d9f0b199cb2)

* Cache memory is accessed only using main memory address.
* It means that we cannot use **logical address** to do **searching** in the **cache memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58af0df3-68a0-4a58-8eb0-a0eb41072584)

* We can't search cache with logical address.
* When we are combining **TLB and cache**, we can see that cpu is not directly generating **physical address**. 
* CPU is not directly generating **main memory address or physical address**. CPU is generating **logical address**.
* If cpu is generating **logical address** first then to do **searching** in **cache memory**, we need **physical address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ef057cf-3501-42da-adf1-f244bb0059dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/548f8758-a216-4d60-8b4d-d0d7cebe355d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c9967ed-84ae-4db3-87c1-9db0b6c94ae7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7f23d28-aedf-4ad4-bcf3-3f20558de44f)

* CPU generates -> Logical Address -> Translation -> Physical Address -> Cache Search.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45114e87-d972-4162-8bb6-0b4af34795ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/303483cb-3965-41dc-b8ad-9b690a556538)

* Can we **directly** access the **cache memory** when the cpu has gone for **memory access**?

> **NO**.

* What do we need for **translation**?

> We need **Page Table Entry** and the **Page Table Entry** is kept in **Page Table**. Page Table -> Page Table Entry.

* If we use **TLB** then **TLB** is accessed first or **Page Table** is accessed from **main memory**?

> **TLB** is accessed first.

* First **translation** will happen and then for **translation**, **TLB** is accessed. 

* Between **TLB and cache**, who is **accessed** first?

> **TLB** because **translation** is needed **first**. After **translation** is done, then we will access **cache memory** for accessing the **content**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8110fdb6-244d-417e-a2a5-52c7b141f4cf)

* **Cache memory** will not store **page table entries**.

* Why **Cache memory** will not store **page table entries**?

> Because the **page table entries** are in **page table**. **Page table** is in **main memory**. Until we access the **page table entries** from the **page table or TLB** to get the **physical address**, we cannot **search** in the **cache memory**.

> Because if we keep the **page table entries** in **cache** then we cannot use the **logical address** to search the **cache memory**. We cannot do it then.

> We use the **logical address** to **search** the **page table**.

> **Page table entries** are stored in **page table**.

> We can **search** in **cache memory** using **physical address** only.

> We cannot **search** in **cache memory** using **logical address**.

* Hence, we cannot keep the **page table entries** in **cache memory**, as we cannot **search** in **cache memory** using **logical address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aca84dd9-8669-4684-a2f6-d58d5adc4631)

> CPU generates **logical address**. Using **logical address** we will **search** in **TLB**. It is **not necessary** that we will get a **hit** in **TLB**. There is **two** possibilities, we will either get a **hit in TLB** or a **miss in TLB**.

> If we get a **hit in TLB** then we will get the **frame no**. So we got the **physical address(PA)**. Now, from the **physical address(PA)**, we want the **content**. The **content** can be in **cache memory or in main memory**. To **save time**, we will check in **cache memory**.

> We will take the **physical address(PA)** and **search** in **cache memory**. There is **two** possibilities, we will either get a **hit in cache** or a **miss in cache**.

> If it is a **hit in cache**, then we will get **access to the content from cache**. CPU will read the **content** from the **cache** and we have found the **content**. **Finished**.

> If it is a **miss in cache**, then we already have the **physical address(PA)**, then **access the content** from **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/34bec58d-e5f4-4740-8161-10e3f40b257f)

> If it was a **miss in TLB**, then we will **search** the **page table** in **main memory**. From there we will get the **physical address(PA)**. With the **physical address(PA)**, we will do the **same thing** as above. We will **search** in **cache memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58281c1a-3c70-4ba3-b9d6-1fa01e809753)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2c847fa8-00c5-4231-b822-de9bf50791f3)

* Hit -> Access content from Cache
* Miss -> Access Content from main memory

> Just written this if not **clearly visible** from the **image**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3abba882-bde3-4952-a874-831eed627c78)

* Htlb -> Hit in TLB
* Ttlb -> Search or access Time in TLB
* Hcache -> Hit in cache
* Tcm -> access Time in cache
* (1 - Hcache) -> Miss in cache
* Tmm -> Access time in main memory
* (1 - Htlb) -> Miss in TLB
 
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/12cbade5-5a11-4de3-90a2-0c7d9341fe33)

* EMAT =  (Htlb * ((Ttlb + (Hcache * Tcm)) + ((1 - Hcache) * (Tcm + Tmm)))) + ((1 - Htlb) * (Ttlb + Tmm + (Hcache * Tcm) + (1 - Hcache) * (Tcm + Tmm)))

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a8a104f-2f8c-4e94-a36b-30cc6778d303)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/75b02f22-c874-43dc-9056-c77dac8bdcd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c284c0ad-b980-43aa-b4fe-a520ae8e64d1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ecc3848-5ba5-4559-af65-563345f1d021)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a873324f-18ad-43e3-8f68-6e591bf98c26)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74ac42a7-be39-4f53-b382-2f7eaa120812)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/809b63da-7629-4433-9b0a-78b685845d89)

## Segmentation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7f73a663-9fb9-4bb0-b2cf-b8cc96ae3ff2)

* Segments -> Variable size process partitions.

* If we are making **Variable size process partitions** then can we make **same/any** sized partition in main memory?

> **NO**.

* **No division** in **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e4de6615-0632-4372-ab7c-221451b98425)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35b71fa2-c423-431a-8ef0-e0bc579d4838)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/65c879d3-33b5-4a3a-8a69-5bab2c63e29d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7ac1cd0-d1f2-4a57-a0f4-8deb699c3aae)

* **4** segments of **different sizes** are **created**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/efca02be-10c5-4581-b038-b2d33f88a754)

> The starting address which is the **actual address** of **main memory** is kept in the **segment table**.

* The address of **main memory** is kept in the **segment table** as we don't have **frames**. The **actual address** of **main memory** is kept in the **segment table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d390dc8b-b88a-4ebf-a1d0-1b021d5d4d70)

> The addresses are the **base address** of the **segments** in main memory.

> In the **segment table**, we have to write the **base address** of all the **segments** in main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e7e3325-3994-45d8-95d8-781cca83b3db)

* Yes, no **internal fragmentation** in this.
* **Segmentation** will have **external fragmentation**

* In **paging**, the size of all **pages** are fixed?

> **YES**, the size of all **pages** are fixed.

* In **segmentation**, the size of **each segment** is **not fixed**.

* * In **paging**, one page size is **16Byte**. All **pages** will be of size **16Byte**. In the **byte no(d)**, **4 bites** should come as **16 = 2 ^ 4= 4 bits**.

* If **16Byte** is in a **page no** then the byte numbering will be from **0 to 15**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36f992c0-7aad-4e8c-b3f0-e3d0e61f1dca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/787215f9-6d85-4ce4-8269-a47d0b002aeb)

* If **d = 0101**, then someone is trying to **access** the **5 byte** within the **page**. 

* There is a **problem** in **segmentation**.

> CPU generated an address where **d=10** which means it wants the **byte no =10**. The **byte no =10** is not present in **every segement**. The **byte no =10** is present in **segment 0, 1 and 3** but **byte no =10** is not present in **segment 2** as it has only **5 bytes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84d2ccc5-ff99-4f3c-a321-67077d58d3dd)

> If a **byte** present in **one segment** could be **not present** in **another segment**. The **segment** is **smaller**.

> By mistake, the cpu has generated one address where the **value of 'd'** is **bigger** than the **segment size**. The **offset size(d)** is **bigger** than the **segment size**, then that **byte no** will not come in the **segment**.

* So, we have to keep **another information** in the **segment table**. Apart from the **base address** we have to keep the **limit** information.
* **Limit** means tell the **size** of each and every **segment**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d6e1ada3-4b2b-46ae-9b03-89f022711c60)

* **Segment '0'** size is **200 bytes**. If for **Segment '0'**, **byte no(d)** is generated then the **byte no(d)** can be between **0 and 199** and **not more than that** is allowed. If **more than 199** comes then we will **deny** and say that much **byte no** we don't have in the **segment only**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2a6296fa-3b9f-4145-bf2a-17f85871b014)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0fc3bb52-4bf5-4f52-a161-265de3613eda)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5865ee82-55af-40d5-b1a6-9eb1cfc56c5f)

* We keep **two information** in the **segment table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec9e0bbc-96d2-44fe-854a-900fc413abf7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec36829a-fcd2-4b99-b4c9-0ae7053049b7)

* **Segment 0** is at **1100 address** in the main memory.

* How **much/many** bytes in **Segment 0**?

> **200Bytes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f832ac5-6336-4b73-8a3b-44326e78d2a6)

* There is a **condition applied** here that **d** should be **less or lesser than 200**, **d < 200**. As for **200 bytes** the range is from **0 to 199** bytes, so **no equal to**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c32b839-dd85-4e98-89db-fe6e611a2994)

> In the **same way** as in **paging**, the **logical address** is generated which is **divided** into two parts('p' and 'd'). In **segmentation**, it is **divided** into **two parts('S' and 'd')**.

* S -> Segment No.
* d -> offset or byte no. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a7f35edb-ae84-4d4e-bde4-e4a5bc42fe17)

* **Segment no and offset** found in the **logical addres**. **Segment no** is used to do **searching** in the **segment table**. From the **segment table** we will get the **physical address(PA)**.

> For getting the **physical address(PA)**, we are **adding** the **offset** value to that **segment's base address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0a9598b3-7ae8-4722-a201-e9560d85bac3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98cc9060-68ed-46a3-84ca-d21c4d4d6029)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4c30c4dd-ecbe-478f-a18b-a610944203d1)

* yes, before **adding** and getting the **physical address(PA)**, we will **check** if the **offset(d)** value is **less than** the **limit**. If **offset(d)** value is **less than** the **limit**, then only we will get the **physical address(PA)** otherwise **no physical address(PA)**, as it is out of **limit**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc913c9f-59be-4b2d-a385-0d8ffc54241b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/83fca0d4-75c3-443e-b2b2-f3c4c6d64702)

* **No question** has come from **segmentation** as of now in **GATE** exam. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f519c17c-b73e-43dc-a07f-b5268660f65b)

* True.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79297c5e-1ee9-4ada-90e2-f3ea3bd1440f)

* 0 -> 194 < 200 -> Yes
* 0 -> PA -> 1100 + 194 -> 1294

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5dc211c3-a054-444f-b7b4-d33685f55e80)

* Solved in the **copy**.

* How is **d** created?

> **No. of bits in 'd'** is found out according to the **max. segment size**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5a04a66b-05c7-4c13-9e27-90c8b274f498)

* The **max. segment size** is **450**. More than **450 bytes** cannot be kept in **one segment**. 
* One limit is **decided**, where **one segment** comes and it **segment size** is decided.
* Every segment we create, that **segment size** should be **less than 450**.
* The **d** will be **created** according to the **max. segment size** and how many **bits** will come in **d**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3e276d8-9af7-437e-91af-a88d2495b71e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e512db7e-695e-4475-a38e-a4c317f2ec1c)

* No. of bits in **offset(d)** = (Log(max. allowed segment size) base 2) bits. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4197abde-beba-475b-8576-6eb0f8fee9d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54f28954-b713-4d08-9f63-ad6bd310dca1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02418bec-cb02-42ab-89e1-9cc9ee055a10)

* NO.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eafa88d3-497d-4b16-b65b-bf784c464d76)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/89db5e4d-abbd-400c-b0c9-9a54870d5203)

* **No**, Will be a problem. Hectic task. Not possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f5deb2b-d778-4190-ab4a-75728105470f)

* Segmentation suffers from **external fragmentation**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0e415e9-354a-407f-a59e-8b12e4809a8d)

* Deadlock prevention is **more stronger**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49c849c8-bb5e-4f2d-b22e-efc042c91494)

* Not deadlock detection, but **prevention and avoidance meh**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5a56c89-e970-4de5-b75c-880922a45f21)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e3fcd59b-f684-4f29-9a16-31dd4bbd3e56)

* yes

## Segmentation virtual memory (26) [7th June 2023]

## Virtual Memory

> It is a concept and a feature of OS. It says that if the size of the **process** is **greater than** the **main memory** size then also we can **run the process**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a0d61452-4fdc-4245-a097-2e6b5f84a5a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f83d7597-eb0a-4f55-a5e5-629c305cbdc3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8caa57ea-4f53-4153-b4c3-bee30ed0bb01)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/132c1ff4-7f51-4b0c-9e6a-f81f3dceab40)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/91958e3b-5a39-466b-8d8d-64afe46bbe7a)

* No. of enteries in page table = No. of pages in process.
* Which ever **pages** are available those **entries** are kept in the page table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f890c7c-3f25-4613-a173-26f2de0e334b)

> The virtual memory says that the OS has the power, if the process is **bigger** and all of the pages of the process cannot come into the **main memory** then keep some of the pages in the **main memory** and keep the reset of the pages in the **secondary memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/48f33e12-486b-4423-bdf6-8a2b122473ba)

* The above **process view** is visible to the cpu.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f2a8447-542a-426a-927d-ceb1a2eb20ce)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26bcf37b-b1cc-422f-8839-a293abe6b121)

* How does a cpu demand a page?

> By generating a **logical address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1399197-97b5-498b-8119-4782221d6868)

* If the page that cpu wants is in main memory then it is called as **page hit**.
* If the page that cpu wants is not in main memory then it is called as **page fault**.

* A few pages of process kept in main memory and rest is secondary memory.
* The page which are in secondary memory are brought into main memory.
* Page Hit -> If cpu's demanded page is **available** in main memory.
* Page fault -> If cpu's demanded page is not **available** in main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bdc79bc9-4fbc-46d8-9aa3-b2c1ac0d5404)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5906c91f-b8db-4543-ac55-f3294a337ed1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e5cc666-6614-4443-bbd5-dd3e900f3cbd)

* We are talking about, Single processor, so no **two pages** can come together.

## Demand Paging

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/912c66fb-7b8e-4649-b81e-7bb354030d91)

* Don't bring the **page** into main memory unless there is a **demand** for it.
* The **demand paging** concept is the **initial pages** that are needed for the process, those **initial pages** at the time of **process creation** are brought into the main memory and the rest pages are kept in **secondary memory**. When further **page's** demand comes then bring them into main memory. 
* Some pages are already kept in main memory. This is **demand paging**.
* **Demand paging** -> When a process arrives, a few pages are kept in main memory and rest are brought to main memory on demand.
* **Pure Demand paging** -> When a process arrives, all it's pages will be in **secondary memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdcfa733-133f-403b-a1dc-8c42262189b4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f0fc7a37-df54-413c-94f3-023b66417d67)

* Initially in **pure demand paging** all **frames** are empty.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/920c4a20-b5dc-49b3-9379-5c75efbf29e8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f56e65b8-9cb1-4655-8505-d3a7c870cb60)

* **Pure demand paging and demand paging** are concepts that are **before/earlier** a **process** starts.

* **OS performs page fault service** -> It means that the OS will bring the **demanded page** from the **secondary memory** to **main memory**. If there is an **empty frame** in the **physical or main memory** then the **upcoming/new page** will be kept there. If there is **no empty frame** then anyone of the **page** is **replaced** and copied to **secondary memory** after that only the **new page** comes into the **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6558c6bf-5e11-46ca-87ba-b97dc5b0d6dc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7c1ab71c-0c9e-4f94-86d5-4121e31c76aa)

* No **empty frame** here so one of the **page** is being **replaced** by the **new page** and copied into **secondary memory**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/095ed432-3e7f-4922-8fa5-f9077f8210b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f962d6f6-6697-4e1f-a419-e0ea69167c43)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d8b3e012-5e63-4010-9e00-946a76f94a24)

* **OS** is doing everything.
* OS performs **page fault service**.
* OS brings **faulted page** into main memory and updates **page table**.
* If a frame is **free** then keep new page into it or else replace a page and bring new page in place of it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/887b9a54-7a06-42da-83ef-230b0b81fe0d)

* Is there an **empty thing** in computer systems?

> **No**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3a6aa01-39d2-4f8d-9e0b-e305d22ff3c5)

* 'x' contains some **un-predictable** or **garbadge value**.

* How we will know that **page 1** is in **main memory** or is in **page fault**?

> For this, in **page table**, with the **page entries** we keep an **extra bit**. The **extra bit** is called as **valid/in-valid** bit.

> In **page table entry**, we have the **frame nos** and with that we are keeping an **extra bit** and **one bit** is for **valid/in-valid** bit. 

* Those **page table entries** we don't have currently we will keep **0** in the **valid/in-valid** bit. 
* Those **page table entries** we have currently we will keep **1** in the **valid/in-valid** bit.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2d57b08-e72e-4087-8b4f-d4d794144326)

* **Valid/In-valid bit = 0** -> page not available in main memory.
* **Valid/In-valid bit = 1** -> page available in main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/96ed6fe0-caf6-41f5-b1e5-7f6513bfcd72)

> When the cpu generates the **logical address**, we went to the page table. We found out that **page fault** happened.

> When **page fault** happens then an **internal interrupt** is generated for the OS. A **system call** happends and then OS performs **page fault service**.

* This **internal interrupt** in the OS is called as **system call**.

> Once the **page fault service** is done, the instruction which caused **page fault** will **restart** again and this time it will find the content in **main memory** and **page hit** will happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81316821-6e09-475b-a73c-1a888a4d778a)

* From where we are copying the content during **page fault**?

> From **secondary memory** to **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54c05b3a-dfe4-445c-b42c-1be73716ecfa)

* **page fault service** -> Copy page from seconday memory(I/O devices) to main memory(RAM). 
* It means **service of DMA** needed.

* Which of the following may need **DMA**, cache miss, TLB miss, page fault, etc etc?

> **Page fault** because we have to bring the **content** from **secondary memory to main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae4f774b-f4c6-4cb3-bb83-308a67f76477)

> If we went to do **page fault service** and it takes a **very long time**. It is called as **page fault service time**.

* Time needed to service page fault -> **Page fault service time**.

> Everything comes within it. If we are copying **one page** from **secondary to main memory**, **updating the page table**, **replacing pages** everthing is included within it.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3064e850-0caf-4006-b6f1-94b4f44903bd)

* Yes, everything.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e98f4f7f-f224-4ed4-ac33-c7cf25f79128)

> If **page fault service time** is **less** then the **performance of the system** will be fine/good. If we have an **empty frame** in the **physical memory** then there is **no problem**. 

> If we have to **replace one page**, then we will have to think **twice** that do we want to **replace** the page **directly** or we want to write the **page** in the **secondary memory**.

> For that an idea was proposed that when we are bringing the pages into **main memory** then track every page where the cpu has performed a **write operation**. On the page where the cpu has performed the **write operation**, that page has been **changed** by the cpu. Another copy of the page will be kept in **secondary memory**.

> We will check if the **content** of the **main and secondary** are **different**. If so before **replacing the pages**, we will copy the **page** in the **secondary memory** as we have **made changes** in the **frame** using cpu.

> If the **content** of the **main and secondary** are **same**, as cpu has not done any changes to them. When we want to replace that **page** then we can **directly** replace it. **Yes**.

* This same concept was in **cache memory**.

## Page Swap Time 

* For each page entry in page table, a diry bit is maintained.

* 'M' -> Modified or dirty bit
* If **M=0** -> Page not dirty
* If **M=1** -> Page dirty.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/de53e114-a3ae-41fd-96cf-99e88209aa25)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6adc27aa-05e4-4836-be70-bd7852fa8235)

* While replacing a page from main memory, only dirty pages are written back to **secondary memory**.

> When we wanted to replace **page 0**. When replacing **page 0** we will check it's **page table entry** that infront of **0**, what is the **modified bit**. If the **modified bit(M) =0** then we took the **page 0** into main memory but we never modified anything so the **copy** in the secondary memory is same as the one in the main memory. So, we will **directly** replace **page 0**, we will not **write back page 0** to secondary memory. **Hugh amount** of time is saved as secondary memory is very slow.

> If a **page is dirty** which means **M=1**, then we will **write back that page** to secondary memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6eb437cf-716c-41dd-86c6-0522a1d8f55f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b744a08-2ebf-433a-8c71-3f8587043883)

* **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/274ee89d-5004-4d33-94da-86b36107bc24)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ef990f9-3e00-46b5-8df8-503a31a5b405)

> All pages are in **secondary memory**. When a demand of a page came then we have made a **copy of that page** in the **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d3ba2a56-c2a1-4da0-8b84-bf4da65f5439)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2cbb217-8423-49eb-9577-5b5a521f4327)

* Many different cases will be created here.
* Page fault time and **empty frame there** -> **First and second** times are **zero**. **3rd and 4th(Blue and yellow color)** time are **taken**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ea08a07-5639-48f0-bd3a-811be76f714e)

* Page fault time and **no frame there** but the page to be **replaced** is **not dirty** -> **2nd time(Green color)** is not taken**. **First, third and 4th(Pink, blue and yellow colors)** times are **taken**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/016f99b8-f9e7-45ae-ba2c-fc07b1efa89a)

* Page fault time and **no frame there** but the page to be **replaced** is also **dirty** -> **All four times are taken**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cfde1fd1-6cf9-42e7-97d0-51dbd10fb5eb)

## Effective Memory access time

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2264022a-f0c7-4bf2-ba4c-a24e1c4d163e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffc11e55-bb0f-409c-b6f3-edeae4fe6e9a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a3f72a03-13dc-4e0b-88a8-628fd2d4ef23)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b967917-b014-41cb-926e-ee7560a1c6ab)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2d6d48e1-f8f0-48ed-a7e6-198eda196394)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/faece729-048e-4012-801d-ea948b89470b)

* More **refined** formula.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6775e154-3fbb-4b74-b2e4-43a4d8c63aec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/69bda203-083f-4ff9-b19d-96c1e24949a2)

* When **page fault** happens, **page fault service time** is needed.
* When **page fault** doesn't happens then, **two times main memory access time(2 * Tmm)** is needed.

## TLB and Virtual memory

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/26d29b30-b428-40a8-938b-7aee7e5c292f)

> If **hit in TLB** then we will get **frame no** and in turn get the **physical address(PA)**. We got **physical address(PA)** means that **page** is within the **main memory** itself only. So, for **these page**, can there be **page fault**? **NO**. **Page fault** case will not happen.

> Now go to **main memory** and access the content.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fb5f3bba-e63a-4cdc-aa0e-637f27a7f274)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b766cd77-9572-4bad-8775-a0fc066baa9d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c3e5858-4b99-4dff-a6a2-67df21be4833)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f40e5e7-ec53-40f5-b417-380023ab625a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05f46ff1-26c6-49c3-ad8b-40caa819433f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ff91e09-ab70-4a6b-ab98-5c28e71aa2b4)

* P -> Page Fault
* (1 - p) -> Page Hit.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ca95d9a-13c6-4589-ae7a-6095bb985050)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93ea3fff-800b-4687-b6d3-804568a2bd14)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ec9b589-8c42-4095-9643-9511ed291a37)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb3649fd-50d0-46f4-bf3c-e2c4bdf73595)

* **GATE 2020 question**.
* DPPs given.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf93dc84-0c06-4d51-b06f-ef101914a80f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9123ac8-711f-4845-82a7-3c684beb3fa5)

* Will be broken down and given seperately and we have to find the **page fault serive time**. Like below.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7594961-0c1a-4d9d-8b49-d76ee53fd083)


## Page replacement algorithm (27) [7th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e18828d1-086c-462f-882e-7dcc4f1c100c)

* Effective Memory Access Time **formulae**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0c5f7e54-350d-49e1-a88b-847d3e495b97)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fddf6986-2d6c-40e5-967c-56bc58e2a632)

## Dirty-bit included without TLB

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ba7240c-b47c-4e41-8a32-83c394c3b43e)

* **Hit in Page Table** -> PA -> Access memory for content
* **Fault in Page Table** -> No replacement or not dirty page -> Direct bring page from **secondary memory** to **main memory**.
* **Fault in Page Table** -> Replace dirty page -> Write back dirty page  + bring page to main memory

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f2c57979-ec2e-4adf-8654-de161e6ed356)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7713001a-2733-4375-9440-4562d0fa20f3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/04138119-57d8-43d0-9f9f-222096e01706)

* Will be given in the **question**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8036f02d-258b-4ff7-b3ff-862d9d26c1ca)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b0946496-b6e5-4878-bac4-d9c1c217e473)

* Formula.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fe550b3-0fb5-4fa6-b2a7-7541994df4ba)

## Dirty bit with TLB

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/98c5810b-713e-490a-88fd-a7825f261f45)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ae3cc72d-29dc-40cd-bda2-27afcebb2874)

* Formula.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea701f4d-bfc9-4608-a193-d8eabe485dd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8026ce8-67fe-4542-8f89-dca96613b6c6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b4d32533-b954-4ab3-8af2-6bb6c1ab294a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d16b9d1-c8c9-49a7-8b8f-9a7b7a25cc22)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d6b6709-3c5a-4d97-8a1a-3d8b80fc492e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7a37e3f2-c937-4ac7-9015-25e6d93fc05d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f5bc39f3-9a15-4b0e-b5e1-aadef222d360)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f44e42fc-809e-4ec5-9b4b-d95b3740372a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/196d6326-dc0a-442c-b277-b8f9cb8a7332)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4e980e03-4d41-49ba-ad07-8feea8cfed1f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ca0f0700-d66d-499a-a185-ba276843b16f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5e3e94c7-efae-4007-a770-b406d9ead421)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0b479471-bd78-4b78-9278-036314614d16)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/601d6457-f420-45ae-9123-5ff623c52ba7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9779b48d-2c65-4312-ae87-6ea0a93872a8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58e241ca-8dce-43b2-a8ce-caf2462d6321)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0ddfbcd-794b-4a4c-be93-6681d0e1d847)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1eae2bbd-5b14-43a1-aeeb-793a3029cfaf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cef687fc-64ef-4d5e-b617-280de1df2d8f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbe03412-68e1-4974-86ac-762fb5c76f78)

* Correct

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/95f42b1d-713f-431b-8423-f4573fe75eb8)

## Page Replacement

### Algos

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/74f39253-15a7-40c7-8012-b61ddef13190)

## FIFO

* Replace the page which comes in main memory first.
* All empty initially -> No pages are in **main memory** -> **Pure Demand Paging**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5ddb2a90-52b9-446a-85a1-333dd659ee6d)

* Tick mark(✓) -> Indicates **page fault**.
* Cross(X) -> Indicates **no page fault**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4bdc105-9753-4480-8698-65220fab53d2)

* No replacements are required as of yet, as we have **empty frames**.
> Now **page 4** comes, **page 4** is not in main memory so **page fault** will happen and we will have to bring **page 4** into main memory. We have **no frames** left and we have to replace one of the **3 pages** from **main memory**.

> Now, in **replacement** algo we have to consider which one among **1,2 and 3** we want to **replace**. **1** came **first** so we will **replace 1** and bring **4** into the **main memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1d5a0207-62be-4cca-ad20-f7f10c3046a4)

> Whichever comes **first** in the main memory, **replace/remove** that **page** from main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22226261-fcbd-4114-9a17-69d3f4f6dd7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d24be8c-ccd2-411e-b48a-9e5dd3919352)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ffb7688d-180e-41db-a31f-73ea802bb51e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/93d79bda-7131-4e12-b893-66f44c5ba306)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4ad1e00f-397a-4768-a427-c0f6a4f63cc8)

* Depends. We cannot say anything.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f9369b3d-7abc-4cff-bed0-70dc2e739304)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1dab5cf4-57de-44b4-b78d-3f28e748c84b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3296badc-7a9d-404d-8f60-bfb1631d0b70)

## Belady's Analomy

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/550c4650-c99a-47c4-bda5-15a6571ca2c1)

* For **some page reference sequence**, **increasing** no. of frames may increase no. of page faults.
* Only **FIFO** suffers from **Belady's Analomy**.  

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/af8b2e91-ac87-4e32-ab50-88ce2d4bda85)

* Only **5** page faults.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cfa09dd1-b226-4a53-87e6-03c4d33cb900)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2bd4376-2c83-4480-b0e1-9be4ac61f6c3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0f07c73f-9508-4653-9e05-94c2c421ca8a)

* **FIFO** advantages and disadvantages.

## Doubt clearing session page replacement algorithm (28) [8th June 2023] 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9fffc499-e1f7-4175-b981-2dedf413d303)

* No. Not there.

## Doubts

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7c34868-2ddc-4f13-8f1b-f3d619f0c751)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c88bc7c0-8758-4113-b7a1-495050ef1c7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80982939-d2c9-4b5c-9001-1ef94129afe7)

* Leave this type of questions. Will not come in GATE.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b412bcf-a49e-481c-bbbe-7946243b9792)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7739a250-7139-4d5f-b9d9-9155c3be3999)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7587a793-3140-4027-ae57-3c6b0089d13c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fe17c39b-ac77-4e70-94be-a131b3a0c018)

* No waiting will be there.
* Starvation can happen for resources.
* Live Lock could be possible.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b677b892-ed56-4240-aadb-3557e0579af2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fbca2e86-8427-4621-9321-7fe0605c4901)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/906dbdc9-4020-46c7-b58d-20d00482f45a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/984065a5-bd90-4339-bf24-b406605a5970)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b6872d7b-f794-4164-a935-f24f99a7c8e1)

* EMAT or Effective Access Time is **inversely** proportional to **hit ration**. As **hit ration** is **increased/increases**, the EMAT time **decreases**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31efae6c-3f97-4f32-9080-9899c9732a41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bf4d5227-38ef-4b24-93ff-6269172d63a1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22a2e664-b713-47b6-8e1e-fa92cf0c3be1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2808150-92a1-4317-82b3-ebc8734122cb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d7126157-2098-429e-906d-a11d73a5db70)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5cc7200-f3c2-4476-8da8-800638395b53)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/551880c6-d8d1-4c32-a529-ea99085995e2)

* If we **increase or decrease** the **page size**, **virtual address** remains the **same**. 
* If the **process size** remains the **same** then the **virtual address** remains the **same**. **Virtual address** will not change.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1081571b-b4c9-4ed2-bd4e-d6f4598282fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4df8bb6c-4528-40fe-b36d-a8daeaa57bda)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1db82735-e277-40ee-bdfd-cc03e9f93111)

* Yes. As **page size** is **bigger**, **internal fragmentation** can be **possible/maybe**, not confirmed.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a139b61e-4f32-4afd-8ed1-d629388301d4)

* Ofcourse, reverse will happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd3e4a85-a627-41b0-b1fb-8a70ec5e3e3c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/09ff0d1f-9d05-4c37-a9e8-8ac38d9762ad)

* When no page fault.
* When page fault

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f52a8012-2b74-4543-9fc3-56314a8ca2c3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a90cdda7-4cc7-4ebe-95d0-0c3c1ca62685)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ee66f96-e54a-49ab-a522-11104f8d692c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a373ce8b-5867-4204-84ec-2232432ed525)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d73d31e-12c4-46f3-8ba8-44e2c5dee97e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/120d32f7-8aaf-4506-af1f-2cc36fdbb00a)

* **Fetch and set** is like the **lock variable**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/236293ce-fa7b-4fef-9063-6ce0aea04528)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dce9ff8-b0d1-48c4-ae63-81d50fc000bf)

## Page replacement and frame allocation (29) [8th June 2023]

* **Belady's Anomaly** definition -> In general when we **increase** the **no. of frames**, **no. of page fault** doesn't **increase**, it will either **remain the same or decrease**. But in **FIFO**, there are some **page reference sequences** where if we **increase the no. of frames** then the **no. of page faults** also **increases**. That is called as **Belady's Anomaly**.

* To solve Belady's Anomaly, we will implement **optimal policy**.

## Optimal Policy

* Replace a page which will not be referred for **longest period of time**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7413226f-922a-4970-8d4d-bcb2849fb72e)

> Now **4** comes, we have to check among **1,2 and 3** whose's not referenced for the **longest time** in the **future**.  

> **3** is being used **way forward** in the **future** compared to **1 and 2**. So we will **replace 3** with **4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16b4f227-89a9-4012-b017-aa476765a714)

> Now **3** comes, we don't have any reference of **1 and 2** in the future but we have **reference of 5** in the future. So we are definitely not removing **5**. **Two pages(1 and 2)** who have **no reference** in their future. As they both(1 and 2) don't have **no reference** in the future, whom we will **remove**?

* If multiple pages comes that don't have any reference in the future, then we will apply **FIFO**.
* If **Tie** happens and to **break** the **tie**, we will apply **FIFO**. 
* Whichever page has **come first** we will take that out **first**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a90aad65-911d-4a19-b053-feaaed26d6e7)

* Out of **1 and 2**, **1** has come **first**. So, we will remove **1** first.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0dff8542-de92-4848-8efb-12cfdbe711ad)

* There will be **no difference** but we have to implement something here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d65b95aa-4e8d-43f4-abd6-fdaea3857b87)

> Now **4** comes and **3 and 2** doesn't have **any reference** in the **future**. So, we will apply **FIFO** and we can see that **2** has come **first** than **3**, so we will **remove 2** and put **4** in.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e127d1a9-4d56-44f4-b611-53e81a127b41)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cff0a6f8-721b-43e5-88d8-0f108b0af053)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d6ee2ba-27f4-4fc0-ae2a-2834fab94479)

* Exactly **same**. **YES**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/703c3fff-9d41-4645-9425-fc2e9f36dbd0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0294f47-41af-49fb-9e78-103e70c6e7cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8be54622-f6b6-4eb0-b122-b8c55ec9f6e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2f5f7c7e-8b70-4423-80f2-0a021d87d1fb)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6682647-dc15-46bf-8b06-aad5e6c884ee)

* Advantage -> Provides min. possible page faults.
* Disadvantage -> Not Practical
* Why **Time Consuming**?

> Takes a lot of time to find a page to replace.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2675ac24-d797-420e-8e53-86614e19ac14)

* If asked in a question and we are given the **sequence and no. of frames** then tell the **min. no. of page faults** for the **given sequence**?

> If **some other policy** is not mentioned then we will apply **optimal policy**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7b1e701b-3ddb-49ad-98fb-98daf59258c3)

* Sometimes page reference sequence can be is like that some other policies are brining values **close or equal** to optimal policy but **not less than** that of **optimal policy**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec6109d8-1d48-4fb8-9af6-3d188db39177)

* Optimal policy gives no. of page faults always less than all other policies' page faults?

> **NO**.

> All the page faults will be **min**. **YES** but the **min.** cannot come to others that is **not necessarily true**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1c9f890-3698-4cf0-9421-395c7a319c5d)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a6f5adeb-2d24-4275-8df0-2cbbea0be874)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8b491372-d66e-40e5-b768-c064eb17cbf1)

* As we can't see the **future**, let's try and see the **past**.

## Least Recently Used(LRU)

* Replace a page which has not been used since longest period of time.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2179340b-01a9-4ef4-9fb0-b531d895f3d0)

> Now for **4**, we are checking which **pages** have been used **recently**. **1** was the **longest** which was **not used**. So we will replace **1** with **4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4cf2fd8-404e-40b9-84a0-4537a48cc26c)

> Now for **1**, we are checking which **pages** have been used **recently**. **2** was the **longest** which was **not used**. So we will replace **2** with **1**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0212e8fd-1730-4e15-ab0f-72ffcbd4412b)

> Now for **2**, we are checking which **pages** have been used **recently**. **3** was the **longest** which was **not used**. So we will replace **3** with **2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/be5280f0-c350-4fa7-b248-e9155bf24743)

> This is the **difference** between **FIFO and LRU**. Now **3** came and according to **FIFO**, we would have removed **1** but in **LRU**, we are taking into consideration that **1 and 2** which had **no page faults** were also **used**. So in that case between **1, 2 and 5**, **5** was the longest which was not used. So, we will replace 5 with 3.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/20603fe2-bd1d-4020-ae00-0126d44aee9d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/bb71dd33-48bf-4726-9983-858b644b1a15)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/41fb783a-1e25-44aa-8de4-04a507aefe4a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d4be9f5-1770-4815-b80f-f1904bb70dfa)

* **No Tie breaker** or anything needed here.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bffdb9b-1014-44ae-b106-ad763f536efa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b64b45d8-fa93-44c5-9c41-0ad7df5ebf55)

* Depends, implementation detail. Complex implementation.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c838b0b-1a60-428e-b778-58f018ddf8cc)

* LRU, **advantages and disadvantages**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/143d0b3d-5655-47d0-8c12-aea539696b81)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4865551c-8243-4cca-9f7f-87466ce31691)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d896d408-cb2b-439f-91ed-18fd20f3adea)

* Apart from **optimal policy**, some other policy can give the **same no. of page faults** as **optimal policy** but less than **optimal policy** is not possible or will not happen.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e43f6c43-0a94-4a49-b7fe-735719aed90e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d19cb36-257b-44b2-bc0b-60d1a66b029a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/27cda218-561f-40b5-b003-467f75523631)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60513c15-b446-45f9-ba56-761ef4712620)

## MRU

* Most Recently Used
* Replace the page which has beeen referred most recently.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f26abac7-1594-4250-89d5-c212a475aa50)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d4e9079-0c81-4efa-9a98-5bfb4e1e31c2)

> For **2**, the **recently** referred one is **4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/33408195-a376-471d-b027-bd4b2fe94508)

## Counting Algorithms

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f19a875a-0caf-4ac0-b511-fc9025d01624)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/42dfe9e6-1bbe-4e64-9d98-703e8267b5be)

## LFU(Least Frequently Used)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c91b91f2-9c70-4c45-abcf-a3e9a2ab2234)

## MFU(Most Frequently Used)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1be5c38f-66a7-4d1b-8ec8-18679f3a31dd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/05ef4c0f-67eb-4793-9b76-4ca6f0d06852)

> For **0**, we are checking who has the **highest frequency** amoong **3, 2 and 4**. We can see that **2 and 3** has the **highest** with **2**. So a **tie breaker**, and we will use **FIFO** to break the **tie** as **2** has come before **3** so, **2** will be **replaced** with **0**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e25c62fa-d3af-4982-b9c2-59d6761e4458)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b24b64c4-014b-4b30-82d3-e2ebff93883c)

* Not **same** to **same** always. Not necessarily.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/940d489a-7d5c-45ad-ba9d-d758c8c26a73)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0efcb8af-abc8-46ac-8f19-eb3e6e30dbba)


## LIFO(Last In First Out)

* Replace a page which has been brought to main memory last.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/07b35661-77d7-450a-b2ca-896b62d8f9c8)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/188d5fe2-5ab8-405a-abae-8cf904fd9ce5)

> For **5**, the **latest** bought to the main memory is **4**. So, we will **replace 4** and place **5** there.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6f2a536d-b659-4299-ae1c-85665cb8099d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b804d62a-188b-4fc8-a111-9f1b0523be5e)

### Questions

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9c45c8aa-3f8f-4960-9169-194d0493e937)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5d55dbf8-2d1d-4e33-b752-c905c49c0b1d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/650c86bc-e575-4cea-b1e1-4316f9cf9597)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8fd82f11-3f40-44df-aaf5-6f13587f6787)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ab2e910f-53b9-4fbd-93f2-22b7f32ce2c1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a89e5fb9-2a1b-4b9e-be0f-7f4544511706)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4ecc502-3526-4443-929b-409b3eb3db51)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7673204e-605e-47a7-9570-f0d9a764b5cd)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b55a8828-68c5-4ede-bcab-180cf01490d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6eab4df1-42ce-473e-8a0a-482d04e9917e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/486da4d8-9645-443f-a49c-2bd79ae90c65)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aa69664c-ccae-4f6b-9e7c-dd9c8f3686a9)

* Home-Work.
* DPP also.

## Multilevel paging (30) [8th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/516d84d4-c57c-450a-bb4b-16fbc7d4985c)

* Pure Demand Paging -> Initially frames are empty.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8d6c7490-ad67-4c1c-9104-255056e1a2c1)

* Predefined division of pages is gone.
* They are **addresses**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/da7d725a-2210-4f61-9302-54edd764a430)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/52640c47-1e6f-4020-8346-208f13f82e94)

* CPU generates **logical address**, from that **logical address** we exact the **page no**.

## Making Page reference Sequence

* Assume CPU generates logical address in following order:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/22cba8c3-a68e-4b46-91a5-b8f30caac059)

* **Page reference sequence** -> 3,4,2,4,3,1.
* If **consecutive** pages are being **referrenced** of similar type then we will write it **once only**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2501fcb1-573f-4c55-9c48-2d38e3cd3abb)

* If a page referred consecutively then in page reference sequence, it is mentioned only once.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ea0ef0ec-e586-4ac5-ac44-229041f0d6a5)

* The **hit ratio** we calculate is of the **page reference sequence** and not the actual one.
* It is actually not the **actual hit rate**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1f37e108-34c7-4c5c-8e5c-4157cd1f0fa6)

* p -> 1010101011 -> 1 + 2 + 8 + 32 + 128 + 512 -> 683
* d -> 100000 -> 32

* From the **page no**, what can we solve?

1) Find **physical address**.
2) Calculate **no. of faults**.
3) Calculate **page reference sequence**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2157d7b-e559-48b9-bf18-1b8db4e7c1ee)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6e5ff59f-722f-42c3-8290-ef227876e64d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36b6e16a-e4b1-4027-bef0-0f498b3310e9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fa04106a-fb71-4a82-92c0-395806484fa6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/735852fc-322d-41be-b4cb-95dc8c46cfee)

* To which page does the **logical address** belong?

> We will use the **division** method when **logical address** is given in **decimal number system**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e053220f-0cc8-41b7-a569-8b80b923a47f)

* When the **logical address** is given in **hexa or binary number system** then we will use the other method, which is **divide the bits**. 
* If in **binary** then direct **division**.
* If in **hexa**, converting to **binary** is easy.
* Direct distribution of bits.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7d010004-cbd9-4efe-b8b2-904a1acb268f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c993388f-e2b9-4571-a466-b1ce36a0da2e)

* Ofcourse.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c02f934-fdb0-4a11-ab37-88db3841c203)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/90b5fcc1-b4bb-429e-9da0-3228fe8ff39e)

## Frame Allocation

* At one time, there is only one process in main memory or more?

> **Multiple**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9afd5849-9f7a-49b2-84a4-fd7ae28eac9e)

* Frame Allocation -> How many frames do we allocate per process? 
* The OS allocates frames to the process.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9b387710-1841-4ef4-b7d2-e97e354b0d47)

1) Equal Allocation -> All processes get equal no. of frames.
2) Proportional Allocation -> A process gets no. of frames allocated based on it's size.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db8b22cb-3a4b-4324-9632-dbe60cbe5dfc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/989126e0-212c-4d8b-a127-b3bb8f978d5b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b92a1854-547f-40b4-94cc-b20811f1ff75)

> In **proportional allocation**, calculate the **total no. of pages** in the processes. Here, we have **12 + 4 -> 16 pages**. Out of **16 pages**, what is the **fraction of p1 process**?

* P1's fraction = 12/(12 + 4) -> 3/4
* **No. of frames** for P1 -> P1's fraction * (no. of frames) -> (12/(12 + 4)) * 8 -> (3/4) * 8 ->  6 frames.
* P2's fraction = 4/(12 + 4) -> 1/4
* **No. of frames** for P1 -> P1's fraction * (no. of frames) -> 4/(12 + 4) * 8 -> (1/4) * 8 ->  2 frames.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2caca302-191b-4bd8-9ed6-eafdbd6c6170)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/638b43de-0182-4c8c-a1c8-d88065c644e1)

* Equal allocation is not good because some big processes which have many pages will get less frames, then there will be **higher no. of page faults** in them.
* The process which has less pages and got more frames, then they don't know how to use those frames properly.
*  Equal allocation is not good idea.

## Local VS Global Allocation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3f674da0-bb3e-4377-a86b-3f58b4000775)

* Any process which has **fixed no. of frames** allocated to it from beforehand and **page fault** happens for this process, then a **new incoming page** coming to **main memory** then that page will **replace** this processes' page only everytime.
* If this happens then it is called as **local allocation**.

### Local Allocation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8f5ad1b8-cd1e-4731-afb4-512f3fccbe63)

### Global Allocation

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76b1bb19-7add-4cfa-bd08-ae297d842004)

## Thrashing

* As we **increase** the **no. of process** in the main memory, **utilization** of the cpu **increases**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6a1d24f-6d4a-4d56-ad17-509dfb0da47e)

> CPU **utilization** has started **decreasing**. CPU is not being used to run processes, it is being used for **page fault services**. If cpu **utilization** has **decreased** then **long time scheduler** will think as the cpu **utilization** is **decreasing** it has to **increase the no. of processes**. When **no. of processes** are **increased** then **more page fault service** happens. 

> This cycle of **increasing the no. of processes** and the cpu **utilization** is **decreasing** continues. At a certain point of time, there will be **alot alot of processes** that the cpu **utilization** suddendly drops and becomes **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c6ee9f29-1a58-4f9e-8028-a14ee3168dcd)

> Now, cpu only does **page fault services**.

* When the cpu utilization **decreases** and it becomes **zero(0)** then that situation is called as **thrashing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a1545530-721c-4d44-baa2-4b7828bbc35a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6fb61cc7-9b81-4ba6-8e3a-1e4b48487c20)

* High-level paging activity is called as **thrashing**.
* When cpu spends more time on page fault service as compared to process execution.

* **Two** models to control  **thrashing**.

## Locality Model

1) Working Set Model
2) Page Fault Frequency

## Working Set Model

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6d675dfa-2332-4770-b225-008367299104)

* Process's working set.
* Keep min. no. of required pages of a process in main memory such that process experiences min. no. of faults.
* **Keep min. no. of required pages** -> Working set.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6a9b704d-8d6b-4426-83f6-12ec4ebb0fe3)

## Page Fault Frequency

* For example, 
* **Upper bound** -> 18%
* **Lower bound** -> 5%

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6ddb3643-ed00-4560-ae46-2fd3af024260)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1e62c474-76cc-45b2-827a-8af495845b7b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9f8e25f4-5ea4-4ddb-918e-58898fb9c0b5)

* **64KB** is the page table size
* Can we keep the whole **64KB** size page table into a **page** of size **1KB**?

> **NO**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b70058d4-d900-4174-8ddf-db438910eba8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4a1c75b8-38a8-4cbd-91c9-9cca2c947839)

* 64KB/1KB = 64 pages.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/03f91f76-5d49-450c-836b-225bd2929481)

* If not then how to access the specific entry?

> When the process comes to main memory, then the **OS**, **reserves** some of the **starting space**, to store the **page table** completely.

> The **remaining space** is **divided into equal size pages or frames**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/286a264c-6814-41cf-9a9c-a17efe68e0f0)

* This is the **basic concept**, if we want to store the **whole page table** into main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b7a1eb4f-ce89-473c-9a05-f5ad3a1eb6ff)

* If entire page table to be stored together.

> **Virtual memory** says that we don't have to bring **all of the pages** of the process into main memory because cpu don't need them all at the **same time**, why will we bring them.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/836d3a4f-d65b-4abd-be2c-ce23cc17e144)

* The **concept** from this came out that we will do **paging** of the **page table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8c65041-ec62-41c2-aa45-6311d071cf26)

* **Two advantages** of doing the **paging** of the **page table**:-

1) To keep the whole **page table** together, we don't need to **reserve** the space. We can store them separately anywhere.
2) We don't have to keep whole **page table** in main memory. Keep the ones needed in main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87028079-7ded-4660-9b92-1505561520a0)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a808c6a9-91e3-4a51-b57b-6242918ec80d)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/57951570-eb14-45fc-8db2-083580832d7c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c09e9454-38ee-4b13-8718-8a83ac0288d3)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/073d7b7b-f221-4175-9d84-8b739c2ff2b7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1a6b997c-c8b1-4278-8ac6-4c38edf70123)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ff1a4e11-f0fd-42e5-b7fd-5030082c75ff)
 
* We have made **two** parts of the **page table**.
* **Page table** is of **8 bytes** and each page is of **4 bytes**. To keep the **8 bytes page table**, how many pages are needed?

> **8/4 = 2** pages.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4d7a088-f1cd-46b1-930b-baca46f501a6)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87c96e7f-2e31-4370-ac13-9841a9f2692c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/218dacdd-e4dc-4d69-8e85-1fa70e7ed6a3)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/56d3566a-dec6-433e-bde0-960826b456ff)

* Here we will have the **page table entries**. **Page table entries** have **frame no and etc etc we know**.
* Each page can have how many entries?
* Each page size is **4 bytes**. Each entry is **1 byte**.
* No. of entries per page = 4B/1B = 4 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/78e8ced9-a8d6-49c3-9762-db281a5b5780)

* We can keep **4** entries.
* We will have **2** pages.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e498bf48-b608-46d0-85d4-84a389a5f511)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9ee8f63e-a84e-45a8-8b85-164150e86c32)

* Page 0 and Page 1.
* We have created **two** pages of the **page table** and kept them in **two** different frames in the **main or physical memory**.
* let's assume we will store the **page table** in the **main or physical memory**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/679d07a0-bab3-43e1-afda-df5e7515eace)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35869fcd-5540-4a50-ba89-928175435eae)

* later.

* If cpu requested for the **page no = 011** and the entry in that page.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cb6e6d50-06a3-47c7-88eb-73dc21f2746a)

> The first question is that the **page no** generated is in which part of the **page table**?

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66abc59e-af83-4d80-9ddd-fb61b9abeb86)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e1d9eb86-8c56-4cd2-97b2-85a392cb8246)

> There is another **table** here.

> If we want to access the **page 0** of **page table** then we have to go to **frame 8**.

> If we want to access the **page 1** of **page table** then we have to go to **frame 3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b452e83e-2cc4-462d-a15e-80d206e7bb8e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fdbd8da8-30a7-4391-a3b0-425559f729bc)

* Separately, we have to maintain **one small page/page-table** or whatever it is. It is saying that **page 0** of **page table** is stored in **frame 8** and **page 1** of **page table** is stored in **frame 3**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3e41bcd0-49a6-43e0-8753-d5632f5990c9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9317936-3992-43a8-9c65-de161b9b7936)

* Yes.

* When have to found out the **page no = 011** of page table entry is in which page table page?

> Page table page 0.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4af1104f-9391-45f8-bd9a-8b94274f994f)

> We have to **search** in **page table of page table**. **Page table page 0** is in **frame 8**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/199918ff-1c8c-4a7e-8d4d-d4b434f63a28)

> Got to **frame 8** and then search for the **entry**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/80e0e233-c581-4943-8e2d-30fd32eafb78)

* We got **page table enrty** for **page no =011**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fd0d38d5-5845-47b0-b9e6-914314ff3efc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2cbd34d5-0320-4ed1-8171-5b91fefc8c64)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/84e0156f-be6d-463c-a0f7-5183953afd2d)

* We have just extracted the **p** value.

* By knowing the **starting one bit ** of **page no**, we can tell the **page no** generated by the cpu is from **which page** of the **page table**, is it from **page 0 or page 1** of the page table.

> We will get to know that in **which page** we will get the **page table entry**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3d630815-e0b3-4fb4-b9fd-610a5410f4d4)

* Yes.

* If in another example, page table was **divided** into **four pages**. Then how many **starting bits** we would see to find the **page**?

> **Starting two bits**. **Two MSB** bits we would see.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ac6afd8e-b7ad-4b9e-a348-d1ebb8ecd635)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/49a2c1c8-b777-4262-8dbf-11548eac5085)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c1cf049d-0015-43f2-8d3c-91f3bd9d7041)

> If we say that in the logical address of the cpu we got the **page no = 101**. It means that, we will see the **page table page 1** and it's entry of **01**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ce2f1670-f2c7-41bb-ae21-7569b0d7a5a3)

> First, **search** the **page table 1** on **page table of page table**. We will get **frame 3**. We have **4** entries in **frame 3**. We want **'01' entry**. So, goto **frame 3** and access the **entry '01'**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c9b15fe3-32a9-45d6-8a8f-c49c280e0b4e)

* We will get the **page table entry** where we will get the **frame no** of that **entry**.

## Multi-level Paging

* The **page table** of the **page table** is called as the **outer** page table.
* The **page table** where the **frame nos** are kept is called as the **inner or actual** page table, where we will get the **frame no** of the **content**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/54fdc7c4-ab86-4ee6-aa9b-a4dbf369b32e)

* We **paged** the **page table**.
* We stored the **pages** of the **page table** in **different places**.
* The **page table entry** we want to search which be in which page? For that we have created another **page table**, it is called as the **outer** page table.
* The **outer** page table will be within the **main memory** and kept within a **frame** as well.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3209335d-73b7-4833-969b-e04eddc4fc0c)

* After searching the **outer** page table, we will get the **page of the page table** where the **page table entry** we are searching is kept. After going to that **page**, we will get the original **page table entry**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/60152211-af12-4f00-a522-cf116b4e590f)

* Inner page table's page.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/66e95af9-c9e6-4e93-820a-dd6964f46667)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d98b1aba-6cab-4a50-b50c-0ad8554399da)

* When we join **f and d** we will get the **physical address(PA)**. After gettting the **physical address(PA)**, we will get the desired page and and we will **add 'd'** and get the **content**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b386681d-f95a-4224-abe3-a42c50897eec)

* **YES**. Now, **PTBT** will have the **address** of the **outer page table**. [**IMPORTANT**]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/21fdb31e-6424-4d40-9eee-90f16427e1f3)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5541f388-81b4-40d9-a916-39fa5b801510)

* Ofcourse. Total page table size will **increase** but we don't have to keep the **whole page table**.

## Inverted hashed page table (31) [9th June 2023]

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b31e4512-7115-400b-8d9b-3a4e9e9597cb)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cc35d63c-6e98-46e6-b9e5-5548a5d61ec4)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7182a861-10c4-40fe-8971-ad94c79fa4e8)

* PTBR.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c2e4463a-ac95-4bd6-a788-1978a629e39b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a4c659e7-72e7-4622-bd95-d694d216181d)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/db6f461f-fae8-49ae-9310-b9aadebfb3cf)

* As we are doing **multi-level** paging, we are dividing, **p** into **two** parts. **p1=1 and p2= 2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ce8e689-2920-4736-a59d-4097f1988cb6)

* In the **original inner page table**, we can keep **4 entries** in a **page of the page table**. In total we have **8** entries. When we go for the second time to the **inner page table** for **searching**. We need **2 bits** among the **4 entries** to pick one of them. That's why **p2 = 2** bits.
* The **outer page table** has **2 entries** only. That's why in the **outer page table** we are **searching** by **1 bit** only.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/226cf480-fd1c-47c0-a4fc-fb113a0e24e2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/46572598-e844-44e4-9db0-1dac5b5d191c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ead9e8f-98d6-4497-a3e3-02b574522d87)

* Because in the **inner page table** we can keep **4** entries and to pick **one entry** among the 4 entries, we need **2 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8ecea60e-d598-45e8-91f8-b520152433d5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e0daab39-3228-4e5b-8423-2a79a62101fc)

* Yes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/984e8798-7200-440f-b4ad-d4c35ca56d6e)

* **No. of entries per page**, how do we calculate it?

> **No. of entries per page** = (**Page Size**) / (**Page Table Entry Size**).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/065ed545-97ee-4ada-8134-65f0e9b69fbe)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cf747f99-cb71-443a-b597-8dd148214a00)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/153cfa75-c9c2-4f0a-becd-f99900cfeca5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c0140443-9a42-4d6b-8853-b497a9185f66)

* Depends on many things, including the logical address.

* It is mandatory that the **no. of levels is 2** only?

> **No**. Can be **3, 4 and 5 etc**.

* If the **outer page table** doesn't come in **one page** then?

> Levels will keep on **increasing**, until **one page tabale** is left at the **outer**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86bd6217-4051-4cf4-baec-027723d86797)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/71740ec9-401e-4f1b-a4bf-b4c2f7c7340d)

* No.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/36eef8d2-eed7-4f70-bad2-2cecb650dc75)

* At any level if page-table cannot fit into one page then, increase levels of paging, so that outermost page table can fit into one page.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/312b7a5b-1ba0-4f6c-b85d-2d2773edfc11)

> **4** entries at the **outer page table** because **each entry** is  pointing/linked to **one of the pages** within the **inner page table**. 

> As we have **4 bits**, so we will **search** using **4 -> 2 ^ 2 -> 2 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/979533df-33c4-43ba-9f9e-bb78ad72a573)

> In the **inner page table**, we have **8 entries**, so to **search** for **one entry** we need **8 -> 2 ^ 3 -> 3 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/c4de7026-1603-466b-8ebe-9cc5b5b3ea82)

> **One outer page table** is there but it should have **min. of two entries**. **Max. entries is whatever no. of entries** possible.

> **Min. of two entries** and why not **one entry** because **one entry** means that there is **only one page** as **one page** can hold the **whole page table**, so why we would need that **outer page table**.

> When we split the **original page table** then only we will get the **outer page table**.

> If we are not splitting the **original page table** then there is no need of the **outer page table**. There will be **no multi-level paging**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f4c45d3d-9e12-4940-b604-cc0a50c7875f)

* Yes, multi-level will **increase** the main memory access but it will not **increase** the **changes of thrashing**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b9989c19-8c99-4b25-96ba-3b60b88e0a23)

* We will search the **outer page table** using **P1** and we will search the **inner page table** with **P2**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/79415254-2724-42f7-8d78-c1b0599b2b69)

> We found **no. of entries per page**, which is **9 bits**. We had **29 bits** as **p**. So, we will start writing from the **right side**, so we put down **9 bits** of a level, we have **20 bits** left. We put another **9 bits**, we are left with **11 bits**. We put another **9 bits**, we are left with **2 bits**. So the **outer page table** is of **2 bits**.

> Don't keep more than **9 bits** in **one level**. At the **last level**, **less than 9 bits** can come.

* So the **level of paging** -> **4**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0849aa3-acf2-414e-acae-288b29ee3ddc)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/612d78c9-622c-4944-a488-cca0b5ec9ef1)

* One type of question that can come in **GATE**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/435a71f6-f5c2-43ef-b464-7476c66b383a)

* No linking.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2ef137f6-d94a-4530-8b04-6f8f9ad78fc7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bdf008e-a2da-467a-8c20-e7183e33a361)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a570af74-93e9-4fd7-8e09-aa85aee6dd73)

* Inner page tables will use the full bits but not necessary in the **outer page table**.
* **Outer page table** is the only one which will use less than **9 bits**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/17d95490-0854-4595-b25d-fd5d8e76bb27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4df586ed-21c7-438a-bdbd-957c90e288b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a41062c5-8dd2-42fc-8e04-72216fdd785b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7ad1ec89-d0c8-4dd1-b698-f6621e50505c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f7fb0774-3784-4896-9db4-b40c01e042a7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68b667b5-8e4f-4825-b4fc-ed61e2f358cf)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1de518ee-3dfc-4da3-9186-e61f1671228b)
 
* In every level, how many bits required for **searching** in page table.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a20a7e1b-0441-44b1-ae71-d0dd494b4319)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e8850a0b-e1a0-4685-8fe9-17a3f220c582)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a156776f-80f7-403d-b690-2f76132b7812)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/29b4a62e-3f1a-48c2-b84a-4e42a1476965)

* Option **C** correct.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2bc821b2-e8a0-41f0-b46f-fe800e263b3e)

* We cannot do **searching** in **physical address**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02f06042-20f7-4545-96ca-7d76567f56ce)

* It means that the **outer page table** has the **max bits** as the **inner page tables** have.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3a003149-76ec-440c-9c0a-d30527ab0efe)

* Context.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6738d98d-a44f-4eba-9efa-841c0031326e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/beb93427-3bdc-41ac-8a9c-7f5b2a0b6317)

* **3 pages** needed to store the **entire page table**.
* **1 page** for the **outermost page table** always.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6463ebe5-c78a-433e-b544-e6b432ba04f6)

* **The **5 bytes** in p2 process means that, whenever we will go to an **inner page table**, we will do **searching** using the **5 bits**.
* Everyone has **32 bit** entries but we don't care about it as we are **counting pages** and how many pages required for storing the **page table** entry.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0baf535a-e89b-4d53-8d18-eaa50a0d5636 )

* No. of pages required to store page table acros all levels = 5.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/88030f22-903a-4f64-9824-a1dcbf7b5280)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e9c249d7-26b2-46d2-9a5f-96f303e0fd85)

* To store the **whole process**, how much space needed in the main memory?

> **17 pages** and each page size is **1KB**. So, it total **17 * 1 -> 17kB** of space needed in main memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5bd8bc19-0080-4bc7-9e25-747fe4e36767)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ec6e223c-06a4-46e6-8a24-58e95f1d1fe4)

* Total no. of pages needed to store page table across all levels -> **17**
* Total space needed to store page table across all levels = **17 * 1 -> 17kB**

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2871332d-4fa5-43ca-8fd1-915510cb7b8b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/82751505-296b-41fc-90da-7d1079adab7f)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9cedb4f5-a90c-49b3-bc59-b89cb1f5cc02)

## 3-level paging

* No. of pages to store **inner most** level page table = (Take the pages of the middle table) * (No. of bits we did searching).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2dc93367-84e8-4f94-b531-741701c135a5)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8bc142dc-fc5a-403f-8cc2-eb49952e2427)

* We will get **32 pages** on the **inner most** level page table.
* Total pages = 35 pages.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1cae6acc-c342-48fc-b438-edd50e03650c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7e9feab8-3d88-4927-a8be-f3e4927fac26)

* Yes

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9249c8d7-e8f5-44d7-9142-459a7763fc32)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5c6d580d-0e29-4abd-92c6-65959eeba4ed)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e6f1dd95-af1d-44c1-829f-504c60cc8ef6)

* If we multiple the **total no. of pages** with **page size**, then we will get the **total space/storage** needed in **main memory** to store the **whole process**. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/02c6792b-a645-4ca4-9216-39377b874c8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/968e7efc-e30d-492d-aa11-d76d11050183)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4d278aa3-96db-4fc3-8b98-e7c1f23567df)

* The size of **virtual address** max. allowed can be **very big**.
* 64 Bits OS -> Max. virtual address possible for any process -> 64 bits.
* The **max process** size allowed is **2 ^ 64** Bytes.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8eff79e-aacf-4191-93e5-4d598ff07148)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/55845efb-fe25-42a4-84bd-9325794e16ba)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/68ab150a-e912-48ed-8ada-71cf2aa8ed54)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/85fb42a4-dc0f-4158-8a46-c64a6ab8f999)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/eb29d302-57a8-49d4-8826-35932d721d7a)

* Basic paging -> Logical address.
* Virtual memory -> That address is called as Virtual memory.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/35207ae3-96f4-4c14-ba69-1fda99338bc2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3b6fe162-972b-47ad-83dd-657e6c9c7b71)

* Later

> When we try to access the **page table** from main memory then the **no. of levels paging** we have that **no. of main memory** access needed just to access the **page table**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9d248cae-831e-424a-b70a-a992aaa4bb27)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d0961637-bfd3-4b71-9a99-bd13feb36529)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b2a7061b-a937-404a-a8f4-bf7f4fea7b15)

* **TLB** gives **direct** entry, **outer, inner** nothing. **TLB** gives **directly** the **frame no.** in which the **content** is kept. 

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f664df6f-5fa6-4f45-9426-8211e8c85f3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e5ff5635-32bc-4dd7-bc1a-97d194145110)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/8159a0db-c334-4eb5-ad0c-731079825f14)

* If **n-level paging**,
* Time required to translate virtual address into physical address through page table in main memory -> **n * tmm**.















 
 






# DPPs

## DPP 1 (Lecture -> 4)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/130e5b4d-1645-487a-a9cd-89e0cdf3692e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/6adcd27c-1715-4534-9fe4-7b435491eb07)

* **D** option.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f448e639-75e1-49af-b1ef-
e092988eed58)
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


## DPP-4

* Lecture -> 17

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/31c8cb9d-bc28-4644-8b24-b59712179589)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d2d325f8-546e-48b2-918c-20144517c560)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f72686e6-0c04-4bb3-824e-9b34aaa1f677)


# Quizzes

## Quiz-1

* Quiz 1 -> https://unacademy.com/quiz/quiz-i/KEUEBL97D4/attempts/SP_96IBDFZMKYZUNXERM
* Solved in (Lecture-11)

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e2ffbbec-68cd-46b8-becb-ca6d924bb220)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/0059846b-0755-4fc1-a94c-30e69b798d8a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/86414aa5-f517-4433-acb1-a870503fa49c)

## Quiz-2

* Link -> https://unacademy.com/quiz/quiz-ii/JJ6SJ7HLB3/solutions/SP_G8GL3S7HJESZHBT99

## Quiz-3

* Link -> https://unacademy.com/quiz/quiz-iii/AVRIC22O5M/solutions/SP_D84HGTK6E9KKPI0F1

# Numericals

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/d5852973-b8e8-460a-b061-a7ceb375fc8c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/16acc848-3582-4001-b38e-a9324784b1b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c0dca06-3bab-490a-a65e-f42aba3abf75)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/fcc25cb3-c54b-4396-bf97-ba0b0b20553c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c68466d-2571-4737-8515-a2742290ef2c)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/682a0d3b-f69c-405c-917f-74e52318e4aa)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/171fabdd-b7e6-4935-9d3d-68df08b8ef4b)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/76b6e0b3-6504-4e4e-8049-4e0f95aa53d8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/44f5eece-cb12-40ae-af5d-1c99a1540ef7)









