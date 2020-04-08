//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface KvDataPkg : PBGeneratedMessage
{
    unsigned int hasUin:1;
    unsigned int hasCliver:1;
    unsigned int hasNettype:1;
    unsigned int hasDevicemodel:1;
    unsigned int hasDevicebrand:1;
    unsigned int hasOsname:1;
    unsigned int hasOsversion:1;
    unsigned int hasLanguagever:1;
    unsigned int hasDatatype:1;
    unsigned int uin;
    unsigned int cliver;
    unsigned int nettype;
    unsigned int datatype;
    NSMutableArray *mutableDataitemsList;
    NSString *devicemodel;
    NSString *devicebrand;
    NSString *osname;
    NSString *osversion;
    NSString *languagever;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetDatatype:) unsigned int datatype; // @synthesize datatype;
@property(readonly, nonatomic) BOOL hasDatatype; // @synthesize hasDatatype;
@property(retain, nonatomic, setter=SetLanguagever:) NSString *languagever; // @synthesize languagever;
@property(readonly, nonatomic) BOOL hasLanguagever; // @synthesize hasLanguagever;
@property(retain, nonatomic, setter=SetOsversion:) NSString *osversion; // @synthesize osversion;
@property(readonly, nonatomic) BOOL hasOsversion; // @synthesize hasOsversion;
@property(retain, nonatomic, setter=SetOsname:) NSString *osname; // @synthesize osname;
@property(readonly, nonatomic) BOOL hasOsname; // @synthesize hasOsname;
@property(retain, nonatomic, setter=SetDevicebrand:) NSString *devicebrand; // @synthesize devicebrand;
@property(readonly, nonatomic) BOOL hasDevicebrand; // @synthesize hasDevicebrand;
@property(retain, nonatomic, setter=SetDevicemodel:) NSString *devicemodel; // @synthesize devicemodel;
@property(readonly, nonatomic) BOOL hasDevicemodel; // @synthesize hasDevicemodel;
@property(retain, nonatomic) NSMutableArray *mutableDataitemsList; // @synthesize mutableDataitemsList;
@property(nonatomic, setter=SetNettype:) unsigned int nettype; // @synthesize nettype;
@property(readonly, nonatomic) BOOL hasNettype; // @synthesize hasNettype;
@property(nonatomic, setter=SetCliver:) unsigned int cliver; // @synthesize cliver;
@property(readonly, nonatomic) BOOL hasCliver; // @synthesize hasCliver;
@property(nonatomic, setter=SetUin:) unsigned int uin; // @synthesize uin;
@property(readonly, nonatomic) BOOL hasUin; // @synthesize hasUin;
- (void).cxx_destruct;
- (void)addDataitems:(id)arg1;
- (void)addDataitemsFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *dataitems; // @dynamic dataitems;
- (id)dataitemsList;
- (id)init;

@end
