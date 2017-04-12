@import UIKit;
#import "WMFAnalyticsLogging.h"
#import "WMFContentSource.h"

@class MWKDataStore;

extern const NSInteger WMFExploreFeedMaximumNumberOfDays;

NS_ASSUME_NONNULL_BEGIN

@interface WMFExploreViewController : UICollectionViewController <WMFAnalyticsViewNameProviding, WMFAnalyticsContextProviding>

@property (nonatomic, strong) NSArray<id<WMFContentSource>> *contentSources;

@property (nonatomic, strong) MWKDataStore *userStore;

@property (nonatomic, assign) BOOL canScrollToTop;

- (UIButton *)titleButton;

- (void)showSettings;

- (NSUInteger)numberOfSectionsInExploreFeed;

- (void)presentMoreViewControllerForGroup:(WMFContentGroup *)group animated:(BOOL)animated;

- (void)showInTheNewsForStory:(WMFFeedNewsStory *)story date:(nullable NSDate *)date animated:(BOOL)animated;

- (void)updateFeedSources:(nullable dispatch_block_t)completion;
- (void)updateNearby:(nullable dispatch_block_t)completion;

@end

NS_ASSUME_NONNULL_END
