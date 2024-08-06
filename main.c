#include <stdio.h>

int main() {
  int attemps = 0;
  char yes[3];
  printf("------Guess The Number------\n");
  printf("Guess The Number? (yes/no)");
  scanf("%s", yes);
 if(strcmp(yes , "yes") == 0) {
   printf("Guess The Number from 1 - 100 \n");
   int ran = 1;
   for(ran = 1; ran == 1;) {
     int num = 24;
     int numm;
     printf("Guess:");
     scanf("%d", &numm);
     attemps++;
if(numm == num) {
  printf("Congrats You Win The Game!\n");
  printf("Attemps: %d", attemps);
  break;
}
     else if(numm > num) {
       printf("Too High!\n");
     }
else if(numm < num) {
printf("Too Low!\n");
}
else {
  printf("INVALID\n");
}
   }
 return 0;
 }
}
