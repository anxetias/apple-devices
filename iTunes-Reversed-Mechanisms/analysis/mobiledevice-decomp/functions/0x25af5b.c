// rea decompile_all
// name: _CreateYonkersMeasurementDict
// address: 0x25af5b
// body: available
// range: 0x25af5b-0x25b12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25b12b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _CreateYonkersMeasurementDict(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  void *data;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  CC_SHA256_CTX local_d0;
  undefined8 local_68;
  undefined8 *local_60;
  uchar local_58 [32];
  long local_38;
  
  puVar2 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  puVar1 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_60 = param_2;
  lVar3 = _CFDictionaryCreateMutable
                    (uVar7,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  lVar4 = _CFDictionaryCreateMutable(0,0,puVar1,puVar2);
  if ((lVar4 == 0) || (lVar3 == 0)) {
    uVar8 = 3;
    pvVar9 = (void *)0x0;
    data = (void *)0x0;
    if (lVar3 == 0) goto LAB_0025b0c9;
  }
  else {
    data = (void *)0x0;
    uVar8 = 2;
    local_68 = uVar7;
    if ((param_1 != 0) && (local_60 != (undefined8 *)0x0)) {
      sVar5 = _CFDataGetLength(param_1);
      data = _calloc(sVar5,1);
      if (data == (void *)0x0) {
        uVar8 = 3;
        data = (void *)0x0;
      }
      else {
        _CFDataGetBytes(param_1,0,sVar5,data);
        if (sVar5 < 0x100000) {
          _CC_SHA256_Init(&local_d0);
          _CC_SHA256_Update(&local_d0,data,(CC_LONG)sVar5);
          _CC_SHA256_Final(local_58,&local_d0);
        }
        lVar6 = _CFDataCreate(local_68,local_58,0x20);
        if (lVar6 == 0) {
          uVar8 = 8;
        }
        else {
          _CFDictionarySetValue(lVar3,&cf_Digest,lVar6);
          _CFDictionarySetValue(lVar4,&cf_MeasurementDictPatch,lVar3);
          uVar7 = _SavageSafeRetain(lVar4);
          *local_60 = uVar7;
          _CFRelease(lVar6);
          uVar8 = 0;
        }
      }
    }
  }
  _CFRelease(lVar3);
  pvVar9 = data;
LAB_0025b0c9:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (pvVar9 != (void *)0x0) {
    _free(pvVar9);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

