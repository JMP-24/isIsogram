#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc,char*argv){
    if(argc>2||argc<2){
        print("wrong amount of arguments");
        return -1;
    }
    if(false==is_char(argv[1]))
    if(1==is_isogram(argv[1])){
        print("is isogram");
        return 0;
    }
    else{
        print("is no isogram");
        return 0;
    }
    return 0;
}

bool is_char(const char Phrase[]){
    while(Phrase[i]!='\0'){
        if(isalpha(Phrase[i])){
            return false;
        }
        i++;
    }
    return true;
}



bool is_isogram(const char phrase[]){

    int characters[256] = {0};

    for(int i=0; phrase[i] != '\0'; i++){
        if(characters[phrase[i]])
            return false;   // Character already seen
        characters[phrase[i]] = 1;
    }

    return true;
}