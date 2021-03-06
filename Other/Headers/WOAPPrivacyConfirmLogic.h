//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WOAPObject;

@interface WOAPPrivacyConfirmLogic : MMObject
{
    CDUnknownBlockType _completionBlock;
    WOAPObject *_requestObj;
}

+ (BOOL)isNeedPrivacyConfirm;
+ (void)setForcePrivacyConfirmRequirement;
@property(retain, nonatomic) WOAPObject *requestObj; // @synthesize requestObj=_requestObj;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)bizStringFromWOAPObjectType:(long long)arg1;
- (void)completionPrivacyConfirmLogicWithResult:(long long)arg1;
- (void)requestPrivacyConfirmrequirement:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

