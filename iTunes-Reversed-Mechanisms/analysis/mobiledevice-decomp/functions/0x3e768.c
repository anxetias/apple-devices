// rea decompile_all
// name: _IXCopyItemAtURL
// address: 0x3e768
// body: available
// range: 0x3e768-0x3e9a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _IXCopyItemAtURL(undefined8 param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *to;
  int *piVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  puVar2 = PTR__objc_retain_004410a8;
  local_40 = param_4;
  uVar5 = (*(code *)PTR__objc_retain_004410a8)();
  local_48 = (*(code *)puVar2)(param_2);
  if (param_3 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    uVar9 = _objc_retainAutorelease(uVar5);
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"fileSystemRepresentation");
    iVar4 = _lstat_INODE64(uVar7,&local_d8);
    if (iVar4 == 0) goto LAB_0003e7ab;
    piVar8 = ___error();
    iVar4 = *piVar8;
    if (iVar4 != 2) {
      uVar7 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
      piVar8 = ___error();
      iVar1 = *piVar8;
      piVar8 = ___error();
      pcVar6 = _strerror(*piVar8);
      uVar9 = __CreateError("IXCopyItemAtURL",0x6a,uVar7,(long)iVar1,0,0,&cf_statof__failed__s,uVar9
                            ,pcVar6);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    }
    else {
      uVar9 = 0;
    }
    bVar10 = iVar4 == 2;
  }
  else {
LAB_0003e7ab:
    local_38 = uVar5;
    uVar5 = _objc_retainAutorelease(uVar5);
    puVar2 = PTR__objc_msgSend_00441098;
    pcVar6 = (char *)(*(code *)PTR__objc_msgSend_00441098)(uVar5,"fileSystemRepresentation");
    uVar7 = _objc_retainAutorelease(local_48);
    to = (char *)(*(code *)puVar2)(uVar7,"fileSystemRepresentation");
    uVar9 = 0;
    iVar4 = _copyfile(pcVar6,to,(copyfile_state_t)0x0,0x10c800f);
    if (iVar4 == 0) {
      bVar10 = true;
      uVar5 = local_38;
      goto LAB_0003e976;
    }
    uVar9 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
    piVar8 = ___error();
    iVar4 = *piVar8;
    piVar8 = ___error();
    pcVar6 = _strerror(*piVar8);
    bVar10 = false;
    uVar5 = __CreateError("IXCopyItemAtURL",0x79,uVar9,(long)iVar4,0,0,&cf_copyfileof__to__failed__s
                          ,uVar5,uVar7,pcVar6);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = local_38;
  }
  puVar3 = local_40;
  if (local_40 != (undefined8 *)0x0 && bVar10 == false) {
    uVar9 = _objc_retainAutorelease(uVar9);
    *puVar3 = uVar9;
    bVar10 = false;
  }
LAB_0003e976:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar9);
  (*(code *)puVar2)(local_48);
  (*(code *)puVar2)(uVar5);
  return bVar10;
}

