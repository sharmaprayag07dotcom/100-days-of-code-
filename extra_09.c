#include<stdio.h>
int main(){int x=10,*p=&x;printf("Value: %d, Address: %p, Via pointer: %d\
",x,(void*)p,*p);*p=20;printf("After pointer update: %d\
",x);return 0;}
