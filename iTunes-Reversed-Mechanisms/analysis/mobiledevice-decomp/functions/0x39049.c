// rea decompile_all
// name: __RemoteInstallCoordinationServiceForDevice
// address: 0x39049
// body: available
// range: 0x39049-0x391d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x391d1 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __RemoteInstallCoordinationServiceForDevice(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)();
  iVar2 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar2 == 0) {
    uVar6 = __CreateError("_RemoteInstallCoordinationServiceForDevice",0x40,&cf_IXRemoteErrorDomain,
                          1,0,0,&cf_Notsupportedonhostsrunning<10_15);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  }
  else {
    lVar4 = _remote_device_copy_service(uVar3,"com.apple.remote.installcoordination_proxy");
    if (lVar4 != 0) {
      uVar6 = 0;
      goto LAB_000391b0;
    }
    piVar5 = ___error();
    iVar2 = *piVar5;
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    pcVar7 = _strerror(iVar2);
    __os_log_internal(0,uVar6,0x10,
                      "%s: Could not get service %s (make sure the client is entitled correctly), Error: %d (%s)"
                      ,"_RemoteInstallCoordinationServiceForDevice",
                      "com.apple.remote.installcoordination_proxy",iVar2,pcVar7);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    pcVar7 = _strerror(iVar2);
    uVar6 = __CreateError("_RemoteInstallCoordinationServiceForDevice",0x45,&cf_IXRemoteErrorDomain,
                          5,0,0,&
                                cf_Couldnotgetservice_s_makesuretheclientisentitledcorrectly__Error__d__s_
                          ,"com.apple.remote.installcoordination_proxy",iVar2,pcVar7);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar6 = _objc_retainAutorelease(uVar6);
    *param_2 = uVar6;
  }
  lVar4 = 0;
LAB_000391b0:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(uVar3);
  _objc_autoreleaseReturnValue(lVar4);
  return;
}

