import socket
import threading

# filepath: c:\Users\wkpdd\Desktop\ros_\ros_homework\socket_chat\server.py

def handle_client(client_socket, client_address):
    print(f"[连接建立] {client_address}")
    while True:
        try:
            message = client_socket.recv(1024).decode('utf-8')
            if not message:
                break
            print(f"[{client_address}] {message}")
        except:
            print(f"[连接断开] {client_address}")
            break
    client_socket.close()

def start_server():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.bind(("0.0.0.0", 12345))
    server.listen(5)
    print("[服务器启动] 等待连接...")
    while True:
        client_socket, client_address = server.accept()
        client_thread = threading.Thread(target=handle_client, args=(client_socket, client_address))
        client_thread.start()

if __name__ == "__main__":
    start_server()