#include "RandomEintegerGenerator.h"
#include <ctime>

namespace Hist {
	EInteger RandomEIntegerGenerator::operator()()
	{
		srand((unsigned)time(0));
		int randomNumber;
		randomNumber = (rand() % 4) + 1;

		switch (randomNumber)
		{
		case 1:
			return EInteger::One;
			break;
		case 2:
			return EInteger::Two;
			break;
		case 3:
			return EInteger::Three;
			break;
		case 4:
			return EInteger::Four;
			break;
		default:
			return EInteger();
			break;
		}
	}
}