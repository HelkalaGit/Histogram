//
//  RandomEintegerGenerator.hpp
//  Histogram
//
//  Created by Joel Helkala on 5.4.2022.
//

#ifndef RandomEintegerGenerator_h
#define RandomEintegerGenerator_h

#include <stdio.h>
#include "HistogramBase.h"

namespace Hist {

    class RandomEIntegerGenerator : public RandomEintegerGeneratorBase {
        EInteger operator()();
    };

}
#endif /* RandomEintegerGenerator_h */
