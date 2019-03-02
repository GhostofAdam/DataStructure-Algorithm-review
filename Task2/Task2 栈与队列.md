## Task2 栈与队列

#### 栈

先进先出的栈 无论是顺序栈还是链式栈 push() pop()都是O(1)

* 浏览器的前进后退

   个人觉得可以用两个栈实现

  一个前进栈 一个后退栈

  每一次操作前进（后退） 把当前url压入后退（前进）栈，从前进（后退）栈中弹出网页显示

  当然要检测栈是否为空

#### 队列

传统顺序队列 push() O(1)  pop()  O(n)

链式队列 push() pop() 都是O(1)

循环队列 push() pop() 都是O(1)

##### 部分实现于my_stack_queue.h

#### 递归

递归不难 难在是消除递归

递归太深 有爆栈的危险

* 斐波那契数 和 阶乘 

  完全不需要栈的操作

  这样想 如果一个大数据规模的结果，必须由小规模数据的结果得到后才能计算，那么大规模数据的计算必须在栈中等待小规模数据计算结果的返回，这种等待一直传播下去，就形成了很深的递归

  但是这两题，可以反方向的，把小规模数据算出来记录好，再去算大规模的数据

* 全排列 Permutations.h

  递归方法很容易想 我只是自己用栈实现了一下



LeetCode练习 Valid_Parentheses.h Longest_Valid_Parentheses.h Evaluate_Reverse_Polish_Notation.h Design_Circular_Deque.h Sliding_Window_Maximum.h Climbing_Stairs.h