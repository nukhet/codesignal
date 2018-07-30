CREATE PROCEDURE queriesExecution()
BEGIN
	SET @qStr=CONCAT((SELECT GROUP_CONCAT(
		CONCAT('SELECT "', query_name, '" query_name, (',  code, ') val')
		SEPARATOR ' UNION ')
	FROM queries));
	PREPARE stmt FROM @qStr;
	EXECUTE stmt;
	DEALLOCATE PREPARE stmt; 
END