import os 
import sys

x = input("Enter secret: ").strip()
try:
	assert(x == open("/root/password", 'r').read())
except AssertionError:
	print("GET OUT!!!!!!")
	exit()

os.system('/bin/bash')


