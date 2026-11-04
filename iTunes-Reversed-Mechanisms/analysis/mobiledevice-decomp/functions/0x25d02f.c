// rea decompile_all
// name: CreateMeasurementDict
// address: 0x25d02f
// body: available
// range: 0x25d02f-0x25d392 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25d38e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* CreateMeasurementDict(__CFData const*, __CFDictionary const**) */

undefined8 CreateMeasurementDict(__CFData *param_1,__CFDictionary **param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  __CFData *p_Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  __CFData *p_Var9;
  long lVar10;
  __CFDictionary *p_Var11;
  uchar *puVar12;
  undefined8 uStack_d0;
  undefined8 local_98;
  ulong uStack_90;
  __CFData *local_80;
  uchar local_78 [64];
  long local_38;
  
  puVar3 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  puVar2 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_98 = 0;
  uStack_90 = 0;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_80 = param_1;
  lVar5 = _CFDictionaryCreateMutable
                    (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  lVar6 = _CFDictionaryCreateMutable(uVar1,0,puVar2,puVar3);
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  lVar7 = _CFDictionaryCreateMutable(0,0,puVar2,puVar3);
  p_Var4 = local_80;
  if ((lVar7 == 0) || (lVar5 == 0)) {
    uStack_d0 = 3;
LAB_0025d368:
    lVar8 = 0;
    puVar12 = (uchar *)0x0;
  }
  else {
    lVar8 = 0;
    uStack_d0 = 2;
    if (local_80 == (__CFData *)0x0) goto LAB_0025d368;
    puVar12 = (uchar *)0x0;
    p_Var9 = (__CFData *)0x0;
    if (param_2 == (__CFDictionary **)0x0) goto LAB_0025d2cc;
    _CFDataGetBytes(local_80,0,0x10,&local_98);
    if (local_98 >> 0x20 == 0) {
      uStack_d0 = 4;
      goto LAB_0025d368;
    }
    puVar12 = _calloc(local_98 >> 0x20,1);
    if (puVar12 == (uchar *)0x0) {
      uStack_d0 = 3;
      goto LAB_0025d368;
    }
    _CFDataGetBytes(p_Var4,0x10,local_98._4_4_,puVar12);
    _computePatchDigest(puVar12,local_98 >> 0x20,local_78 + 0x20);
    lVar8 = _CFDataCreate(uVar1,local_78 + 0x20,0x20);
    uStack_d0 = 8;
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      _CFDictionarySetValue(lVar5,&cf_Digest,lVar8);
      _CFDictionarySetValue(lVar7,&cf_MeasurementDictPatch,lVar5);
      if ((uStack_90 & 0xffffffff) != 0) {
        p_Var9 = _calloc(uStack_90 & 0xffffffff,1);
        if (p_Var9 == (__CFData *)0x0) {
          uStack_d0 = 3;
          p_Var9 = (__CFData *)0x0;
        }
        else {
          _CFDataGetBytes(p_Var4,(local_98 >> 0x20) + 0x10,uStack_90 & 0xffffffff,p_Var9);
          local_80 = p_Var9;
          _computePatchDigest((uchar *)p_Var9,uStack_90 & 0xffffffff,local_78);
          lVar10 = _CFDataCreate(uVar1,local_78,0x20);
          if (lVar10 == 0) {
            uStack_d0 = 8;
            p_Var9 = local_80;
          }
          else {
            _CFDictionarySetValue(lVar6,&cf_Digest,lVar10);
            _CFDictionarySetValue(lVar7,&cf_MeasurementDictPatchVT,lVar6);
            p_Var11 = (__CFDictionary *)_SavageSafeRetain(lVar7);
            *param_2 = p_Var11;
            _CFRelease(lVar10);
            uStack_d0 = 0;
            p_Var9 = local_80;
          }
        }
        goto LAB_0025d2cc;
      }
      p_Var11 = (__CFDictionary *)_SavageSafeRetain(lVar7);
      *param_2 = p_Var11;
      uStack_d0 = 0;
    }
  }
  p_Var9 = (__CFData *)0x0;
LAB_0025d2cc:
  if (lVar6 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar7 != 0) {
    _CFRelease();
  }
  if (puVar12 != (uchar *)0x0) {
    _free(puVar12);
  }
  if (p_Var9 != (__CFData *)0x0) {
    _free(p_Var9);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_d0;
}

