// rea decompile_all
// name: __AMAuthInstallMonetLocalCopyCertChain
// address: 0x2978a9
// body: available
// range: 0x2978a9-0x297aa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallMonetLocalCopyCertChain(long param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  undefined8 local_38;
  
  pcVar7 = &cf_bb_monet_rom_enandprog_attestation;
  if (param_2 == 1) {
    pcVar7 = &cf_bb_monet_rom_dbl_attestation;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  lVar8 = 0x1000;
  if (((((iVar1 != 0xe50e1) && (iVar1 != 0x1440e1)) && (iVar1 != 0x1720e1)) &&
      ((iVar1 != 0x19f0e1 && (iVar1 != 0x1fe0e1)))) && (iVar1 != 0x2af0e1)) {
    lVar8 = 0x1800;
  }
  local_38 = in_RAX;
  uVar2 = _CFGetAllocator(param_1);
  lVar3 = _CFDataCreateMutable(uVar2,lVar8);
  if (lVar3 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = _AMAuthInstallCryptoGetCertData(param_1,pcVar7,&local_38);
    if (iVar1 == 0) {
      uVar2 = _CFDataGetBytePtr(local_38);
      uVar4 = _CFDataGetLength(local_38);
      _CFDataAppendBytes(lVar3,uVar2,uVar4);
      iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
      if ((((iVar1 != 0x3b0e1) && (iVar1 != 0x7f0e1)) &&
          ((iVar1 != 0xe50e1 &&
           (((iVar1 != 0x1440e1 && (iVar1 != 0x1720e1)) && (iVar1 != 0x19f0e1)))))) &&
         (((iVar1 != 0x1fe0e1 && (iVar1 != 0x2af0e1)) &&
          ((iVar1 != 0x7f50e1 && ((iVar1 != 0x9210e1 && (iVar1 != 0x9540e1)))))))) {
        iVar1 = _AMAuthInstallCryptoGetCertData
                          (param_1,&cf_bb_monet_rom_general_attestationca,&local_38);
        if (iVar1 != 0) goto LAB_00297a82;
        uVar2 = _CFDataGetBytePtr(local_38);
        uVar4 = _CFDataGetLength(local_38);
        _CFDataAppendBytes(lVar3,uVar2,uVar4);
      }
      iVar1 = _AMAuthInstallCryptoGetCertData(param_1,&cf_bb_monet_rom_general_root,&local_38);
      if (iVar1 == 0) {
        uVar2 = _CFDataGetBytePtr(local_38);
        uVar4 = _CFDataGetLength(local_38);
        _CFDataAppendBytes(lVar3,uVar2,uVar4);
        iVar1 = _CFDataGetLength(lVar3);
        uVar6 = (ulong)(uint)((int)lVar8 - iVar1);
        _CFDataIncreaseLength(lVar3,uVar6);
        lVar5 = _CFDataGetMutableBytePtr(lVar3);
        _memset((void *)((lVar8 + lVar5) - uVar6),0xff,uVar6);
        uVar2 = _CFRetain(lVar3);
        *param_3 = uVar2;
        iVar1 = 0;
      }
    }
  }
LAB_00297a82:
  _SafeRelease(lVar3);
  return iVar1;
}

