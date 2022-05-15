from operator import truediv
import random as rd
print("welcome to expert system " .center(50))

question=[
    "How good is your workspace",
    "overall rating of your worksapce",
    "rating for you collegue",
    "bahivour of your manager",
    "do your manager have significat knowledge of project",
    "Are able to cope with comapany flow"
]

def get_res(score):
    if(score<=1*max_que):
        print("you seems happy with your workplace")
    elif(score<=2*max_que):
        print("you are liking your work")
    elif(score<=3*max_que):
        print("it look like your are not happy with your job")
    elif(score<=4*max_que):
        print("it look like your are hate  your job")
    else:
        print("it loook like you are about quit")

l = []

max_que=len(question)
for i in range(max_que):
    l.append(0)

while 0 in l:
    qno = rd.randint(0,max_que-1)
    if(l[qno]==0):
        print(question[qno])
        exit=False
        while not exit:
            l[qno]=int(input("1.excellent \t 2.good \t 3.okey \t 4. not good \t 5.bad  \n Enter your choice: "))
            exit=True
            if(l[qno]<0 or l[qno]>5):
                print("enter valid choice")
                exit=False
get_res(sum(l))