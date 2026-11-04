// rea decompile_all
// name: _RestoreCheckpointCreateCheckpointFingerprint
// address: 0x161ac2
// body: available
// range: 0x161ac2-0x161b62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _RestoreCheckpointCreateCheckpointFingerprint(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  pcVar3 = &cf_XXXX;
  pcVar4 = &cf_XXXX;
  if ((int)(short)uVar1 == uVar1) {
    pcVar4 = (cfstringStruct *)_CFStringCreateWithFormat(uVar2,0,&cf__04X,uVar1 & 0xffff);
  }
  uVar1 = param_1[1];
  if ((int)(short)uVar1 == uVar1) {
    pcVar3 = (cfstringStruct *)_CFStringCreateWithFormat(uVar2,0,&cf__04X,uVar1 & 0xffff);
  }
  uVar2 = _CFStringCreateWithFormat(uVar2,0,&cf______,pcVar4,pcVar3);
  _CFRelease(pcVar4);
  _CFRelease(pcVar3);
  return uVar2;
}

