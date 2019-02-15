#include <memory>
#include "Drawable.h"
#include "Desktop.h"
#include "Bar.h"
#include "Circle.h"
#include "Square.h"
#include "glibmm.h"

int main() {
	Rsvg::init();
	std::unique_ptr<PantherOS::Desktop> desktop = std::unique_ptr<PantherOS::Desktop>(new PantherOS::Desktop());
	auto bar = std::shared_ptr<PantherOS::Drawable>(new PantherOS::Bar());
	auto circle = std::shared_ptr<PantherOS::Drawable>(new PantherOS::Circle());
	auto square = std::shared_ptr<PantherOS::Drawable>(new PantherOS::Square());
	desktop->add(bar);
	desktop->add(circle);
	desktop->add(square);
	desktop->show();
	Rsvg::term();
	return 0;
}
