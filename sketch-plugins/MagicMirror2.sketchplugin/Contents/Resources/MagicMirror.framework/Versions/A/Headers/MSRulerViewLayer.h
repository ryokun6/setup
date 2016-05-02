//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSArray, NSColor, NSNumberFormatter;

@interface MSRulerViewLayer : CALayer
{
    BOOL _shouldDrawGuides;
    unsigned long long _axis;
    NSNumberFormatter *_formatter;
    NSColor *_snapColor;
    double _zoomValue;
    double _baseLine;
    NSArray *_guides;
    NSColor *_lineColor;
    struct CGRect _occupiedRegion;
}


@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(nonatomic) double baseLine; // @synthesize baseLine=_baseLine;
- (void)drawAlignmentGuides;
- (void)drawBackground;
- (void)drawBackgroundForLabel:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawLineAtPosition:(double)arg1 withOptions:(unsigned long long)arg2;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2 drawBackground:(BOOL)arg3;
- (void)drawMetrics;
- (void)drawMetricsWithOptions:(long long)arg1;
- (void)drawOccupiedRegion;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSArray *guides; // @synthesize guides=_guides;
- (id)init;
- (BOOL)isFlipped;
@property(retain, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) struct CGRect occupiedRegion; // @synthesize occupiedRegion=_occupiedRegion;
- (long long)rulerHeight;
- (long long)rulerLength;
@property(nonatomic) BOOL shouldDrawGuides; // @synthesize shouldDrawGuides=_shouldDrawGuides;
@property(retain, nonatomic) NSColor *snapColor; // @synthesize snapColor=_snapColor;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;

@end

