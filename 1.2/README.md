# 1.2

书中1.1章节告诉我们用`CC`来编译，但是在mac系统中`CC`是`clang`的别名。

`clang`，C编译器。

`clang++`，C++编译器。

本例子需要用`clang++`才能编译。

## vim make

vim本身有一个make系统，可以通过`makeprg`来设置编译程序。

不过也可以直接make，如果需要额外参数，可以通过`CFLAGS`来设置。

例如：

```vim
:let CFLAGS = '-Wall'
:make %<.out
```

> 注意：make后需要有输出参数才行。
