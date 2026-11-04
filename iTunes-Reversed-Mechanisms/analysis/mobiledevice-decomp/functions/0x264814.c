// rea decompile_all
// name: _ccec_validate_point_and_projectify_ws
// address: 0x264814
// body: available
// range: 0x264814-0x2648d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccec_validate_point_and_projectify_ws
              (undefined8 param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = *param_2;
  uVar5 = _cczp_prime(param_2);
  iVar3 = _ccn_cmp_internal(lVar1,uVar5,param_4);
  iVar4 = -1;
  if (0 < iVar3) {
    lVar1 = *param_2;
    uVar5 = _cczp_prime(param_2);
    iVar3 = _ccn_cmp_internal(lVar1,uVar5,lVar1 * 8 + param_4);
    if ((0 < iVar3) &&
       (iVar4 = _ccec_projectify_ws(param_1,param_2,param_3,param_4,param_5), iVar4 == 0)) {
      cVar2 = _ccec_is_point_ws(param_1,param_2,param_3);
      iVar4 = -7;
      if (cVar2 != '\0') {
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}

