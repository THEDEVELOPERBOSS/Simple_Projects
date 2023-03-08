import socket
from threading import *

def client_send(server):
    while True:
        server.send(input("").encode("utf-8"))
        

def client_recv(server):
    while True:
        msg = server.recv(2048).decode("utf-8")
        print(f"[Server] {msg}" )#this is multi threading
        
def start():
    ippaddress = input("Type your IP address \n")
    port = 3560
    addr=(ippaddress,port)
    server = socket.socket(socket.AF_INET(),socket.SOCK_STREAM())
    server.connect(addr)
    print("[server] has connected")
    Thread(target=client_recv,args=(server)).start() # allows it to multitask
    Thread(target=client_send,args=(server)).start()
    
start()