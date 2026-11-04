// rea decompile_all
// name: _MISProfileSignWithKeyAndCertificates
// address: 0xbdf2f
// body: available
// range: 0xbdf2f-0xbe00d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _MISProfileSignWithKeyAndCertificates(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_40;
  undefined4 local_34;
  
  local_34 = 0;
  uVar2 = 0xe8008003;
  if (*(long *)(param_1 + 0x18) == 0) {
    local_40 = 0;
    uVar3 = _CFGetAllocator();
    lVar4 = _CFPropertyListCreateData(uVar3,*(undefined8 *)(param_1 + 0x10),100,0,&local_40);
    if (local_40 == 0) {
      if (lVar4 != 0) {
        uVar3 = _MISCryptoCreateCMSSignatureWithKey(lVar4,param_2,param_3,&local_34);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        _CFRelease(lVar4);
        return local_34;
      }
    }
    else {
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
      uVar3 = _MISGetLog();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        _MISProfileSignWithKeyAndCertificates_cold_1(&local_40,uVar3);
      }
      _CFRelease(local_40);
    }
    uVar2 = 0xe800800a;
  }
  return uVar2;
}

