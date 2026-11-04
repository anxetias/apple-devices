// rea decompile_all
// name: _uarpPlatformAssetAllMetaDataWindowFilled
// address: 0x181805
// body: available
// range: 0x181805-0x181913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformAssetAllMetaDataWindowFilled(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_2 + 0x20);
  iVar6 = *(int *)(param_3 + 0x58);
  if ((uint)(*(int *)(param_3 + 0x54) - iVar6) < uVar8) {
LAB_00181827:
    uVar1 = 0x12;
  }
  else {
    iVar5 = 0;
    if (uVar8 != 0) {
      lVar7 = *(long *)(param_3 + 0x10);
      do {
        lVar2 = _uarpProcessTLV(param_1,lVar7);
        if (lVar2 == 0) {
          return 10;
        }
        uVar4 = *(int *)(lVar2 + 4) + 8;
        lVar7 = lVar7 + (ulong)uVar4;
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x2d0);
        *(long *)(param_2 + 0x2d0) = lVar2;
        uVar8 = uVar8 - uVar4;
      } while (uVar8 != 0);
      iVar5 = *(int *)(param_2 + 0x20);
      iVar6 = *(int *)(param_3 + 0x58);
    }
    uVar8 = iVar6 + iVar5;
    *(uint *)(param_3 + 0x58) = uVar8;
    lVar7 = *(long *)(param_2 + 0x278);
    while( true ) {
      uVar1 = 0;
      if (lVar7 == 0) break;
      uVar4 = *(uint *)(lVar7 + 0x1c);
      if (*(int *)(param_3 + 0x54) - uVar8 < uVar4) goto LAB_00181827;
      if (uVar4 == 0) {
        iVar6 = 0;
      }
      else {
        lVar2 = (ulong)uVar8 + *(long *)(param_3 + 0x10);
        do {
          lVar3 = _uarpProcessTLV(param_1,lVar2);
          if (lVar3 == 0) {
            return 10;
          }
          uVar8 = *(int *)(lVar3 + 4) + 8;
          lVar2 = lVar2 + (ulong)uVar8;
          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar7 + 0xa8);
          *(long *)(lVar7 + 0xa8) = lVar3;
          uVar4 = uVar4 - uVar8;
        } while (uVar4 != 0);
        iVar6 = *(int *)(lVar7 + 0x1c);
        uVar8 = *(uint *)(param_3 + 0x58);
      }
      uVar8 = uVar8 + iVar6;
      *(uint *)(param_3 + 0x58) = uVar8;
      lVar7 = *(long *)(lVar7 + 0xb0);
    }
  }
  return uVar1;
}

