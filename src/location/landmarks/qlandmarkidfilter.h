/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Mobility Components.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QLANDMARKIDFILTER_H
#define QLANDMARKIDFILTER_H

#include "qlandmarkid.h"
#include "qlandmarkfilter.h"
#include <QList>

QTM_BEGIN_NAMESPACE

class QLandmarkIdFilterPrivate;
class Q_LOCATION_EXPORT QLandmarkIdFilter : public QLandmarkFilter
{
public:
    QLandmarkIdFilter(const QList<QLandmarkId> &ids =  QList<QLandmarkId>());
    QLandmarkIdFilter(const QLandmarkFilter &other);
    virtual ~QLandmarkIdFilter();

    QList<QLandmarkId> landmarkIds() const;
    void setLandmarkIds(const QList<QLandmarkId> &ids);
    void append(const QLandmarkId &id);
    void remove(const QLandmarkId &id);
    void clear();

    QLandmarkIdFilter &operator<<(const QLandmarkId &);

private:
    Q_DECLARE_LANDMARKFILTER_PRIVATE(QLandmarkIdFilter)
};

QTM_END_NAMESPACE

#endif
