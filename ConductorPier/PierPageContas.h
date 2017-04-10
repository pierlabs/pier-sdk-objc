#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierConta.h"


@protocol PierPageContas
@end

@interface PierPageContas : PierObject


@property(nonatomic) NSArray<PierConta>* content;

@property(nonatomic) NSNumber* first;

@property(nonatomic) NSNumber* firstPage;

@property(nonatomic) NSNumber* hasContent;

@property(nonatomic) NSNumber* hasNextPage;

@property(nonatomic) NSNumber* hasPreviousPage;

@property(nonatomic) NSNumber* last;

@property(nonatomic) NSNumber* nextPage;

@property(nonatomic) NSNumber* number;

@property(nonatomic) NSNumber* numberOfElements;

@property(nonatomic) NSNumber* previousPage;

@property(nonatomic) NSNumber* size;

@property(nonatomic) NSNumber* totalElements;

@property(nonatomic) NSNumber* totalPages;

@end
