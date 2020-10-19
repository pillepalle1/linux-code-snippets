#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
#include<iostream>

void handle_SIGINT(int signal) {
  std::cout << "Received signal "; std::cout << signal; std::cout << "\n";
  exit(0);
}

int main() {
  signal(SIGINT, handle_SIGINT);

  while(1) {
    std::cout << "Hello world"; std::cout << "\n";
    sleep(1);
  }

  return 0;
}

