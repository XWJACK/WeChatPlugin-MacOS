//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface JbmBitrateRsParam : PBGeneratedMessage
{
    unsigned int hasCountry:1;
    unsigned int hasSetBitrateFlag:1;
    unsigned int hasBitrate:1;
    unsigned int hasFrmNumFlag:1;
    unsigned int hasFrmNum:1;
    unsigned int hasOffsetDelay:1;
    unsigned int hasJitterForInit:1;
    unsigned int hasExJitterFactorForAudioWifi1:1;
    unsigned int hasCmJitterFactorForAudioWifi1:1;
    unsigned int hasExConstForAudioWifi1:1;
    unsigned int hasCmConstForAudioWifi1:1;
    unsigned int hasExJitterFactorForAudioWifi2:1;
    unsigned int hasCmJitterFactorForAudioWifi2:1;
    unsigned int hasExConstForAudioWifi2:1;
    unsigned int hasCmConstForAudioWifi2:1;
    unsigned int hasExJitterFactorForAudioWifi3:1;
    unsigned int hasCmJitterFactorForAudioWifi3:1;
    unsigned int hasExConstForAudioWifi3:1;
    unsigned int hasCmConstForAudioWifi3:1;
    unsigned int hasExJitterFactorForAvwifi1:1;
    unsigned int hasCmJitterFactorForAvwifi1:1;
    unsigned int hasExConstForAvwifi1:1;
    unsigned int hasCmConstForAvwifi1:1;
    unsigned int hasExJitterFactorForAvwifi2:1;
    unsigned int hasCmJitterFactorForAvwifi2:1;
    unsigned int hasExConstForAvwifi2:1;
    unsigned int hasCmConstForAvwifi2:1;
    unsigned int hasExJitterFactorForAvwifi3:1;
    unsigned int hasCmJitterFactorForAvwifi3:1;
    unsigned int hasExConstForAvwifi3:1;
    unsigned int hasCmConstForAvwifi3:1;
    unsigned int hasExJitterFactorForAv3G1:1;
    unsigned int hasCmJitterFactorForAv3G1:1;
    unsigned int hasExConstForAv3G1:1;
    unsigned int hasCmConstForAv3G1:1;
    unsigned int hasExJitterFactorForAv3G2:1;
    unsigned int hasCmJitterFactorForAv3G2:1;
    unsigned int hasExConstForAv3G2:1;
    unsigned int hasCmConstForAv3G2:1;
    unsigned int hasExJitterFactorForAv3G3:1;
    unsigned int hasCmJitterFactorForAv3G3:1;
    unsigned int hasExConstForAv3G3:1;
    unsigned int hasCmConstForAv3G3:1;
    unsigned int hasExJitterFactorForAv2G:1;
    unsigned int hasCmJitterFactorForAv2G:1;
    unsigned int hasExConstForAv2G:1;
    unsigned int hasCmConstForAv2G:1;
    int country;
    int setBitrateFlag;
    int bitrate;
    int frmNumFlag;
    int frmNum;
    int offsetDelay;
    int jitterForInit;
    int exConstForAudioWifi1;
    int cmConstForAudioWifi1;
    int exConstForAudioWifi2;
    int cmConstForAudioWifi2;
    int exConstForAudioWifi3;
    int cmConstForAudioWifi3;
    int exConstForAvwifi1;
    int cmConstForAvwifi1;
    int exConstForAvwifi2;
    int cmConstForAvwifi2;
    int exConstForAvwifi3;
    int cmConstForAvwifi3;
    int exConstForAv3G1;
    int cmConstForAv3G1;
    int exConstForAv3G2;
    int cmConstForAv3G2;
    int exConstForAv3G3;
    int cmConstForAv3G3;
    int exConstForAv2G;
    int cmConstForAv2G;
    double exJitterFactorForAudioWifi1;
    double cmJitterFactorForAudioWifi1;
    double exJitterFactorForAudioWifi2;
    double cmJitterFactorForAudioWifi2;
    double exJitterFactorForAudioWifi3;
    double cmJitterFactorForAudioWifi3;
    double exJitterFactorForAvwifi1;
    double cmJitterFactorForAvwifi1;
    double exJitterFactorForAvwifi2;
    double cmJitterFactorForAvwifi2;
    double exJitterFactorForAvwifi3;
    double cmJitterFactorForAvwifi3;
    double exJitterFactorForAv3G1;
    double cmJitterFactorForAv3G1;
    double exJitterFactorForAv3G2;
    double cmJitterFactorForAv3G2;
    double exJitterFactorForAv3G3;
    double cmJitterFactorForAv3G3;
    double exJitterFactorForAv2G;
    double cmJitterFactorForAv2G;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCmConstForAv2G:) int cmConstForAv2G; // @synthesize cmConstForAv2G;
@property(readonly, nonatomic) BOOL hasCmConstForAv2G; // @synthesize hasCmConstForAv2G;
@property(nonatomic, setter=SetExConstForAv2G:) int exConstForAv2G; // @synthesize exConstForAv2G;
@property(readonly, nonatomic) BOOL hasExConstForAv2G; // @synthesize hasExConstForAv2G;
@property(nonatomic, setter=SetCmJitterFactorForAv2G:) double cmJitterFactorForAv2G; // @synthesize cmJitterFactorForAv2G;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAv2G; // @synthesize hasCmJitterFactorForAv2G;
@property(nonatomic, setter=SetExJitterFactorForAv2G:) double exJitterFactorForAv2G; // @synthesize exJitterFactorForAv2G;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAv2G; // @synthesize hasExJitterFactorForAv2G;
@property(nonatomic, setter=SetCmConstForAv3G3:) int cmConstForAv3G3; // @synthesize cmConstForAv3G3;
@property(readonly, nonatomic) BOOL hasCmConstForAv3G3; // @synthesize hasCmConstForAv3G3;
@property(nonatomic, setter=SetExConstForAv3G3:) int exConstForAv3G3; // @synthesize exConstForAv3G3;
@property(readonly, nonatomic) BOOL hasExConstForAv3G3; // @synthesize hasExConstForAv3G3;
@property(nonatomic, setter=SetCmJitterFactorForAv3G3:) double cmJitterFactorForAv3G3; // @synthesize cmJitterFactorForAv3G3;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAv3G3; // @synthesize hasCmJitterFactorForAv3G3;
@property(nonatomic, setter=SetExJitterFactorForAv3G3:) double exJitterFactorForAv3G3; // @synthesize exJitterFactorForAv3G3;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAv3G3; // @synthesize hasExJitterFactorForAv3G3;
@property(nonatomic, setter=SetCmConstForAv3G2:) int cmConstForAv3G2; // @synthesize cmConstForAv3G2;
@property(readonly, nonatomic) BOOL hasCmConstForAv3G2; // @synthesize hasCmConstForAv3G2;
@property(nonatomic, setter=SetExConstForAv3G2:) int exConstForAv3G2; // @synthesize exConstForAv3G2;
@property(readonly, nonatomic) BOOL hasExConstForAv3G2; // @synthesize hasExConstForAv3G2;
@property(nonatomic, setter=SetCmJitterFactorForAv3G2:) double cmJitterFactorForAv3G2; // @synthesize cmJitterFactorForAv3G2;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAv3G2; // @synthesize hasCmJitterFactorForAv3G2;
@property(nonatomic, setter=SetExJitterFactorForAv3G2:) double exJitterFactorForAv3G2; // @synthesize exJitterFactorForAv3G2;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAv3G2; // @synthesize hasExJitterFactorForAv3G2;
@property(nonatomic, setter=SetCmConstForAv3G1:) int cmConstForAv3G1; // @synthesize cmConstForAv3G1;
@property(readonly, nonatomic) BOOL hasCmConstForAv3G1; // @synthesize hasCmConstForAv3G1;
@property(nonatomic, setter=SetExConstForAv3G1:) int exConstForAv3G1; // @synthesize exConstForAv3G1;
@property(readonly, nonatomic) BOOL hasExConstForAv3G1; // @synthesize hasExConstForAv3G1;
@property(nonatomic, setter=SetCmJitterFactorForAv3G1:) double cmJitterFactorForAv3G1; // @synthesize cmJitterFactorForAv3G1;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAv3G1; // @synthesize hasCmJitterFactorForAv3G1;
@property(nonatomic, setter=SetExJitterFactorForAv3G1:) double exJitterFactorForAv3G1; // @synthesize exJitterFactorForAv3G1;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAv3G1; // @synthesize hasExJitterFactorForAv3G1;
@property(nonatomic, setter=SetCmConstForAvwifi3:) int cmConstForAvwifi3; // @synthesize cmConstForAvwifi3;
@property(readonly, nonatomic) BOOL hasCmConstForAvwifi3; // @synthesize hasCmConstForAvwifi3;
@property(nonatomic, setter=SetExConstForAvwifi3:) int exConstForAvwifi3; // @synthesize exConstForAvwifi3;
@property(readonly, nonatomic) BOOL hasExConstForAvwifi3; // @synthesize hasExConstForAvwifi3;
@property(nonatomic, setter=SetCmJitterFactorForAvwifi3:) double cmJitterFactorForAvwifi3; // @synthesize cmJitterFactorForAvwifi3;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAvwifi3; // @synthesize hasCmJitterFactorForAvwifi3;
@property(nonatomic, setter=SetExJitterFactorForAvwifi3:) double exJitterFactorForAvwifi3; // @synthesize exJitterFactorForAvwifi3;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAvwifi3; // @synthesize hasExJitterFactorForAvwifi3;
@property(nonatomic, setter=SetCmConstForAvwifi2:) int cmConstForAvwifi2; // @synthesize cmConstForAvwifi2;
@property(readonly, nonatomic) BOOL hasCmConstForAvwifi2; // @synthesize hasCmConstForAvwifi2;
@property(nonatomic, setter=SetExConstForAvwifi2:) int exConstForAvwifi2; // @synthesize exConstForAvwifi2;
@property(readonly, nonatomic) BOOL hasExConstForAvwifi2; // @synthesize hasExConstForAvwifi2;
@property(nonatomic, setter=SetCmJitterFactorForAvwifi2:) double cmJitterFactorForAvwifi2; // @synthesize cmJitterFactorForAvwifi2;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAvwifi2; // @synthesize hasCmJitterFactorForAvwifi2;
@property(nonatomic, setter=SetExJitterFactorForAvwifi2:) double exJitterFactorForAvwifi2; // @synthesize exJitterFactorForAvwifi2;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAvwifi2; // @synthesize hasExJitterFactorForAvwifi2;
@property(nonatomic, setter=SetCmConstForAvwifi1:) int cmConstForAvwifi1; // @synthesize cmConstForAvwifi1;
@property(readonly, nonatomic) BOOL hasCmConstForAvwifi1; // @synthesize hasCmConstForAvwifi1;
@property(nonatomic, setter=SetExConstForAvwifi1:) int exConstForAvwifi1; // @synthesize exConstForAvwifi1;
@property(readonly, nonatomic) BOOL hasExConstForAvwifi1; // @synthesize hasExConstForAvwifi1;
@property(nonatomic, setter=SetCmJitterFactorForAvwifi1:) double cmJitterFactorForAvwifi1; // @synthesize cmJitterFactorForAvwifi1;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAvwifi1; // @synthesize hasCmJitterFactorForAvwifi1;
@property(nonatomic, setter=SetExJitterFactorForAvwifi1:) double exJitterFactorForAvwifi1; // @synthesize exJitterFactorForAvwifi1;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAvwifi1; // @synthesize hasExJitterFactorForAvwifi1;
@property(nonatomic, setter=SetCmConstForAudioWifi3:) int cmConstForAudioWifi3; // @synthesize cmConstForAudioWifi3;
@property(readonly, nonatomic) BOOL hasCmConstForAudioWifi3; // @synthesize hasCmConstForAudioWifi3;
@property(nonatomic, setter=SetExConstForAudioWifi3:) int exConstForAudioWifi3; // @synthesize exConstForAudioWifi3;
@property(readonly, nonatomic) BOOL hasExConstForAudioWifi3; // @synthesize hasExConstForAudioWifi3;
@property(nonatomic, setter=SetCmJitterFactorForAudioWifi3:) double cmJitterFactorForAudioWifi3; // @synthesize cmJitterFactorForAudioWifi3;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAudioWifi3; // @synthesize hasCmJitterFactorForAudioWifi3;
@property(nonatomic, setter=SetExJitterFactorForAudioWifi3:) double exJitterFactorForAudioWifi3; // @synthesize exJitterFactorForAudioWifi3;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAudioWifi3; // @synthesize hasExJitterFactorForAudioWifi3;
@property(nonatomic, setter=SetCmConstForAudioWifi2:) int cmConstForAudioWifi2; // @synthesize cmConstForAudioWifi2;
@property(readonly, nonatomic) BOOL hasCmConstForAudioWifi2; // @synthesize hasCmConstForAudioWifi2;
@property(nonatomic, setter=SetExConstForAudioWifi2:) int exConstForAudioWifi2; // @synthesize exConstForAudioWifi2;
@property(readonly, nonatomic) BOOL hasExConstForAudioWifi2; // @synthesize hasExConstForAudioWifi2;
@property(nonatomic, setter=SetCmJitterFactorForAudioWifi2:) double cmJitterFactorForAudioWifi2; // @synthesize cmJitterFactorForAudioWifi2;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAudioWifi2; // @synthesize hasCmJitterFactorForAudioWifi2;
@property(nonatomic, setter=SetExJitterFactorForAudioWifi2:) double exJitterFactorForAudioWifi2; // @synthesize exJitterFactorForAudioWifi2;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAudioWifi2; // @synthesize hasExJitterFactorForAudioWifi2;
@property(nonatomic, setter=SetCmConstForAudioWifi1:) int cmConstForAudioWifi1; // @synthesize cmConstForAudioWifi1;
@property(readonly, nonatomic) BOOL hasCmConstForAudioWifi1; // @synthesize hasCmConstForAudioWifi1;
@property(nonatomic, setter=SetExConstForAudioWifi1:) int exConstForAudioWifi1; // @synthesize exConstForAudioWifi1;
@property(readonly, nonatomic) BOOL hasExConstForAudioWifi1; // @synthesize hasExConstForAudioWifi1;
@property(nonatomic, setter=SetCmJitterFactorForAudioWifi1:) double cmJitterFactorForAudioWifi1; // @synthesize cmJitterFactorForAudioWifi1;
@property(readonly, nonatomic) BOOL hasCmJitterFactorForAudioWifi1; // @synthesize hasCmJitterFactorForAudioWifi1;
@property(nonatomic, setter=SetExJitterFactorForAudioWifi1:) double exJitterFactorForAudioWifi1; // @synthesize exJitterFactorForAudioWifi1;
@property(readonly, nonatomic) BOOL hasExJitterFactorForAudioWifi1; // @synthesize hasExJitterFactorForAudioWifi1;
@property(nonatomic, setter=SetJitterForInit:) int jitterForInit; // @synthesize jitterForInit;
@property(readonly, nonatomic) BOOL hasJitterForInit; // @synthesize hasJitterForInit;
@property(nonatomic, setter=SetOffsetDelay:) int offsetDelay; // @synthesize offsetDelay;
@property(readonly, nonatomic) BOOL hasOffsetDelay; // @synthesize hasOffsetDelay;
@property(nonatomic, setter=SetFrmNum:) int frmNum; // @synthesize frmNum;
@property(readonly, nonatomic) BOOL hasFrmNum; // @synthesize hasFrmNum;
@property(nonatomic, setter=SetFrmNumFlag:) int frmNumFlag; // @synthesize frmNumFlag;
@property(readonly, nonatomic) BOOL hasFrmNumFlag; // @synthesize hasFrmNumFlag;
@property(nonatomic, setter=SetBitrate:) int bitrate; // @synthesize bitrate;
@property(readonly, nonatomic) BOOL hasBitrate; // @synthesize hasBitrate;
@property(nonatomic, setter=SetSetBitrateFlag:) int setBitrateFlag; // @synthesize setBitrateFlag;
@property(readonly, nonatomic) BOOL hasSetBitrateFlag; // @synthesize hasSetBitrateFlag;
@property(nonatomic, setter=SetCountry:) int country; // @synthesize country;
@property(readonly, nonatomic) BOOL hasCountry; // @synthesize hasCountry;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
