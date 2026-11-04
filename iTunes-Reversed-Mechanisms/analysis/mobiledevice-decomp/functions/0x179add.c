// rea decompile_all
// name: __AMRCompressedZipFileRead
// address: 0x179add
// body: available
// range: 0x179add-0x179b30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __AMRCompressedZipFileRead(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  do {
    uVar2 = param_4;
    if (uVar2 == 0) break;
    uVar3 = 0x7fffffff;
    if (uVar2 < 0x7fffffff) {
      uVar3 = uVar2;
    }
    uVar1 = _unzReadCurrentFile(param_1,param_3,uVar3);
    param_3 = param_3 + (ulong)uVar1;
    param_4 = uVar2 - uVar1;
  } while (0 < (int)uVar1);
  return uVar2 == 0;
}

