
#include "Accel_Read.h"


int movement = 0;

task Collision()

{


	StartTask(Accel_Read);


	wait1Msec(5);

	while(true)

	{

		if(X > 80)

		{

			movement = 1;

			//	movement = 0;

			//while(X != -35)

			//{
			//	movement = 1;

			//}

		}

		else if(X < -35)

		{

			movement = 2;


		}


		wait1Msec(5);

	}



}
