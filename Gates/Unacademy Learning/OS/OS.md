# OS

* Course Link -> https://unacademy.com/course/comprehensive-course-on-operating-system-for-gate-2425/A9IBFZWP

# Syllabus

![image](https://user-images.githubusercontent.com/54589605/236868120-bf5277d2-780d-4475-817e-22f568012381.png)
![image](https://user-images.githubusercontent.com/54589605/236868374-486883d7-fc31-4289-b294-906784259ad8.png)

# Revision

* 1 -> Done till Lecture-3. Start from Lecture 4.

# Next Video

* Link -> https://unacademy.com/class/cpu-scheduling-algo-round-robin/UHQQ1T0Y (7)


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

## SJK or Shortest Job First

* Criteria -> We will take the **smaller** burst time(BT) process first. If **two** processes have the **same** burst time then, we have to use **tie breaker**. The **tie breaker** will be **FCFS** which means we have to find see which **process** has the **smaller** arrival time and if arrival time is also same then we have to see **PID** of the processes.

* Mode -> Non-preemptive algo.

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

> It is the **preemptive** version of **SJF**.

* Mode -> Preemtive

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
















