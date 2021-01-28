# Floyd Warshall

add_executable(FloydWarshall
    FloydWarshall.cpp
)

target_link_libraries(FloydWarshall
  PUBLIC
    benchmark::benchmark 
    benchmark::benchmark_main
)