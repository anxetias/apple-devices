// rea decompile_all
// name: __AMAuthInstallMonetLocalCreateStitchDataMav20
// address: 0x295ab2
// body: available
// range: 0x295ab2-0x295eba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __AMAuthInstallMonetLocalCreateStitchDataMav20
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
              undefined8 param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 local_110 [76];
  uint local_c4;
  uint local_90 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_4c;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_48 = 0;
  local_68 = 0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  if (((((iVar1 == 0xe50e1) || (iVar1 == 0x1440e1)) || (iVar1 == 0x1720e1)) ||
      ((iVar1 == 0x19f0e1 || (iVar1 == 0x2af0e1)))) || (iVar1 == 0x1fe0e1)) {
    local_60 = param_3;
    local_4c = param_6;
    _CFDataGetBytePtr(param_2);
    uVar2 = _CFGetAllocator(param_1);
    lVar3 = _CFDataCreateMutable(uVar2,0);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = _CFGetAllocator(param_1);
      local_38 = _CFDataCreateMutable(uVar2,0x30);
      if (local_38 != 0) {
        _CFDataSetLength(local_38,0x30);
        iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
        if (((iVar1 == 0xe50e1) || (iVar1 == 0x1440e1)) ||
           ((iVar1 == 0x1720e1 ||
            (((iVar1 == 0x19f0e1 || (iVar1 == 0x2af0e1)) || (iVar1 == 0x1fe0e1)))))) {
          local_58 = param_4;
          local_40 = lVar3;
          _SafeRelease(local_38);
          uVar2 = local_60;
          local_38 = _CFDataCreateMutableCopy
                               (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,local_60);
          uVar4 = _CFDataGetBytePtr(param_5);
          uVar5 = _CFDataGetLength(param_5);
          ___memcpy_chk(local_110,uVar4,uVar5,0xa8);
          local_c4 = (local_c4 & 0xfffffcfb) + (local_4c & 0xff) * 0x100 + 0x104;
          uVar4 = _CFDataGetBytePtr(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
          uVar5 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
          ___memcpy_chk(local_90,uVar4,uVar5,0x28);
          auVar8 = pshufb(ZEXT416(local_90[0]),_DAT_00336dd0);
          local_90[0] = auVar8._0_4_;
          local_70 = 0;
          _AMAuthInstallMonetPrintHashTableHeader(local_110);
          uVar4 = _CFGetAllocator(param_1);
          lVar6 = _CFDataCreateMutable(uVar4,0);
          if (lVar6 == 0) {
            lVar6 = 0;
            iVar1 = 2;
            uVar2 = 0;
            uVar4 = 0;
            lVar3 = local_40;
          }
          else {
            _CFDataAppendBytes(lVar6,local_110,0xa8);
            uVar4 = _CFDataGetBytePtr(uVar2);
            uVar2 = _CFDataGetLength(uVar2);
            _CFDataAppendBytes(lVar6,uVar4,uVar2);
            iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
            if ((((iVar1 == 0xe50e1) || (iVar1 == 0x1440e1)) ||
                ((iVar1 == 0x1720e1 || ((iVar1 == 0x19f0e1 || (iVar1 == 0x2af0e1)))))) ||
               (iVar1 == 0x1fe0e1)) {
              iVar1 = __AMAuthInstallMonetLocalCreateECCSignature
                                (param_1,&cf_bb_monet_rom_dbl_private,lVar6,&local_48);
              if (iVar1 == 0) {
                uVar2 = _CFDataGetBytePtr(lVar6);
                uVar4 = _CFDataGetLength(lVar6);
                lVar3 = local_40;
                _CFDataAppendBytes(local_40,uVar2,uVar4);
                uVar4 = local_48;
                uVar2 = _CFDataGetBytePtr(local_48);
                uVar5 = _CFDataGetLength(uVar4);
                _CFDataAppendBytes(lVar3,uVar2,uVar5);
                iVar1 = __AMAuthInstallMonetLocalCopyCertChain(param_1,1,&local_68);
                uVar2 = local_68;
                if (iVar1 == 0) {
                  uVar5 = _CFDataGetBytePtr(local_68);
                  uVar7 = _CFDataGetLength(uVar2);
                  _CFDataAppendBytes(lVar3,uVar5,uVar7);
                  uVar5 = _CFRetain(lVar3);
                  *local_58 = uVar5;
                  iVar1 = 0;
                }
              }
              else {
                uVar2 = 0;
                uVar4 = local_48;
                lVar3 = local_40;
              }
            }
            else {
              uVar2 = 0;
              _AMAuthInstallLog(3,"_AMAuthInstallMonetLocalCreateStitchDataMav20",
                                "unsupported chipID");
              iVar1 = 1;
              uVar4 = 0;
              lVar3 = local_40;
            }
          }
          goto LAB_00295e2b;
        }
        _AMAuthInstallLog(3,"_AMAuthInstallMonetLocalCreateStitchDataMav20","unsupported chipID");
        goto LAB_00295e29;
      }
    }
    local_38 = 0;
    uVar2 = 0;
    lVar6 = 0;
    iVar1 = 2;
    uVar4 = 0;
  }
  else {
    _AMAuthInstallLog(3,"_AMAuthInstallMonetLocalCreateStitchDataMav20","unsupported chipID");
    local_38 = 0;
    lVar3 = 0;
LAB_00295e29:
    iVar1 = 1;
    uVar2 = 0;
    lVar6 = 0;
    uVar4 = 0;
  }
LAB_00295e2b:
  _SafeRelease(0);
  _SafeRelease(local_38);
  _SafeRelease(lVar3);
  _SafeRelease(lVar6);
  _SafeRelease(uVar4);
  _SafeRelease(uVar2);
  return iVar1;
}

