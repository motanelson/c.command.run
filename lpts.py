#!/usr/bin/python3
import os
import sys
import argparse 
args =  sys.argv
devices="lpt"
print("\033c\033[43;30m\nsend...\n"+args[1])
f1=open(devices,"w")
f1.write(args[1])
f1.close()
