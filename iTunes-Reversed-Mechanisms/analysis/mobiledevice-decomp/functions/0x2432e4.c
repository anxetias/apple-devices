// rea decompile_all
// name: _Img4EncodeCreatePayload
// address: 0x2432e4
// body: available
// range: 0x2432e4-0x243478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeCreatePayload
              (char *param_1,char *param_2,long param_3,undefined4 param_4,long param_5,
              undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = 0x65;
  if ((param_3 == 0 || (param_2 == (char *)0x0 || param_1 == (char *)0x0)) ||
     (sVar3 = _strlen(param_1), sVar3 != 4)) {
LAB_002433a8:
    lVar4 = 0;
  }
  else {
    lVar4 = _DEREncoderCreate(0);
    iVar1 = 2;
    if (lVar4 == 0) goto LAB_002433a8;
    lVar5 = _DEREncoderCreate(0);
    if (lVar5 != 0) {
      iVar1 = _DEREncoderAddData(lVar4,0,0x16,&_kImg4TagStr_IM4P,4,0);
      if ((iVar1 == 0) && (iVar1 = _DEREncoderAddData(lVar4,0,0x16,param_1,4,0), iVar1 == 0)) {
        sVar3 = _strlen(param_2);
        iVar1 = _DEREncoderAddData(lVar4,0,0x16,param_2,sVar3 & 0xffffffff,0);
        if (((iVar1 == 0) &&
            (iVar1 = _DEREncoderAddDataNoCopy(lVar4,0,4,param_3,param_4,0), iVar1 == 0)) &&
           (((param_5 == 0 ||
             (iVar1 = _DEREncoderAddDataNoCopy(lVar4,0,4,param_5,param_6,0), iVar1 == 0)) &&
            (iVar1 = _DEREncoderAddDataFromEncoderNoCopy(lVar4,lVar5,0,0x10,1), iVar1 == 0)))) {
          iVar2 = _DEREncoderCreateEncodedBuffer(lVar5,param_7,param_8);
          iVar1 = 100;
          if (iVar2 != 0) {
            iVar1 = iVar2;
          }
        }
      }
      goto LAB_002433ad;
    }
  }
  lVar5 = 0;
LAB_002433ad:
  _DEREncoderDestroy(lVar4);
  _DEREncoderDestroy(lVar5);
  return iVar1;
}

