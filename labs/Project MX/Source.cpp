#include <string>

/*
Players with damage at or above 100 will experience Rage.
It has several effects but primarily it increases the knockback
modifier m by 0.1 (10%).
*/
bool rage() //Player X
{
	//if (X.getDamage() >= 100.0)
		//return true;
	return false;
}

/*
Crouching is an action state in which the character crouches
to shorten their hurtbox. Additionally, it reduces the knockback
modifier m by 0.2 (20%).
*/
bool isCrouching() //Player X
{
	//if (X.getActionState() == "crouch")
		//return true;
	return false;
}

/*
This function is an essential component of the game that primarily
determines the force Player y will experience when hit by an attack
from Player X. The velocity set to a player is a but lower, but Hitstun
will be determined by this formula, so it is important to keep them seperate.
*/
double knockback(double p, double d, int w, int s, int b) //, Player X, Player Y
{
	double kb = 0.0;
	double m = 1.0;
	//if (rage(Y))
		//m += 0.1;
	//if (isCrouching(Y))
		//m -= 0.2;
	kb = (((2 * p + p * d) / 20) * (300 / (w + 100)) * s + b) * m;
	return kb;
}

/*
This is the standard method of applying velocity to a player with
knockback. The value determined by knockback will 
*/
void setVelocity(double kb)
{

}

int main()
{
	return 0;
}