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
	double bt_seconds;
	double r_seconds;
	double p_seconds;
	double total_seconds;

	build_dataset();
	process_dataset();
	checksum = reduce_checksum();

	start = clock();
	bt_seconds = build_dataset();
	end = clock();
	total_seconds = (double)(end - start) / (double)CLOCKS_PER_SEC;

	start = clock();
	p_seconds = process_dataset();
	end = clock();
	r_seconds = (double)(end - start) / (double)CLOCKS_PER_SEC;

	if (checksum == 0ul)
		printf("impossible\n");

	printf("TOTAL seconds: %.6f\n", total_seconds);
	printf("BUILD_DATA seconds: %d\n", bt_seconds);
	printf("PROCESS seconds: %d\n", p_seconds);
	printf("REDUCE seconds: %.6f\n", r_seconds);

	return (0);
}
