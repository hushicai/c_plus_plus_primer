# 1.2

书中1.1章节告诉我们用`CC`来编译，但是在mac系统中`CC`是`clang`的别名。

`clang`，C编译器。

`clang++`，C++编译器。

本例子需要用`clang++`才能编译。

## vim make

vim本身有一个make系统，`makeprg`都不需要设置，一般只需要设置`CFLAGS`，然后直接make即可。

例如：

```vim
:let CFLAGS = '-Wall'
:make
```
