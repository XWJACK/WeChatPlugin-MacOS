//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "CALayerDelegate-Protocol.h"
#import "IMMMessageImageExt-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class CAShapeLayer, NSImage, NSImageView, NSString;

@interface MMImageMessageCellView : MMMessageCellView <IMMMessageImageExt, NSPasteboardItemDataProvider, CALayerDelegate>
{
    struct CGRect _imgDrawRect;
    long long _resizeCountInDrawRect;
    BOOL _isStartDownloadManully;
    BOOL _isOriginalImage;
    BOOL _isMidImage;
    NSImage *_displayedImage;
    NSString *_displayedImagePath;
    NSImageView *_displayedImageView;
    CAShapeLayer *_highlightLayer;
    CAShapeLayer *_strokeLayer;
    NSString *_cdnKey;
}

+ (BOOL)isCellViewDisplayAsLongRect:(id)arg1;
+ (struct CGSize)_displaySizeForMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct CGSize)displaySizeForImageSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2;
+ (id)defaultImageWithSize:(struct CGSize)arg1;
+ (id)defaultImage;
+ (id)downloadFailedImage;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(nonatomic) BOOL isMidImage; // @synthesize isMidImage=_isMidImage;
@property(nonatomic) BOOL isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(nonatomic) BOOL isStartDownloadManully; // @synthesize isStartDownloadManully=_isStartDownloadManully;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) NSImageView *displayedImageView; // @synthesize displayedImageView=_displayedImageView;
@property(retain, nonatomic) NSString *displayedImagePath; // @synthesize displayedImagePath=_displayedImagePath;
@property(retain, nonatomic) NSImage *displayedImage; // @synthesize displayedImage=_displayedImage;
- (void).cxx_destruct;
- (void)updateDisplayImage;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)contextMenuExport;
- (void)contextMenuOpen;
- (id)getReferMenuItem;
- (id)getOpenMenuItem;
- (id)getOperationMenuItem;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (id)acceptablePasteTypes;
- (id)draggingImage;
- (struct CGRect)clickableArea;
- (BOOL)draggingEnabled;
- (void)imageDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)failedImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2 message:(id)arg3;
- (void)originalImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2 message:(id)arg3;
- (void)thumbImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)previewItemURL;
- (void)resendMessage;
- (void)_tellDelegateToUpdatePreview;
- (void)_tellDelegateToResize;
- (struct CGRect)_failedImageDisplayRect;
- (void)_updateGeometry;
- (void)_newBounds;
- (void)redrawLocalView;
- (void)_drawImageWithRect:(struct CGRect)arg1 shouldUpdateImage:(unsigned char)arg2;
- (void)setBorderAndHighlightBackground;
- (void)drawRectWithBubbleMask:(unsigned char)arg1;
- (void)drawRectWithoutBubbleMask;
- (void)drawImage;
- (void)updateImageFrame;
- (void)updateHighlightMaskView;
- (void)populateWithMessage:(id)arg1;
- (void)checkCellView:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

