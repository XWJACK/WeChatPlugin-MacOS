//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMHandoffItem, NSIndexSet;

@protocol MMHandoffServiceExt <NSObject>

@optional
- (void)onUpdateHandoffExpt:(BOOL)arg1;
- (void)onReceiveNewHandoff:(MMHandoffItem *)arg1;
- (void)onClearHandoffUnread;
- (void)didHandoffItemUploadingFromPhone:(MMHandoffItem *)arg1;
- (void)didHandoffItemFailedUploadFromPhone:(MMHandoffItem *)arg1;
- (void)didHandoffItemDeleteFromPhone:(MMHandoffItem *)arg1;
- (void)didHandoffItemFinishUploadFromPhone:(MMHandoffItem *)arg1;
- (void)didHandoffRefreshItem:(int)arg1 withIndexSet:(NSIndexSet *)arg2;
@end

