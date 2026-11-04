// rea decompile_all
// name: _AMAuthInstallBasebandCopyDescription
// address: 0x1a5327
// body: available
// range: 0x1a5327-0x1a546c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandCopyDescription(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  
  uVar1 = _CFGetAllocator();
  uVar1 = _CFStringCreateMutable(uVar1,0x100);
  _CFStringAppend(uVar1,&cf__);
  pcVar4 = "YES";
  if (*(char *)(param_1 + 0x3a) == '\0') {
    pcVar4 = "NO";
  }
  _CFStringAppendFormat(uVar1,0,&cf_personalize__s,pcVar4);
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFStringAppendFormat(uVar1,0,&cf__);
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x10) != 0) {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = __CopyHexStringFromData(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
      if (lVar3 != 0) {
        _CFStringAppendFormat(uVar1,0,&cf_snum_0x___,lVar3);
        _CFRelease(lVar3);
      }
    }
    _CFStringAppendFormat
              (uVar1,0,&cf_chipid_0x_x_certid_0x_x,*(undefined4 *)(*(long *)(param_1 + 0x30) + 4),
               *(undefined4 *)(*(long *)(param_1 + 0x30) + 8));
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x18) != 0) {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = __CopyHexStringFromData(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18));
      if (lVar3 != 0) {
        _CFStringAppendFormat(uVar1,0,&cf__nonce_0x__,lVar3);
        _CFRelease(lVar3);
      }
    }
  }
  _CFStringAppend(uVar1,&cf__);
  return uVar1;
}

