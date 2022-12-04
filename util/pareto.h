extern double shape; //initialized in init_pareto_generator function
extern double mean; //initialized in init_pareto_generator function
extern long lowerbound; //initialized in init_pareto_generator function
extern long upperbound; //initialized in init_pareto_generator function

void init_pareto_generator(long min, long max);
long paretoNextLong();
long paretoNextValue();
