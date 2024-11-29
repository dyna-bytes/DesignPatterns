# 02.Observer/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(WeatherStation C)

# 소스 파일 추가
file(GLOB_RECURSE SOURCES
    "Common/*.c"
    "Display/*.c"
    "Interface/*.c"
    "WeatherData/*.c"
    "main.c")

# 현재 디렉토리를 포함 디렉토리로 설정
include_directories(${CMAKE_SOURCE_DIR})

# 실행 파일 생성
add_executable(WeatherStation ${SOURCES})
