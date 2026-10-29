
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

#include <iostream>

int main()
{
	using namespace ftxui;
	//Definir la estructura del documento:
	  Element document = vbox({
		text("FTXUI Getting Started") | bold | center,
		hbox({
		text("Left Panel") | border,
		vbox({
			text("Main Content Area") | flex,
			separator(),
			text("Footer Information") | dim,
		}) | border | flex,
		}) | flex,
	});
	auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
	Render(screen,document);
	screen.Print();
	return 0;
}
