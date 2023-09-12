#include "main.h"
#include<unistd.h>


void putcharr(char c){
	return(write(1,&c,1));
}
/**
 * main- print -putchar
 * Return: 0 (Success)
 */
int main(void)
{

	putcharr('-');
	putcharr('p');
	putcharr('u');
	putcharr('t');
	putcharr('c');
	putcharr('h');
	putcharr('a');
	putcharr('r');
	putcharr('\n');

	return (0);
}
