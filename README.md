# 虚拟化编译构建

## 1、准备ubuntu环境

6.8.0版本或以上, 当前仅支持x86_64

## 2、拉取代码仓

在一个你觉得合适的位置，clone代码仓

```
git clone --recurse-submodules git@github.com:ChatGr0up/CHATProcessor.git
```

## 3、准备基本的cpp依赖和构建工具

```
sudo apt install -y build-essential cmake
```

## 4、编译

```
./build.sh
```

# 容器化Docker编译构建

## 1、如何构建chat的cpp微服务

你需要配置docker环境, 请参考 https://docs.docker.com/engine/install/ubuntu/

```
./build.sh --docker
```

# 运行

| 参数         | 功能说明       | 描述                                                                 |
|--------------|----------------|----------------------------------------------------------------------|
| `-daemon`    | 后台启动       | 程序以守护进程方式运行，返回 shell prompt，但程序继续在后台执行。   |
| `-stop`      | 停止运行中的进程 | 根据 PID 文件或其他机制找到进程并发送终止信号，优雅关闭程序。      |
| `-status`    | 查看进程状态   | 检查程序是否正在运行，并显示相关信息，如 PID 或运行状态。          |
| *（默认）    | 前台启动       | 程序在当前终端前台运行，可以看到日志输出，按 Ctrl+C 停止。         |

示例：

./run.sh -daemon