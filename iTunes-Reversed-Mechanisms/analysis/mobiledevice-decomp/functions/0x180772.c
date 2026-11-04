// rea decompile_all
// name: _uarpPlatformAssetRequestData
// address: 0x180772
// body: available
// range: 0x180772-0x180818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformAssetRequestData(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 0x1e;
  if ((((param_2 != 0) && (*(long *)(param_2 + 0x2b8) != 0)) &&
      (uVar3 = 0x10, (char)param_3[0x14] != '\x01')) &&
     ((uVar3 = 0x1f, *(char *)(param_2 + 0x49) != '\x01' &&
      (*(char *)(*(long *)(param_2 + 0x2b8) + 0x38) != '\0')))) {
    iVar1 = param_3[0x15];
    param_3[0x17] = *param_3 + param_3[2] + iVar1;
    uVar2 = param_3[1] - (param_3[2] + iVar1);
    uVar4 = param_3[6] - iVar1;
    if (uVar2 < (uint)(param_3[6] - iVar1)) {
      uVar4 = uVar2;
    }
    param_3[0x18] = uVar4;
    uVar2 = *(uint *)(*(long *)(param_2 + 0x2b8) + 4);
    if (uVar2 <= uVar4) {
      uVar4 = uVar2;
    }
    param_3[0x18] = uVar4;
    uVar3 = _uarpSendAssetRequestData
                      (param_1,*(undefined8 *)(param_2 + 0x2b8),*(undefined2 *)(param_2 + 0x2c));
    if ((int)uVar3 == 0) {
      *(undefined1 *)(param_3 + 0x14) = 1;
      uVar3 = 0;
    }
  }
  return uVar3;
}

