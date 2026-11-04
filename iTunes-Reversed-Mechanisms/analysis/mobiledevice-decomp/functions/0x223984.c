// rea decompile_all
// name: _parse_chain
// address: 0x223984
// body: available
// range: 0x223984-0x223bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_parse_chain(ulong param_1,uint param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  long lStack_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_31;
  
  if (param_2 != 0) {
    local_98 = ~param_1;
    local_90 = ~param_3;
    local_78 = ~param_4;
    local_68 = ~param_5;
    local_58 = ~param_6;
    local_50 = (ulong)(param_2 & 0xffff);
    uVar4 = 0;
    local_48 = 3;
    local_44 = 10;
    local_40 = 2;
    local_3c = 2;
    local_88 = param_3;
    local_80 = param_1;
    local_70 = param_4;
    local_60 = param_5;
    do {
      uVar7 = uVar4 * 0x10;
      if ((local_98 < uVar7) || (local_90 < uVar4 * 0x30)) {
LAB_00223beb:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar5 = uVar4 * 0x30 + local_88;
      iVar3 = _DERParseSequenceToObject
                        (local_80 + uVar7,local_48,&_DERSignedCertCrlItemSpecs,lVar5,0x30,0x30);
      local_38 = 0xffffffff;
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      if (local_78 < uVar4 * 0xa0) goto LAB_00223beb;
      lVar6 = uVar4 * 0xa0 + local_70;
      iVar3 = _DERParseSequenceToObject(lVar5,local_44,&_DERTBSCertItemSpecs,lVar6,0xa0,0xa0);
      if (iVar3 != 0) {
        return local_38;
      }
      if (local_68 < uVar7) goto LAB_00223beb;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_31 = '\0';
      local_a8 = (char *)0x0;
      lStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      iVar3 = _DERParseSequenceContentToObject
                        (lVar6 + 0x60,local_40,&_DERSubjPubKeyInfoItemSpecs,&local_d8,0x20,0x20);
      if (iVar3 != 0) {
        return local_38;
      }
      iVar3 = _DERParseSequenceContentToObject
                        (&local_d8,local_3c,&_DERAlgorithmIdItemSpecs,&local_b8,0x20,0x20);
      if (iVar3 != 0) {
        return local_38;
      }
      cVar2 = _DEROidCompare(&local_b8,&_oidRsa);
      if (cVar2 == '\0') {
        return local_38;
      }
      if (lStack_a0 != 0) {
        if (lStack_a0 != 2) {
          return local_38;
        }
        if (*local_a8 != '\x05') {
          return local_38;
        }
        if (local_a8 == (char *)0xffffffffffffffff) goto LAB_00223beb;
        if (local_a8[1] != '\0') {
          return local_38;
        }
      }
      iVar3 = _DERParseBitString(&local_c8,local_60 + uVar7,&local_31);
      if (iVar3 != 0) {
        return local_38;
      }
      if (local_31 != '\0') {
        return local_38;
      }
      if (local_58 < uVar7) goto LAB_00223beb;
      iVar3 = _parse_extensions(lVar6,uVar7 + param_6);
      if (iVar3 != 0) {
        return local_38;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_50);
  }
  return 0;
}

