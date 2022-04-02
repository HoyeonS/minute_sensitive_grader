/** 
 * struct of profile of student inputted. 
 * This profile is only applicable and only used for file way.
 * 
**/

struct profile
{
    char* name; // name of the student
    struct score* s; // score for student
    int late; // late time of the student
    int rank; // ranking of the student
    
};

int profile_init(struct profile *p, char* name, int score, int late, int rank); 
char* profile_to_string(struct profile *p);