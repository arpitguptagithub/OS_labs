# Nachos-project Labs 1 ,2 ,3 -Complete...  Sleep and fork  ...remaining . 
Not Another Completely Heuristic Operating System

This is our course-work for the OS course in HCMUS.

Nashos version: 4.0

## Installation

To install: run `bash full_install.sh`. In case of error, you might want to run the installation step by step via:
```bash
# Install building tools like make, g++
bash install_building_tools.sh

# Build the nachos
bash build_nachos.sh

# Build the coff2noff translator
bash coff2noff.sh

# Build & run tests in code/test folder
bash build_test.sh
```

You can read the full building instruction [here](https://www.fit.hcmus.edu.vn/~ntquan/os/setup_nachos.html) if you want to (believe me, you don't want to read it :) ).


## CI/CD

I've set up the GitHub workflow, it will automatically build & test the nachos when you make a commit.

Please make sure that you passed all the workflows before creating a pull request.


## Lab 1 : SetString UC 
This lab included working  on "PrintStringUc" to change the basic Print String to PrintStringUc  ![Lab1](https://github.com/arpitguptagithub/OS_labs/assets/98796025/8a40ea71-f0d1-410f-829d-808195a652ed)



## Lab 2 : MultiTasking 
Changes are there in the execution file to check the Implementation of the multiprocessing. I tried also from threads but couldnt complete due to interrupt ending the commands after one execution.
![Multiproce](https://github.com/arpitguptagithub/OS_labs/assets/98796025/efbd68a6-38bb-41e1-8b1a-d5cb8932c7c4)


## Lab 3 : Priority Scheduling 
Made a priority queque along with find next process to run 
Changes in code/threads/schedular.cc 

![PQ](https://github.com/arpitguptagithub/OS_labs/assets/98796025/ae772c62-fdb1-404a-bc58-78061876be43)



## Lab 4 : Sleep 
So here we need to work on the sleep, updated finish functions 
Changed Str_io test case 
Changed alarm(waitunit using pq ) , start , syscall , exception here  

![delay](https://github.com/arpitguptagithub/OS_labs/assets/98796025/b05e6371-95ac-4c84-955d-c251b9cc2b8a)
![Sleep](https://github.com/arpitguptagithub/OS_labs/assets/98796025/3e030b4a-cebd-4282-bcc2-d40119ba0e16)


## Lab 5: Fork 
Worked on changing the ptable ... problem in identifying and adress copying


