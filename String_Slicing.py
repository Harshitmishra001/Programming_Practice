def reverse_name(name):
    rev_name = name[::-1]
    return rev_name
def str_slice(name,num):
    hal_name=name[0:num]
    new_name=name[num::]
    return hal_name,new_name
name=input("Enter Your Name?")
print("Reversed Name: ",reverse_name(name))
num=int(input("Enter Number to Slice: "))
hal_name,name=str_slice(name,num)
name=reverse_name(hal_name)+name
print("halfreverse string",name)