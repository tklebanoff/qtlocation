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

#ifndef QLANDMARKATTRIBUTEFILTER_H
#define QLANDMARKATTRIBUTEFILTER_H

#include "qlandmarkfilter.h"
#include <QVariant>
#include <QString>
#include <QStringList>

QTM_BEGIN_NAMESPACE
class QLandmark;

class QLandmarkAttributeFilterPrivate;
class Q_LOCATION_EXPORT QLandmarkAttributeFilter : public QLandmarkFilter
{
public:
    QLandmarkAttributeFilter();
    QLandmarkAttributeFilter(const QLandmarkFilter &other);
    virtual ~QLandmarkAttributeFilter();

    enum OperationType{AndOperation, OrOperation};

    QVariant attribute(const QString &key) const;
    void setAttribute(const QString &key, const QVariant &value, QLandmarkFilter::MatchFlags flags =0);
    void setAttributes(const QStringList &key, const QVariant &value, QLandmarkFilter::MatchFlags flags=0);
    void removeAttribute(const QString &key);
    void clearAttributes();
    QStringList attributeKeys() const;

    QLandmarkFilter::MatchFlags matchFlags(const QString &key) const;

    OperationType operationType() const;
    void setOperationType(OperationType operationType);

private:
    Q_DECLARE_LANDMARKFILTER_PRIVATE(QLandmarkAttributeFilter)
};

QTM_END_NAMESPACE

#endif
