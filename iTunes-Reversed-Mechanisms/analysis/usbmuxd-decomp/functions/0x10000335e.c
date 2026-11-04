// rea decompile_all
// name: FUN_10000335e
// address: 0x10000335e
// body: available
// range: 0x10000335e-0x100003547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000034c0 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000034f6 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100003543 to 0x100013239 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000335e(undefined4 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  
  if (DAT_1000212b0 != (undefined8 *)0x0) {
    lVar4 = FUN_100008f33();
    if (lVar4 == 0) {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sdevice_uisnolongerattached_,"HandleDevicePaired",param_1);
        return;
      }
    }
    else {
      lVar5 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                         PTR__kCFTypeDictionaryValueCallBacks_10001c060);
      if (lVar5 != 0) {
        cVar2 = FUN_100002da3(lVar5,PTR_cf_DeviceID_1000211a0,*(undefined4 *)(lVar4 + 0x188));
        if (cVar2 == '\0') {
          if (2 < DAT_100021030) {
            FUN_1000008d2(3,0,&cf__sfailedtoaddvaluetopairedDict,"HandleDevicePaired");
          }
        }
        else {
          _CFDictionaryAddValue(lVar5,PTR_cf_MessageType_100021110,PTR_cf_Paired_100021140);
          puVar1 = DAT_1000212b0;
          while (puVar8 = puVar1, puVar8 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar8;
            if (((2 < *(int *)(puVar8 + 2)) || (*(int *)(lVar4 + 0x18) != 2)) &&
               (*(char *)(puVar8 + 10) == '\0')) {
              iVar3 = FUN_100002e00(puVar8,0,lVar5);
              if (iVar3 != 0) {
                if (2 < DAT_100021030) {
                  uVar6 = FUN_10000302f(puVar8);
                  pcVar7 = _strerror(iVar3);
                  FUN_1000008d2(3,0,&cf__sClientSendDictionarytolistenerclient_sfailed__d__s,
                                "HandleDevicePaired",uVar6,iVar3,pcVar7);
                }
                FUN_100003084(puVar8);
              }
            }
          }
        }
        _CFRelease(lVar5);
        return;
      }
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sfailedtoallocatepairedDict,"HandleDevicePaired");
        return;
      }
    }
  }
  return;
}

