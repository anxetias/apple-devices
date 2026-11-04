// rea decompile_all
// name: _Img4EncodeItemPropertyBool
// address: 0x242eca
// body: available
// range: 0x242eca-0x242fe5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x242fe1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeItemPropertyBool(int *param_1,int param_2,uint param_3,char param_4)

{
  int iVar1;
  long lVar2;
  void *local_48;
  uint local_3c;
  char local_35;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_34 = 0;
  local_35 = -param_4;
  local_3c = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18
  ;
  local_48 = (void *)0x0;
  if (param_1 == (int *)0x0) {
    iVar1 = 0x66;
  }
  else if (*param_1 == param_2) {
    lVar2 = _DEREncoderCreate(0);
    if (lVar2 != 0) {
      iVar1 = _DEREncoderAddData(lVar2,0,0x16,&local_3c,4,0);
      if (((iVar1 == 0) && (iVar1 = _DEREncoderAddData(lVar2,0,1,&local_35,1,0), iVar1 == 0)) &&
         (iVar1 = _DEREncoderCreateEncodedBuffer(lVar2,&local_48,&local_34), iVar1 == 0)) {
        iVar1 = _Img4EncodeItemProperty(param_1,param_3,local_48,local_34);
      }
      goto LAB_00242fab;
    }
    iVar1 = 2;
  }
  else {
    iVar1 = 0x65;
  }
  lVar2 = 0;
LAB_00242fab:
  _DEREncoderDestroy(lVar2);
  if (local_48 != (void *)0x0) {
    _free(local_48);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

