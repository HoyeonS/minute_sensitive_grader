#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profile.h"
#include "score.h"

/* main.c */
int main(int argc, char *argv[]) {
    
    if(argc != 4)
        return 1;
    int score = atoi(argv[1]);
    int late_time = atoi(argv[2]);
    int portion = atoi(argv[3]);
    
    struct score *s = malloc(sizeof(struct score));
    
    score_init(s, score);
    
    regrade(s, late_time, portion);
    
    printf("Graded: %d", s->regraded_score);
    
    return 0;

}