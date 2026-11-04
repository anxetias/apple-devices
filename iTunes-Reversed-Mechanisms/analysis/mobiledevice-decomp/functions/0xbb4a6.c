// rea decompile_all
// name: _AFCSendData
// address: 0xbb4a6
// body: available
// range: 0xbb4a6-0xbb80c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCSendData(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  else if (param_3 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == (void *)0x0) {
    iVar3 = -0x17ffbff9;
  }
  else {
    uVar2 = _AFCConnectionGetIOTimeout(param_1);
    local_60 = (ulong)uVar2;
    local_58 = 0;
    uVar8 = 0;
    local_48 = param_1;
    local_38 = param_3;
    do {
      lVar1 = local_48;
      uVar4 = _AFCConnectionGetSocketBlockSize(local_48);
      uVar9 = param_3 - uVar8;
      if (uVar4 < param_3 - uVar8) {
        uVar9 = uVar4;
      }
      puVar7 = (ulong *)0x0;
      if (local_60 != 0) {
        puVar7 = &local_60;
      }
      local_50 = param_2;
      local_40 = uVar8;
      if (*(long *)(lVar1 + 0xd0) == 0) {
        iVar3 = ___WaitForTimeoutOrEvent(lVar1,2,puVar7);
        while( true ) {
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = 0;
          uVar4 = _send(*(int *)(lVar1 + 0x38),param_2,uVar9,0);
          uVar8 = local_40;
          param_3 = local_38;
          if (-1 < (long)uVar4) break;
          piVar5 = ___error();
          lVar1 = local_48;
          iVar3 = *piVar5;
          if ((iVar3 != 0x23) && (iVar3 != 4)) {
            iVar3 = ___AFCSetErrorResult(1,iVar3,0xe8004005);
            uVar8 = local_40;
            goto LAB_000bb78b;
          }
          iVar3 = ___WaitForTimeoutOrEvent(local_48,2,puVar7);
          param_2 = local_50;
        }
      }
      else {
        _AFCLog(5,"%s on ctx %p for %u bytes.","__SecureSendWithTimeout",*(long *)(lVar1 + 0xd0),
                uVar9 & 0xffffffff);
        if (uVar9 == 0) {
          iVar3 = -0x17ffbff9;
LAB_000bb747:
          uVar4 = 0;
          uVar8 = local_40;
          param_3 = local_38;
        }
        else {
          iVar3 = _SSL_get_wfd(*(undefined8 *)(lVar1 + 0xd0));
          if (iVar3 == -1) {
            iVar3 = ___AFCSetErrorResult(1,0xffffffff,0xe8004017);
            goto LAB_000bb747;
          }
          _AFCLog(5,"%s on ctx %p with fd %d.","__SecureSendWithTimeout",
                  *(undefined8 *)(lVar1 + 0xd0),iVar3);
          do {
            iVar3 = ___WaitForTimeoutOrEvent(lVar1,2,puVar7);
            if (iVar3 != 0) goto LAB_000bb747;
            uVar2 = _SSL_write(*(undefined8 *)(lVar1 + 0xd0),param_2,uVar9 & 0xffffffff);
            if (0 < (int)uVar2) {
              uVar4 = (ulong)uVar2;
              iVar3 = 0;
              uVar8 = local_40;
              param_3 = local_38;
              goto LAB_000bb6bb;
            }
            uVar2 = _SSL_get_error(*(undefined8 *)(lVar1 + 0xd0),uVar2);
            param_3 = local_38;
            uVar8 = local_40;
          } while ((uVar2 & 0xfffffffe) == 2);
          if (uVar2 != 6) {
            piVar5 = ___error();
            iVar3 = *piVar5;
            uVar6 = 0xe8004004;
          }
          else {
            iVar3 = -1;
            uVar6 = 0xe800400b;
          }
          iVar3 = ___AFCSetErrorResult(uVar2 != 6,iVar3,uVar6);
          uVar4 = 0;
        }
LAB_000bb6bb:
        _AFCLog(5,"%s returned %d.","__SecureSendWithTimeout",iVar3);
      }
      if ((uVar4 == 0) || (iVar3 != 0)) {
LAB_000bb78b:
        lVar1 = local_48;
        if (iVar3 != 0) {
          return iVar3;
        }
        if (uVar8 != 0) {
          piVar5 = ___error();
          iVar3 = ___AFCSetErrorResult(1,*piVar5,0xe8004005);
          _AFCConnectionSetFatalError(lVar1,iVar3);
          return iVar3;
        }
        iVar3 = ___AFCSetErrorResult(1,0xffffffff,0xe800400b);
        return iVar3;
      }
      uVar8 = uVar8 + uVar4;
      param_2 = (void *)((long)local_50 + uVar4);
      iVar3 = 0;
    } while (uVar8 < param_3);
  }
  return iVar3;
}

