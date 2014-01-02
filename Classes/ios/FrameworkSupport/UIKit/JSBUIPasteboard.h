#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@import UIKit;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBUIPasteboard <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (getter = isPersistent, nonatomic) BOOL persistent;
@property (nonatomic, copy) NSString *string;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, copy) UIImage *image;
@property (readonly, nonatomic) NSInteger changeCount;
@property (nonatomic, copy) NSArray *URLs;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSArray *strings;
@property (nonatomic, copy) NSArray *items;
@property (readonly, nonatomic) NSString *name;

+ (UIPasteboard *)generalPasteboard;
+ (UIPasteboard *)pasteboardWithName:(NSString *)pasteboardName create:(BOOL)create;
+ (UIPasteboard *)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(NSString *)pasteboardName;

- (NSArray *)pasteboardTypes;
- (BOOL)containsPasteboardTypes:(NSArray *)pasteboardTypes;
- (NSData *)dataForPasteboardType:(NSString *)pasteboardType;
- (id)valueForPasteboardType:(NSString *)pasteboardType;
- (void)setValue:(id)value forPasteboardType:(NSString *)pasteboardType;
- (void)setData:(NSData *)data forPasteboardType:(NSString *)pasteboardType;
- (NSArray *)pasteboardTypesForItemSet:(NSIndexSet *)itemSet;
- (BOOL)containsPasteboardTypes:(NSArray *)pasteboardTypes inItemSet:(NSIndexSet *)itemSet;
- (NSIndexSet *)itemSetWithPasteboardTypes:(NSArray *)pasteboardTypes;
- (NSArray *)valuesForPasteboardType:(NSString *)pasteboardType inItemSet:(NSIndexSet *)itemSet;
- (NSArray *)dataForPasteboardType:(NSString *)pasteboardType inItemSet:(NSIndexSet *)itemSet;
- (void)addItems:(NSArray *)items;

#pragma clang diagnostic pop

@end
