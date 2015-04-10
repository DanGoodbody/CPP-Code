//Daniel Goodbody
//Summary: Simple Artillery game
//
#include <cmath>
#include <iostream>
#include <ctime>
const int CANNON_BALLS = 10;
const double PI  = 3.141592653589793238463;
const double VELOCITY = 200.0;
const double GRAVITY = 32.2;
const double DEGREES = 180.0;
const int MAX_RANGE = 1000;

void StartUp()
{
   std::cout << "Welcome to Artillery.\n\
You are in the middle of a war and being charged by thousands of enemies.\n\
You have one cannon, which you can shoot at any angle.\n\
You only have 10 cannonballs for this target..\n\
Let's begin...\n\n";
}

int GetDistance(double angle)
{
   double angleR = angle * (PI / DEGREES);
   // angle is the angle the player has entered, converted to radians.
   double time_in_air = (2.0 * VELOCITY * sin(angleR)) / GRAVITY;
   return (int)floor((VELOCITY * cos(angleR)) * time_in_air);
}

int Fire()
{
   int numberKilled = 0;
   srand((unsigned int)time(NULL));
   int distance = rand()%MAX_RANGE;
   std::cout << "The enemy is " << distance << " feet away!!!\n";
   for (int cannonballs = 0, shots = 1; cannonballs < CANNON_BALLS; cannonballs++, shots++)
   {
      double angle;
      std::cout << "What angle? ";
      std::cin >> angle;
      int isHit = GetDistance(angle);
      if (distance == isHit)
      {
         std::cout << "You hit him!!!\n" << "It took you " << shots << " shots.\n";
         numberKilled++;
         break;
      }
      else
      {
         int miss = distance - isHit;
         if (miss < 0)
            std::cout << "You over shot by " << -miss << '\n';
         else
            std::cout << "You under shot by " << miss << '\n';
      }
      
   }
   return numberKilled;
}

int main()
{
   int killed = 0;
   char answer = 'y';
   StartUp();
   do 
   {
      killed = Fire();
      std::cout << "I see another one, are you ready? (Y/N) ";
      std::cin >> answer;
      std::cout << '\n';
   } while (answer != 'n');
   std::cout << "You killed " << killed << " of the enemy.";
}
