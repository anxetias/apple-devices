// rea decompile_all
// name: _Img4DecodeCopyManifestTrustedBootPolicyMeasurement
// address: 0x2a7200
// body: available
// range: 0x2a7200-0x2a7395 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a7391 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeCopyManifestTrustedBootPolicyMeasurement
          (long param_1,long param_2,long param_3,void *param_4,ulong param_5)

{
  undefined8 uStack_1b0;
  code *local_1a0;
  code *local_198;
  code *local_190;
  undefined **local_188;
  long local_180;
  long local_178;
  undefined1 *local_170;
  ulong local_168;
  void *local_160;
  undefined *local_158;
  undefined8 local_150;
  long local_148;
  code **local_140;
  undefined1 local_138 [48];
  undefined1 local_108 [208];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_1b0 = 6;
  if ((param_4 != (void *)0x0) && (param_5 != 0)) {
    if (param_5 < 0x31) {
      local_168 = param_5;
      local_160 = param_4;
      ___bzero(local_138,0x100);
      local_140 = &local_1a0;
      local_1a0 = _Img4DecodeDigestInit;
      local_198 = _Img4DecodeDigestUpdate;
      local_190 = _Img4DecodeDigestReturnHash;
      local_158 = &_default_manifest_property_exclude;
      local_150 = 0x9c;
      local_148 = param_3;
      uStack_1b0 = _Img4DecodeEvaluateCertificatePropertiesInternal(param_1,&local_158);
      if ((int)uStack_1b0 == 0) {
        uStack_1b0 = 6;
        if ((param_1 != 0) && (param_2 != 0)) {
          local_170 = local_108;
          local_188 = &local_158;
          local_180 = param_2;
          local_178 = param_1;
          uStack_1b0 = (**local_140)(*(undefined8 *)(local_148 + 0x20),&local_170);
          if ((int)uStack_1b0 == 0) {
            uStack_1b0 = _Img4DecodeEvaluateDictionaryProperties
                                   (param_1 + 0x38,0,__Img4DecodeValidateManifestPropertyInterposer,
                                    &local_188);
            if ((int)uStack_1b0 == 0) {
              uStack_1b0 = (*local_140[2])(*(undefined8 *)(local_148 + 0x20),&local_170,0x30,
                                           local_138);
              if ((int)uStack_1b0 == 0) {
                _memcpy(local_160,local_138,local_168);
                uStack_1b0 = 0;
              }
            }
          }
        }
      }
    }
    else {
      uStack_1b0 = 7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uStack_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

