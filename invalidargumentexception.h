#ifndef _H
#define INVALIDARGUMENTEXCEPTION_H

#include <exception>

#include <QException>
#include <QString>

class ExceptionMauvaisFormatImage : public QException {
public:
    ExceptionMauvaisFormatImage(QString s) : s_(s) {}
    virtual void raise() {throw *this;}
    ExceptionMauvaisFormatImage *clone() const { return new ExceptionMauvaisFormatImage(*this);}
    virtual QString what() {return s_;}
private:
    QString s_;
};
#endif // INVALIDARGUMENTEXCEPTION_H
