#include <string.h>
//Arrays

#define ������ []
#define ����(x) [x]
#define ��(x) [x-1]
#define ������������(x,len) int x[len]
#define ����ĵ�(x) [x-1]

#define ��ʼ������(x,len,val) for(int __i=0;__i<len;__i++) x[__i]=val;
#define ���ٳ�ʼ������(x,len,val) memset(x,val,sizeof(x))