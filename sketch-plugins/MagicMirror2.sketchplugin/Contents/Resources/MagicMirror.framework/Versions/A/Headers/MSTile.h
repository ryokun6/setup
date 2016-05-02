//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseRenderTile.h"

@class MSContentDrawView, MSContentTile, MSEventHandlerManager, MSOverlayTile, MSPage, MSTileRenderer, NSArray, NSThread;

@interface MSTile : MSBaseRenderTile
{
    BOOL _drawPixelated;
    BOOL _disableSubpixelAntialiasing;
    BOOL _drawDottedDirtyRect;
    BOOL _shouldHideOverlayControls;
    BOOL _drawingIsCancelled;
    BOOL _didDrawAtLeastOnce;
    double _zoomValue;
    MSEventHandlerManager *_handlerManager;
    MSContentDrawView *_parentView;
    MSOverlayTile *_overlayTile;
    MSContentTile *_contentTile;
    NSThread *_thread;
    MSPage *_pageForContent;
    MSPage *_pageForOverlay;
    NSArray *_artboardFrames;
    MSTileRenderer *_tileRenderer;
    struct CGPoint _distanceFromScrollOrigin;
}


@property(retain, nonatomic) NSArray *artboardFrames; // @synthesize artboardFrames=_artboardFrames;
- (void)cancelDrawing;
@property(retain, nonatomic) MSContentTile *contentTile; // @synthesize contentTile=_contentTile;
- (id)description;
@property(nonatomic) BOOL didDrawAtLeastOnce; // @synthesize didDrawAtLeastOnce=_didDrawAtLeastOnce;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) struct CGPoint distanceFromScrollOrigin; // @synthesize distanceFromScrollOrigin=_distanceFromScrollOrigin;
- (void)drawArtboardBackgroundsInContext:(struct CGContext *)arg1;
- (void)drawContentInContext:(struct CGContext *)arg1;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawOverlayInContext:(struct CGContext *)arg1;
- (void)drawPage:(id)arg1 inContext:(struct CGContext *)arg2;
@property(nonatomic) BOOL drawPixelated; // @synthesize drawPixelated=_drawPixelated;
@property(nonatomic) BOOL drawingIsCancelled; // @synthesize drawingIsCancelled=_drawingIsCancelled;
- (void)enableDebugFramesInner:(BOOL)arg1 outer:(BOOL)arg2;
@property(retain, nonatomic) MSEventHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
- (id)init;
- (void)moveToPosition:(struct CGPoint)arg1;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 origin:(struct CGPoint)arg2;
@property(retain, nonatomic) MSOverlayTile *overlayTile; // @synthesize overlayTile=_overlayTile;
@property(retain, nonatomic) MSPage *pageForContent; // @synthesize pageForContent=_pageForContent;
@property(retain, nonatomic) MSPage *pageForOverlay; // @synthesize pageForOverlay=_pageForOverlay;
@property(nonatomic) __weak MSContentDrawView *parentView; // @synthesize parentView=_parentView;
- (void)pixelGridDidChange;
- (struct CGRect)rectForContentTile;
- (void)refreshContentRect:(struct CGRect)arg1 page:(id)arg2;
- (void)refreshOverlayRect:(struct CGRect)arg1 page:(id)arg2;
- (void)removeFromSuperlayer;
- (double)scaleForContentTile;
- (void)scheduleContentRefresh:(id)arg1;
- (struct CGPoint)scrollOriginAdjustedForPixelZoom;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) MSTileRenderer *tileRenderer; // @synthesize tileRenderer=_tileRenderer;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
- (BOOL)shouldDrawPixelated;

@end

