#include "HistogramBase.h"

namespace Hist {
	/**
	*	Constructor for histogramBase class... but for my knowledge the unique_ptr cant be copied so
	*	I can't set the m_log = logger...
	*/
	HistogramBase::HistogramBase(std::unique_ptr<Logger> logger)
	{
		// m_log = logger;
	}

	/**
	*	Copy constructor, which cannot be implemented because m_log is unique_ptr
	*/
	HistogramBase::HistogramBase(const HistogramBase& other)
	{
		//m_log = other.m_log;
	}

	/**
	*	Move constructor, && means rvalue reference so it's not signed to anything
	*	Set the others logger to this one and set others logger then to nullptr.
	*/
	HistogramBase::HistogramBase(HistogramBase&& other) noexcept
	{
		//m_log = other.m_log;
		//other.m_log = nullptr;
	}

	/**
	*	base destructor because this wasnt a pure virtual function
	* No need to free memory if smart pointers are used
	*/
	HistogramBase::~HistogramBase()
	{
		
	}
}