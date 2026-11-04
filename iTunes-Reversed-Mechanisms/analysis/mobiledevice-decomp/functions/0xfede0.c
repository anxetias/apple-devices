// rea decompile_all
// name: __initializeAvailabilityCheck
// address: 0xfede0
// body: available
// range: 0xfede0-0xff11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xff11b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __initializeAvailabilityCheck(byte param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  FILE *pFVar13;
  size_t sVar14;
  void *pvVar15;
  size_t sVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  char local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((_AvailabilityVersionCheck != (undefined *)0x0 & (param_1 ^ 1)) == 0) {
    if (PTR___availability_version_check_004412d0 != (undefined *)0x0) {
      _AvailabilityVersionCheck = PTR___availability_version_check_004412d0;
    }
    if (((_AvailabilityVersionCheck != (undefined *)0x0 & (param_1 ^ 1)) == 0) &&
       (puVar3 = (undefined8 *)_dlsym(0xfffffffffffffffe,"kCFAllocatorNull"),
       puVar3 != (undefined8 *)0x0)) {
      uVar1 = *puVar3;
      pcVar4 = (code *)_dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
      if (pcVar4 != (code *)0x0) {
        pcVar5 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
        pcVar6 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
        if (((((pcVar5 != (code *)0x0 || pcVar6 != (code *)0x0) &&
              (pcVar7 = (code *)_dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy"),
              pcVar7 != (code *)0x0)) &&
             (pcVar8 = (code *)_dlsym(0xfffffffffffffffe,"CFDictionaryGetValue"),
             pcVar8 != (code *)0x0)) &&
            ((pcVar9 = (code *)_dlsym(0xfffffffffffffffe,"CFGetTypeID"), pcVar9 != (code *)0x0 &&
             (pcVar10 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetTypeID"),
             pcVar10 != (code *)0x0)))) &&
           ((pcVar11 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetCString"),
            pcVar11 != (code *)0x0 &&
            ((pcVar12 = (code *)_dlsym(0xfffffffffffffffe,"CFRelease"), pcVar12 != (code *)0x0 &&
             (pFVar13 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r"),
             pFVar13 != (FILE *)0x0)))))) {
          _fseek(pFVar13,0,2);
          sVar14 = _ftell(pFVar13);
          pvVar15 = (void *)0x0;
          if (-1 < (long)sVar14) {
            _rewind(pFVar13);
            pvVar15 = _malloc(sVar14);
            if (pvVar15 == (void *)0x0) {
              pvVar15 = (void *)0x0;
            }
            else {
              sVar16 = _fread(pvVar15,1,sVar14,pFVar13);
              if ((sVar16 == sVar14) && (lVar17 = (*pcVar4)(0,pvVar15,sVar14,uVar1), lVar17 != 0)) {
                if (pcVar5 == (code *)0x0) {
                  lVar18 = (*pcVar6)(0,lVar17,0,0);
                }
                else {
                  lVar18 = (*pcVar5)();
                }
                if (lVar18 != 0) {
                  lVar19 = (*pcVar7)(0,"ProductVersion",0x600,uVar1);
                  if (lVar19 != 0) {
                    lVar20 = (*pcVar8)(lVar18,lVar19);
                    (*pcVar12)(lVar19);
                    if (lVar20 != 0) {
                      lVar19 = (*pcVar9)(lVar20);
                      lVar21 = (*pcVar10)();
                      if ((lVar19 == lVar21) &&
                         (cVar2 = (*pcVar11)(lVar20,local_58,0x20,0x8000100), cVar2 != '\0')) {
                        _sscanf(local_58,"%d.%d.%d",&_GlobalMajor,&_GlobalMinor,&_GlobalSubminor);
                      }
                    }
                  }
                  (*pcVar12)(lVar18);
                }
                (*pcVar12)(lVar17);
              }
            }
          }
          _free(pvVar15);
          _fclose(pFVar13);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

