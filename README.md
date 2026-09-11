# cpp_learning

🧑🏻‍💻**Author**： Zenos

📝**Overview** ：记录cpp的学习过程。

## 运行环境

- windows wsl Ubuntu24.04
- WSL Cmake 3.28.3
- WSL GDB 15.1
- Clang 18.1.3

## 在Clion中运行

- 运行版本

  2025.3

- 配置

  File -> Settings -> Build, Execution, Deployment -> Toolchains

  ![image-20260911230403231](https://cdn.jsdelivr.net/gh/zhu-2002/img/img2026/20260911230403308.png)

- 配置wsl终端（可选）

  File -> Settings -> Tools -> Terminal

  ```shell
  # wsl.exe -d 环境名
  wsl.exe -d Ubuntu2404
  ```

  ![image-20260911230657372](https://cdn.jsdelivr.net/gh/zhu-2002/img/img2026/20260911230657387.png)

## 在wsl中运行

进入对应目录的文件夹后，进行如下命令：

```shell
# 编译
clang++ main.cpp -o main
# 运行
./main
```

------

## 🚀学习资料链接

- [C++现代实用教程](https://www.bilibili.com/video/BV1S54y1Z7Wc?p=5&vd_source=704a1d3f7f94ddfff25949e336568a89)

