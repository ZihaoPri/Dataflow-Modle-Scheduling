#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

#define SCHED_DF 7

int main() {

        int rc, policy;
        struct sched_param my_params;

        my_params.sched_priority = sched_get_priority_max(SCHED_DF);

        printf("SCHED_DF = %d, Policy = %d\n", SCHED_DF, my_params.sched_priority);
        rc = sched_setscheduler(0, SCHED_DF, &my_params);
        if(rc < 0) {
                perror("Sched_setscheduler to SCHED_DF error");
                exit(0);
        }
        printf("Switch to SCHED_DF\n");

	pid_t fpid = fork();
 
	if (fpid < 0)   
        	printf("error in fork!");   
    	else if (fpid == 0) {
  
        	printf("I am the child process, my process id is %d\n",getpid());   
    		pid_t pid = getpid();
		
		sleep(5);	
        	syscall(335, pid, 5, 2020);
		printf("Child setup output!\n");
		printf("Child exit!\n");
	}  
    	else {  
		printf("I am the parent process, my process id is %d\n",getpid());     
    		pid_t pid = getpid();
                syscall(333, pid, fpid, 5);

		sleep(1);
		printf("Parent get input, exit!\n");
	}  

	
	
        return 0;
}

