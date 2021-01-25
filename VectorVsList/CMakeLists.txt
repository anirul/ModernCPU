# Vector vs List

add_executable(VectorVsList
    VectorVsList.cpp
)

target_link_libraries(VectorVsList
  PUBLIC
    benchmark::benchmark 
    benchmark::benchmark_main
)