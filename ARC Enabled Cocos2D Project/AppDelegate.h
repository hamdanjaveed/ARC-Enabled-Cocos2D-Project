
#import <UIKit/UIKit.h>

@interface MyNavigationController : UINavigationController <CCDirectorDelegate>

@end

@interface AppController : NSObject <UIApplicationDelegate> {
	UIWindow *window_;
	MyNavigationController *navController_;

	CCDirectorIOS	*__unsafe_unretained director_;
}

@property (nonatomic, strong) UIWindow *window;
@property (readonly) MyNavigationController *navController;
@property (unsafe_unretained, readonly) CCDirectorIOS *director;
@end
