////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Jasper Blues & Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////



#import <Foundation/Foundation.h>
#import "TyphoonRXMLElement.h"

@class TyphoonDefinition;
@class TyphoonInitializer;
@protocol TyphoonPropertyInjection;

@interface TyphoonRXMLElement (XmlComponentFactory)

- (BOOL)isComponent;

- (TyphoonDefinition *)asComponentDefinition;

- (id<TyphoonPropertyInjection>)asInjectedProperty;

- (TyphoonInitializer *)asInitializer;


@end
