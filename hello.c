#include <stdio.h>

int main(int argc, char** argv) {
  puts ("Hello, world!");
  for_hello();
  while_hello();
  return 0;
}

int for_hello(){
  for (int x = 0; x < 5; x++){
    puts ("Hello, world");
  }
  return 0;
}

int while_hello(){
  int x = 0;
  while (x < 5){
    puts ("Hello, world");
    x++;
  }
  return 0;
}

