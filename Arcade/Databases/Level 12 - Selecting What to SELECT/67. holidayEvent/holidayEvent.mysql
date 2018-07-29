CREATE PROCEDURE holidayEvent()
BEGIN
	SET @i:=0;
	SELECT DISTINCT p.buyer_name AS winners
	FROM 
	(SELECT buyer_name, @i := @i+ 1 AS row_num
	 FROM purchases
	 ORDER BY timestamp
	) AS p
	WHERE row_num MOD 4 = 0
	ORDER  BY winners;
END