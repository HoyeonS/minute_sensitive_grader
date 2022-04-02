/** 
 * this file is for grade score
 * 
**/

struct score {
    int score;
    int regraded_score;
};

int score_init(struct score *s, int score);
int regrade(struct score *s, int late_time, int late_portion);