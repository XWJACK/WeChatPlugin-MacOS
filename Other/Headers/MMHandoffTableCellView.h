//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "NSMenuDelegate-Protocol.h"
#import "SDWebImageManagerDelegate-Protocol.h"

@class AFHTTPSessionManager, CAShapeLayer, MMCTTextView, MMHandoffItem, MMView, NSString, NSTrackingArea, SVGImageView;

@interface MMHandoffTableCellView : NSTableCellView <NSMenuDelegate, SDWebImageManagerDelegate>
{
    MMHandoffItem *_item;
    SVGImageView *_iconImageView;
    MMCTTextView *_titleLabel;
    MMView *_box;
    NSTrackingArea *_trackingArea;
    CAShapeLayer *_backgroudLayer;
    AFHTTPSessionManager *_downloadMgr;
}

@property(retain, nonatomic) AFHTTPSessionManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) CAShapeLayer *backgroudLayer; // @synthesize backgroudLayer=_backgroudLayer;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) MMView *box; // @synthesize box=_box;
@property(retain, nonatomic) MMCTTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SVGImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMHandoffItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setupTrackingArea;
- (void)updateBackLayer:(double)arg1;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
- (void)updateUI:(id)arg1 withBox:(BOOL)arg2;
- (void)menuWillOpen:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)openWithDefault;
- (void)openHandoffByMenu;
- (void)saveHandoffas;
- (id)contentMenu;
- (id)menuForEvent:(id)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (BOOL)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

