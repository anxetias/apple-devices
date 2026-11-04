// rea decompile_all
// name: FUN_100002274
// address: 0x100002274
// body: available
// range: 0x100002274-0x1000023f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000234c to 0x100002ac7 FUN_100002ac7 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100002274(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_1000023f4();
  plVar2 = _malloc(0x10);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_1 + 0x188);
    if (6 < DAT_100021030) {
      uVar3 = FUN_100008d22(param_1);
      FUN_1000008d2(7,0,&cf__sattemptingtopre_pairwithdeviceoninterface_s,"HandleDeviceAttach",uVar3
                   );
    }
    lVar4 = _AMDevicePreflightOperationCreate(FUN_100002669,plVar2,lVar1,0);
    *plVar2 = lVar4;
    if (lVar4 == 0) {
      if (*(int *)(param_1 + 0x18) == 2) {
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&cf__scouldnotbeginpairingprocesswithnetworkdevice_Ignoring_,
                        "HandleDeviceAttach");
        }
      }
      else if (*(int *)(param_1 + 0x18) == 1) {
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&
                            cf__scouldnotbeginpairingprocesswithdevice_Notifyingallclientsimmediately_
                        ,"HandleDeviceAttach");
        }
        *(undefined4 *)(param_1 + 0x1ac) = 2;
        FUN_1000028ab(param_1);
      }
      else if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__scouldnotbeginpairingprocesswithdevicewithunknowntype_d,
                      "HandleDeviceAttach");
      }
      goto LAB_10000232f;
    }
    lVar4 = _AMDevicePreflightOperationGetRunLoopSource(lVar4);
    if (lVar4 == 0) goto LAB_10000232f;
    uVar3 = _CFRunLoopGetCurrent();
    _CFRunLoopAddSource(uVar3,lVar4,*(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040);
  }
  plVar2 = (long *)0x0;
LAB_10000232f:
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  if (plVar2 != (long *)0x0) {
    FUN_100002ac7(plVar2);
    return;
  }
  return;
}

