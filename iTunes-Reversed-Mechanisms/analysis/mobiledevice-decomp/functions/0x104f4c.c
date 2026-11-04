// rea decompile_all
// name: __AMDeviceProxyCreate
// address: 0x104f4c
// body: available
// range: 0x104f4c-0x10513f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x104f89 to 0x105164 __AMDeviceProxyCreateBootedOSProxy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x104f9f to 0x105219 __AMDeviceProxyCreateRestoreOSProxy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x104fb5 to 0x105269 __AMDeviceProxyCreateRecoveryProxy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1050f7 to 0x10531e __AMDeviceProxyCreateRemoteServiceProxy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10510d to 0x1053d3 __AMDeviceProxyCreateBootedLockdownlessOSProxy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x105123 to 0x105488 __AMDeviceProxyCreatePortDFUProxy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * __AMDeviceProxyCreate(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  lVar1 = _CFGetTypeID();
  if (__AMDeviceTypeID == 0) {
    __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
  }
  if (lVar1 == __AMDeviceTypeID) {
    puVar2 = (undefined8 *)__AMDeviceProxyCreateBootedOSProxy(param_1);
    return puVar2;
  }
  lVar3 = _AMRestoreModeDeviceGetTypeID();
  if (lVar1 == lVar3) {
    puVar2 = (undefined8 *)__AMDeviceProxyCreateRestoreOSProxy(param_1);
    return puVar2;
  }
  lVar3 = _AMRecoveryModeDeviceGetTypeID();
  if (lVar1 != lVar3) {
    lVar3 = _AMDFUModeDeviceGetTypeID();
    if (lVar1 == lVar3) {
      if (param_1 == 0) {
        return (undefined8 *)0x0;
      }
      puVar2 = operator_new(0x28);
      *puVar2 = &PTR__AMDeviceProxy_004476f0;
      puVar2[1] = 0;
      puVar2[2] = 0x100000001;
      puVar2[3] = 0;
      uVar4 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      puVar2[3] = uVar4;
      *puVar2 = &PTR__AMDeviceProxyCF_00447b80;
      puVar2[4] = 0;
      uVar4 = _CFRetain(param_1);
      puVar2[4] = uVar4;
      ppuVar5 = &PTR__AMDFUDeviceProxy_00447a48;
    }
    else {
      lVar3 = _AMTADModeDeviceGetTypeID();
      if (lVar1 != lVar3) {
        if (lVar1 == __MDRemoteServiceDeviceTypeID) {
          puVar2 = (undefined8 *)__AMDeviceProxyCreateRemoteServiceProxy(param_1);
          return puVar2;
        }
        lVar3 = _AMBootedModeDeviceGetTypeID();
        if (lVar1 == lVar3) {
          puVar2 = (undefined8 *)__AMDeviceProxyCreateBootedLockdownlessOSProxy(param_1);
          return puVar2;
        }
        lVar3 = _AMPortDFUModeDeviceGetTypeID();
        if (lVar1 == lVar3) {
          puVar2 = (undefined8 *)__AMDeviceProxyCreatePortDFUProxy(param_1);
          return puVar2;
        }
        _AMRLog(3,&cf_Can_tcreateproxyfromunknownCFTypeRef);
        return (undefined8 *)0x0;
      }
      if (param_1 == 0) {
        return (undefined8 *)0x0;
      }
      puVar2 = operator_new(0x28);
      *puVar2 = &PTR__AMDeviceProxy_004476f0;
      puVar2[1] = 0;
      puVar2[2] = 0x100000001;
      puVar2[3] = 0;
      uVar4 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      puVar2[3] = uVar4;
      *puVar2 = &PTR__AMDeviceProxyCF_00447dc0;
      puVar2[4] = 0;
      uVar4 = _CFRetain(param_1);
      puVar2[4] = uVar4;
      ppuVar5 = &PTR__AMTADDeviceProxy_00447c88;
    }
    *puVar2 = ppuVar5;
    return puVar2;
  }
  puVar2 = (undefined8 *)__AMDeviceProxyCreateRecoveryProxy(param_1);
  return puVar2;
}

