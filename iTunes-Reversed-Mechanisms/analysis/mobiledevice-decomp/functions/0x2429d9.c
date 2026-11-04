// rea decompile_all
// name: _Img4EncodeDictionary
// address: 0x2429d9
// body: available
// range: 0x2429d9-0x242be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x242be2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeDictionary
              (int param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5,
              long param_6)

{
  int iVar1;
  long lVar2;
  void *local_58;
  void *local_50;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  local_44 = 0;
  local_50 = (void *)0x0;
  local_58 = (void *)0x0;
  iVar1 = 0x65;
  if (param_6 == 0 || param_5 == 0) goto LAB_00242b8f;
  local_3c = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  if (param_1 == 2) {
    lVar2 = _DEREncoderCreate(0);
    if (lVar2 == 0) {
      iVar1 = 0x66;
    }
    else {
      iVar1 = _DEREncoderAddData(lVar2,0,0x16,&local_3c,4,0);
      if (((iVar1 == 0) && (iVar1 = _DEREncoderAddData(lVar2,0,0x10,param_3,param_4,1), iVar1 == 0))
         && (iVar1 = _DEREncoderCreateEncodedBuffer(lVar2,&local_50,&local_40), iVar1 == 0))
      goto LAB_00242b39;
    }
  }
  else {
    lVar2 = _DEREncoderCreate(1);
    if (lVar2 == 0) {
      _DEREncoderDestroy(0);
      iVar1 = 0x66;
      goto LAB_00242b8f;
    }
    iVar1 = _DEREncoderAddData(lVar2,0,0x16,&local_3c,4,0);
    if (((iVar1 == 0) && (iVar1 = _DEREncoderAddData(lVar2,0,0x11,param_3,param_4,1), iVar1 == 0))
       && (iVar1 = _DEREncoderCreateEncodedBuffer(lVar2,&local_50,&local_40), iVar1 == 0)) {
      _DEREncoderDestroy(lVar2);
    }
    else {
      _DEREncoderDestroy(lVar2);
      if (iVar1 != 100) goto LAB_00242b8f;
    }
    lVar2 = 0;
LAB_00242b39:
    iVar1 = _Img4EncodeSequence(local_50,local_40,&local_58,&local_44);
    if (iVar1 == 100) {
      iVar1 = _Img4EncodePrivate(param_2,local_58,local_44,param_5,param_6);
    }
  }
  if (lVar2 != 0) {
    _DEREncoderDestroy(lVar2);
  }
LAB_00242b8f:
  if (local_50 != (void *)0x0) {
    _free(local_50);
    local_50 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    _free(local_58);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

