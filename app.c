#include<stdio.h>
//class vote problem
int main() {
    char vote;
    char candidates;
    int voteA, voteB , voteC , voteD , voteE; 
    voteA=voteB=voteC=voteD=voteE=0;

    do {
        printf("Do you wish to vote (y/n) : ");
        scanf(" %c", &vote); 
        if (vote == 'y') {  
            printf("Vote among the 5 candidates (A B C D E) : ");
            scanf(" %c", &candidates);

            switch (candidates) {
                case 'A':
                    voteA++;
                    break;
                case 'B':
                    voteB++;
                    break;
                case 'C':
                    voteC++;
                    break;
                case 'D':
                    voteD++;
                    break;
                case 'E':
                    voteE++;
                    break;
                default:
                    printf("Invalid candidate choice.\n");
            }
        }
    } while (vote == 'y');  

    printf("VotesA=%d \tVotesB=%d \tVotesC=%d \tVotesD=%d \tVotesE=%d \t",
           voteA, voteB, voteC, voteD, voteE);

    if (voteA > voteB && voteA > voteC && voteA > voteD && voteA > voteE) {
        printf("Candidate A won with %d votes.\n", voteA);
    } else if (voteB > voteA && voteB > voteC && voteB > voteD && voteB > voteE) {
        printf("Candidate B won with %d votes.\n", voteB);
    } else if (voteC > voteA && voteC > voteB && voteC > voteD && voteC > voteE) {
        printf("Candidate C won with %d votes.\n", voteC);
    } else if (voteD > voteA && voteD > voteC && voteD > voteB && voteD > voteE) {
        printf("Candidate D won with %d votes.\n", voteD);
    } else if (voteE > voteA && voteE > voteC && voteE > voteD && voteE > voteB) {
        printf("Candidate E won with %d votes.\n", voteE);
    }

    return 0;
}
