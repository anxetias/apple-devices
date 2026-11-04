// rea decompile_all
// name: _DERImg4DecodeProperty
// address: 0x2215f9
// body: available
// range: 0x2215f9-0x22173b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _DERImg4DecodeProperty(ulong *param_1,ulong param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long lStack_40;
  uint local_34;
  
  iVar2 = 6;
  if ((param_1 != (ulong *)0x0) && (param_3 != (undefined4 *)0x0)) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_48 = 0;
    lStack_40 = 0;
    local_50 = 0;
    local_34 = 0;
    iVar2 = _DERDecodeSeqInit();
    if (((iVar2 == 0) &&
        (((iVar4 = 2, iVar2 = iVar4, local_50 == 0x2000000000000010 &&
          (iVar2 = _DERDecodeSeqNext(&local_48,&local_68), iVar2 == 0)) &&
         (iVar2 = iVar4, local_68 == 0x16)))) &&
       ((iVar2 = _DERParseInteger(&uStack_60,&local_34), iVar2 == 0 &&
        (iVar2 = iVar4, ((ulong)local_34 | 0xe000000000000000) == param_2)))) {
      *param_3 = (undefined4)uStack_60;
      param_3[1] = uStack_60._4_4_;
      param_3[2] = (undefined4)local_58;
      param_3[3] = local_58._4_4_;
      *(undefined8 *)(param_3 + 4) = 0;
      iVar2 = _DERDecodeSeqNext(&local_48,&local_88);
      if (iVar2 == 0) {
        *(undefined8 *)(param_3 + 10) = local_88;
        param_3[6] = (undefined4)uStack_80;
        param_3[7] = uStack_80._4_4_;
        param_3[8] = (undefined4)local_78;
        param_3[9] = local_78._4_4_;
        iVar3 = _DERDecodeSeqNext(&local_48);
        iVar2 = iVar4;
        if (iVar3 == 1) {
          if (CARRY8(param_1[1],*param_1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          iVar2 = 7;
          if (lStack_40 == param_1[1] + *param_1) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  return iVar2;
}

