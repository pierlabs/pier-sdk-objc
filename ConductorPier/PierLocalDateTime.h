#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierChronology.h"


@protocol PierLocalDateTime
@end

@interface PierLocalDateTime : PierObject


@property(nonatomic) PierChronology* chronology;

@property(nonatomic) NSNumber* dayOfMonth;

@property(nonatomic) NSString* dayOfWeek;

@property(nonatomic) NSNumber* dayOfYear;

@property(nonatomic) NSNumber* hour;

@property(nonatomic) NSNumber* minute;

@property(nonatomic) NSString* month;

@property(nonatomic) NSNumber* monthValue;

@property(nonatomic) NSNumber* nano;

@property(nonatomic) NSNumber* second;

@property(nonatomic) NSNumber* year;

@end
