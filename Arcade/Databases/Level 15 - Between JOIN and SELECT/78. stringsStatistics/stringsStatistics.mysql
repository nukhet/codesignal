CREATE PROCEDURE stringsStatistics()
BEGIN
	DECLARE letter INT DEFAULT 97;
	SET @strQuery ="SELECT * FROM(";
	WHILE letter<=122 DO
	SET @strQuery = CONCAT(@strQuery, "SELECT letter, SUM(c) AS total, SUM(IF(c>0,1,0)) AS occurrence, MAX(c) AS max_occurrence, SUM(IF(c = max_occ, 1, 0)) AS max_occurrence_reached FROM (
	SELECT '%' AS letter, LENGTH(str)-LENGTH(REPLACE(str,'%','')) AS c FROM strs) s1 CROSS JOIN (SELECT MAX(LENGTH(str) - LENGTH(REPLACE(str, '%', ''))) max_occ FROM strs) s2");
	IF letter !=122 THEN SET @strQuery = CONCAT(@strQuery," UNION ALL ");
	ELSE SET @strQuery = CONCAT(@strQuery,") s WHERE total>0");
	END IF;
	SET @strQuery=REPLACE(@strQuery, "%", CHAR(letter));
	SET  letter=letter+1; 
	END WHILE;
	
	PREPARE stmt FROM @strQuery;
	EXECUTE stmt;
	DEALLOCATE PREPARE stmt; 
END