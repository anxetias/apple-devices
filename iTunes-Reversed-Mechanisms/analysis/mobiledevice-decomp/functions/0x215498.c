// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>::__find_equal<__CFString_const*>
// address: 0x215498
// body: available
// range: 0x215498-0x2155c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree_node_base<void*>*& std::__tree<std::__value_type<__CFString const*, std::string >,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*, std::string >,
   std::less<__CFString const*>, true>, std::allocator<std::__value_type<__CFString const*,
   std::string > > >::__find_equal<__CFString
   const*>(std::__tree_const_iterator<std::__value_type<__CFString const*, std::string >,
   std::__tree_node<std::__value_type<__CFString const*, std::string >, void*>*, long>,
   std::__tree_end_node<std::__tree_node_base<void*>*>*&, std::__tree_node_base<void*>*&, __CFString
   const* const&) */

__tree_node_base ** __thiscall
std::
__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
::__find_equal<__CFString_const*>
          (__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
           *this,__tree_node_base *param_2,long *param_3,__tree_node_base **param_4,ulong *param_5)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  bool bVar7;
  
  p_Var3 = (__tree_node_base *)(this + 8);
  if (p_Var3 == param_2) {
LAB_002154b4:
    p_Var2 = *(__tree_node_base **)param_2;
    p_Var6 = param_2;
    if (*(__tree_node_base **)this != param_2) {
      p_Var4 = param_2;
      p_Var5 = p_Var2;
      if (p_Var2 == (__tree_node_base *)0x0) {
        do {
          p_Var6 = *(__tree_node_base **)(p_Var4 + 0x10);
          bVar7 = *(__tree_node_base **)p_Var6 == p_Var4;
          p_Var4 = p_Var6;
        } while (bVar7);
      }
      else {
        do {
          p_Var6 = p_Var5;
          p_Var5 = *(__tree_node_base **)(p_Var6 + 8);
        } while (*(__tree_node_base **)(p_Var6 + 8) != (__tree_node_base *)0x0);
      }
      uVar1 = *param_5;
      if (uVar1 <= *(ulong *)(p_Var6 + 0x20)) {
        param_2 = p_Var3;
        p_Var2 = *(__tree_node_base **)p_Var3;
        while (p_Var2 != (__tree_node_base *)0x0) {
          p_Var3 = p_Var2;
          if (uVar1 < *(ulong *)(p_Var2 + 0x20)) {
            param_2 = p_Var2;
            p_Var2 = *(__tree_node_base **)p_Var2;
          }
          else {
            if (uVar1 <= *(ulong *)(p_Var2 + 0x20)) break;
            param_2 = p_Var2 + 8;
            p_Var2 = *(__tree_node_base **)(p_Var2 + 8);
          }
        }
        goto LAB_002155b4;
      }
    }
    if (p_Var2 == (__tree_node_base *)0x0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)p_Var6;
      param_2 = p_Var6 + 8;
    }
  }
  else {
    uVar1 = *param_5;
    if (uVar1 < *(ulong *)(param_2 + 0x20)) goto LAB_002154b4;
    if (uVar1 <= *(ulong *)(param_2 + 0x20)) {
      *param_3 = (long)param_2;
      *param_4 = param_2;
      return param_4;
    }
    p_Var2 = *(__tree_node_base **)(param_2 + 8);
    p_Var6 = param_2;
    p_Var4 = p_Var2;
    if (p_Var2 == (__tree_node_base *)0x0) {
      do {
        p_Var5 = *(__tree_node_base **)(p_Var6 + 0x10);
        bVar7 = *(__tree_node_base **)p_Var5 != p_Var6;
        p_Var6 = p_Var5;
      } while (bVar7);
    }
    else {
      do {
        p_Var5 = p_Var4;
        p_Var4 = *(__tree_node_base **)p_Var5;
      } while (*(__tree_node_base **)p_Var5 != (__tree_node_base *)0x0);
    }
    if ((p_Var5 == p_Var3) || (uVar1 < *(ulong *)(p_Var5 + 0x20))) {
      if (p_Var2 != (__tree_node_base *)0x0) {
        *param_3 = (long)p_Var5;
        return (__tree_node_base **)p_Var5;
      }
      *param_3 = (long)param_2;
      return (__tree_node_base **)(param_2 + 8);
    }
    param_2 = p_Var3;
    p_Var2 = *(__tree_node_base **)p_Var3;
    while (p_Var2 != (__tree_node_base *)0x0) {
      p_Var3 = p_Var2;
      if (uVar1 < *(ulong *)(p_Var2 + 0x20)) {
        param_2 = p_Var2;
        p_Var2 = *(__tree_node_base **)p_Var2;
      }
      else {
        if (uVar1 <= *(ulong *)(p_Var2 + 0x20)) break;
        param_2 = p_Var2 + 8;
        p_Var2 = *(__tree_node_base **)(p_Var2 + 8);
      }
    }
LAB_002155b4:
    *param_3 = (long)p_Var3;
  }
  return (__tree_node_base **)param_2;
}

