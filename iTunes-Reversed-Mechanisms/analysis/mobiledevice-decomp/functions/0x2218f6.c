// rea decompile_all
// name: _Img4DecodeParseLengthFromBufferWithTag
// address: 0x2218f6
// body: available
// range: 0x2218f6-0x2219fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4DecodeParseLengthFromBufferWithTag
              (long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  long alStack_50 [3];
  long local_38;
  ulong local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_58 = 0;
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  iVar2 = -1;
  if ((((param_1 != 0) && (param_4 != (long *)0x0)) &&
      (local_88 = param_1, local_80 = param_2,
      iVar2 = _DERDecodeItemPartialBufferGetLength(&local_88,&local_58,&local_30), iVar2 == 0)) &&
     (iVar2 = 3, local_30 != 0)) {
    if (local_58 == 0x2000000000000010) {
      iVar2 = _DERDecodeItemPartialBufferGetLength(alStack_50,&local_78,&local_38);
      if ((iVar2 == 0) && (iVar2 = 3, local_38 != 0)) {
        iVar3 = _DERImg4DecodeTagCompare(&uStack_70,param_3);
        iVar2 = 2;
        if (iVar3 == 0) {
          uVar4 = alStack_50[0] - param_1;
          if (local_30 < ~uVar4) {
            if (CARRY8(local_30,uVar4)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            *param_4 = local_30 + uVar4;
            iVar2 = 0;
          }
          else {
            iVar2 = 7;
          }
        }
      }
    }
    else {
      iVar2 = 2;
    }
  }
  return iVar2;
}

