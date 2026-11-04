// rea decompile_all
// name: _AMAuthInstallApImg4FindItemWithTag
// address: 0x1a2555
// body: available
// range: 0x1a2555-0x1a25c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4FindItemWithTag(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar1 = _DERDecodeSeqContentInit(param_1,&local_48);
  if (iVar1 == 0) {
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    do {
      iVar1 = _DERDecodeSeqNext(&local_78,&local_60);
      if (iVar1 != 0) {
        return iVar1;
      }
    } while (local_60 != param_2);
    *param_3 = local_58;
    param_3[1] = uStack_50;
    iVar1 = 0;
  }
  else {
    _AMAuthInstallApImg4FindItemWithTag_cold_1();
  }
  return iVar1;
}

