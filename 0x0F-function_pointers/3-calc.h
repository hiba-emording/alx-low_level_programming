#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Structure Operator/
 *
 * @op: The operator.
 * @f: The function associated.
 */

typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Selects the correct function to perform the operation */
int (*get_op_func(char *s))(int, int);

#endif /* Function Prototypes and Data Structures */