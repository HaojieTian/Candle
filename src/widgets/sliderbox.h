#ifndef SLIDERBOX_H
#define SLIDERBOX_H

#include <QWidget>

namespace Ui {
class SliderBox;
}

class SliderBox : public QWidget
{
    Q_OBJECT
public:
    explicit SliderBox(QWidget *parent = 0);
    ~SliderBox();

    int value();
    void setValue(int value);

    int currentValue();
    void setCurrentValue(int value);

    int sliderPosition();
    void setSliderPosition(int position);

    bool isCheckable() const;
    void setCheckable(bool checkable);

    int ratio() const;
    void setRatio(int ratio);

    int minimum() const;
    void setMinimum(int minimum);

    int maximum() const;
    void setMaximum(int maximum);

    QString suffix();
    void setSuffix(QString suffix);

    QString title();
    void setTitle(QString title);

signals:
    void valueUserChanged();
    void valueChanged();

private slots:
    void on_txtValue_editingFinished();

    void on_sliValue_actionTriggered(int action);

    void on_sliValue_valueChanged(int value);

private:
    Ui::SliderBox *ui;

    bool m_isCheckable;
    int m_ratio;

    int m_currentValue;
    int m_minimum, m_maximum;
};

#endif // SLIDERBOX_H