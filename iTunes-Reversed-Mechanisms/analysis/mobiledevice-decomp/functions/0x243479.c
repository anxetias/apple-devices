// rea decompile_all
// name: _Img4EncodeCreateManifest
// address: 0x243479
// body: available
// range: 0x243479-0x243853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24384f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeCreateManifest
              (undefined4 param_1,code *param_2,code *param_3,code *param_4,undefined8 param_5,
              undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
              undefined8 param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  undefined4 local_6c;
  ulong local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_50;
  void *local_48;
  uint local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_6c = 0x4d344d49;
  local_78 = (void *)0x0;
  local_80 = (void *)0x0;
  local_88 = (void *)0x0;
  local_90 = (void *)0x0;
  auVar6._0_4_ = -(uint)((int)((ulong)param_2 >> 0x20) == 0 && (int)param_2 == 0);
  auVar6._4_4_ = -(uint)((int)param_3 == 0 && (int)((ulong)param_3 >> 0x20) == 0);
  auVar6._8_4_ = -(uint)(param_7._4_4_ == 0 && (int)param_7 == 0);
  auVar6._12_4_ =
       -(uint)((int)param_8 == 0 && SUB124(SUB1612((undefined1  [16])0x0,4),8) == param_8._4_4_);
  iVar1 = movmskps((int)local_38,auVar6);
  pvVar4 = (void *)0x0;
  iVar2 = 0x65;
  if (iVar1 != 0) goto LAB_00243585;
  pvVar4 = (void *)0x0;
  lVar3 = _DEREncoderCreate(0);
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar2 = 2;
    goto LAB_00243585;
  }
  pvVar4 = (void *)0x0;
  iVar2 = _DEREncoderAddData(lVar3,0,0x16,&local_6c,4,0);
  if (iVar2 != 0) goto LAB_00243585;
  pvVar4 = (void *)0x0;
  iVar2 = _DEREncoderAddUInt32(lVar3,0,2,param_1);
  if (iVar2 != 0) goto LAB_00243585;
  local_3c = 0;
  local_40 = 0;
  local_48 = (void *)0x0;
  local_50 = (void *)0x0;
  iVar2 = (*param_2)(&local_48,&local_3c,param_9);
  if (iVar2 == 100) {
    iVar2 = (*param_3)(&local_50,&local_40,param_9);
    if (iVar2 == 100) {
      uVar5 = local_3c + local_40;
      if (CARRY4(local_3c,local_40)) {
        pvVar4 = (void *)0x0;
        iVar2 = 0x6a;
      }
      else {
        pvVar4 = _calloc(1,(ulong)uVar5);
        if (pvVar4 == (void *)0x0) {
          iVar2 = 0x66;
          goto LAB_002436bd;
        }
        _memcpy(pvVar4,local_48,(ulong)local_3c);
        _memcpy((void *)((ulong)local_3c + (long)pvVar4),local_50,(ulong)local_40);
        iVar2 = _Img4EncodeDictionary(param_1,0x4d414e42,pvVar4,uVar5,&local_78,&local_54);
      }
    }
    else {
LAB_002436bd:
      pvVar4 = (void *)0x0;
    }
  }
  if (local_48 != (void *)0x0) {
    _free(local_48);
    local_48 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    _free(local_50);
    local_50 = (void *)0x0;
  }
  if (pvVar4 != (void *)0x0) {
    _free(pvVar4);
  }
  if (iVar2 == 100) {
    pvVar4 = (void *)0x0;
    iVar2 = _DEREncoderAddData(lVar3,0,0x11,local_78,local_54,1);
    if (iVar2 != 0) goto LAB_00243585;
    iVar2 = _Img4EncodeCopyFullManifestBytes(local_78,local_54,&local_88,&local_5c);
    if ((iVar2 == 100) &&
       (iVar2 = (*param_4)(param_1,local_88,local_5c,&local_90,&local_68,param_10), iVar2 == 100)) {
      pvVar4 = (void *)0x0;
      iVar2 = _DEREncoderAddData(lVar3,0,4,local_90,local_68 & 0xffffffff,0);
      if (iVar2 != 0) goto LAB_00243585;
      pvVar4 = (void *)0x0;
      iVar2 = _DEREncoderAddData(lVar3,0,0x10,param_5,param_6,1);
      if (iVar2 != 0) goto LAB_00243585;
      iVar2 = _DEREncoderCreateEncodedBuffer(lVar3,&local_80,&local_58);
      if (iVar2 == 0) {
        pvVar4 = (void *)_DEREncoderCreate(0);
        if (pvVar4 != (void *)0x0) {
          iVar2 = _DEREncoderAddData(pvVar4,0,0x10,local_80,local_58,1);
          if (iVar2 == 0) {
            iVar1 = _DEREncoderCreateEncodedBuffer(pvVar4,param_7,param_8);
            iVar2 = 100;
            if (iVar1 != 0) {
              iVar2 = iVar1;
            }
          }
          goto LAB_00243585;
        }
        iVar2 = 2;
      }
    }
  }
  pvVar4 = (void *)0x0;
LAB_00243585:
  _DEREncoderDestroy(lVar3);
  _DEREncoderDestroy(pvVar4);
  if (local_78 != (void *)0x0) {
    _free(local_78);
    local_78 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    _free(local_80);
    local_80 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    _free(local_88);
    local_88 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    _free(local_90);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

