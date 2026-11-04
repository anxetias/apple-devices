// rea decompile_all
// name: __AMRestoreExecuteCmd
// address: 0xe6a1c
// body: available
// range: 0xe6a1c-0xe6cae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe6caa to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRestoreExecuteCmd(char **param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  pid_t pVar4;
  int *piVar5;
  ssize_t sVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int local_205c;
  posix_spawn_file_actions_t local_2058;
  char *local_2050;
  uint local_2048;
  pid_t local_2044;
  undefined8 local_2040;
  char local_2038 [8192];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_2038,0x2000);
  local_2040 = 0xffffffffffffffff;
  local_2044 = 0;
  local_2058 = (posix_spawn_file_actions_t)0x0;
  pcVar1 = *param_1;
  iVar2 = _pipe((int)&local_2040);
  if (iVar2 == 0) {
    iVar2 = (int)local_2040;
    local_2050 = param_2;
    local_2048 = param_3;
    _posix_spawn_file_actions_init(&local_2058);
    _posix_spawn_file_actions_adddup2(&local_2058,local_2040._4_4_,1);
    _posix_spawn_file_actions_addclose(&local_2058,(int)local_2040);
    uVar9 = 0;
    iVar3 = _posix_spawn(&local_2044,*param_1,&local_2058,(posix_spawnattr_t *)0x0,param_1,
                         (char **)0x0);
    _close(local_2040._4_4_);
    if (iVar3 == 0) {
      lVar7 = 0;
      do {
        sVar6 = _read(iVar2,local_2038 + lVar7,0x1fff - lVar7);
        if (sVar6 < 1) break;
        uVar9 = uVar9 + (int)sVar6;
        lVar7 = (long)(int)uVar9;
      } while (uVar9 < 0x1fff);
      local_2038[lVar7] = '\0';
      local_205c = 0;
      pVar4 = _waitpid(local_2044,&local_205c,0);
      if (pVar4 == local_2044) {
        local_2044 = 0;
        if (uVar9 != 0) {
          uVar8 = 0;
          _AMRLog(4,&cf__soutput__s,pcVar1,local_2038);
          if (local_2050 != (char *)0x0) {
            _strncpy(local_2050,local_2038,(ulong)local_2048);
          }
          goto LAB_000e6c2c;
        }
        if (local_2050 == (char *)0x0) {
          uVar8 = 0;
          goto LAB_000e6c2c;
        }
        _AMRLog(4,&cf_OutputSizewas0fromcommand_s,pcVar1);
      }
      else {
        piVar5 = ___error();
        _AMRLog(3,&cf_Error_dwaitingfor_s,*piVar5,pcVar1);
      }
      uVar8 = 0xffffffff;
    }
    else {
      piVar5 = ___error();
      _AMRLog(3,&cf_Failedtouse_switherrno_d,pcVar1,*piVar5);
      local_2044 = 0;
      uVar8 = 0xc;
    }
  }
  else {
    uVar8 = 0xd;
    _AMRLog(3,&cf_Failedcreateapipe_result_d_forcmd_s,0xd,pcVar1);
    iVar2 = -2;
  }
LAB_000e6c2c:
  if (iVar2 == (int)local_2040) {
    _posix_spawn_file_actions_destroy(&local_2058);
  }
  if (-1 < iVar2) {
    _close(iVar2);
  }
  if (local_2044 != 0) {
    _waitpid(local_2044,(int *)0x0,0);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

