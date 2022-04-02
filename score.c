/**
 * score.c files for the score implementation of score.h
**/
#include "score.h"
#include <stdio.h>
#define DAY_TO_MIN 1440.00

/**
 * score initalization with inputted score and late time with initalizing regraded_score to 0.
**/
int score_init(struct score *s, 
                int score)
{
    if(score < 0)
        return 1;
    
    s->score = score;
    s->regraded_score = 0;
    
    return 0;
    
}

/** 
 * regrade the score based on the late_time
**/
int regrade(struct score *s, 
            int late_time, 
            int late_portion)
{
    if(late_time < 0 || late_portion < 0)
        return 1;
    float plate = (float)late_time / DAY_TO_MIN;
    s->regraded_score = s->score - (int)(plate * late_portion);
    return 0;
    
}