ECE382_LAB8
===========
Lab 8 - Robot Maze


Overview

During this lab, you will combine the previous laboratory assignments and program your robot to autonomously navigate through a maze. On the last day of the lab, each section will hold a competition to see who can solve the maze the fastest. The fastest time in ECE 382 will have their name engraved on a plaque in the CSD lab. Believe it or not, the main goal of this lab is for you to have some fun with computer engineering!

Requirements

You must write a program that autonomously navigates your robot through a maze (Figure 1) while meeting the following requirements:
1.Your robot must always start at the home position.
2.Your robot is considered successful only if it finds one of the three exits and moves partially out of the maze.
3.A large portion of your grade depends on which door you exit.1.Door 1 - Required Functionality
2.Door 2 - B Functionality
3.Door 3 - A Functionality1.You cannot hit a wall!

4.Bonus! Navigate from the A door back to the entrance using the same algorithm.1.You cannot hit a wall!


4.Your robot must solve the maze in less than three minutes.
5.Your robot will be stopped if it touches the wall more than twice.
6.Your robot must use the IR sensors to find its path through the maze.

Do not step onto the maze since the floor will not support your weight. You will notice the maze floor is cracked from cadets who ignored this advice.

Competition Requirements

All the laboratory requirements above are required to be met for the maze, with the following additional requirements:
1.Each robot will get only three official attempts to complete the maze. The best time will be used for your score.
2.You must notify a referee/instructor before you make an official attempt.
3.Your robot must find and exit through Door 3.
4.The robot with a lowest adjusted time will be the winner.
5.Each collision with a wall will add an additional 20 seconds to your total time.

Prelab

Paste the grading section in your lab notebook as the first page of this lab.

Include whatever information from this lab you think will be useful in creating your program.

Consider your maze navigation strategy. Write pseudocode to show what your main program loop will look like.

Hints

Only the door you are trying to get functionality for will be open - all others will be closed. We can't expect our robot to know to skip openings!

If you get A Functionality, you get credit for Required and B Functionality. There is no need to complete the maze through all doors.

There are a variety of techniques that cadets have used in the past to solve the maze. Here are a few:
•Use a wall-following algorithm (i.e., it tries to maintain a certain distance from the wall).
•Use an empty-space detecting algorithm. If it gets too close to a wall, it steers away.
