#ifndef DESFIRE_MODEL_H
#define DESFIRE_MODEL_H

#include <QAbstractTableModel>
#include <QVector>
#include "desfire/card.h"


class DesfireModel : public QAbstractItemModel
{
  Q_OBJECT
  public:
    DesfireModel(QObject *parent = NULL);
    ~DesfireModel();
    int rowCount(const QModelIndex &parent = QModelIndex()) const ;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QModelIndex index(int row, int column,
        const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &) const;

    int addCard(Card *card);

  private:
    Item *rootItem;
};


#endif // DESFIRE_MODEL_H