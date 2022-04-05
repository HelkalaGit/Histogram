//
//  Histogram.h
//  Histogram
//
//  Created by Joel Helkala on 5.4.2022.
//

#ifndef Histogram_h
#define Histogram_h
#include "HistogramBase.h"
#include <iostream>
#include <vector>

namespace Hist {
    class Histogram : public HistogramBase {
    public:
        ~Histogram();
        void add(EInteger);
        EInteger getMode() const;
        EInteger getMinValue() const;
        EInteger getMaxValue() const;
    private:
        std::vector<EInteger> m_elements;
    };
}

#endif /* Histogram_h */
