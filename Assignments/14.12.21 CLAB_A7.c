#include <stdio.h>
#include <string.h>
 
int main()
{
  char str[30]= "beepboopbeep";
  int length= strlen(str);

  for(int i=0; i<length; i++)
  {
     char ch = str[i];

    //Check if current character matches any other character in the subsequence
    for(int j=i+1; j<length; ){
      
      if(str[i] == str[j]){
        //If yes, then shift the right characters to the left
        for(int k=j; k<length; k++){
          str[k] = str[k+1];
        }
        length--;
        
      } else {
          //only increment if the duplicate is not found
          //because after the shift, index j can again have duplicate
          j++;
      }
    } 
  }
  printf("%s",str);
  return 0;
}
