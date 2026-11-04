// rea decompile_all
// name: __AMRestorableDeviceDidPanic
// address: 0x162186
// body: available
// range: 0x162186-0x1622e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __AMRestorableDeviceDidPanic(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_30;
  
  if (PTR__MRESerialDeviceDidPanic_004413d8 == (undefined *)0x0) {
    return 0;
  }
  local_30 = (cfstringStruct *)0x0;
  lVar2 = _AMRestorableDeviceCopySerialDeviceSWDName();
  _AMRSafeLog(5,&cf_checkingforpanic_using__,lVar2);
  uVar1 = _MRESerialDeviceDidPanic(lVar2,&local_30);
  if ((char)uVar1 == '\0') goto LAB_001622c0;
  if (*(long *)(param_1 + 0x10) != 0) {
    _CFRelease();
  }
  if (local_30 == (cfstringStruct *)0x0) {
    pcVar5 = &cf_Devicereportedapanicbutwecouldn_treadthepanicstring_;
LAB_00162257:
    uVar4 = 0xfc0;
  }
  else {
    _CFStringFind(local_30,&cf_md0,1);
    _CFStringFind(local_30,&cf_IOFindBSDRoot,1);
    pcVar5 = local_30;
    if ((extraout_RDX == 0) || (extraout_RDX_00 == 0)) goto LAB_00162257;
    pcVar5 = &cf_rd_md0issetinyourpersistentbootargs_Pleaseremoveitandtryagain_;
    uVar4 = 0xfc4;
  }
  uVar4 = _AMRCreateErrorWithDomain(pcVar5,uVar4,&cf_com_apple_MobileDevice_MobileRestore,0);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  if (PTR__MRESerialDeviceRetrievePanicDump_004413e0 == (undefined *)0x0) {
    pcVar5 = &cf_Couldn_tfindMRESerialDeviceRetrievePanicDump;
  }
  else {
    lVar3 = _MRESerialDeviceRetrievePanicDump(lVar2);
    if (lVar3 == 0) {
      pcVar5 = &cf_Nopanicblob_;
    }
    else {
      _AMRSafeLog(3,&cf_Panicblob__>__<_,lVar3);
      pcVar5 = &cf_PleasefilearadarwiththerestorelogstoPanicTriage;
    }
  }
  _AMRSafeLog(3,pcVar5);
LAB_001622c0:
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (local_30 != (cfstringStruct *)0x0) {
    _CFRelease();
  }
  return uVar1;
}

