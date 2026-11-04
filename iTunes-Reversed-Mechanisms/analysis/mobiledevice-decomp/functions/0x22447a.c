// rea decompile_all
// name: _parse_ec_chain
// address: 0x22447a
// body: available
// range: 0x22447a-0x22474d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_parse_ec_chain(ulong param_1,uint param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
               ulong param_7)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_31;
  
  if (param_2 != 0) {
    local_a0 = ~param_1;
    local_98 = ~param_3;
    local_88 = ~param_4;
    local_80 = param_6;
    if (param_6 < param_5) {
      local_80 = param_5;
    }
    local_80 = ~local_80;
    local_70 = ~param_7;
    local_68 = (ulong)((param_2 & 0xffff) << 4) * 3;
    local_48 = 3;
    local_44 = 10;
    local_40 = 2;
    local_3c = 2;
    lVar6 = 8;
    local_50 = 0x60;
    uVar7 = 0;
    local_90 = param_3;
    local_78 = param_6;
    do {
      uVar2 = lVar6 - 8;
      local_60 = param_1;
      local_58 = param_5;
      if ((local_a0 < uVar2) || (local_98 < uVar7)) {
LAB_00224749:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar1 = local_90 + uVar7;
      iVar5 = _DERParseSequenceToObject
                        (param_1,local_48,&_DERSignedCertCrlItemSpecs,lVar1,0x30,0x30);
      local_38 = 0xffffffff;
      if (iVar5 != 0) {
        return 0xffffffff;
      }
      if (local_88 < local_50 - 0x60U) goto LAB_00224749;
      iVar5 = _DERParseSequenceToObject(lVar1,local_44,&_DERTBSCertItemSpecs,param_4,0xa0,0xa0);
      if (iVar5 != 0) {
        return local_38;
      }
      if (local_80 < uVar2) goto LAB_00224749;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_31 = '\0';
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      iVar5 = _DERParseSequenceContentToObject
                        (param_4 + 0x60,local_40,&_DERSubjPubKeyInfoItemSpecs,&local_f8,0x20,0x20);
      if (iVar5 != 0) {
        return local_38;
      }
      iVar5 = _DERParseSequenceContentToObject
                        (&local_f8,local_3c,&_DERAlgorithmIdItemSpecs,&local_d8,0x20,0x20);
      if (iVar5 != 0) {
        return local_38;
      }
      cVar4 = _DEROidCompare(&local_d8,&_oidEcPubKey);
      if (cVar4 == '\0') {
        return local_38;
      }
      iVar5 = _DERParseBitString(&local_e8,local_58,&local_31);
      if (iVar5 != 0) {
        return local_38;
      }
      if (local_31 != '\0') {
        return local_38;
      }
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      iVar5 = _DERDecodeItem(&local_c8,&local_b8);
      if (iVar5 != 0) {
        return local_38;
      }
      *(undefined8 *)((local_78 - 8) + lVar6) = uStack_b0;
      *(undefined8 *)(local_78 + lVar6) = local_a8;
      if (local_70 < uVar2) goto LAB_00224749;
      iVar5 = _parse_extensions(param_4,param_7 + lVar6 + -8);
      if (iVar5 != 0) {
        return local_38;
      }
      param_1 = local_60 + 0x10;
      uVar7 = uVar7 + 0x30;
      param_4 = param_4 + 0xa0;
      param_5 = local_58 + 0x10;
      lVar6 = lVar6 + 0x10;
      local_50 = local_50 + 0xa0;
    } while (local_68 != uVar7);
  }
  return 0;
}

