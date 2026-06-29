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

    clock_t start_build;
    clock_t end_build;

    clock_t start_process;
    clock_t end_process;

    clock_t start_reduce;
    clock_t end_reduce;

    double elapsed_total;
    double elapsed_build;
    double elapsed_process;
    double elapsed_reduce;

    unsigned long checksum;

    initialize_data();

    start = clock();

    start_build = clock();
    build_dataset();
    end_build = clock();
    elapsed_build = (double)(end_build - start_build) / CLOCKS_PER_SEC;

    start_process = clock();
    process_dataset();
    end_process = clock();
    elapsed_process = (double)(end_process - start_process) / CLOCKS_PER_SEC;

    start_reduce = clock();
    checksum = reduce_checksum();
    end_reduce = clock();
    elapsed_reduce = (double)(end_reduce - start_reduce) / CLOCKS_PER_SEC;

    end = clock();
    elapsed_total = (double)(end - start) / CLOCKS_PER_SEC;

    printf("TOTAL seconds: %.6f\n", elapsed_total);
    printf("BUILD_DATA seconds: %.6f\n", elapsed_build);
    printf("PROCESS seconds: %.6f\n", elapsed_process);
    printf("REDUCE seconds: %.6f\n", elapsed_reduce);

    return (0);
}
