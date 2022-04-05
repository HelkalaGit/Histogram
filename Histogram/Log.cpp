//
//  Log.cpp
//  Histogram
//
//  Created by Joel Helkala on 5.4.2022.
//

#include "Log.hpp"

namespace Hist {
    Logger::Logger() {
    }

Logger::~Logger() {
    std::cout << "logger destroyed" << std::endl;
}
}
