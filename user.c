int
getppid(void)
{return syscall(SYS_getppid);}

int getancestor(int n)
{return syscall(SYS_getancestor, n);}
