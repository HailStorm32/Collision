
#include "Accel_Read.h"


int movement = 0;

task Collision()

{

	StartTask(Accel_Read);


	while(true)

	{

		if(X > 80)

		{

			movement = 1;

			while(X !< -39)

			{

				return(movement);
			}

		}


		movement = 2;

		return(movement);



		if(X > 1 && < 12)

		{

			movement = 0;

			return(movement);

		}

	}


}
