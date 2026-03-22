cmake_minimum_required(VERSION 3.20)
project(CP_Workspace)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE ALL_SOURCES "*.cpp")

foreach(sourcefile ${ALL_SOURCES})
    # 1. Get relative path
    file(RELATIVE_PATH rel_path ${CMAKE_SOURCE_DIR} ${sourcefile})

    # 2. Remove .cpp
    string(REPLACE ".cpp" "" target_name "${rel_path}")

    # 3. Replace slashes with underscores
    string(REPLACE "/" "_" target_name "${target_name}")
    string(REPLACE "\\" "_" target_name "${target_name}")

    # 4. THE MAGIC LINE: Replace anything that is NOT a letter, number, or underscore
    string(REGEX REPLACE "[^a-zA-Z0-9_]" "_" target_name "${target_name}")

    # 5. Create executable
    add_executable(${target_name} ${sourcefile})
endforeach()