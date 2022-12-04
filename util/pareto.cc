#include "pareto.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// 	*
// 	 * Create a pareto generator for items between min and max (inclusive) for the specified constant
// 	 * @param min The smallest integer to generate in the sequence.
// 	 * @param max The largest integer to generate in the sequence.



double shape; //initialized in init_pareto_generator function
double mean; //initialized in init_pareto_generator function
long lowerbound; //initialized in init_pareto_generator function
long upperbound; //initialized in init_pareto_generator function

void init_pareto_generator(long min, long max){
    shape = 1.1;
    mean = (min + max) / 2.0;
    lowerbound = min;
    upperbound = max;

	paretoNextValue();
}

long paretoNextLong(){

	double u = (double)rand() / ((double)RAND_MAX);
	// shape is also called 'shape'
    double scale = (mean * (shape - 1)) / shape;
    int ret = (int)(scale / pow(u, 1/shape));
    if(ret < lowerbound)
        return lowerbound;
    else if(ret > upperbound)
        return upperbound;
    else
        return ret;
}

long paretoNextValue() {
	return paretoNextLong();
}


