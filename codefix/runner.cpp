#include "logger.h"
#include <iostream>


int main() {
    
    int a = 5;
    const char* name = "John";

    Logger::set_priority(TracePriority);

    Logger::Trace("Log test %d %s", a, name);
    Logger::Debug("Log test %d %s", a, name);
    Logger::Info("Log test %d %s", a, name);
    Logger::Warn("Log test %d %s", a, name);
    Logger::Critical("Log test %d %s", a, name);
    Logger::Error("Log test %d %s", a, name);

    return 0;
}