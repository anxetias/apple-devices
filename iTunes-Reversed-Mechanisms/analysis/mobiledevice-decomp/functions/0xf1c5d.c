// rea decompile_all
// name: __sendFileToDeviceByPipeWithMaxSize
// address: 0xf1c5d
// body: available
// range: 0xf1c5d-0xf2010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf200c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000f1eb2) */
/* WARNING: Removing unreachable block (ram,0x000f1ebc) */
/* WARNING: Removing unreachable block (ram,0x000f1ec0) */
/* WARNING: Removing unreachable block (ram,0x000f1ef6) */
/* WARNING: Removing unreachable block (ram,0x000f1ed1) */
/* WARNING: Removing unreachable block (ram,0x000f1efe) */
/* WARNING: Removing unreachable block (ram,0x000f1f01) */
/* WARNING: Removing unreachable block (ram,0x000f1eec) */
/* WARNING: Removing unreachable block (ram,0x000f1e61) */
/* WARNING: Removing unreachable block (ram,0x000f1d17) */

int __sendFileToDeviceByPipeWithMaxSize(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  size_t local_450;
  char local_448 [1024];
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_448,0x400);
  _CFStringGetFileSystemRepresentation(param_2,local_448,0x400);
  iVar1 = _open(local_448,0,0);
  if (iVar1 == -1) {
    pcVar6 = &cf_Failedtoopenfile;
  }
  else {
    iVar2 = _fstat_INODE64(iVar1);
    if (iVar2 != -1) {
      if (param_3 == '\0') {
        iVar2 = __AMRUSBDeviceSendDeviceRequest(*(undefined8 *)(param_1 + 0x28),0,0,2,1,0,0,0,0);
        local_450 = 0x8000;
      }
      else {
        local_40 = 0;
        local_48 = 0;
        iVar2 = __sendControlPacket(param_1,5,8);
        if (iVar2 == 0) {
          local_450 = local_48 >> 0x20;
          iVar2 = 0;
        }
        else {
          local_450 = 0;
        }
      }
      if (iVar2 == 0) {
        pvVar4 = _malloc(local_450);
        _close(iVar1);
        _free(pvVar4);
        if (((ulong)*(ushort *)(param_1 + 0x3e) != 0) &&
           (0U % (ulong)*(ushort *)(param_1 + 0x3e) == 0)) {
          _AMRLog(7,&cf_sendingZLPtoterminatetransfer);
          iVar2 = __AMRecoveryModeDeviceWriteBulk(param_1,0,0,0);
          if (iVar2 != 0) goto LAB_000f1d7f;
        }
        iVar2 = 0;
        if (param_3 == '\x01') {
          uVar5 = _CFStringCreateWithFormat
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                             &cf_setenvfilesize_lld,0);
          __loadFirmwareInfo(param_1);
          iVar2 = __sendCommandToDeviceWithTimeout
                            ((int)*(undefined8 *)
                                   (&DAT_0032ca70 +
                                   (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),
                             param_1,uVar5,0);
          _CFRelease(uVar5);
        }
      }
      else {
        _close(iVar1);
      }
      goto LAB_000f1d7f;
    }
    _close(iVar1);
    pcVar6 = &cf_Failedtostatfile;
  }
  _AMRLogWithFilePath(3,param_2,pcVar6);
  piVar3 = ___error();
  iVar2 = __AMRestoreErrorForErrno(*piVar3,0xb);
LAB_000f1d7f:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

