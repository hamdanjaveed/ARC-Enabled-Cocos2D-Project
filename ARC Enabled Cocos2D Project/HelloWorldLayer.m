
#import "HelloWorldLayer.h"
#import "AppDelegate.h"

#pragma mark - HelloWorldLayer

@implementation HelloWorldLayer

+ (CCScene *)scene {
	CCScene *scene = [CCScene node];
	HelloWorldLayer *layer = [HelloWorldLayer node];
	[scene addChild: layer];
	return scene;
}

- (id)init {
    self = [super init];
    
	if(self) {
		CCLabelTTF *label = [CCLabelTTF labelWithString:@"Hello World" fontName:@"Marker Felt" fontSize:64];
		CGSize size = [[CCDirector sharedDirector] winSize];
		label.position =  ccp( size.width /2 , size.height/2 );
		[self addChild: label];
	}
    
	return self;
}

@end
