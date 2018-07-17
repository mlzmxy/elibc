// This example is used to demonstrate the usage of except.
//

#include <stdio.h>
#include "../except.h"

int main(int argc, char *argv[])
{
  int t = 0;

  // 定义一个异常
  Except_T except_zero = {"zero"};

  TRY
    if (t == 0) {
      RAISE(except_zero);  // 引起异常
    }
  EXCEPT(except_zero)
    // 捕获异常，并进行处理
    printf("catch exception.\n");
    t = 1;
  END_TRY;  // 结束异常

  printf("t = %d\n", t);
  
  return 0;
}
