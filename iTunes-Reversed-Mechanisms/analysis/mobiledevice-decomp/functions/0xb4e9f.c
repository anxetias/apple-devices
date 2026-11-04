// rea decompile_all
// name: _patch_file
// address: 0xb4e9f
// body: available
// range: 0xb4e9f-0xb50c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _patch_file(char *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 local_1c0 [144];
  undefined1 local_130 [144];
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *local_88;
  int local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *local_60;
  int local_58;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *local_38;
  undefined4 local_30;
  
  iVar2 = _open(param_1,0x100);
  if (iVar2 == -1) {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    _syslog(3,"%s:%d: open(%s): %s\n",
            "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
            ,0x105,param_1,pcVar6);
    return 0xffffffff;
  }
  iVar3 = _fstat_INODE64(iVar2,local_1c0);
  if (iVar3 == -1) {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    pcVar7 = "%s:%d: fstat(%s): %s\n";
    uVar8 = 0x109;
  }
  else {
    iVar3 = _open(param_2,0x100);
    if (iVar3 != -1) {
      iVar4 = _fstat_INODE64(iVar3,local_130);
      if (iVar4 == -1) {
        piVar5 = ___error();
        pcVar6 = _strerror(*piVar5);
        _syslog(3,"%s:%d: fstat(%s): %s\n",
                "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                ,0x113,param_2,pcVar6);
LAB_000b50a1:
        uVar8 = 0xffffffff;
      }
      else {
        local_a0 = PTR___NSConcreteStackBlock_004412a8;
        local_98 = 0x40000000;
        local_90 = ___patch_file_block_invoke;
        local_88 = &___block_descriptor_tmp;
        local_78 = PTR___NSConcreteStackBlock_004412a8;
        local_70 = 0x40000000;
        local_68 = ___patch_file_block_invoke_2;
        local_60 = &___block_descriptor_tmp_17;
        local_50 = PTR___NSConcreteStackBlock_004412a8;
        local_48 = 0x40000000;
        local_40 = ___patch_file_block_invoke_3;
        local_38 = &___block_descriptor_tmp_19;
        local_80 = iVar2;
        local_58 = iVar3;
        local_30 = param_3;
        cVar1 = _patchFile();
        uVar8 = 0;
        if (cVar1 == '\0') {
          _syslog(3,"%s:%d: patch failed\n",
                  "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                  ,0x124);
          goto LAB_000b50a1;
        }
      }
      _close(iVar3);
      goto LAB_000b50af;
    }
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    pcVar7 = "%s:%d: open(%s): %s\n";
    uVar8 = 0x10f;
    param_1 = param_2;
  }
  _syslog(3,pcVar7,
          "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
          ,uVar8,param_1,pcVar6);
  uVar8 = 0xffffffff;
LAB_000b50af:
  _close(iVar2);
  return uVar8;
}

