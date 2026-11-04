// rea decompile_all
// name: _InjectFlushOrPushOutput
// address: 0x1cc71e
// body: available
// range: 0x1cc71e-0x1cc82e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _InjectFlushOrPushOutput(long param_1,ulong *param_2,long *param_3,long *param_4)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  
  if ((*(int *)(param_1 + 0x21b4) == 1) && (bVar1 = *(byte *)(param_1 + 0x982), bVar1 != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x980);
    *(undefined2 *)(param_1 + 0x980) = 0;
    uVar4 = 6 << (bVar1 & 0x1f);
    *(undefined1 *)(param_1 + 0x982) = 0;
    uVar6 = uVar2 | uVar4;
    if (*(long *)(param_1 + 0x2188) == 0) {
      puVar7 = (undefined1 *)(param_1 + 0x21a0);
      *(undefined1 **)(param_1 + 0x2188) = puVar7;
    }
    else {
      puVar7 = (undefined1 *)(*(long *)(param_1 + 0x2188) + *(long *)(param_1 + 0x2190));
    }
    *puVar7 = (char)uVar6;
    if ((2 < bVar1) && (puVar7[1] = (char)(uVar6 >> 8), 10 < bVar1)) {
      puVar7[2] = (char)(uVar4 >> 0x10);
    }
    *(long *)(param_1 + 0x2190) = *(long *)(param_1 + 0x2190) + (ulong)(bVar1 + 0xd >> 3);
    uVar5 = 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x2190);
    uVar5 = 0;
    if ((uVar3 != 0) && (uVar8 = *param_2, uVar8 != 0)) {
      if (uVar3 < uVar8) {
        uVar8 = uVar3;
      }
      _memcpy((void *)*param_3,*(void **)(param_1 + 0x2188),uVar8);
      *param_3 = *param_3 + uVar8;
      *param_2 = *param_2 - uVar8;
      *(long *)(param_1 + 0x2188) = *(long *)(param_1 + 0x2188) + uVar8;
      *(long *)(param_1 + 0x2190) = *(long *)(param_1 + 0x2190) - uVar8;
      lVar9 = uVar8 + *(long *)(param_1 + 0x2198);
      *(long *)(param_1 + 0x2198) = lVar9;
      uVar5 = 1;
      if (param_4 != (long *)0x0) {
        *param_4 = lVar9;
      }
    }
  }
  return uVar5;
}

