#ifndef SALARIO_H
#define SALARIO_H

#include <QObject>

class salario : public QObject
{
    Q_OBJECT
public:
    explicit salario(QObject *parent = nullptr);

signals:

};

#endif // SALARIO_H
