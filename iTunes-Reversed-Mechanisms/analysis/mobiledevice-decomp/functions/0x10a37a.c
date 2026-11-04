// rea decompile_all
// name: AMBootedOSDeviceProxy::GetFusingInfo
// address: 0x10a37a
// body: available
// range: 0x10a37a-0x10a432 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMBootedOSDeviceProxy::GetFusingInfo() */

int __thiscall AMBootedOSDeviceProxy::GetFusingInfo(AMBootedOSDeviceProxy *this)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  
  cVar1 = (**(code **)(*(long *)this + 0x60))();
  if (cVar1 == '\0') {
    lVar5 = CopyLockdownValue((__CFString *)this,true);
    if (lVar5 == 0) {
      AMDeviceProxy::Log((int)this,(__CFString *)&MACH_HEADER.cputype,
                         &cf_devicedoesn_tsupportProductionSOCquery_assumingproduction);
      iVar2 = 2;
    }
    else {
      iVar2 = (lVar5 == *(long *)PTR__kCFBooleanTrue_00441110) + 1;
    }
  }
  else {
    pvVar3 = (void *)CopyLockdownValue((__CFString *)this,true);
    pvVar4 = (void *)CopyLockdownValue((__CFString *)this,true);
    iVar2 = _AMDeviceProxyGetFusingFromCFTypes(pvVar3,pvVar4);
    if (pvVar3 != (void *)0x0) {
      _CFRelease(pvVar3);
    }
    if (pvVar4 != (void *)0x0) {
      _CFRelease(pvVar4);
    }
  }
  return iVar2;
}

