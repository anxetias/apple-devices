// rea decompile_all
// name: __DLWarnAboutUsingCopyHomeDirPathAndCallDLCopyHomeDirPath
// address: 0xaa28
// body: available
// range: 0xaa28-0xaa82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xaa7e to 0xa9d1 _DLCopyHomeDirPath (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DLWarnAboutUsingCopyHomeDirPathAndCallDLCopyHomeDirPath(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (__DLWarnAboutUsingCopyHomeDirPathAndCallDLCopyHomeDirPath_pScreamedAndShouted != '\0') {
    lVar2 = _CFCopyHomeDirectoryURLForUser(0);
    if (lVar2 == 0) {
      _fwrite("Could not get a home URL for the default user\n",0x2e,1,
              *(FILE **)PTR____stderrp_00015078);
      uVar3 = 0;
    }
    else {
      uVar3 = _CFURLCopyFileSystemPath(lVar2,0);
      _CFRelease(lVar2);
    }
    return uVar3;
  }
  __DLWarnAboutUsingCopyHomeDirPathAndCallDLCopyHomeDirPath_pScreamedAndShouted = 1;
  cVar1 = _DLLoggingEnabled(3);
  if (cVar1 == '\0') {
    cVar1 = _DLOutputEnabled(3);
    if (cVar1 == '\0') goto LAB_0000aa7d;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
          ,"_DLWarnAboutUsingCopyHomeDirPathAndCallDLCopyHomeDirPath",3,
          &
          cf____ThefunctioncopyHomeDirPathhasbeendeprecatedandwillberemovedinafuturerelease_ChangeyourcodetouseDLCopyHomeDirPath_
         );
LAB_0000aa7d:
  uVar3 = _DLCopyHomeDirPath();
  return uVar3;
}

