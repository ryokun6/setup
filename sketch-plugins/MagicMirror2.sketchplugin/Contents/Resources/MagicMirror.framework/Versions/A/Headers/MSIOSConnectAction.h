//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPopoverAction.h"

#import "NSMenuDelegate.h"

@class BCPopover, NSString;

@interface MSIOSConnectAction : MSPopoverAction <NSMenuDelegate>
{
    BCPopover *_popover;
}


- (void)clientsChangedNotification:(id)arg1;
- (id)connectionController;
- (void)dealloc;
- (void)iOSConnectAction:(id)arg1;
- (id)imageName;
- (id)initWithDocument:(id)arg1;
- (id)label;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
- (id)popoverViewController;
- (id)tooltip;
- (BOOL)validate;
- (BOOL)validateToolbarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

