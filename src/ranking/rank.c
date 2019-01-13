/**
 * MIT License
 * Copyright (c) 2018 Alex Markules, Jacob Kampf, Grant Farnsworth
 **/
#include "rank.h"
int rankSchedule(node* nd)
{
    int rankVal = 0;
    for(int i = 0; i < FUNKCOUNT; i++)
    {
        rankVal += functions[i](nd);
    }
    return rankVal;
}

void initRank()
{
    initRankFunctions();
}

int rankSchedules(node * nd){
	int total = 0;
	while(nd){
		total += rankSchedule(((cohortSchedule *)nd->data)->classes);
		nd = nd->next;
	}
	return total;
}
