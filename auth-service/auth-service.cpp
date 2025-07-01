#include "crow_all.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/register").methods("POST" _method)([](const crow::request& request){
        auto body = crow::json::load(request.body);
        if(!body) {
            return crow::response(400);
        }
        std::string username = body["username"].s();
        std::string password = body["password"].s();

        //Save to POSTGRESQL Database


        return crow::response(201, "User registered successfully");

    })
    app.port(8080).multithreaded.run();
    return 0;
}