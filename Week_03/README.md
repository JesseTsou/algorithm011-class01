##递归
* 本质是循环
* 利用函数体进行循环
* 代码模板
```
def recursion(level, param1, param2,...):
    # recursion terminator
    if level > MAX_LEVEL:
    process_result
    return
    
    #process logic in current level
    process(level, data...)
    
    #drill down
    self.recursion(level+1, p1,...)
    
    #reverse the current level status  if needed
    
```
#### 思维要点
* 不要人肉递归
* 找到最近最简方法，将其拆解成可重复的子问题
* 数学归纳法的思维

## 分治
* 找重复性，分解问题，组合每个子问题的结果
* 代码模板
```
def divide_conquer(problem, param1, param2,...):
    # recursion terminator
    if problem is None:
    process_result
    return
    
    #prepare data
    data=prepare_data(problem)
   subproblems=split_problem(problem, data)
    
    #conquer subproblems
  subresult1=self.divide_conquer(subproblem[0], p1, ...)
 subresult2=self.divide_conquer(subproblem[1], p1, ...)
 subresult3=self.divide_conquer(subproblem[2], p1, ...)
    
    #result = process_result(subresult1, subresult2, subresult3, ...)
    
    #reverse the current level status 
    
```
## 回溯
* 不断在每一层去试

