// rea decompile_all
// name: _AMRecoveryModeDeviceSetAutoBoot
// address: 0xee597
// body: available
// range: 0xee597-0xee730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xee72c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRecoveryModeDeviceSetAutoBoot(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  long local_b0;
  char local_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  __loadFirmwareInfo();
  pcVar4 = &cf_setenvauto_bootfalse;
  if (param_2 == 1) {
    pcVar4 = &cf_setenvauto_boottrue;
  }
  iVar2 = __sendCommandToDeviceWithTimeout
                    ((int)*(undefined8 *)
                           (&DAT_0032ca70 +
                           (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,
                     pcVar4,0);
  if (iVar2 != 0) goto LAB_000ee6e0;
  __loadFirmwareInfo(param_1);
  iVar2 = __sendCommandToDeviceWithTimeout
                    ((int)*(undefined8 *)
                           (&DAT_0032ca70 +
                           (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,
                     &cf_saveenv,0);
  if (iVar2 != 0x15) goto LAB_000ee6e0;
  local_b0 = 0;
  __copyEnvironmentVariable(param_1,&cf__,&local_b0);
  lVar1 = local_b0;
  if (local_b0 == 0) {
    iVar2 = 0x15;
    goto LAB_000ee6e0;
  }
  local_a8[0x70] = '\0';
  local_a8[0x71] = '\0';
  local_a8[0x72] = '\0';
  local_a8[0x73] = '\0';
  local_a8[0x74] = '\0';
  local_a8[0x75] = '\0';
  local_a8[0x76] = '\0';
  local_a8[0x77] = '\0';
  local_a8[0x78] = '\0';
  local_a8[0x79] = '\0';
  local_a8[0x7a] = '\0';
  local_a8[0x7b] = '\0';
  local_a8[0x7c] = '\0';
  local_a8[0x7d] = '\0';
  local_a8[0x7e] = '\0';
  local_a8[0x7f] = '\0';
  local_a8[0x60] = '\0';
  local_a8[0x61] = '\0';
  local_a8[0x62] = '\0';
  local_a8[99] = '\0';
  local_a8[100] = '\0';
  local_a8[0x65] = '\0';
  local_a8[0x66] = '\0';
  local_a8[0x67] = '\0';
  local_a8[0x68] = '\0';
  local_a8[0x69] = '\0';
  local_a8[0x6a] = '\0';
  local_a8[0x6b] = '\0';
  local_a8[0x6c] = '\0';
  local_a8[0x6d] = '\0';
  local_a8[0x6e] = '\0';
  local_a8[0x6f] = '\0';
  local_a8[0x50] = '\0';
  local_a8[0x51] = '\0';
  local_a8[0x52] = '\0';
  local_a8[0x53] = '\0';
  local_a8[0x54] = '\0';
  local_a8[0x55] = '\0';
  local_a8[0x56] = '\0';
  local_a8[0x57] = '\0';
  local_a8[0x58] = '\0';
  local_a8[0x59] = '\0';
  local_a8[0x5a] = '\0';
  local_a8[0x5b] = '\0';
  local_a8[0x5c] = '\0';
  local_a8[0x5d] = '\0';
  local_a8[0x5e] = '\0';
  local_a8[0x5f] = '\0';
  local_a8[0x40] = '\0';
  local_a8[0x41] = '\0';
  local_a8[0x42] = '\0';
  local_a8[0x43] = '\0';
  local_a8[0x44] = '\0';
  local_a8[0x45] = '\0';
  local_a8[0x46] = '\0';
  local_a8[0x47] = '\0';
  local_a8[0x48] = '\0';
  local_a8[0x49] = '\0';
  local_a8[0x4a] = '\0';
  local_a8[0x4b] = '\0';
  local_a8[0x4c] = '\0';
  local_a8[0x4d] = '\0';
  local_a8[0x4e] = '\0';
  local_a8[0x4f] = '\0';
  local_a8[0x30] = '\0';
  local_a8[0x31] = '\0';
  local_a8[0x32] = '\0';
  local_a8[0x33] = '\0';
  local_a8[0x34] = '\0';
  local_a8[0x35] = '\0';
  local_a8[0x36] = '\0';
  local_a8[0x37] = '\0';
  local_a8[0x38] = '\0';
  local_a8[0x39] = '\0';
  local_a8[0x3a] = '\0';
  local_a8[0x3b] = '\0';
  local_a8[0x3c] = '\0';
  local_a8[0x3d] = '\0';
  local_a8[0x3e] = '\0';
  local_a8[0x3f] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  _CFStringGetCString(local_b0,local_a8,0x80,0x8000100);
  lVar3 = _strtol(local_a8,(char **)0x0,0x10);
  if ((int)lVar3 == -1) {
    iVar2 = 0x66;
    pcVar4 = &cf_NVRAMisfullandcouldnotperformsave;
LAB_000ee716:
    _AMRLog(3,pcVar4);
  }
  else {
    iVar2 = 0x15;
    if ((int)lVar3 == -2) {
      iVar2 = 0x67;
      pcVar4 = &cf_ErrorwritingtoNVRAM;
      goto LAB_000ee716;
    }
  }
  _CFRelease(lVar1);
LAB_000ee6e0:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

