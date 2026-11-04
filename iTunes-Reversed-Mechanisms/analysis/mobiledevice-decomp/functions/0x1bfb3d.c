// rea decompile_all
// name: _init_keys
// address: 0x1bfb3d
// body: available
// range: 0x1bfb3d-0x1bfbc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _init_keys(byte *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  *param_2 = 0x12345678;
  param_2[1] = 0x23456789;
  param_2[2] = 0x34567890;
  bVar4 = *param_1;
  if (bVar4 != 0) {
    uVar1 = 0x12345678;
    uVar3 = 0x23456789;
    uVar2 = 0x34567890;
    do {
      param_1 = param_1 + 1;
      uVar1 = uVar1 >> 8 ^ *(ulong *)(param_3 + (ulong)(byte)((byte)uVar1 ^ bVar4) * 8);
      *param_2 = uVar1;
      uVar3 = ((uVar1 & 0xff) + uVar3) * 0x8088405 + 1;
      param_2[1] = uVar3;
      uVar2 = uVar2 >> 8 ^
              *(ulong *)(param_3 + (ulong)(((uint)uVar2 ^ (uint)(uVar3 >> 0x18) & 0xff) & 0xff) * 8)
      ;
      param_2[2] = uVar2;
      bVar4 = *param_1;
    } while (bVar4 != 0);
  }
  return;
}

