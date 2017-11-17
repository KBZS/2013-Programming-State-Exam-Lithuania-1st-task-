# 2013-Programming-State-Exam-Lithuania
The solution for the first task of the 2013 IT State exam (Lithuania) Check Project\main.cpp


Task:

There is certain delivery organisation which works in the city N. In this city all streets are intersect perpendicularly. And the distance between all intersection on the same street is 1 km. All offices in this city are located near those intersections and have unique coordinates (x,y), so the office of this delivery service located near the main intersection in the center of the city (coordinates: (0,0)). This organisation deliver to all offices in this city. (Check the taskImage.jpg file for clarification)
Drivers of this delivery organisation work by this algorithm: They start at the delivery organization’s office (0,0) and move to their destination (one of the offices (x,y)). Then they come back to the office (0,0) and take next delivery and start over. They will continue to do this algorithm until they will deliver all packages in the list or they will reach the limit of the km per day.
You have to calculate how many packages they deliver (from the list), how many km have been driven and return the name of the last office which was visited by a driver.

Data:

Data (list of offices) have to be given as the separate .txt file (U1.txt file). First integer “n” in the first line of this file is the number of packages which have to be delivered to offices. Second integer in the first line is the day limit of km. In the remaining lines of the file, the first 10 positions are reserved for the name of the organisation (office) which requested a delivery. After the name there is one space and after this space there are the integers which represent the coordinates of this organisation “x y” (one space between x and y).

Results:

Results must be in the U1rez.txt file. There should be two integers and one string. First integer is a number of organizations which have got their deliveries before the distance limit. Second integer is a number of km driven by driver. The string is the name of the last organisation which got the package.

Additional information and restrictions:

You have to create a function for reading the data from the data file (U1.txt). You have to create a function for calculations. You have to create a function for writing the results to the results file (U1rez.txt). You are not allowed to perform any actions with command line.
