#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return (*state);
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
			v = -v;
		dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
		sum = (sum * 131ul) + (unsigned long)dataset[i];

    return (sum);
}

int main(void)
{
	unsigned long checksum;
	clock_t start;
	clock_t end;
	double BT_seconds;
	double R_seconds;
	int P_seconds; TOTAL_seconds;

    /* Students must add clock-based timing and print required lines. */

    build_dataset();
    process_dataset();
    checksum = reduce_checksum();

	start = clock();
	TOTAL_seconds = count_even_naive();
	end = clock();
	BT_seconds (double)(end - start) / (double)CLOCKS_PER_SEC;

	start = clock();
	P_seconds = count_even_single_pass();
	end = clock();
	R_seconds (double)(end - start) / (doube)CLOCKS_PER_SEC;

    if (checksum == 0ul)
		printf("impossible\n");

	printf("TOTAL seconds: %.6f\n", TOTAL_seconds);
	printf("BUILD_DATA seconds: %.6f seconds\n", BT_seconds);
	printf("PROCESS seconds: %.6f\n", P_seconds);
	printf("REDUCE seconds: %.6f\n", R_secondes);

    return (0);
}
