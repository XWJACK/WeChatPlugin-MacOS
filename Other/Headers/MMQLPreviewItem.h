//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewItem-Protocol.h"

@class FavoritesItem, FavoritesItemDataField, MessageData, NSImage, NSString, NSURL, WCContactData;

@interface MMQLPreviewItem : NSObject <QLPreviewItem>
{
    BOOL _isParentMsg;
    NSURL *_itemUrl;
    NSString *_itemTitle;
    NSString *_itemUrlString;
    NSString *_videoThumbPath;
    unsigned long long _previewType;
    WCContactData *_contact;
    MessageData *_message;
    NSString *_messageUniqueId;
    FavoritesItem *_favItem;
    FavoritesItemDataField *_dataField;
    NSString *_parentRecordUniqueId;
    NSImage *_urlImage;
    NSURL *_webUrl;
    struct CGSize _originalImageSize;
}

@property(retain, nonatomic) NSURL *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSImage *urlImage; // @synthesize urlImage=_urlImage;
@property(retain, nonatomic) NSString *parentRecordUniqueId; // @synthesize parentRecordUniqueId=_parentRecordUniqueId;
@property(nonatomic) BOOL isParentMsg; // @synthesize isParentMsg=_isParentMsg;
@property(retain, nonatomic) FavoritesItemDataField *dataField; // @synthesize dataField=_dataField;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) NSString *messageUniqueId; // @synthesize messageUniqueId=_messageUniqueId;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) NSString *videoThumbPath; // @synthesize videoThumbPath=_videoThumbPath;
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(retain, nonatomic) NSString *itemUrlString; // @synthesize itemUrlString=_itemUrlString;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSURL *itemUrl; // @synthesize itemUrl=_itemUrl;
- (void).cxx_destruct;
- (BOOL)canSaveToFavorite;
- (BOOL)canForward;
- (id)itemMessageThumbImage;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *previewItemURL;
@property(readonly) NSString *previewItemTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

