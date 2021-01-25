# Matrix

add_executable(Matrix
    Matrix.cpp
)

target_link_libraries(Matrix
  PUBLIC
    benchmark::benchmark 
    benchmark::benchmark_main
)