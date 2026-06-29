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
	clock_t start;
	clock_t end;

	double total_seconds;
	double bt_seconds;
	double p_seconds;
	double r_seconds;

	unsigned long checksum;

start = clock();
clock_t b_start = clock();
build_dataset();
clock_t b_end = clock();
bt_seconds = (double)(b_end - b_start) / CLOCKS_PER_SEC;

clock_t p_start = clock();
process_dataset();
clock_t p_end = clock();
p_seconds = (double)(p_end - p_start) / CLOCKS_PER_SEC;

clock_t r_start = clock();
checksum = reduce_checksum();
clock_t r_end = clock();
r_seconds = (double)(r_end - r_start) / CLOCKS_PER_SEC;


end = clock();
total_seconds = (double)(end - start) / CLOCKS_PER_SEC;

if (checksum == 0ul)
    printf("impossible\n");

printf("TOTAL seconds: %.6f\n", total_seconds);
printf("BUILD_DATA seconds: %.6f\n", bt_seconds);
printf("PROCESS seconds: %.6f\n", p_seconds);
printf("REDUCE seconds: %.6f\n", r_seconds);

return 0;
}
