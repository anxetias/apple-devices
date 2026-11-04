// rea decompile_all
// name: _IXCreateDirectoryAtURL
// address: 0x3eb6f
// body: available
// range: 0x3eb6f-0x3ee62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _IXCreateDirectoryAtURL
               (undefined8 param_1,char param_2,mode_t param_3,uint param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  bool bVar12;
  
  uVar4 = (*(code *)PTR__objc_retain_004410a8)();
  uVar4 = _objc_retainAutorelease(uVar4);
  pcVar5 = (char *)(*(code *)PTR__objc_msgSend_00441098)(uVar4,"fileSystemRepresentation");
  if (param_2 == '\0') {
    iVar3 = _mkdir(pcVar5,param_3);
    if ((iVar3 == 0) || (piVar7 = ___error(), *piVar7 == 0x11)) goto LAB_0003ec3b;
    uVar8 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
    piVar7 = ___error();
    lVar11 = (long)*piVar7;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"path");
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    piVar7 = ___error();
    pcVar5 = _strerror(*piVar7);
    pcVar10 = &cf_mkdirof__failed__s;
    uVar9 = 0xb1;
LAB_0003eddf:
    bVar12 = false;
    uVar8 = __CreateError("IXCreateDirectoryAtURL",uVar9,uVar8,lVar11,0,0,pcVar10,uVar6,pcVar5);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    bVar1 = true;
  }
  else {
    iVar3 = _mkpath_np(pcVar5,param_3);
    if ((iVar3 != 0) && (iVar3 != 0x11)) {
      uVar8 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
      lVar11 = (long)iVar3;
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"path");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      pcVar5 = _strerror(iVar3);
      pcVar10 = &cf_mkpath_npof__failed__s;
      uVar9 = 0xab;
      goto LAB_0003eddf;
    }
LAB_0003ec3b:
    if (param_4 == 0xffffffff) {
      bVar12 = true;
      uVar8 = 0;
      goto LAB_0003ee3e;
    }
    uVar6 = _objc_retainAutorelease(uVar4);
    uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"fileSystemRepresentation");
    lVar11 = _opendir_INODE64(uVar8);
    if (lVar11 == 0) {
      uVar8 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
      piVar7 = ___error();
      lVar11 = (long)*piVar7;
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"path");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      piVar7 = ___error();
      pcVar5 = _strerror(*piVar7);
      pcVar10 = &cf_opendirof__failed__s;
      uVar9 = 0xbd;
      goto LAB_0003eddf;
    }
    iVar3 = _dirfd(lVar11);
    uVar8 = 0;
    iVar3 = _fcntl(iVar3,0x40,(ulong)param_4);
    bVar12 = iVar3 == 0;
    bVar1 = !bVar12;
    if (!bVar12) {
      uVar8 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
      piVar7 = ___error();
      iVar3 = *piVar7;
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"path");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      piVar7 = ___error();
      pcVar5 = _strerror(*piVar7);
      uVar8 = __CreateError("IXCreateDirectoryAtURL",0xc3,uVar8,(long)iVar3,0,0,
                            &cf_Failedtosetclass__d_ondirectory____s,param_4,uVar6,pcVar5);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
    }
    _closedir(lVar11);
  }
  if ((param_5 != (undefined8 *)0x0) && (bVar1)) {
    uVar8 = _objc_retainAutorelease(uVar8);
    *param_5 = uVar8;
  }
LAB_0003ee3e:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar8);
  (*(code *)puVar2)(uVar4);
  return bVar12;
}

