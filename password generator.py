student_scores = [150 , 200, 250, 300, 350, 174 , 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000]
total_score = sum(student_scores)
#print("Total score of all students:", total_score)


'''sum=0
for score in student_scores:
    sum += score
print("Total score of all students:", sum)'''

max = student_scores[0]
for score in student_scores:  
    if score > max:
        max = score
print("Highest score among all students:", max)
