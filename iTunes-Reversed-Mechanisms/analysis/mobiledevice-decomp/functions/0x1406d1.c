// rea decompile_all
// name: MDRemotePairingBrowser::_handleDeviceBecameUnavailable:
// address: 0x1406d1
// body: available
// range: 0x1406d1-0x1408f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1408f2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int MDRemotePairingBrowser::_handleDeviceBecameUnavailable_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char *local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar3 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c8 = param_1;
  if (param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    iVar5 = 0xe8000007;
  }
  else {
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (long *)0x0;
    uStack_100 = 0;
    local_118 = 0;
    lStack_110 = 0;
    local_c0 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"mutableDevicePointers");
    lVar6 = (*(code *)puVar3)(local_c0,"countByEnumeratingWithState:objects:count:",&local_118,
                              local_b8,0x10);
    if (lVar6 != 0) {
      lVar1 = *local_108;
      do {
        local_d0 = "notifyClientAboutDevice:action:";
        lVar8 = 0;
        do {
          if (*local_108 != lVar1) {
            _objc_enumerationMutation(local_c0);
          }
          plVar2 = *(long **)(lStack_110 + lVar8 * 8);
          if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
            iVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_c8,local_d0,*plVar2,2);
            if (iVar5 != 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar4 = _md_log_log;
              uVar7 = _AMDErrorString(iVar5);
              __os_log_internal(0,uVar4,0x10,"Failed to detach device: 0x%08x (%s)",iVar5,uVar7);
              goto LAB_0014089d;
            }
            if (*plVar2 != 0) {
              _CFRelease();
            }
            *plVar2 = 0;
          }
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                          (local_c0,"countByEnumeratingWithState:objects:count:",&local_118,local_b8
                           ,0x10);
      } while (lVar6 != 0);
    }
    iVar5 = 0;
  }
LAB_0014089d:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

