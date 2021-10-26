//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CountryCodePickerDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class CountryCodeWrap, MMUILabel, NSString, PhoneNumberFormatLogic, WCAccountControlData, WCRedesignButtonItem, WCRedesignTextItem;
@protocol WCAccountLoginMainPageViewDelegate;

@interface WCAccountLoginMainPageView : UIView <WCBaseInfoItemDelegate, CountryCodePickerDelegate>
{
    id <WCAccountLoginMainPageViewDelegate> _delegate;
    WCAccountControlData *_data;
    unsigned long long _page;
    NSString *_countryCode;
    NSString *_phoneNumber;
    NSString *_username;
    NSString *_password;
    double _horizonPadding;
    UIView *_phoneNumberPageView;
    MMUILabel *_phoneNumberTitleLabel;
    WCRedesignButtonItem *_regionButtonItem;
    WCRedesignTextItem *_phoneNumberTextItem;
    UIView *_otherPageView;
    MMUILabel *_otherTitleLabel;
    WCRedesignTextItem *_accountTextItem;
    WCRedesignTextItem *_passwordTextItem;
    CDUnknownBlockType _checkNextHandler;
    CDUnknownBlockType _nextHandler;
    CountryCodeWrap *_countryCodeWrap;
    PhoneNumberFormatLogic *_phoneNumberFormatLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PhoneNumberFormatLogic *phoneNumberFormatLogic; // @synthesize phoneNumberFormatLogic=_phoneNumberFormatLogic;
@property(retain, nonatomic) CountryCodeWrap *countryCodeWrap; // @synthesize countryCodeWrap=_countryCodeWrap;
@property(copy, nonatomic) CDUnknownBlockType nextHandler; // @synthesize nextHandler=_nextHandler;
@property(copy, nonatomic) CDUnknownBlockType checkNextHandler; // @synthesize checkNextHandler=_checkNextHandler;
@property(retain, nonatomic) WCRedesignTextItem *passwordTextItem; // @synthesize passwordTextItem=_passwordTextItem;
@property(retain, nonatomic) WCRedesignTextItem *accountTextItem; // @synthesize accountTextItem=_accountTextItem;
@property(retain, nonatomic) MMUILabel *otherTitleLabel; // @synthesize otherTitleLabel=_otherTitleLabel;
@property(retain, nonatomic) UIView *otherPageView; // @synthesize otherPageView=_otherPageView;
@property(retain, nonatomic) WCRedesignTextItem *phoneNumberTextItem; // @synthesize phoneNumberTextItem=_phoneNumberTextItem;
@property(retain, nonatomic) WCRedesignButtonItem *regionButtonItem; // @synthesize regionButtonItem=_regionButtonItem;
@property(retain, nonatomic) MMUILabel *phoneNumberTitleLabel; // @synthesize phoneNumberTitleLabel=_phoneNumberTitleLabel;
@property(retain, nonatomic) UIView *phoneNumberPageView; // @synthesize phoneNumberPageView=_phoneNumberPageView;
@property(nonatomic) double horizonPadding; // @synthesize horizonPadding=_horizonPadding;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(retain, nonatomic) WCAccountControlData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WCAccountLoginMainPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)formatPhoneNumber;
- (void)showCountryCodePicker;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateCurrentPageLayout;
- (id)currentPageView;
- (void)updateOtherPageLayout;
- (void)initOtherPage;
- (void)updatePhoneNumberPageLayout;
- (void)initPhoneNumberPage;
- (void)initPages;
- (void)addNextHandler:(CDUnknownBlockType)arg1;
- (id)checkNext;
- (void)addCheckNextHandler:(CDUnknownBlockType)arg1;
- (void)changeToPage:(unsigned long long)arg1;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

