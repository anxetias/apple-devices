// rea decompile_all
// name: __WriteBytes
// address: 0x400da
// body: available
// range: 0x400da-0x40294 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __WriteBytes(int param_1,long param_2,ulong param_3,long *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      sVar1 = _write(param_1,(void *)(param_2 + uVar6),param_3 - uVar6);
      if (sVar1 == 0) {
        uVar3 = __CreateError("_WriteBytes",0x4d,&cf_IXRemoteErrorDomain,7,0,0,
                              &cf_Unabletostreamdataaswrite__returned0);
        lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
LAB_00040208:
        if (lVar5 != 0) {
          uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          __os_log_internal(0,uVar3,0x10,"%s: Failed to write() : %@","_WriteBytes",lVar5);
          (*(code *)PTR__objc_release_004410a0)(uVar3);
          uVar6 = 0xffffffffffffffff;
          if (param_4 != (long *)0x0) {
            lVar5 = _objc_retainAutorelease(lVar5);
            *param_4 = lVar5;
          }
          goto LAB_0004027a;
        }
        break;
      }
      if (sVar1 < 0) {
        piVar2 = ___error();
        uVar3 = __CreateError("_WriteBytes",0x51,*(undefined8 *)PTR__NSPOSIXErrorDomain_00441070,
                              (long)*piVar2,0,0,&cf_Failedtowrite___ldbytestofd_d,param_3 - uVar6,
                              param_1);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar4 = __CreateError("_WriteBytes",0x52,&cf_IXRemoteErrorDomain,7,uVar3,0,
                              &cf_Unabletostreamdataaswrite__returnederror);
        lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)PTR__objc_release_004410a0)(uVar3);
        goto LAB_00040208;
      }
      uVar6 = uVar6 + sVar1;
    } while (uVar6 < param_3);
    lVar5 = 0;
  }
LAB_0004027a:
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  return uVar6;
}

