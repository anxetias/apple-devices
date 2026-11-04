// rea decompile_all
// name: _DERImg4DecodeCertificatePropertiesAndPubKey
// address: 0x2a64b5
// body: available
// range: 0x2a64b5-0x2a6664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _DERImg4DecodeCertificatePropertiesAndPubKey
              (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
              undefined8 *param_5,undefined8 *param_6)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_38 = 0;
  local_48 = (undefined1  [16])0x0;
  auVar3._0_4_ = -(uint)((int)((ulong)param_1 >> 0x20) == 0 && (int)param_1 == 0);
  auVar3._4_4_ = -(uint)((int)param_3 == 0 && (int)((ulong)param_3 >> 0x20) == 0);
  auVar3._8_4_ = -(uint)((int)((ulong)param_4 >> 0x20) == 0 && (int)param_4 == 0);
  auVar3._12_4_ = -(uint)((int)param_5 == 0 && (int)((ulong)param_5 >> 0x20) == 0);
  iVar1 = movmskps(in_EAX,auVar3);
  iVar2 = 6;
  if (((iVar1 == 0) && (param_6 != (undefined8 *)0x0)) && (param_2 != 0)) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_a8 = param_1;
    local_a0 = param_2;
    local_58 = param_6;
    local_50 = param_5;
    iVar2 = _DERDecodeItem(&local_a8,local_48);
    if (iVar2 == 0) {
      if (local_48._0_8_ == 0x2000000000000011) {
        iVar2 = _DERParseSequenceContentToObject(local_48 + 8,2,&_DERIM4CItemSpecs,&local_98,0x20,0)
        ;
        if (iVar2 == 0) {
          iVar2 = _DERDecodeItem(&local_98,local_48);
          if ((iVar2 == 0) && (iVar2 = 2, local_48._0_8_ == 0x2000000000000010)) {
            iVar1 = _DERParseSequenceContentToObject
                              (local_48 + 8,2,&_DERCRTPSequenceItemSpecs,&local_78,0x20,0);
            iVar2 = -1;
            if (iVar1 == 0) {
              *param_3 = local_68;
              *param_4 = uStack_60;
              iVar2 = _DERDecodeItem(&local_88,local_48);
              if (iVar2 == 0) {
                iVar2 = 2;
                if (local_48._0_8_ == 4) {
                  *local_50 = local_48._8_8_;
                  *local_58 = local_38;
                  iVar2 = 0;
                }
              }
            }
          }
        }
        else {
          iVar2 = -1;
        }
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}

