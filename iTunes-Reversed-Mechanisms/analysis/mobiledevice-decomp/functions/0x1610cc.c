// rea decompile_all
// name: _exec_root_util
// address: 0x1610cc
// body: available
// range: 0x1610cc-0x161450 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16144c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _exec_root_util(undefined8 param_1)

{
  int iVar1;
  pid_t pVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  size_t sVar8;
  char **__argv;
  int *piVar9;
  FILE *pFVar10;
  cfstringStruct *pcVar11;
  long lVar12;
  ulong uVar13;
  uint local_45c;
  undefined8 local_458;
  pid_t local_44c;
  posix_spawn_file_actions_t local_448 [129];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_458 = param_1;
  lVar4 = _CFArrayGetCount();
  if (0 < lVar4) {
    uVar5 = _CFStringCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
    lVar12 = 0;
    do {
      pcVar6 = (char *)_CFArrayGetValueAtIndex(local_458,lVar12);
      if (pcVar6 == (char *)0x0) {
        _CFStringAppend(uVar5,&cf___NULL__);
        _AMRSafeLog(7,&cf_root_utilcommandline___,uVar5);
        _CFRelease(uVar5);
        pcVar11 = &cf_Failedtoallocateargumentsforroot_utilcommandline;
        goto LAB_00161252;
      }
      sVar7 = _strcspn(pcVar6,"\"$ \t*?");
      sVar8 = _strlen(pcVar6);
      pcVar11 = &cf___s_;
      if (sVar7 == sVar8) {
        pcVar11 = &cf__s;
      }
      _CFStringAppendFormat(uVar5,0,pcVar11,pcVar6);
      lVar12 = lVar12 + 1;
    } while (lVar4 != lVar12);
    _AMRSafeLog(7,&cf_root_utilcommandline___,uVar5);
    _CFRelease(uVar5);
  }
  lVar12 = _CFArrayGetCount(local_458);
  if ((lVar4 < lVar12) || (__argv = _calloc(lVar4 + 1,8), __argv == (char **)0x0)) {
    pcVar11 = &cf_Failedtoallocateargumentslistforroot_utilcommandline;
LAB_00161252:
    __argv = (char **)0x0;
    _AMRSafeLog(7,pcVar11);
    uVar13 = 0;
    goto LAB_00161261;
  }
  _CFArrayGetValues(local_458,0,lVar4);
  local_44c = 0;
  local_40 = -1;
  iVar1 = _pipe((int)&local_40);
  if (iVar1 == 0) {
    _posix_spawn_file_actions_init(local_448);
    _posix_spawn_file_actions_adddup2(local_448,local_40._4_4_,1);
    _posix_spawn_file_actions_adddup2(local_448,local_40._4_4_,2);
    _posix_spawn_file_actions_addclose(local_448,(int)local_40);
    _posix_spawn_file_actions_addopen(local_448,0,"/dev/null",0,0x1a4);
    iVar1 = _posix_spawn(&local_44c,*__argv,local_448,(posix_spawnattr_t *)0x0,__argv,(char **)0x0);
    _posix_spawn_file_actions_destroy(local_448);
    _close(local_40._4_4_);
    local_40 = CONCAT44(0xffffffff,(int)local_40);
    if (iVar1 != 0) {
      piVar9 = ___error();
      pcVar6 = _strerror(*piVar9);
      pcVar11 = &cf_Failedtospawnroot_util__s;
      goto LAB_001613de;
    }
    pFVar10 = _fdopen((int)local_40,"r");
    local_40 = CONCAT44(local_40._4_4_,0xffffffff);
    while (pcVar6 = _fgets((char *)local_448,0x400,pFVar10), pcVar6 != (char *)0x0) {
      _AMRSafeLog(7,&cf__s,pcVar6);
    }
    _fclose(pFVar10);
    local_45c = 0;
    pVar2 = _waitpid(local_44c,(int *)&local_45c,0);
    if (pVar2 != local_44c) {
      piVar9 = ___error();
      pcVar6 = _strerror(*piVar9);
      pcVar11 = &cf_Failedtowaitforroot_util__s;
      goto LAB_001613de;
    }
    uVar3 = local_45c & 0x7f;
    if (uVar3 == 0) {
      uVar3 = local_45c >> 8 & 0xff;
      if (uVar3 != 0) {
        pcVar11 = &cf_root_utilfailedwithcode_d;
        goto LAB_0016143e;
      }
      uVar13 = CONCAT71((int7)((ulong)pFVar10 >> 8),1);
    }
    else {
      if (uVar3 == 0x7f) {
        pcVar11 = &cf_Unabletodeterminefateofroot_util__d_;
        uVar3 = local_45c;
      }
      else {
        pcVar11 = &cf_root_utilterminatedwithsignal_d;
      }
LAB_0016143e:
      uVar13 = 0;
      _AMRSafeLog(7,pcVar11,uVar3);
    }
  }
  else {
    piVar9 = ___error();
    pcVar6 = _strerror(*piVar9);
    pcVar11 = &cf_Failedtocreatepipeforroot_util__s;
LAB_001613de:
    uVar13 = 0;
    _AMRSafeLog(7,pcVar11,pcVar6);
  }
  if (-1 < (int)local_40) {
    _close((int)local_40);
  }
  if (-1 < local_40) {
    _close(local_40._4_4_);
  }
LAB_00161261:
  _free(__argv);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13 & 0xffffffff;
}

