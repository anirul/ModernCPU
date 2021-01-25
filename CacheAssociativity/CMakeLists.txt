# Cache Associativity

add_executable(CacheAssociativity
    CacheAssociativity.cpp
)

target_link_libraries(CacheAssociativity
  PUBLIC
    benchmark::benchmark 
    benchmark::benchmark_main
)