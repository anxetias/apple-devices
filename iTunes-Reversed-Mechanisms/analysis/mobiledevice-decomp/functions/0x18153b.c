// rea decompile_all
// name: _uarpPlatformAssetAllPayloadHeadersRequestWindowFilled
// address: 0x18153b
// body: available
// range: 0x18153b-0x18160a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _uarpPlatformAssetAllPayloadHeadersRequestWindowFilled
              (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (*(int *)(param_2 + 0x1c0) < 1) {
    return 0;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_2 + 0x278);
  uVar5 = 0x28;
  lVar3 = 0;
  do {
    if (lVar4 == 0) {
      return 0xb;
    }
    if (*(uint *)(param_3 + 0x54) < uVar5) {
      return 0x30;
    }
    iVar1 = _uarpPlatformAssetPayloadHeaderProcess(lVar2,lVar4,*(undefined4 *)(param_2 + 0x44));
    if (iVar1 != 0) {
      _uarpPlatformAssetProcessingCompleteInternal
                (param_1,*(undefined8 *)(param_2 + 0x2b8),param_2,4,0,0);
      return iVar1;
    }
    *(int *)(lVar4 + 0x7c) = (int)lVar3;
    lVar3 = lVar3 + 1;
    lVar4 = *(long *)(lVar4 + 0xb0);
    *(int *)(param_3 + 0x58) = *(int *)(param_3 + 0x58) + 0x28;
    lVar2 = lVar2 + 0x28;
    uVar5 = uVar5 + 0x28;
  } while (lVar3 < *(int *)(param_2 + 0x1c0));
  return 0;
}

