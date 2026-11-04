// rea decompile_all
// name: _Img4EncodeStitch
// address: 0x2438db
// body: available
// range: 0x2438db-0x243a80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x243a7c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeStitch(long param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                     undefined4 param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_3c = 0x34474d49;
  if (param_7 == 0 || param_1 == 0) {
    iVar2 = 0x65;
  }
  else {
    lVar3 = _DEREncoderCreate(0);
    iVar2 = 0x66;
    if (lVar3 != 0) {
      lVar4 = 0;
      iVar1 = _DEREncoderAddData(lVar3,0,0x16,&local_3c,4,0);
      if (iVar1 == 0) {
        lVar4 = 0;
        iVar1 = _DEREncoderAddDataNoCopy(lVar3,0x103,0,param_1,param_2,0);
        if (iVar1 == 0) {
          if (param_3 != 0) {
            lVar4 = 0;
            iVar1 = _DEREncoderAddData(lVar3,2,0,param_3,param_4,1);
            if (iVar1 != 0) goto LAB_00243994;
          }
          if ((param_5 == 0) ||
             (iVar1 = _DEREncoderAddData(lVar3,2,1,param_5,param_6,1), iVar1 == 0)) {
            lVar4 = _DEREncoderCreate(0);
            if (lVar4 == 0) {
              lVar4 = 0;
              iVar1 = iVar2;
            }
            else {
              iVar1 = _DEREncoderAddDataFromEncoderNoCopy(lVar3,lVar4,0,0x10,1);
              if (iVar1 == 0) {
                iVar2 = _DEREncoderCreateEncodedBuffer(lVar4,param_7,param_8);
                iVar1 = 100;
                if (iVar2 != 0) {
                  iVar1 = iVar2;
                }
              }
            }
          }
          else {
            lVar4 = 0;
          }
        }
      }
      goto LAB_00243994;
    }
  }
  lVar4 = 0;
  lVar3 = 0;
  iVar1 = iVar2;
LAB_00243994:
  _DEREncoderDestroy(lVar3);
  _DEREncoderDestroy(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

