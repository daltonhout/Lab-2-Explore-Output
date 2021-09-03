#include <iostream>

#include <string>

using namespace std;

int main()
{
	// Output schedule to screen
	/* fct = first class time
	*  fcn = first class name
	*  sct = second class time
	*  scn = second class name
	*  tct = third class time
	*  tcn = third class name
	*  lct = last class time
	*  lcn = last class name
	*  tfct = teusday first class time
	*  tfcn = tuesday first class name
	*/ 
	const string m = "Monday";
	const string fct = "10:00";
	const string fcn = "C++ 109";
	cout << m << "\t \t" << fct << "\t" << fcn << endl;
	const string sct = "12:00";
	const string scn = "Elementary Spanish 1 301";
	cout << m << "\t \t" << sct << "\t" << scn << endl;
	const string tct = "2:00";
	const string tcn = "Classical Physics 1 302";
	cout << m << "\t \t" << tct << "\t" << tcn << endl;
	const string t = "Tuesday";
	const string lct = "6:30";
	const string lcn = "The College Experience AUD";
	cout << m << "\t \t" << lct << "\t" << lcn << endl << endl;
	const string tfct = "8:20";
	const string tfcn = "Engineering Problems 109";
	cout << t << "\t \t" << tfct << "\t" << tfcn << endl;
	cout << t << "\t \t" << fct << "\t" << fcn << endl;
	cout << t << "\t \t" << tct << "\t" << tcn << endl << endl;
	const string w = "Wednesday";
	cout << w << "\t" << fct << "\t" << fcn << endl;
	cout << w << "\t" << sct << "\t" << scn << endl;
	cout << w << "\t" << tct << "\t" << tcn << endl << endl;
	const string Th = "Thursday";
	cout << Th << "\t" << tfct << "\t" << tfcn << endl;
	cout << Th << "\t" << fct << "\t" << fcn << endl;
	cout << Th << "\t" << tct << "\t" << tcn << endl << endl;
	const string f = "Friday";
	cout << f << "\t \t" << fct << "\t" << fcn << endl;
	cout << f << "\t \t" << sct << "\t" << scn << endl << endl;
	const string Line1 = "    *      *      *      *";
	cout << Line1 << endl << endl;
	const string Line2 = "*      *      *      *";
	cout << Line2 << endl << endl;
	cout << Line1 << endl << endl;
	cout << Line2 << endl << endl;
	cout << Line1 << endl << endl;
	cout << Line2 << endl << endl;
	cout << Line1 << endl << endl;
	cout << Line2 << endl << endl;
	return 0;
}
