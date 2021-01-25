# Benchmark Aliasing

add_executable(MemoryAliasing
    MemoryAliasing.cpp
)

target_link_libraries(MemoryAliasing
  PUBLIC
    benchmark::benchmark 
    benchmark::benchmark_main
)