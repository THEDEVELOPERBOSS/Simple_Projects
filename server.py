import socket
from threading import *

def client_send(conn,addr):
    while True:
        conn.send(input("").encode("utf-8"))
        

def client_recv(conn,addr):
    while True:
        msg = conn.recv(2048).decode("utf-8")
        print(f"[{addr[0]}] {msg}" )#this is multi threading
        
        

def accept_client(server):
    while True:
       conn,addr = server.accept()
       Thread(target=client_recv,args=(conn,addr)).start() # allows it to multitask
       Thread(target=client_send,args=(conn,addr)).start()
       
    

def start():
    Ip_address = socket.gethostbyname(socket.gethostname())
    Port = 3560
    addr = (Ip_address, Port)
    server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    server.bind(addr)
    server.listen(10)
    print(f"[Server] has started on {Ip_address}")
    accept_client(server)
    
start()
    
    
    