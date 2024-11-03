# 03.Decorator/CMakeLists.txt
project(StarbucksCoffee C)

# 소스 파일 추가
file(GLOB_RECURSE SOURCES
    "beverage.c",
    "blend.c",
    "condiment_decorator.c",
    "main.c")

# 현재 디렉토리를 포함 디렉토리로 설정
include_directories(${CMAKE_SOURCE_DIR})

# 실행 파일 생성
add_executable(StarbucksCoffee ${SOURCES})
