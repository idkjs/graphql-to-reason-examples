/* Clicks.resolver now infers SchemaTypes.Mutation.clicksCount type */
let mutationResolvers =
  // SchemaTypes.Mutations.t(~click=Clicks.resolver, ());
SchemaTypes.Mutations.t(~click=Clicks.resolver(~payload), ());

let resolvers = SchemaTypes.t(~mutation, ());