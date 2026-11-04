// rea decompile_all
// name: SERestoreInfo::P73BaseDeviceInfo::isDev
// address: 0x24c93c
// body: available
// range: 0x24c93c-0x24c9aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeviceInfo::isDev() const */

ulong __thiscall SERestoreInfo::P73BaseDeviceInfo::isDev(P73BaseDeviceInfo *this)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  void *local_30;
  void *local_28;
  undefined7 uVar5;
  
  uVar1 = (**(code **)(*(long *)this + 0x20))();
  RootCA::getRootKeyId((RootCA *)&local_30,1,uVar1);
  sVar3 = *(long *)(this + 0x60) - (long)*(void **)(this + 0x58);
  uVar5 = (undefined7)((ulong)&local_30 >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (sVar3 == (long)local_28 - (long)local_30) {
    iVar2 = _memcmp(*(void **)(this + 0x58),local_30,sVar3);
    uVar4 = CONCAT71(uVar5,iVar2 != 0);
  }
  if (local_30 != (void *)0x0) {
    local_28 = local_30;
    operator_delete(local_30);
  }
  return uVar4 & 0xffffffff;
}

