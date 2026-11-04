// rea decompile_all
// name: _AMRestoreEnableExtraDFUDevices
// address: 0xe406b
// body: available
// range: 0xe406b-0xe42c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreEnableExtraDFUDevices(long param_1)

{
  ulong uVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  short local_32;
  
  _pthread_mutex_lock((pthread_mutex_t *)&__notificationLock);
  uVar11 = 0xffffffff;
  if ((__initializedNotifications == '\0') && (uVar11 = 1, param_1 != 0)) {
    lVar4 = _CFGetTypeID(param_1);
    lVar5 = _CFArrayGetTypeID();
    if (lVar4 == lVar5) {
      lVar4 = _CFArrayGetCount(param_1);
      uVar1 = _numDeviceIDsToMatch;
      if (_deviceIDsToMatch == &_DEVICE_IDS_TO_MATCH) {
        puVar6 = _calloc(_numDeviceIDsToMatch + lVar4,0xc);
        _memcpy(puVar6,&_DEVICE_IDS_TO_MATCH,_numDeviceIDsToMatch * 0xc);
      }
      else {
        puVar6 = _realloc(_deviceIDsToMatch,(_numDeviceIDsToMatch + lVar4) * 0xc);
      }
      _deviceIDsToMatch = puVar6;
      if (lVar4 < 1) {
        uVar11 = 0;
      }
      else {
        lVar5 = 0;
        do {
          uVar11 = _CFArrayGetValueAtIndex(param_1,lVar5);
          lVar7 = _CFGetTypeID(uVar11);
          lVar8 = _CFDictionaryGetTypeID();
          if ((lVar7 != lVar8) || (lVar7 = _CFDictionaryGetValue(uVar11,&cf_PID), lVar7 == 0)) {
LAB_000e428e:
            uVar11 = 1;
            _numDeviceIDsToMatch = uVar1;
            break;
          }
          lVar8 = _CFGetTypeID(lVar7);
          lVar9 = _CFNumberGetTypeID();
          if (lVar8 != lVar9) goto LAB_000e428e;
          local_32 = 0;
          _CFNumberGetValue(lVar7,2,&local_32);
          sVar2 = local_32;
          if (_numDeviceIDsToMatch == 0) {
            _numDeviceIDsToMatch = 0;
LAB_000e424c:
            puVar6 = _deviceIDsToMatch;
            *(undefined2 *)(_deviceIDsToMatch + _numDeviceIDsToMatch * 0xc) = 0x5ac;
            *(short *)(puVar6 + _numDeviceIDsToMatch * 0xc + 2) = local_32;
            puVar6[_numDeviceIDsToMatch * 0xc + 4] = 1;
            *(undefined4 *)(puVar6 + _numDeviceIDsToMatch * 0xc + 8) = 1;
            _numDeviceIDsToMatch = _numDeviceIDsToMatch + 1;
          }
          else {
            uVar10 = 0;
            lVar7 = 4;
            iVar3 = 0;
            do {
              if (*(short *)(_deviceIDsToMatch + lVar7 + -2) == sVar2) {
                if (_deviceIDsToMatch[lVar7] == '\x01') {
                  _AMRLog(4,&cf_pid0x_xisalreadyregisteredforDFUbythelibrary_ignoring,sVar2);
                  iVar3 = 1;
                }
                else {
                  _AMRLog(3,&cf_pid0x_xisalreadyregistered_butnotforDFU_,sVar2);
                  iVar3 = -1;
                }
              }
              uVar10 = uVar10 + 1;
              lVar7 = lVar7 + 0xc;
            } while (uVar10 < _numDeviceIDsToMatch);
            if (iVar3 == 0) goto LAB_000e424c;
            if (iVar3 == -1) goto LAB_000e428e;
          }
          lVar5 = lVar5 + 1;
          uVar11 = 0;
        } while (lVar5 != lVar4);
      }
    }
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&__notificationLock);
  return uVar11;
}

