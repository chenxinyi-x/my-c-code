# My C Code

这是我的第一个 C 语言代码仓库，用于记录我大一的 C 语言学习历程。

## 📂 文件说明
- `hello.c`：我的第一个 C 语言程序（Hello World）。
- `score.c`：成绩评级器，根据输入的分数判断优秀、良好、及格或挂科。
- `calculator.c`: **【新增】** 命令行计算器。使用结构体封装数据，通过指针传递，支持加减乘除、循环输入及除零保护。

## 🛠️ 如何运行
在 Linux 终端中，使用 GCC 编译并运行：

```bash
# 编译代码
gcc score.c -o score

# 运行程序
./score

### 2. 运行命令行计算器

```bash
# 编译代码
gcc calculator.c -o calc

# 运行程序
./calc
# 提示输入表达式时，输入类似: 3 + 5
# 输入 q 退出程序