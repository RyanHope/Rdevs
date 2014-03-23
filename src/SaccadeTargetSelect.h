
#ifndef __SaccadeTargetSelect_h_
#define __SaccadeTargetSelect_h_
#include "adevs.h"
#include "Saccade.h"

class SaccadeTargetSelect: public adevs::Atomic<IO_Type>
{
	public:
		SaccadeTargetSelect(std::mt19937& twister);
		void delta_int();
		void delta_ext(double e, const adevs::Bag<IO_Type>& xb);
		void delta_conf(const adevs::Bag<IO_Type>& xb);
		void output_func(adevs::Bag<IO_Type>& yb);
		double ta();
		void gc_output(adevs::Bag<IO_Type>& g);
		~SaccadeTargetSelect();
		static const int labile;
		static const int nonlabile;
	private:
		double _mean;
		double _stdev;
		std::mt19937 _twister;
		double _time;
		double _threshold;
		Saccade* _saccade;
};

#endif