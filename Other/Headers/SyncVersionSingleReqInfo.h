//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface SyncVersionSingleReqInfo : PBGeneratedMessage
{
    unsigned int hasWxaUserName:1;
    unsigned int hasLocalAppVersion:1;
    unsigned int hasCodePackageVersion:1;
    unsigned int localAppVersion;
    unsigned int codePackageVersion;
    NSString *wxaUserName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCodePackageVersion:) unsigned int codePackageVersion; // @synthesize codePackageVersion;
@property(readonly, nonatomic) BOOL hasCodePackageVersion; // @synthesize hasCodePackageVersion;
@property(nonatomic, setter=SetLocalAppVersion:) unsigned int localAppVersion; // @synthesize localAppVersion;
@property(readonly, nonatomic) BOOL hasLocalAppVersion; // @synthesize hasLocalAppVersion;
@property(retain, nonatomic, setter=SetWxaUserName:) NSString *wxaUserName; // @synthesize wxaUserName;
@property(readonly, nonatomic) BOOL hasWxaUserName; // @synthesize hasWxaUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

