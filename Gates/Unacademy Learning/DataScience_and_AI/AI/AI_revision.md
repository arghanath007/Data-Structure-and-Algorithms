# AI revision

* Link -> https://unacademy.com/class/complete-ai/WFGQI1CU

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cdcc3496-20f9-4e9d-b2cf-67ab267b86c1)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/24767b60-0e74-40f8-a54e-07c40f6f5553)

* Uninformed -> Blind Search -> No any type of information is available.
* Informed -> Based on Heuristic value -> Some information is available. Knowledge is given.
* Knowledge or information is called as **heuristic** value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/2941b6b9-e4ab-4111-86f4-e7fc3da83d62)

* Uninformed Algos.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4311c2e3-2f7a-41d6-ad67-6c0c5cd4cb67)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/ceddd807-610a-4373-8af2-9bbd37df8b36)

* **BFS** works on **queue**.
* **DFS, IDS, DLS** work on **stack**.
* Fringe or open queue/list -> Check below.
* Closed or Explored list -> We keep the nodes that are **explored** already.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1cda2acf-67c7-492d-9cd1-c1321b800a83)

* **BFS** -> Level order searching.
* We have to scan/search from **left to right**.
* Goal node -> g.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b15223fc-8762-42e9-ba88-37de8539ccfa)

* We got our **goal node** which is **g**.
* We don't have to check the **further nodes**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/7fad2a1f-32ca-4393-b095-3f46f6f95899)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/923ee705-6b13-462c-a99f-1cebbab9e565)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/9a536cd5-9fcd-485c-ac18-6aab1b318a16)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/4612805f-75e7-464e-94b1-37ff607a85c9)

* BFS:-

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3add682b-f9ec-4e2d-9b41-586fa1cd4554)

* Complete -> Yes [If Branching factor is finite]
* Optimal -> Yes [Step cost should be **1**]
* Complexity:-

1) Time -> O(b ^ d)
2) Space -> O(b ^ d)

* Branching factor -> One node can have how many child/children.
* **d** is the depth of **goal node**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58648b51-3fc7-4702-8ef9-d8270dfc2ca9)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3517acbf-5920-4926-bb76-6e548bedb3db)

* Both **ABD and ACD** are optimal paths.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e704658b-a5c7-40fa-adf9-775adb6e4f59)

* By default we start from the **left side** that's why **ABD** is the optimal path and not **ACD**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f1f9022f-d6eb-4a2b-9e05-85df43085dec)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/e68df016-932b-4394-ae21-9083ad78de27)

* By default in **BFS**, we are taking all of the **cost** as **equal** so we get **perfect** answer.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/58f61ac9-6213-497a-b197-565686f349b5)

* DFS
* Here also we are going from **left to right**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/249d029d-0773-4427-9a87-84d3a541f8bb)

* Path -> acg.
* After finding the goal node, we will stop.
* If **infinite depth** then it is **not complete**.
* If depth is **finite** then it is **complete**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/edc0d2b3-f400-4e7a-af37-135bae418a3e)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87fb1dcb-1b4c-4081-96d4-57ac52e2a97b)

* Complete -> Not Complete.
* Optimal -> Not optimal.
* Time -> O(b ^ m).
* Space -> O(b ^ m).

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/5f128fff-45c7-452f-929c-86d436d4d411)

* Minimum Cost.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/25f0c103-cb98-4008-bc0e-4fc28d6ecc3a)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/81eaab1a-01b9-4a13-8358-35569bdac159)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/b8e4f287-9c34-40db-9ada-c7cd76a2b9fb)

* Order of exploration of node.
* Complete -> Complete.
* Optimal -> optimal.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a79e512e-416c-43c8-a627-8fdb44c364c8)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f240e79f-f6d7-4f3a-a321-08e03e64f097)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/3c5efc17-5dfd-4ae2-b3fa-c31cbf093d20)

* We can either use **BFS** or **DFS**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/1c8dfb1a-aa1e-468f-b382-9c26970bbdc7)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a20ecc64-0473-465e-8286-22dfa1314ace)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/30b7d0b3-830d-4f04-ac05-07a18c00c6c7)

* We are putting a **limit** on the **depth**.
* By default **limits** starts from **zero(0)**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/87081c65-eb86-4348-b530-8b3d3f035f98)

* Complete -> Not complete.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/45525b1e-2081-4539-94e1-2ce567605226)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/034b0123-7a19-4481-9a57-4a726b53f560)

* We are finding the **f** value.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/f40d1a8a-03db-46cd-a230-ea54f84944b2)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/aac514b6-f4f8-4a85-a18a-8d18b9447673)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/a66f1f3f-4de0-4f0f-90f3-b8715765e695)
![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/976e4f9f-cf3a-46c4-9cac-8570912d0220)

* In **undirected graph** it can go to **infinite loop**.

![image](https://github.com/arghanath007/Data-Structure-and-Algorithms/assets/54589605/cab1e5a7-7fa4-4f7b-bf39-5bf61395e86e)















