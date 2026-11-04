// rea decompile_all
// name: _MDMCompareBundlesInternal
// address: 0xaf085
// body: available
// range: 0xaf085-0xaf2d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xaf2d0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MDMCompareBundlesInternal(char *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 local_4e8 [144];
  size_t local_458;
  undefined4 local_44c;
  char local_448 [1024];
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_44c = param_3;
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    _dmlog("MDMCompareBundlesInternal",0x62a,&cf_invalidparameter_bundle_one__p_bundle_two__p,
           param_1,param_2);
  }
  else {
    local_40 = 0;
    local_48 = param_1;
    local_458 = _strlen(param_1);
    uVar7 = 0;
    lVar4 = _fts_open_INODE64(&local_48,0x55,0);
    if (lVar4 != 0) {
      lVar5 = _fts_read_INODE64(lVar4);
      if (lVar5 != 0) {
        do {
          pcVar8 = (char *)(*(long *)(lVar5 + 0x30) + local_458);
          uVar2 = _snprintf(local_448,0x400,"%s/%s",param_2,pcVar8);
          if (0x3ff < uVar2) {
            pcVar6 = &cf_pathtoolong__s__s;
            uVar7 = 0x639;
            goto LAB_000af1e0;
          }
          iVar3 = _lstat_INODE64(local_448,local_4e8);
          if (iVar3 != 0) {
            pcVar6 = &cf__sdoesnotexist;
            pcVar8 = local_448;
            uVar7 = 0x63f;
LAB_000af200:
            _dmlog("MDMCompareBundlesInternal",uVar7,pcVar6,pcVar8);
LAB_000af207:
            uVar7 = 0xffffffff;
            goto LAB_000af20c;
          }
          if ((char)local_44c != '\0') {
            switch(*(undefined2 *)(lVar5 + 0x58)) {
            case 4:
            case 7:
            case 10:
              pcVar8 = *(char **)(lVar5 + 0x30);
              pcVar6 = &cf_ftserrorfor__s;
              uVar7 = 0x656;
              goto LAB_000af200;
            case 8:
              cVar1 = _filecmp(*(undefined8 *)(lVar5 + 0x30),local_448);
              if (cVar1 == '\0') {
                param_2 = *(long *)(lVar5 + 0x30);
                pcVar6 = &cf__s__and___sarenotthesame;
                pcVar8 = local_448;
                uVar7 = 0x648;
LAB_000af1e0:
                _dmlog("MDMCompareBundlesInternal",uVar7,pcVar6,param_2,pcVar8);
                goto LAB_000af207;
              }
              break;
            case 0xc:
              cVar1 = _compare_symlinks(*(undefined8 *)(lVar5 + 0x30),local_448);
              if (cVar1 == '\0') {
                param_2 = *(long *)(lVar5 + 0x30);
                pcVar6 = &cf_symlinks__s__and___sdiffer;
                pcVar8 = local_448;
                uVar7 = 0x64e;
                goto LAB_000af1e0;
              }
            }
          }
          lVar5 = _fts_read_INODE64(lVar4);
        } while (lVar5 != 0);
        uVar7 = 0;
      }
LAB_000af20c:
      _fts_close_INODE64(lVar4);
      goto LAB_000af214;
    }
    _MDMCompareBundlesInternal_cold_1(&local_40);
  }
  uVar7 = 0xffffffff;
LAB_000af214:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

