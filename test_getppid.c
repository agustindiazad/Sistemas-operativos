#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	int pid = fork();
	if (pid == 0) {
		int ppid = getppid();
		printf(1,"Parent procces ID: %d\n", ppid);
		exit();
	} else if (pid > 0) {
		wait();
		exit();
	} else {
		printf(1, "Fork failed\n");
		exit();
	}
}
