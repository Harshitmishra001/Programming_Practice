import threading
import time
done= False
def worker(text):
    counter=0
    while not done:
        time.sleep(1)
        counter+=1
        print(f'{text}:{counter}:{time.ctime()}')
t1=threading.Thread(target=worker, daemon=True,args=('Number',))
t2=threading.Thread(target=worker, daemon=True,args=('NO',))
t1.start()
t2.start()
input("Press enter to quit\n")
done=True
