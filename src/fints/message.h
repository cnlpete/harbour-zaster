/*
    Copyright (C) 2018-19 Sebastian J. Wolf

    This file is part of Zaster Banker.

    Zaster Banker is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Zaster Banker is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Zaster Banker. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MESSAGE_H
#define MESSAGE_H

#include "fintselement.h"
#include "segment.h"
#include <QList>

class Message : public FinTsElement
{
    Q_OBJECT
public:
    explicit Message(FinTsElement *parent = 0);
    ~Message();
    void setSegments(const QList<Segment *> &newSegments);
    QList<Segment *> getSegments();
    void addSegment(Segment *segment);
    int getCompleteLength();
    int getNextSegmentNumber();

signals:
    void segmentsChanged(const QList<Segment *> &newSegments);

public slots:

private:
    QList<Segment *> segments;
};

#endif // MESSAGE_H
