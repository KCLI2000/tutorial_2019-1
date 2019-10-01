# 任务具体要求说明

## 具体说明
我们为参加考核的同学提供了一个可视化的小车模型，以及基本的控制代码框架，给出了大部分接口。现在需要你根据这些东西，实现以下几点要求：
- 在无噪声的情况下实现控制小车转弯（你可以直接在代码中写死控制）
- 自己创建一个新的包使用Publisher发布控制指令来控制小车实现转弯动作
- 使用多线程，以20Hz的频率发布控制指令
- 在不同噪声级别下实现小车走S形轨迹
- 小车的速度应限制在0到0.008以内
## 需要掌握的技能
- 了解PID控制算法
- 了解RVIZ的使用
- 熟悉C++类
- 掌握多线程编程
## 关于代码
为了平滑学习曲线，我们并不要求参加考核的同学自己构建一个完整的模型，因此我们提供了基础的小车模型以及控制接口。关于控制接口，我们提供以下几种：(具体接口信息请到./ros_project/src/little_car/src/下查看源代码)
- 控制小车x,y,z三个方向的速度
- 控制小车的转向
- 获取小车的位置信息
- 获取小车的速度信息
- 设置噪声等级

## 其他说明
由于大部分同学使用的是虚拟机，考虑到虚拟机可能带不动gazebo等仿真软件，我们没有将模型放到gazebo中，仅仅是用RVIZ显示出来，因此我们的模型并不具备物理属性，因此在控制上可能会有一些做得不完善的地方，还请见谅！  
另外，提供的代码已给出了尽量详细的注释，更多的东西还是需要同学们自己去看