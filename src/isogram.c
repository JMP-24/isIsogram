#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>


int main(int argc,char**argv){
    if(argc>2||argc<2){
        printf("wrong amount of arguments");
        return -1;
    }
    /*if(false==is_letter(argv[1])){
        printf("error");
        return -1;
    }*/
    if(is_isogram(argv[1])){
        printf("is isogram");
        return 0;
    }
    else{
        printf("is no isogram");
        return 0;
    }
    return 0;
}

bool is_letter(char Phrase[]){
    int i=0;
    while(Phrase[i]!='\0'){
        if(isalpha(Phrase[i])){
            return false;
        }
        Phrase[i]=tolower(Phrase[i]);
        i++;
    }
    return true;
}




bool is_isogram(const char phrase[]) {
    int counts[256] = {0};

    for (int i = 0; phrase[i] != '\0'; i++) {
        if (isalpha(phrase[i])) {
            counts[tolower(phrase[i])]++;
        }
        else{
            counts[phrase[i]]++;
        }
    }

    int frequency = 0;
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            if (frequency == 0) {
                frequency = counts[i]; // Set initial frequency(first non-zero frequency)
            }
            else if (counts[i] != frequency) {
                return false; // Different frequency found
            }
        }
    }

    return true; // All used letters occur equally often
}