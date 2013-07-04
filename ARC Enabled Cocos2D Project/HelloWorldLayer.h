//
//  HelloWorldLayer.h
//  ARC Enabled Cocos2D Project
//
//  Created by Hamdan Javeed on 2013-07-04.
//  Copyright Hamdan Javeed 2013. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
