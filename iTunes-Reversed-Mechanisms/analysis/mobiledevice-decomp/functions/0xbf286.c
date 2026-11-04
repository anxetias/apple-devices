// rea decompile_all
// name: _AMSInitialize
// address: 0xbf286
// body: available
// range: 0xbf286-0xbf3f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSInitialize(cfstringStruct *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  
  if (_sCrashReportProcessLinkLock == (pthread_mutex_t *)0x0) {
    _sCrashReportProcessLinkLock = _calloc(0x40,1);
    uVar1 = _pthread_mutex_init(_sCrashReportProcessLinkLock,(pthread_mutexattr_t *)0x0);
    if (uVar1 != 0) {
      _fprintf(*(FILE **)PTR____stderrp_004412c0,
               "*** Error initializing mutex for crash report ProcessLink Lock: %d!!! The application may step all over itself without this lock to protect it!\n"
               ,(ulong)uVar1);
      _free(_sCrashReportProcessLinkLock);
      _sCrashReportProcessLinkLock = (pthread_mutex_t *)0x0;
    }
  }
  pcVar3 = &cf__System_Library_PrivateFrameworks_MobileDevice_framework_Versions_Current;
  if (param_1 != (cfstringStruct *)0x0) {
    pcVar3 = param_1;
  }
  uVar2 = _CFStringCreateWithFormat
                    (0,0,&cf_____s_app_Contents_MacOS__s,pcVar3,"AppleMobileDeviceHelper",
                     "AppleMobileDeviceHelper");
  _CFStringGetFileSystemRepresentation(uVar2,&_sHelperPath,0x400);
  _CFRelease(uVar2);
  _sSyncerPathString =
       _CFStringCreateWithFormat
                 (0,0,&cf_____s_app_Contents_MacOS__s,pcVar3,"AppleMobileSync","AppleMobileSync");
  _sCrashReportPathString =
       _CFStringCreateWithFormat
                 (0,0,&cf_____s_app_Contents_Resources__s,pcVar3,"AppleMobileDeviceHelper",
                  "MDCrashReportTool");
  _sBackupPathString =
       _CFStringCreateWithFormat
                 (0,0,&cf_____s_app_Contents_Resources__s,pcVar3,"AppleMobileDeviceHelper",
                  "AppleMobileBackup");
  _CFStringGetFileSystemRepresentation(_sCrashReportPathString,&_sCrashReportPath,0x400);
  _sMainProcessLink = _ProcessLinkSetupParent(&_sHelperPath,0);
  return 0;
}

