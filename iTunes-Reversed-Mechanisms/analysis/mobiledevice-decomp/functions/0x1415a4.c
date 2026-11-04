// rea decompile_all
// name: MDRemotePairingBrowser::_handleTunnelTornDown:
// address: 0x1415a4
// body: available
// range: 0x1415a4-0x1418ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1418a9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int MDRemotePairingBrowser::_handleTunnelTornDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 local_128;
  long lStack_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  long local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar7 = 0xe8000007;
    pcVar6 = "Invalid input.";
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"copyCurrentDevices");
    if (lVar3 != 0) {
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = (long *)0x0;
      uStack_110 = 0;
      local_128 = 0;
      lStack_120 = 0;
      lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (lVar3,"countByEnumeratingWithState:objects:count:",&local_128,local_b8,0x10
                        );
      puVar1 = PTR__objc_msgSend_00441098;
      if (lVar4 == 0) {
        iVar7 = 0;
      }
      else {
        local_e0 = *local_118;
        local_c0 = lVar3;
        do {
          local_d8 = "class";
          local_d0 = "setTrustRequired:";
          local_c8 = "refreshMDRemoteServiceDevice";
          lVar8 = 0;
          do {
            if (*local_118 != local_e0) {
              _objc_enumerationMutation(local_c0);
            }
            lVar3 = *(long *)(lStack_120 + lVar8 * 8);
            if (lVar3 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar6 = "Invalid device.";
LAB_001417df:
              iVar7 = 0xe80000f1;
              lVar3 = local_c0;
              goto LAB_001417e6;
            }
            lVar3 = *(long *)(lVar3 + 0xf0);
            if (lVar3 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar6 = "Invalid remote service device provider.";
              goto LAB_001417df;
            }
            uVar5 = (*(code *)puVar1)(&objc::class_t::MDRemoteServiceDeviceProviderRemotePairing,
                                      local_d8);
            cVar2 = (*(code *)puVar1)(lVar3,"isKindOfClass:",uVar5);
            if (cVar2 == '\0') {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar6 = "Unexpected remote service device provider type.";
              goto LAB_001417df;
            }
            (*(code *)puVar1)(lVar3,local_d0,0);
            (*(code *)puVar1)(lVar3,local_c8);
            lVar3 = local_c0;
            lVar8 = lVar8 + 1;
          } while (lVar4 != lVar8);
          lVar4 = (*(code *)puVar1)(local_c0,"countByEnumeratingWithState:objects:count:",&local_128
                                    ,local_b8,0x10);
          iVar7 = 0;
        } while (lVar4 != 0);
      }
      goto LAB_00141800;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar7 = 0xe8000003;
    pcVar6 = "Failed to create array.";
  }
  lVar3 = 0;
LAB_001417e6:
  __os_log_internal(0,_md_log_log,0x10,pcVar6);
LAB_00141800:
  (*(code *)PTR__objc_release_004410a0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

