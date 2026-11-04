// rea decompile_all
// name: __DERDecoderTraverseAllItems
// address: 0x1b7f99
// body: available
// range: 0x1b7f99-0x1b8096 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DERDecoderTraverseAllItems(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  uint local_34;
  
  puVar3 = (undefined8 *)0x0;
  if (param_1 == (undefined8 *)0x0) {
LAB_001b8092:
    __DERDecoderTraverseAllItems_cold_3();
    if ((((*(uint *)((long)puVar3 + 0xc) == *(uint *)(param_2 + 0x14)) &&
         (*(uint *)(puVar3 + 2) == *(uint *)(param_2 + 0x18))) &&
        (*(uint *)((long)puVar3 + 0x24) == *(uint *)(param_2 + 0x2c))) &&
       (*(uint *)(param_2 + 4) <= *(uint *)param_2)) {
      *(undefined8 *)(param_2 + 0x20) = puVar3[3];
      *(uint *)(param_2 + 0x28) = *(uint *)(puVar3 + 4);
      *(undefined8 *)(param_2 + 8) = *puVar3;
      *(uint *)(param_2 + 0x10) = *(uint *)(puVar3 + 1);
      uVar1 = 0;
    }
    else {
      *(uint *)param_2 = *(uint *)param_2 + 1;
      uVar1 = 1;
    }
    return uVar1;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    param_1 = (undefined8 *)*param_1;
    do {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar2 = (code *)(ulong)uVar4;
      puVar3 = param_1;
      local_60 = param_1;
      uVar1 = __DERDecodeTag(param_1,pcVar2,(long)&local_58 + 4,&uStack_50,(long)&uStack_40 + 4,
                             &local_34);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((ulong)local_34 == 0) {
        __DERDecoderTraverseAllItems_cold_2();
LAB_001b808d:
        param_2 = pcVar2;
        __DERDecoderTraverseAllItems_cold_1();
        goto LAB_001b8092;
      }
      uVar4 = uVar4 - local_34;
      param_1 = (undefined8 *)((long)param_1 + (ulong)local_34);
      pcVar2 = (code *)(ulong)uVar4;
      puVar3 = param_1;
      uVar1 = __DERDecodeLength(param_1,pcVar2,&uStack_40,&local_34);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((ulong)local_34 == 0) goto LAB_001b808d;
      uVar4 = uVar4 - local_34;
      if (uVar4 < (uint)uStack_40) {
        return 2;
      }
      lVar5 = (long)param_1 + (ulong)local_34;
      local_58 = CONCAT44(local_58._4_4_,(uint)uStack_40 + ((int)lVar5 - (int)local_60));
      local_48 = lVar5;
      uVar1 = (*param_2)(&local_60,param_3);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      param_1 = (undefined8 *)(lVar5 + (uStack_40 & 0xffffffff));
      uVar4 = uVar4 - (uint)uStack_40;
    } while (uVar4 != 0);
  }
  return 1;
}

