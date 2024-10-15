cmake_minimum_required(VERSION 3.5)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set the project name
project (rattish-core VERSION ${RATTISH_VERSION})

# Add an executable
set(SOURCES
    src/command_matrix.c
    src/memory_unit.c
    src/script_loader.c
    src/processor_module.c
    src/_index.c
)

# Add an executable with the above sources
add_executable(rattish-core ${SOURCES})

target_include_directories(rattish-core
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)