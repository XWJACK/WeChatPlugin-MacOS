//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoritesItemDataField.h"

@class NSString;

@interface FavoritesRecordDataField : FavoritesItemDataField
{
    unsigned int _msgLocalId;
    NSString *_chatName;
}

@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (void).cxx_destruct;
- (id)GetDataFilePath;
- (id)GetThumbFilePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

