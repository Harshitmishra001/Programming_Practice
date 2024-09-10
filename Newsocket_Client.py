import socket

def run_client():
    client_socket=socket.socket()
    client_socket.connect(('localhost',8000))
    Name=input("Enter Your Name:")
    client_socket.send(Name.encode())
    serverResponse=client_socket.recv(1024).decode()
    print(serverResponse)
    client_socket.close()
run_client()