CREATE PROCEDURE salaryDifference()
BEGIN
	SELECT IF(COUNT(*)!=0,((mx.s*mx.c)-(mn.s*mn.c)), 0) AS difference FROM
	(
		SELECT salary AS s, COUNT(*) AS c
		FROM employees
		GROUP BY salary
		ORDER BY salary DESC LIMIT 1) AS mx,
	(
		SELECT salary AS s, COUNT(*) AS c
		FROM employees
		GROUP BY salary
		ORDER BY salary ASC LIMIT 1) AS mn;
END