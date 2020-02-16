#include "iGraphics.h"               //inclusion of header files
#include "bitmap_loader.h"
#include "myheader.h"
#include "Level 1.h"

//menu_variables
int mposx,  mposy; 
int mode=0;
int start=0;
int point_x=200,point_y=200;
int n=0,m=0;

//menu timer
int timer1,timer2,timer3,timer4,timer5,timer6;


//All functions of leel1.h header file called
void Level1()
{
	//function for player run
	void changeForRun(); 
	//funtion for player bullet
	void FunctionForBullets(); 
	//funtion for player jumping
	void jumpAndRun();
	//function for enemy (one two three four five six and seven) move
	void enemymove();
	void enemytwomove();
	void enemythreemove();
	void enemyfourmove();
	void enemyfivemove();
	void enemysixmove();
	void enemysevenmove();


	//function for enemy bullet
	void FucntionForEnemyBullet();                
	void FucntionForEnemytwoBullet();
	void FucntionForEnemythreeBullet();
	void FucntionForEnemyfourBullet();
	void FucntionForEnemyfiveBullet();
	void FucntionForEnemysixBullet();
	void FucntionForEnemysevenBullet();

	//function for checking collision of enemy
	void collisionCheckForEnemy();
	void collisionCheckForEnemytwo();
	void collisionCheckForEnemythree();
	void collisionCheckForEnemyfour();
	void collisionCheckForEnemyfive();
	void collisionCheckForEnemysix();
    void collisionCheckForEnemyseven();

	//function obstacle moving 

	void obs();
	//fuction for bird running
	void birdRunning();
	void birdRunning();
	void birdthreeRunning();

	
	void drawFunctions();
	
	

}
//background changing functions
void change_background()
{ 
	for(int i=0;i<2;i++)
	{
	background_x[i]-=10;
	if(background_x[i]<=-1800)

	background_x[i]= 1800;
	}
}
//game page logic
void gameState()
{
	if(n==0)
	{
	
		iShowBMP(40, 0, "photo\\home.bmp");

		iPauseTimer(timer1);
		iPauseTimer(timer2);
		iPauseTimer(timer3);
		iPauseTimer(timer4);
		iPauseTimer(timer5);
		iPauseTimer(timer6);
		

	}
	
	if(n==1 )
	{
	
		//iShowBMP(0,0,"photo\\startgame.bmp");

		iResumeTimer(timer1);
		iResumeTimer(timer2);
		iResumeTimer(timer3);
		iResumeTimer(timer4);
		iResumeTimer(timer5);
		iResumeTimer(timer6);
		drawFunctions();
	}
	if (n == 2) 
	{ 
		iShowBMP(0, 0, "photo\\instruction.bmp"); 
	}

	if (n == 3) 
	{ 
		iShowBMP(0, 0, "photo\\highscore.bmp"); 
	}


	if (n == 4) 
	{
		
		iShowBMP(0, 0, "photo\\credit.bmp"); 
	}
	
	if (n == 5) 
	{
		
		iClear();
	}

	if ( n==6)
	{
		iShowBMP(40, 0, "photo\\home.bmp");
	}

	if ( n==7)
	{
		iShowBMP(0, 0, "photo\\level.bmp");
	}
	
	//level_1
	if ( n==8)
	{
		
		//iShowBMP(0,0,"photo\\startgame.bmp");

		iResumeTimer(timer1);
		iResumeTimer(timer2);
		iResumeTimer(timer3);
		iResumeTimer(timer4);
		iResumeTimer(timer5);
		iResumeTimer(timer6);
		drawFunctions();
	}
	if ( n==9)
	{
		iShowBMP(0, 0, "photo\\level2.bmp");
	}

	if( n==10 )
	{
		
	}
}

void iMouseMove(int mx, int my)
{
	
}

void iPassiveMouse(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
		//for start game
		if (my <600 && my>500) { n = 1; }

		//for level
		if (my <499 && my>400) { n = 7; }

		//For instruction
		if (my <399 && my>350) { n = 2; }

		//for highscore
		if (my <349 && my>250){ n = 3;}

		//for about
		if (my <249 && my>170) { n = 4;}

		//for exit
		if (my <169 && my>75) { exit(0);}
		
	}
}

void iPassiveMouseMove(int mx,int my)
{
	
	point_x =mx;
	point_y = my;
		
	
  
}




void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		bulletRun = true;
	}

	if(key == 'm')
	{
		PlaySound(0,0,0);
		
	}

	if(key == 'p')
	{
		PlaySound("music\\sound",NULL,SND_LOOP | SND_ASYNC);
		
	}
	


	if(key == 'n')
	{
		
		n = 1;
	}
	

	
	if(key == 'i')
	{
		
		n = 2;
	}
	if(key == 'h')
	{
		
		n = 3;
	}
	if(key == 'a')
	{
		
		n = 4;
	}
	if(key == 'e')
	{
		
		n = 5;
	}
	if(key =='b')
	{
		n = 6;
	}

	if(key =='l')
	{
		n = 7;
	}
	
	if(key =='1')
	{
		n = 8;
	}

	if(key =='2')
	{
		n = 9;
	}




	
	
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	if (key == GLUT_KEY_UP)
	{
		if (!jump)
		{
			jump = true;
			jumpUp = true;
			
		}
		
	}
}

void iDraw()
{

	iClear();

	gameState();
	
	
	
}

int main()
{
	//setAll();
	//iSetTimer(25,change);
	iSetTimer(1000,showTime);
	iSetTimer(30,change_background);
	
	
	iSetTimer(100, changeForRun);//for player run.
	//for enemy run
	iSetTimer(100, enemymove);

	//for enemy bullet 
	iSetTimer(5, FucntionForEnemyBullet);
	iSetTimer(20,obs);
	iSetTimer(40,birdRunning);

	iInitialize(screenWidth, screenHeight, "WareFare");
	//for runinng
	pic[0] = iLoadImage("images\\p1.png");
	pic[1] = iLoadImage("images\\p2.png");
	pic[2] = iLoadImage("images\\p3.png");
	pic[3] = iLoadImage("images\\p4.png");
	pic[4] = iLoadImage("images\\p5.png");
	
	//for jumping
	jumpOne = iLoadImage("images\\j1.png");
	jumpTwo = iLoadImage("images\\j2.png");
	//for shooting
	bulletimage = iLoadImage("images\\b1.png");

	//enemy picture one
	enemypicture[0] = iLoadImage("images\\e2.1.png");
	enemypicture[1] = iLoadImage("images\\e2.2.png");
	enemypicture[2] = iLoadImage("images\\e2.3.png");
	enemypicture[3] = iLoadImage("images\\e2.4.png");
	enemypicture[4] = iLoadImage("images\\e2.5.png");
	enemypicture[5] = iLoadImage("images\\e2.6.png");
	//enemy bullet one
	enemyBulletImage = iLoadImage("images\\bullet2.png");
	


	//enemy picture two
	enemytwopicture[0] = iLoadImage("images\\e3.1.png");
	enemytwopicture[1] = iLoadImage("images\\e3.2.png");
	enemytwopicture[2] = iLoadImage("images\\e3.3.png");
	enemytwopicture[3] = iLoadImage("images\\e3.4.png");
	enemytwopicture[4] = iLoadImage("images\\e3.5.png");
	enemytwopicture[5] = iLoadImage("images\\e3.6.png");
	//enemy bullet two
	enemytwoBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture three
	enemythreepicture[0] = iLoadImage("images\\e2.1.png");
	enemythreepicture[1] = iLoadImage("images\\e2.2.png");
	enemythreepicture[2] = iLoadImage("images\\e2.3.png");
	enemythreepicture[3] = iLoadImage("images\\e2.4.png");
	enemythreepicture[4] = iLoadImage("images\\e2.5.png");
	enemythreepicture[5] = iLoadImage("images\\e2.6.png");
	//enemy bullet three
	enemythreeBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture four
	enemyfourpicture[0] = iLoadImage("images\\e1.png");
	enemyfourpicture[1] = iLoadImage("images\\e2.png");
	enemyfourpicture[2] = iLoadImage("images\\e3.png");
	enemyfourpicture[3] = iLoadImage("images\\e4.png");
	enemyfourpicture[4] = iLoadImage("images\\e5.png");
	enemyfourpicture[5] = iLoadImage("images\\e6.png");
	//enemy bullet four
	enemyfourBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture five
	enemyfivepicture[0] = iLoadImage("images\\e3.1.png");
	enemyfivepicture[1] = iLoadImage("images\\e3.2.png");
	enemyfivepicture[2] = iLoadImage("images\\e3.3.png");
	enemyfivepicture[3] = iLoadImage("images\\e3.4.png");
	enemyfivepicture[4] = iLoadImage("images\\e3.5.png");
	enemyfivepicture[5] = iLoadImage("images\\e3.6.png");
	//enemy bullet five
	enemyfiveBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture six
	enemysixpicture[0] = iLoadImage("images\\e2.1.png");
	enemysixpicture[1] = iLoadImage("images\\e2.2.png");
	enemysixpicture[2] = iLoadImage("images\\e2.3.png");
	enemysixpicture[3] = iLoadImage("images\\e2.4.png");
	enemysixpicture[4] = iLoadImage("images\\e2.5.png");
	enemysixpicture[5] = iLoadImage("images\\e2.6.png");
	//enemy bullet six
	enemysixBulletImage = iLoadImage("images\\bullet2.png");

	//enemy picture seven
	enemysevenpicture[0] = iLoadImage("images\\tank.png");
	enemysevenpicture[1] = iLoadImage("images\\tank.png");
	enemysevenpicture[2] = iLoadImage("images\\tank.png");
	enemysevenpicture[3] = iLoadImage("images\\tank.png");
	enemysevenpicture[4] = iLoadImage("images\\tank.png");
	enemysevenpicture[5] = iLoadImage("images\\tank.png");
	//enemy bullet seven
	enemysevenBulletImage = iLoadImage("images\\b1.png"); 

	//for obstacle
	obstacle=iLoadImage("images\\ob4.png");

	//for heart
	heart=iLoadImage("images\\h1.png");

	//for bird one running
	bird[0]=iLoadImage("images\\a1.png");
	bird[1]=iLoadImage("images\\a2.png");
	bird[2]=iLoadImage("images\\a3.png");
	bird[3]=iLoadImage("images\\a4.png");
	bird[4]=iLoadImage("images\\a5.png");
	bird[5]=iLoadImage("images\\a6.png");
	bird[6]=iLoadImage("images\\a7.png");
	bird[7]=iLoadImage("images\\a8.png");
	bird[8]=iLoadImage("images\\a9.png");
	//for bird two running
	birdtwo[0]=iLoadImage("images\\a1.png");
	birdtwo[1]=iLoadImage("images\\a2.png");
	birdtwo[2]=iLoadImage("images\\a3.png");
	birdtwo[3]=iLoadImage("images\\a4.png");
	birdtwo[4]=iLoadImage("images\\a5.png");
	birdtwo[5]=iLoadImage("images\\a6.png");
	birdtwo[6]=iLoadImage("images\\a7.png");
	birdtwo[7]=iLoadImage("images\\a8.png");
	birdtwo[8]=iLoadImage("images\\a9.png");
	//for bird three running
	birdthree[0]=iLoadImage("images\\a1.png");
	birdthree[1]=iLoadImage("images\\a2.png");
	birdthree[2]=iLoadImage("images\\a3.png");
	birdthree[3]=iLoadImage("images\\a4.png");
	birdthree[4]=iLoadImage("images\\a5.png");
	birdthree[5]=iLoadImage("images\\a6.png");
	birdthree[6]=iLoadImage("images\\a7.png");
	birdthree[7]=iLoadImage("images\\a8.png");
	birdthree[8]=iLoadImage("images\\a9.png");

	background[0] = iLoadImage("images\\bg.png");
	background[1] = iLoadImage("images\\bg1.png");

	//snd
	PlaySound("music\\sound",NULL,SND_LOOP | SND_ASYNC);

	gameOver=iLoadImage("images\\game over 1.png");

	iStart(); 

	return 0;
}