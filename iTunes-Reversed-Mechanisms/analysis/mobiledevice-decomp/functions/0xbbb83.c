// rea decompile_all
// name: ___AFCPlatformInitialize
// address: 0xbbb83
// body: available
// range: 0xbbb83-0xbbc4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___AFCPlatformInitialize(void)

{
  char cVar1;
  char *pcVar2;
  char local_19;
  
  ___gAFCLogLock = _AFCLockCreate();
  pcVar2 = _getprogname();
  ___gAFCASLClient = _asl_open(pcVar2,"com.apple.afc",2);
  _pthread_key_create(&___gAFCErrorInfoKey,PTR__CFRelease_004410b8);
  local_19 = '\0';
  _CFPreferencesSynchronize
            (&cf_com_apple_afc,*(undefined8 *)PTR__kCFPreferencesCurrentUser_00441180,
             *(undefined8 *)PTR__kCFPreferencesAnyHost_00441160);
  cVar1 = _CFPreferencesGetAppBooleanValue(&cf_VerboseLogging,&cf_com_apple_afc,&local_19);
  if (local_19 != '\0') {
    _gAFCVerboseLogEnabled = cVar1 != '\0';
    _CFPreferencesAppValueIsForced(&cf_VerboseLogging,&cf_com_apple_afc);
  }
  ___gAFCVersion = _CFNumberCreate(0,0xd,&_AFCafcVersionNumber);
  return;
}

