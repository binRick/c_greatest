#include "greatest/greatest.h"
#include <time.h>
#include <unistd.h>

void __attribute__((destructor)) __greatest_test_destructor(){
}

TEST t_0(void){
  PASS();
  ASSERT_EQ(1, 0);
  FAIL();
}

TEST t_1(void){
  ASSERT_EQ(0, 0);
  PASS();
}

TEST t_2(void){
  ASSERT_EQ(0, 0);
  SKIP();
}

SUITE(s_0){
  RUN_TEST(t_0);
  RUN_TEST(t_1);
  RUN_TEST(t_2);
}

GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
  GREATEST_MAIN_BEGIN();
  RUN_SUITE(s_0);
  GREATEST_MAIN_END();
  return(0);
}
