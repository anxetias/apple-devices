// rea decompile_all
// name: ___WaitForTimeoutOrEvent
// address: 0xbc0e7
// body: available
// range: 0xbc0e7-0xbc449 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbc186 to 0xbb3b0 ___AFCSetErrorResult (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xbc445 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong ___WaitForTimeoutOrEvent(long param_1,int param_2,timespec *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  kevent local_f8 [3];
  kevent local_98;
  long local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar10 = *(long *)(param_1 + 0xd0);
  if (lVar10 == 0) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 != -1) goto LAB_000bc199;
LAB_000bc364:
    uVar5 = 0;
  }
  else {
    if (param_2 == 1) {
      iVar3 = _SSL_pending();
      if (0 < iVar3) goto LAB_000bc364;
      lVar10 = *(long *)(param_1 + 0xd0);
    }
    iVar3 = _SSL_get_rfd(lVar10);
    if (iVar3 == -1) {
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
        uVar5 = ___AFCSetErrorResult(1,0xffffffff,0xe8004017);
        return uVar5;
      }
      goto LAB_000bc445;
    }
LAB_000bc199:
    if (*(int *)(param_1 + 0x4e8) == -1) {
      piVar6 = ___error();
      iVar3 = *piVar6;
      uVar9 = 1;
      uVar8 = 0xe8004017;
LAB_000bc26e:
      uVar4 = ___AFCSetErrorResult(uVar9,iVar3,uVar8);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x4ec);
      local_98.filter = param_2 == 1 | 0xfffe;
      local_98.ident = (uintptr_t)iVar3;
      local_98.flags = 0x25;
      local_98._12_8_ = 0;
      local_98._20_8_ = 0;
      local_98.udata._4_4_ = 0;
      if (iVar2 == -1) {
        iVar7 = 1;
      }
      else {
        local_70 = 0x5ffff;
        local_6c = 0;
        uStack_64 = 0;
        local_5c = 0;
        iVar7 = 2;
        local_78 = (long)iVar2;
      }
      uVar4 = _kevent(*(int *)(param_1 + 0x4e8),&local_98,iVar7,local_f8,iVar7,param_3);
      if (uVar4 != 0xffffffff) {
        if (uVar4 != 0) {
          if (0 < (int)uVar4) {
            lVar10 = 0;
            do {
              iVar7 = *(int *)((long)&local_f8[0].ident + lVar10);
              if (iVar2 == iVar7) {
                _AFCLog(4,"Woke up due to write to signal FD");
                uVar9 = 0;
                iVar3 = -1;
                uVar8 = 0xe800400b;
                goto LAB_000bc26e;
              }
              if (iVar3 == iVar7) {
                uVar1 = *(ushort *)((long)&local_f8[0].flags + lVar10);
                if ((uVar1 >> 0xe & 1) != 0) {
                  iVar3 = *(int *)((long)&local_f8[0].data + lVar10);
                  uVar9 = 0;
                  uVar8 = 0xe800400b;
                  goto LAB_000bc26e;
                }
                if (((param_2 == 1) && (*(short *)((long)&local_f8[0].filter + lVar10) == -1)) &&
                   (*(long *)((long)&local_f8[0].data + lVar10) != 0)) {
                  if ((short)uVar1 < 0) {
                    uVar5 = 0;
                    _AFCLog(4,"EV_EOF but %ld bytes available anyway");
                    goto LAB_000bc366;
                  }
                  break;
                }
                if ((short)uVar1 < 0) {
                  _AFCLog(4,"Woke up due to EOF");
                  iVar3 = *(int *)((long)&local_f8[0].fflags + lVar10);
                  if (iVar3 != 0) {
                    uVar9 = 0;
                    uVar8 = 0xe800400b;
                    goto LAB_000bc26e;
                  }
                  uVar5 = 0xe800400b;
                  goto LAB_000bc366;
                }
                if (param_2 == 2) {
                  _AFCLog(5,"kevent says ready to write %d bytes on conn %p.",
                          *(undefined4 *)((long)&local_f8[0].data + lVar10),param_1);
                }
              }
              else {
                _AFCLog(1,"Unknown kevent ident %d");
              }
              lVar10 = lVar10 + 0x20;
            } while ((ulong)uVar4 << 5 != lVar10);
          }
          goto LAB_000bc364;
        }
        uVar9 = 1;
        iVar3 = 0x3c;
        uVar8 = 0xe800400c;
        goto LAB_000bc26e;
      }
      piVar6 = ___error();
      uVar4 = ___AFCSetErrorResult(1,*piVar6,0xe8004017);
    }
    uVar5 = (ulong)uVar4;
  }
LAB_000bc366:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar5;
  }
LAB_000bc445:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

