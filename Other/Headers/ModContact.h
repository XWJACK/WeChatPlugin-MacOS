//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class AdditionalContactList, ChatRoomMemberData, CustomizedInfo, NSMutableArray, NSString, PhoneNumListInfo, SKBuiltinBuffer_t, SKBuiltinString_t, SnsUserInfo;

@interface ModContact : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasPyinitial:1;
    unsigned int hasQuanPin:1;
    unsigned int hasSex:1;
    unsigned int hasImgBuf:1;
    unsigned int hasBitMask:1;
    unsigned int hasBitVal:1;
    unsigned int hasImgFlag:1;
    unsigned int hasRemark:1;
    unsigned int hasRemarkPyinitial:1;
    unsigned int hasRemarkQuanPin:1;
    unsigned int hasContactType:1;
    unsigned int hasRoomInfoCount:1;
    unsigned int hasDomainList:1;
    unsigned int hasChatRoomNotify:1;
    unsigned int hasAddContactScene:1;
    unsigned int hasProvince:1;
    unsigned int hasCity:1;
    unsigned int hasSignature:1;
    unsigned int hasPersonalCard:1;
    unsigned int hasHasWeiXinHdHeadImg:1;
    unsigned int hasVerifyFlag:1;
    unsigned int hasVerifyInfo:1;
    unsigned int hasLevel:1;
    unsigned int hasSource:1;
    unsigned int hasWeibo:1;
    unsigned int hasVerifyContent:1;
    unsigned int hasAlias:1;
    unsigned int hasChatRoomOwner:1;
    unsigned int hasWeiboNickname:1;
    unsigned int hasWeiboFlag:1;
    unsigned int hasAlbumStyle:1;
    unsigned int hasAlbumFlag:1;
    unsigned int hasAlbumBgimgId:1;
    unsigned int hasSnsUserInfo:1;
    unsigned int hasCountry:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    unsigned int hasMyBrandList:1;
    unsigned int hasCustomizedInfo:1;
    unsigned int hasChatRoomData:1;
    unsigned int hasHeadImgMd5:1;
    unsigned int hasEncryptUserName:1;
    unsigned int hasIdcardNum:1;
    unsigned int hasRealName:1;
    unsigned int hasMobileHash:1;
    unsigned int hasMobileFullHash:1;
    unsigned int hasAdditionalContactList:1;
    unsigned int hasChatroomVersion:1;
    unsigned int hasExtInfo:1;
    unsigned int hasChatroomMaxCount:1;
    unsigned int hasChatroomType:1;
    unsigned int hasNewChatroomData:1;
    unsigned int hasDeleteFlag:1;
    unsigned int hasDescription:1;
    unsigned int hasCardImgUrl:1;
    unsigned int hasLabelIdlist:1;
    unsigned int hasPhoneNumListInfo:1;
    unsigned int hasWeiDianInfo:1;
    unsigned int hasChatroomInfoVersion:1;
    int sex;
    unsigned int bitMask;
    unsigned int bitVal;
    unsigned int imgFlag;
    unsigned int contactType;
    unsigned int roomInfoCount;
    unsigned int chatRoomNotify;
    unsigned int addContactScene;
    unsigned int personalCard;
    unsigned int hasWeiXinHdHeadImg;
    unsigned int verifyFlag;
    int level;
    unsigned int source;
    unsigned int weiboFlag;
    int albumStyle;
    int albumFlag;
    unsigned int chatroomVersion;
    unsigned int chatroomMaxCount;
    unsigned int chatroomType;
    int deleteFlag;
    unsigned int chatroomInfoVersion;
    SKBuiltinString_t *userName;
    SKBuiltinString_t *nickName;
    SKBuiltinString_t *pyinitial;
    SKBuiltinString_t *quanPin;
    SKBuiltinBuffer_t *imgBuf;
    SKBuiltinString_t *remark;
    SKBuiltinString_t *remarkPyinitial;
    SKBuiltinString_t *remarkQuanPin;
    NSMutableArray *mutableRoomInfoListList;
    SKBuiltinString_t *domainList;
    NSString *province;
    NSString *city;
    NSString *signature;
    NSString *verifyInfo;
    NSString *weibo;
    NSString *verifyContent;
    NSString *alias;
    NSString *chatRoomOwner;
    NSString *weiboNickname;
    NSString *albumBgimgId;
    SnsUserInfo *snsUserInfo;
    NSString *country;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
    NSString *myBrandList;
    CustomizedInfo *customizedInfo;
    NSString *chatRoomData;
    NSString *headImgMd5;
    NSString *encryptUserName;
    NSString *idcardNum;
    NSString *realName;
    NSString *mobileHash;
    NSString *mobileFullHash;
    AdditionalContactList *additionalContactList;
    NSString *extInfo;
    ChatRoomMemberData *newChatroomData;
    NSString *description;
    NSString *cardImgUrl;
    NSString *labelIdlist;
    PhoneNumListInfo *phoneNumListInfo;
    NSString *weiDianInfo;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetChatroomInfoVersion:) unsigned int chatroomInfoVersion; // @synthesize chatroomInfoVersion;
@property(readonly, nonatomic) BOOL hasChatroomInfoVersion; // @synthesize hasChatroomInfoVersion;
@property(retain, nonatomic, setter=SetWeiDianInfo:) NSString *weiDianInfo; // @synthesize weiDianInfo;
@property(readonly, nonatomic) BOOL hasWeiDianInfo; // @synthesize hasWeiDianInfo;
@property(retain, nonatomic, setter=SetPhoneNumListInfo:) PhoneNumListInfo *phoneNumListInfo; // @synthesize phoneNumListInfo;
@property(readonly, nonatomic) BOOL hasPhoneNumListInfo; // @synthesize hasPhoneNumListInfo;
@property(retain, nonatomic, setter=SetLabelIdlist:) NSString *labelIdlist; // @synthesize labelIdlist;
@property(readonly, nonatomic) BOOL hasLabelIdlist; // @synthesize hasLabelIdlist;
@property(retain, nonatomic, setter=SetCardImgUrl:) NSString *cardImgUrl; // @synthesize cardImgUrl;
@property(readonly, nonatomic) BOOL hasCardImgUrl; // @synthesize hasCardImgUrl;
@property(retain, nonatomic, setter=SetDescription:) NSString *description; // @synthesize description;
@property(readonly, nonatomic) BOOL hasDescription; // @synthesize hasDescription;
@property(nonatomic, setter=SetDeleteFlag:) int deleteFlag; // @synthesize deleteFlag;
@property(readonly, nonatomic) BOOL hasDeleteFlag; // @synthesize hasDeleteFlag;
@property(retain, nonatomic, setter=SetNewChatroomData:) ChatRoomMemberData *newChatroomData; // @synthesize newChatroomData;
@property(readonly, nonatomic) BOOL hasNewChatroomData; // @synthesize hasNewChatroomData;
@property(nonatomic, setter=SetChatroomType:) unsigned int chatroomType; // @synthesize chatroomType;
@property(readonly, nonatomic) BOOL hasChatroomType; // @synthesize hasChatroomType;
@property(nonatomic, setter=SetChatroomMaxCount:) unsigned int chatroomMaxCount; // @synthesize chatroomMaxCount;
@property(readonly, nonatomic) BOOL hasChatroomMaxCount; // @synthesize hasChatroomMaxCount;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(nonatomic, setter=SetChatroomVersion:) unsigned int chatroomVersion; // @synthesize chatroomVersion;
@property(readonly, nonatomic) BOOL hasChatroomVersion; // @synthesize hasChatroomVersion;
@property(retain, nonatomic, setter=SetAdditionalContactList:) AdditionalContactList *additionalContactList; // @synthesize additionalContactList;
@property(readonly, nonatomic) BOOL hasAdditionalContactList; // @synthesize hasAdditionalContactList;
@property(retain, nonatomic, setter=SetMobileFullHash:) NSString *mobileFullHash; // @synthesize mobileFullHash;
@property(readonly, nonatomic) BOOL hasMobileFullHash; // @synthesize hasMobileFullHash;
@property(retain, nonatomic, setter=SetMobileHash:) NSString *mobileHash; // @synthesize mobileHash;
@property(readonly, nonatomic) BOOL hasMobileHash; // @synthesize hasMobileHash;
@property(retain, nonatomic, setter=SetRealName:) NSString *realName; // @synthesize realName;
@property(readonly, nonatomic) BOOL hasRealName; // @synthesize hasRealName;
@property(retain, nonatomic, setter=SetIdcardNum:) NSString *idcardNum; // @synthesize idcardNum;
@property(readonly, nonatomic) BOOL hasIdcardNum; // @synthesize hasIdcardNum;
@property(retain, nonatomic, setter=SetEncryptUserName:) NSString *encryptUserName; // @synthesize encryptUserName;
@property(readonly, nonatomic) BOOL hasEncryptUserName; // @synthesize hasEncryptUserName;
@property(retain, nonatomic, setter=SetHeadImgMd5:) NSString *headImgMd5; // @synthesize headImgMd5;
@property(readonly, nonatomic) BOOL hasHeadImgMd5; // @synthesize hasHeadImgMd5;
@property(retain, nonatomic, setter=SetChatRoomData:) NSString *chatRoomData; // @synthesize chatRoomData;
@property(readonly, nonatomic) BOOL hasChatRoomData; // @synthesize hasChatRoomData;
@property(retain, nonatomic, setter=SetCustomizedInfo:) CustomizedInfo *customizedInfo; // @synthesize customizedInfo;
@property(readonly, nonatomic) BOOL hasCustomizedInfo; // @synthesize hasCustomizedInfo;
@property(retain, nonatomic, setter=SetMyBrandList:) NSString *myBrandList; // @synthesize myBrandList;
@property(readonly, nonatomic) BOOL hasMyBrandList; // @synthesize hasMyBrandList;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(retain, nonatomic, setter=SetCountry:) NSString *country; // @synthesize country;
@property(readonly, nonatomic) BOOL hasCountry; // @synthesize hasCountry;
@property(retain, nonatomic, setter=SetSnsUserInfo:) SnsUserInfo *snsUserInfo; // @synthesize snsUserInfo;
@property(readonly, nonatomic) BOOL hasSnsUserInfo; // @synthesize hasSnsUserInfo;
@property(retain, nonatomic, setter=SetAlbumBgimgId:) NSString *albumBgimgId; // @synthesize albumBgimgId;
@property(readonly, nonatomic) BOOL hasAlbumBgimgId; // @synthesize hasAlbumBgimgId;
@property(nonatomic, setter=SetAlbumFlag:) int albumFlag; // @synthesize albumFlag;
@property(readonly, nonatomic) BOOL hasAlbumFlag; // @synthesize hasAlbumFlag;
@property(nonatomic, setter=SetAlbumStyle:) int albumStyle; // @synthesize albumStyle;
@property(readonly, nonatomic) BOOL hasAlbumStyle; // @synthesize hasAlbumStyle;
@property(nonatomic, setter=SetWeiboFlag:) unsigned int weiboFlag; // @synthesize weiboFlag;
@property(readonly, nonatomic) BOOL hasWeiboFlag; // @synthesize hasWeiboFlag;
@property(retain, nonatomic, setter=SetWeiboNickname:) NSString *weiboNickname; // @synthesize weiboNickname;
@property(readonly, nonatomic) BOOL hasWeiboNickname; // @synthesize hasWeiboNickname;
@property(retain, nonatomic, setter=SetChatRoomOwner:) NSString *chatRoomOwner; // @synthesize chatRoomOwner;
@property(readonly, nonatomic) BOOL hasChatRoomOwner; // @synthesize hasChatRoomOwner;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(retain, nonatomic, setter=SetVerifyContent:) NSString *verifyContent; // @synthesize verifyContent;
@property(readonly, nonatomic) BOOL hasVerifyContent; // @synthesize hasVerifyContent;
@property(retain, nonatomic, setter=SetWeibo:) NSString *weibo; // @synthesize weibo;
@property(readonly, nonatomic) BOOL hasWeibo; // @synthesize hasWeibo;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(nonatomic, setter=SetLevel:) int level; // @synthesize level;
@property(readonly, nonatomic) BOOL hasLevel; // @synthesize hasLevel;
@property(retain, nonatomic, setter=SetVerifyInfo:) NSString *verifyInfo; // @synthesize verifyInfo;
@property(readonly, nonatomic) BOOL hasVerifyInfo; // @synthesize hasVerifyInfo;
@property(nonatomic, setter=SetVerifyFlag:) unsigned int verifyFlag; // @synthesize verifyFlag;
@property(readonly, nonatomic) BOOL hasVerifyFlag; // @synthesize hasVerifyFlag;
@property(nonatomic, setter=SetHasWeiXinHdHeadImg:) unsigned int hasWeiXinHdHeadImg; // @synthesize hasWeiXinHdHeadImg;
@property(readonly, nonatomic) BOOL hasHasWeiXinHdHeadImg; // @synthesize hasHasWeiXinHdHeadImg;
@property(nonatomic, setter=SetPersonalCard:) unsigned int personalCard; // @synthesize personalCard;
@property(readonly, nonatomic) BOOL hasPersonalCard; // @synthesize hasPersonalCard;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetCity:) NSString *city; // @synthesize city;
@property(readonly, nonatomic) BOOL hasCity; // @synthesize hasCity;
@property(retain, nonatomic, setter=SetProvince:) NSString *province; // @synthesize province;
@property(readonly, nonatomic) BOOL hasProvince; // @synthesize hasProvince;
@property(nonatomic, setter=SetAddContactScene:) unsigned int addContactScene; // @synthesize addContactScene;
@property(readonly, nonatomic) BOOL hasAddContactScene; // @synthesize hasAddContactScene;
@property(nonatomic, setter=SetChatRoomNotify:) unsigned int chatRoomNotify; // @synthesize chatRoomNotify;
@property(readonly, nonatomic) BOOL hasChatRoomNotify; // @synthesize hasChatRoomNotify;
@property(retain, nonatomic, setter=SetDomainList:) SKBuiltinString_t *domainList; // @synthesize domainList;
@property(readonly, nonatomic) BOOL hasDomainList; // @synthesize hasDomainList;
@property(retain, nonatomic) NSMutableArray *mutableRoomInfoListList; // @synthesize mutableRoomInfoListList;
@property(nonatomic, setter=SetRoomInfoCount:) unsigned int roomInfoCount; // @synthesize roomInfoCount;
@property(readonly, nonatomic) BOOL hasRoomInfoCount; // @synthesize hasRoomInfoCount;
@property(nonatomic, setter=SetContactType:) unsigned int contactType; // @synthesize contactType;
@property(readonly, nonatomic) BOOL hasContactType; // @synthesize hasContactType;
@property(retain, nonatomic, setter=SetRemarkQuanPin:) SKBuiltinString_t *remarkQuanPin; // @synthesize remarkQuanPin;
@property(readonly, nonatomic) BOOL hasRemarkQuanPin; // @synthesize hasRemarkQuanPin;
@property(retain, nonatomic, setter=SetRemarkPyinitial:) SKBuiltinString_t *remarkPyinitial; // @synthesize remarkPyinitial;
@property(readonly, nonatomic) BOOL hasRemarkPyinitial; // @synthesize hasRemarkPyinitial;
@property(retain, nonatomic, setter=SetRemark:) SKBuiltinString_t *remark; // @synthesize remark;
@property(readonly, nonatomic) BOOL hasRemark; // @synthesize hasRemark;
@property(nonatomic, setter=SetImgFlag:) unsigned int imgFlag; // @synthesize imgFlag;
@property(readonly, nonatomic) BOOL hasImgFlag; // @synthesize hasImgFlag;
@property(nonatomic, setter=SetBitVal:) unsigned int bitVal; // @synthesize bitVal;
@property(readonly, nonatomic) BOOL hasBitVal; // @synthesize hasBitVal;
@property(nonatomic, setter=SetBitMask:) unsigned int bitMask; // @synthesize bitMask;
@property(readonly, nonatomic) BOOL hasBitMask; // @synthesize hasBitMask;
@property(retain, nonatomic, setter=SetImgBuf:) SKBuiltinBuffer_t *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(nonatomic, setter=SetSex:) int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(retain, nonatomic, setter=SetQuanPin:) SKBuiltinString_t *quanPin; // @synthesize quanPin;
@property(readonly, nonatomic) BOOL hasQuanPin; // @synthesize hasQuanPin;
@property(retain, nonatomic, setter=SetPyinitial:) SKBuiltinString_t *pyinitial; // @synthesize pyinitial;
@property(readonly, nonatomic) BOOL hasPyinitial; // @synthesize hasPyinitial;
@property(retain, nonatomic, setter=SetNickName:) SKBuiltinString_t *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) SKBuiltinString_t *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (void)addRoomInfoList:(id)arg1;
- (void)addRoomInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *roomInfoList; // @dynamic roomInfoList;
- (id)roomInfoListList;
- (id)init;

@end
