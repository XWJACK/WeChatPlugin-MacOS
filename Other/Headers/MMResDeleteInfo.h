//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMResDeleteUrlInfo, NSString;

@interface MMResDeleteInfo : NSObject
{
    unsigned int _resType;
    unsigned int _subResType;
    unsigned int _scene;
    unsigned int _reportId;
    NSString *_sampleId;
    MMResDeleteUrlInfo *_resDeleteUrlInfo;
}

@property(retain, nonatomic) MMResDeleteUrlInfo *resDeleteUrlInfo; // @synthesize resDeleteUrlInfo=_resDeleteUrlInfo;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int subResType; // @synthesize subResType=_subResType;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;
- (void).cxx_destruct;
- (void)dealloc;

@end

