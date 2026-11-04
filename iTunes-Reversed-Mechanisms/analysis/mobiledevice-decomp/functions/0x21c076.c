// rea decompile_all
// name: std::__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>::__construct_node<std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
// address: 0x21c076
// body: available
// range: 0x21c076-0x21c0ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::unique_ptr<std::__tree_node<std::__value_type<std::string, void const*>, void*>,
   std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<std::string, void
   const*>, void*> > > > std::__tree<std::__value_type<std::string, void const*>,
   std::__map_value_compare<std::string, std::__value_type<std::string, void const*>,
   std::less<std::string >, true>, std::allocator<std::__value_type<std::string, void const*> >
   >::__construct_node<std::piecewise_construct_t const&, std::tuple<std::string const&>,
   std::tuple<> >(std::piecewise_construct_t const&, std::tuple<std::string const&>&&,
   std::tuple<>&&) */

__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
* __thiscall
std::
__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
::__construct_node<std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
          (__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
           *this,piecewise_construct_t *param_1,tuple *param_2,tuple *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = operator_new(0x40);
  *(void **)this = pvVar3;
  *(piecewise_construct_t **)(this + 8) = param_1 + 8;
  this[0x10] = (__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                )0x0;
  pbVar1 = *(byte **)param_3;
  if ((*pbVar1 & 1) == 0) {
    *(undefined8 *)((long)pvVar3 + 0x30) = *(undefined8 *)(pbVar1 + 0x10);
    uVar2 = *(undefined8 *)(pbVar1 + 8);
    *(undefined8 *)((long)pvVar3 + 0x20) = *(undefined8 *)pbVar1;
    *(undefined8 *)((long)pvVar3 + 0x28) = uVar2;
  }
  else {
    string::__init_copy_ctor_external
              ((string *)((long)pvVar3 + 0x20),*(char **)(pbVar1 + 0x10),*(ulong *)(pbVar1 + 8));
  }
  *(undefined8 *)((long)pvVar3 + 0x38) = 0;
  this[0x10] = (__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                )0x1;
  return this;
}

