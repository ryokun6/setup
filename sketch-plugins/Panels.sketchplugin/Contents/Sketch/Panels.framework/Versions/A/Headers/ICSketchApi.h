//
//  ICSketchApi.h
//  Panels
//
//  Created by Tomáš Hanáček on 4/7/16.
//  Copyright © 2016 Tomas Hanacek. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ICPanelsManager.h"

@interface ICSketchApi : NSObject

- (id)initWithBundle:(NSBundle *)bundle panelsManager:(ICPanelsManager *)panelsManager;
- (void)processImages:(NSArray *)images selection:(NSArray *)selection identifier:(NSString *)identifier layerBlock:(void (^)(id layer, NSImage *image))layerBlock;
- (void)processImages:(NSArray *)images selection:(NSArray *)selection identifier:(NSString *)identifier commandIdentifier:(NSString *)commandIdentifier layerBlock:(void (^)(id layer, NSImage *image))layerBlock;
- (void)setPlaceholderImageToLayers:(NSArray *)layers;
- (void)setFillForLayers:(NSArray *)layers image:(NSImage *)imageNS;
- (void)setFill:(id)layer image:(id)imageObj;
- (void)setFillOverride:(id)layer image:(NSImage *)imageNS ancestorIDs:(NSArray *)ancestorIDs;
- (ICPanelsManager *)panelsManager;

@end
