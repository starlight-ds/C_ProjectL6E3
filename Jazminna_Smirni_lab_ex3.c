/*
 * Jazminna_Smirni_lab_ex3.c
 *
 *  Created on: Mar 26, 2024
 *      Author: jsmirni
 */

#include <stdio.h>

typedef enum {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} month_t;
int
main(void)
{
	month_t cur_month = JUNE;

			if (cur_month == 1){

				printf("Happy New Year\n");
			}
			else if (cur_month == 6){

				printf("Summer begins\n");
			}
			else if (cur_month == 9){

				printf("Back to school\n");
			}
			else if (cur_month == 12){
				printf("Happy Holidays\n");
			}

	switch (cur_month) {
	case 1:
		printf("Happy New Year\n");
		break;
	case 6:
		printf("Summer begins\n");
		break;
	case 9:
		printf("Back to school\n");
		break;
	case 12:
		printf("Happy Holidays\n");
		break;
	default:
		break;

	}

	return 0;
}



