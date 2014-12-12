ECE382_LAB8
===========
#Lab 8 - Robot Maze

![LCD](https://raw.githubusercontent.com/gytenis98/ECE382_LAB8/master/maze_diagram.png?raw=true "LCD")

##Overview

During this lab, you will combine the previous laboratory assignments and program your robot to autonomously navigate through a maze. On the last day of the lab, each section will hold a competition to see who can solve the maze the fastest. The fastest time in ECE 382 will have their name engraved on a plaque in the CSD lab. Believe it or not, the main goal of this lab is for you to have some fun with computer engineering!

##Requirements

1. Your robot must always start at the home position. (done)
2. Your robot is considered successful only if it finds one of the three exits and moves partially out of the maze. (last one)
3. A large portion of your grade depends on which door you exit. (last)
+ 1 First Door Required Functionality
+ 2 Door 2 - B Functionality
+ 3 Door 3 - A Functionality1.You cannot hit a wall! (Done. No walls hit. It was close, but did not hit anything) (http://youtu.be/T0TjNREt_nw)
+ 4 Bonus! Navigate from the A door back to the entrance using the same algorithm.1.You cannot hit a wall! (done) (http://youtu.be/badSgdkdJXQ)


4. Your robot must solve the maze in less than three minutes. (30-45s for A and bonus)
5. Your robot will be stopped if it touches the wall more than twice. (did not touch once)
6. Your robot must use the IR sensors to find its path through the maze. (done)



##Prelab

I used the same hardware from last lab.

![LCD](https://raw.githubusercontent.com/gytenis98/ECE382_LAB7/master/Initial%20design.JPG?raw=true "LCD")

##Debugging
I had a hard time with my program. It did not needed much changes from the lab 7, but for some reason it did not do anything. It was like dead. I was working it on for quite a while and then it started to function again (I did not understand why it was not showing any signs of life before). When I resurrected it was working almost how it suppost to. Just the timing was a little bit off. So I had to adjust that. Also, instead of initial idea to keep my robot in the middle I decided that to follow left wall will be easier. 

##Documentation:
Dr. Coulston helped me a lot with generating ideas how to tackle this lab work. C2C Eric Wardner also game me few tips how to better evaluate my code design for this lab. 
