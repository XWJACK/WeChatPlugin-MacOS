//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMessageCellView, MMMessageTableItem, NSEvent;

@protocol MMMessageCellViewDelegate <NSObject>

@optional
- (MMMessageCellView *)replaceLastShowLocateTipsCellViewWith:(MMMessageCellView *)arg1;
- (void)messageCellView:(MMMessageCellView *)arg1 multiSelectWithEvent:(NSEvent *)arg2;
- (double)messageCellViewMultiSelectionLeftPadding:(MMMessageCellView *)arg1;
- (BOOL)messageCellViewIsMultiSelectionMode:(MMMessageCellView *)arg1;
- (void)messageCellViewDidStartMultiSelection:(MMMessageCellView *)arg1;
- (void)messageCellView:(MMMessageCellView *)arg1 didClickOutsideClickableArea:(MMMessageTableItem *)arg2;
- (void)messageCellViewLocateMessage:(MMMessageCellView *)arg1 createTime:(unsigned int)arg2;
- (double)messageCellViewNeedsContainerWidth;
- (void)messageCellViewNeedsReload:(MMMessageCellView *)arg1;
- (void)messageCellView:(MMMessageCellView *)arg1 needreload:(NSEvent *)arg2;
- (void)messageCellView:(MMMessageCellView *)arg1 gotMisdirectedKeyDown:(NSEvent *)arg2;
- (void)messageCellViewDidStartForwardMessageCommand:(MMMessageCellView *)arg1;
- (void)messageCellView:(MMMessageCellView *)arg1 didUpdatePreviewContentWithItem:(MMMessageTableItem *)arg2;
- (void)messageCellView:(MMMessageCellView *)arg1 didPasteQuotedMessageWithItem:(MMMessageTableItem *)arg2;
- (void)messageCellView:(MMMessageCellView *)arg1 didMentionContactWithItem:(MMMessageTableItem *)arg2;
- (void)messageCellView:(MMMessageCellView *)arg1 didDoubleClickOnAvatarWithItem:(MMMessageTableItem *)arg2;
- (void)messageCellView:(MMMessageCellView *)arg1 didClickOnAvatarWithItem:(MMMessageTableItem *)arg2;
- (void)messageCellViewNeedsHeightRecalculated:(MMMessageCellView *)arg1;
- (void)messageCellView:(MMMessageCellView *)arg1 showDetailWindowWithItem:(MMMessageTableItem *)arg2;
@end

