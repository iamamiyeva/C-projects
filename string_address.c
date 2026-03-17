#include <stdio.h>

int main(){

    char word[] = "aab";
    char* p = word; // p = &word[0]
    int length = 0;
    while(*p){
        length++;
        p++;
    }
    printf("length = %d\n", length);
    p = word;
    for (int i=0; i<length; i++){
        int next_index = (i+(1<<i))%length;
        int next_elem = *(p+next_index);
        int current_elem = *(p+i);
        if(!(current_elem^next_elem)){
            printf("Address of %c: %p\n", current_elem, p+i);
        }        
    }

    return 0;
}