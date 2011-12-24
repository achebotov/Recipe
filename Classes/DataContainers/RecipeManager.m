//
//  RecipeManager.m
//  Recipe
//
//  Created by aser on 12/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "RecipeManager.h"

static RecipeManager * manager = nil;

@implementation RecipeManager

@synthesize recipesArray = mRecipesArray;

+(RecipeManager *) manager
{
	if(manager == nil)
	{
		manager = [[RecipeManager alloc] init];
	}
	return manager;
}
@end
