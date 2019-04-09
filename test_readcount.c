#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

int main (int argc, char *argv[]) {
	print(1,"sys_read system call is called %d times. \n",get readcount());
	exit();
}

