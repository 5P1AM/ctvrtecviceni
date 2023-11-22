#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_(int min, int max) {

     return rand() % (max - min + 1) + min;
}

int main() {

    // Number of records in the dataset
    const int DATASET_SIZE = 100;

    // Seed random number generator with current time
    srand(time(NULL));

	FILE *file = fopen("data.csv", "w");

    fprintf(file, "%s\n", // Dataset header (must match the number of columns)
        "fce1,fce2,třída"
    );

    for (int i = 0; i < DATASET_SIZE; i++) {

        fprintf(file,
            "%d,%d,%s\n",
            random_(0, 10),               //fce1      
            random_(12, 25),                  //fce2
            random_(0, 1) ? "\"y\"" : "\"n\""  //třída
        );
    }
	fclose(file);

    return 0;
}
