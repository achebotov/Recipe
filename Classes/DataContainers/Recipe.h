//
//  Recipe.h
//  Recipe
//
//  Created by aser on 12/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Recipe : NSObject 
{
	NSString * mName;
	NSArray * mIngredientsArray;
	int mRecipeId;
	NSString * mDescription;
}

@property (nonatomic, retain) NSString * name;
@property (nonatomic, assign) int recipeId;
@property (nonatomic, retain) NSArray * ingredientsArray;
@property (nonatomic, retain) NSString * description;

@end
