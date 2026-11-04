// rea decompile_all
// name: _UARPSuperBinaryGetInternalPayloadMetaData
// address: 0x17a739
// body: available
// range: 0x17a739-0x17a7c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_UARPSuperBinaryGetInternalPayloadMetaData
          (undefined8 param_1,long param_2,void *param_3,ushort param_4,uint param_5,
          undefined2 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  lVar4 = *(long *)(param_2 + 0x278);
  uVar3 = 0x28;
  do {
    do {
      if (lVar4 == 0) {
        uVar6 = 0;
LAB_0017a7bc:
        *param_6 = uVar6;
        return uVar3;
      }
      iVar1 = *(int *)(lVar4 + 0x1c);
    } while (iVar1 == 0);
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (param_5 < uVar2 + iVar1 && uVar2 <= param_5) {
      uVar5 = iVar1 - (param_5 - uVar2);
      uVar7 = (uint)param_4;
      if ((uVar5 & 0xffff) <= (uint)param_4) {
        uVar7 = uVar5;
      }
      uVar6 = (undefined2)uVar7;
      _memcpy(param_3,(void *)((ulong)(param_5 - uVar2) + *(long *)(lVar4 + 0x98)),
              (ulong)(uVar7 & 0xffff));
      uVar3 = 0;
      goto LAB_0017a7bc;
    }
    lVar4 = *(long *)(lVar4 + 0xb0);
  } while( true );
}

