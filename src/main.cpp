#include <iostream>

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "../lib/cpp-httplib/httplib.h"

int main(int argc, const char* argv[]) {
  try
  {
    httplib::Client cli("www.tiktok.com");
    auto res = cli.Get("/@steveplusplus");
    if (res && res->status == 200) {
      std::cout << res->body << std::endl;
    } else {
      std::cout << "Status: " << res << std::endl;
    }

  }
  catch (const std::exception& e)
  {
    std::cerr << "Request failed, error: " << e.what() << std::endl;
  }
}


