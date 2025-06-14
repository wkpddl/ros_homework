import socket

# filepath: c:\Users\wkpdd\Desktop\ros_\ros_homework\发布器订阅器\subscriber.py

def start_subscriber():
    host = "127.0.0.1"
    port = 12345

    # 创建套接字并绑定端口
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind((host, port))
    server_socket.listen(1)
    print("[Subscriber] 等待消息...")

    while True:
        client_socket, client_address = server_socket.accept()
        print(f"[Subscriber] 接收到连接: {client_address}")

        # 接收消息
        message = client_socket.recv(1024).decode('utf-8')
        print(f"[Subscriber] 收到消息: {message}")

        # 解析消息
        try:
            float_data, string_data = message.split(",")
            print(f"[Subscriber] 浮点数: {float(float_data)}, 字符串: {string_data}")
        except ValueError:
            print("[Subscriber] 消息格式错误")

        client_socket.close()

if __name__ == "__main__":
    start_subscriber()