// rea decompile_all
// name: __AMSSOInit
// address: 0x177cba
// body: available
// range: 0x177cba-0x177ec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x177ec4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMSSOInit(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar9 = 0;
  pcVar11 = &cf_FailedtogetcstringfrompathCFSTR;
  do {
    uVar1 = *(undefined8 *)((long)&_kFrameworkSearchPathStrs + lVar9);
    cVar3 = _CFStringGetCString(uVar1,local_438,0x400,0x8000100);
    if (cVar3 == '\0') goto LAB_00177e61;
    iVar4 = _access(local_438,4);
    if (iVar4 == 0) {
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      pcVar10 = (cfstringStruct *)0x0;
      lVar9 = _CFURLCreateWithFileSystemPath(uVar2,uVar1,0,1);
      pcVar11 = &cf_FailedtocreateURLtoSSOframework;
      if (lVar9 != 0) {
        lVar5 = _CFBundleCreate(uVar2,lVar9);
        lVar7 = 0;
        lVar6 = _CFArrayCreateMutable(uVar2,0,PTR__kCFTypeArrayCallBacks_004411a8);
        do {
          _CFArrayAppendValue(lVar6,*(undefined8 *)((long)&_kSSOFrameworkSymbols + lVar7));
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        _symbolTable = 0;
        DAT_004a4d00 = 0;
        DAT_004a4d08 = (code *)0x0;
        _CFBundleGetFunctionPointersForNames(lVar5,lVar6,&_symbolTable);
        if (DAT_004a4d08 == (code *)0x0) {
          pcVar10 = &cf_FailedtoloadSSOinitsymbol;
LAB_00177ebc:
          uVar8 = 0;
        }
        else {
          if (_symbolTable == 0) {
            pcVar10 = &cf_FailedtoloadSSOserviceticketsymbol;
            goto LAB_00177ebc;
          }
          if (DAT_004a4d00 == 0) {
            pcVar10 = &cf_FailedtoloadSSOpostloginsymbol;
            goto LAB_00177ebc;
          }
          iVar4 = (*DAT_004a4d08)();
          if (iVar4 != 0) {
            pcVar10 = &cf_FailedtoinitializeSSOframework;
            goto LAB_00177ebc;
          }
          _ssoSemaphore = _dispatch_semaphore_create(1);
          uVar8 = 1;
        }
        _AMRSafeLogAndRelease(3,pcVar10);
        if (lVar5 != 0) {
          _CFRelease(lVar5);
        }
        _CFRelease(lVar9);
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
        goto LAB_00177e71;
      }
      goto LAB_00177e61;
    }
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x20);
  pcVar11 = &cf_FailedtolocateaSSOframework;
LAB_00177e61:
  _AMRSafeLogAndRelease(3,pcVar11);
  uVar8 = 0;
LAB_00177e71:
  _ssoInitSuccessful = uVar8;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

