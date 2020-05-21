#pragma once
#include "ComOnline.h"
#include "ComSpec.h"
class ComOnlineSupi :
	virtual public ComOnline, virtual public ComSpec
{
protected:
	void readExtra(istream& in) {
		ComSpec::readExtra(in);
		ComOnline::readExtra(in);
	}
	void displayExtra(ostream& out) const
	{
		ComSpec::displayExtra(out);
		ComOnline::displayExtra(out);
	}
};

