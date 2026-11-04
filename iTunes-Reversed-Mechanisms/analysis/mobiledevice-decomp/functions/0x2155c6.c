// rea decompile_all
// name: std::__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>::__insert_node_at
// address: 0x2155c6
// body: available
// range: 0x2155c6-0x215603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree<std::__value_type<std::string, void const*>, std::__map_value_compare<std::string,
   std::__value_type<std::string, void const*>, std::less<std::string >, true>,
   std::allocator<std::__value_type<std::string, void const*> >
   >::__insert_node_at(std::__tree_end_node<std::__tree_node_base<void*>*>*,
   std::__tree_node_base<void*>*&, std::__tree_node_base<void*>*) */

void __thiscall
std::
__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
::__insert_node_at(__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                   *this,__tree_end_node *param_1,__tree_node_base **param_2,
                  __tree_node_base *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(__tree_end_node **)(param_3 + 0x10) = param_1;
  *param_2 = param_3;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    param_3 = *param_2;
  }
  __tree_balance_after_insert_abi_ne190102_<std::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),param_3);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}

