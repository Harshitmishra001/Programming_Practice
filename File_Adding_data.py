infile=open("input.txt","r")
outfile=open("output.txt",'w')
ls=infile.readline()
print(ls)
for i in range(len(ls)):
    tracker=[]
    if ls[i] not in tracker: 
        tracker.append(ls[i])
        outfile.write(f"{ls[i]}:{ls.count(ls[i])} \n")
    else:
        continue
infile.close()
outfile.close()
file=open("output.txt",'r')
for lines in file.readlines():
    print(lines)
file.close()
