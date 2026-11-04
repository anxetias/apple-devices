// rea decompile_all
// name: _rm_dir
// address: 0xb16ad
// body: available
// range: 0xb16ad-0xb1947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb1943 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _rm_dir(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 local_e0 [144];
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR__kCFTypeArrayCallBacks_004411a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar4 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
  lVar5 = _CFArrayCreateMutable(0,0,puVar2);
  iVar3 = _lstat_INODE64(param_1,local_e0);
  if (iVar3 == -1) {
    if (_verbose_onceToken != -1) {
      _bundleInfoIntoDict_cold_1();
    }
    uVar10 = 0xffffffff;
    if (_gVerbose == '\x01') {
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      lVar6 = 0;
      _dmlog("rm_dir",0x1c1,&cf_statfailedfor_s__s,param_1,pcVar9);
    }
    else {
      lVar6 = 0;
    }
  }
  else {
    local_40 = 0;
    local_48 = param_1;
    lVar6 = _fts_open_INODE64(&local_48,0x15,0);
    uVar10 = local_48;
    if (lVar6 == 0) {
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      lVar6 = 0;
      _dmlog("rm_dir",0x1c9,&cf_fts_openfailedfor_s__s,uVar10,pcVar9);
      uVar10 = 0xffffffff;
    }
    else {
      local_50 = lVar5;
      lVar5 = _fts_read_INODE64(lVar6);
      while (lVar5 != 0) {
        switch(*(undefined2 *)(lVar5 + 0x58)) {
        case 2:
        case 4:
        case 7:
          uVar10 = *(undefined8 *)(lVar5 + 0x30);
          pcVar9 = _strerror(*(int *)(lVar5 + 0x38));
          _dmlog("rm_dir",0x1ed,&cf_ftserrorfor_s__s__s,param_1,uVar10,pcVar9);
          break;
        case 3:
        case 8:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
          lVar5 = _CFStringCreateWithFileSystemRepresentation(0,*(undefined8 *)(lVar5 + 0x30));
          lVar1 = lVar4;
          goto joined_r0x000b17f9;
        case 5:
          _dmlog("rm_dir",0x1f1,&cf_ftsseeingdotentry__s__s,param_1,*(undefined8 *)(lVar5 + 0x30));
          break;
        case 6:
          lVar5 = _CFStringCreateWithFileSystemRepresentation(0,*(undefined8 *)(lVar5 + 0x30));
          lVar1 = local_50;
joined_r0x000b17f9:
          if (lVar5 != 0) {
            _CFArrayAppendValue(lVar1,lVar5);
            _CFRelease(lVar5);
          }
        }
        lVar5 = _fts_read_INODE64();
      }
      uVar7 = _CFArrayGetCount(lVar4);
      uVar10 = 0;
      _CFArrayApplyFunction(lVar4,0,uVar7,_deleteEntry,0);
      lVar5 = local_50;
      uVar7 = _CFArrayGetCount(local_50);
      _CFArrayApplyFunction(lVar5,0,uVar7,_deleteEntry,1);
    }
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar6 != 0) {
    _fts_close_INODE64(lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

