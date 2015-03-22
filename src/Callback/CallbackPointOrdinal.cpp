#include "CallbackPointOrdinal.h"
#include "EngaugeAssert.h"
#include "Logger.h"
#include "Point.h"
#include "Transformation.h"

CallbackPointOrdinal::CallbackPointOrdinal(const LineStyle &lineStyle,
                                           const QString &curveName,
                                           const QPointF &posScreen) :
  m_lineStyle (lineStyle),
  m_curveName (curveName),
  m_posScreen (posScreen)
{
}

CallbackSearchReturn CallbackPointOrdinal::callback (const QString &curveName,
                                                     const Point &point)
{
  if (curveName == m_curveName) {


  }

  return CALLBACK_SEARCH_RETURN_CONTINUE;
}

double CallbackPointOrdinal::ordinal () const
{
  return 0;
}