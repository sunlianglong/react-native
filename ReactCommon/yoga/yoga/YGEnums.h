/**
 * Copyright (c) 2014-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#pragma once

#include "YGMacros.h"

YG_EXTERN_C_BEGIN

#define YGFlexDirectionCount 4
typedef YG_ENUM_BEGIN(YGFlexDirection) {
  YGFlexDirectionColumn, YGFlexDirectionColumnReverse, YGFlexDirectionRow,
      YGFlexDirectionRowReverse,
}
YG_ENUM_END(YGFlexDirection);

#define YGMeasureModeCount 3
typedef YG_ENUM_BEGIN(YGMeasureMode) {
  YGMeasureModeUndefined, YGMeasureModeExactly, YGMeasureModeAtMost,
}
YG_ENUM_END(YGMeasureMode);

#define YGPrintOptionsCount 3
typedef YG_ENUM_BEGIN(YGPrintOptions) {
  YGPrintOptionsLayout = 1, YGPrintOptionsStyle = 2, YGPrintOptionsChildren = 4,
}
YG_ENUM_END(YGPrintOptions);

#define YGEdgeCount 9
typedef YG_ENUM_BEGIN(YGEdge) {
  YGEdgeLeft, YGEdgeTop, YGEdgeRight, YGEdgeBottom, YGEdgeStart, YGEdgeEnd, YGEdgeHorizontal,
      YGEdgeVertical, YGEdgeAll,
}
YG_ENUM_END(YGEdge);

#define YGPositionTypeCount 2
typedef YG_ENUM_BEGIN(YGPositionType) {
  YGPositionTypeRelative, YGPositionTypeAbsolute,
}
YG_ENUM_END(YGPositionType);

#define YGDimensionCount 2
typedef YG_ENUM_BEGIN(YGDimension) {
  YGDimensionWidth, YGDimensionHeight,
}
YG_ENUM_END(YGDimension);

#define YGJustifyCount 5
typedef YG_ENUM_BEGIN(YGJustify) {
  YGJustifyFlexStart, YGJustifyCenter, YGJustifyFlexEnd, YGJustifySpaceBetween,
      YGJustifySpaceAround,
}
YG_ENUM_END(YGJustify);

#define YGDirectionCount 3
typedef YG_ENUM_BEGIN(YGDirection) {
  YGDirectionInherit, YGDirectionLTR, YGDirectionRTL,
}
YG_ENUM_END(YGDirection);

#define YGLogLevelCount 5
typedef YG_ENUM_BEGIN(YGLogLevel) {
  YGLogLevelError, YGLogLevelWarn, YGLogLevelInfo, YGLogLevelDebug, YGLogLevelVerbose,
}
YG_ENUM_END(YGLogLevel);

#define YGWrapCount 2
typedef YG_ENUM_BEGIN(YGWrap) {
  YGWrapNoWrap, YGWrapWrap,
}
YG_ENUM_END(YGWrap);

#define YGOverflowCount 3
typedef YG_ENUM_BEGIN(YGOverflow) {
  YGOverflowVisible, YGOverflowHidden, YGOverflowScroll,
}
YG_ENUM_END(YGOverflow);

#define YGExperimentalFeatureCount 2
typedef YG_ENUM_BEGIN(YGExperimentalFeature) {
  YGExperimentalFeatureRounding, YGExperimentalFeatureWebFlexBasis,
}
YG_ENUM_END(YGExperimentalFeature);

#define YGAlignCount 6
typedef YG_ENUM_BEGIN(YGAlign) {
  YGAlignAuto, YGAlignFlexStart, YGAlignCenter, YGAlignFlexEnd, YGAlignStretch, YGAlignBaseline,
}
YG_ENUM_END(YGAlign);

#define YGUnitCount 3
typedef YG_ENUM_BEGIN(YGUnit) {
  YGUnitUndefined, YGUnitPixel, YGUnitPercent,
}
YG_ENUM_END(YGUnit);

YG_EXTERN_C_END
