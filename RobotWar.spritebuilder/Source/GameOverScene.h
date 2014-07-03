//
//  GameOverScene.h
//  RobotWar
//
//  Created by Benjamin Encz on 03/06/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface GameOverScene : CCNode

@property (copy, nonatomic) NSString *winnerClass;
@property (copy, nonatomic) NSString *winnerName;

- (void)displayWinMessage;

@end 
