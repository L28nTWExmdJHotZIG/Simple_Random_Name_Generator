import random
import os
import time

database = list("QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890")
SR = random.SystemRandom()
def clear_console():
    os.system("cls" if os.name == "nt" else "clear")

def name_gen(len: int):
    for i in range(len):
        print(SR.choice(database), end="")
        time.sleep(0.02)

clear_console()
name_gen(25)