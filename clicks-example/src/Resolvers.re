/*
`Clicks.resolver` error:

Error: The function applied to this argument has type
         (~click: GraphqlToReasonBasicExample.SchemaTypes.rootResolver(
                  {. "payload": int},
                   GraphqlToReasonBasicExample.SchemaTypes.click,
                   GraphqlToReasonBasicExample.SchemaTypes.click)=?) =>
         GraphqlToReasonBasicExample.SchemaTypes.Mutation.t
This argument cannot be applied with label ~clicksCount

 */
let mutationResolvers =
  SchemaTypes.Mutation.t(~clicksCount=Clicks.resolver, ());

let resolvers = SchemaTypes.t(~mutation, ());

// return resolvers
resolvers;