#include <csignal> 
#include "ModuleController/ModuleHolder.hpp"
#include "LockFreeMPSCLogger/LogMacro.hpp"

int main() {
    CBB::ModuleController::ModuleHolder::instance().init();
    LOG_INFO("CHATProcessor started. waiting for termination signal...");
    sigset_t mask;
    sigemptyset(&mask);
    sigaddset(&mask, SIGINT);
    sigaddset(&mask, SIGTERM);
    sigprocmask(SIG_BLOCK, &mask, nullptr);
    int sig{0};
    sigwait(&mask, &sig);
    CBB::ModuleController::ModuleHolder::instance().cleanup(sig);
    return 0;
}