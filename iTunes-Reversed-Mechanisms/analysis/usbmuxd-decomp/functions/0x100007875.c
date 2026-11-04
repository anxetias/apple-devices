// rea decompile_all
// name: FUN_100007875
// address: 0x100007875
// body: available
// range: 0x100007875-0x100007a82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100007a7e to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100007875(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_43c;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10001c070;
  local_43c = 0;
  if (param_1 == 0) goto LAB_100007a5e;
  uVar4 = _CFDictionaryGetValue(param_2,PTR_cf_PairRecordID_1000211f0);
  cVar2 = FUN_1000046c7(uVar4,local_438);
  if (cVar2 == '\0') {
    if (2 < DAT_100021030) {
      uVar4 = FUN_10000302f(param_1);
      FUN_1000008d2(3,0,&cf__sCouldnotgetpairrecordpathfrommessage_client_s,"SavePairingRecord",
                    uVar4);
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf_messagecontents_);
      }
    }
    FUN_1000086b3(param_2);
    iVar3 = 0x16;
  }
  else {
    lVar5 = _CFDictionaryGetValue(param_2,PTR_cf_PairRecordData_1000211f8);
    if (lVar5 != 0) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFDataGetTypeID();
      if (lVar6 == lVar7) {
        iVar3 = FUN_100005ff5(local_438,lVar5);
        if (iVar3 == 0) {
          if (6 < DAT_100021030) {
            FUN_1000008d2(7,0,&cf__ssavedplist_sfor___,"SavePairingRecord",local_438,
                          *(undefined8 *)(param_1 + 0x30));
          }
          cVar2 = FUN_100006efe(param_2,PTR_cf_DeviceID_1000211a0,&local_43c);
          uVar1 = local_43c;
          iVar3 = 0;
          if (cVar2 != '\0') {
            if (6 < DAT_100021030) {
              FUN_1000008d2(7,0,&cf__ssendingapairednotificationfordevice__d,"SavePairingRecord",
                            local_43c);
            }
            FUN_10000335e(uVar1);
          }
        }
        goto LAB_100007a53;
      }
    }
    iVar3 = 0x16;
    if (2 < DAT_100021030) {
      uVar4 = FUN_10000302f(param_1);
      FUN_1000008d2(3,0,&cf__srequestfrom_sismissingdata_,"SavePairingRecord",uVar4);
    }
  }
LAB_100007a53:
  FUN_100005497(param_1,iVar3);
LAB_100007a5e:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

