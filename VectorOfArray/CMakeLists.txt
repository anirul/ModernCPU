# Vector of Array

add_executable(VectorOfArray
    VectorOfArray.cpp
)

target_link_libraries(VectorOfArray
  PUBLIC
    benchmark::benchmark 
    benchmark::benchmark_main
)