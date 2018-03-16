strutch EntityManage {
	std::vector<std::shared_ptd<Entity>> list;
	void update(doubt dt);
	void render(sf::RenderWindow &window);
};