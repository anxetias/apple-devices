// rea decompile_all
// name: FUN_10000a57e
// address: 0x10000a57e
// body: available
// range: 0x10000a57e-0x10000a8df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10000a57e(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  long local_38;
  double local_30;
  
  local_38 = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = _CFDictionaryGetValue(param_1,&cf_AuthVersion);
  if ((lVar1 != 0) &&
     (dVar6 = (double)(*(code *)PTR__objc_msgSend_100012170)(lVar1,"doubleValue"), 3.0 <= dVar6)) {
    local_30 = dVar6;
    uVar3 = FUN_10000b8f0();
    __os_log_internal(local_30,0x100000000,uVar3,0x10,
                      "This manifest\'s auth version is higher than we understand (%0.2f). Refusing to use the existing inner manifest"
                     );
    return 0;
  }
  lVar1 = _CFDictionaryGetValue(param_1,&cf_Data);
  if (lVar1 == 0) {
    uVar3 = FUN_10000b8f0();
    __os_log_internal(0x100000000,uVar3,0x10,"No manifest data in manifest: %@",param_1);
    return 0;
  }
  lVar1 = _CFPropertyListCreateFromXMLData(0,lVar1,0,&local_38);
  if (lVar1 == 0) {
    uVar3 = FUN_10000b8f0();
    __os_log_internal(0x100000000,uVar3,0x10,
                      "Can\'t create dictionary for inner manifest from data in manifest: %@\nOuter Manifest = %@"
                      ,local_38,param_1);
    lVar1 = local_38;
    if (local_38 == 0) {
      return 0;
    }
    goto LAB_10000a74d;
  }
  lVar2 = _CFDictionaryGetValue(lVar1,&cf_Version);
  if (lVar2 == 0) {
    uVar3 = FUN_10000b8f0();
    pcVar5 = "Denying NULL inner manifest version";
    goto LAB_10000a70e;
  }
  dVar6 = (double)_CFStringGetDoubleValue(lVar2);
  if ((dVar6 == 0.0) && (!NAN(dVar6))) {
    uVar3 = FUN_10000b8f0();
    __os_log_internal(0x100000000,uVar3,0x10,"Denying an unparsable inner manifest version: %@",
                      lVar2);
    goto LAB_10000a71d;
  }
  if ((int)dVar6 < 3) {
    uVar3 = FUN_10000b8f0();
    pcVar5 = "Old inner manifest version below 3.0 is compatible.";
    uVar4 = 1;
LAB_10000a78a:
    __os_log_internal(0x100000000,uVar3,uVar4,pcVar5);
    return lVar1;
  }
  if ((dVar6 != 3.0) || (NAN(dVar6))) {
    if ((((dVar6 == 5.2) && (!NAN(dVar6))) || ((dVar6 == 5.0 && (!NAN(dVar6))))) ||
       ((dVar6 == 5.1 && (!NAN(dVar6))))) {
      uVar3 = FUN_10000b8f0();
      if (param_2 != '\0') {
        pcVar5 = 
        "Dealing with a 5.0-5.2 inner manifest. Mistakes were made, but we\'re going to do our best to recover"
        ;
        uVar4 = 0;
        goto LAB_10000a78a;
      }
      pcVar5 = 
      "Refusing to backup with a 5.0-5.2 inner manifest. You\'re going to have to throw this out and do it over again, buddy."
      ;
      goto LAB_10000a70e;
    }
    local_30 = dVar6;
    if ((param_2 != '\0') || (6.2 <= dVar6)) {
      uVar3 = FUN_10000a8e0();
      dVar7 = (double)_CFStringGetDoubleValue(uVar3);
      if ((dVar7 == 0.0) && (!NAN(dVar7))) {
        uVar3 = FUN_10000b8f0();
        pcVar5 = "Could not get our current inner manifest version. Cannot use inner manifest.";
        goto LAB_10000a70e;
      }
      uVar3 = FUN_10000b8f0();
      if ((int)dVar6 <= (int)dVar7) {
        __os_log_internal(dVar7,local_30,0x100000000,uVar3,1,
                          "Our major version (%0.1f) is compatible with the inner manifest version (%0.1f)."
                         );
        return lVar1;
      }
      __os_log_internal(dVar7,local_30,0x100000000,uVar3,0x10,
                        "Our major version (%0.1f) is NOT compatible with the inner manifest version (%0.1f). Cannot use inner manifest."
                       );
    }
    else {
      uVar3 = FUN_10000b8f0();
      __os_log_internal(local_30,0x100000000,uVar3,0,
                        "Manifest version is less than 6.1 (%0.1f). Throwing out the inner manifest and running a fresh backup."
                       );
    }
  }
  else {
    uVar3 = FUN_10000b8f0();
    pcVar5 = 
    "Refusing to backup or restore to a 3.0 inner manifest. If this is a backup, a full backup will now be initiated"
    ;
LAB_10000a70e:
    __os_log_internal(0x100000000,uVar3,0x10,pcVar5);
  }
LAB_10000a71d:
  uVar3 = FUN_10000b8f0();
  uVar4 = FUN_10000a8e0();
  __os_log_internal(0x100000000,uVar3,0,"Received manifest version (%@) doesn\'t match current (%@)"
                    ,lVar2,uVar4);
LAB_10000a74d:
  _CFRelease(lVar1);
  return 0;
}

