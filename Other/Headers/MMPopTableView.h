//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MMTableView, NSData, NSMutableArray, NSString;
@protocol MMPopTableViewDelegate;

@interface MMPopTableView : MMViewController <AccountServiceExt, NSTableViewDelegate, NSTableViewDataSource>
{
    NSData *_kvRowPrototype;
    id <MMPopTableViewDelegate> _delegate;
    MMTableView *_tableView;
    NSMutableArray *_dataSouce;
}

+ (id)sharedInspector;
@property(retain, nonatomic) NSMutableArray *dataSouce; // @synthesize dataSouce=_dataSouce;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMPopTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isShown;
- (void)hide;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 withTableItemList:(id)arg3 preferredEdge:(unsigned long long)arg4;
- (void)onUserLogout;
- (void)addBubbleMaskToView:(id)arg1;
- (struct CGPath *)newShapeMaskPathForRect:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)destroy;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
