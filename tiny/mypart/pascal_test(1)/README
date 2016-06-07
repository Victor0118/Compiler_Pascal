test_output的输出结构：
当前node编号 node类型      第几个生成 儿子list  参数

kind里是enum，枚举了node的类型;

每个node编号都是唯一的。

node的类型对应kind的enum，从0开始
第几个生成指Pascal文法中是第几个生成，并且0代表第一个生成语句

儿子的list具体要看是哪一种生成，生成的对应Pascal语法从左至右，并且其中填的是这个节点的编号。（其中我只生成非终结符、ID，FUN，sys_xxx以及REAL、STRING、INTEGER、CHAR等等，也就是儿子也一定属于其中）


这里参数主要是ID，FUN，sys以及REAL、STRING、INTEGER、CHAR等等非终结符节点的值，如果不是，就没有参数