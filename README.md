网卡Realtek RTL8821CE linux系统的驱动程序

我的内核版本好是 5.0.0-32-generic，（亲测5.0.0-23-generic ~ 5.0.0-32-generic都没问题)



需要关闭Secure Boot，根据不同的电脑，关闭Secure Boot的操作不同。



```
修改Makefile里面的
TopDIR ?= "文件夹当前绝对路径，根据你的情况而定, 这里采用命令读取当前路径，应该没问题(反正我这里没有)"

sudo make

sudo make install

sudo modprobe -a 8821ce

sudo reboot
重启就可以看到wifi了
```



