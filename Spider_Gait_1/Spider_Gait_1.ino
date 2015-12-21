//#define BS1 52
//#define BS2 46
//#define BS3 30
//#define BS4 36
//#define BS5 24
//#define BS6 4     //Analog PWM
//#define JT1 48
//#define JT2 44      //Pin Contacts DIGITAL 15 + ANALOG 3
//#define JT3 32
//#define JT4 38
//#define JT5 26
//#define JT6 2     //Analog PWM
//#define LG1 50
//#define LG2 42
//#define LG3 34
//#define LG4 40
//#define LG5 28
//#define LG6 22    //Analog PWM
//#define initiateB 90    //Initial Angle For First Body Setup
//#define initiateJ 120    //Initial Angle For First Joint Setup
//#define initiateL 120    //Initial Angle For First Leg Setup

#include<Servo.h>

  Servo B_1, B_2, B_3, B_4, B_5, B_6;
  Servo J_1, J_2, J_3, J_4, J_5, J_6;
  Servo L_1, L_2, L_3, L_4, L_5, L_6;     //Declaration Of Servo Motor Objects



  int initiateB=90,initiateJ=130,initiateL=150;   //Stable Angle Values
  int ini_pos[3][6]={90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90};        //Declaration Of Initial(Current) Position Array

  int i=0,j=0,pos=0,dly=20;   //Declaration of Delay Value


 
  
void movemotor(char ident1,int ident2,int fin_ang)    //Moves Motor, Identified and by the Given Angle
{
  switch(ident1)
  {
    case 'B': 
    {    Serial.println("Case B selected ");
      switch(ident2)
      {
        case 1: {Serial.println("Case 1 selected ");
                    if(ini_pos[0][0]==fin_ang) break;
                    else if(ini_pos[0][0]<fin_ang)
                    for(pos=ini_pos[0][0];pos<=fin_ang;pos++)
                    {                      
                      B_1.write(pos);
                      delay(dly);
                    }
                    else if(ini_pos[0][0]>fin_ang)
                    for(pos=ini_pos[0][0];pos>=fin_ang;pos--)
                    {
                      B_1.write(pos);delay(dly);
                    }
                    ini_pos[0][0]=fin_ang;break;
                  }
        case 2: { Serial.println("Case 2 selected ");
                    if(ini_pos[0][1]==fin_ang) break;
                    else if(ini_pos[0][1]<fin_ang)
                    for(pos=ini_pos[0][1];pos<=fin_ang;pos++)
                    {
                      B_2.write(pos);delay(dly);
                    }
                    else if(ini_pos[0][1]>fin_ang)
                    for(pos=ini_pos[0][1];pos>=fin_ang;pos--)
                    {
                      B_2.write(pos);delay(dly);
                    }
                    ini_pos[0][1]=fin_ang;break;
                  }
        case 3: { Serial.println("Case 3 selected ");
                    if(ini_pos[0][2]==fin_ang) break;
                    else if(ini_pos[0][2]<fin_ang)
                    for(pos=ini_pos[0][2];pos<=fin_ang;pos++)
                    {
                      B_3.write(190-pos);delay(dly);
                    }
                    else if(ini_pos[0][2]>fin_ang)
                    for(pos=ini_pos[0][2];pos>=fin_ang;pos--)
                    {
                      B_3.write(190-pos);delay(dly);
                    }
                    ini_pos[0][2]=fin_ang;break;
                  }
        case 4: { Serial.println("Case 4 selected ");
                    if(ini_pos[0][3]==fin_ang) break;
                    else if(ini_pos[0][3]<fin_ang)
                    for(pos=ini_pos[0][3];pos<=fin_ang;pos++)
                    {
                      B_4.write(180-pos);delay(dly);
                    }
                    else if(ini_pos[0][3]>fin_ang)
                    for(pos=ini_pos[0][3];pos>=fin_ang;pos--)
                    {
                      B_4.write(180-pos);delay(dly);
                    }
                    ini_pos[0][3]=fin_ang;break;
                  }
        case 5:{  Serial.println("Case 5 selected ");
                    if(ini_pos[0][4]==fin_ang) break;
                    else if(ini_pos[0][4]<fin_ang)
                    for(pos=ini_pos[0][4];pos<=fin_ang;pos++)
                    {
                      B_5.write(180-pos);delay(dly);
                    }
                    else if(ini_pos[0][4]>fin_ang)
                    for(pos=ini_pos[0][4];pos>=fin_ang;pos--)
                    {
                      B_5.write(180-pos);delay(dly);
                    }
                    ini_pos[0][4]=fin_ang;break;
                  }
        case 6: { Serial.println("Case 6 selected ");
                    if(ini_pos[0][5]==fin_ang) break;
                    else if(ini_pos[0][5]<fin_ang)
                    for(pos=ini_pos[0][5];pos<=fin_ang;pos++)
                    {
                      B_6.write(pos-18);delay(dly);
                    }
                    else if(ini_pos[0][5]>fin_ang)
                    for(pos=ini_pos[0][5];pos>=fin_ang;pos--)
                    {
                      B_6.write(pos-18);delay(dly);
                    }
                    ini_pos[0][5]=fin_ang;break;
                  }
      }break;
    }
    
    case 'J': 
    {    Serial.println("Case J selected ");
      switch(ident2)
      {
        case 1: { Serial.println("Case 1 selected ");
                    if(ini_pos[1][0]==fin_ang) break;
                    else if(ini_pos[1][0]<fin_ang)
                    for(pos=ini_pos[1][0];pos<=fin_ang;pos++)
                    {
                      J_1.write(pos);delay(dly);
                    }
                    else if(ini_pos[1][0]>fin_ang)
                    for(pos=ini_pos[1][0];pos>=fin_ang;pos--)
                    {
                      J_1.write(pos);delay(dly);
                    }
                    ini_pos[1][0]=fin_ang;break;
                  }
        case 2: { Serial.println("Case 2 selected ");
                    if(ini_pos[1][1]==fin_ang) break;
                    else if(ini_pos[1][1]<fin_ang)
                    for(pos=ini_pos[1][1];pos<=fin_ang;pos++)
                    {
                      J_2.write(pos);delay(dly);
                    }
                    else if(ini_pos[1][1]>fin_ang)
                    for(pos=ini_pos[1][1];pos>=fin_ang;pos--)
                    {
                      J_2.write(pos);delay(dly);
                    }
                    ini_pos[1][1]=fin_ang;break;
                  }
        case 3: { Serial.println("Case 3 selected ");
                    if(ini_pos[1][2]==fin_ang) break;
                    else if(ini_pos[1][2]<fin_ang)
                    for(pos=ini_pos[1][2];pos<=fin_ang;pos++)
                    {
                      J_3.write(170-pos);delay(dly);
                    }
                    else if(ini_pos[1][2]>fin_ang)
                    for(pos=ini_pos[1][2];pos>=fin_ang;pos--)
                    {
                      J_3.write(170-pos);delay(dly);
                    }
                    ini_pos[1][2]=fin_ang;break;
                  }
        case 4: { Serial.println("Case 4 selected ");
                    if(ini_pos[1][3]==fin_ang) break;
                    else if(ini_pos[1][3]<fin_ang)
                    for(pos=ini_pos[1][3];pos<=fin_ang;pos++)
                    {
                      J_4.write(170-pos);delay(dly);
                    }
                    else if(ini_pos[1][3]>fin_ang)
                    for(pos=ini_pos[1][3];pos>=fin_ang;pos--)
                    {
                      J_4.write(170-pos);delay(dly);
                    }
                    ini_pos[1][3]=fin_ang;break;
                  }
        case 5:{ Serial.println("Case 5 selected ");
                    if(ini_pos[1][4]==fin_ang) break;
                    else if(ini_pos[1][4]<fin_ang)
                    for(pos=ini_pos[1][4];pos<=fin_ang;pos++)
                    {
                      J_5.write(160 -pos);delay(dly);
                    }
                    else if(ini_pos[1][4]>fin_ang)
                    for(pos=ini_pos[1][4];pos>=fin_ang;pos--)
                    {
                      J_5.write(160-pos);delay(dly);
                    }
                    ini_pos[1][4]=fin_ang;break;
                  }
        case 6: { Serial.println("Case 6 selected ");
                    if(ini_pos[1][5]==fin_ang) break;
                    else if(ini_pos[1][5]<fin_ang)
                    for(pos=ini_pos[1][5];pos<=fin_ang;pos++)
                    {
                      J_6.write(pos-20);delay(dly);
                    }
                    else if(ini_pos[1][5]>fin_ang)
                    for(pos=ini_pos[1][5];pos>=fin_ang;pos--)
                    {
                      J_6.write(pos-20);delay(dly);
                    }
                    ini_pos[1][5]=fin_ang;break;
                  }
      }break;
    }
        case 'L': 
    {  Serial.println("Case L selected ");
      switch(ident2)
      {
        case 1: { Serial.println("Case 1 selected ");
                    if(ini_pos[2][0]==fin_ang) break;
                    else if(ini_pos[2][0]<fin_ang)
                    for(pos=ini_pos[2][0];pos<=fin_ang;pos++)
                    {
                      L_1.write(pos);delay(dly);
                    }
                    else if(ini_pos[2][0]>fin_ang)
                    for(pos=ini_pos[2][0];pos>=fin_ang;pos--)
                    {
                      L_1.write(pos);delay(dly);
                    }
                    ini_pos[2][0]=fin_ang;break;
                  }
        case 2: { Serial.println("Case 2 selected ");
                    if(ini_pos[2][1]==fin_ang) break;
                    else if(ini_pos[2][1]<fin_ang)
                    for(pos=ini_pos[2][1];pos<=fin_ang;pos++)
                    {
                      L_2.write(pos);delay(dly);
                    }
                    else if(ini_pos[2][1]>fin_ang)
                    for(pos=ini_pos[2][1];pos>=fin_ang;pos--)
                    {
                      L_2.write(pos);delay(dly);
                    }
                    ini_pos[2][1]=fin_ang;break;
                  }
        case 3: { Serial.println("Case 3 selected ");
                    if(ini_pos[2][2]==fin_ang) break;
                    else if(ini_pos[2][2]<fin_ang)
                    for(pos=ini_pos[2][2];pos<=fin_ang;pos++)
                    {
                      L_3.write(180-pos);delay(dly);
                    }
                    else if(ini_pos[2][2]>fin_ang)
                    for(pos=ini_pos[2][2];pos>=fin_ang;pos--)
                    {
                      L_3.write(180-pos);delay(dly);
                    }
                    ini_pos[2][2]=fin_ang;break;
                  }
        case 4: { Serial.println("Case 4 selected ");
                    if(ini_pos[2][3]==fin_ang) break;
                    else if(ini_pos[2][3]<fin_ang)
                    for(pos=ini_pos[2][3];pos<=fin_ang;pos++)
                    {
                      L_4.write(180-pos);delay(dly);
                    }
                    else if(ini_pos[2][3]>fin_ang)
                    for(pos=ini_pos[2][3];pos>=fin_ang;pos--)
                    {
                      L_4.write(180-pos);delay(dly);
                    }
                    ini_pos[2][3]=fin_ang;break;
                  }
        case (5):{ Serial.println("Case 5 selected ");
                    if(ini_pos[2][4]==fin_ang) break;
                    else if(ini_pos[2][4]<fin_ang)
                    for(pos=ini_pos[2][4];pos<=fin_ang;pos++)
                    {
                      L_5.write(180-pos);delay(dly);
                    }
                    else if(ini_pos[2][4]>fin_ang)
                    for(pos=ini_pos[2][4];pos>=fin_ang;pos--)
                    {
                      L_5.write(180-pos);delay(dly);
                    }
                    ini_pos[2][4]=fin_ang;break;
                  }
        case (6): { Serial.println("Case 6 selected ");
                    if(ini_pos[2][5]==fin_ang) break;
                    else if(ini_pos[2][5]<fin_ang)
                    for(pos=ini_pos[2][5];pos<=fin_ang;pos++)
                    {
                      L_6.write(pos);delay(dly);
                    }
                    else if(ini_pos[2][5]>fin_ang)
                    for(pos=ini_pos[2][5];pos>=fin_ang;pos--)
                    {
                      L_6.write(pos);delay(dly);
                    }
                    ini_pos[2][5]=fin_ang;break;
                  }
      }break;
    }
  }
}



  void moveleg(int leg, int dir,int angle)          //Moves a Selected Leg Forward or Backward, by a specified angle
  {
    if(dir==1)    //FORWARDS
    switch(leg)
    { Serial.println("Moving Leg Forwards");
      case 1:{Serial.println("Moving Leg");movemotor('J',1,150);movemotor('L',1,60);movemotor('B',1,angle);stablelj();break;}
      case 2:{Serial.println("Moving Leg");movemotor('J',2,150);movemotor('L',2,60);movemotor('B',2,angle);stablelj();break;}
      case 3:{Serial.println("Moving Leg");movemotor('J',3,150);movemotor('L',3,60);movemotor('B',3,angle);stablelj();break;}
      case 4:{Serial.println("Moving Leg");movemotor('J',4,150);movemotor('L',4,60);movemotor('B',4,angle);stablelj();break;}
      case 5:{Serial.println("Moving Leg");movemotor('J',5,150);movemotor('L',5,60);movemotor('B',5,angle);stablelj();break;}
      case 6:{Serial.println("Moving Leg");movemotor('J',6,150);movemotor('L',6,60);movemotor('B',6,angle);stablelj();break;}
    }
    else if(dir==0)     //BACKWARDS
    switch(leg)
    {Serial.println("Moving Leg Backwards");
      case 1:{Serial.println("Moving Leg");movemotor('J',1,150);movemotor('L',1,60);movemotor('B',1,180-angle);stablelj();break;}
      case 2:{Serial.println("Moving Leg");movemotor('J',2,150);movemotor('L',2,60);movemotor('B',2,180-angle);stablelj();break;}
      case 3:{Serial.println("Moving Leg");movemotor('J',3,150);movemotor('L',3,60);movemotor('B',3,180-angle);stablelj();break;}
      case 4:{Serial.println("Moving Leg");movemotor('J',4,150);movemotor('L',4,60);movemotor('B',4,180-angle);stablelj();break;}
      case 5:{Serial.println("Moving Leg");movemotor('J',5,150);movemotor('L',5,60);movemotor('B',5,180-angle);stablelj();break;}
      case 6:{Serial.println("Moving Leg");movemotor('J',6,150);movemotor('L',6,60);movemotor('B',6,180-angle);stablelj();break;}
    }
  }



void stablepos()        //Setting Motors to Initial Stable Angle
{
Serial.println("Initialising Motors...........");
      for(i=1; i<=6; i+= 1)
      {                                  
        Serial.println("Initialising Base Motors...");
        movemotor('B',i,initiateB);    //Body   
      
      } 
      for(i=0;i<6;i++)
      ini_pos[0][i]=initiateB;

      stablelj();
    
 }

      void stablelj()
 {   

      for(i=1; i<=6; i+= 1)
      {                                  
        Serial.println("Initialising Leg Motors...");
        movemotor('L',i,initiateL);    //Leg
       
      } 
      for(i=0;i<6;i++)
    
      ini_pos[2][i]=initiateL;


      
      for(i=1; i<=6; i+= 1)
      { 
        Serial.println("Initialising Joint Motors...");                                 
        movemotor('J',i,initiateJ);    //Joint   
       
      } 
      for(i=0;i<6;i++)
      ini_pos[1][i]=initiateJ;
     
      
 }

  void gait33(int no_of_steps)   //3+3 Gait Generation
  {
   /*Description: Three Legs move forward, three legs stay stationary. Holding and moving in a V formation. Moves forward by the specified no of steps. */
   stablepos();   //Stabilizing position before commencing gait
   int pos=0;
   while(no_of_steps)
   {
   {
    
//    moveleg(1,1,120);
//    moveleg(4,1,120);       //Commencement of Gait
//    moveleg(6,1,120);
      Serial.println("Lifting Joints");
      for(pos=ini_pos[1][0];pos<=130;pos++)
      {J_1.write(pos);J_4.write(pos);J_6.write(pos);delay(dly);}
      Serial.println("Lifting Legs");
      for(pos=ini_pos[2][0];pos<=90;pos++)
      {L_1.write(pos);L_4.write(pos);L_6.write(pos);delay(dly);}
      Serial.println("Moving Body");
      for(pos=ini_pos[0][0];pos<=120;pos++)
      {B_1.write(pos);B_4.write(pos);B_6.write(pos);ini_pos[0][0]=120;ini_pos[0][3]=120;ini_pos[0][5]=120;delay(dly);}
      Serial.println("Replacing Legs");
      for(pos=90;pos>=ini_pos[2][0];pos--)
      {L_1.write(pos);L_4.write(pos);L_6.write(pos);delay(dly);}
      Serial.println("Replacing Joints");
      for(pos=130;pos>=ini_pos[1][0];pos--)
      {J_1.write(pos);J_4.write(pos);J_6.write(pos);delay(dly);}
      

   }

   if(no_of_steps>0)
   {
//   moveleg(3,1,120);
//   moveleg(2,1,120);        //Sustenance Of Gait
//   moveleg(5,1,120);
    Serial.println("Lifting Joints");
    for(pos=ini_pos[1][2];pos<=130;pos++)
    {J_3.write(pos);J_2.write(pos);J_5.write(pos);delay(dly);}
    Serial.println("Lifting Legs");
    for(pos=ini_pos[2][2];pos<=90;pos++)
    {L_3.write(pos);L_2.write(pos);L_5.write(pos);delay(dly);}
    Serial.println("Moving Body");
    for(pos=ini_pos[0][2];pos<=120;pos++)
    {B_3.write(pos);B_2.write(pos);B_5.write(pos);ini_pos[0][1]=120;ini_pos[0][4]=120;ini_pos[0][2]=120;delay(dly);}
    Serial.println("Replacing Legs");
    for(pos=90;pos>=ini_pos[2][2];pos--)
    {L_3.write(pos);L_2.write(pos);L_5.write(pos);delay(dly);}
    Serial.println("Replacing Joints");
    for(pos=130;pos>=ini_pos[1][2];pos--)
    {J_3.write(pos);J_2.write(pos);J_5.write(pos);delay(dly);}
    
   
//   moveleg(1,1,60);
//   moveleg(4,1,60);
//   moveleg(6,1,60);

    for(pos=ini_pos[1][0];pos<=130;pos++)
    {J_1.write(pos);J_4.write(pos);J_6.write(pos);delay(dly);}
    for(pos=ini_pos[2][0];pos<=90;pos++)
    {L_1.write(pos);L_4.write(pos);L_6.write(pos);delay(dly);}
    for(pos=ini_pos[0][0];pos>=60;pos--)
    {B_1.write(pos);B_4.write(pos);B_6.write(pos);ini_pos[0][0]=60;ini_pos[0][3]=60;ini_pos[0][5]=60;delay(dly);}
    for(pos=90;pos>=ini_pos[2][2];pos--)
    {L_1.write(pos);L_4.write(pos);L_6.write(pos);delay(dly);}
    for(pos=130;pos>=ini_pos[1][2];pos--)
    {J_1.write(pos);J_4.write(pos);J_6.write(pos);delay(dly);}
    
   no_of_steps*=-1;
   }
   else
   {
   //moveleg(1,1,120);
   //moveleg(4,1,120);        //Sustenance Of Gait
   //moveleg(6,1,120);

    for(pos=ini_pos[1][0];pos<=130;pos++)
    {J_1.write(pos);J_4.write(pos);J_6.write(pos);delay(dly);}
    for(pos=ini_pos[2][0];pos<=90;pos++)
    {L_1.write(pos);L_4.write(pos);L_6.write(pos);delay(dly);}
    for(pos=ini_pos[0][0];pos<=120;pos++)
    {B_1.write(pos);B_4.write(pos);B_6.write(pos);ini_pos[0][0]=120;ini_pos[0][3]=120;ini_pos[0][5]=120;delay(dly);}
    for(pos=90;pos>=ini_pos[2][0];pos--)
    {L_1.write(pos);L_4.write(pos);L_6.write(pos);delay(dly);}
    for(pos=130;pos>=ini_pos[1][0];pos--)
    {J_1.write(pos);J_4.write(pos);J_6.write(pos);delay(dly);}
    
    
   
   //moveleg(3,1,60);
   //moveleg(2,1,60);
   //moveleg(5,1,60);

    for(pos=ini_pos[1][2];pos<=130;pos++)
    {J_3.write(pos);J_2.write(pos);J_5.write(pos);delay(dly);}
    for(pos=ini_pos[2][2];pos<=90;pos++)
    {L_3.write(pos);L_2.write(pos);L_5.write(pos);delay(dly);}
    for(pos=ini_pos[0][2];pos>=60;pos--)
    {B_3.write(pos);B_2.write(pos);B_5.write(pos);ini_pos[0][1]=60;ini_pos[0][2]=60;ini_pos[0][4]=60;delay(dly);}
    for(pos=90;pos>=ini_pos[2][2];pos--)
    {L_3.write(pos);L_2.write(pos);L_5.write(pos);delay(dly);}
    for(pos=130;pos>=ini_pos[1][2];pos--)
    {J_3.write(pos);J_2.write(pos);J_5.write(pos);delay(dly);}
    
    
   
   no_of_steps*=-1; 
   }
   if(no_of_steps>0) no_of_steps--; else no_of_steps++;
  }
  }

  void gait51()   //5+1 Gait Generation
  {
   /*Description: One Leg moves forward, five legs stay stationary. All legs move sequeniallly, in a clockwise manner. */ 
   stablepos();   //Stabilizing position before commencing gait
   int count,j;
   for(count=1;count<7;count++)         //Initial Gait Pickup
   {
    moveleg(count,1,120);   //Move one motor Forward
    for(j=count-1;j>=0;j--) //Move already moved motors backward in small steps, one step, propelling entire structure forward
    moveleg(j+1,0,10);
   }
   for(count=1;count<7;count++)         //Gait Sustenance
   {
    moveleg(count,1,120);   //Move one motor Forward
    for(j=1;j<=6;j++) //Move already moved motors backward in small steps, one step each time, propelling entire structure forward
    moveleg(j,0,10);
   }
  }

  void gait42()   //4+2 Gait Generation
  {
  /*Description: 2 legs move forward at a time, 4 held stationary. Leg pairs move from forward to backward.*/  
  
  }

  void testall()    //Testing all motors for proper working 
  {
    int temp[3][6];
    for(i=0;i<3;i++)        //Copying initial values of angles to temporary matrix, to be restored later
    for(j=0;j<6;j++)
    temp[i][j]=ini_pos[i][j];
    for(i=0;i<3;i++)
    for(j=0;j<6;j++)        //Setting Initial Positions to 0
    ini_pos[i][j]=0;

    
    movemotor('B',1,90);
    movemotor('B',2,90);
    movemotor('B',3,90);
    movemotor('B',4,90);
    movemotor('B',5,90);
    movemotor('B',6,90);
    movemotor('L',1,90);
    movemotor('L',2,90);
    movemotor('L',3,90);
    movemotor('L',4,90);          //Testing Motor movements
    movemotor('L',5,90);
    movemotor('L',6,90);
    movemotor('J',1,90);
    movemotor('J',2,90);
    movemotor('J',3,90);
    movemotor('J',4,90);
    movemotor('J',5,90);
    movemotor('J',6,90);
 
    for(i=0;i<3;i++)
    for(j=0;j<6;j++)
    ini_pos[i][j]=temp[i][j];         //Restores Initial Matrix Positions
  }

void setup() 
{ 
  Serial.begin(9600);
  B_1.attach(52);
  B_2.attach(46);
  B_3.attach(30);
  B_4.attach(36);
  B_5.attach(24);
  B_6.attach(4);
  
  L_1.attach(50);
  L_2.attach(42);
  L_3.attach(34);
  L_4.attach(40);          //ATTACHING MOTOR VARIABLES TO OUTPUT PINS
  L_5.attach(28);
  L_6.attach(22);
  
  J_1.attach(48);
  J_2.attach(44);
  J_3.attach(32);
  J_4.attach(38);
  J_5.attach(26);
  J_6.attach(2);
//testall();           //Tests all motors from 0-90
stablepos();      //RESETTING MOTOR AT BEGINNING OF PROGRAM TO STABLE STANDING POSITION
//gait51();
gait33(10);
int count=1;
//for(;count<=6;count++)
//{
//  Serial.println("Test Move forwards");moveleg(count,1,120);
//}
//for(count=1;count<=6;count++)
//{
//  Serial.println("Test Move Backwards");moveleg(count,0,90);
//}


}


void loop() 
{
  //void initialpos();
  //void gait33();          //Move in 3-3 Gait
}
