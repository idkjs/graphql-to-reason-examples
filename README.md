# Notes on running graphql-to-reason [basic example](https://github.com/Coobaha/graphql-to-reason/tree/master/examples/basic)

Running the example as is gets you this error:

```bsh
```reason
> bsb -make-world -w

>>>> Start compiling
[7/7] Building src/SchemaTypes_builder.mlast.d
[2/4] Building src/SchemaTypes-GraphqlToReasonBasicExample.cmj

  We've found a bug for you!
  /Users/prisc_000/Downloads/Coobaha-examples_basic/src/SchemaTypes.re 1:40-6:1

  1 │ include SchemaTypes_builder.MakeSchema({
  2 │   module Scalars = {};
  . │ ...
  5 │   type directiveResolver('payload);
  6 │ });

  Signature mismatch:
  ...
  Type declarations do not match:
    type resolver('parent, 'args, 'fieldType, 'result) =
        ('parent, 'args) => Js.Promise.t('result)
  is not included in
    type resolver('payload, 'fieldType, 'result)
  File "/Users/prisc_000/Downloads/Coobaha-examples_basic/src/SchemaTypes.re", line 3, characters 3-101:
    Actual declaration
  They have different arities.

>>>> Finish compiling(exit: 1)
```

Which for whatever reason is resolved by updating all the deps in packag.json to latest, running clean and dev again.


