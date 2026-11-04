// rea decompile_all
// name: _ccder_blob_encode_len
// address: 0xd2de
// body: available
// range: 0xd2de-0xd3bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccder_blob_encode_len(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_2 >> 0x20 == 0) {
    lVar1 = *param_1;
    uVar2 = param_1[1];
    if (param_2 < 0x80) {
      if (lVar1 + 1U <= uVar2) {
        lVar3 = -1;
        goto LAB_0000d3ab;
      }
    }
    else if (param_2 < 0x100) {
      if (lVar1 + 2U <= uVar2) {
        *(char *)(uVar2 - 1) = (char)param_2;
        param_2 = 0x81;
        lVar3 = -2;
        goto LAB_0000d3ab;
      }
    }
    else {
      uVar4 = (ushort)param_2;
      if (param_2 < 0x10000) {
        if (lVar1 + 3U <= uVar2) {
          *(ushort *)(uVar2 - 2) = uVar4 << 8 | uVar4 >> 8;
          param_2 = 0x82;
          lVar3 = -3;
          goto LAB_0000d3ab;
        }
      }
      else {
        uVar5 = (uint)param_2;
        if (param_2 < 0x1000000) {
          if (lVar1 + 4U <= uVar2) {
            *(ushort *)(uVar2 - 2) = uVar4 << 8 | uVar4 >> 8;
            *(char *)(uVar2 - 3) = (char)(param_2 >> 0x10);
            param_2 = 0x83;
            lVar3 = -4;
LAB_0000d3ab:
            *(char *)(uVar2 + lVar3) = (char)param_2;
            *param_1 = lVar1;
            param_1[1] = uVar2 + lVar3;
            return CONCAT71((int7)((ulong)lVar1 >> 8),1);
          }
        }
        else if (lVar1 + 5U <= uVar2) {
          *(uint *)(uVar2 - 4) =
               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          param_2 = 0x84;
          lVar3 = -5;
          goto LAB_0000d3ab;
        }
      }
    }
  }
  return 0;
}

