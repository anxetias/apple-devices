// rea decompile_all
// name: _cczp_mm_redc_ws
// address: 0x20fc6
// body: available
// range: 0x20fc6-0x21091 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2108d to 0x1bd0a _ccn_mux (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _cczp_mm_redc_ws(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  lVar2 = _ccctr_context_size(param_2);
  if (lVar2 != 0) {
    lVar1 = param_2[*param_2 + 3];
    plVar7 = param_4;
    lVar8 = lVar2;
    do {
      uVar3 = _cczp_prime(param_2);
      lVar4 = _ccn_addmul1(lVar2,plVar7,uVar3,*plVar7 * lVar1);
      *plVar7 = lVar4;
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  plVar7 = param_4 + lVar2;
  uVar5 = _ccn_add_ws(param_1,lVar2,plVar7,plVar7,param_4);
  uVar3 = _cczp_prime(param_2);
  uVar6 = _ccn_sub_ws(param_1,lVar2,param_4,plVar7,uVar3);
  _ccn_mux(lVar2,uVar5 ^ uVar6,param_3,plVar7,param_4);
  return;
}

