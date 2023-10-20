#include "lists.h"
#include <stdio.h>
void __attribute__((constructor))first(void);
/**
 * first - prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
