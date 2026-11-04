// rea decompile_all
// name: _probeDeviceMatchesVIDPID
// address: 0x360f4
// body: available
// range: 0x360f4-0x3616e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _probeDeviceMatchesVIDPID(short param_1,short param_2,short param_3,short *param_4)

{
  short sVar1;
  short *psVar2;
  ulong uVar3;
  short sVar4;
  
  sVar4 = param_4[1];
  if (param_4[1] == param_2 && *param_4 == param_1) {
    sVar1 = param_4[0x16];
    sVar4 = param_2;
    if (sVar1 == -1 || sVar1 == param_3) {
      return CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
    }
  }
  psVar2 = *(short **)(param_4 + 0x10);
  if (psVar2 == (short *)0x0 || sVar4 != -1) {
    return 0;
  }
  if ((*psVar2 == param_1) && (psVar2[1] == param_2)) {
    sVar4 = psVar2[2];
    uVar3 = (ulong)CONCAT11((char)((ushort)sVar4 >> 8),sVar4 == -1 || sVar4 == param_3);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

