#pragma once
#include <QWidget>
class CodeWidget;
class QVBoxLayout;
class QHBoxLayout;
class QPushButton;
class QFile;
class Editor : public QWidget {
	Q_OBJECT
private:
	CodeWidget *m_code_editor;
	QVBoxLayout *m_layout;
	QHBoxLayout *m_buttons;
	QPushButton *m_new;
	QPushButton *m_open;
	QPushButton *m_save;
	QPushButton *m_saveAs;
	QPushButton *m_compile;

	QFile *m_current_file;
protected:
	virtual bool eventFilter(QObject *obj, QEvent *event) override;
public:
	Editor(QWidget *parent = Q_NULLPTR);
	~Editor();
private slots:
	void clear();
	void open();
	void save();
	void saveAs();
	void compile();
};