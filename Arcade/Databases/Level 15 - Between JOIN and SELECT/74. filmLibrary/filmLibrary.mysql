CREATE PROCEDURE filmLibrary()
BEGIN
	SELECT ages.actor, ages.age 
	FROM actor_ages AS ages
	JOIN starring_actors AS actors ON ages.actor=actors.actor
	JOIN movies ON actors.movie_name=movies.movie
	WHERE movies.genre = 
	(SELECT genre
	 FROM movies 
	 GROUP BY genre
	 ORDER BY COUNT(movie) DESC LIMIT 1)
	ORDER BY age DESC, actor ASC;
END