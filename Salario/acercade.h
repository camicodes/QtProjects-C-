#ifndef ACERCADE_H
#define ACERCADE_H

#include <QDialog>

namespace Ui {
class Acercade;
}

class Acercade : public QDialog
{
    Q_OBJECT

public:
    explicit Acercade(QWidget *parent = nullptr);
    ~Acercade();

private:
    Ui::Acercade *ui;
};

#endif // ACERCADE_H
