//Zhanyu Wu Adam 47156165
/*This is a normal snake game. After starting this game, you will see
 two object. The red one is apple and the green one is snake. You will
 need four keys to operate the movement of the snake,"up","down","left","right". And the goal for
 you is to eat apple(touch the apple). Every time you eat the apple, 
 your snake size will be increase. There are two conditions would make 
 the snake die and meanwhile you lose the game. First is that you bump the wall
 which means that you touch the edge. The second is that the snake eat itself
 don't let the snake touch itself. After you lose the game, it would record 
 your snake size to show your score. Have fun!
 
 
 */



GoodApple a1;
int w; 
int h;

String die = "You Die";
int SnakeMoveX = 0;
int SnakeMoveY = 0;
int SnakeX = 0;
int SnakeY = 0;
int []snakesX=new int[100];
int []snakesY=new int[100];
int N ; 
color b;
float speed=100;
int foodX ;
int foodY ;
boolean eatFood=true;
boolean gameover=false;

void setup() {

  speed = 100;
  eatFood=true;
  w =30 ;
  h =30;
  N=1;
  size(600, 600);
  background(255);  
  SnakeX = 5; 
  SnakeY = 5;  
  a1 = new GoodApple();
}

void draw() {
  if (gameover) {
    gameover() ;
  } else {

    if (speed%5==0) {
      background(255);      
      for (int i=0; i<h; i++) {

        line(20*i, 0, i*20, height);
      }
      for (int j = 0; j<w; j++) {   
        line(0, j*20, width, j*20);
      }



      touchWall();
      a1.drawGApple();
      drawSnake();    
      snakeMove();
      eatApple();

      for (int i=1; i <N; i++ ) {
        if (SnakeX ==snakesX[i] && SnakeY ==snakesY[i]) {

          gameover =true;
        }
      }
    }  
    speed++;
  }
}  
void drawSnake() {
  fill(0, 87, 55);
  for (int i = 0; i < N; i++) {    
    rect(snakesX[i] * 20, snakesY[i] * 20, 20, 20);
  }  
  for (int i = N; i > 0; i--) {
    snakesX[i] = snakesX[i-1]; 
    snakesY[i] = snakesY[i-1];
  }
}

void snakeMove() {
  SnakeX=SnakeX+SnakeMoveX;
  SnakeY=SnakeY+SnakeMoveY;
  snakesX[0] = SnakeX;  
  snakesY[0] = SnakeY;
}

void keyPressed() {
  if (keyCode == UP) { //up down with x=0 
    if (snakesY[0] != snakesY[0]-5) {
      SnakeMoveY = -1; 
      SnakeMoveX = 0;
    }
  } else if (keyCode == DOWN) {
    if (snakesY[0] != snakesY[0]+5) { 
      SnakeMoveY = 1; 
      SnakeMoveX = 0;
    }
  } else if (keyCode == LEFT) { 
    if (snakesX[0] != snakesX[0]-5) {//right left with y=0
      SnakeMoveX = -1; 
      SnakeMoveY = 0;
    }
  } else if (keyCode == RIGHT) { 
    if (snakesX[0] != snakesX[0]+5) {
      SnakeMoveX = 1; 
      SnakeMoveY = 0;
    }
  } else if (keyCode=='R') {
    restart();
  }
}

void eatApple() {
  if ( SnakeX == a1.foodX && SnakeY == a1.foodY ) {
    a1.eatFood = true;    
    N++;
  }
}
void gameover() {
  pushMatrix();
  textAlign(CENTER);
  background(0);
  translate(width/2, height/2);

  fill(240, 81, 80);
  textSize(200);
  text(N, 0, 0);
  textSize(40);
  text(die, 0, 260);
  popMatrix();
}
void restart() {
  gameover=false;
  SnakeX=5;
  SnakeY=5;
  gameover= false;
  eatFood = true;
  N = 1;
  SnakeMoveX=0;
  SnakeMoveY=0;
}
void bump() {
  for (int i=1; i <N; i++ ) {
    if (SnakeX ==snakesX[i] && SnakeY ==snakesX[i]) {
      gameover = true;
    }
  }
}
void touchWall() {
  if (SnakeX*20 < 0 || SnakeX*20 >600) {
    gameover = true;
  }
  if (SnakeY*20 < 0 || SnakeY*20 >600) {
    gameover = true;
  }
}