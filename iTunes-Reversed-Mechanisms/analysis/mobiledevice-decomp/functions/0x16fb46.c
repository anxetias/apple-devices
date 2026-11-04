// rea decompile_all
// name: _AMRCopyNormalizedNetworkURL
// address: 0x16fb46
// body: available
// range: 0x16fb46-0x16fe39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16fe35 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMRCopyNormalizedNetworkURL(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  char local_59;
  char local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_59 = '\0';
  if (param_1 == 0) {
    pcVar7 = &cf_Can_tnormalizeNULLURL;
LAB_0016fd41:
    lVar4 = 0;
    _AMRSafeLog(3,&cf___,pcVar7);
  }
  else {
    pcVar2 = (cfstringStruct *)_CFURLCopyHostName();
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar7 = &cf_Failedtogetnormailzedhostname;
      goto LAB_0016fd41;
    }
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFHostCreateWithName(uVar1,pcVar2);
    if (lVar3 != 0) {
      lVar10 = 0;
      _CFHostStartInfoResolution(lVar3,0,0);
      lVar4 = _CFHostGetAddressing(lVar3,&local_59);
      if (local_59 == '\0') {
        pcVar7 = &cf_Failedtoresolvehostnames;
        goto LAB_0016fdbc;
      }
      if (lVar4 == 0) {
        pcVar7 = &cf_Failedtoresolvehostname;
LAB_0016fdb0:
        lVar10 = 0;
      }
      else {
        lVar10 = _CFArrayGetCount(lVar4);
        if (lVar10 < 1) {
          pcVar7 = &cf_FailedtoconverthostnametoIPaddress;
          goto LAB_0016fdb0;
        }
        lVar10 = 0;
        uVar5 = _CFArrayGetValueAtIndex(lVar4,0);
        lVar4 = _CFDataGetBytePtr(uVar5);
        _addr2ascii(2,(void *)(lVar4 + 4),4,local_58);
        if (local_58[0] == '\0') {
          pcVar7 = &cf_Failedtoconvertaddressintoasciistring;
        }
        else {
          lVar10 = _CFStringCreateWithCStringNoCopy
                             (uVar1,local_58,0x8000100,*(undefined8 *)PTR__kCFAllocatorNull_004410f8
                             );
          if (lVar10 == 0) {
            pcVar7 = &cf_Failedtofindthelongestname;
            goto LAB_0016fdb0;
          }
          lVar6 = _CFURLCopyScheme(param_1);
          if (lVar6 != 0) {
            pcVar7 = (cfstringStruct *)_CFURLCopyPath(param_1);
            if (pcVar7 == (cfstringStruct *)0x0) {
              pcVar9 = &cf_FailedtocopypathfromURL;
              lVar4 = 0;
              lVar8 = 0;
            }
            else {
              lVar8 = _AMRMakeString(&cf__________,lVar6,lVar10,pcVar7);
              if (lVar8 == 0) {
                pcVar9 = &cf_Failedtocreatenormalizedstring;
                lVar8 = 0;
              }
              else {
                lVar4 = _AMAuthInstallSupportCreateURLFromString(uVar1,lVar8);
                if (lVar4 != 0) {
                  pcVar9 = (cfstringStruct *)0x0;
                  goto LAB_0016fcb7;
                }
                pcVar9 = &cf_FailedtocreatenormalizedURLfromstring;
              }
              lVar4 = 0;
            }
LAB_0016fcb7:
            _AMRSafeLogAndRelease(3,pcVar9);
            _CFRelease(lVar6);
            _CFRelease(lVar3);
            if (lVar8 != 0) {
              _CFRelease(lVar8);
            }
            _CFRelease(pcVar2);
            _CFRelease(lVar10);
            if (pcVar7 == (cfstringStruct *)0x0) goto LAB_0016fcfd;
            goto LAB_0016fcf8;
          }
          pcVar7 = &cf_FailedtocopyschemefromURL;
        }
      }
LAB_0016fdbc:
      lVar4 = 0;
      _AMRSafeLog(3,&cf___,pcVar7);
      _CFRelease(pcVar7);
      _CFRelease(lVar3);
      _CFRelease(pcVar2);
      if (lVar10 != 0) {
        _CFRelease(lVar10);
        lVar4 = 0;
      }
      goto LAB_0016fcfd;
    }
    lVar4 = 0;
    _AMRSafeLog(3,&cf___,&cf_Failedtocreatehostref);
    _CFRelease(&cf_Failedtocreatehostref);
    pcVar7 = pcVar2;
  }
LAB_0016fcf8:
  _CFRelease(pcVar7);
LAB_0016fcfd:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

