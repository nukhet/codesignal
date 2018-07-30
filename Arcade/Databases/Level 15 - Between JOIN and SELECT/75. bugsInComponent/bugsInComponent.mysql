CREATE PROCEDURE bugsInComponent()
BEGIN
	SELECT b.title AS bug_title, c.title AS component_title,
	(SELECT COUNT(*) FROM BugComponent 
		WHERE component_id = id) AS bugs_in_component
	FROM Bug b, Component c, BugComponent bc
	WHERE b.num=bc.bug_num AND c.id=bc.component_id 
	AND (SELECT COUNT(*) FROM BugComponent WHERE bug_num = b.num)>1
	ORDER BY bugs_in_component DESC, c.id, b.num;
END