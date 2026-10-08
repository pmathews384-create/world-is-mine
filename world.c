#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int s,g,c=3;
srand(time(0));
s=rand()%10+1;
printf("WORLD IS MINE\n");
printf("Think Smart • Guess Right • Win Big\n");
printf("Guess 1-10, 3 chances\n");
while(c>0){
printf("Enter 1-10: ");
scanf("%d",&g);
if(g==s){
printf("Congratulations! You Win!\n");
return 0;
}
c--;
if(c>0){
if(g<s) printf("Too low!\n");
else printf("Too high!\n");
printf("Left: %d\n",c);
}else{
printf("Game Over! Correct was %d\n",s);
}
}
return 0;
}