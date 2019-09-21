// module Clicks = {
//   let count = ref(0);
//   /* No need to explicitly type resolver, it will infer correct type later */
//   let resolver = (_node, _args, _context, _resolveInfo, _fieldInfo) =>
//     Js.Promise.make((~resolve, ~reject) => {
//       count := count^ + 1;
//       let result = {"payload": count^};
//       // resolve(. count^);
//       resolve(. result);
//     });
// };

/* Clicks.resolver now infers SchemaTypes.Mutation.clicksCount type */
// let mutationResolvers =
//   SchemaTypes.Mutation.t(~click(~clickCount=Clicks.resolver),())
let mutationResolvers =
  SchemaTypes.Mutation.t(~clicksCount=Clicks.resolver, ());

// let mutationResolvers =SchemaTypes.Mutation.t(~click=(Clicks.resolver(_node, _args, _context, _resolveInfo, _fieldInfo=>unit)));
  // SchemaTypes.Mutation.t(~click=Clicks.resolver, ());

let resolvers = SchemaTypes.t(~mutation, ());