// rea decompile_all
// name: _uarpAssetQueryPayloadInfo
// address: 0x17fa57
// body: available
// range: 0x17fa57-0x17fb0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpAssetQueryPayloadInfo(long param_1,long param_2,int param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x1e;
  if (param_2 != 0 && param_1 != 0) {
    if (param_4 == (undefined4 *)0x0) {
      uVar1 = 0x1a;
    }
    else if (*(char *)(param_2 + 0x1cc) == '\0') {
      uVar1 = 0x2c;
      if (*(int *)(param_2 + 0x1c4) == param_3) {
        *param_4 = *(undefined4 *)(param_2 + 0x1d4);
        uVar1 = *(undefined8 *)(param_2 + 0x1e0);
        *(undefined8 *)(param_4 + 1) = *(undefined8 *)(param_2 + 0x1d8);
        *(undefined8 *)(param_4 + 3) = uVar1;
        param_4[5] = *(undefined4 *)(param_2 + 0x1ec);
        param_4[6] = *(undefined4 *)(param_2 + 500);
        puVar3 = (undefined4 *)(param_2 + 0x250);
LAB_0017fb02:
        param_4[7] = *puVar3;
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0x36;
      for (lVar2 = *(long *)(param_2 + 0x278); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xb0)) {
        if (*(int *)(lVar2 + 0x7c) == param_3) {
          *param_4 = *(undefined4 *)(lVar2 + 4);
          uVar1 = *(undefined8 *)(lVar2 + 0x10);
          *(undefined8 *)(param_4 + 1) = *(undefined8 *)(lVar2 + 8);
          *(undefined8 *)(param_4 + 3) = uVar1;
          param_4[5] = *(undefined4 *)(lVar2 + 0x1c);
          param_4[6] = *(undefined4 *)(lVar2 + 0x24);
          puVar3 = (undefined4 *)(lVar2 + 0x80);
          goto LAB_0017fb02;
        }
      }
    }
  }
  return uVar1;
}

