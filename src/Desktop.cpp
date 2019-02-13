#include "Desktop.h"
#include "Drawable.h"

PantherOS::Desktop::Desktop() {
	this->width = 1024;
	this->height = 576;
	this->filename = "controls.pdf";
	this->surface = 
		Cairo::PdfSurface::create(this->filename, this->width, this->height);
	this->ctx = Cairo::Context::create(surface);
	this->controls = std::vector<std::shared_ptr<PantherOS::Drawable>>();
}
	
void PantherOS::Desktop::add(std::shared_ptr<PantherOS::Drawable> &control) {
	this->controls.push_back(control);
}
	
void PantherOS::Desktop::show() {
	this->ctx->save();
	this->ctx->set_source_rgb(0.86, 0.85, 0.47);
	this->ctx->paint();
	this->ctx->restore();
	
	this->ctx->set_line_width(20.0);
	
	for (auto control: this->controls) {
		control->draw(this->ctx, this->width, this->height);
	}
	
	this->ctx->show_page();
}

