// rea decompile_all
// name: __AMRestorableAddNewDevice
// address: 0x1584fb
// body: available
// range: 0x1584fb-0x158724 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1586d6 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x15870d to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableAddNewDevice(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  cfstringStruct *pcVar13;
  ulong uVar14;
  long local_40;
  ulong local_38;
  
  if (param_1 == 0) {
    pcVar13 = &cf_Failedtocreatenewrestorabledevice;
  }
  else {
    iVar4 = __AMDeviceProxyGetBoardID(*(undefined8 *)(param_1 + 0x20));
    iVar5 = __AMDeviceProxyGetChipID(*(undefined8 *)(param_1 + 0x20));
    local_40 = param_1;
    ___thr_AMRestorableDeviceGetECID(&local_40);
    uVar6 = __AMDeviceProxyGetState(*(undefined8 *)(param_1 + 0x20));
    uVar14 = local_38;
    if (local_38 == 0) {
      pcVar13 = &
                cf_Can_tgeneratefaketrackingidentifierfordevicethat_snotoftyperecovery_DFU_orPortDFU
      ;
      if ((6 < uVar6) || ((0x46U >> (uVar6 & 0x1f) & 1) == 0)) goto LAB_001586fa;
      uVar7 = __AMDeviceProxyGetLocationID
                        (*(undefined8 *)(param_1 + 0x20),
                         &
                         cf_Can_tgeneratefaketrackingidentifierfordevicethat_snotoftyperecovery_DFU_orPortDFU
                        );
      uVar14 = (ulong)uVar7;
    }
    lVar12 = 0;
    pcVar13 = &cf_Ignoringdevicebecauseit_sinourdenylist;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      if (((&_AMRestorableDeviceDenylistEntries)[lVar12 * 2] == iVar4) && (iVar5 == 0x8002))
      goto LAB_001586fa;
      lVar12 = 1;
      bVar1 = false;
    } while (bVar2);
    lVar12 = __AMRestorableCreateKeyForDeviceWithECID
                       (uVar14,&cf_Ignoringdevicebecauseit_sinourdenylist);
    if (lVar12 != 0) {
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
      _CFDictionaryAddValue(*(undefined8 *)(_gRestorableData + 0x38),lVar12,param_1);
      if (uVar6 == 6) {
        uVar8 = __AMDeviceProxyGetLocationID(*(undefined8 *)(param_1 + 0x20));
        lVar9 = __AMRestorableCreateKeyForDeviceWithECID(uVar8);
        lVar10 = __AMRestorableCreateKeyForDeviceWithECID(uVar14);
        _CFDictionaryAddValue(*(undefined8 *)(_gRestorableData + 0x40),lVar9,lVar10);
      }
      else {
        lVar9 = 0;
        lVar10 = 0;
      }
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      lVar11 = __AMRestorableEventDataExtendedCreate(0,param_1,0,0,0,0,0);
      if (lVar11 == 0) {
        _AMRSafeLogAndRelease(3,&cf_Failedtocreateeventaboutrestorabledevice);
      }
      else {
        local_40 = param_1;
        ___thr_AMRestorableDeviceGetECID();
        __AMRestorableDeviceEnqueueEventForAllClients(lVar11);
        uVar3 = __AMRestorableDeviceIsProxyTrackable(*(undefined8 *)(param_1 + 0x20));
        *(undefined1 *)(param_1 + 0xb8) = uVar3;
        *(undefined1 *)(param_1 + 0xb9) = uVar3;
        _AMRSafeLogAndRelease(3,0);
        _CFRelease(lVar11);
      }
      _CFRelease(lVar12);
      if (lVar9 != 0) {
        _CFRelease(lVar9);
      }
      if (lVar10 != 0) {
        _CFRelease(lVar10);
        return;
      }
      return;
    }
    pcVar13 = &cf_Failedtocreatetrackingkey;
  }
LAB_001586fa:
  _AMRSafeLogAndRelease(3,pcVar13);
  return;
}

