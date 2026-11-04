// rea decompile_all
// name: _parse_extensions
// address: 0x224bac
// body: available
// range: 0x224bac-0x224d0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 _parse_extensions(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58 [5];
  
  local_68 = 0;
  uStack_60 = 0;
  uVar3 = 0;
  local_58[4] = 0;
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar2 = _DERDecodeSeqInit(param_1 + 0x90,local_58 + 4,&local_68);
    if ((iVar2 == 0) && (local_58[4] == 0x2000000000000010)) {
      bVar4 = true;
      local_58[3] = 0x2000000000000011;
      while (iVar2 = _DERDecodeSeqNext(&local_68,local_58), iVar2 == 0) {
        if ((local_58[0] != 0x2000000000000010) ||
           (iVar2 = _DERParseSequenceContentToObject
                              (local_58 + 1,3,&_DERExtensionItemSpecs,&local_b8,0x30,0x30),
           iVar2 != 0)) goto LAB_00224d07;
        cVar1 = _DEROidCompare(&_oidAppleImg4ManifestCertSpec,&local_b8);
        bVar4 = false;
        if (cVar1 != '\0') {
          local_88[0] = 0;
          local_88[1] = 0;
          local_88[2] = 0;
          iVar2 = _DERDecodeItem(&local_98,local_88);
          if ((iVar2 != 0) || (local_88[0] != local_58[3])) goto LAB_00224d07;
          *(undefined4 *)param_2 = (undefined4)local_98;
          *(undefined4 *)((long)param_2 + 4) = local_98._4_4_;
          *(undefined4 *)(param_2 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((long)param_2 + 0xc) = uStack_90._4_4_;
          bVar4 = false;
        }
      }
      if ((iVar2 == 1) && (!bVar4)) {
        return 0;
      }
    }
LAB_00224d07:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

