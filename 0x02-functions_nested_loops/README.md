# Started with C
## My third project
### 0x02. C - Functions, nested loops
 
*Nested loops in C are loops within loops, where one loop is contained inside another.
They allow you to execute a set of instructions multiple times, and these loops can be used for various tasks.*

* Outer Loop: The outer loop controls the overall flow of the program.
It determines how many times the inner loop(s) will execute. You can think of it as the parent loop.

* Inner Loop(s): The inner loop(s) are contained within the outer loop.
They execute a set of statements a specific number of times for each iteration of the outer loop. These are often referred to as nested loops.

* Iteration: Each time the outer loop runs, it goes through one iteration.
For each iteration of the outer loop, the inner loop(s) may also iterate a certain number of times.

* Usage: Nested loops are commonly used for tasks that involve processing two-dimensional or multi-dimensional data structures, like arrays or matrices.
They are also used for generating patterns, grids, and for solving problems where you need to examine combinations or permutations.


### Scripts:

0. **The Mighty _putchar (_putchar)**
    - Description: This program does just what it says: it prints "_putchar" with a happy little newline and proudly declares, "I've done my job!" by returning 0. 😄
    - Fun Fact: The `_putchar` function is often one of the first functions learned by budding C programmers. It's like the "Hello World" of custom functions! 👋🌍

1. **Alphabet Adventure (print_alphabet)**
    - Description: This function cheerfully loops through the lowercase alphabet, starting from 'a' and ending at 'z', while using _putchar to print each letter. After all the letters have been printed, it adds a new line to keep things tidy. 🎉
    - Fun Fact: Characters in programming are represented by numbers, and the lowercase alphabet is just a series of consecutive numbers. This function brings those numbers to life! 🌟🔤

2. **10 x Alphabet (print_alphabet_x10)**
    - Description: This function is like a 10-fold alphabet printing party! It uses a loop to go through the alphabet from 'a' to 'z' 10 times, printing each letter along with a new line to keep things organized. 🎉📚📚📚📚📚📚📚📚📚📚
    - Fun Fact: Loops are a fundamental concept in programming, and this function is like a loop on steroids, printing the alphabet in a rhythmic dance! 🕺💃

3. **Lowercase Bouncer (_islower)**
    - Description: This function is like the bouncer at the lowercase cool club 🕶️. If the character (or guest) is lowercase, they get a VIP pass (1) and can enter the club. If they're not cool and lowercase, they get a rejection (0) and have to find another party to attend! 😎🕺
    - Fun Fact: In ASCII, lowercase letters have lower numeric values than uppercase letters, making it easy for this function to distinguish between them! 🎩🎤

4. **Alphabet Detective (_isalpha)**
    - Description: Think of this function as the alphabet detective. If the character is a letter (whether it prefers lowercase or uppercase), it gets a badge (1) and is declared an official alphabet member. If it's not a letter, it's politely asked to leave the alphabet party with a handshake (0). 📚🎉🕵️‍♂️
    - Fun Fact: This function combines logical checks to determine whether a character is an alphabet member. It's like solving a little mystery with code! 🔍🕶️🔐

5. **Sign Revealer (print_sign)**
    - Description: This function is like a sign interpreter for numbers. It determines whether the number is positive, negative, or zero and appropriately displays the sign along with a cheerful explanation. 😄🔢🔍
    - Fun Fact: Sign manipulation is a common task in programming, especially when dealing with real-world data like temperatures or financial transactions. This function is like your trusty guide through the world of signs! 🌡️💰

6. **Absolute Wizard (_abs)**
    - Description: There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you. Think of this function as a magician that can turn any number, whether positive or negative, into a positive one. It reveals the hidden potential and positivity within the integers! 😄🔮🔢
    - Fun Fact: Absolute value is a mathematical concept with practical applications in many fields, including physics and economics. This function is like a mathematical alchemist, turning negative into positive! 🧙‍♂️✨

7. **Last Digit Revealer (print_last_digit)**
    - Description: This function is like a magician's performance where it unveils the hidden last digit of a number and showcases it to the world. It returns the value of the last digit and keeps the audience entertained! 🎩✨🔢
    - Fun Fact: The last digit of a number often holds valuable information, like whether a number is divisible by 2 or 5. This function is like a master of digits, revealing their secrets! 🧙‍♂️🔍

8. **Time Traveler's Clock (jack_bauer)**
    - Description: I'm federal agent Jack Bauer, and today is the longest day of my life. This function takes you on an adventure through the minutes of a day, starting from 00:00 to 23:59. It prints the time in HH:MM format for each minute, taking you through a time-traveling journey! ⏰🕵️‍♂️🌞🌜
    - Fun Fact: Time manipulation is a fascinating aspect of programming. This function is like a time machine, showing you the flow of time in a simple, organized manner, much like Jack Bauer's day! 🚀🕰️

9. **Times Table Traveler (times_table)**
   - Description: Learn your times table. This function takes you on a mathematical adventure through the 9 times table, starting from 0. It prints each row with the products properly formatted and separated by commas. It's like a journey through multiplication magic! 🔢✨🌟
   - Fun Fact: Times tables are the foundation of multiplication, a fundamental concept in programming and mathematics. This function is like a guide through the times table forest, pointing out all the interesting numbers along the way! 🌲🧙‍♂️

10. **Magical Addition (add)**
    - Description: This function is like a magical wizard that takes two integers and combines them to create a perfect harmony, returning the result as the outcome of their enchanting union! 🧙‍♂️✨🔢
    - Fun Fact: Addition is one of the most basic and essential operations in programming. This function is like the conductor of an addition orchestra, harmonizing numbers effortlessly! 🎻🎶

11. **Number Road Trip (print_to_98)**
    - Description: 98 Battery Street, the OG. This function is like a friendly tour guide that takes you on a natural number journey from a starting point to 98. It ensures that the numbers are separated by commas and spaces and that you always reach the destination with a smile! 🚗🔢🌟
    - Fun Fact: Natural numbers are the foundation of mathematics and programming. This function is like a road trip planner, ensuring you visit all the interesting stops along the way! 🗺️🚗

12. **Times Table Odyssey (print_times_table)**
    - Description: This function takes you on a journey through the times table, starting from 0 and going up to n, but only if n is within the valid range of 0 to 15. It ensures proper formatting for the products and creates a neatly organized times table for your exploration! 🔢🌟🚀
    - Fun Fact: Times tables are not only mathematical but also practical in everyday life. This function is like a space explorer charting the multiplication universe, taking you to places where math and programming collide! 🌌🚀

13. **Code Breaker (multiples_of_3_and_5)**
    - Description: Your program is like an adventurous code breaker, searching for numbers below 1024 that are multiples of 3 or 5. As it discovers these special numbers, it adds them to the sum and, at the end of the journey, proudly presents the grand total. It's a journey full of numbers and excitement! 🌟🔢🚀
    - Fun Fact: This function uses mathematical logic to find solutions, a bit like a detective cracking a complex code to reveal hidden treasures! 🕵️‍♂️💰

14. **Fibonacci Explorer (print_fibonacci)**
    - Description: In this code adventure, you'll explore the Fibonacci sequence. It starts with the first two numbers, 1 and 2, and then continues to calculate and print the next 48 Fibonacci numbers, all separated by commas and spaces. It's a fascinating exploration of the Fibonacci world! 🌟🔢🚀
    - Fun Fact: The Fibonacci sequence is not just a mathematical concept; it appears in various natural phenomena, from the arrangement of leaves on a stem to the spiral in a seashell. It's like nature's secret code! 🌿🐚

15. **Even Fibonacci Quest (sum_even_fibonacci)**
    - Description: This program embarks on a quest through the Fibonacci sequence, starting with 1 and 2. It calculates and adds even-valued terms to the sum until they reach or exceed 4,000,000. Finally, it reveals the grand total of the adventure. It's a journey filled with numbers, excitement, and a happy ending! 🌟🔢🚀
    - Fun Fact: The sum of even Fibonacci numbers has a surprising mathematical property—it's related to the Golden Ratio, a number found in art, architecture, and nature! 🌻🎨📐

16. **The Fibonacci Symphony (print_large_fibonacci)**
    - Description: This program is like a grand symphony, elegantly revealing the first 98 Fibonacci numbers with care and precision. It handles large numbers gracefully and creates a masterpiece of mathematical sequences. It's an adventure full of numbers and excitement! 🌟🔢🚀
    - Fun Fact: Fibonacci numbers appear in unexpected places, from the spirals of galaxies to the proportions of art and architecture. It's like a universal language of patterns! 🌌🎨📐

