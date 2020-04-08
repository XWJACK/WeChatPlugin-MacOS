//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface NewInviteFriend : PBGeneratedMessage
{
    unsigned int hasUin:1;
    unsigned int hasNickName:1;
    unsigned int hasEmail:1;
    unsigned int hasRemark:1;
    unsigned int hasUserName:1;
    unsigned int hasFriendType:1;
    unsigned int hasGroupId:1;
    unsigned int hasImgIdx:1;
    unsigned int uin;
    unsigned int friendType;
    unsigned int groupId;
    NSString *nickName;
    NSString *email;
    NSString *remark;
    NSString *userName;
    NSString *imgIdx;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetImgIdx:) NSString *imgIdx; // @synthesize imgIdx;
@property(readonly, nonatomic) BOOL hasImgIdx; // @synthesize hasImgIdx;
@property(nonatomic, setter=SetGroupId:) unsigned int groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
@property(nonatomic, setter=SetFriendType:) unsigned int friendType; // @synthesize friendType;
@property(readonly, nonatomic) BOOL hasFriendType; // @synthesize hasFriendType;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetRemark:) NSString *remark; // @synthesize remark;
@property(readonly, nonatomic) BOOL hasRemark; // @synthesize hasRemark;
@property(retain, nonatomic, setter=SetEmail:) NSString *email; // @synthesize email;
@property(readonly, nonatomic) BOOL hasEmail; // @synthesize hasEmail;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(nonatomic, setter=SetUin:) unsigned int uin; // @synthesize uin;
@property(readonly, nonatomic) BOOL hasUin; // @synthesize hasUin;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

