CREATE PROCEDURE unluckyEmployees()
BEGIN
	SELECT dep_name,
	IFNULL(emp_number, 0) AS emp_number,
	IFNULL(total_salary, 0)  AS total_salary
	FROM(
		SELECT *,@rn := @rn + 1 AS rn
		FROM(
			SELECT d.name AS dep_name,
			COUNT(e.department) AS emp_number,
			SUM(e.salary) AS total_salary
			FROM Employee e RIGHT JOIN Department d ON e.department=d.id
			GROUP BY d.id
			HAVING COUNT(e.department) < 6
			ORDER BY SUM(e.salary) DESC, COUNT(e.department) DESC, d.id ASC
			) AS t1
		JOIN (SELECT @rn := 0) n
		) AS t2
	WHERE t2.rn%2=1;
END