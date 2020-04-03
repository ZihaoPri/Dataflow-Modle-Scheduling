#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

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

        pid_t pid = getpid();
        printf("Get process pid, pid = %d\n", pid);

        syscall(335, pid, 0, 2020);
        syscall(336, pid);

        return 0;
}
