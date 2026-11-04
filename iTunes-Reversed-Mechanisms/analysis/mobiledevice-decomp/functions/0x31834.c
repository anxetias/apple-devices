// rea decompile_all
// name: _taDFU_AppleKIS_enabled
// address: 0x31834
// body: available
// range: 0x31834-0x31962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _taDFU_AppleKIS_enabled(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  size_t local_28;
  long local_20;
  int local_14;
  
  lVar3 = _IOObjectCopyBundleIdentifierForClass(&cf_AppleKIS);
  if (lVar3 == 0) {
    return false;
  }
  _CFRelease(lVar3);
  local_14 = 0;
  local_28 = 4;
  iVar2 = _sysctlbyname("applekis.enabled",&local_14,&local_28,(void *)0x0,0);
  if (iVar2 == 0) {
    pcVar4 = "on";
    if (local_14 == 0) {
      pcVar4 = "off";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"KIS kext is %s",pcVar4);
    bVar5 = local_14 == 0;
  }
  else {
    iVar2 = ___isPlatformOrVariantPlatformVersionAtLeast(1,0xd,0,0,2,0x10,0,0);
    if (iVar2 == 0) {
      return true;
    }
    local_20 = 0;
    cVar1 = _os_parse_boot_arg_int("kis-kext");
    if (cVar1 == '\0') {
      return true;
    }
    pcVar4 = "on";
    if (local_20 == 0) {
      pcVar4 = "off";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,
                      "%s Overriding behavior with boot-arg, KIS kext is forced: %s",
                      "taDFU_AppleKIS_enabled",pcVar4);
    bVar5 = local_20 == 0;
  }
  return !bVar5;
}

