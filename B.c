#include <stdio.h>


int totalScore (int score[10]);

int main () {
       int score[10];
       int total;
       int i;

       for (i = 0; i < 10; i++ ){
        scanf("%d", &score[i]);

        }

       total = totalScore(score[i]);

       printf( "Total Score : %d\n", total );

       return 0;

}


int totalScore(score[10]) {

    int result;

    for (i = 0; i < 10; i++ ){

       result += score[i];

    }

    return result;
}
