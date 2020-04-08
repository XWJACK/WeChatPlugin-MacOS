//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LbsLocationNew, NSMutableArray, NSString;

@interface ConfigRequest : PBGeneratedMessage
{
    unsigned int hasH5Version:1;
    unsigned int hasLanguage:1;
    unsigned int hasScene:1;
    unsigned int hasBusinessType:1;
    unsigned int hasNetType:1;
    unsigned int hasLocation:1;
    unsigned int h5Version;
    unsigned int scene;
    NSMutableArray *mutableConfigKeysList;
    NSString *language;
    unsigned long long businessType;
    NSString *netType;
    LbsLocationNew *location;
    NSMutableArray *mutableExtParamsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableExtParamsList; // @synthesize mutableExtParamsList;
@property(retain, nonatomic, setter=SetLocation:) LbsLocationNew *location; // @synthesize location;
@property(readonly, nonatomic) BOOL hasLocation; // @synthesize hasLocation;
@property(retain, nonatomic, setter=SetNetType:) NSString *netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(nonatomic, setter=SetBusinessType:) unsigned long long businessType; // @synthesize businessType;
@property(readonly, nonatomic) BOOL hasBusinessType; // @synthesize hasBusinessType;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetLanguage:) NSString *language; // @synthesize language;
@property(readonly, nonatomic) BOOL hasLanguage; // @synthesize hasLanguage;
@property(nonatomic, setter=SetH5Version:) unsigned int h5Version; // @synthesize h5Version;
@property(readonly, nonatomic) BOOL hasH5Version; // @synthesize hasH5Version;
@property(retain, nonatomic) NSMutableArray *mutableConfigKeysList; // @synthesize mutableConfigKeysList;
- (void).cxx_destruct;
- (void)addExtParams:(id)arg1;
- (void)addExtParamsFromArray:(id)arg1;
- (void)addConfigKeysFromArray:(id)arg1;
- (void)addConfigKeys:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *extParams; // @dynamic extParams;
- (id)extParamsList;
@property(retain, nonatomic) NSMutableArray *configKeys; // @dynamic configKeys;
- (id)configKeysList;
- (id)init;

@end

