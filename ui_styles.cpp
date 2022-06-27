#include "gui_styles.h"

/********************* MAIN WINDOW *********************/

QString UI_Styles::main_window()
{
	return
			"QMainWindow {"
			"	background-color: #E7E7E9;"
			"	color: #000000;"
			"}\n";
}

QString UI_Styles::menu_bar()
{
	return
			"QMenuBar {"
			"	background-color: #dadada;"
			"}\n";
}


/********************* TAB WIDGET AND TAB BAR *********************/

QString UI_Styles::tab_bar()
{
	return
			"QTabBar::tab {"
			"	color: #000000;"
			"}\n";
}

QString UI_Styles::tab_widget()
{
	return
			"QWidget {"
			"	border: none;"
			"}\n";
}


QString UI_Styles::tab_item()
{
	return
			"QWidget {"
			"	background-color: #EEF0F5;"
			"	border: none;"
			"}\n";
}


/********************* START PAGE *********************/

QString UI_Styles::frame_start()
{
	return
			"QFrame {"
			"	background-color: #EEF0F5;"
			"	border: 1px solid rgb(0, 0, 0);"
			"}\n";
}

QString UI_Styles::label_title()
{
	return
			"QLabel {"
			"	color: #000000;"
			"	font-size: 26px;"
			"	font-weight: bold;"
			"}\n";
}

QString UI_Styles::radio_button()
{
	return
			"QRadioButton {"
			"	color: #000000;"
			"}\n"
//			"QRadioButton::indicator {"
//			"	"
//			"}\n"
//			"QRadioButton::indicator:checked {"
//			"	border: 2px solid red;"
//			"}\n"
//			"QRadioButton::indicator:unchecked {"
//			"	background-color: yellow;"
//			"}\n";
			;
}

QString UI_Styles::start_list_widget()
{
	return
			"QListWidget {"
			"	color: #000000;"
			"	background-color: #F6F8FA;"
			"}\n"
			"QListWidget::item:hover {"
			"	background-color: #EEEFF2;"
			"}\n";
}


/********************* BUTTONS *********************/

QString UI_Styles::button_main()
{
	return
			"	color: #24292F;"
			"	background-color: #F6F8FA;"
			"	border: 2px solid #D5D8DA;"
			"	border-radius: 6%;"
			"	padding: 8px;";
}

QString UI_Styles::button_default()
{
	QString button =
			QString("QPushButton {")
			+ button_main()
			+ "}\n";
	QString hover =
			"QPushButton:hover {"
			"	background-color: #F6F8FA;"
			"	border-color: #B4D2F3;"
			"}\n";
	QString pressed =
			"QPushButton:pressed {"
			"	background-color: #EEEFF2;"
			"	border-color: #CFD0D3;"
			"}\n";
	QString disabled =
			"QPushButton:disabled {"
			"	color: #959da5;"
			"}\n";

	return button + hover + pressed + disabled;
}

QString UI_Styles::button_primary()
{
	QString button =
			QString("QPushButton {")
			+ button_main() +
			"	color: #FFFFFF;"
			"	background-color: #2DA44E;"
			"	border-color: #2A9147;"
			"}\n";
	QString hover =
			"QPushButton:hover {"
			"	border-color: #ABDBB9;"
			"}\n";
	QString pressed =
			"QPushButton:pressed {"
			"	background-color: #298E46;"
			"	border-color: #277E41;"
			"}\n";
	QString disabled =
			"QPushButton:disabled {"
			"	background-color: #94D3A2;"
			"	border-color: #82B98F"
			"}\n";

	return button + hover + pressed + disabled;
}

QString UI_Styles::button_danger()
{
	QString button =
			QString("QPushButton {")
			+ button_main() +
			"	color: #D1303B;"
			"}\n";
	QString hover =
			"QPushButton:hover {"
			"	border-color: #EAA7AD;"
			"}\n";
	QString pressed =
			"QPushButton:pressed {"
			"	color: #FFFFFF;"
			"	background-color: #A40E26;"
			"	border-color: #901125;"
			"}\n";
	QString disabled =
			"QPushButton:disabled {"
			"	color: #E28D94;"
			"}\n";

	return button + hover + pressed + disabled;
}
