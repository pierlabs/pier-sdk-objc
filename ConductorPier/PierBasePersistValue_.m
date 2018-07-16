#import "PierBasePersistValue_.h"

@implementation PierBasePersistValue_

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    
  }

  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"servidor": @"servidor", @"usuario": @"usuario", @"senha": @"senha", @"nomeBase": @"nomeBase", @"criadoPor": @"criadoPor", @"domain": @"domain", @"senhaCriptografada": @"senhaCriptografada", @"nomeBaseControleAcesso": @"nomeBaseControleAcesso", @"idEmissor": @"idEmissor", @"servidorControleAcesso": @"servidorControleAcesso", @"nomeBaseUsuarios": @"nomeBaseUsuarios", @"servidorUsuarios": @"servidorUsuarios", @"flagCluster": @"flagCluster" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"domain", @"idEmissor", ];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

/**
 * Gets the string presentation of the object.
 * This method will be called when logging model object using `NSLog`.
 */
- (NSString *)description {
    return [[self toDictionary] description];
}

@end
