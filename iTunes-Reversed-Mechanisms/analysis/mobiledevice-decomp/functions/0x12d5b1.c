// rea decompile_all
// name: __AMDDeviceAttachedCallbackv3
// address: 0x12d5b1
// body: available
// range: 0x12d5b1-0x12d820 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12d673 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDDeviceAttachedCallbackv3(long param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar6 = _AMDeviceCreateFromProperties(param_3);
  if (param_1 == 0 || lVar6 == 0) {
    if (lVar6 == 0) {
      return;
    }
  }
  else {
    iVar5 = -1;
    if ((ulong)*(uint *)(lVar6 + 0x30) < 4) {
      iVar5 = *(int *)(&DAT_0032cd30 + (ulong)*(uint *)(lVar6 + 0x30) * 4);
    }
    if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x10) == iVar5)) {
      _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x48));
      sVar1 = *(short *)(lVar6 + 0x18);
      _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x48));
      if (sVar1 == -0x7a00) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,2,
                          "_AMDDeviceAttachedCallbackv3 found a device we should ignore, so ignoring."
                         );
      }
      else {
        cVar4 = _AMDeviceNotificationIsDeviceCanonical(*(undefined1 *)(param_1 + 0x7d),lVar6);
        if (cVar4 != '\0') {
          _CFArrayAppendValue(*(undefined8 *)(param_1 + 0x18),lVar6);
          local_40 = 1;
          local_48 = lVar6;
          local_38 = param_1;
          if ((*(char *)(param_1 + 0x79) == '\x01') &&
             ((*(char *)(param_1 + 0x7c) != '\0' ||
              (cVar4 = _AMDeviceIsWiFiPairableRef(lVar6), cVar4 == '\0')))) {
            if (((*(char *)(param_1 + 0x7a) != '\0') ||
                ((*(char *)(param_1 + 0x7b) == '\x01' && (*(int *)(lVar6 + 0x30) == 1)))) &&
               ((iVar5 = __AMDeviceListenForPairedDevices(lVar6,param_1), iVar5 != -0x17fffff1 &&
                (iVar5 != 0)))) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar3 = _md_log_log;
              uVar2 = *(undefined8 *)(lVar6 + 0x20);
              uVar7 = _AMDErrorString(iVar5);
              __os_log_internal(0,uVar3,0x10,
                                "Failed to listen for watches paired with \'%@\': 0x%x (%s)",uVar2,
                                iVar5,uVar7);
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,2,"Device \'%@\' attached.",lVar6);
            if (*(code **)(param_1 + 0x80) != (code *)0x0) {
              (**(code **)(param_1 + 0x80))(&local_48,*(undefined8 *)(param_1 + 0x88));
              return;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Callback is NULL while callbacks are enabled.");
            return;
          }
        }
      }
    }
  }
  _CFRelease(lVar6);
  return;
}

