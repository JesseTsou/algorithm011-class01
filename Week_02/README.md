## 哈希hash
* 根据关键码值，直接进行访问的数据结构
* 通过把关键码值映射到表中一个位置来访问记录，以加快查找速度
* 映射函数为散列函数
* 存放记录的数组为哈希表
* 哈希碰撞：对于不同的存储数据，经过哈希函数之后得到相同的值。解决：可在相同值位置用链表将存储数据串起来
#### 时间与空间复杂度

| 访问 | 查询 | 插入 | 删除 |
| --- | --- | --- | --- |
|  | O(1) | O(1) | O(1) |
#### map
* key-value对，key不重复
* 使用 [C ++ map用法总结](https://blog.csdn.net/u010029439/article/details/89681773)
#### set
* 不重复元素集合
* 使用 [c++ 中set用法详解](https://www.cnblogs.com/caiyishuai/p/8646345.html)
## 树
![7994f076b0de57141efdd464f221e206.png](evernotecid://9CBF472A-15C8-4A3B-9481-9755CB04CDFC/appyinxiangcom/2136796/ENResource/p569)
#### 树的遍历
* 前序：根-左-右
```
def preorder(self, root):
    if root:
        self.traverse_path.append(root.val)
        self.preorder(root.left)
        self.preorder(root.right)   
```
* 中序：左-根-右
```
def inorder(self, root):
    if root:
        self.inorder(root.left)
        self.traverse_path.append(root.val)
        self.inorder(root.right)   
```
* 后序：左-右-根
```
def preorder(self, root):
    if root:
        self.preorder(root.left)
        self.preorder(root.right)  
        self.traverse_path.append(root.val) 
```
#### 二叉搜索树
* 左子树上所有结点的值均小于它的根结点的值
* 右子树上所有结点的值均大于它的根结点的值
* 以此类推，左、右子树也分别为二叉搜索树
* 其中序遍历是升序遍历
##### 常见的操作
* 查询O(logn)
* 插入新结点O(logn)
* 删除:在叶子结点或根结点或子根结点
##### 时间复杂度

| 访问 | 查询 | 插入 | 删除 |
| --- | --- | --- | --- |
| O(logn) | O(logn) | O(logn) | O(logn) |
## 堆
* 可以迅速找到一堆数中的最大或最小值的数据结构
* 可分为：大顶堆（大根堆）或小顶堆（小根堆）
* 常见的堆：二叉堆、斐波那契堆
#### 时间复杂度

![dc1374d0d9292c393df2a67cb0162cbf.png](evernotecid://9CBF472A-15C8-4A3B-9481-9755CB04CDFC/appyinxiangcom/2136796/ENResource/p571)

#### 二叉堆
* 通过完全二叉树来实现
* 是一棵完全树
* 树中任意节点的值总是>=其子节点的值
* 是堆的一种常见且简单的实现，但并不是最优的实现（优先队列）
* 一般通过数组来实现
    假设第一个元素是数组中索引为0
    则父节点与子节点关系如下：
    索引为i的左孩子索引为2*i + 1
    索引为i的右孩子索引为2*i + 2
    索引为i的父结点索引为floor((i-1)/2)
* 插入操作（以大顶堆为例）
    新元素一律先插入到堆的尾部
    依次向上调整整个堆的结构（与其父结点比较，若大于父结点，则交换，若小于，则停止，一直到根）（heapifyup）
* 删除max操作（以大顶堆为例）
    将堆尾元素替换到顶部
    依次从根部向下调整整个堆的结构（与子结点较大的结点交换，一直到堆尾）（heapifydown）
## 图
![503aeba209805664d0966beeed4f1659.png](evernotecid://9CBF472A-15C8-4A3B-9481-9755CB04CDFC/appyinxiangcom/2136796/ENResource/p572)
#### 图的属性与分类
* 属性
    ![e2e95a95ce1101f70647ffbc47cd6a4f.png](evernotecid://9CBF472A-15C8-4A3B-9481-9755CB04CDFC/appyinxiangcom/2136796/ENResource/p573)
* 分类：
    无向无权图
    有向无权图
    无向有权图
* 基于图的算法
    常见：DFS、BFS
    高级：
        [连通图个数](https://leetcode-cn.com/problems/number-of-islands/)
        [拓扑排序](https://zhuanlan.zhihu.com/p/34871092)
        [最短路径](https://www.bilibili.com/video/av25829980?from=search&seid=13391343514095937158)
        [最小生成树](https://www.bilibili.com/video/av84820276?from=search&seid=17476598104352152051)