// rea decompile_all
// name: _MISCryptoRSASigningCallBack
// address: 0xbd40b
// body: available
// range: 0xbd40b-0xbd4c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _MISCryptoRSASigningCallBack
              (int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 *param_5,RSA *param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  long local_38;
  
  iVar1 = 0;
  if (param_1 == 0x40) {
    local_38 = 0;
    lVar3 = _CFDataCreateWithBytesNoCopy
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2,param_3,
                       *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
    if (lVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      pcVar4 = _RSA_get_ex_data(param_6,0);
      if (pcVar4 != (code *)0x0) {
        iVar1 = (*pcVar4)(lVar3,&local_38);
        if (iVar1 == 1) {
          uVar2 = _CFDataGetLength(local_38);
          *param_5 = uVar2;
          _CFDataGetBytes(local_38,0,uVar2,param_4);
        }
        if (local_38 != 0) {
          _CFRelease();
        }
      }
      _CFRelease(lVar3);
    }
  }
  return iVar1;
}

