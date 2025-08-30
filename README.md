## Credit Card Validator (Luhn's Algorithm)

1. Double every second (position) from right to left. If double number is two digits then split them (12 => 1 2)
2. Sum everything from step 1
3. Add all odd positions from right to left
4. Sum everything from step 3
5. Add step 2 and step 4 together
6.  The result of step 5: result % 10 == 0 (valid)
     
 
