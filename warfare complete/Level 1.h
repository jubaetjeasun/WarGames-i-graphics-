#define LEVEL1_H_INCLUDED
/*GLUT_KEY_UP = jump
' ' = shoot(player)*/
//screen 
int screenWidth =  1800;
int screenHeight = 915;

//Game over
int gameOver;
bool over=false;

int image1, image2;//background image
/*Background variables*/
int background[2];
int background_x[] = {1800,0},background_y[]={0,0};
/*Time show code*/
int timecount=0;
char str_time[10];

//char score;
int count;
void scoreCount();
char scoress[3000];
int score=0;

//color change 
int r = 0;
int g = 0;
int b = 0;

/*#define upperBackgroundSpeed 10
#define lowerBackgroundSpeed 10

int mposx,mposy;

char upper[10][16] = {"images\\up1.bmp","images\\up2.bmp","images\\up3.bmp","images\\up4.bmp","images\\up5.bmp","images\\up6.bmp","images\\up7.bmp","images\\up8.bmp","images\\up9.bmp","images\\up10.bmp"};
char lower[10][17] = {"images\\low1.bmp","images\\low2.bmp","images\\low3.bmp","images\\low4.bmp","images\\low5.bmp","images\\low6.bmp","images\\low7.bmp","images\\low8.bmp","images\\low9.bmp","images\\low10.bmp"};

struct background
{
	int x;
	int y;

};
background upperBackground[10];
background lowerBackground[10];
*/

//player picture and cordinate 
int pic[5];
int  playerCorX = 0;
int playerCorY = 80;
int playerIndex = 0;
int playerLife = 100;

//player run
void changForRun();

//player jumping
int jumpOne;                   
int jumpTwo;

bool jump = false;
bool jumpUp = false;

int playerCordinateJumpSpeedup = 2;
int playerCordinateJumpSpeeddown = 2;
int jumpLimit = 400;
int playerCordinateJump = 0;

//bullet movement of player 
int bulletimage;
int bulx = 90;                           
int buly = 210;
bool bulletRun = false;
void FunctionForBullets();

//enemy one 
int enemypicture[6];
int enemyCorX=screenWidth;
int enemyCorY=80;
int enemyIndex = 0;
void enemymove();
int enemyLife = 10000;

//enemy bullet one
int enemyBulletImage;
int bx = enemyCorX;
int by = 180;
bool showBullet = false;
void FucntionForEnemyBullet();

//enemy two
int enemytwopicture[6];
int enemytwoCorX=screenWidth;
int enemytwoCorY=80;
int enemytwoIndex = 0;
void enemytwomove();
int enemytwoLife = 10000;

//enemy bullet two
int enemytwoBulletImage;
int btwox = enemytwoCorX;
int btwoy = 220;
bool showBullettwo = false;
void FucntionForEnemytwoBullet();

//enemy three
int enemythreepicture[6];
int enemythreeCorX=screenWidth;
int enemythreeCorY=80;
int enemythreeIndex = 0;
void enemythreemove();
int enemythreeLife = 10000;

//enemy bullet three
int enemythreeBulletImage;
int bthreex = enemythreeCorX;
int bthreey = 180;
bool showBulletthree = false;
void FucntionForEnemythreeBullet();

//enemy four
int enemyfourpicture[6];
int enemyfourCorX=screenWidth;
int enemyfourCorY=80;
int enemyfourIndex = 0;
void enemyfourmove();
int enemyfourLife = 10000;

//enemy bullet four
int enemyfourBulletImage;
int bfourx = enemyfourCorX;
int bfoury = 180;
bool showBulletfour = false;
void FucntionForEnemyfourBullet();

//enemy five
int enemyfivepicture[6];
int enemyfiveCorX=screenWidth;
int enemyfiveCorY=80;
int enemyfiveIndex = 0;
void enemyfivemove();
int enemyfiveLife = 10000;

//enemy bullet five
int enemyfiveBulletImage;
int bfivex = enemyfiveCorX;
int bfivey = 220;
bool showBulletfive = false;
void FucntionForEnemyfiveBullet();

//enemy six
int enemysixpicture[6];
int enemysixCorX=screenWidth;
int enemysixCorY=80;
int enemysixIndex = 0;
void enemysixmove();
int enemysixLife = 10000;

//enemy bullet six
int enemysixBulletImage;
int bsixx = enemysixCorX;
int bsixy = 180;
bool showBulletsix = false;
void FucntionForEnemysixBullet();

//enemy seven
int enemysevenpicture[6];
int enemysevenCorX=screenWidth;
int enemysevenCorY=80;
int enemysevenIndex = 0;
void enemysevenmove();
int enemysevenLife = 100000;

//enemy bullet seven
int enemysevenBulletImage;
int bsevenx = enemysevenCorX;
int bseveny = 212;
bool showBulletseven = false;
void FucntionForEnemysevenBullet();

//collision
void collisionCheckForPlayer();
bool collisionCheck = false;
void collisionCheckForEnemy();
bool enemyCheck=false;

void collisionCheckForEnemytwo();
bool enemytwoCheck=false;
void collisionCheckForEnemythree();
bool enemythreeCheck=false;
void collisionCheckForEnemyfour();
bool enemyfourCheck=false;
void collisionCheckForEnemyfive();
bool enemyfiveCheck=false;
void collisionCheckForEnemysix();
bool enemysixCheck=false;
void collisionCheckForEnemyseven();
bool enemysevenCheck=false;

//mine type of obstacle 
	int obstacle;
	int obx=screenWidth;
	int oby=50;
	bool showOb=false;
	void obs();
//for collecting extra points (shape heart)
	int heart;
	int hx=screenWidth;
	int hy=400;
	bool showHeart=false;
	
//bird flying 
	int bird[9];
	int birdIndex=0;
	int birdx=0;
	int birdy=800;
	void birdRunning();
	//bird flying two
	int birdtwo[9];
	int birdtwoIndex=0;
	int birdtwox=0;
	int birdtwoy=760;
	void birdRunning();
//bird flying three
	int birdthree[9];
	int birdthreeIndex=0;
	int birdthreex=0;
	int birdthreey=850;
	void birdthreeRunning();

// the function is created for jumping and running 
void jumpAndRun()
{
	if (jump)
	{
		if (jumpUp)
		{
			iShowImage(playerCorX, playerCorY + playerCordinateJump, 130, 230, jumpOne);
			collisionCheck = false;
		}
		else
		{
			iShowImage(playerCorX, playerCorY + playerCordinateJump, 130, 230, jumpTwo);
			collisionCheck = false;
		}
		
	}
	else{
		iShowImage(playerCorX, playerCorY, 130, 230, pic[playerIndex]);
		

	}
	if (jump)
	{
		if (jumpUp)
		{
			playerCordinateJump += playerCordinateJumpSpeedup;
			if (playerCordinateJump >= jumpLimit)
			{
				jumpUp = false;
			}
		}
		else{
			playerCordinateJump -= playerCordinateJumpSpeeddown;
			if (playerCordinateJump < 0)
			{
				jump = false;
				playerCordinateJump = 0;
			}
		}
		collisionCheck = false;
		if(jump)
	{
		bulx=15000;
		buly=15000;

	}
	else
	{bulx=90;
	buly=210;
	}
	
	}


}
//the function is created for shooting (player)
void FunctionForBullets()
{
	if (bulletRun)
	{
		bulx += 7;
		if (bulx >= screenWidth-200)
			bulletRun = false;
		collisionCheckForEnemy();
		collisionCheckForEnemytwo();
		collisionCheckForEnemythree();
		collisionCheckForEnemyfour();
		collisionCheckForEnemyfive();
		collisionCheckForEnemysix();
		collisionCheckForEnemyseven();
	}
	if (bulletRun)
	{
		{
			bulx += 7;
			if (bulx >= screenWidth-200)
			{
				bulletRun = false;
				bulx = 90;
				collisionCheckForEnemy();
				collisionCheckForEnemytwo();
				collisionCheckForEnemythree();
				collisionCheckForEnemyfour();
				collisionCheckForEnemyfive();
				collisionCheckForEnemysix();
				collisionCheckForEnemyseven();
			}
		}
	}
}

/*void setAll()
{
	int sum =0;
	for(int i=0;i<10;i++)
	{
		upperBackground[i].y =490;
		lowerBackground[i].y = 0;
		upperBackground[i].x =sum;
		lowerBackground[i].x = sum;
		sum+=180;
	
	}

}
void change()
{
	for(int i=0;i<10;i++)
	{
		upperBackground[i].x-= upperBackgroundSpeed; 
		lowerBackground[i].x-= upperBackgroundSpeed;

		if(upperBackground[i].x<=0)
		{
			upperBackground[i].x = screenWidth;
		}

		if(lowerBackground[i].x<=0)
		{
			lowerBackground[i].x = screenWidth;
		}

   }
}
*/
void showTime()
{
	timecount ++;

}

/*
Background Timer

*/

void drawFunctions()
{
	for(int i=0;i<2;i++){
		iShowImage(background_x[i],0,1800,900,background[i]);
		}
		
	
	//image for player bullet
	iShowImage(bulx, buly, 60, 60 , bulletimage);

	jumpAndRun();//for player
	//image for bird running
	iShowImage(birdx, birdy, 60, 60, bird[birdIndex]);
	iShowImage(birdtwox, birdtwoy, 60, 60, birdtwo[birdtwoIndex]);
	iShowImage(birdthreex, birdthreey, 60, 50, birdthree[birdthreeIndex]);
	

	 
	FunctionForBullets();
	iShowImage(enemyCorX, enemyCorY, 130, 230, enemypicture[enemyIndex]);//enemy image one
	iShowImage(enemytwoCorX, enemytwoCorY, 130, 230, enemytwopicture[enemytwoIndex]);//enemy image two
	iShowImage(enemythreeCorX, enemythreeCorY, 130, 230, enemythreepicture[enemythreeIndex]);//enemy image three
	iShowImage(enemyfourCorX, enemyfourCorY, 130, 230, enemyfourpicture[enemyfourIndex]);//enemy image four
	iShowImage(enemyfiveCorX, enemyfiveCorY, 130, 230, enemyfivepicture[enemyfiveIndex]);//enemy image five
	iShowImage(enemysixCorX, enemysixCorY, 130, 230, enemysixpicture[enemysixIndex]);//enemy image six
	iShowImage(enemysevenCorX, enemysevenCorY, 450, 200, enemysevenpicture[enemysevenIndex]);//enemy image seven
	
	//for score showing in screen 
	sprintf(scoress,"%d",score);
	iSetColor(204,204,0);
	iText(160,860,scoress,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(10,860,"SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,0,0);
	iText(10,800,"HEALTH BAR : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iRectangle(250,800,100,40);
	iFilledRectangle(250,800,playerLife,40);
	
	
	iShowImage(bx, by, 25, 18, enemyBulletImage);//image for enemy bullet one
	iShowImage(btwox, btwoy, 25, 18, enemytwoBulletImage);//image for enemy bullet two
	iShowImage(bthreex, bthreey, 25, 18, enemythreeBulletImage);//image for enemy bullet three
	iShowImage(bfourx, bfoury, 25, 18, enemyfourBulletImage);//image for enemy bullet four
	iShowImage(bfivex, bfivey, 25, 18, enemyfiveBulletImage);//image for enemy bullet five
	iShowImage(bsixx, bsixy, 25, 18, enemysixBulletImage);//image for enemy bullet six
	iShowImage(bsevenx, bseveny, 100, 200, enemysevenBulletImage);//image for enemy bullet seven
	iShowImage(obx, oby, 80, 80, obstacle);
	iShowImage(hx, hy, 80, 80, heart);
	if(over)
	{
		iShowImage(0,0,1800,915,gameOver);
		iSetColor(255,0,0);
		iText(950,300,scoress,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(800,300,"SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	}
}



void changeForRun()
{
	playerIndex++;
	if (playerIndex >= 5)
	{
		playerIndex = 0;
	}
	
	}

void FucntionForEnemyBullet()
{
	
	
		bx-=10;
		if (bx <= 0)
		{
			bx = enemyCorX;
		}
	
		collisionCheckForPlayer();

		if(enemyLife<=0)//enemy bullet two
	{
		btwox-=10;
		if (btwox <= 0)
		{
			btwox = enemytwoCorX;
		}
	
		collisionCheckForPlayer();
	}

		if(enemytwoLife<=0)//enemy bullet three
	{
		bthreex-=10;
		if (bthreex <= 0)
		{
			bthreex = enemythreeCorX;
		}
	
		collisionCheckForPlayer();
	}
		if(enemythreeLife<=0)//enemy bullet four
	{
		bfourx-=10;
		if (bfourx <= 0)
		{
			bfourx = enemyfourCorX;
		}
	
		collisionCheckForPlayer();
	}

		if(enemyfourLife<=0) //enemy bullet five
	{
		bfivex-=10;
		if (bfivex <= 0)
		{
			bfivex = enemyfiveCorX;
		}
	
		collisionCheckForPlayer();
	}	

		if(enemyfiveLife<=0)   //enemy bullet six
	{ 
		bsixx-=10;
		if (bsixx <= 0)
		{
			bsixx = enemysixCorX;
		}
	
		collisionCheckForPlayer();
	}
		
	if(enemysixLife<=0)   //enemy bullet seven
	{
		bsevenx-=10;
		if (bsevenx <= 0)
		{
			bsevenx = enemysevenCorX;
		}
		collisionCheckForPlayer();
	}
		
	
}


void enemymove()
{
	
	enemyCorX -= 12;      //for enemy one
	enemyIndex++;
	if (enemyIndex >= 6)
	{
		enemyIndex = 0;
	}
	if (enemyCorX <= 1400)
	{
		enemyIndex++;
		if (enemyIndex >= 6)
		{
			enemyIndex = 0;
		}
		enemyCorX = 1400;
	}

	if(enemyLife<=0)   //for enemy two
	{
		enemytwoCorX -= 12;
	enemytwoIndex++;
	if (enemytwoIndex >= 6)
	{
		enemytwoIndex = 0;
	}
	if (enemytwoCorX <= 1400)
	{
		enemytwoIndex++;
		if (enemytwoIndex >= 6)
		{
			enemytwoIndex = 0;
		}
		enemytwoCorX = 1400;
	}
	}	

	if(enemytwoLife<=0)   //for enemy three
	{
		enemythreeCorX -= 12;
	enemythreeIndex++;
	if (enemythreeIndex >= 6)
	{
		enemythreeIndex = 0;
	}
	if (enemythreeCorX <= 1400)
	{
		enemythreeIndex++;
		if (enemythreeIndex >= 6)
		{
			enemythreeIndex = 0;
		}
		enemythreeCorX = 1400;
	}
	}	
	if(enemythreeLife<=0)   //for enemy four
	{
		enemyfourCorX -= 12;
	enemyfourIndex++;
	if (enemyfourIndex >= 6)
	{
		enemyfourIndex = 0;
	}
	if (enemyfourCorX <= 1400)
	{
		enemyfourIndex++;
		if (enemyfourIndex >= 6)
		{
			enemyfourIndex = 0;
		}
		enemyfourCorX = 1400;
	}
	}	
	
	if(enemyfourLife<=0)  //for enemy five
	{
		enemyfiveCorX -= 12;
	enemyfiveIndex++;
	if (enemyfiveIndex >= 6)
	{
		enemyfiveIndex = 0;
	}
	if (enemyfiveCorX <= 1400)
	{
		enemyfiveIndex++;
		if (enemyfiveIndex >= 6)
		{
			enemyfiveIndex = 0;
		}
		enemyfiveCorX = 1400;
	}
	}	

	if(enemyfiveLife<=0)  //for enemy six
	{
		enemysixCorX -= 12;
	enemysixIndex++;
	if (enemysixIndex >= 6)
	{
		enemysixIndex = 0;
	}
	if (enemysixCorX <= 1400)
	{
		enemysixIndex++;
		if (enemysixIndex >= 6)
		{
			enemysixIndex = 0;
		}
		enemysixCorX = 1400;
	}
	}

	if(enemysixLife<=0)//for enemy seven
	{
		enemysevenCorX -= 12;
	enemysevenIndex++;
	if (enemysevenIndex >= 6)
	{
		enemysevenIndex = 0;
	}
	if (enemysevenCorX <= 1300)
	{
		enemysevenIndex++;
		if (enemysevenIndex >= 6)
		{
			enemysevenIndex = 0;
		}
		enemysevenCorX = 1300;
	}
	}	
}  




void collisionCheckForPlayer()
{
	collisionCheck = true;
	if(jump)
	{
		if(hx+80>playerCorX && hx<playerCorX+130 && collisionCheck==true)
	{
		score+=5;
	
	}
	}
	
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bx + 25 > playerCorX && bx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			
			//collisionCheck = true;
		}
	}
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (obx + 80 > playerCorX && obx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}
	// collision for obstacle
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (btwox + 25 > playerCorX && btwox < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bthreex + 25 > playerCorX && bthreex < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bfourx + 25 > playerCorX && bfourx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bfivex + 25 > playerCorX && bfivex < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}
	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bsixx + 25 > playerCorX && bsixx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}

	collisionCheck = true;
	if (jump)
	{
		collisionCheck = false;
	}
	else if (bsevenx + 42 > playerCorX && bsevenx < playerCorX + 130 && collisionCheck==true)
	{
		playerLife -= 1;
		//printf("%d\n", playerLife);
		if (playerLife <= 0)
		{
			playerCorX = 1500000;
			playerCorY = 1500000;
			bulx=1500000;
			//collisionCheck = true;
		}
	}
	if(playerLife==0)
	{
		over =true;
	}
	
}
void collisionCheckForEnemy()
{
	enemyCheck=true;
	 if (bulx + 40 > enemyCorX && bulx <enemyCorX+ 130 && enemyCheck==true)
	{
		enemyLife -= 100;
		//printf("      %d\n",enemyLife);
		if (enemyLife <= 0)
		{
			score+=100;
			enemyCorX = 1500000;
			enemyCorY = 1500000;
			bx=1500000;
			
		}
	 }
}
void collisionCheckForEnemytwo()
{
	enemytwoCheck=true;
	 if (bulx + 40 > enemytwoCorX && bulx <enemytwoCorX+ 130 && enemytwoCheck==true)
	{
		enemytwoLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemytwoLife <= 0)
		{
			score+=100;
			enemytwoCorX = 1500000;
			enemytwoCorY = 1500000;
			btwox=1500000;
		}
	 }
}
void collisionCheckForEnemythree()
{
	enemythreeCheck=true;
	 if (bulx + 40 > enemythreeCorX && bulx <enemythreeCorX+ 130 && enemythreeCheck==true)
	{
		enemythreeLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemythreeLife <= 0)
		{
			score+=100;
			enemythreeCorX = 1500000;
			enemythreeCorY = 1500000;
			bthreex=1500000;
		}
	 }

}
void collisionCheckForEnemyfour()
{
	enemyfourCheck=true;
	 if (bulx + 40 > enemyfourCorX && bulx <enemyfourCorX+ 130 && enemyfourCheck==true)
	{
		enemyfourLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemyfourLife <= 0)
		{
			score+=100;
			enemyfourCorX = 1500000;
			enemyfourCorY = 1500000;
			bfourx=1500000;
		}
	 }
}
void collisionCheckForEnemyfive()
{
	enemyfiveCheck=true;
	 if (bulx +40 > enemyfiveCorX && bulx <enemyfiveCorX+ 130 && enemyfiveCheck==true)
	{
		enemyfiveLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemyfiveLife <= 0)
		{
			score+=100;
			enemyfiveCorX = 1500000;
			enemyfiveCorY = 1500000;
			bfivex=1500000;
		}
	 }
}
void collisionCheckForEnemysix()
{
	enemysixCheck=true;
	 if (bulx + 40 > enemysixCorX && bulx <enemysixCorX+ 130 && enemysixCheck==true)
	{
		enemysixLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemysixLife <= 0)
		{
			score+=100;
			enemysixCorX = 1500000;
			enemysixCorY = 1500000;
			bsixx=1500000;
		}
	 }
}

void collisionCheckForEnemyseven()
{
	enemysevenCheck=true;
	 if (bulx + 40 > enemysevenCorX && bulx <enemysevenCorX+ 450 && enemysevenCheck==true) //change this code
	{
		enemysevenLife -= 100;
		//printf("         %d\n",enemyLife);
		if (enemysevenLife <= 0)
		{
			score+=500;
			enemysevenCorX = 1500000;
			enemysevenCorY = 1500000;
			bsevenx=1500000;
			over=true;
		}
	 }

}

void obs()              //obstacle
{
	obx-=10;
	if(obx<=0)
	{
		obx=screenWidth;
	}
	collisionCheckForPlayer();
	hx-=12;
	//hy=400+rand()%100;
	
	if(hx<=0)
	{
		hx=screenWidth;
	}
}
void birdRunning()
{
	birdIndex++;
	birdx+=20;
	if(birdIndex>=9){
		birdIndex=0;
	}
	if(birdx>=screenWidth)
	{
		birdx=0;
	}
	
	birdtwoIndex++;
	birdtwox+=16;
	if(birdtwoIndex>=9){
		birdtwoIndex=0;
	}
	if(birdtwox>=screenWidth)
	{
		birdtwox=0;
	}
	
	birdthreeIndex++;
	birdthreex+=14;
	if(birdthreeIndex>=9){
		birdthreeIndex=0;
	}
	if(birdthreex>=screenWidth)
	{
		birdthreex=0;
	}
}

