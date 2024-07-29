import socket

def run_server():
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    host = "127.0.0.6"
    port = 8000
    server_socket.bind((host,port))
    server_socket.listen(0)
    print(f"server is running on {host},{port}")
    client_socket, client_address = server_socket.accept()
    print(f"connection from {client_address}:{client_socket}")
    message = client_socket.recv(1024).decode()
    print(f"received message: {message}")
    client_socket.close()
    print("Connection to client closed")
    socket.close()
run_server()