//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (Ext)
+ (id)changeGrayImage:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (id)imageTintedWithColor:(id)arg1;
- (id)imageRotated:(float)arg1;
- (id)GIFRepresentation;
- (id)PNGRepresentation;
- (id)compressedJPEGImageDataWithQuality:(float)arg1;
- (id)compressedJPEGImageWithQuality:(float)arg1;
- (id)convertImageToRGBData;
- (id)JPEGRepresentationForCompression;
- (unsigned char)isGrayColorSpace;
- (id)JPEGRepresentation;
- (unsigned long long)tiffDataLength;
- (void)drawWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double height;
@property(nonatomic) double width;
@end
