// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>::__assign_multi<std::__tree_const_iterator<std::__value_type<__CFString_const*,std::string>,std::__tree_node<std::__value_type<__CFString_const*,std::string>,void*>*,long>>
// address: 0x21eed0
// body: available
// range: 0x21eed0-0x21f00c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::__tree<std::__value_type<__CFString const*, std::string >,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*, std::string >,
   std::less<__CFString const*>, true>, std::allocator<std::__value_type<__CFString const*,
   std::string > > >::__assign_multi<std::__tree_const_iterator<std::__value_type<__CFString const*,
   std::string >, std::__tree_node<std::__value_type<__CFString const*, std::string >, void*>*,
   long> >(std::__tree_const_iterator<std::__value_type<__CFString const*, std::string >,
   std::__tree_node<std::__value_type<__CFString const*, std::string >, void*>*, long>,
   std::__tree_const_iterator<std::__value_type<__CFString const*, std::string >,
   std::__tree_node<std::__value_type<__CFString const*, std::string >, void*>*, long>) */

void __thiscall
std::
__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
::
__assign_multi<std::__tree_const_iterator<std::__value_type<__CFString_const*,std::string>,std::__tree_node<std::__value_type<__CFString_const*,std::string>,void*>*,long>>
          (__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
           *this,long *param_2,long *param_3)

{
  __tree_node *p_Var1;
  long *plVar2;
  __tree_node *p_Var3;
  long *plVar4;
  bool bVar5;
  __tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
  *local_48;
  __tree_node *local_40;
  __tree_node *local_38;
  
  if (*(long *)(this + 0x10) != 0) {
    p_Var1 = *(__tree_node **)this;
    *(__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
      **)this = this + 8;
    *(undefined8 *)(*(long *)(this + 8) + 0x10) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    p_Var3 = *(__tree_node **)(p_Var1 + 8);
    if (p_Var3 == (__tree_node *)0x0) {
      p_Var3 = p_Var1;
    }
    local_48 = this;
    local_40 = p_Var3;
    local_38 = p_Var3;
    if (p_Var3 != (__tree_node *)0x0) {
      local_40 = (__tree_node *)
                 __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                 ::_DetachedTreeCache::__detach_next(p_Var3);
      do {
        if (param_2 == param_3) break;
        *(long *)(p_Var3 + 0x20) = param_2[4];
        std::string::operator=((string *)(p_Var3 + 0x28),(string *)(param_2 + 5));
        __node_insert_multi(this,local_38);
        p_Var3 = local_40;
        local_38 = local_40;
        if (local_40 != (__tree_node *)0x0) {
          local_40 = (__tree_node *)
                     __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                     ::_DetachedTreeCache::__detach_next(local_40);
        }
        plVar2 = (long *)param_2[1];
        plVar4 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar4[2];
            bVar5 = (long *)*param_2 != plVar4;
            plVar4 = param_2;
          } while (bVar5);
        }
        else {
          do {
            param_2 = plVar2;
            plVar2 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (p_Var3 != (__tree_node *)0x0);
    }
    _DetachedTreeCache::~_DetachedTreeCache_abi_ne190102_((_DetachedTreeCache *)&local_48);
  }
  while (param_2 != param_3) {
    __emplace_multi<std::pair<__CFString_const*const,std::string>const&>((pair_conflict *)this);
    plVar2 = (long *)param_2[1];
    plVar4 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar4[2];
        bVar5 = (long *)*param_2 != plVar4;
        plVar4 = param_2;
      } while (bVar5);
    }
    else {
      do {
        param_2 = plVar2;
        plVar2 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}

