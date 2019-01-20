#ifndef READCOHORTS_H
#define READCOHORTS_H
#include "linkedList.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct _cohortReq{
	char * name;
	char * classReq;
	int nbrOfSeats;
	char * sectionCode;
} cohortReq;

typedef struct _cohort{
	char * name;
	node * cohortReqs;
	int reqCt;
} cohort;

node * readCohorts(char * fname);

cohortReq * parseLine(char * line);

cohortReq * addField(int index, char * value, cohortReq * obj);

node * sortCohorts(node * cohortReqs);

cohort * gatherReqs(char * name, node * cohortReqs);

int arrContains(char ** arr, char * name);

#endif
