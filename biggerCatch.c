/*
Three fishermen puzzler for more possible catch sizes
*/
//------------------------------------------------------------------------------------------------------------------120
#include<stdio.h>

#define NUMBER_OF_FISHERMEN 3
#define DISCARDED_FISH 1

int main(void) {

	int fisherman1 = 0;
	int fisherman2 = 0;
	int fisherman3 = 0;
	int totalCatch = 0;
	int leftToRot = 0;

	for (int i = 0; i < 10; ++i) {

		for (totalCatch = totalCatch; totalCatch < 1000; ++totalCatch) {

			if ((totalCatch - DISCARDED_FISH) % 3 == 0) {fisherman1 = (totalCatch - DISCARDED_FISH) / 
					NUMBER_OF_FISHERMEN;

				if ((totalCatch - DISCARDED_FISH - fisherman1 - DISCARDED_FISH) % 3 == 0) {fisherman2 = (totalCatch - 
						DISCARDED_FISH - fisherman1 - DISCARDED_FISH) / NUMBER_OF_FISHERMEN;

					if ((totalCatch - DISCARDED_FISH - fisherman1 - DISCARDED_FISH - fisherman2 - DISCARDED_FISH) 
							% 3 == 0) {
						fisherman3 = (totalCatch - DISCARDED_FISH - fisherman1 - DISCARDED_FISH - fisherman2 - 
							DISCARDED_FISH) / NUMBER_OF_FISHERMEN;
					}
				}

			leftToRot = totalCatch - DISCARDED_FISH - fisherman1 - DISCARDED_FISH - fisherman2 - DISCARDED_FISH - 
				fisherman3;
			
				if (fisherman3 != 0) {
					printf("\n");
					printf("Total catch: %d\n", totalCatch);
					printf("1st Fisherman: %d\n", fisherman1);
					printf("2nd Fisherman: %d\n", fisherman2);
					printf("3rd Fisherman: %d\n", fisherman3);
					printf("Fish left to rot: %d\n", leftToRot);
					printf("\n");
				}	
			}

			fisherman3 = 0;
			totalCatch++;
		}
	}
}