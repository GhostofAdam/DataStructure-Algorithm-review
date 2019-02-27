## Task1

第一次任务，在校生还有其他课业任务，再结合自己的情况，选择了部分任务完成。

数组只是做了些总结和回忆

手写了一遍双向链表熟练一下 MyList.h

结合复习刷了几道LeetCode(TwoSum.h,MajorityElementII.h,HappyNumber.h,FirstMissingPositive.h)

(之前只刷过学校的OJ，STL都不让用的...，leetcode突然好不习惯，STL很多知识也不熟练) 

#### 数组 

实现动态扩容 增删查改(还有各种任务就不直接写了...)

邓公的课影响比较深刻的是

* 扩容的复杂度分析 

  二倍扩容，在n次的插入下，渐进复杂度为O(1)

  常数空间扩容，n次插入下，渐进复杂度为O(n)

  我就结合指数爆炸这样理解

```c++
class MyArray{
public:
    int* a;//数组头
    int size;//已有数据
    int capcity;// 最大容量
    MyArray(){...}//初始化
    ~MyArray(){...}//析构
    void expend{...}//扩容，个人采用的策略为，size==capcity,扩充两倍
    void shrink{...}//收缩，个人采用的策略为，size<u*capcity(暂时取0.3)时，收缩为1/2
    void push_back(int x){
        ...
        size++;
        expend();
    }
    void delete(int x){
        ...
        size--;
        shrink();
    }
    int find{...};//不排序O(n),排序过O(logn)
    int operator[](int){...}//储存空间连续，可以直接O(1)按秩访问
}
```

#### 链表

邓公建议的头尾哨兵,的确有简化代码的功能,逻辑也更清晰了

找环的题,突然发现在我做之前就在各种博客,公众号的推送上看过了...似乎是用两个不同速度的指针

Merge k Sorted Lists 用堆的话,复杂度应该可以优化...自己写的MyList里的merge就是用的最小堆

push和pop都是O(logn)的话,总体应该是O(nlogn)

#### hash

原来STL里unsorted_map是hash实现...

不知道具体是什么hash函数和怎么解决冲突的,有时间去看看源码

* TwoSum

* HappyNum

