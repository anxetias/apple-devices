// rea decompile_all
// name: __AMRestoreGetDiskImageFileSizeUsingDiskutil
// address: 0xe5ea8
// body: available
// range: 0xe5ea8-0xe6337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe6333 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRestoreGetDiskImageFileSizeUsingDiskutil
              (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_2938;
  undefined8 uStack_2930;
  undefined8 local_2928;
  undefined8 uStack_2920;
  undefined8 local_2910;
  undefined8 local_2908;
  undefined8 uStack_2900;
  undefined8 local_28f8;
  undefined8 uStack_28f0;
  undefined8 local_28e8;
  undefined8 uStack_28e0;
  undefined8 local_28d8;
  undefined8 uStack_28d0;
  undefined8 local_28c8;
  undefined8 uStack_28c0;
  undefined8 local_28b8;
  undefined8 uStack_28b0;
  undefined8 local_28a8;
  undefined8 uStack_28a0;
  undefined8 local_2898;
  undefined8 uStack_2890;
  undefined8 local_2888;
  undefined8 uStack_2880;
  undefined8 local_2878;
  undefined8 uStack_2870;
  undefined1 local_2868 [1024];
  char *local_2468;
  char *local_2460;
  char *local_2458;
  undefined1 *local_2450;
  undefined8 local_2448;
  undefined1 local_2438 [8192];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_2438,0x2000);
  lVar2 = _CFStringGetLength(param_1);
  if (lVar2 < 0x400) {
    ___bzero(local_438,0x400);
    _CFStringGetCString(param_1,local_438,0x400,0x8000100);
    local_2468 = "/usr/sbin/diskutil";
    local_2460 = "image";
    local_2458 = "info";
    local_2448 = 0;
    local_2450 = local_438;
    iVar1 = __AMRestoreExecuteCmd(&local_2468,local_2438,0x2000);
    if (iVar1 == 0) {
      _AMRLog(4,&cf__soutput__s,"/usr/sbin/diskutil",local_2438);
      local_2928 = 0;
      uStack_2920 = 0;
      local_2938 = 0;
      uStack_2930 = 0;
      iVar1 = _regcomp(&local_2938,"Total Bytes: [0-9]+",1);
      ___bzero(local_2868,0x400);
      if (iVar1 == 0) {
        local_2878 = 0;
        uStack_2870 = 0;
        local_2888 = 0;
        uStack_2880 = 0;
        local_2898 = 0;
        uStack_2890 = 0;
        local_28a8 = 0;
        uStack_28a0 = 0;
        local_28b8 = 0;
        uStack_28b0 = 0;
        local_28c8 = 0;
        uStack_28c0 = 0;
        local_28d8 = 0;
        uStack_28d0 = 0;
        local_28e8 = 0;
        uStack_28e0 = 0;
        local_28f8 = 0;
        uStack_28f0 = 0;
        local_2908 = 0;
        uStack_2900 = 0;
        iVar1 = _regexec(&local_2938,local_2438,10,&local_2908,0);
        if (iVar1 == 0) {
          ___strncpy_chk(local_2868,local_2438 + ((int)local_2908 + 0xd),
                         (long)(((int)uStack_2900 - (int)local_2908) + -0xd),0x400);
          uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
          lVar2 = _CFStringCreateWithCString(uVar3,local_2868,0x8000100);
          if (lVar2 != 0) {
            local_2910 = uVar3;
            uVar3 = __convertCFStringToUInt64(lVar2);
            *param_2 = uVar3;
            iVar1 = 0;
            _AMRLog(4,&cf_Totalunpackedfilesize_llu_,uVar3);
            _CFRelease(lVar2);
            _regfree(&local_2938);
            if (param_3 != (undefined8 *)0x0) {
              iVar1 = _regcomp(&local_2938,"Compressed Bytes: [0-9]+",1);
              ___bzero(local_2868,0x400);
              if (iVar1 == 0) {
                local_2878 = 0;
                uStack_2870 = 0;
                local_2888 = 0;
                uStack_2880 = 0;
                local_2898 = 0;
                uStack_2890 = 0;
                local_28a8 = 0;
                uStack_28a0 = 0;
                local_28b8 = 0;
                uStack_28b0 = 0;
                local_28c8 = 0;
                uStack_28c0 = 0;
                local_28d8 = 0;
                uStack_28d0 = 0;
                local_28e8 = 0;
                uStack_28e0 = 0;
                local_28f8 = 0;
                uStack_28f0 = 0;
                local_2908 = 0;
                uStack_2900 = 0;
                iVar1 = _regexec(&local_2938,local_2438,10,&local_2908,0);
                if (iVar1 == 0) {
                  ___strncpy_chk(local_2868,local_2438 + ((int)local_2908 + 0x12),
                                 (long)(((int)uStack_2900 - (int)local_2908) + -0x12),0x400);
                  lVar2 = _CFStringCreateWithCString(local_2910,local_2868,0x8000100);
                  if (lVar2 == 0) {
                    _AMRLog(4,&cf_Failedcreatingoutputstring);
                    iVar1 = 0x12;
                  }
                  else {
                    uVar3 = __convertCFStringToUInt64(lVar2);
                    *param_3 = uVar3;
                    iVar1 = 0;
                    _AMRLog(4,&cf_Totalcompressedfilesize_llu_,uVar3);
                    _CFRelease(lVar2);
                  }
                }
                else {
                  iVar1 = 0;
                  _AMRLog(4,&cf_regexecwith_sfailedtomatch_donotsetcompressedfilesize_,
                          "Compressed Bytes: [0-9]+");
                }
              }
              else {
                _AMRLog(4,&cf_regcompcreation_sfailed_,"Compressed Bytes: [0-9]+");
                iVar1 = -1;
              }
              _regfree(&local_2938);
            }
            if (iVar1 == 0 && param_4 != (undefined8 *)0x0) {
              *param_4 = *param_2;
              iVar1 = 0;
            }
            goto LAB_000e6028;
          }
          _AMRLog(4,&cf_Failedcreatingoutputstring);
          iVar1 = 0x12;
        }
        else {
          _AMRLog(4,&cf_regexecwith_sfailed_,"Total Bytes: [0-9]+");
          iVar1 = -1;
        }
        _regfree(&local_2938);
        goto LAB_000e6028;
      }
      _AMRLog(4,&cf_regcompcreation_sfailed_,"Total Bytes: [0-9]+");
    }
    else {
      _AMRLog(4,&cf_Failedtoexecutecmd_s_result__d_,"/usr/sbin/diskutil",iVar1);
    }
    iVar1 = -1;
  }
  else {
    _AMRLog(3,&cf_Filepath__istoolong_maxlengthallowedis_d_,param_1,0x3ff);
    iVar1 = 1;
  }
LAB_000e6028:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

