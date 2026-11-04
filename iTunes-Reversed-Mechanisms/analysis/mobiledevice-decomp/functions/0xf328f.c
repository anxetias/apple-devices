// rea decompile_all
// name: __getUserClientForService
// address: 0xf328f
// body: available
// range: 0xf328f-0xf35d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf35d3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__getUserClientForService(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 local_280;
  long *local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined2 local_25c;
  int local_25a;
  undefined2 local_256;
  undefined8 local_254;
  undefined2 local_24c;
  undefined4 *local_24a;
  undefined2 local_242;
  int local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined2 local_22c;
  int local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (__loadAndCacheIOUSBLibBundle_once != -1) {
    __getUserClientForService_cold_1();
  }
  uVar5 = 0;
  if (param_1 != 0) {
    local_28c = 0;
    local_278 = (long *)0x0;
    local_280 = param_4;
    local_270 = param_2;
    uVar5 = _CFUUIDGetConstantUUIDWithBytes
                      (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,
                       0x6f);
    iVar4 = _IOCreatePlugInInterfaceForService(param_1,param_3,uVar5,&local_278,&local_28c);
    plVar2 = local_278;
    if (iVar4 == 0) {
      if (local_278 == (long *)0x0) {
        uVar5 = 0;
        cVar3 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
        if (cVar3 == '\0') goto LAB_000f3486;
        local_238 = 0x8200102;
        pcVar6 = "plugin interface for %s is NULL";
        uVar7 = 0xc;
      }
      else {
        local_268 = 0;
        uStack_264 = 0;
        pcVar1 = *(code **)(*local_278 + 8);
        auVar8 = _CFUUIDGetUUIDBytes(local_280);
        iVar4 = (*pcVar1)(plVar2,auVar8._0_8_,auVar8._8_8_,&local_268);
        _IODestroyPlugInInterface(local_278);
        if (iVar4 == 0) {
          uVar5 = CONCAT44(uStack_264,local_268);
          goto LAB_000f3486;
        }
        uVar5 = 0;
        cVar3 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
        if (cVar3 == '\0') goto LAB_000f3486;
        local_238 = 0x8200202;
        local_22c = 0x400;
        pcVar6 = "error querying %s interface: 0x%x";
        uVar7 = 0x12;
        local_22a = iVar4;
      }
      uVar5 = 0;
      local_234 = local_270;
      __os_log_impl(0,PTR___os_log_default_004412f0,0,pcVar6,&local_238,uVar7);
    }
    else {
      _memcpy(&local_238,"<unknown>",0x200);
      local_288 = 0;
      _IORegistryEntryGetPath(param_1,"IOService",&local_238);
      _IORegistryEntryGetRegistryEntryID(param_1,&local_288);
      cVar3 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
      if (cVar3 != '\0') {
        local_268 = 0x8200502;
        uStack_264 = (undefined4)local_270;
        uStack_260 = (undefined4)((ulong)local_270 >> 0x20);
        local_25c = 0x400;
        local_256 = 0x800;
        local_254 = local_288;
        local_24c = 0x820;
        local_242 = 0x400;
        local_25a = iVar4;
        local_24a = &local_238;
        local_240 = param_1;
        __os_log_impl(0,PTR___os_log_default_004412f0,0,
                      "error getting plugin interface for %s: 0x%x, registryID %#llx (%s), service %u"
                      ,&local_268,0x2c);
      }
      if (iVar4 == -0x1ffffd42) {
        cVar3 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
        if (cVar3 != '\0') {
          local_268 = 0x4000100;
          uStack_264 = 0xe00002be;
          __os_log_impl(0,PTR___os_log_default_004412f0,0,
                        "error code 0x%x (kIOReturnNoResources) may indicate that the host is running MacOS < 13.0, where root permission is required to communicate with Port DFU devices."
                        ,&local_268,8);
        }
      }
      uVar5 = 0;
    }
  }
LAB_000f3486:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

