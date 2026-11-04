// rea decompile_all
// name: _AMDeviceCopyValueWithError
// address: 0x12fb04
// body: available
// range: 0x12fb04-0x12fea6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12fea2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCopyValueWithError(long param_1,long param_2,long param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  int local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_130 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0x4c4c554e;
  uStack_230 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0x4c4c554e;
  if (param_1 == 0) {
LAB_0012fe69:
    local_23c = -0x17fffff9;
  }
  else {
    if ((*(char *)(param_1 + 0x94) != '\0') &&
       ((*(long *)(param_1 + 0xb0) == 0 || (*(char *)(*(long *)(param_1 + 0xb0) + 0x94) != '\0'))))
    {
      if ((param_2 == 0) || (cVar2 = _CFEqual(param_2,&cf_NULL), cVar2 != '\0')) {
        param_2 = 0;
      }
      else {
        cVar2 = _CFStringGetCString(param_2,&local_138,0x100,0x8000100);
        if (cVar2 == '\0') goto LAB_0012fe69;
      }
      if ((param_3 != 0) &&
         (cVar2 = _CFStringGetCString(param_3,&local_238,0x100,0x8000100), cVar2 == '\0'))
      goto LAB_0012fe69;
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
      if (*(long *)(param_1 + 0xf8) == 0) {
LAB_0012fd6a:
        if (*(long *)(param_1 + 0xb0) != 0) {
          lVar3 = _CPXCopyValueFromPairedDevice
                            (*(long *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x20),param_3,
                             &local_23c);
          bVar1 = true;
          if (((local_23c != 0) && (*(long *)(param_1 + 0xb0) != 0)) &&
             (0 < *(int *)(param_1 + 200))) {
            local_23c = 0;
            lVar3 = _copy_lockdown_value(param_1,param_2,param_3);
          }
          goto LAB_0012fdf4;
        }
        lVar3 = _copy_lockdown_value(param_1,param_2,param_3,&local_23c);
      }
      else {
        lVar3 = param_3;
        if (param_3 == 0) {
          cVar2 = __AMDeviceIsBackedByRSD(param_1);
          if (cVar2 != '\0') goto LAB_0012fd6a;
          lVar3 = 0;
        }
        lVar3 = __AMDRemotePairingCopyConnectableDeviceValueWithError
                          (param_1,param_2,lVar3,&local_23c);
        if (lVar3 == 0) {
          cVar2 = __AMDeviceIsBackedByRSD(param_1);
          if (cVar2 == '\0') {
            local_23c = -0x17fffff8;
            bVar1 = true;
            lVar3 = 0;
            goto LAB_0012fdf4;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,2,
                            "%@ %@ not found in RemotePairing KVS; falling back to lockdown remote service."
                            ,param_2,param_3);
          goto LAB_0012fd6a;
        }
        local_23c = 0;
      }
      bVar1 = true;
      goto LAB_0012fdf4;
    }
    local_23c = -0x17ffff7c;
  }
  lVar3 = 0;
  bVar1 = false;
LAB_0012fdf4:
  if (param_4 != (int *)0x0) {
    *param_4 = local_23c;
  }
  if (bVar1) {
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

