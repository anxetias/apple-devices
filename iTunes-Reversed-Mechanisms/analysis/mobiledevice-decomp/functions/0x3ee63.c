// rea decompile_all
// name: _IXUrlsForItemsInDirectoryAtURL
// address: 0x3ee63
// body: available
// range: 0x3ee63-0x3f23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f232 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3f237 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXUrlsForItemsInDirectoryAtURL(undefined8 param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 uVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined1 local_568 [4];
  ushort local_564;
  undefined *local_4d8;
  undefined8 local_4d0;
  code *local_4c8;
  undefined *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8;
  undefined8 local_4a0;
  long local_498;
  undefined8 local_490;
  long local_488;
  char *local_480;
  char *local_478;
  undefined8 *local_470;
  undefined8 local_468;
  undefined8 local_460;
  long local_458;
  undefined1 local_450 [1048];
  long local_38;
  
  puVar2 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_470 = param_3;
  uVar10 = (*(code *)PTR__objc_retain_004410a8)();
  IVar11 = NSMutableArray::new((ID)&_OBJC_CLASS___NSMutableArray,"new");
  local_4d8 = PTR___NSConcreteStackBlock_004412a8;
  local_4d0 = 0xc2000000;
  local_4c8 = ___IXUrlsForItemsInDirectoryAtURL_block_invoke;
  local_4c0 = &___block_descriptor_49_e8_32s40s_e29_B16__0__dirent_QQSSC_1024c__8l;
  local_4a8 = param_2;
  uVar10 = (*(code *)puVar2)(uVar10);
  local_4b8 = uVar10;
  local_4b0 = (*(code *)puVar2)(IVar11);
  local_468 = local_4b0;
  uVar12 = (*(code *)puVar2)(uVar10);
  uVar10 = (*(code *)puVar2)(&local_4d8);
  local_458 = 0;
  uVar12 = _objc_retainAutorelease(uVar12);
  pcVar13 = (char *)(*(code *)PTR__objc_msgSend_00441098)(uVar12,"fileSystemRepresentation");
  iVar8 = _open(pcVar13,0x100100);
  local_460 = uVar12;
  if (-1 < iVar8) {
    lVar14 = _fdopendir_INODE64(iVar8);
    if (lVar14 != 0) {
      local_480 = "stringWithFileSystemRepresentation:length:";
      local_478 = "URLByAppendingPathComponent:isDirectory:";
      local_490 = uVar10;
      local_488 = lVar14;
      do {
        iVar8 = _readdir_r_INODE64(lVar14,local_450,&local_458);
        if ((iVar8 != 0) || (local_458 == 0)) break;
        local_4a0 = _objc_autoreleasePoolPush();
        lVar4 = local_458;
        if (*(char *)(local_458 + 0x14) == '\0') {
          local_498 = local_458 + 0x15;
          uVar1 = *(undefined2 *)(local_458 + 0x12);
          uVar10 = (*(code *)PTR__objc_retain_004410a8)(local_460);
          puVar2 = PTR__objc_msgSend_00441098;
          uVar12 = (*(code *)PTR__objc_msgSend_00441098)
                             (&_OBJC_CLASS___NSString,local_480,local_498,uVar1);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          uVar15 = (*(code *)puVar2)(uVar10,local_478,uVar12,0);
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
          puVar2 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar10);
          uVar10 = local_490;
          (*(code *)puVar2)(uVar12);
          uVar12 = _objc_retainAutorelease(uVar15);
          uVar15 = (*(code *)PTR__objc_msgSend_00441098)(uVar12,"fileSystemRepresentation");
          iVar9 = _lstat_INODE64(uVar15,local_568);
          if (iVar9 == 0) {
            uVar7 = local_564 & 0xf000;
            if (uVar7 == 0x4000) {
              uVar5 = 4;
            }
            else if (uVar7 == 0x8000) {
              uVar5 = 8;
            }
            else {
              if (uVar7 != 0xa000) goto LAB_0003f0ce;
              uVar5 = 10;
            }
            *(undefined1 *)(lVar4 + 0x14) = uVar5;
          }
LAB_0003f0ce:
          (*(code *)puVar2)(uVar12);
          lVar14 = local_488;
        }
        cVar6 = (*local_4c8)(uVar10,local_458);
        _objc_autoreleasePoolPop(local_4a0);
      } while (cVar6 != '\0');
      _closedir(lVar14);
      uVar12 = local_460;
      goto LAB_0003f11e;
    }
  }
  piVar16 = ___error();
  iVar8 = *piVar16;
LAB_0003f11e:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar10);
  (*(code *)puVar2)(uVar12);
  if (iVar8 == 0) {
    lVar14 = (*(code *)PTR__objc_msgSend_00441098)(local_468,"copy");
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
    uVar12 = _objc_retainAutorelease(uVar12);
    uVar12 = (*(code *)PTR__objc_msgSend_00441098)(uVar12,"fileSystemRepresentation");
    pcVar13 = _strerror(iVar8);
    lVar14 = 0;
    uVar10 = __CreateError("IXUrlsForItemsInDirectoryAtURL",0x12a,uVar10,(long)iVar8,0,0,
                           &cf__IterateDirectoryfor_sreturned_s,uVar12,pcVar13);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  }
  puVar3 = local_470;
  if ((local_470 != (undefined8 *)0x0) && (lVar14 == 0)) {
    uVar12 = _objc_retainAutorelease(uVar10);
    *puVar3 = uVar12;
  }
  (*(code *)puVar2)(local_4b0);
  (*(code *)puVar2)(local_4b8);
  (*(code *)puVar2)(uVar10);
  (*(code *)puVar2)(local_468);
  (*(code *)puVar2)(local_460);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    _objc_autoreleaseReturnValue(lVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

