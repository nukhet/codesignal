CREATE PROCEDURE storageOptimization()
BEGIN
	SELECT w.id, w.column_name, w.value 
	FROM(
		SELECT t1.id AS id, 'name' AS column_name, t1.name AS value
		FROM workers_info t1
		WHERE t1.name IS NOT NULL 
		UNION ALL
		SELECT t2.id AS id, 'date_of_birth' AS column_name,t2.date_of_birth AS value
		FROM workers_info t2
		WHERE t2.date_of_birth IS NOT NULL 
		UNION ALL
		SELECT t3.id AS id, 'salary' AS column_name, t3.salary AS value
		FROM workers_info t3
		WHERE t3.salary IS NOT NULL
	) w
	ORDER BY w.id, FIELD(w.column_name, 'name', 'date_of_birth', 'salary');
END