#import <Foundation/NSObject.h>
#include<stdint.h>

@import Foundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBNSUndoManager <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

- (void)beginUndoGrouping;
- (void)endUndoGrouping;
- (NSInteger)groupingLevel;
- (void)disableUndoRegistration;
- (void)enableUndoRegistration;
- (BOOL)isUndoRegistrationEnabled;
- (BOOL)groupsByEvent;
- (void)setGroupsByEvent:(BOOL)groupsByEvent;
- (void)setLevelsOfUndo:(NSUInteger)levels;
- (NSUInteger)levelsOfUndo;
- (void)setRunLoopModes:(NSArray *)runLoopModes;
- (NSArray *)runLoopModes;
- (void)undo;
- (void)redo;
- (void)undoNestedGroup;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (BOOL)isUndoing;
- (BOOL)isRedoing;
- (void)removeAllActions;
- (void)removeAllActionsWithTarget:(id)target;
- (void)registerUndoWithTarget:(id)target selector:(SEL)selector object:(id)anObject;
- (id)prepareWithInvocationTarget:(id)target;
- (void)setActionIsDiscardable:(BOOL)discardable;
- (BOOL)undoActionIsDiscardable;
- (BOOL)redoActionIsDiscardable;
- (NSString *)undoActionName;
- (NSString *)redoActionName;
- (void)setActionName:(NSString *)actionName;
- (NSString *)undoMenuItemTitle;
- (NSString *)redoMenuItemTitle;
- (NSString *)undoMenuTitleForUndoActionName:(NSString *)actionName;
- (NSString *)redoMenuTitleForUndoActionName:(NSString *)actionName;

#pragma clang diagnostic pop

@end
