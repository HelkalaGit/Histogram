//
//  Histogram.h
//  Histogram
//
//  Created by Joel Helkala on 5.4.2022.
//

#ifndef Histogram_h
#define Histogram_h
#include "HistogramBase.h"

namespace Hist {
    class Histogram : public HistogramBase {
    public:
        ~Histogram();
        void add(EInteger);
        EInteger getMode();
        EInteger getMinValue();
        EInteger getMaxValue();
    };
}

#endif /* Histogram_h */
