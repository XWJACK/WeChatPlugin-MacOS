//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, JSAPIBaseResponse, NSMutableArray, NSString;

@interface JSAuthorizeResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasJsapiBaseresponse:1;
    unsigned int hasAppname:1;
    unsigned int hasAppiconUrl:1;
    unsigned int hasCancelWording:1;
    unsigned int hasAllowWording:1;
    unsigned int hasApplyWording:1;
    BaseResponse *baseResponse;
    JSAPIBaseResponse *jsapiBaseresponse;
    NSMutableArray *mutableScopeListList;
    NSString *appname;
    NSString *appiconUrl;
    NSString *cancelWording;
    NSString *allowWording;
    NSString *applyWording;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetApplyWording:) NSString *applyWording; // @synthesize applyWording;
@property(readonly, nonatomic) BOOL hasApplyWording; // @synthesize hasApplyWording;
@property(retain, nonatomic, setter=SetAllowWording:) NSString *allowWording; // @synthesize allowWording;
@property(readonly, nonatomic) BOOL hasAllowWording; // @synthesize hasAllowWording;
@property(retain, nonatomic, setter=SetCancelWording:) NSString *cancelWording; // @synthesize cancelWording;
@property(readonly, nonatomic) BOOL hasCancelWording; // @synthesize hasCancelWording;
@property(retain, nonatomic, setter=SetAppiconUrl:) NSString *appiconUrl; // @synthesize appiconUrl;
@property(readonly, nonatomic) BOOL hasAppiconUrl; // @synthesize hasAppiconUrl;
@property(retain, nonatomic, setter=SetAppname:) NSString *appname; // @synthesize appname;
@property(readonly, nonatomic) BOOL hasAppname; // @synthesize hasAppname;
@property(retain, nonatomic) NSMutableArray *mutableScopeListList; // @synthesize mutableScopeListList;
@property(retain, nonatomic, setter=SetJsapiBaseresponse:) JSAPIBaseResponse *jsapiBaseresponse; // @synthesize jsapiBaseresponse;
@property(readonly, nonatomic) BOOL hasJsapiBaseresponse; // @synthesize hasJsapiBaseresponse;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addScopeList:(id)arg1;
- (void)addScopeListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
- (id)scopeListList;
- (id)init;

@end

