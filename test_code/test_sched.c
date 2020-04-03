#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define SCHED_DF 7

int main() {
	int rc,old_scheduler_policy;
	struct sched_param my_params;

	old_scheduler_policy=sched_getscheduler(0);

	my_params.sched_priority=sched_get_priority_max(SCHED_RR);// 尽可能高的实时优先级
	printf("SCHED_OTHER = %d SCHED_FIFO =%d SCHED_RR=%d SCHED_DF=%d \n",SCHED_OTHER,SCHED_FIFO,SCHED_RR,SCHED_DF);
	
	printf("the current scheduler = %d \n",old_scheduler_policy);
	printf("press any key to change the current scheduler and priority to SCHED_RR\n");
	getchar();
	rc=sched_setscheduler(0,SCHED_RR,&my_params);
	if(rc<0) {
   		perror("sched_setscheduler to SCHED_RR error");
   		exit(0);
	}

	old_scheduler_policy=sched_getscheduler(0);
	printf("the current scheduler = %d \n",old_scheduler_policy);
	printf("press any key to change the current scheduler and priority to SCHED_FIFO\n");
	getchar();

	rc=sched_setscheduler(0,SCHED_FIFO,&my_params);
	if(rc<0){
   		perror("sched_setscheduler to SCHED_FIFO error");
   		exit(0);
	}
	old_scheduler_policy=sched_getscheduler(0);

	printf("the current scheduler = %d \n",old_scheduler_policy);
	
	printf("press any key to change the current scheduler and priority to SCHED_DF\n");
        getchar();

        rc=sched_setscheduler(0,SCHED_DF,&my_params);
        if(rc<0){
                perror("sched_setscheduler to SCHED_DF error");
                exit(0);
        }
        old_scheduler_policy=sched_getscheduler(0);

        printf("the current scheduler = %d \n",old_scheduler_policy);

	printf("press any key to exit\n");
	getchar();

	return 0;
}
