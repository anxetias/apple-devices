// rea decompile_all
// name: _AMAuthInstallApImg4CreateStitchTicket
// address: 0x1a1793
// body: available
// range: 0x1a1793-0x1a1b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a1b0b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallApImg4CreateStitchTicket(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar7 = 0;
  local_158 = 0;
  local_180 = 0;
  local_150 = 0;
  lVar10 = 0;
  local_140 = 0;
  lVar9 = 0;
  local_148 = 0;
  local_178 = param_3;
  if (param_2 != 0) {
    lVar7 = 0;
    lVar10 = _DEREncoderCreate(0);
    if (lVar10 == 0) {
      lVar10 = 0;
      local_140 = 0;
      lVar9 = 0;
      local_148 = 0;
    }
    else {
      cVar1 = _CFStringGetCString(&cf_IMG4,local_138,0x100,0x8000100);
      local_148 = lVar10;
      if (cVar1 == '\0') {
LAB_001a1874:
        iVar2 = _DEREncoderCreateEncodedBuffer(lVar10,&local_158,&local_160);
        if ((iVar2 != 0) || (lVar10 = _CFDataCreateMutable(param_1,0), lVar10 == 0))
        goto LAB_001a1af5;
        local_170 = param_1;
        _CFDataAppendBytes(lVar10,local_158,local_160);
        uVar5 = _CFDataGetBytePtr(param_2);
        uVar6 = _CFDataGetLength(param_2);
        _CFDataAppendBytes(lVar10,uVar5,uVar6);
        if (local_178 != 0) {
          lVar9 = _DEREncoderCreate(0);
          lVar7 = local_178;
          if (lVar9 != 0) {
            uVar5 = _CFDataGetBytePtr(local_178);
            uVar3 = _CFDataGetLength(lVar7);
            lVar7 = 0;
            iVar2 = _DEREncoderAddData(lVar9,2,0,uVar5,uVar3,1);
            local_140 = lVar9;
            if (iVar2 == 0) {
              iVar2 = _DEREncoderCreateEncodedBuffer(lVar9,&local_150,&local_15c);
              if ((iVar2 == 0) && (lVar7 = _CFDataCreate(local_170,local_150,local_15c), lVar7 != 0)
                 ) {
                uVar5 = _CFDataGetBytePtr(lVar7);
                uVar6 = _CFDataGetLength(lVar7);
                _CFDataAppendBytes(lVar10,uVar5,uVar6);
                goto LAB_001a19c7;
              }
              lVar7 = 0;
            }
            goto LAB_001a1b03;
          }
          goto LAB_001a1af8;
        }
        local_140 = 0;
        lVar7 = 0;
LAB_001a19c7:
        lVar9 = _DEREncoderCreate(0);
        if (lVar9 != 0) {
          uVar5 = _CFDataGetBytePtr(lVar10);
          uVar3 = _CFDataGetLength(lVar10);
          iVar2 = _DEREncoderAddDataNoCopy(lVar9,0,0x10,uVar5,uVar3,1);
          if (((iVar2 == 0) &&
              (iVar2 = _DEREncoderCreateEncodedBuffer(lVar9,&local_180,&local_164), iVar2 == 0)) &&
             (lVar8 = _CFDataCreateWithBytesNoCopy
                                (local_170,local_180,local_164,
                                 *(undefined8 *)PTR__kCFAllocatorMalloc_004410f0), lVar8 != 0))
          goto LAB_001a1a5a;
          goto LAB_001a1a51;
        }
      }
      else {
        sVar4 = _strlen(local_138);
        iVar2 = _DEREncoderAddData(lVar10,0,0x16,local_138,sVar4 & 0xffffffff,0);
        if (iVar2 == 0) goto LAB_001a1874;
        _AMAuthInstallApImg4CreateStitchTicket_cold_1();
LAB_001a1af5:
        lVar10 = 0;
LAB_001a1af8:
        lVar7 = 0;
        local_140 = 0;
      }
LAB_001a1b03:
      lVar9 = 0;
    }
  }
LAB_001a1a51:
  lVar8 = 0;
  _SafeRelease(0);
LAB_001a1a5a:
  _DEREncoderDestroy(local_148);
  _DEREncoderDestroy(lVar9);
  _DEREncoderDestroy(local_140);
  _SafeFree(local_158);
  _SafeFree(local_150);
  _SafeRelease(lVar10);
  _SafeRelease(lVar7);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

