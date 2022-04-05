#include "Histogram.h"
#include <map>

namespace Hist {
	Histogram::~Histogram()
	{
		// default destructor
	}

	/**
	*	Add EInteger to data
	*/
	void Histogram::add(EInteger eInt)
	{
		m_elements.emplace_back(eInt);
	}

	/**
	*	Returns the most frequent EInteger in the set
	*	What to return if empty or same amount of occurancies
	*/
	EInteger Histogram::getMode() const
	{
		std::map<EInteger, int> frequency;
		for (EInteger integer : m_elements) {
			++frequency[integer];
		}

		EInteger mostFrequent = EInteger::One;
		if (frequency[EInteger::Two] > frequency[mostFrequent]) mostFrequent = EInteger::Two;
		if (frequency[EInteger::Three] > frequency[mostFrequent]) mostFrequent = EInteger::Three;
		if (frequency[EInteger::Four] > frequency[mostFrequent]) mostFrequent = EInteger::Four;
		if (frequency[EInteger::Zero] > frequency[mostFrequent]) mostFrequent = EInteger::Zero;
		return mostFrequent;
	}

	/**
	*	Returns the minimun EInteger from the set
	*	What to return if empty?
	*/
	EInteger Histogram::getMinValue() const
	{
		EInteger minValue;
		for (auto& value : m_elements) {
			if (value < minValue) minValue = value;
		}

		return minValue;
	}

	/**
	*	Returns the maximum EInteger from the set
	*/
	EInteger Histogram::getMaxValue() const
	{
		EInteger maxValue;
		for (auto& value : m_elements) {
			if (value > maxValue) maxValue = value;
		}

		return maxValue;
	}
}