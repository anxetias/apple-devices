// rea decompile_all
// name: _AFCValidateHeader
// address: 0xb6fbc
// body: available
// range: 0xb6fbc-0xb70c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AFCValidateHeader(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*param_1 == 0x434641364c504141) {
    _AFCLog(5,"Swapped packet\n");
    uVar2 = param_1[1];
    uVar1 = param_1[2];
    param_1[1] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                 (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                 (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
                 uVar2 << 0x38;
    uVar2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
            (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
            (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    param_1[2] = uVar2;
    uVar1 = param_1[4];
    param_1[4] = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                 (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                 (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
                 uVar1 << 0x38;
  }
  else {
    if (*param_1 != 0x4141504c36414643) goto LAB_000b70b7;
    uVar2 = param_1[2];
  }
  if ((((0x27 < uVar2) && (uVar2 <= (ulong)param_1[1])) && ((ulong)param_1[1] >> 0x20 == 0)) &&
     ((ulong)param_1[4] >> 0x20 == 0)) {
    return 0;
  }
LAB_000b70b7:
  uVar3 = ___AFCSetErrorResult(1);
  return uVar3;
}

