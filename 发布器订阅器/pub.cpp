#include <iostream>
#include <string>
#include <boost/asio.hpp>

// filepath: c:\Users\wkpdd\Desktop\ros_\ros_homework\发布器订阅器\publisher.cpp

using boost::asio::ip::tcp;

void send_message(const std::string& host, const std::string& port, const std::string& message) {
    boost::asio::io_context io_context;

    // 创建连接到订阅器的套接字
    tcp::resolver resolver(io_context);
    tcp::resolver::results_type endpoints = resolver.resolve(host, port);
    tcp::socket socket(io_context);
    boost::asio::connect(socket, endpoints);

    // 发送消息
    boost::asio::write(socket, boost::asio::buffer(message));
    std::cout << "[Publisher] 已发送消息: " << message << std::endl;
}

int main() {
    std::string host = "127.0.0.1";
    std::string port = "12345";

    // 测试发送消息
    send_message(host, port, "42.5,Hello from Publisher!");
    return 0;
}