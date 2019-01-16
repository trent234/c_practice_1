//this is project 1 of a c practice series 
//author: trent wilson
//date: 1/14/2019
//see README for assignment details

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592
#define G (6.67 * pow(10,-11))

void newton () {
   char charTemp[10] = "";
   float mass = 0;
   float acceleration = 0;
   float force = 0;

   printf("What is the mass?\n");
   fgets(charTemp, 10, stdin); 
   mass = atof(charTemp);

   printf("what is the acceleration?\n");
   fgets(charTemp, 10, stdin); 
   acceleration = atof(charTemp);

   force = mass * acceleration;
   printf("The resulting force is %f\n\n",force);
   
   return;
}

void cylinder(){
   char charTemp[10] = "";
   float radius = 0;
   float height = 0;
   float volume = 0;

   printf("What is the radius?\n");
   fgets(charTemp, 10, stdin); 
   radius = atof(charTemp);

   printf("what is the height?\n");
   fgets(charTemp, 10, stdin); 
   height = atof(charTemp);

   volume = PI * pow(radius,2) * height;
   printf("The resulting volume is %f\n\n",volume);
   
   return;
}

void char_encode(){
   char inputChar = ' ';
   char a = 'a';
   char A = 'A';

   printf("What is the character to encode?\n");
   inputChar = getchar();   
   
   char encodedChar = (inputChar - a) + A;

   printf("The resulting encoded character is %c\n\n",encodedChar);

   return;
}

void gravity(){
   char charTemp[10] = "";
   float mass1 = 0;
   float mass2 = 0;
   float distance = 0;
   float force = 0;

   printf("What is the mass1?\n");
   fgets(charTemp, 10, stdin); 
   mass1 = atof(charTemp);

   printf("what is the mass2?\n");
   fgets(charTemp, 10, stdin); 
   mass2 = atof(charTemp);

   printf("what is the distance?\n");
   fgets(charTemp, 10, stdin); 
   distance = atof(charTemp);
  
   force = G * mass1 * mass2 / pow(distance,2);

   printf("The resulting force is %f\n\n",force);
   
   return;
}

void resistive_divider(){
   char charTemp[10] = "";
   float r1 = 0;
   float r2 = 0;
   float vin = 0;
   float vout = 0;

   printf("What is the resistor 1 value?\n");
   fgets(charTemp, 10, stdin); 
   r1 = atof(charTemp);

   printf("What is the resistor 2 value?\n");
   fgets(charTemp, 10, stdin); 
   r2 = atof(charTemp);

   printf("What is the voltage in value?\n");
   fgets(charTemp, 10, stdin); 
   vin = atof(charTemp);
   
   vout = (r2 / (r1 + r2)) * vin;

   printf("The resulting voltage out is %f\n\n",vout);
   
   return;
}

void dist_two_pts(){
   char charTemp[10] = "";
   float x1 = 0;
   float x2 = 0;
   float y1 = 0;
   float y2 = 0;
   float distance = 0;

   printf("What is x1?\n");
   fgets(charTemp, 10, stdin); 
   x1 = atof(charTemp);

   printf("What is x2?\n");
   fgets(charTemp, 10, stdin); 
   x2 = atof(charTemp);

   printf("What is y1?\n");
   fgets(charTemp, 10, stdin); 
   y1 = atof(charTemp);
   
   printf("What is y2?\n");
   fgets(charTemp, 10, stdin); 
   y2 = atof(charTemp);
   
   distance = sqrt(pow((x1 + x2),2) + pow(y1 + y2,2));

   printf("The resulting distance is %f\n\n",distance);
   
   return;
}

void gen_eq(){
   char charTemp[10] = "";
   float x = 0;
   float z = 0;
   int a = 0;
   float y = 0;

   printf("What is x?\n");
   fgets(charTemp, 10, stdin); 
   x = atof(charTemp);

   printf("What is z?\n");
   fgets(charTemp, 10, stdin); 
   z = atof(charTemp);

   printf("What is a?\n");
   fgets(charTemp, 10, stdin); 
   a = atoi(charTemp);
   
   y = (float)89 / 27 - z * a / (a % 2); 

   printf("The result is %f\n\n",y);
   
   return;
}

int main(){
   int exit = 0;
   char charTemp[10] = "";

   while (exit != -1){
      printf("~~~~Equation Evaluator Menu~~~~\n");
      printf("Select one of the options below (1-7)\n");
      printf("1) Newton's Second Law of Motion\n");
      printf("2) Volume of a cylinder\n");
      printf("3) Character encoding\n");
      printf("4) Gravity\n");
      printf("5) Resistive divider\n");
      printf("6) Distance between two points\n");
      printf("7) General Equation\n");
      printf("-1) Exit\n");
      
      fgets(charTemp, 10, stdin); 
      //printf("char input is %s\n",charTemp);

      exit = atoi(charTemp); 
      //printf("The input in int form is %i.\n",exit);
   
      switch(exit){
         case (1) :
	    newton();
	    break;
         case (2) :
	    cylinder();
	    break;
         case (3) :
            char_encode();
	    break;
         case (4) :
	    gravity(); 
	    break;
         case (5) :
	    resistive_divider(); 
	    break;
         case (6) :
	    dist_two_pts();
	    break;
         case (7) :
	    gen_eq();
	    break;
      }
   }
   
   return 0;
}
