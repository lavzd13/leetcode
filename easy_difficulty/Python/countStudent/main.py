from typing import List

class Solution:
	def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
		count = 0
		while students:
			if (students[0] == sandwiches[0]):
				sandwiches.pop(0)
				students.pop(0)
				count = 0
			else:
				count+=1
				first = students.pop(0)
				students.append(first)
			if count == len(students):
				return count
		return len(students)

"""The thing that took me most time to solve was the statement to exit loop.
So here I am looping through students and removing elements if they are same.
If they are not the same I just put the first one to the end.
The statement for the exit works like this. So whenever we pop some elements we
reset the count to 0 because that means that we need to continue loop. Then in
else block we are incrementing the count and later we are checking if the count
is equal to the current len of students that would mean that we looped through
all students and nobody took their sandwich so we quit the program and return
the number of students who did not take any sandwich."""