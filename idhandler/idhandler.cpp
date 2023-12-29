#include "idhandler.h"
#include <iostream>
#include <fstream>
//#include <math.h>

// Dynamically bounded intervals
#include <boost/icl/discrete_interval.hpp>



// Statically bounded intervals
//#include <boost/icl/right_open_interval.hpp>
//#include <boost/icl/left_open_interval.hpp>
#include <boost/icl/closed_interval.hpp>
//#include <boost/icl/open_interval.hpp>


//#include <boost/icl/rational.hpp>

using namespace std;
using namespace boost;

void readIdIntervals(interval_set<int>& intervalSetofSecret, string filename)
{
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        cerr << filename << " file not found!\n";
    }
    int a, b;
    while (infile >> a >> b)
    {
        intervalSetofSecret.add(construct<discrete_interval<int> >(a, b, interval_bounds::closed()));
    }
}