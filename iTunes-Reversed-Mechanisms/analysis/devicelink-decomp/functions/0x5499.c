// rea decompile_all
// name: __DLReceiveFileForBulkOperation
// address: 0x5499
// body: available
// range: 0x5499-0x56d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLReceiveFileForBulkOperation(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int local_34;
  
  piVar3 = (int *)*param_1;
  lVar6 = __DLHandlerThreadReadMessage(piVar3);
  if (lVar6 == 0) {
    iVar4 = 0;
  }
  else {
    uVar10 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_00015038;
    iVar4 = 0;
    local_34 = param_2;
    do {
      pbVar7 = (byte *)_CFDataGetBytePtr(lVar6);
      lVar8 = _CFDataGetLength(lVar6);
      if (lVar8 < 1) {
        if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) == -0xd)) {
          *(undefined4 *)(param_1 + 9) = 0xffffffff;
          if (param_1[10] != 0) {
            _CFRelease();
          }
          param_1[10] = &cf_Emptyresponse;
        }
LAB_000056a4:
        _CFRelease(lVar6);
        goto LAB_000056b0;
      }
      bVar1 = *pbVar7;
      if (bVar1 != 0xc) {
        if (iVar4 == 0) {
          lVar8 = _CFDataCreate(0,pbVar7 + 1,lVar8 + -1);
          if (param_3 != (undefined8 *)0x0) {
            uVar10 = _DLCreateStringFromData(lVar8);
            *param_3 = uVar10;
          }
          iVar4 = -(uint)bVar1;
          if (lVar8 != 0) {
            _CFRelease(lVar8);
          }
        }
        goto LAB_000056a4;
      }
      if (local_34 == -1) {
        local_34 = -1;
      }
      else if (lVar8 != 1) {
        lVar11 = 1;
        do {
          uVar9 = _write(local_34,pbVar7 + lVar11,lVar8 - lVar11);
          iVar4 = _DLStatusFromOSStatus(uVar9 & 0xffffffff,param_3);
          if (iVar4 != 0) {
            local_34 = -1;
            goto LAB_00005581;
          }
          lVar11 = lVar11 + (int)uVar9;
        } while (lVar11 < lVar8);
        iVar4 = 0;
      }
LAB_00005581:
      __DLOperationProgressContextUpdate(param_1 + 2,lVar8 + -1);
      _CFRunLoopRunInMode(0,uVar10,1);
      if (*piVar3 == 4) {
        *(undefined4 *)(param_1 + 9) = 0xfffffff2;
        param_1[10] = &cf_Disconnected;
        goto LAB_000056a4;
      }
      _CFRelease(lVar6);
      lVar6 = __DLHandlerThreadReadMessage(piVar3);
    } while (lVar6 != 0);
  }
  if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) == -0xd)) {
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    if (param_1[10] != 0) {
      _CFRelease();
    }
    param_1[10] = &cf_Errorreadingresponse;
  }
LAB_000056b0:
  iVar2 = *(int *)(param_1 + 9);
  iVar5 = iVar4;
  if (iVar2 != -0xd) {
    iVar5 = iVar2;
  }
  if (iVar2 == 0) {
    iVar5 = iVar4;
  }
  return iVar5;
}

