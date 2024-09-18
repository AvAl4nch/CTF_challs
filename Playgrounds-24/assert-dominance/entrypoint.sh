#!/bin/bash
echo $FLAG > /root/flag.txt
chown root:player /home/player/chall.py
chmod 750 /home/player/chall.py


su -c "./ynetd -p 1337 /bin/bash" player

