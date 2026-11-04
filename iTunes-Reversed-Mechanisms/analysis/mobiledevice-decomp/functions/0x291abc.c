// rea decompile_all
// name: _AMAuthInstallRecoveryOSLocalPolicyCreateServerRequest
// address: 0x291abc
// body: available
// range: 0x291abc-0x291bd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallRecoveryOSLocalPolicyCreateServerRequest
          (long param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_58 [16];
  undefined8 *local_40;
  undefined8 local_38;
  
  local_40 = param_5;
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = _CFGetAllocator(param_1);
  }
  local_38 = 0;
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  iVar4 = __AMAuthInstallLocalPolicyCreateServerRequestBase(param_1,param_2);
  auVar2._8_8_ = local_58._8_8_;
  auVar2._0_8_ = local_58._0_8_;
  auVar1._8_8_ = local_58._8_8_;
  auVar1._0_8_ = local_58._0_8_;
  uVar7 = 1;
  uVar5 = 0;
  if (((iVar4 == 0) && (local_58 = auVar1, param_3 != 0)) && (local_58 = auVar2, param_4 != 0)) {
    local_58 = _CFUUIDGetUUIDBytes(param_4);
    uVar5 = _CFDataCreate(uVar6,local_58,0x10);
    _CFDictionarySetValue(local_38,&cf_Ap_RecoveryOSPolicyNonceHash,param_3);
    _CFDictionarySetValue(local_38,&cf_Ap_VolumeUUID,uVar5);
    _CFDictionarySetValue(local_38,&cf_Ap_LocalBoot,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    puVar3 = local_40;
    uVar7 = 0;
    if (local_40 != (undefined8 *)0x0) {
      uVar6 = _CFRetain(local_38);
      *puVar3 = uVar6;
    }
  }
  _SafeRelease(uVar5);
  _SafeRelease(local_38);
  return uVar7;
}

