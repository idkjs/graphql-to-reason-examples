let count = ref(0);
/* No need to explicitly type resolver, it will infer correct type later */
let resolver = (_node, _args, _context, _resolveInfo, _fieldInfo) =>
  Js.Promise.make((~resolve, ~reject) => {
    count := count^ + 1;
    resolve(. count^);
  });