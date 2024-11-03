# CMake의 최소 요구 버전 설정
cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름과 사용 언어 설정
project(SimUduck C)

# 현재 디렉터리를 포함 디렉터리로 설정
include_directories(${CMAKE_SOURCE_DIR})

# 소스 파일과 헤더 파일을 리스트에 추가
set(SOURCES
    DuckClass/Duck.c
    DuckClass/MallardDuck.c
    FlyBehaviorInterface/FlyBehavior.c
    FlyBehaviorInterface/FlyWithWings.c
    FlyBehaviorInterface/FlyNoWay.c
    QuackBehaviorInterface/QuackBehavior.c
    QuackBehaviorInterface/Quack.c
    QuackBehaviorInterface/MuteQuack.c
    main.c)

# 실행 파일 생성
add_executable(SimUduck ${SOURCES})
