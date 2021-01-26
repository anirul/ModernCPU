# Branch Optimization

add_executable(BranchOptimization
    BranchOptimization.cpp
)

target_link_libraries(BranchOptimization
  PUBLIC
    benchmark::benchmark 
    benchmark::benchmark_main
)