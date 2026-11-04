// rea decompile_all
// name: std::__tree_remove[abi:ne190102]<std::__tree_node_base<void*>*>
// address: 0x21c26c
// body: available
// range: 0x21c26c-0x21c5a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__tree_remove[abi:ne190102]<std::__tree_node_base<void*>*>(std::__tree_node_base<void*>*,
   std::__tree_node_base<void*>*) */

void std::__tree_remove_abi_ne190102_<std::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long *plVar6;
  __tree_node_base _Var7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  long *plVar10;
  undefined8 *puVar11;
  
  p_Var5 = *(__tree_node_base **)param_2;
  p_Var9 = param_2;
  if (p_Var5 == (__tree_node_base *)0x0) {
LAB_0021c292:
    p_Var5 = *(__tree_node_base **)(p_Var9 + 8);
    if (p_Var5 == (__tree_node_base *)0x0) {
      puVar11 = *(undefined8 **)(p_Var9 + 0x10);
      bVar3 = true;
      p_Var5 = (__tree_node_base *)0x0;
      goto LAB_0021c2b1;
    }
  }
  else {
    p_Var4 = *(__tree_node_base **)(param_2 + 8);
    if (*(__tree_node_base **)(param_2 + 8) != (__tree_node_base *)0x0) {
      do {
        p_Var9 = p_Var4;
        p_Var4 = *(__tree_node_base **)p_Var9;
      } while (*(__tree_node_base **)p_Var9 != (__tree_node_base *)0x0);
      goto LAB_0021c292;
    }
  }
  puVar11 = *(undefined8 **)(p_Var9 + 0x10);
  *(undefined8 **)(p_Var5 + 0x10) = puVar11;
  bVar3 = false;
LAB_0021c2b1:
  p_Var4 = (__tree_node_base *)*puVar11;
  if (p_Var4 == p_Var9) {
    *puVar11 = p_Var5;
    if (p_Var9 == param_1) {
      p_Var4 = (__tree_node_base *)0x0;
      param_1 = p_Var5;
    }
    else {
      p_Var4 = (__tree_node_base *)puVar11[1];
    }
  }
  else {
    puVar11[1] = p_Var5;
  }
  _Var7 = p_Var9[0x18];
  if (p_Var9 != param_2) {
    plVar6 = *(long **)(param_2 + 0x10);
    *(long **)(p_Var9 + 0x10) = plVar6;
    plVar6[(__tree_node_base *)*plVar6 != param_2] = (long)p_Var9;
    lVar1 = *(long *)param_2;
    *(long *)p_Var9 = lVar1;
    *(__tree_node_base **)(lVar1 + 0x10) = p_Var9;
    lVar1 = *(long *)(param_2 + 8);
    *(long *)(p_Var9 + 8) = lVar1;
    if (lVar1 != 0) {
      *(__tree_node_base **)(lVar1 + 0x10) = p_Var9;
    }
    p_Var9[0x18] = param_2[0x18];
    if (param_1 == param_2) {
      param_1 = p_Var9;
    }
  }
  if ((param_1 != (__tree_node_base *)0x0) && (_Var7 != (__tree_node_base)0x0)) {
    if (bVar3) {
      while( true ) {
        plVar6 = *(long **)(p_Var4 + 0x10);
        p_Var5 = (__tree_node_base *)*plVar6;
        if (p_Var5 == p_Var4) break;
        if (p_Var4[0x18] == (__tree_node_base)0x0) {
          p_Var4[0x18] = (__tree_node_base)0x1;
          *(undefined1 *)(plVar6 + 3) = 0;
          plVar10 = (long *)plVar6[1];
          lVar1 = *plVar10;
          plVar6[1] = lVar1;
          if (lVar1 != 0) {
            *(long **)(lVar1 + 0x10) = plVar6;
          }
          puVar11 = (undefined8 *)plVar6[2];
          plVar10[2] = (long)puVar11;
          puVar11[(long *)*puVar11 != plVar6] = plVar10;
          *plVar10 = (long)plVar6;
          plVar6[2] = (long)plVar10;
          if (param_1 == *(__tree_node_base **)p_Var4) {
            param_1 = p_Var4;
          }
          p_Var4 = *(__tree_node_base **)(*(__tree_node_base **)p_Var4 + 8);
        }
        p_Var5 = *(__tree_node_base **)p_Var4;
        if ((p_Var5 != (__tree_node_base *)0x0) && (p_Var5[0x18] != (__tree_node_base)0x1)) {
          p_Var9 = *(__tree_node_base **)(p_Var4 + 8);
          if (p_Var9 != (__tree_node_base *)0x0) goto LAB_0021c48e;
LAB_0021c494:
          p_Var5[0x18] = (__tree_node_base)0x1;
          p_Var4[0x18] = (__tree_node_base)0x0;
          lVar1 = *(long *)(p_Var5 + 8);
          *(long *)p_Var4 = lVar1;
          if (lVar1 != 0) {
            *(__tree_node_base **)(lVar1 + 0x10) = p_Var4;
          }
          puVar11 = *(undefined8 **)(p_Var4 + 0x10);
          *(undefined8 **)(p_Var5 + 0x10) = puVar11;
          puVar11[(__tree_node_base *)*puVar11 != p_Var4] = p_Var5;
          *(__tree_node_base **)(p_Var5 + 8) = p_Var4;
          *(__tree_node_base **)(p_Var4 + 0x10) = p_Var5;
          p_Var8 = p_Var5;
          p_Var9 = p_Var4;
LAB_0021c4d1:
          plVar6 = *(long **)(p_Var8 + 0x10);
          p_Var8[0x18] = *(__tree_node_base *)(plVar6 + 3);
          *(undefined1 *)(plVar6 + 3) = 1;
          p_Var9[0x18] = (__tree_node_base)0x1;
          plVar10 = (long *)plVar6[1];
          lVar1 = *plVar10;
          plVar6[1] = lVar1;
          if (lVar1 != 0) {
            *(long **)(lVar1 + 0x10) = plVar6;
          }
          plVar2 = (long *)plVar6[2];
          plVar10[2] = (long)plVar2;
          plVar2[(long *)*plVar2 != plVar6] = (long)plVar10;
          *plVar10 = (long)plVar6;
LAB_0021c5a3:
          plVar6[2] = (long)plVar10;
          return;
        }
        p_Var9 = *(__tree_node_base **)(p_Var4 + 8);
        if ((p_Var9 != (__tree_node_base *)0x0) && (p_Var9[0x18] != (__tree_node_base)0x1)) {
LAB_0021c48e:
          p_Var8 = p_Var4;
          if (p_Var9[0x18] == (__tree_node_base)0x1) goto LAB_0021c494;
          goto LAB_0021c4d1;
        }
        p_Var4[0x18] = (__tree_node_base)0x0;
        p_Var5 = *(__tree_node_base **)(p_Var4 + 0x10);
        if ((p_Var5 == param_1) || (p_Var5[0x18] == (__tree_node_base)0x0)) goto LAB_0021c47c;
LAB_0021c45e:
        p_Var4 = (__tree_node_base *)
                 (*(undefined8 **)(p_Var5 + 0x10))
                 [(__tree_node_base *)**(undefined8 **)(p_Var5 + 0x10) == p_Var5];
      }
      if (p_Var4[0x18] == (__tree_node_base)0x0) {
        p_Var4[0x18] = (__tree_node_base)0x1;
        *(undefined1 *)(plVar6 + 3) = 0;
        lVar1 = *(long *)(p_Var5 + 8);
        *plVar6 = lVar1;
        if (lVar1 != 0) {
          *(long **)(lVar1 + 0x10) = plVar6;
        }
        puVar11 = (undefined8 *)plVar6[2];
        *(undefined8 **)(p_Var5 + 0x10) = puVar11;
        puVar11[(long *)*puVar11 != plVar6] = p_Var5;
        *(long **)(p_Var5 + 8) = plVar6;
        plVar6[2] = (long)p_Var5;
        if (param_1 == *(__tree_node_base **)(p_Var4 + 8)) {
          param_1 = p_Var4;
        }
        p_Var4 = *(__tree_node_base **)*(__tree_node_base **)(p_Var4 + 8);
      }
      p_Var5 = *(__tree_node_base **)p_Var4;
      if ((p_Var5 == (__tree_node_base *)0x0) ||
         (_Var7 = p_Var5[0x18], _Var7 == (__tree_node_base)0x1)) {
        p_Var9 = *(__tree_node_base **)(p_Var4 + 8);
        if ((p_Var9 == (__tree_node_base *)0x0) || (p_Var9[0x18] == (__tree_node_base)0x1)) {
          p_Var4[0x18] = (__tree_node_base)0x0;
          p_Var5 = *(__tree_node_base **)(p_Var4 + 0x10);
          if ((p_Var5[0x18] == (__tree_node_base)0x1) && (p_Var5 != param_1)) goto LAB_0021c45e;
LAB_0021c47c:
          p_Var5[0x18] = (__tree_node_base)0x1;
          return;
        }
        if (p_Var5 != (__tree_node_base *)0x0) {
          _Var7 = p_Var5[0x18];
          goto LAB_0021c51e;
        }
LAB_0021c527:
        p_Var9[0x18] = (__tree_node_base)0x1;
        p_Var4[0x18] = (__tree_node_base)0x0;
        lVar1 = *(long *)p_Var9;
        *(long *)(p_Var4 + 8) = lVar1;
        if (lVar1 != 0) {
          *(__tree_node_base **)(lVar1 + 0x10) = p_Var4;
        }
        puVar11 = *(undefined8 **)(p_Var4 + 0x10);
        *(undefined8 **)(p_Var9 + 0x10) = puVar11;
        puVar11[(__tree_node_base *)*puVar11 != p_Var4] = p_Var9;
        *(__tree_node_base **)p_Var9 = p_Var4;
        *(__tree_node_base **)(p_Var4 + 0x10) = p_Var9;
        p_Var5 = p_Var4;
      }
      else {
LAB_0021c51e:
        p_Var9 = p_Var4;
        if (((byte)_Var7 & 1) != 0) {
          p_Var9 = *(__tree_node_base **)(p_Var4 + 8);
          goto LAB_0021c527;
        }
      }
      plVar6 = *(long **)(p_Var9 + 0x10);
      p_Var9[0x18] = *(__tree_node_base *)(plVar6 + 3);
      *(undefined1 *)(plVar6 + 3) = 1;
      p_Var5[0x18] = (__tree_node_base)0x1;
      plVar10 = (long *)*plVar6;
      lVar1 = plVar10[1];
      *plVar6 = lVar1;
      if (lVar1 != 0) {
        *(long **)(lVar1 + 0x10) = plVar6;
      }
      puVar11 = (undefined8 *)plVar6[2];
      plVar10[2] = (long)puVar11;
      puVar11[(long *)*puVar11 != plVar6] = plVar10;
      plVar10[1] = (long)plVar6;
      goto LAB_0021c5a3;
    }
    p_Var5[0x18] = (__tree_node_base)0x1;
  }
  return;
}

