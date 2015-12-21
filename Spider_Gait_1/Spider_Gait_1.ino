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



  int initiateB=90,initiateJ=120,initiateL=10;   //Initial Angle Values
  int ini_pos[6][3];        //Declaration Of Initial(Current) Position Array
  int i=0,j=0,pos=0,dly=10;   //Declaration of Delay Value
 
  
void movemotor(char ident1,int ident2,int fin_ang)    //Moves Motor, Identified and by the Given Angle
{
  switch(ident1)
  {
    case 'B': 
    {
      switch(ident2)
      {
        case '1': {
                    if(ini_pos[0][0]==fin_ang) break;
                    else if(ini_pos[0][0]<fin_ang)
                    for(pos=ini_pos[0][0];pos<=fin_ang;pos++)
                    {
                      B_1.write(pos);delay(dly);
                    }
                    else if(ini_pos[0][0]>fin_ang)
                    for(pos=ini_pos[0][0];pos>=fin_ang;pos--)
                    {
                      B_1.write(pos);delay(dly);
                    }
                    ini_pos[0][0]=fin_ang;break;
                  }
        case '2': {
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
        case '3': {
                    if(ini_pos[0][2]==fin_ang) break;
                    else if(ini_pos[0][2]<fin_ang)
                    for(pos=ini_pos[0][2];pos<=fin_ang;pos++)
                    {
                      B_3.write(pos);delay(dly);
                    }
                    else if(ini_pos[0][2]>fin_ang)
                    for(pos=ini_pos[0][2];pos>=fin_ang;pos--)
                    {
                      B_3.write(pos);delay(dly);
                    }
                    ini_pos[0][2]=fin_ang;break;
                  }
        case '4': {
                    if(ini_pos[0][3]==fin_ang) break;
                    else if(ini_pos[0][3]<fin_ang)
                    for(pos=ini_pos[0][3];pos<=fin_ang;pos++)
                    {
                      B_4.write(pos);delay(dly);
                    }
                    else if(ini_pos[0][3]>fin_ang)
                    for(pos=ini_pos[0][3];pos>=fin_ang;pos--)
                    {
                      B_4.write(pos);delay(dly);
                    }
                    ini_pos[0][3]=fin_ang;break;
                  }
        case '5':{
                    if(ini_pos[0][4]==fin_ang) break;
                    else if(ini_pos[0][4]<fin_ang)
                    for(pos=ini_pos[0][4];pos<=fin_ang;pos++)
                    {
                      B_5.write(pos);delay(dly);
                    }
                    else if(ini_pos[0][4]>fin_ang)
                    for(pos=ini_pos[0][4];pos>=fin_ang;pos--)
                    {
                      B_5.write(pos);delay(dly);
                    }
                    ini_pos[0][4]=fin_ang;break;
                  }
        case '6': {
                    if(ini_pos[0][5]==fin_ang) break;
                    else if(ini_pos[0][5]<fin_ang)
                    for(pos=ini_pos[0][5];pos<=fin_ang;pos++)
                    {
                      B_6.write(pos);delay(dly);
                    }
                    else if(ini_pos[0][5]>fin_ang)
                    for(pos=ini_pos[0][5];pos>=fin_ang;pos--)
                    {
                      B_6.write(pos);delay(dly);
                    }
                    ini_pos[0][5]=fin_ang;break;
                  }
      }
    }
    
    case 'J': 
    {
      switch(ident2)
      {
        case '1': {
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
        case '2': {
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
        case '3': {
                    if(ini_pos[1][2]==fin_ang) break;
                    else if(ini_pos[1][2]<fin_ang)
                    for(pos=ini_pos[1][2];pos<=fin_ang;pos++)
                    {
                      J_3.write(pos);delay(dly);
                    }
                    else if(ini_pos[1][2]>fin_ang)
                    for(pos=ini_pos[1][2];pos>=fin_ang;pos--)
                    {
                      J_3.write(pos);delay(dly);
                    }
                    ini_pos[1][2]=fin_ang;break;
                  }
        case '4': {
                    if(ini_pos[1][3]==fin_ang) break;
                    else if(ini_pos[1][3]<fin_ang)
                    for(pos=ini_pos[1][3];pos<=fin_ang;pos++)
                    {
                      J_4.write(pos);delay(dly);
                    }
                    else if(ini_pos[1][3]>fin_ang)
                    for(pos=ini_pos[1][3];pos>=fin_ang;pos--)
                    {
                      J_4.write(pos);delay(dly);
                    }
                    ini_pos[1][3]=fin_ang;break;
                  }
        case '5':{
                    if(ini_pos[1][4]==fin_ang) break;
                    else if(ini_pos[1][4]<fin_ang)
                    for(pos=ini_pos[1][4];pos<=fin_ang;pos++)
                    {
                      J_5.write(pos);delay(dly);
                    }
                    else if(ini_pos[1][4]>fin_ang)
                    for(pos=ini_pos[1][4];pos>=fin_ang;pos--)
                    {
                      J_5.write(pos);delay(dly);
                    }
                    ini_pos[1][4]=fin_ang;break;
                  }
        case '6': {
                    if(ini_pos[1][5]==fin_ang) break;
                    else if(ini_pos[1][5]<fin_ang)
                    for(pos=ini_pos[1][5];pos<=fin_ang;pos++)
                    {
                      J_6.write(pos);delay(dly);
                    }
                    else if(ini_pos[1][5]>fin_ang)
                    for(pos=ini_pos[1][5];pos>=fin_ang;pos--)
                    {
                      J_6.write(pos);delay(dly);
                    }
                    ini_pos[1][5]=fin_ang;break;
                  }
      }
    }
        case 'L': 
    {
      switch(ident2)
      {
        case '1': {
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
        case '2': {
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
        case '3': {
                    if(ini_pos[2][2]==fin_ang) break;
                    else if(ini_pos[2][2]<fin_ang)
                    for(pos=ini_pos[2][2];pos<=fin_ang;pos++)
                    {
                      L_3.write(pos);delay(dly);
                    }
                    else if(ini_pos[2][2]>fin_ang)
                    for(pos=ini_pos[2][2];pos>=fin_ang;pos--)
                    {
                      L_3.write(pos);delay(dly);
                    }
                    ini_pos[2][2]=fin_ang;break;
                  }
        case '4': {
                    if(ini_pos[2][3]==fin_ang) break;
                    else if(ini_pos[2][3]<fin_ang)
                    for(pos=ini_pos[2][3];pos<=fin_ang;pos++)
                    {
                      L_4.write(pos);delay(dly);
                    }
                    else if(ini_pos[2][3]>fin_ang)
                    for(pos=ini_pos[2][3];pos>=fin_ang;pos--)
                    {
                      L_4.write(pos);delay(dly);
                    }
                    ini_pos[2][3]=fin_ang;break;
                  }
        case '5':{
                    if(ini_pos[2][4]==fin_ang) break;
                    else if(ini_pos[2][4]<fin_ang)
                    for(pos=ini_pos[2][4];pos<=fin_ang;pos++)
                    {
                      L_5.write(pos);delay(dly);
                    }
                    else if(ini_pos[2][4]>fin_ang)
                    for(pos=ini_pos[2][4];pos>=fin_ang;pos--)
                    {
                      L_5.write(pos);delay(dly);
                    }
                    ini_pos[2][4]=fin_ang;break;
                  }
        case '6': {
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
      }
    }
  }
}

  void moveleg(int leg, int dir)
  {
    if(dir==1)    //FORWARDS
    switch(leg)
    {
      case 1:{movemotor('J',1,150);movemotor('L',1,60);movemotor('B',1,120);movemotor('L',1,120);movemotor('J',1,120);break;}
      case 2:{movemotor('J',2,150);movemotor('L',2,60);movemotor('B',2,120);movemotor('L',2,120);movemotor('J',2,120);break;}
      case 3:{movemotor('J',3,150);movemotor('L',3,60);movemotor('B',3,120);movemotor('L',3,120);movemotor('J',3,120);break;}
      case 4:{movemotor('J',4,150);movemotor('L',4,60);movemotor('B',4,120);movemotor('L',4,120);movemotor('J',4,120);break;}
      case 5:{movemotor('J',5,150);movemotor('L',5,60);movemotor('B',5,120);movemotor('L',5,120);movemotor('J',5,120);break;}
      case 6:{movemotor('J',6,150);movemotor('L',6,60);movemotor('B',6,120);movemotor('L',6,120);movemotor('J',6,120);break;}
    }
    else if(dir==0)     //BACKWARDS
    switch(leg)
    {
      case 1:{movemotor('J',1,150);movemotor('L',1,60);movemotor('B',1,-120);movemotor('L',1,120);movemotor('L',1,120);break;}
      case 2:{movemotor('J',2,150);movemotor('L',2,60);movemotor('B',2,-120);movemotor('L',2,120);movemotor('L',2,120);break;}
      case 3:{movemotor('J',3,150);movemotor('L',3,60);movemotor('B',3,-120);movemotor('L',3,120);movemotor('L',3,120);break;}
      case 4:{movemotor('J',4,150);movemotor('L',4,60);movemotor('B',4,-120);movemotor('L',4,120);movemotor('L',4,120);break;}
      case 5:{movemotor('J',5,150);movemotor('L',5,60);movemotor('B',5,-120);movemotor('L',5,120);movemotor('L',5,120);break;}
      case 6:{movemotor('J',6,150);movemotor('L',6,60);movemotor('B',6,-120);movemotor('L',6,120);movemotor('L',6,120);break;}
    }
  }

void initialpos()
{
//Setting Motors to Initial Angle
      for(pos=0; pos <= initiateB; pos += 1)
      {                                  
        B_1.write(pos);    //Body   
        B_2.write(pos);
        B_3.write(pos);
        B_4.write(pos);
        B_5.write(pos);
        B_6.write(pos);
        delay(dly);                    
      } 
      for(i=0;i<6;i++)
      ini_pos[0][i]=initiateB;
    
 

      for(pos=0; pos <= initiateJ; pos += 1)
      {                                  
        J_1.write(pos);    //Joint
        J_2.write(pos);
        J_3.write(pos);
        J_4.write(pos);
        J_5.write(pos);
        J_6.write(pos);
        delay(dly);                    
      } 
      for(i=0;i<6;i++)
      ini_pos[1][i]=initiateJ;
   
  
  
 
      for(pos=0; pos <= initiateL; pos += 1)
      {                                  
        L_1.write(pos);    //Leg
        L_2.write(pos);
        L_3.write(pos);
        L_4.write(pos);
        L_5.write(pos);
        L_6.write(pos);
        delay(dly);                    
      } 
      for(i=0;i<6;i++)
      ini_pos[2][i]=initiateL;
    
 }

  void gait33()   //3+3 Gait Generation
  {
   /*Description: Three Legs move forward, three legs stay stationary. Holding and moving in a V formation */
  }

  void gait51()   //5+1 Gait Generation
  {
   /*Description: One Leg moves forward, five legs stay stationary. All legs move sequeniallly. */ 
   moveleg(1,1);
  }

  void gait42()   //4+2 Gait Generation
  {
    
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
  
  L_1.attach(48);
  L_2.attach(44);
  L_3.attach(32);
  L_4.attach(38);          //ATTACHING MOTOR VARIABLES TO OUTPUT PINS
  L_5.attach(26);
  L_6.attach(2);
  
  J_1.attach(50);
  J_2.attach(42);
  J_3.attach(34);
  J_4.attach(40);
  J_5.attach(28);
  J_6.attach(22);
  
void initialpos();      //RESETTING MOTOR AT BEGINNING OF PROGRAM
void gait33();
void gait51();
void gait42();
}


void loop() 
{
  void initialpos();
}
