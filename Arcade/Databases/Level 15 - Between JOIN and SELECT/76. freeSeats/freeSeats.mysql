CREATE PROCEDURE freeSeats()
BEGIN
	SELECT flights.flight_id, number_of_seats-(SELECT COUNT(*) FROM purchases 
		WHERE flights.flight_id=purchases.flight_id) AS free_seats
	FROM flights, planes
	WHERE flights.plane_id=planes.plane_id
	ORDER BY flight_id;
END