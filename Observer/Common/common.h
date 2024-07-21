#ifndef __COMMON_H
#define __COMMON_H

#include <stdio.h>
#include <time.h>
#include <stddef.h>

#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

// 로그 출력 매크로 정의
#define PRINT(tag, format, ...) \
    printf(" [%s] [%s:%d] " format "\n", \
            tag, __func__, __LINE__, ##__VA_ARGS__);

// 편의 매크로 정의
#define PRINT_NOTI(format, ...) PRINT("NOTICE", format, ##__VA_ARGS__)
#define PRINT_WARN(format, ...) PRINT("WARNING", format, ##__VA_ARGS__)
#define PRINT_ERR(format, ...)  PRINT("ERROR",  format, ##__VA_ARGS__)



#endif