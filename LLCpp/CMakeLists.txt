# CMakeList.txt : CMake project for LLCpp, include source and define
# project specific logic here.
#

configure_file (grades.txt ${CMAKE_CURRENT_BINARY_DIR}/grades.txt COPYONLY)

# Add source to this project's executable.
add_executable (LLCpp "LLCpp.cpp" "LLCpp.h" "Cow.h" "Cow.cpp" "StudentRecords.h" "StudentRecords.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET LLCpp PROPERTY CXX_STANDARD 20)
endif()
