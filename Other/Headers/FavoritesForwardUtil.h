//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FavoritesForwardUtil : NSObject
{
}

+ (id)ConvertOpenSDKAppBrandMsg2FavData:(id)arg1;
+ (id)ConvertAppBrandMsg2FavData:(id)arg1;
+ (id)GetRecordRealChatNameByMsg:(id)arg1;
+ (id)ConvertProductMsg2FavData:(id)arg1;
+ (id)ConvertLocationMsg2FavData:(id)arg1;
+ (id)ConvertTextMsg2FavData:(id)arg1;
+ (id)getGroupDispName:(id)arg1 NeedSelf:(BOOL)arg2;
+ (id)GetRecordForwardTitleByUser:(id)arg1 brand:(id)arg2;
+ (id)getFavTextCellText:(id)arg1;
+ (id)GetRecordDataDesc:(id)arg1;
+ (id)GetRecordDesc:(id)arg1;
+ (id)GetRecordInfo:(id)arg1;
+ (id)GetFavDataItemSourceByMsg:(id)arg1;
+ (id)genFavRecordSubTimeStringByUInt:(unsigned int)arg1;
+ (id)GetRecordDataTimeByMsg:(id)arg1;
+ (id)GetRecordDataNameByMsg:(id)arg1;
+ (id)ConvertMsg2FavData:(id)arg1 useToForward:(BOOL)arg2;
+ (id)GetFavDataItemSourceByMsg:(id)arg1 AndReader:(id)arg2;
+ (id)ConvertReaderWrap2FavData:(id)arg1;
+ (id)getMessageWrapTitleFromMsgList:(id)arg1;
+ (id)ConvertMsgList2MsgWrap:(id)arg1 useToForward:(BOOL)arg2;
+ (BOOL)favoritesItemIsForwardable:(id)arg1;
+ (id)forwardFavoriteItem:(id)arg1 toUser:(id)arg2;
+ (id)convertToMsgType:(id)arg1;

@end

