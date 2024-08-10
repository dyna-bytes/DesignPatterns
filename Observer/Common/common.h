#ifndef __COMMON_H
#define __COMMON_H

#include <stdio.h>
#include <time.h>
#include <stddef.h>
#include <string.h>

// #define DBGMODE

#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

#define FILENAME (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

// 로그 출력 매크로 정의
#define PRINT(tag, format, ...) \
    printf(" [%s] [%s] [%s:%d] " format "\n", \
            tag, FILENAME, __func__, __LINE__, ##__VA_ARGS__);

// 편의 매크로 정의
#define PRINT_NOTI(format, ...) PRINT("NOTICE", format, ##__VA_ARGS__)
#define PRINT_WARN(format, ...) PRINT("WARNING", format, ##__VA_ARGS__)
#define PRINT_ERR(format, ...)  PRINT("ERROR",  format, ##__VA_ARGS__)
#ifdef DBGMODE
#define PRINT_DBG(format, ...)  PRINT("DEBUG",  format, ##__VA_ARGS__)
#else
#define PRINT_DBG(format, ...)
#endif


#endif