// rea decompile_all
// name: _uarpVersionToAceVersion
// address: 0x272efa
// body: available
// range: 0x272efa-0x272ff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpVersionToAceVersion(uint *param_1,uint *param_2,undefined2 *param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_1 == (uint *)0x0) {
    uVar6 = 0x1e;
  }
  else {
    uVar1 = *param_1;
    uVar4 = uVar1 - 0xe00;
    if (uVar1 < 0xe00) {
      uVar4 = uVar1;
    }
    if (uVar4 < 100) {
      uVar5 = 0xe00;
      if (uVar1 < 0xe00) {
        uVar5 = 0;
      }
      uVar2 = (ushort)uVar4 & 0xff;
      uVar1 = param_1[1];
      if (uVar1 < 1000) {
        if (param_1[2] < 100) {
          if (param_2 != (uint *)0x0) {
            uVar3 = (ushort)param_1[2] & 0xff;
            *param_2 = ((uVar1 & 0xffff) % 10 |
                       (uint)(byte)((char)(((ushort)((uVar1 & 0xffff) / 10) & 0xff) % 10) << 4) |
                       ((uVar1 & 0xffff) / 100 & 0xff) << 8) << 8 |
                       (uVar5 | (byte)((byte)(uVar2 % 10) | (char)(uVar2 / 10) << 4)) << 0x14 |
                       (uint)(byte)((byte)(uVar3 % 10) | (char)(uVar3 / 10) << 4);
          }
          if (param_3 != (undefined2 *)0x0) {
            *param_3 = (short)param_1[3];
          }
        }
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

