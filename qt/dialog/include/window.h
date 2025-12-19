#ifndef QT_WINDOW_H
#define QT_WINDOW_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QDialogButtonBox>

class BaseWindow
{
public:
	explicit BaseWindow(QWidget* parent = nullptr);
private:
	QDialogButtonBox* buttonbox;
	QPushButton* m_button_ok;
	QPushButton* m_button_cancel;
};

class Window1 : public BaseWindow
{

public:
	explicit Window1(QWidget* parent = nullptr) : BaseWindow(parent);

private:
	QPushButton* m_button1;
	QPushButton* m_button2;
	QPushButton* m_button3;
	QVBoxLayout* vbox1;
	
	QRadioButton* m_rbutton1;
	QRadioButton* m_rbutton2;
	QRadioButton* m_rbutton3;
	QVBoxLayout* vbox2;

	QGroupBox* groupbox1;
	QGroupBox* groupbox2;
	QHBoxLayout* hbox;

};

class Window2 : public BaseWindow
{
public:
	explicit Window2(QWidget* parent = nullptr) : BaseWindow(parent);
private:
	QPushButton* m_button1;
	QPushButton* m_button2;

	QVBoxLayout* vbox;
};

#endif
