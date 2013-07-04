/**
	http://stackoverflow.com/questions/10874654/boost-date-time-parsing-string
*/


#include <string>
#include <sstream>
#include <iostream>
#include <boost/date_time/local_time/local_time.hpp>

using namespace std;
using namespace boost::local_time;

int main()
{
	stringstream ss;

	// Set up the input datetime format.
	//local_time_input_facet *input_facet = new local_time_input_facet("%Y-%m-%d %H:%M:%S %ZP");
	//local_time_input_facet *input_facet = new local_time_input_facet("%Y-%m-%d %H:%M");
	local_time_input_facet *input_facet = new local_time_input_facet("%Y %m/%e %H:%M");
	ss.imbue(std::locale(ss.getloc(), input_facet));
	local_date_time ldt(not_a_date_time);

	// Read a time into ldt
	//ss.str("2012-06-01 16:45:34 EDT");
	//ss.str("2013-07-04 19:00");
	//ss.str("2013-07-04(¸ñ) 19:00");	 X
	ss.str("2013 07/4 09:59");

	try {
		ss >> ldt;
	} catch (...)
	{
		return 0;
	}

	// Write the time to stdout.
	cout << "Full Time:\t"   << ldt.to_string() << endl;
	cout << "Local time:\t"  << ldt.local_time() << endl;
	cout << "Time zone:\t"   << ldt.zone_as_posix_string() << endl;
	cout << "Zone abbrev:\t" << ldt.zone_abbrev() << endl;
	cout << "Zone offset:\t" << ldt.zone_abbrev(true) << endl;

	return 0;
}