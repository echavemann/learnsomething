#include <iostream>
#include <vector>
#include <quill/Quill.h>

int main() {
    //logging setup start
    quill::start();
    quill::Logger *logger = quill::create_logger("RiskTrackingLogger");
    logger->set_log_level(quill::LogLevel::TraceL2);
    // logging setup end
    
    QUILL_LOG_INFO(logger, "Current risk held is {}.", 69);
    return 0;
}
