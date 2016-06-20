#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
#include <process.h>
#include <time.h>
int score=0;
void clear();
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(170,180,"LOADING.....");
	rectangle(167,197,472,223);
	for(int I=0,g=170;I<300;++I)
	{	delay(30);
		line(g,200,g,220);
		g++;
	}
	delay(30);
	clrscr();
	cleardevice();


struct tetris
{
	int rno[100];
	int score;
	int rectl,rectu,rectr,rectd;
	int sql,squ,sqr,sqd;
	int ll,lu,lr,ld;
	int boxl,boxu,boxr,boxd;
	int l1l,l1u,l1r,l1d;
	int l2l,l2u,l2r,l2d;
	int blck1l,blck1u,blck1r,blck1d;
	int blck2l,blck2u,blck2r,blck2d;
	char tt;
}t;
int w,x,y,z;
t.score=-20;
t.rectl=179;t.rectu=20;t.rectr=461;t.rectd=461;
t.sql=300;t.squ=-20;t.sqr=340;t.sqd=20;
t.boxl=300;t.boxu=0;t.boxr=320;t.boxd=20;
t.l1l=300;t.l1u=0;t.l1r=320;t.l1d=80;
t.l2l=260;t.l2u=0;t.l2r=340;t.l2d=20;
t.blck1l=300;t.blck1u=0;t.blck1r=340;t.blck1d=80;
t.blck2l=260;t.blck2u=0;t.blck2r=340;t.blck2d=40;
randomize();
int i;
int col;                      //T
{ 	int j=280;
	for(int t=1;t<=5;t++)
	{
		setcolor(0);
		for(i=0;i<=660;i+=20)
		{
			line(0,i,800,i) ;
			line(i,0,i,600);
		}
			col=random(14)+1;
			j=j-20;
		for(i=0;i<=j;i+=20)
		{
			setfillstyle(1,0);
			bar(100,i-40,120,i-20);
			setfillstyle(1,col);
			bar(100,i-20,120,i);
			delay(5);
}	}	}
{	col=random(14)+1;
	for(i=0;i<=180;i+=20)
	{
		setfillstyle(1,0);
		bar(80,i-40,100,i-20);
		setfillstyle(1,col);
		bar(80,i-20,100,i);
		delay(5);
	}
}
setcolor(0);
for(i=0;i<=660;i+=20)
{
	line(0,i,800,i) ;
	line(i,0,i,600);
}
{	col=random(14)+1;
	for(i=0;i<=180;i+=20)
	{
		setfillstyle(1,0);
		bar(120,i-40,140,i-20);
		setfillstyle(1,col);
		bar(120,i-20,140,i);
		delay(5);
	}
}
setcolor(0);
for(i=0;i<=660;i+=20)
{
	line(0,i,800,i) ;
	line(i,0,i,600);
}
delay(50);
						 //E
{ 	int j=280;
	for(int t=1;t<=5;t++)
	{
		setcolor(0);
		for(i=0;i<=660;i+=20)
		{
			line(0,i,800,i) ;
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-20;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(160,i-40,180,i-20);
			setfillstyle(1,col);
			bar(160,i-20,180,i);
			delay(10);
}	}	}
{ 	int j=300;
	for(int t=1;t<=3;t++)
	{
		setcolor(0);
		for(i=0;i<=660;i+=20)
		{
			line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-40;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(180,i-40,200,i-20);
			setfillstyle(1,col);
			bar(180,i-20,200,i);
			delay(5);
}	}	}
delay(50);
							    //T
{       int j=280;
	for(int t=1;t<=5;t++)
	{
		setcolor(0);
		for(i=0;i<=660;i+=20)
		{
			line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-20;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(240,i-40,260,i-20);
			setfillstyle(1,col);
			bar(240,i-20,260,i);
			delay(5);
}	}	}
{	col=random(14)+1;
	for(i=0;i<=180;i+=20)
	{
		setfillstyle(1,0);
		bar(220,i-40,240,i-20);
		setfillstyle(1,col);
		bar(220,i-20,240,i);
		delay(5);
	}
}
setcolor(0);
for(i=0;i<=660;i+=20)
{
	line(0,i,800,i) ;
	line(i,0,i,600);
}
{	col=random(14)+1;
	for(i=0;i<=180;i+=20)
	{	setfillstyle(1,0);
		bar(260,i-40,280,i-20);
		setfillstyle(1,col);
		bar(260,i-20,280,i);
		delay(5);
	}
}
setcolor(0);
for(i=0;i<=660;i+=20)
{
	line(0,i,800,i) ;
	line(i,0,i,600);
}
delay(50);
							    //R
{ 	int j=280;
	for(int t=1;t<=5;t++)
	{
		setcolor(0);
		for(i=0;i<=660;i+=20)
		{
			line(0,i,800,i) ;
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-20;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(300,i-40,320,i-20);
			setfillstyle(1,col);
			bar(300,i-20,320,i);
			delay(5);
}	}       }
{
	col=random(14)+1;
	for(i=0;i<=260;i+=20)
	{	setfillstyle(1,0);
		bar(340,i-40,360,i-20);
		setfillstyle(1,col);
		bar(340,i-20,360,i);
		delay(5);
	}
}
setcolor(0);
for(i=0;i<=660;i+=20)
{
	line(0,i,800,i) ;
	line(i,0,i,600);
}
{	col=random(14)+1;
	for(i=0;i<=240;i+=20)
	{	setfillstyle(1,0);
		bar(320,i-40,340,i-20);
		setfillstyle(1,col);
		bar(320,i-20,340,i);
		delay(5);
	}
}
setcolor(0);
for(i=0;i<=660;i+=20)
{
	line(0,i,800,i) ;
	line(i,0,i,600);
}
{ 	int j=240;
	for(int t=1;t<=3;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i) ;
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-20;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(340,i-40,360,i-20);
			setfillstyle(1,col);
			bar(340,i-20,360,i);
			delay(5);
}	 }	}
{ 	int j=260;
	for(int t=1;t<=2;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-40;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(320,i-40,340,i-20);
			setfillstyle(1,col);
			bar(320,i-20,340,i);
			delay(5);
}	}	}
delay(50);
							     //I
{	int j=280;
	for(int t=1;t<=5;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i) ;
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-20;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(400,i-40,420,i-20);
			setfillstyle(1,col);
			bar(400,i-20,420,i);
			delay(5);
}	}	}
{	int j=340;
	for(int t=1;t<=2;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-80;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(380,i-40,400,i-20);
			setfillstyle(1,col);
			bar(380,i-20,400,i);
			delay(5);
}	}	}
{	int j=340;
	for(int t=1;t<=2;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-80;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(420,i-40,440,i-20);
			setfillstyle(1,col);
			bar(420,i-20,440,i);
			delay(5);
}	}	}
delay(50);
								   //S
{	col=random(14)+1;
	for(i=0;i<=260;i+=20)
	{	setfillstyle(1,0);
		bar(460,i-40,480,i-20);
		setfillstyle(1,col);
		bar(460,i-20,480,i);
		delay(5);
}	}
setcolor(0);
for(i=0;i<=660;i+=20)
{
	line(0,i,800,i) ;
	line(i,0,i,600);
}
{	int j=240;
	for(int t=1;t<=3;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-20;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(460,i-40,480,i-20);
			setfillstyle(1,col);
			bar(460,i-20,480,i);
			delay(5);
}	}	}
{	int j=300;
	for(int t=1;t<=3;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-40;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(480,i-40,500,i-20);
			setfillstyle(1,col);
			bar(480,i-20,500,i);
			delay(5);
}	}	}
{	   int j=280;
	for(int t=1;t<=3;t++)
	{	setcolor(0);
		for(i=0;i<=660;i+=20)
		{	line(0,i,800,i);
			line(i,0,i,600);
		}
		col=random(14)+1;
		j=j-20;
		for(i=0;i<=j;i+=20)
		{	setfillstyle(1,0);
			bar(500,i-40,520,i-20);
			setfillstyle(1,col);
			bar(500,i-20,520,i);
			delay(5);
}	}	}
{	col=random(14)+1;
	for(i=0;i<=180;i+=20)
	{	setfillstyle(1,0);
		bar(500,i-40,520,i-20);
		setfillstyle(1,col);
		bar(500,i-20,520,i);
	delay(5);
}	}
setcolor(0);
for(i=0;i<=660;i+=20)
{	line(0,i,800,i) ;
	line(i,0,i,600);
}
delay(50);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
setcolor(4);
outtextxy(200,400,"PRESS ANY KEY TO CONTINUE");

char cover=getch();                                        //INSTRUCTIONS
cover+=1;
cleardevice();
setcolor(4);
settextstyle(TRIPLEX_FONT,0,5);
outtextxy(200,20,"INSTRUCTIONS");
setcolor(4);
settextstyle(TRIPLEX_FONT,0,2);
outtextxy(0,80,"Probably everyone knows how to play Tetris");
outtextxy(0,110,"Tetris is a puzzle with different shpes falling down");
outtextxy(0,140,"The motive is to arrange them and as a line gets completed");
outtextxy(0,170,"it gets deleted. The game ends when the space is filled");
outtextxy(0,200,"Good Luck!!");
setcolor(4);
settextstyle(TRIPLEX_FONT,0,3);
outtextxy(180,410,"Press any key to continue");
char ins=getch();
ins+=1;

							//CONTROLS
cleardevice();
setcolor(2);
settextstyle(TRIPLEX_FONT,0,5);
outtextxy(230,20,"CONTROLS");
setcolor(3);
settextstyle(TRIPLEX_FONT,0,2);
outtextxy(100,150,"To Move Left  Press A");
outtextxy(100,190,"To Move Right  Press D");
setcolor(1);
settextstyle(GOTHIC_FONT,0,3);
outtextxy(180,400,"Press any key to continue");
char ctrl=getch();
ctrl+=1;
							//LEVELS
cleardevice();
setcolor(2);
settextstyle(TRIPLEX_FONT,0,5);
outtextxy(200,20,"NEW GAME");
setcolor(5);
settextstyle(TRIPLEX_FONT,0,3);
outtextxy(150,80,"Select Level");
setcolor(3);
settextstyle(TRIPLEX_FONT,0,2);
outtextxy(100,150,"1. Easy");
outtextxy(100,190,"2. Medium");
outtextxy(100,230,"3. Hard");
outtextxy(70,270,"Default : Medium");
setcolor(1);
settextstyle(GOTHIC_FONT,0,4);
outtextxy(150,350,"Enter level : ");
int del;
char level=getch();
cleardevice();
						  //END OF LEVELS
int n=100;
{	setcolor(2);
	rectangle(t.rectl,t.rectu,t.rectr,t.rectd);
}
randomize();
for(int r=1;r<=n;r++)
{	t.rno[r]=random(6); }
	for(int main=1;main<=n;main++)
	{ 	t.score=-20;
		t.rectl=179;t.rectu=20;t.rectr=461;t.rectd=461;   //INITIALISING
		t.sql=300;t.squ=-20;t.sqr=340;t.sqd=20;
		t.boxl=300;t.boxu=0;t.boxr=320;t.boxd=20;
		t.l1l=300;t.l1u=0;t.l1r=320;t.l1d=80;
		t.l2l=260;t.l2u=0;t.l2r=340;t.l2d=20;
		t.blck1l=300;t.blck1u=0;t.blck1r=340;t.blck1d=80;
		t.blck2l=260;t.blck2u=0;t.blck2r=340;t.blck2d=40;
		setfillstyle(1,0);                                 //NEXT BRICK
		bar(500,360,600,460);
		setcolor(15);
		switch(t.rno[main+1])
		{	case 0:
			setfillstyle(1,2);
			bar(530,390,570,430);
			setcolor(0);
			line(510,410,590,410);
			line(550,370,550,450);break;
			case 1:
			setfillstyle(1,3);
			bar(540,400,560,420);break;
			case 2:
			setfillstyle(1,4);
			bar(540,370,560,450);
			setcolor(0);
			line(510,390,590,390);
			line(510,410,590,410);
			line(510,430,590,430);break;
			case 3:
			setfillstyle(1,5);
			bar(510,400,590,420);
			setcolor(0);
			line(530,380,530,450);
			line(550,380,550,450);
			line(570,380,570,450);break;
			case 4:
			setfillstyle(1,6);
			bar(530,370,570,450);
			setcolor(0);
			line(510,390,590,390);
			line(510,410,590,410);
			line(510,430,590,430);break;
			case 5:
			setfillstyle(1,7);
			bar(510,390,590,430);
			setcolor(0);
			line(530,380,530,450);
			line(550,380,550,450);
			line(570,380,570,450);
			line(510,410,590,410);break;
		}
		getch();
}}