#include <stdio.h>
#include <stdlib.h>

#include "random.h"

char randchar();


char randchar() {
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W', 'X', 'Y', 'Z'};
        int randNum;

        //Pick a # between 0 - 25
        randNum = (rand() % (26 + 1 - 0)) + 0;

        return alphabet[randNum];

}