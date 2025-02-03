#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int usermove, compmove;

    srand(time(NULL));

    while (1) {
	printf("\n Enter your move: \t 0 For Rock\t 1 For Paper \t 2 Scissor \t 9 to Exit: ");
	scanf("%d", &usermove);

	if (usermove == 9) {
	    exit(0);
	} else if (usermove >= 0 && usermove <= 2) {
	    compmove = rand() % 3;

	    switch (usermove) {
		case 0:
		    switch (compmove) {
			case 0:
			    printf("\n It's a draw! \t Rock vs. Rock");
			    break;
			case 1:
			    printf("\n The Mighty computer has bested you! \t Paper Beats Rock");
			    break;
			case 2:
			    printf("\n You have defeated the computer! \t Rock Beats Scissor");
			    break;
		    }
		    break;
		case 1:
		    switch (compmove) {
			case 0:
			    printf("\n You have defeated the computer! \t Paper Beats Rock");
			    break;
			case 1:
			    printf("\n It's a draw! \t Paper vs. Paper");
			    break;
			case 2:
			    printf("\n The Mighty computer has bested you! \t Scissor Beats Paper");
			    break;
		    }
		    break;
		case 2:
		    switch (compmove) {
			case 0:
			    printf("\n The Mighty computer has bested you! \t Rock Beats Scissor");
			    break;
			case 1:
			    printf("\n You have defeated the computer! \t Scissor Beats Paper");
			    break;
			case 2:
			    printf("\n It's a draw! \t Scissor vs. Scissor");
			    break;
		    }
		    break;
	    }
	} else {
	    printf("Invalid input! Please enter 0, 1, 2, or 9 to exit.");
	}
    }

    return 0;
}