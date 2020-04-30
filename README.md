# AWTK 针对 NXP lpc1768 的移植。

* [AWTK](https://github.com/zlgopen/awtk) 全称 Toolkit AnyWhere，是 [ZLG](http://www.zlg.cn/) 开发的开源 GUI 引擎，旨在为嵌入式系统、WEB、各种小程序、手机和 PC 打造的通用 GUI 引擎，为用户提供一个功能强大、高效可靠、简单易用、可轻松做出炫酷效果的 GUI 引擎。

[awtk-lpc1768-raw](https://github.com/zlgopen/awtk-lpc1768-raw) 是 AWTK 在 NXP lpc1768 上的移植。

本项目以 [旺宝开发板宝马 NXP LPC1768+3.2 寸液晶屏 学习板单片机 ](https://item.taobao.com/item.htm?spm=a1z10.5-c-s.w4002-2057489827.21.383e6070DO0RFI&id=41360412223) 为载体移植，其它开发板可能要做些修改，有问题请请创建 issue。

## 编译

1. 获取源码

```
git clone https://github.com/zlgopen/awtk-lpc1768-raw.git
cd awtk-lpc1768-raw
git clone https://github.com/zlgopen/awtk.git
```

2. 用 keil 打开 Project.uvprojx

## 文档

* [AWTK 在 NXP LPC1768 上的移植笔记](https://github.com/zlgopen/awtk-lpc1768-raw/blob/master/docs/lpc1768_port.md)