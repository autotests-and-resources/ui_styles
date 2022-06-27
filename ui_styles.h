#ifndef UI_STYLES_H
#define UI_STYLES_H

#include <QString>

class UI_Styles
{
protected:
	UI_Styles() {};

public:
	static QString main_window();
	static QString menu_bar();
	static QString tab_bar();
	static QString tab_widget();

	static QString tab_item();

	static QString frame_start();
	static QString label_title();
	static QString radio_button();

	static QString start_list_widget();

private:
	static QString button_main();
public:
	static QString button_default();
	static QString button_primary();
	static QString button_danger();
};

#endif // UI_STYLES_H
