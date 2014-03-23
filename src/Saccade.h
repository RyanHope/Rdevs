
#ifndef __Saccade_h_
#define __Saccade_h_
#include "adevs.h"

struct Saccade
{
	int id;
	int cancelations;
	double labile_start;
	double labile_stop;
	double nonlabile_start;
	double nonlabile_stop;
	double exec_start;
	double exec_stop;
	double fixation_duration;
	Saccade(int i):
		cancelations(0),
		labile_start(0.0),
		labile_stop(0.0),
		nonlabile_start(0.0),
		nonlabile_stop(0.0),
		exec_start(0.0),
		exec_stop(0.0),
		fixation_duration(0.0)
	{
		id = i;
	}
};

typedef adevs::PortValue<Saccade*> IO_Type;

#endif
