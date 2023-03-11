find_package(pybind11 REQUIRED)

pybind11_add_module(_${EXTENSION_NAME} MODULE pybind.cpp)
target_link_libraries(_${EXTENSION_NAME} PRIVATE ${EXTENSION_NAME} BaseGraph::core)

install(TARGETS _${EXTENSION_NAME} DESTINATION ./basegraph/random)
install(FILES random/__init__.py DESTINATION ./basegraph/random)
