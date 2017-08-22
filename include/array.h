#include <string.h>
//Arrays

#define 空数组 []
#define 数组(x) [x]
#define 第(x) [x-1]
#define 定义整数数组(x,len) int x[len]
#define 数组的第(x) [x-1]

#define 初始化数组(x,len,val) for(int __i=0;__i<len;__i++) x[__i]=val;
#define 快速初始化数组(x,len,val) memset(x,val,sizeof(x))