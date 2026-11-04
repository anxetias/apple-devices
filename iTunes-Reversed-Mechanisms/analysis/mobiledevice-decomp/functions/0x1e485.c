// rea decompile_all
// name: _ccrsa_crt_init_pq_star_ws
// address: 0x1e485
// body: available
// range: 0x1e485-0x1e4fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e4fa to 0x2afa0 _cczp_mm_init_ws (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccrsa_crt_init_pq_star_ws(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = _ccctr_context_size(param_2);
  *param_3 = lVar1 + 1;
  uVar2 = _cczp_prime(param_2);
  lVar3 = _ccn_mul1(lVar1,param_3 + 3,uVar2,param_4 | 1);
  param_3[lVar1 + 3] = lVar3;
  _cczp_mm_init_ws(param_1,param_3,lVar1 + 1,0);
  return;
}

