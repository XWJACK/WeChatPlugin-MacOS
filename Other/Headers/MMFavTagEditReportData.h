//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFavTagEditReportData : NSObject
{
    unsigned int _favId;
    unsigned int _itemTagCount;
    unsigned int _totalTagCount;
    unsigned int _scene;
    unsigned int _favType;
    unsigned int _favSourceTime;
    unsigned int _favSourceType;
    unsigned int _editTagPath;
    NSString *_favInfoLength;
    NSString *_favSourceInfo;
}

@property(nonatomic) unsigned int editTagPath; // @synthesize editTagPath=_editTagPath;
@property(retain, nonatomic) NSString *favSourceInfo; // @synthesize favSourceInfo=_favSourceInfo;
@property(nonatomic) unsigned int favSourceType; // @synthesize favSourceType=_favSourceType;
@property(nonatomic) unsigned int favSourceTime; // @synthesize favSourceTime=_favSourceTime;
@property(retain, nonatomic) NSString *favInfoLength; // @synthesize favInfoLength=_favInfoLength;
@property(nonatomic) unsigned int favType; // @synthesize favType=_favType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int totalTagCount; // @synthesize totalTagCount=_totalTagCount;
@property(nonatomic) unsigned int itemTagCount; // @synthesize itemTagCount=_itemTagCount;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
- (void).cxx_destruct;
- (void)configWithFavItem:(id)arg1;
- (id)init;

@end

