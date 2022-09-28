/*
 ============================================================================
 Name        : lab2.c
 Author      : Katherine Rac
 Version     : 1
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
  int x;
  for (x=1; x<=20; x++){
    printf("%d \n",x);
    sleep(1);
    if(x == 20){
      printf("Aqui termino");
    }
  }
  return 0;
}
