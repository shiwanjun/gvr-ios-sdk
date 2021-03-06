#import <UIKit/UIKit.h>

@interface StarsRenderLoop : NSObject

/**
 * Initializes the render loop with target and selector. The underlying |CADisplayLink| instance
 * holds a strong reference to the target until the |invalidate| method is called.
 */
- (instancetype)initWithRenderTarget:(id)target selector:(SEL)selector;

/**
 * Invalidates this instance and the underlying |CADisplayLink| instance releases its strong
 * reference to the render target.
 */
- (void)invalidate;

/** Sets or returns the paused state of the underlying |CADisplayLink| reference. */
@property(nonatomic) BOOL paused;

/** Returns the timestamp of when the next frame will be drawn. */
@property(nonatomic, readonly) NSTimeInterval nextFrameTime;

@end
