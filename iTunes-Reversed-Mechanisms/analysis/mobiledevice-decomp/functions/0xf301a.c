// rea decompile_all
// name: ____loadAndCacheIOUSBLibBundle_block_invoke
// address: 0xf301a
// body: available
// range: 0xf301a-0xf31c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf31c2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____loadAndCacheIOUSBLibBundle_block_invoke(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined4 local_48;
  cfstringStruct *local_44;
  undefined2 local_3c;
  undefined8 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar3 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  pcVar7 = &cf__System_Library_Extensions_IOUSBHostFamily_kext_Contents_PlugIns_IOUSBLib_bundle;
  if (iVar3 == 0) {
    pcVar7 = &cf__System_Library_Extensions_IOUSBFamily_kext_Contents_PlugIns_IOUSBLib_bundle;
  }
  uVar4 = _CFURLCreateWithFileSystemPath(0,pcVar7,0,1);
  lVar5 = _CFBundleCreate(0,uVar4);
  if (lVar5 != 0) {
    cVar1 = _CFBundleLoadExecutableAndReturnError(lVar5);
    cVar2 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        local_48 = 0x8400202;
        local_3c = 0x840;
        local_3a = 0;
        local_44 = pcVar7;
        __os_log_impl(0,PTR___os_log_default_004412f0,0,"failed to load bundle at %@: %@",&local_48,
                      0x16);
      }
      _CFRelease(0);
    }
    else if (cVar2 != '\0') {
      local_48 = 0x8400102;
      local_44 = pcVar7;
      __os_log_impl(0,PTR___os_log_default_004412f0,0,"loaded bundle at %@",&local_48,0xc);
    }
    lVar6 = _CFBundleGetPlugIn(lVar5);
    if (lVar6 != 0) {
      _CFPlugInSetLoadOnDemand(lVar6,0);
      cVar1 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
      if (cVar1 != '\0') {
        local_48 = 0x8400102;
        local_44 = pcVar7;
        __os_log_impl(0,PTR___os_log_default_004412f0,0,"disabled plugin unloading for %@",&local_48
                      ,0xc);
      }
    }
  }
  _CFRelease(uVar4);
  __loadAndCacheIOUSBLibBundle_foundBundle = lVar5;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

