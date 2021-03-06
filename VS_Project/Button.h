#pragma once

#include"SFML\Graphics.hpp"
#include"TextLabel.h"

namespace ui {
	
class Button {
public:
	////////////////////////////////////////////////////////////
	///
	/// \brief Creates an empty button that doesn't do shit
	/// 
	////////////////////////////////////////////////////////////
	Button() { }

	////////////////////////////////////////////////////////////
	///
	/// \brief Creates a button with a rect image
	/// \param a_size size of button image
	/// \param a_color buttons fill color
	////////////////////////////////////////////////////////////
	Button(sf::Vector2f p_size, sf::Color p_color);
	
	void draw(sf::RenderTarget &target);

	bool isMouseInside(sf::Vector2f a_mousePos);

public:
	// m_rect methods
	////////////////////////////////////////////////////////////
	///
	/// \brief Updates m_rect's size
	///
	////////////////////////////////////////////////////////////
	void setRectSize(sf::Vector2f a_size);

	////////////////////////////////////////////////////////////
	///
	/// \brief Updates m_rect's size
	///
	////////////////////////////////////////////////////////////
	sf::Vector2f getRectSize() const;

	////////////////////////////////////////////////////////////
	///
	/// \brief Updates m_rect's fill color
	///
	////////////////////////////////////////////////////////////
	void setRectColor(sf::Color a_color);

	////////////////////////////////////////////////////////////
	///
	/// \brief Updates m_rect's position
	///
	////////////////////////////////////////////////////////////
	void SetRectPosition(sf::Vector2f a_pos);

public:
	// m_text attributes
	////////////////////////////////////////////////////////////
	///
	/// \brief Sets m_text's color
	///
	////////////////////////////////////////////////////////////
	void setTextColor(sf::Color a_color);

	////////////////////////////////////////////////////////////
	///
	/// \brief Sets m_text's font size
	///
	////////////////////////////////////////////////////////////
	void setCharSize(unsigned int a_size);

	////////////////////////////////////////////////////////////
	///
	/// \brief Sets m_text's font
	///
	////////////////////////////////////////////////////////////
	void setFont(sf::Font &a_font);

	////////////////////////////////////////////////////////////
	///
	/// \brief Sets m_text's display string
	///
	////////////////////////////////////////////////////////////
	void setString(std::string a_string);

	////////////////////////////////////////////////////////////
	///
	/// \brief Centers m_text within the 
	/// dimensions of m_rect
	///
	////////////////////////////////////////////////////////////
	void centerTextWithinRect();

private:
	sf::RectangleShape m_rect;
	ui::TextLabel m_text;

	bool clicked;
};

}

/*

* This won't work because button right now needs a m_rect to function proper
* So a button without a m_rect = depricated button

////////////////////////////////////////////////////////////
///
/// \brief Creates a button with a complete text
/// \param a_size size of button image
/// \param a_color buttons fill color
////////////////////////////////////////////////////////////
Button(const sf::Font &p_font, const std::string &p_text, unsigned int p_fontSize) :
m_text(p_font, p_text, p_fontSize)
{

}

*/