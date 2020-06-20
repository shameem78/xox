#include<stdio.h>
#include<conio.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};
int f=0;
char re;
void draw(){
	printf("\n\n\t\t\t X O X  GAME ");
	printf("\n\n\t\t\t|---|---|---|\n");
		printf("\t\t\t|  %c|  %c| %c |\n",a[0],a[1],a[2]);
	printf("\t\t\t|---|---|---|\n");
	printf("\t\t\t|  %c|  %c| %c |\n",a[3],a[4],a[5]);
printf("\t\t\t|---|---|---|\n");
	printf("\t\t\t|  %c|  %c| %c |\n",a[6],a[7],a[8]);
printf("\t\t\t|---|---|---|\n");
}

void main(){
	draw();
	player();
}
void player()
{
	char x , o;
	printf("player1:x position");
	fflush(stdin);
	scanf("%c",&x);
	change(x);
	printf("player2:o position");
	fflush(stdin);
	scanf("%c",&o);
	change(x,o);
}
void change(char x,char o){

  int i;
  for(i=0;i<9;i++){
  	if(a[i]==x){
  		a[i]='X';
	  }
  }
   system("cls");
  draw();
  
  for(i=0;i<9;i++){
  	if(a[i]==o){
  		a[i]='O';
	  }
  }
system("cls");
  draw();
}
  
