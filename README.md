# Dataflow-Modle-Scheduling

A real-time scheduling based on data flow ⏳

## Context

The current Linux kernel implements two real-time scheduling methods: SCHED_FIFO and SCHED_RR.This project will implement a real-time scheduling approach based on data flow in addition to this. 

Based on the data flow scheduling, the next process to be executed will be selected according to the running conditions of processes in the running-queue. If there is A dependency between processes A and B and A needs to run after B, then the data flow scheduling will not schedule A before the completion of B .This approach can save significant resources on locking and synchronization .

## Version 
This repository is based on [Ubuntu16.04](http://releases.ubuntu.com/16.04/) and the [Linux kernel 4.15.18](https://www.kernel.org/)

## Install
Use the links provided above to install the corresponding Ubuntu or CentOS system locally (you can use `uname -r` to check the kernel version, please make sure the kernel version is correct), go to the directory where to put the source code.
```
cd /usr/src/linux
```
Use the git tool or HTTP tool to download the repository to the directory. After decompression, you can see the `linux-source-4.15.18` folder and enter the folder. Use the following three instructions to compile the kernel source code and install the modules 

```
sudo make 
sudo make modules_install
sudo make install
```
Then restart your kernel and this code will take effect. Use `uname -r` to check your current kernel version and it should be `4.15.18+ `

## Usage

The kernel provides users with the ability to set the data-flow model by exposing systemcalls.After the data model is established and the scheduling is SCHED_DF, the operating system will schedule according to the input and output data of the data stream. Here is a simple example.
