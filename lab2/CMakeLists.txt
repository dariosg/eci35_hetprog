add_executable(pi_taylor_serial pi_taylor_serial.cc)
target_include_directories(pi_taylor_serial PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(pi_taylor_sycl pi_taylor_sycl.cc)
target_include_directories(pi_taylor_sycl PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
