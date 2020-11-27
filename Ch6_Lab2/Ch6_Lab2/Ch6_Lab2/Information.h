#include <stdio.h>
#include <stdlib.h>
typedef struct _dates {

	int year,month,day;
}dates;

typedef struct _order {

	char num[11];
	dates date;
	int amount;
}order;
