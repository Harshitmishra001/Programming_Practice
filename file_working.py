file=open("myfile.txt","w")
txt=["This is delhi\n","This is paris\n","This is London\n"]
file.writelines(txt)
file.close
file1=open("myfile.txt","r")
print(file1.read())
print()
file1.close

