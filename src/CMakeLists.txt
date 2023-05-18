add_library(${EXTENSION_NAME} rng.cpp randomgraphs.cpp)

set_target_properties(${EXTENSION_NAME} PROPERTIES
    LINKER_LANGUAGE CXX
    POSITION_INDEPENDENT_CODE TRUE
)
target_include_directories(${EXTENSION_NAME} PUBLIC
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:include>"
)
target_link_libraries(${EXTENSION_NAME} BaseGraph::core)
