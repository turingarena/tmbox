#include <thread>
int main() {
  std::thread t([] {});
  t.join();
}
