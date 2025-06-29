#include "src/HelloController.h"
#include <cstdio>
#include <drogon/drogon.h>

int main() {
  app().registerHandler(
      "/",
      [](const HttpRequestPtr &request,
         std::function<void(const HttpResponsePtr &)> &&callback) {
        LOG_INFO << "connected:" << (request->connected() ? "true" : "false");
        auto resp = HttpResponse::newHttpResponse();
        resp->setBody("Server started");
        callback(resp);
      },
      {Get});
  drogon::app().loadConfigFile("config.json");

  drogon::app().run();
  printf("Server started");
}
