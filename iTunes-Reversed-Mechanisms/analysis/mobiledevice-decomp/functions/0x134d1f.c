// rea decompile_all
// name: _AMDeviceGetWirelessBuddyFlags
// address: 0x134d1f
// body: available
// range: 0x134d1f-0x134ec1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceGetWirelessBuddyFlags(long param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_38;
  
  if ((param_1 == 0) || (param_2 == (ulong *)0x0)) {
    uVar7 = 0xe8000007;
  }
  else {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
    lVar2 = _AMDeviceCopyValueWithError
                      (param_1,&cf_com_apple_mobile_wireless_lockdown,&cf_SupportsWifiSyncing,0);
    if (lVar2 == 0) {
      uVar7 = 0xe800007f;
    }
    else {
      uVar7 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      cVar1 = _CFEqual(lVar2,uVar7);
      if (cVar1 == '\0') {
        uVar7 = 0xe800007f;
      }
      else {
        lVar3 = __CopyOwnWirelessBuddyID();
        if (lVar3 == 0) {
          uVar7 = 0xe8000001;
        }
        else {
          local_38 = 0;
          lVar4 = _AMDeviceCopyValueWithError
                            (param_1,&cf_com_apple_mobile_wireless_lockdown,&cf_WirelessBuddyID,0);
          if (lVar4 != 0) {
            cVar1 = _CFEqual(lVar4,lVar3);
            local_38 = (ulong)(cVar1 == '\x01');
          }
          lVar5 = _AMDeviceCopyValueWithError
                            (param_1,&cf_com_apple_mobile_wireless_lockdown,
                             &cf_EnableWifiConnections,0);
          if (lVar5 == 0) {
            *param_2 = local_38;
          }
          else {
            cVar1 = _CFEqual(lVar5,uVar7);
            uVar6 = local_38 + 2;
            if (cVar1 == '\0') {
              uVar6 = local_38;
            }
            *param_2 = uVar6;
            _CFRelease(lVar5);
          }
          _CFRelease(lVar3);
          uVar7 = 0;
          if (lVar4 != 0) {
            _CFRelease();
          }
        }
      }
      _CFRelease(lVar2);
    }
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  }
  return uVar7;
}

