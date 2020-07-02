# Puzzles
Resource: [GeeksForGeeks](https://www.geeksforgeeks.org/category/puzzles/)

## 1. The Circle of Lights
Resource : [GeeksForGeeks](https://www.geeksforgeeks.org/puzzle-the-circle-of-lights/) 

There is a circle of N > 2 lights with a switch next to each of them. Each switch can be flipped between two positions, thereby toggling the on/off states of three lights: its own and the two lights adjacent to it. Initially, all the lights are off. Design an algorithm for turning all the lights on by flipping the minimum number of switches.

### Solution:

* Since all the lights are off initially, it is obvious that the final state of the lights depends only on the parity(odd or even) of the number of times each switch is flipped and does not depend on the order in which the switches are manipulated. To turn on a light, we can either flip its switch and leave the adjacent switches off, or we flip all the three switches, for a group of three lights. 

* Assuming the lights are numbered from 1 to N in the clockwise order, we have two cases.

  1. **N is divisible in 3:** In this case, we flip the switch for 1st bulb, which lights the bulbs 1, 2 and N. Then we flip the switch of 4th bulb, which lights the bulb 3, 4, and 5. In this manner, we flip the switch of every 3K + 1 bulb until we flip the switch of N – 2 bulb, which will light up the last 3 bulbs. This results in a total of N/3 switch flips.

  2. **N is not divisible by 3:** In this case, suppose we follow the same procedure as above. This will only turn on the bulbs in multiple of 3. So at last, there will be one or two bulbs, which will be off. Flipping the switch of one of these bulbs, we turn off at least one bulb. This bulb, say X, which now has gone off due to the previous flip has been toggled even number of times, to turn it on, the switch of either X or one of its adjacent bulbs which hasn’t been flipped needs to be flipped. In this way, we have to flip the switch of each of the bulb whose switch hasn’t been flipped. This results in a total of N switch flips.

## 2. 50 red marbles and 50 blue marbles
Resource : [GeeksForGeeks](https://www.geeksforgeeks.org/puzzle-50-red-marbles-and-50-blue-marbles/) 

Give two boxes B1 and B2 one have 50 red marbles and other have 50 blue marbles. A ball is selected randomly from any of the box and the task is to maximize the probability of selecting a red ball, by reshuffling marbles in both the boxes.

### Solution:

* Let P(R) be the probability of picking a red marble.

  P(R) = P(B1) * P(B1 | J1) + P(B2) * P(B2 | J2)

  Here, P(B1) and P(B2) refers to selecting B1 and B2 and the probability of selecting each box is \frac{1}{2} J1 and J2 refers to number of total balls in B1 and B2 respectively.

* If we do not reshuffle any balls. Then,

  P(R) = ((1 / 2) * 1) + ((1 / 2) * 0) = 0.5

  But, If we decrease the number of red balls in box B1 and increase the number of red balls in box B2 then the probability of getting a red ball will be maximized.
  Therefore, let us take 49 red marbles from B1 to B2 then there will be 1 red ball in B1 and 99 balls in B2 out of which 49 are red and 50 of them are blue in the second jar.

* Then,

  P (R) = ((1 / 2) * (1 / 1)) + ((1 / 2) * (49 / 99)) = 0.747474

  Hence, the maximum probability of choosing a red ball is 0.747474

## 3. The Fox, The Duck and a Circular Pond
Resource : [GeeksForGeeks](https://www.geeksforgeeks.org/the-fox-the-duck-and-a-circular-pond/)

A Duck that is being chased by a Fox saves itself by sitting at the centre of a circular pond of radius r. The Duck can only fly from land and not able to fly from the water. Furthermore, Fox cannot swim. The speed of the Fox is four times the speed of the Duck. Assuming that the Duck and Fox are perfectly smart, is it possible for the Duck to ever reach the edge of the pond and fly away to its escape from the ground?

### Solution: 

* The Duck can’t swim directly away from the Fox because for that the Duck would have to swim a distance r and till that time Fox would have cover half the circumference of the pond i.e., (pi * r). Since the speed of the Fox is four times the speed of the Duck, therefore, he will be able to catch Duck as we know that,  
  
  (pi * r) < (4 * r)

* The solution for this puzzle is that Duck could swim in concentric circles closed to the centre of the pond. Due to this Duck would cover the small circumference of the pond and the Fox will have to cover the larger circumference of the pond.
* Using the above strategy the Duck will make tiny concentric circles around the center and due to this, the Fox will not be able to cope up with the Duck as he has to cover the entire pond.
* As the speed of the Fox is four times the Duck, therefore the Duck must move in a concentric circle of radius r/4 such that the distance cover by Duck and the Fox is same. As long as Duck stays within that concentric circle the Duck will gain some distance over Fox after some time and the Fox will be unable to keep up with the Duck.
* As soon as the Fox is 180 degrees behind the Duck, the Duck would cover the remaining distance (3*r / 4) as distance cover the Fox is less than the distance cover by Duck because

  (pi * r) > 4 * (3r/4)
* At last, The Duck would able to reach the edge of the pond and fly away.

## 4. The Three Pile Trick
Resource : [GeeksForGeeks](https://www.geeksforgeeks.org/puzzle-the-three-pile-trick/)

A magician asks a person to select a card from a pack of 27 cards and return it back without showing it back to the magician. After the choice is made, the magician shuffles the pack and deals all the cards face up into three piles, one card to each pile in turn. The person is now asked which pile contains the card. The pile is then placed between the other two piles and without any shuffling, the cards are again distributed again into three piles. The same procedure is repeated again and for the final time the cards are distributed in three piles and the person is asked about the pile containing the card. The magician then names the selected card. Explain the trick. 

### Solution: 

* Let us denote the cards in the three piles after the first deal as, say, a1, a2, …a9; b1, b2, …b9; c1, c2, …c9. If the selected card is, to be specific in pile 1 after the second deal the piles will look as shown in layout 2. Note that all the cards that were in pile 1 after the first deal are now exactly in the three middle positions in each of the piles. If the selected card is now in, say, pile 3, that is, either a3, a6, or a9, it will be exactly in the middle of a pile in the final distribution. Hence, pointing out the pile containing the selected card in the final distribution uniquely identifies that card. So, the selected card always lies at the center of the pile containing it in the final distribution. 

## 5. Four Alternating Knights
Resource : [GeeksForGeeks](https://www.geeksforgeeks.org/puzzle-four-alternating-knights/)

There are four knights on a 3 x 3 chessboard. The two white knights are at the two bottom corners, and the two black knights are at the upper two corners of the board. Find the shortest sequence of moves to achieve the final position as shown in the figure or prove that no such sequence exists.

### Solution: 

* A knight in a game of chess has L-shaped moves. So, it can occupy at most two different positions in a single move on a 3 x 3 board. Consider a graph where vertices represent the cell number and the edges between them represent, the moves that various knights can make.

* In this graph, we have two knights of the black color, followed by two knights of white color. Let’s consider knight at cell 1 moves to cell 6. Now to move to its final position cell 7, the knight at cell 7 should move to cell 2. However, its final position is cell 1 as shown. So the asked configuration is impossible to achieve. This is true for any sequence of moves, whether clockwise or counter-clockwise, as the ordering of the knights remains the same. However, the final configuration in question demands an alternating colored sequence of knights. So, this puzzle has no solution.
