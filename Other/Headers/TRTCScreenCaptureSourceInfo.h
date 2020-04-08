//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSImage, NSString;

@interface TRTCScreenCaptureSourceInfo : NSObject
{
    long long _type;
    NSString *_sourceId;
    NSString *_sourceName;
    NSDictionary *_extInfo;
    struct CGSize _thumbnailSize;
    struct CGSize _iconSize;
}

@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *icon;
@property(readonly, nonatomic) NSImage *thumbnail;
- (id)init;

@end

