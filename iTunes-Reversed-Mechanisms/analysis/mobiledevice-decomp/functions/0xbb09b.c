// rea decompile_all
// name: _AFCReadData
// address: 0xbb09b
// body: available
// range: 0xbb09b-0xbb3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCReadData(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    return *(int *)(param_1 + 0x40);
  }
  if (param_3 != 0) {
    uVar1 = _AFCConnectionGetIOTimeout(param_1);
    local_58[0] = (ulong)uVar1;
    local_58[1] = 0;
    uVar6 = 0;
    local_38 = 0;
    local_40 = param_3;
    do {
      uVar9 = local_40;
      uVar4 = _AFCConnectionGetSocketBlockSize(param_1);
      uVar7 = uVar9 - uVar6;
      if (uVar4 < uVar9 - uVar6) {
        uVar7 = uVar4;
      }
      puVar8 = (ulong *)0x0;
      if (local_58[0] != 0) {
        puVar8 = local_58;
      }
      local_58[2] = uVar6;
      if (*(long *)(param_1 + 0xd0) == 0) {
        do {
          iVar2 = ___WaitForTimeoutOrEvent(param_1,1,puVar8);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar6 = _recv(*(int *)(param_1 + 0x38),param_2,uVar7,0);
          uVar9 = local_38;
          if (-1 < (long)uVar6) {
            if (uVar6 == 0) {
              iVar2 = ___AFCSetErrorResult(0,0xffffffff,0xe800400b);
            }
            else {
              iVar2 = 0;
              uVar9 = uVar6;
            }
            goto LAB_000bb2a1;
          }
          piVar5 = ___error();
          iVar2 = *piVar5;
        } while ((iVar2 == 0x23) || (iVar2 == 4));
        iVar2 = ___AFCSetErrorResult(1,iVar2,0xe8004004);
        uVar9 = local_38;
      }
      else {
        iVar3 = 0;
        _AFCLog(5,"%s on ctx %p for %u bytes.","__SecureRecvWithTimeout",*(long *)(param_1 + 0xd0),
                uVar7 & 0xffffffff);
        if (uVar7 == 0) {
LAB_000bb281:
          uVar9 = 0;
          iVar2 = iVar3;
        }
        else {
          iVar2 = _SSL_get_rfd(*(undefined8 *)(param_1 + 0xd0));
          if (iVar2 == -1) {
            iVar2 = ___AFCSetErrorResult(1,0xffffffff,0xe8004017);
            uVar9 = local_38;
          }
          else {
            _AFCLog(5,"%s on ctx %p with fd %d.","__SecureRecvWithTimeout",
                    *(undefined8 *)(param_1 + 0xd0),iVar2);
            do {
              iVar2 = ___WaitForTimeoutOrEvent(param_1,1,puVar8);
              uVar9 = local_38;
              if (iVar2 != 0) goto LAB_000bb284;
              uVar1 = _SSL_read(*(undefined8 *)(param_1 + 0xd0),param_2,uVar7 & 0xffffffff);
              if (0 < (int)uVar1) {
                uVar9 = (ulong)uVar1;
                iVar2 = iVar3;
                goto LAB_000bb284;
              }
              uVar1 = _SSL_get_error(*(undefined8 *)(param_1 + 0xd0),uVar1);
            } while ((uVar1 & 0xfffffffe) == 2);
            if (uVar1 != 6) {
              piVar5 = ___error();
              iVar3 = ___AFCSetErrorResult(1,*piVar5,0xe8004004);
              goto LAB_000bb281;
            }
            uVar9 = 0;
            iVar2 = 0;
          }
        }
LAB_000bb284:
        _AFCLog(5,"%s returned %d.","__SecureRecvWithTimeout",iVar2);
      }
LAB_000bb2a1:
      if ((iVar2 != 0) || (uVar9 == 0)) {
        uVar6 = local_58[2];
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      }
      uVar6 = local_58[2] + uVar9;
      param_2 = (void *)((long)param_2 + uVar9);
      local_38 = uVar9;
    } while (uVar6 < local_40);
    if (uVar6 == 0) {
      iVar2 = ___AFCSetErrorResult(0,0xffffffff,0xe800400b,0,0x324,"Read length 0");
      return iVar2;
    }
    if (uVar6 < uVar7) {
      iVar2 = ___AFCSetErrorResult
                        (1,0xffffffff,0xe8004004,uVar6,0x328,"Read underrun (%d < %d)",uVar6,uVar7);
      _AFCConnectionSetFatalError(param_1,iVar2);
      return iVar2;
    }
  }
  return 0;
}

