import os
import sys
import argparse 
args =  sys.argv
print("\033c\033[43;30m\n")
#change next line
cmds="curl www.google.com/"+args[1]
os.system(cmds)
print(cmds)