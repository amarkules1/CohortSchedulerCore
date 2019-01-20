#ifndef FINDCOMBINATIONS_H
#define FINDCOMBINATIONS_H
#include "sortClasses.h"
#include <ctype.h>
#include "ranking/rank.h"
#include "ranking/rankFunctions.h"

typedef struct _cohortSchedule{
	cohort * co;
	node * classes;
} cohortSchedule;

typedef struct _completeSchedule{
	char * schedule;
	int score;
} completeSchedule;

node * BEST_SCHEDULES = NULL;

int SCHEDULE_CT = 0;

int MAX_SCORE = 0;

void findAll(node * classList, node * cohortList, char * out);

int findCombosForHeadCohort(node * classList, node * cohortList, FILE * outFile, node * assigned);

int pickClass(node * classList, node * cohortList, FILE * outFile, node * assigned, node * needed);

node * getClassesFromReqs(node * reqs, node * classList);

int fitsInClass(cohortReq * coh, course * sect);

int fitsInSchedule(node * classes, course * sect, cohortReq * coh, node * cohReqs);

int writeSchedule(node * cohortList, FILE * outFile);

int tryCombination(node * classList, node * cohortList, FILE * outFile, node * assigned);

int arePair(char * name1, cohortReq * coh, node * cohortReqs);

int addSchedule(char * string, int score);

node * getOnlyValidReqs(node * offerings, node * requirements);

#endif
