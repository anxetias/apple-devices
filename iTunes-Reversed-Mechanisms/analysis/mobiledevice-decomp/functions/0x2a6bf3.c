// rea decompile_all
// name: _Img4DecodePayloadPropertiesFindItemWithTag
// address: 0x2a6bf3
// body: available
// range: 0x2a6bf3-0x2a6e3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4DecodePayloadPropertiesFindItemWithTag(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long local_118 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48 [3];
  
  iVar3 = 6;
  iVar1 = iVar3;
  if (param_1 != (long *)0x0) {
    local_f8 = 0;
    uStack_f0 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    if ((((param_3 != (long *)0x0) && (*param_1 != 0)) &&
        (iVar1 = _DERImg4DecodeContentFindItemWithTag(param_1,0x2000000000000010,local_48),
        iVar1 == 0)) &&
       (((iVar1 = 2, local_48[0] != 0 &&
         (iVar1 = _DERImg4DecodeContentFindItemWithTag(local_48,0x16,&local_58), iVar1 == 0)) &&
        ((iVar2 = _DERImg4DecodeTagCompare(&local_58,0x50415950), iVar1 = iVar3, iVar2 == 0 &&
         ((iVar1 = _DERImg4DecodeContentFindItemWithTag(local_48,0x2000000000000011,&local_e8),
          iVar1 == 0 &&
          (local_78 = param_2, local_70 = param_3,
          iVar1 = _DERDecodeSeqContentInit(&local_e8,&local_f8), iVar1 == 0)))))))) {
      do {
        do {
          while (iVar3 = _DERDecodeSeqNext(&local_f8,&local_d8), iVar3 != 0) {
            if (iVar3 == 1) {
              return 1;
            }
          }
          iVar3 = _DERDecodeItem(&uStack_d0,&local_b8);
        } while (iVar3 != 0);
        iVar3 = _DERImg4DecodeContentFindItemWithTag(&uStack_b0,0x16,&local_58);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = _DERImg4DecodeTagCompare(&local_58,local_78);
      } while ((((iVar3 != 0) ||
                (iVar3 = _DERDecodeSeqContentInit(&uStack_b0,&local_68), iVar3 != 0)) ||
               (iVar3 = _DERDecodeSeqNext(&local_68,local_118), iVar3 != 0)) ||
              ((local_118[0] != 0x16 || (iVar3 = _DERDecodeSeqNext(&local_68,&local_98), iVar3 != 0)
               )));
      iVar1 = 2;
      if (lStack_90 != 0) {
        *local_70 = lStack_90;
        local_70[1] = local_88;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

