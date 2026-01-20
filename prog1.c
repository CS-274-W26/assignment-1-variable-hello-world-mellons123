#include <stdio.h> // Necessary for printf()
#include <time.h> // time()
#include <stdlib.h> // rand functions

int main() {
	srand(time(NULL));
	int myrand = rand()%11; // sets myrand to random int between 0-10 inclusive
	if (myrand < 5) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand < 10) {
		printf("FRODO LIVES\n");
	} else {
		printf("Larn is the best roguelike\n");
	}
	printf("The random number was %d.\n", myrand);
}
