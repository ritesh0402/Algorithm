# Write your MySQL query statement below

SELECT customer_id, count(Visits.visit_id) AS count_no_trans
FROM Visits
LEFT JOIN Transactions
ON Visits.visit_id = Transactions.visit_id
WHERE Transactions.transaction_id IS NULL 
GROUP BY Visits.customer_id; 