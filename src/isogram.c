#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>


bool is_isogram(const char phrase[]){

    int characters[256] = {0};

    for(int i=0; phrase[i] != '\0'; i++){
        if(characters[phrase[i]])
            return false;   // Character already seen
        characters[phrase[i]] = 1;
    }

    return true;
}