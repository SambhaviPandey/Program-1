In TimeSpan.cpp

Rounding:
In the TimeSpan.cpp file I used the round function frequently
to round the seconds. I did this because I think it is appropriate
in this case. For instance, if I take 3.8 seconds and round it,
it become 4 seconds. If I take 3.2 seconds and round it, it become 
3 seconds. I thought this was better then truncating it because
then the seconds would have always been rounded down, which I 
believe would make it less accurate. 

Truncating:
I used trunc at times, such as with  the following scenario:

double mins = (hrs - trunc(hrs)) * TIME_CONVERSION;

The reason I used trunc in this case is because I wanted to find 
the accurate amount of time left in the case of decimals.I thought
that by subtracting the time from the truncated time and then 
multiplying by 60. I would find the accurate time.

In TimeMachine.cpp
Testing:
I did not explicitly test the convertToSeconds function because 
it is a private member of the TimeSpan class and also because 
it is already implicitly tested when the time is being found
in hours, minutes, and seconds (especially with cases where 
there is a decimal in the time being inputted). 

In VendingBank.h
In the instructions it says that the interface (.h file) 
models the coin-operated bank part of a Vending machine.
Going by these instructions I only considered the coins 
(so no credit cards or five, ten, or twenty dollar bills 
were implemented). Also, there are dollar coins so the dollar 
part of the implementation can also be dollar coins. 

I also did include -= and - (subtraction) operators in the
operator overloading even though it does not say so in the
expectations in the rubric. The reason I did this is because
I thought you could use those operators for giving change to
the user or when you have to subtract coins you got from 
the user with total number of coins you have. 

I also included int id as a parameter in some of the functions
and constructors because that was the variable name that was
included in the directions. 

Additional Note:
I compiled this on my Mac using linux and it created a .out 
file extension (not a .exe file extension).
I hope that is alright since the directions say to turn in an 
executable TimeMachine file, which I believe it is. 
