// rea decompile_all
// name: FUN_100002aeb
// address: 0x100002aeb
// body: available
// range: 0x100002aeb-0x100002da2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002c4d to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100002d9e to 0x100000ffa FUN_100000ffa (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100002aeb(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  cfstringStruct *pcVar8;
  long local_38;
  
  if (param_1 == 0) {
    if (5 < DAT_100021030) {
      pcVar8 = &cf__smie_NULL_ignored;
      uVar5 = 6;
LAB_100002c3b:
      FUN_1000008d2(uVar5,0,pcVar8,"HandleDeviceDetach");
      return;
    }
  }
  else {
    iVar1 = (DAT_100021290 ^ 1) * 2 + 5;
    if (iVar1 <= DAT_100021030) {
      FUN_1000008d2(iVar1,0,&cf__sDevice_u___x,"HandleDeviceDetach",*(undefined4 *)(param_1 + 0x188)
                    ,*(undefined4 *)(param_1 + 0x18c));
    }
    if (iVar1 <= DAT_100021030) {
      puVar4 = &DAT_1000212b0;
      iVar7 = -1;
      do {
        puVar4 = (undefined8 *)*puVar4;
        iVar7 = iVar7 + 1;
      } while (puVar4 != (undefined8 *)0x0);
      FUN_1000008d2(iVar1,0,&cf_thereare_dlisteners,iVar7);
    }
    if (DAT_1000212b0 != (undefined8 *)0x0) {
      local_38 = _CFDictionaryCreateMutable
                           (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,
                            PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                            PTR__kCFTypeDictionaryValueCallBacks_10001c060);
      if (local_38 != 0) {
        cVar3 = FUN_100002da3(local_38,PTR_cf_DeviceID_1000211a0,*(undefined4 *)(param_1 + 0x188));
        if (cVar3 == '\0') {
          _CFRelease(local_38);
          local_38 = 0;
          puVar4 = DAT_1000212b0;
        }
        else {
          _CFDictionaryAddValue(local_38,PTR_cf_MessageType_100021110,PTR_cf_Detached_100021138);
          puVar4 = DAT_1000212b0;
        }
joined_r0x000100002c7b:
        do {
          while( true ) {
            puVar2 = puVar4;
            if (puVar2 == (undefined8 *)0x0) {
              if (local_38 != 0) {
                _CFRelease();
              }
              FUN_100000ffa();
              return;
            }
            puVar4 = (undefined8 *)*puVar2;
            if ((2 < *(int *)(puVar2 + 2)) || (*(int *)(param_1 + 0x18) != 2)) break;
            if (iVar1 <= DAT_100021030) {
              uVar5 = puVar2[6];
              pcVar8 = &cf_listener__ignored_wronglibraryversion;
LAB_100002ce4:
              FUN_1000008d2(iVar1,0,pcVar8,uVar5);
            }
          }
          if (*(char *)(puVar2 + 10) == '\x01') {
            if (iVar1 <= DAT_100021030) {
              uVar5 = puVar2[6];
              pcVar8 = &cf_listener__ignored_blacklisted;
              goto LAB_100002ce4;
            }
            goto joined_r0x000100002c7b;
          }
          if (iVar1 <= DAT_100021030) {
            FUN_1000008d2(iVar1,0,&cf_notify__ofdevice_udetach,puVar2[6],
                          *(undefined4 *)(param_1 + 0x188));
          }
          iVar7 = FUN_100002e00(puVar2,0,local_38);
          if (iVar7 != 0) {
            if (2 < DAT_100021030) {
              uVar5 = FUN_10000302f(puVar2);
              pcVar6 = _strerror(iVar7);
              FUN_1000008d2(3,0,&cf__sClientSendDictionarytolistenerclient_sfailed__d__s,
                            "HandleDeviceDetach",uVar5,iVar7,pcVar6);
            }
            FUN_100003084(puVar2);
          }
        } while( true );
      }
      if (2 < DAT_100021030) {
        pcVar8 = &cf__sfailedtoallocatedetachDict;
        uVar5 = 3;
        goto LAB_100002c3b;
      }
    }
  }
  return;
}

