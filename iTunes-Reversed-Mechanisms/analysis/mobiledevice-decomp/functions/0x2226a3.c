// rea decompile_all
// name: _Img4DecodeInitManifestCommon
// address: 0x2226a3
// body: available
// range: 0x2226a3-0x2227b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeInitManifestCommon(long param_1,long param_2,char param_3,long param_4,int param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58;
  long lStack_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  uVar2 = 6;
  if (param_4 != 0 && param_1 != 0) {
    local_40 = param_1;
    local_38 = param_2;
    ___bzero(param_4,0x1c8);
    if (param_5 == 0x494d3443) {
      if (param_3 == '\0') {
        uVar2 = _DERImg4DecodeUnsignedCertificate(&local_40,param_4 + 0xe8);
      }
      else {
        uVar2 = _DERImg4DecodeCertificate();
      }
    }
    else {
      if (param_5 != 0x494d344d) {
        return 2;
      }
      if (param_3 == '\0') {
        uVar2 = _DERImg4DecodeUnsignedManifest(&local_40,param_4 + 0xe8);
      }
      else {
        uVar2 = _DERImg4DecodeManifest();
      }
    }
    if ((int)uVar2 == 0) {
      if (*(long *)(param_4 + 0x108) == 0) {
        uVar2 = 3;
      }
      else {
        local_58 = 0;
        lStack_50 = 0;
        local_48 = 0;
        local_40 = param_1;
        local_38 = param_2;
        uVar2 = _DERDecodeItemPartialBufferGetLength(&local_40,&local_58,0);
        if ((int)uVar2 == 0) {
          *(long *)(param_4 + 0x18) = param_1;
          lVar3 = (lStack_50 - param_1) + local_48;
          if (CARRY8(lStack_50 - param_1,local_48)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          *(long *)(param_4 + 0x20) = lVar3;
          uVar2 = 7;
          if (lVar3 == param_2) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}

