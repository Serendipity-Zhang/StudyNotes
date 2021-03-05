// 逻辑结构
// 有哪些关系？

// 没关系  一对一  一对多  多对多

// 集合   线性表   树    图


// 存储结构  对于数据元素之间的逻辑关系的存储设计与方式

// 有那些结构
// 顺序结构 和 链式结构
// 顺序结构:按照一定的顺序排列在一起，而不是分散在内存中的  存储空间是连续的

// int Array[7]

// 链式存储结构
// 不止存储数据还存储了指向下一个的元素的地址
// 每一个存储单元内部都有一个地址（指针变量）


//构造结构体的方法构造链式节点
//设计节点
// typedef struct LNode;
// {
//   int data;  
//   struct LNode *Next; //指向下一个节点的指针域  存储了节点之间的关系
// }LNode;
// LNode *L;
// L= (LNode*)malloc(sizeof(LNode));   //分配空间
// A ->next = B; B->next =C;

//sizeof 会计算出所涉及的结构体类型所占的存储空间的大小
// LNode* 强制类型转换
//用malloc制造出来的节点是没有名字的，只是给了一个节点的地址


//把b节点的地址存储在了next分量里
//把c节点的地址存储在了b节点的next的分量里
//分量：对结构体的单个变量称之为这个结构体的分量

//如果通过指向某个结构体的一个指针取这个结构体中的分量不能用 . 只能用箭头

//那个支持随机存取？ 顺序存储  
