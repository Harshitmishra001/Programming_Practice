import socket
server_socket=socket.socket()
server_socket.bind(('localhost', 8000))
server_socket.listen(5)
print("Server is Listening!")
while True:
    client_socket,address=server_socket.accept()
    name=client_socket.recv(1024).decode()
    print(client_socket,address,name)
    client_socket.send(bytes("You are now joined in my socket!!!","utf-8"))
    client_socket.close()
server_socket.close()