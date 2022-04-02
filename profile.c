/**
 * profile.c files needed on only file way. 
**/



/**
 * method that initalization profile
**/
#include <stdio.h>
#include <stdlib.h>
#include "profile.h"
#include "score.h"
int profile_init(struct profile *p,
                char* name,
                int score,
                int late,
                int rank)
{
    if(name == NULL)
        return 1;
    p->name = name;
    struct score *s = malloc(sizeof(struct score));
    score_init(s, score);
    p->s = s;
    p->late = late;
    p->rank = 0;
    return 0;
    
    
}
char* profile_to_string(struct profile *p)
{
    //TO DO: profile to string
    return 0;
}