//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchTableCellView.h"

@class MMTextField, NSProgressIndicator;

@interface MMSearchLoadingTableCellView : MMSearchTableCellView
{
    MMTextField *_descriptionLabel;
    NSProgressIndicator *_loadingIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) MMTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (void)populateWithResultItem:(id)arg1 keyword:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

