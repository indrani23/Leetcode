# Write your MySQL query statement below
SELECT A.name as Customers
FROM Customers A
WHERE A.id NOT IN (SELECT B.customerId FROM Orders B)