// rea decompile_all
// name: _ccder_blob_decode_tag
// address: 0xcfb9
// body: available
// range: 0xcfb9-0xd03c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccder_blob_decode_tag(undefined8 *param_1,ulong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  
  pbVar2 = (byte *)*param_1;
  if ((byte *)param_1[1] <= pbVar2 || pbVar2 == (byte *)0x0) {
    return 0;
  }
  pbVar5 = pbVar2 + 1;
  uVar4 = (ulong)(*pbVar2 & 0x1f);
  if (uVar4 == 0x1f) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      if ((byte *)param_1[1] <= pbVar5) {
        return 0;
      }
      if (uVar3 >> 0x39 != 0) {
        return 0;
      }
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar4 = (ulong)(bVar1 & 0x7f) | uVar3 << 7;
    } while ((char)bVar1 < '\0');
    if (uVar3 >> 0x36 != 0) {
      return 0;
    }
  }
  *param_2 = (ulong)(*pbVar2 & 0xffffffe0) << 0x38 | uVar4;
  *param_1 = pbVar5;
  return CONCAT71((int7)(uVar4 >> 8),1);
}

