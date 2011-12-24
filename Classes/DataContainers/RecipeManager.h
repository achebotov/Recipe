//
//  RecipeManager.h
//  Recipe
//
//  Created by aser on 12/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface RecipeManager : NSObject 
{
	NSArray * mRecipesArray;
}
@property (nonatomic, retain)NSArray * recipesArray;

+(RecipeManager *) manager;

@end
