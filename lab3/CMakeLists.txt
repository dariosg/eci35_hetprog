add_executable(mul_array_sycl mul_array_sycl.cc)
target_include_directories(mul_array_sycl PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(mul_array_sycl_optimized mul_array_sycl_optimized.cc)
target_include_directories(mul_array_sycl_optimized PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
