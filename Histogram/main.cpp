// Histo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Histogram.h"
#include "Log.h"
#include <memory>


int main()
{
	std::unique_ptr<Logger> logger = std::make_unique<Logger>();
	Hist::Histogram histogram(logger);
}