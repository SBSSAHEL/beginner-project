#calling py turtle

import turtle
from turtle import *
#intro
#adding textturtle.penup()

turtle.write("Hi...",font=('arial',20,'italic'),align='right',)

#making colorized heart

turtle.penup()
turtle.goto(0,0)
turtle.pendown()
color("black","red")
begin_fill()
left(50)
forward(100)
circle(40,180)
left(260)
circle(40,180)
forward(100)
end_fill()

#outro text
turtle.penup()
turtle.goto(0,-50)
turtle.pendown()
turtle.write("take a heart",font=('Courier',20,'bold'),align='center')
done()