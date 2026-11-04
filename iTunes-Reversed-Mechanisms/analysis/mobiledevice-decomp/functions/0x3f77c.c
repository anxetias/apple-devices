// rea decompile_all
// name: _IXRemoteStreamContentsOfInstallable
// address: 0x3f77c
// body: available
// range: 0x3f77c-0x3fd6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd66 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
_IXRemoteStreamContentsOfInstallable
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  char *pcVar11;
  undefined1 uVar12;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  code *pcStack_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  code *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  code *pcStack_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_94;
  long local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_a0 = param_3;
  local_94 = param_2;
  local_b8 = (*(code *)PTR__objc_retain_004410a8)();
  local_b0 = (*(code *)puVar2)(param_4);
  local_a8 = (*(code *)puVar2)(param_5);
  local_90 = 0;
  local_108 = 0;
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  pcStack_120 = (code *)0x0;
  local_138 = (code *)0x0;
  uStack_130 = 0;
  local_148 = (undefined8 *)0x0;
  uStack_140 = 0;
  local_158 = (undefined8 *)0x0;
  pcStack_150 = (code *)0x0;
  local_168 = 0;
  uStack_160 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_88 = &cf_CompressionOptions;
  local_60 = &cf_TryRecompress;
  local_80 = &cf_CompressionMethod;
  local_58 = &cf_LZFSE;
  local_78 = &cf_NoCache;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_70 = &cf_NoSeekOutput;
  local_50 = uVar5;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_68 = &cf_NoCentralDirectory;
  local_48 = uVar6;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_40 = uVar7;
  uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_60,
                     &local_88,5);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithDictionary:",uVar8);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)PTR__objc_release_004410a0)(uVar8);
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,local_94);
  uVar6 = _objc_retainBlock(local_b0);
  uVar5 = local_e8;
  local_e8 = uVar6;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  uVar6 = _objc_retainBlock(local_a8);
  uVar5 = local_d8;
  local_d8 = uVar6;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  uStack_130 = 0;
  local_138 = __WriteOutput;
  pcStack_120 = __TellOutput;
  local_158 = &local_f8;
  pcStack_150 = __ProgressCallback;
  uStack_160 = 0x3fffc;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_148 = local_158;
  local_118 = local_158;
  uVar5 = _objc_retainAutorelease(local_b8);
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"fileSystemRepresentation");
  iVar4 = _stat_INODE64(uVar6,&local_1f8);
  if (iVar4 == 0) {
    if ((local_1f8._4_2_ & 0xf000) == 0x4000) {
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"pathExtension");
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"isEqualToString:",&cf_app);
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      if (cVar3 != '\0') {
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"lastPathComponent");
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar7 = local_c8;
        local_c8 = uVar8;
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)PTR__objc_msgSend_00441098)
                  (uVar9,"setObject:forKeyedSubscript:",uVar7,&cf_IncludeContainingDirectory);
        (*(code *)PTR__objc_release_004410a0)(uVar7);
      }
      cVar3 = _SZArchiverCreateStreamableZip(uVar6,&local_168,uVar9,&local_90);
    }
    else {
      cVar3 = _SZArchiverConvertZipArchiveToStreamable(uVar6,&local_168,uVar9,&local_90);
    }
    if (cVar3 != '\0') {
      uVar7 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      __os_log_internal(0,uVar7,2,"%s: Successfully archived contents of %s : %@",
                        "IXRemoteStreamContentsOfInstallable",uVar6,local_90);
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      uVar12 = 1;
      uVar6 = 0;
      bVar1 = false;
      goto LAB_0003fcbd;
    }
    uVar6 = __CreateError("IXRemoteStreamContentsOfInstallable",0xce,&cf_IXRemoteErrorDomain,5,
                          uStack_c0,0,&cf_Failedtoarchivecontentsofdirectory_s,uVar6);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  }
  else {
    piVar10 = ___error();
    iVar4 = *piVar10;
    pcVar11 = _strerror(iVar4);
    uVar6 = __CreateError("IXRemoteStreamContentsOfInstallable",0xc0,&cf_IXRemoteErrorDomain,5,0,0,
                          &cf_Failedtocallstat__on_s__s__d_,uVar6,pcVar11,iVar4);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  }
  uVar12 = 0;
  bVar1 = true;
LAB_0003fcbd:
  if (local_90 != 0) {
    _CFRelease();
    local_90 = 0;
  }
  if (bVar1 && local_a0 != (undefined8 *)0x0) {
    uVar7 = _objc_retainAutorelease(uVar6);
    *local_a0 = uVar7;
  }
  ___destructor_8_sb16_sb32_s48_s56(&local_f8);
  (*(code *)PTR__objc_release_004410a0)(uVar9);
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)PTR__objc_release_004410a0)(local_a8);
  (*(code *)PTR__objc_release_004410a0)(local_b0);
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

