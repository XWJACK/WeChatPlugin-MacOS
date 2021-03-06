//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMAppReferHelper : NSObject
{
}

+ (void)reportClickReferMsg:(id)arg1 chatName:(id)arg2 hasLocalMsg:(BOOL)arg3;
+ (void)reportSendReferMsg:(id)arg1 chatName:(id)arg2;
+ (void)reportMenuReferMsg:(id)arg1 chatName:(id)arg2;
+ (id)cacheSenderKeyForMessage:(id)arg1;
+ (id)cacheSummaryKeyForMessage:(id)arg1;
+ (id)cacheKeyForMessage:(id)arg1;
+ (id)getRecordDataDesc:(id)arg1;
+ (id)noteTitleWithMessage:(id)arg1;
+ (id)defaultImageThumbnail;
+ (id)defaultVideoIconThumbnailWithMessage:(id)arg1;
+ (id)defaultVideoThumbnailWithSize:(struct CGSize)arg1;
+ (struct CGSize)stickerDisplaySizeWithImage:(id)arg1;
+ (struct CGSize)thumbDisplaySizeWithImage:(id)arg1 sizeConstraint:(struct CGSize)arg2;
+ (struct CGSize)thumbDisplaySizeWithMessage:(id)arg1 sizeConstraint:(struct CGSize)arg2;
+ (BOOL)hasReferAttachment:(id)arg1 foundReferRange:(struct _NSRange *)arg2;
+ (struct CGSize)referCellSizeWithAttachmentObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)formattedPreviewSimpleReferTextAttrStringWithContent:(id)arg1 handleEmoji:(BOOL)arg2;
+ (id)formattedPreviewReferTextAttrStringWithContent:(id)arg1;
+ (id)formattedNormalReferTextAttrStringWithContent:(id)arg1 multipleLine:(BOOL)arg2;
+ (double)changeLineWidth;

@end

