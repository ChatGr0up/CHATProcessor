file(GLOB_RECURSE MAIN_SRC "*.cpp")

add_executable(CHATProcessor ${MAIN_SRC})

target_link_libraries(CHATProcessor
    PRIVATE
        ModuleController
        LockFreeMPSCLogger              
        CHATCBBThirdPartyDepends     
)

target_include_directories(CHATProcessor
    PRIVATE
        ${PROJECT_ROOT}/CHATProcessor
        ${PROJECT_ROOT}/CHATCBBCommon
)
