#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void init(){
printf("MyAgentD Loaded.\nCreating daemon...\n");
daemon(0,0);
}
