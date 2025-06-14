import socket
import threading

# filepath: c:\Users\wkpdd\Desktop\ros_\ros_homework\socket_chat\client.py

def receive_messages(client_socket):
    while True:
        try:
            message = client_socket.recv(1024).decode('utf-8')
            if not message:
                break
            print(f"[收到消息] {message}")
        except:
            print("[连接断开]")
            break

def send_messages(client_socket):
    while True:
        message = input("[发送消息] ")
        client_socket.send(message.encode('utf-8'))

def start_client():
    client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client.connect(("127.0.0.1", 12345))
    print("[连接服务器成功]")

    # 启动接收消息线程
    receive_thread = threading.Thread(target=receive_messages, args=(client,))
    receive_thread.start()

    # 启动发送消息线程
    send_thread = threading.Thread(target=send_messages, args=(client,))
    send_thread.start()

if __name__ == "__main__":
    start_client()