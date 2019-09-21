include SchemaTypes_builder.MakeSchema({
  module Scalars = {type click;};
  type resolver('parent, 'fieldType, 'result) =
    ('parent) => Js.Promise.t('result);
  type directiveResolver('payload);
});