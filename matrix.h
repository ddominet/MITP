#ifndef _MATRIX_H_
#define _MATRIX_H_

struct MATRIX_S 
{
	int x;
	int y;      /* Zadana struktura  */
	int *wsk;
};

typedef struct MATRIX_S MATRIX;

MATRIX m_create(int, int );
int m_remove(MATRIX* );
int m_scanf(MATRIX* );
int m_put(MATRIX* , int, int, int );
int m_get(MATRIX* ,int , int);
int m_printf(MATRIX* );

#endif
