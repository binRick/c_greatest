#include <ctype.h>
#include <dirent.h>
#include <getopt.h>
#include <libgen.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
//////////////////////////////////
#include "greatest/greatest.h"
#include "parson.h"
extern greatest_run_info greatest_info;

int greatest_export(void){
  puts("ok");
  return(0);
}

char *greatest_get_json_report(){
  char        *s           = NULL;
  JSON_Value  *root_value  = json_value_init_object();
  JSON_Object *root_object = json_value_get_object(root_value);

/*  json_object_dotset_number(root_object, "suite.tests_run", greatest_info.suite.tests_run);
 * json_object_dotset_number(root_object, "suite.passed", greatest_info.suite.passed);
 * json_object_dotset_number(root_object, "suite.skipped", greatest_info.suite.skipped);
 * json_object_dotset_number(root_object, "suite.failed", greatest_info.suite.failed);*/
  json_object_dotset_number(root_object, "tests_run", greatest_info.tests_run);
  json_object_dotset_number(root_object, "assertions", greatest_info.assertions);
  json_object_dotset_number(root_object, "pid", getpid());
  json_object_dotset_number(root_object, "time.end", greatest_info.end);
  json_object_dotset_number(root_object, "time.begin", greatest_info.begin);
  json_object_dotset_number(root_object, "terminal.width", greatest_info.width);
  json_object_dotset_number(root_object, "end", greatest_info.end);
  json_object_dotset_number(root_object, "duration.ms", GREATEST_CLOCK_DIFF(greatest_info.begin, greatest_info.end));

  s = json_serialize_to_string_pretty(root_value);
  return(s);
}
