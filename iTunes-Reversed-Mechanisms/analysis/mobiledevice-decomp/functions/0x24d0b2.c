// rea decompile_all
// name: std::__tree<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,std::__map_value_compare<unsigned_int,std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,std::less<unsigned_int>,true>,std::allocator<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>::__construct_node<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>const&>
// address: 0x24d0b2
// body: available
// range: 0x24d0b2-0x24d116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::unique_ptr<std::__tree_node<std::__value_type<unsigned int, std::map<unsigned int, unsigned
   int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > > >,
   void*>, std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned
   int, std::map<unsigned int, unsigned int, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> > > >, void*> > > >
   std::__tree<std::__value_type<unsigned int, std::map<unsigned int, unsigned int,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > > >,
   std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<unsigned int,
   unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int>
   > > >, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int,
   std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned int> > > > > >::__construct_node<std::pair<unsigned int const,
   std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned int> > > > const&>(std::pair<unsigned int const, std::map<unsigned int,
   unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int>
   > > > const&) */

pair_conflict *
std::
__tree<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,std::__map_value_compare<unsigned_int,std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,std::less<unsigned_int>,true>,std::allocator<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>
::
__construct_node<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>const&>
          (pair_conflict *param_1)

{
  void *pvVar1;
  undefined4 *in_RDX;
  long in_RSI;
  
  pvVar1 = operator_new(0x40);
  *(void **)param_1 = pvVar1;
  *(long *)(param_1 + 8) = in_RSI + 8;
  param_1[0x10] = (pair_conflict)0x0;
  *(undefined4 *)((long)pvVar1 + 0x20) = *in_RDX;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::map_abi_ne190102_((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                       *)((long)pvVar1 + 0x28),(map *)(in_RDX + 2));
  param_1[0x10] = (pair_conflict)0x1;
  return param_1;
}

