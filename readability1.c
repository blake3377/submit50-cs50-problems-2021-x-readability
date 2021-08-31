#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    
    string text = get_string("Text:");
    
    int charactercounter=0;
    int wordcounter=1;
    int sentencecounter =0;
    
    int length = strlen(text);
    
  
    
    for(int i=0; i < length; i++){
    
    if(text[i]>='a'  && text[i]<='z'){
        charactercounter++;
        
    }
    
    
    else if(text[i] >= 'A'  && text[i] <= 'Z' ){
       charactercounter++;
      
    }
      
    }
    
    
    for(int i=0; i < length; i++){
        
        if(text[i] == ' '){
            wordcounter++;
        }
        
    }
    
    
    for(int i=0; i < length; i++){
        if(text[i] == '.' || text[i]=='?' || text[i]=='!'){
            sentencecounter++;
        }
    }
   
    
    float L = 0.0;
    float S = 0.0;
    L = (charactercounter / (float) wordcounter)*100;
   //L = ((float)charactercounter / 100)* wordcounter;
    printf("%.2f\n", L);
   // S = ((float) sentencecounter/100)*wordcounter;
   S = ((float) sentencecounter/wordcounter)*100;
    printf("%.2f\n", S);
    float index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);
    
   if(index>=16){
       
       printf("Grade : 16+\n");
   }
   
   else if (index <1){
       
       printf("Before Grade 1\n");
   }
    if(index>=1 && index<16) {
    printf("Grade: %i\n", (int)index);
    }
}