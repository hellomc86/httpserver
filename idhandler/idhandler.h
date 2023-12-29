#include <string>
#include <boost/icl/interval_set.hpp>
using namespace boost::icl;
void readIdIntervals(interval_set<int>& intervalSetofSecret, std::string filename = "ids.txt");