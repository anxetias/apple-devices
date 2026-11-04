// rea decompile_all
// name: _uarpCallbackUpdateInformationTLV
// address: 0x182b42
// body: available
// range: 0x182b42-0x182bc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpCallbackUpdateInformationTLV(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_1c;
  
  local_1c = param_3[1];
  if (*param_3 == 7) {
    if (local_1c < 0x10) {
      return 0x27;
    }
    iVar1 = _uarpNtohl(*(undefined4 *)(param_2 + 0x3e));
    param_3[2] = iVar1;
    iVar1 = _uarpNtohl(*(undefined4 *)(param_2 + 0x42));
    param_3[3] = iVar1;
    iVar1 = _uarpNtohl(*(undefined4 *)(param_2 + 0x46));
    param_3[4] = iVar1;
    iVar1 = _uarpNtohl(*(undefined4 *)(param_2 + 0x4a));
    param_3[5] = iVar1;
    local_1c = 0x10;
  }
  else {
    uVar2 = _uarpPlatformQueryAccessoryInfo(param_1,*param_3,param_3 + 2,local_1c,&local_1c);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  param_3[1] = local_1c;
  return 0;
}

