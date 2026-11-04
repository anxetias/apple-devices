// rea decompile_all
// name: __MobileDeviceLibraryInitRoutine
// address: 0x12c3b0
// body: available
// range: 0x12c3b0-0x12c6e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12c6e5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __MobileDeviceLibraryInitRoutine(int param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long extraout_RAX;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *file;
  long lVar10;
  undefined4 local_43c;
  undefined4 local_438 [258];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_43c = 6;
  if (__AMDeviceTypeID == 0) {
    param_1 = 0x449138;
    __AMDeviceTypeID = __CFRuntimeRegisterClass();
  }
  _SSL_library_init();
  _ERR_load_crypto_strings();
  _SSL_load_error_strings();
  _CRYPTO_get_locking_callback(param_1,param_2,file,param_4);
  if (extraout_RAX == 0) {
    uVar3 = _CRYPTO_num_locks();
    _openSSLLocks = _calloc((long)(int)uVar3,0x40);
    if (_openSSLLocks != (void *)0x0) {
      if (0 < (int)uVar3) {
        lVar10 = 0;
        do {
          _pthread_mutex_init((pthread_mutex_t *)((long)_openSSLLocks + lVar10),
                              (pthread_mutexattr_t *)0x0);
          lVar10 = lVar10 + 0x40;
        } while ((ulong)uVar3 << 6 != lVar10);
      }
      _CRYPTO_set_locking_callback(_openSSLLockCallBack);
      _CRYPTO_set_id_callback(_openSSLThreadIDCallBack);
    }
  }
  _peer_certificate_data_index = _SSL_get_ex_new_index(0,"peer certificate data",0,0,0);
  lVar10 = _CFPreferencesCopyAppValue(&cf_LogLevel,&cf_com_apple_MobileDevice);
  if (lVar10 != 0) {
    lVar5 = _CFGetTypeID(lVar10);
    lVar6 = _CFNumberGetTypeID();
    if (lVar5 == lVar6) {
      cVar2 = _CFNumberGetValue(lVar10,3,&local_43c);
      if (cVar2 == '\x01') {
        _gLogLevel = local_43c;
      }
    }
  }
  lVar5 = _CFPreferencesCopyAppValue(&cf_LogFile,&cf_com_apple_MobileDevice);
  if (lVar5 != 0) {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFStringGetTypeID();
    if (lVar6 == lVar7) {
      cVar2 = _CFStringGetCString(lVar5,local_438,0x401,0x8000100);
      if (cVar2 != '\0') {
        iVar4 = _open((char *)local_438,0x20a,0x1ff);
        if (iVar4 != -1) {
          if (_gAsl == 0) {
            _gAsl = _asl_open(0,0,0);
          }
          _asl_add_log_file(_gAsl,iVar4);
        }
      }
    }
  }
  lVar6 = _CFPreferencesCopyAppValue(&cf_RecvTimeout,&cf_com_apple_MobileDevice);
  if (lVar6 != 0) {
    lVar7 = _CFGetTypeID(lVar6);
    lVar8 = _CFNumberGetTypeID();
    if (lVar7 == lVar8) {
      cVar2 = _CFNumberGetValue(lVar6,3,local_438);
      if (cVar2 == '\x01') {
        _gSocketReceiveTimeout = local_438[0];
      }
    }
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar1 = _md_log_log;
  uVar9 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_mobiledevice);
  uVar9 = _CFBundleGetValueForInfoDictionaryKey
                    (uVar9,*(undefined8 *)PTR__kCFBundleVersionKey_00441128);
  __os_log_internal(0,uVar1,0,"MobileDevice.framework version: %@",uVar9);
  lVar7 = __AMDRemotePairingCopyFrameworkVersion();
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  if (lVar7 == 0) {
    __os_log_internal(0,_md_log_log,0,"RemotePairing.framework not found.");
  }
  else {
    __os_log_internal(0,_md_log_log,0,"RemotePairing.framework version: %@",lVar7);
    _CFRelease(lVar7);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

