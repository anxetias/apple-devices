// rea decompile_all
// name: _Img4EncodeItemPropertyData
// address: 0x242c44
// body: available
// range: 0x242c44-0x242d76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x242d72 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeItemPropertyData(int *param_1,int param_2,uint param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  void *local_48;
  uint local_40;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_3c = 0;
  local_40 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18
  ;
  local_48 = (void *)0x0;
  if (param_5 == 0 || (param_4 == 0 || param_1 == (int *)0x0)) {
    iVar1 = 0x66;
  }
  else if (*param_1 == param_2) {
    lVar2 = _DEREncoderCreate(0);
    if (lVar2 != 0) {
      iVar1 = _DEREncoderAddData(lVar2,0,0x16,&local_40,4,0);
      if (((iVar1 == 0) && (iVar1 = _DEREncoderAddData(lVar2,0,4,param_4,param_5,0), iVar1 == 0)) &&
         (iVar1 = _DEREncoderCreateEncodedBuffer(lVar2,&local_48,&local_3c), iVar1 == 0)) {
        iVar1 = _Img4EncodeItemProperty(param_1,param_3,local_48,local_3c);
      }
      goto LAB_00242d3a;
    }
    iVar1 = 2;
  }
  else {
    iVar1 = 0x65;
  }
  lVar2 = 0;
LAB_00242d3a:
  _DEREncoderDestroy(lVar2);
  if (local_48 != (void *)0x0) {
    _free(local_48);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

