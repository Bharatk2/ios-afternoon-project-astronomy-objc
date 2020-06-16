//
//  LSICamera.m
//  Astronomy
//
//  Created by Bhawnish Kumar on 6/15/20.
//  Copyright © 2020 Bhawnish Kumar. All rights reserved.
//

#import "LSICamera.h"

@implementation LSICamera

- (nonnull instancetype)initWithCameraId:(int)cameraId roverId:(int)roverId name:(NSString *)name fullName:(NSString *)fullName {
    
    self = [super init];
    if (self) {
        _cameraId = cameraId;
        _roverId = roverId;
        _name = [name copy];
        _fullName = [fullName copy];

    }
    
    return self;
    
}

- (nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary {
    
    NSNumber *cameraId = [dictionary objectForKey:@"id"];
    if (![cameraId isKindOfClass:[NSNumber class]]) return nil;
    
    NSNumber *roverId = [dictionary objectForKey:@"rover_id"];
    if (![roverId isKindOfClass:[NSNumber class]]) return nil;
    
    NSString *name = [dictionary objectForKey:@"name"];
    if (![name isKindOfClass:[NSString class]]) return nil;
    
    NSString *fullName = [dictionary objectForKey:@"full_name"];
    if (![fullName isKindOfClass:[NSString class]]) return nil;
    
    return [self initWithCameraId:cameraId.intValue roverId:roverId.intValue name:name fullName:fullName];
}

@end
