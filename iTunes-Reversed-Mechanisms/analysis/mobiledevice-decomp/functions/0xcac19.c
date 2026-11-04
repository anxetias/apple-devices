// rea decompile_all
// name: _handleStreamedImageFileRequest_Impl
// address: 0xcac19
// body: available
// range: 0xcac19-0xcb048 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcb044 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleStreamedImageFileRequest_Impl(__AMRestoreModeDevice*, int, __CFString const*,
   AMRestoreOperation, __CFDictionary const*, bool) */

int _handleStreamedImageFileRequest_Impl
              (__AMRestoreModeDevice *param_1,int param_2,long param_3,int param_4,
              undefined4 param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  ulong uVar9;
  ssize_t sVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  ulong local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  long local_480;
  ulong local_478;
  __AMRestoreModeDevice *local_470;
  undefined4 local_464;
  long local_460;
  void *local_458;
  int local_450;
  int local_44c;
  ulong local_448;
  int local_43c;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_450 = param_2;
  ___bzero(local_438,0x400);
  local_498 = 0;
  uStack_490 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  if ((param_3 == 0) ||
     (cVar4 = _CFStringGetFileSystemRepresentation(param_3,local_438,0x400), cVar4 == '\0')) {
    pvVar7 = (void *)0x0;
    _AMRLog(3,&cf_streamedimagerequestpathinvalid___,param_3);
    local_43c = -1;
    iVar6 = 1;
    lVar12 = param_3;
  }
  else {
    pvVar7 = _malloc(0x100000);
    if (pvVar7 == (void *)0x0) {
      local_43c = -1;
      iVar6 = 0x12;
      pvVar7 = (void *)0x0;
      lVar12 = param_3;
    }
    else {
      uVar15 = 5;
      local_470 = param_1;
      local_460 = param_3;
      local_44c = param_4;
      while (iVar5 = _open(local_438,0,0x1a4), local_43c = iVar5, iVar5 == -1) {
        piVar8 = ___error();
        if ((*piVar8 != 4) || (bVar1 = uVar15 < 2, uVar15 = uVar15 - 1, bVar1)) goto LAB_000caf6e;
      }
      if (-1 < iVar5) {
        iVar6 = _fstat_INODE64(iVar5,&local_518);
        local_464 = param_5;
        if (iVar6 == 0) {
          local_478 = local_4b8;
          if ((char)param_5 == '\0') {
            local_448 = 0;
            _AMRestoreModeDeviceProgressAsync(local_470,local_44c,0,(__CFString *)0x0);
          }
          else {
            local_448 = 0;
          }
        }
        else {
          piVar8 = ___error();
          _strerror(*piVar8);
          local_478 = 0;
          _AMRLog(3,&cf_failedtofetchfilesizeforstreamedimagefile_s__s_disablingprogress,local_438);
          local_448 = 0xffffffff;
        }
        local_480 = 0;
        local_458 = pvVar7;
        goto LAB_000cae1b;
      }
LAB_000caf6e:
      _handleStreamedImageFileRequest_Impl(local_438);
      iVar6 = 0xc;
      lVar12 = local_460;
    }
  }
LAB_000caf9a:
  uVar11 = _AMRestoreErrorTranslation(iVar6);
  _AMRLog(3,&cf_streamedtransferofimage__failed_____d_,lVar12,uVar11,iVar6);
  _AMSupportSafeRelease(uVar11);
  iVar5 = local_43c;
  goto LAB_000cafcf;
LAB_000cae1b:
  do {
    uVar15 = 5;
    while (uVar9 = _read(iVar5,pvVar7,0x100000), uVar9 == 0xffffffffffffffff) {
      piVar8 = ___error();
      if ((*piVar8 != 4) || (bVar1 = uVar15 < 2, uVar15 = uVar15 - 1, bVar1)) goto LAB_000caf88;
    }
    if ((long)uVar9 < 0) {
LAB_000caf88:
      _handleStreamedImageFileRequest_Impl();
      iVar6 = 0xb;
      lVar12 = local_460;
      goto LAB_000caf9a;
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        pvVar7 = (void *)((long)local_458 + uVar13);
        uVar15 = 5;
        while (sVar10 = _send(local_450,pvVar7,uVar9 - uVar13,0), sVar10 == -1) {
          piVar8 = ___error();
          if ((*piVar8 != 4) || (bVar1 = uVar15 < 2, uVar15 = uVar15 - 1, bVar1)) goto LAB_000caf53;
        }
        if (sVar10 < 0) {
LAB_000caf53:
          _handleStreamedImageFileRequest_Impl();
          iVar6 = 0x2b;
          lVar12 = local_460;
          pvVar7 = local_458;
          goto LAB_000caf9a;
        }
        uVar13 = uVar13 + sVar10;
        local_480 = local_480 + sVar10;
      } while (uVar13 < uVar9);
    }
    iVar5 = local_43c;
    pvVar7 = local_458;
    if (0x3200000 < local_478) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_478;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_480 * 100;
      uVar13 = SUB168(auVar3 / auVar2,0);
      iVar6 = (int)local_448;
      iVar14 = SUB164(auVar3 / auVar2,0);
      if (iVar6 <= iVar14) {
        local_448 = uVar13;
      }
      local_448 = local_448 & 0xffffffff;
      if (iVar6 < iVar14 && (char)local_464 == '\0') {
        _AMRestoreModeDeviceProgressAsync(local_470,local_44c,iVar14,(__CFString *)0x0);
        local_448 = uVar13;
      }
    }
    iVar6 = 0;
  } while (uVar9 != 0);
LAB_000cafcf:
  _free(pvVar7);
  if (-1 < iVar5) {
    _close(iVar5);
  }
  iVar5 = _AMRestoreCloseTransferSocket(local_450,iVar6);
  if (iVar5 != 0) {
    _AMRLog(3,&cf_failedtoclosestreamingtransfersocket_fdmanagementbug_);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

