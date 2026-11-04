// rea decompile_all
// name: std::__tree_balance_after_insert[abi:ne190102]<std::__tree_node_base<void*>*>
// address: 0x215604
// body: available
// range: 0x215604-0x21576b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__tree_balance_after_insert[abi:ne190102]<std::__tree_node_base<void*>*>(std::__tree_node_base<void*>*,
   std::__tree_node_base<void*>*) */

void std::__tree_balance_after_insert_abi_ne190102_<std::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  __tree_node_base *p_Var1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  __tree_node_base _Var8;
  
  _Var8 = (__tree_node_base)(param_2 == param_1);
  param_2[0x18] = _Var8;
  while( true ) {
    if ((bool)_Var8) {
      return;
    }
    p_Var6 = *(__tree_node_base **)(param_2 + 0x10);
    if (p_Var6[0x18] != (__tree_node_base)0x0) break;
    p_Var5 = *(__tree_node_base **)(p_Var6 + 0x10);
    p_Var7 = *(__tree_node_base **)p_Var5;
    if (p_Var7 == p_Var6) {
      p_Var1 = *(__tree_node_base **)(p_Var5 + 8);
      if ((p_Var1 == (__tree_node_base *)0x0) || (p_Var1[0x18] == (__tree_node_base)0x1)) {
        if (*(__tree_node_base **)p_Var6 != param_2) {
          p_Var1 = *(__tree_node_base **)(p_Var6 + 8);
          lVar3 = *(long *)p_Var1;
          *(long *)(p_Var6 + 8) = lVar3;
          p_Var7 = p_Var6;
          if (lVar3 != 0) {
            *(__tree_node_base **)(lVar3 + 0x10) = p_Var6;
            p_Var5 = *(__tree_node_base **)(p_Var6 + 0x10);
            p_Var7 = *(__tree_node_base **)p_Var5;
          }
          *(__tree_node_base **)(p_Var1 + 0x10) = p_Var5;
          *(__tree_node_base **)(p_Var5 + (ulong)(p_Var7 != p_Var6) * 8) = p_Var1;
          *(__tree_node_base **)p_Var1 = p_Var6;
          *(__tree_node_base **)(p_Var6 + 0x10) = p_Var1;
          p_Var5 = *(__tree_node_base **)(p_Var1 + 0x10);
          p_Var7 = *(__tree_node_base **)p_Var5;
          p_Var6 = p_Var1;
        }
        p_Var6[0x18] = (__tree_node_base)0x1;
        p_Var5[0x18] = (__tree_node_base)0x0;
        lVar3 = *(long *)(p_Var7 + 8);
        *(long *)p_Var5 = lVar3;
        if (lVar3 != 0) {
          *(__tree_node_base **)(lVar3 + 0x10) = p_Var5;
        }
        puVar4 = *(undefined8 **)(p_Var5 + 0x10);
        *(undefined8 **)(p_Var7 + 0x10) = puVar4;
        puVar4[(__tree_node_base *)*puVar4 != p_Var5] = p_Var7;
        *(__tree_node_base **)(p_Var7 + 8) = p_Var5;
        *(__tree_node_base **)(p_Var5 + 0x10) = p_Var7;
        return;
      }
    }
    else if ((p_Var7 == (__tree_node_base *)0x0) ||
            (p_Var1 = p_Var7, p_Var7[0x18] == (__tree_node_base)0x1)) {
      p_Var7 = *(__tree_node_base **)p_Var6;
      if (p_Var7 == param_2) {
        lVar3 = *(long *)(p_Var7 + 8);
        *(long *)p_Var6 = lVar3;
        if (lVar3 != 0) {
          *(__tree_node_base **)(lVar3 + 0x10) = p_Var6;
          p_Var5 = *(__tree_node_base **)(p_Var6 + 0x10);
        }
        *(__tree_node_base **)(p_Var7 + 0x10) = p_Var5;
        *(__tree_node_base **)(p_Var5 + (ulong)(*(__tree_node_base **)p_Var5 != p_Var6) * 8) =
             p_Var7;
        *(__tree_node_base **)(p_Var7 + 8) = p_Var6;
        *(__tree_node_base **)(p_Var6 + 0x10) = p_Var7;
        p_Var5 = *(__tree_node_base **)(p_Var7 + 0x10);
        p_Var6 = p_Var7;
      }
      p_Var6[0x18] = (__tree_node_base)0x1;
      p_Var5[0x18] = (__tree_node_base)0x0;
      plVar2 = *(long **)(p_Var5 + 8);
      lVar3 = *plVar2;
      *(long *)(p_Var5 + 8) = lVar3;
      if (lVar3 != 0) {
        *(__tree_node_base **)(lVar3 + 0x10) = p_Var5;
      }
      puVar4 = *(undefined8 **)(p_Var5 + 0x10);
      plVar2[2] = (long)puVar4;
      puVar4[(__tree_node_base *)*puVar4 != p_Var5] = plVar2;
      *plVar2 = (long)p_Var5;
      *(long **)(p_Var5 + 0x10) = plVar2;
      return;
    }
    p_Var6[0x18] = (__tree_node_base)0x1;
    _Var8 = (__tree_node_base)(p_Var5 == param_1);
    p_Var5[0x18] = _Var8;
    p_Var1[0x18] = (__tree_node_base)0x1;
    param_2 = p_Var5;
  }
  return;
}

