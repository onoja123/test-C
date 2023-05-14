# include <stdio.h>


int main(){
    int sec_num;
    int guess_num;

    sec_num = 5;

    int i;
    
    int guess_lim;

    guess_lim = 3;


    for(i = 0; i <=guess_lim; i++){
        printf("Guess Number: %d\n", i);

        print("&d", &guess_num);

        if(guess_num == sec_num){
                printf("You won");
                break;
        }
    }

    if(guess_num != sec_num){
            printf("You Lost");
    }

    return 0;
}
