// rea decompile_all
// name: _cfstring_dup_strip_uri
// address: 0x160c99
// body: available
// range: 0x160c99-0x160e66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x160e46 to 0x160a75 _cfstring_dup (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _cfstring_dup_strip_uri(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_RDX;
  long extraout_RDX_00;
  cfstringStruct *pcVar6;
  long lVar7;
  
  if (param_1 == 0) {
    pcVar6 = &cf_NULLparametertodup_cfstring_to_filenamewhengeneratingroot_utilcommandline;
  }
  else {
    lVar2 = _CFStringFind(param_1,&cf____,0);
    if (lVar2 == -1) {
      if (param_2 == 0) {
        uVar5 = _cfstring_dup(param_1);
        return uVar5;
      }
      uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar2 = _CFURLCreateWithFileSystemPath(uVar5,param_1,0,1);
    }
    else {
      uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar2 = _CFURLCreateWithString(uVar5,param_1,0);
    }
    if (lVar2 != 0) {
      if (param_2 != 0) {
        lVar4 = 0;
        lVar7 = lVar2;
        do {
          if (lVar4 != 0) {
            _CFRelease();
          }
          lVar2 = _CFURLCreateCopyAppendingPathComponent(uVar5,lVar7,param_2,0);
          cVar1 = _CFURLResourceIsReachable(lVar2,0);
          if (cVar1 != '\0') {
            lVar4 = 0;
            lVar3 = lVar7;
            break;
          }
          _CFRelease(lVar2);
          lVar3 = _CFURLCreateCopyDeletingLastPathComponent(uVar5,lVar7);
          _CFURLGetByteRangeForComponent(lVar3,3,0);
          _CFURLGetByteRangeForComponent(lVar7,3,0);
          lVar2 = 0;
          lVar4 = lVar7;
          lVar7 = lVar3;
        } while (extraout_RDX < extraout_RDX_00);
        _AMSupportSafeRelease(lVar4);
        _AMSupportSafeRelease(lVar3);
        if (lVar2 == 0) {
          _AMRSafeLog(7,&
                        cf_Failedfinding___whengeneratingroot_utilcommandline_youprobablyneedtospecifyitusingRestoreOptions_DylibCachePath_
                      ,param_2);
          return 0;
        }
      }
      lVar4 = _CFURLCopyFileSystemPath(lVar2,0);
      if (lVar4 == 0) {
        _AMRSafeLog(7,&cf_Failedcreatingpathfromrootwhengeneratingroot_utilcommandline);
        _CFRelease(lVar2);
        return 0;
      }
      uVar5 = _cfstring_dup(lVar4);
      _CFRelease(lVar4);
      _CFRelease(lVar2);
      return uVar5;
    }
    pcVar6 = &cf_FailedcreatingURLfromrootwhengeneratingroot_utilcommandline;
  }
  _AMRSafeLog(7,pcVar6);
  return 0;
}

