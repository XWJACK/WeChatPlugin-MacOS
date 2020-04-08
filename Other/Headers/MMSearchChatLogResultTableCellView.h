//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchTableCellView.h"

@class MMTextField, NSImageView;

@interface MMSearchChatLogResultTableCellView : MMSearchTableCellView
{
    NSImageView *_thumbnailImageView;
    MMTextField *_titleLabel;
    MMTextField *_descriptionLabel;
    NSImageView *_openIMIcon;
    CDUnknownBlockType _didLeftMouseUpBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didLeftMouseUpBlock; // @synthesize didLeftMouseUpBlock=_didLeftMouseUpBlock;
@property(retain, nonatomic) NSImageView *openIMIcon; // @synthesize openIMIcon=_openIMIcon;
@property(retain, nonatomic) MMTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (double)changeLineHight;
- (id)getSearchKeyWordsByString:(id)arg1;
- (id)hightLightedAttrString:(id)arg1;
- (id)summaryAttributedStringWithSessionInfo:(id)arg1 searchResult:(id)arg2;
- (id)nicknameAttributedStringWithString:(id)arg1;
- (id)makeDescLabelAttrString:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutOpenIMIcon;
- (id)getCurrentChatUserName;
- (void)populateWithResultItem:(id)arg1 keyword:(id)arg2;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

