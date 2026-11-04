// rea decompile_all
// name: FUN_10001305e
// address: 0x10001305e
// body: available
// range: 0x10001305e-0x1000137cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10001305e(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  cfstringStruct *pcVar13;
  
  plVar1 = *(long **)(param_1 + 0x10);
  uVar4 = _CFArrayGetCount(param_2);
  lVar5 = _CFArrayGetValueAtIndex(param_2,0);
  if (lVar5 == 0) {
    cVar3 = _DLShouldLog(4);
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    pcVar13 = &cf__SyncHandleIncomingMessagecalledwithNULLmessage_;
    uVar7 = 4;
LAB_10001327a:
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncWireProtocol/SyncDeviceLinkConnection.c"
            ,"_SyncHandleIncomingMessage",uVar7,pcVar13);
    return 0xffffffff;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageSyncDataClassWithDevice,0);
  if (lVar6 == 0) {
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
      if (uVar4 != 2) {
        uVar8 = __DLGetParameterAtIndex(param_2,2);
        if (uVar4 < 4) {
          uVar12 = 0;
          uVar11 = 0;
          uVar9 = 0;
        }
        else {
          uVar11 = __DLGetParameterAtIndex(param_2,3);
          if (uVar4 == 4) {
            uVar12 = 0;
          }
          else {
            uVar12 = __DLGetParameterAtIndex(param_2,4);
            if (5 < uVar4) {
              uVar9 = __DLGetParameterAtIndex(param_2,5);
              goto LAB_1000132f5;
            }
          }
          uVar9 = 0;
        }
        goto LAB_1000132f5;
      }
    }
    uVar12 = 0;
    uVar8 = 0;
    uVar11 = 0;
    uVar9 = 0;
LAB_1000132f5:
    (**(code **)(plVar1[1] + 0x68))(param_1,uVar7,uVar8,uVar11,uVar12,uVar9);
    return 0;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageSyncDataClassWithComputer,0);
  if (lVar6 == 0) {
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
      if (uVar4 != 2) {
        uVar11 = __DLGetParameterAtIndex(param_2,2);
        if (uVar4 < 4) {
          uVar10 = 0;
          uVar12 = 0;
          uVar9 = 0;
          uVar8 = 0;
        }
        else {
          uVar12 = __DLGetParameterAtIndex(param_2,3);
          if (uVar4 == 4) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
          }
          else {
            uVar9 = __DLGetParameterAtIndex(param_2,4);
            if (uVar4 < 6) {
              uVar10 = 0;
            }
            else {
              uVar10 = __DLGetParameterAtIndex(param_2,5);
              if (uVar4 != 6) {
                uVar8 = __DLGetParameterAtIndex(param_2,6);
                goto LAB_100013359;
              }
            }
            uVar8 = 0;
          }
        }
        goto LAB_100013359;
      }
    }
    uVar10 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
LAB_100013359:
    (**(code **)(plVar1[2] + 0x70))(param_1,uVar7,uVar11,uVar12,uVar9,uVar10,uVar8);
    return 0;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageRefuseToSyncDataClassWithComputer,0);
  if (lVar6 == 0) {
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
      if (uVar4 != 2) {
        uVar8 = __DLGetParameterAtIndex(param_2,2);
        goto LAB_100013400;
      }
    }
    uVar8 = 0;
LAB_100013400:
    (**(code **)(plVar1[2] + 0x78))(param_1,uVar7,uVar8);
    return 0;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageClearAllRecordsOnDevice,0);
  if (lVar6 == 0) {
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
      if (uVar4 != 2) {
        uVar8 = __DLGetParameterAtIndex(param_2,2);
        goto LAB_10001349d;
      }
    }
    uVar8 = 0;
LAB_10001349d:
    (**(code **)(plVar1[1] + 0x70))(param_1,uVar7,uVar8);
    return 0;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageDeviceWillClearAllRecords,0);
  if (lVar6 == 0) {
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
    }
    lVar5 = plVar1[2];
LAB_100013635:
    (**(code **)(lVar5 + 0x80))(param_1,uVar7);
    return 0;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageGetChangesFromDevice,0);
  if (lVar6 == 0) {
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
    }
    (**(code **)(plVar1[1] + 0x78))(param_1,uVar7);
    return 0;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageGetAllRecordsFromDevice,0);
  if (lVar6 == 0) {
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
    }
    lVar5 = plVar1[1];
    goto LAB_100013635;
  }
  lVar6 = _CFStringCompare(lVar5,&cf_SDMessageProcessChanges,0);
  if (lVar6 != 0) {
    lVar6 = _CFStringCompare(lVar5,&cf_SDMessageAcknowledgeChangesFromDevice,0);
    if (lVar6 == 0) {
      if ((long)uVar4 < 2) {
        uVar7 = 0;
      }
      else {
        uVar7 = __DLGetParameterAtIndex(param_2,1);
      }
      lVar5 = plVar1[1];
LAB_1000136f1:
      (**(code **)(lVar5 + 0x88))(param_1,uVar7);
      return 0;
    }
    lVar6 = _CFStringCompare(lVar5,&cf_SDMessageDeviceReadyToReceiveChanges,0);
    if (lVar6 == 0) {
      if ((long)uVar4 < 2) {
        uVar7 = 0;
      }
      else {
        uVar7 = __DLGetParameterAtIndex(param_2,1);
      }
      lVar5 = plVar1[2];
      goto LAB_1000136f1;
    }
    lVar6 = _CFStringCompare(lVar5,&cf_SDMessageRemapRecordIdentifiers,0);
    if (lVar6 != 0) {
      lVar6 = _CFStringCompare(lVar5,&cf_SDMessageFinishSessionOnDevice,0);
      if (lVar6 == 0) {
        if ((long)uVar4 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = __DLGetParameterAtIndex(param_2,1);
        }
        (**(code **)(plVar1[1] + 0x90))(param_1,uVar7);
        return 0;
      }
      lVar6 = _CFStringCompare(lVar5,&cf_SDMessageDeviceFinishedSession,0);
      if (lVar6 == 0) {
        if ((long)uVar4 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = __DLGetParameterAtIndex(param_2,1);
        }
        if ((plVar1[2] != 0) && (pcVar2 = *(code **)(plVar1[2] + 0x98), pcVar2 != (code *)0x0)) {
          (*pcVar2)(param_1,uVar7);
          return 0;
        }
        cVar3 = _DLShouldLog(3);
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
        pcVar13 = &
                  cf__SyncHandleIncomingMessagecalledwithanunexpectedSDMessageDeviceFinishedSessionmessage
        ;
        uVar7 = 3;
        goto LAB_10001327a;
      }
      lVar5 = _CFStringCompare(lVar5,&cf_SDMessageCancelSession,0);
      if (lVar5 != 0) {
        return 0xffffffff;
      }
      if ((long)uVar4 < 2) {
        uVar7 = 0;
      }
      else {
        uVar7 = __DLGetParameterAtIndex(param_2,1);
        if (uVar4 != 2) {
          uVar8 = __DLGetParameterAtIndex(param_2,2);
          goto LAB_1000137bb;
        }
      }
      uVar8 = 0;
LAB_1000137bb:
      (**(code **)(*plVar1 + 8))(param_1,uVar7,uVar8);
      return 0;
    }
    if ((long)uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = __DLGetParameterAtIndex(param_2,1);
      if (uVar4 != 2) {
        uVar8 = __DLGetParameterAtIndex(param_2,2);
        goto LAB_10001371e;
      }
    }
    uVar8 = 0;
LAB_10001371e:
    (**(code **)(plVar1[2] + 0x90))(param_1,uVar7,uVar8);
    return 0;
  }
  uVar7 = *(undefined8 *)PTR__kCFBooleanFalse_1000201f8;
  if ((long)uVar4 < 2) {
    uVar8 = 0;
LAB_100013677:
    uVar11 = 0;
  }
  else {
    uVar8 = __DLGetParameterAtIndex(param_2,1);
    if (uVar4 == 2) goto LAB_100013677;
    uVar11 = __DLGetParameterAtIndex(param_2,2);
    if ((3 < uVar4) &&
       (uVar7 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,uVar7), uVar4 != 4)) {
      uVar12 = __DLGetParameterAtIndex(param_2,4);
      goto LAB_10001367c;
    }
  }
  uVar12 = 0;
LAB_10001367c:
  (**(code **)*plVar1)(param_1,uVar8,uVar11,uVar7,uVar12);
  return 0;
}

