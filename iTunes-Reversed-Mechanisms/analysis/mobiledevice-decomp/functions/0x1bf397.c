// rea decompile_all
// name: _zipFlushWriteBuffer
// address: 0x1bf397
// body: available
// range: 0x1bf397-0x1bf489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _zipFlushWriteBuffer(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0xd4);
  if (*(int *)(param_1 + 0x4110) != 0) {
    if (*(uint *)(param_1 + 0xd4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = 0;
      do {
        uVar4 = (uint)*(ulong *)(param_1 + 0x4128);
        uVar5 = *(ulong *)(param_1 + 0x4118) >> 8 ^
                *(ulong *)(*(long *)(param_1 + 0x4130) +
                          (ulong)(byte)(*(byte *)(param_1 + 0x100 + uVar3) ^
                                       (byte)*(ulong *)(param_1 + 0x4118)) * 8);
        *(ulong *)(param_1 + 0x4118) = uVar5;
        lVar6 = ((uVar5 & 0xff) + *(long *)(param_1 + 0x4120)) * 0x8088405 + 1;
        *(long *)(param_1 + 0x4120) = lVar6;
        *(ulong *)(param_1 + 0x4128) =
             *(ulong *)(param_1 + 0x4128) >> 8 ^
             *(ulong *)(*(long *)(param_1 + 0x4130) +
                       (ulong)(((uint)((ulong)lVar6 >> 0x18) & 0xff ^ uVar4) & 0xff) * 8);
        pbVar1 = (byte *)(param_1 + 0x100 + uVar3);
        *pbVar1 = *pbVar1 ^ (byte)((uVar4 & 0xfffd ^ 3) * (uVar4 | 2) >> 8);
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  uVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_1 + 0x100
                     ,uVar2);
  uVar4 = *(uint *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return -(uint)(uVar2 != uVar4);
}

