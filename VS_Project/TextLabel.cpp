#include"TextLabel.h"

/// CONSTRUCTORS - DESTRUCTORS
ui::TextLabel::TextLabel()
{
}

ui::TextLabel::TextLabel(const sf::Font & p_font)
{
	setFont(p_font);
}

ui::TextLabel::TextLabel(const sf::Font & p_font, const std::string & p_text, unsigned int p_fontSize)
{
	setFont(p_font);
	setText(p_text);
	setFontSize(p_fontSize);
}

ui::TextLabel::~TextLabel() {

}

/// METHODS 

void ui::TextLabel::draw(sf::RenderTarget &target) const {
	target.draw(m_text);
}

const std::string &ui::TextLabel::getText() const
{
	return m_text.getString();
}

void ui::TextLabel::setFont(sf::Font const &a_font) {
	m_text.setFont(a_font);
}

void ui::TextLabel::centerText(sf::RenderWindow & a_window)
{
	sf::FloatRect textRect = m_text.getLocalBounds();
	m_text.setOrigin(textRect.left + textRect.width / 2.0f,
		textRect.top + textRect.height / 2.0f);
	m_text.setPosition(sf::Vector2f(a_window.getSize().x / 2.0f, a_window.getSize().y / 2.0f));
}

void ui::TextLabel::setText(std::string a_text) {
	m_text.setString(a_text);
}

void ui::TextLabel::setColor(sf::Color a_color)
{
	m_text.setFillColor(a_color);
}

void ui::TextLabel::setFontSize(unsigned int a_size) {
	m_text.setCharacterSize(a_size);
}

void ui::TextLabel::setPosition(sf::Vector2f a_pos)
{
	m_text.setPosition(a_pos);
}